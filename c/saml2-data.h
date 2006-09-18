/* c/saml2-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_saml2_data_h
#define _c_saml2_data_h

#include "zx.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

extern const struct zx_tok zx_attrs[];    /* gperf generated, see *-attrs.c */
extern const struct zx_tok zx_elems[];    /* gperf generated, see *-elems.c */
const struct zx_tok* zx_attr2tok(const char* s, unsigned int len);
const struct zx_tok* zx_elem2tok(const char* s, unsigned int len);
int zx_attr_lookup(struct zx_ctx* c, char* name, char* lim);
int zx_elem_lookup(struct zx_ctx* c, char* name, char* lim);
/* -------------------------- ac_ActivationLimit -------------------------- */
/* refby( zx_ac_ActivationPin_s ) */
#ifndef zx_ac_ActivationLimit_EXT
#define zx_ac_ActivationLimit_EXT
#endif

struct zx_ac_ActivationLimit_s* zx_DEC_ac_ActivationLimit(struct zx_ctx* c);
struct zx_ac_ActivationLimit_s* zx_NEW_ac_ActivationLimit(struct zx_ctx* c);
struct zx_ac_ActivationLimit_s* zx_DEEP_CLONE_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, int dup_strs);
void zx_DUP_STRS_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x);
void zx_FREE_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, int free_strs);
int zx_WALK_SO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_ActivationLimit(struct zx_ac_ActivationLimit_s* x);
char* zx_ENC_SO_ac_ActivationLimit(struct zx_ac_ActivationLimit_s* x, char* p);
char* zx_ENC_WO_ac_ActivationLimit(struct zx_ac_ActivationLimit_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_ActivationLimit(struct zx_ctx* c, struct zx_ac_ActivationLimit_s* x);

struct zx_ac_ActivationLimit_s {
  ZX_ELEM_EXT
  zx_ac_ActivationLimit_EXT
  struct zx_ac_ActivationLimitDuration_s* ActivationLimitDuration;	/* {0,1}  */
  struct zx_ac_ActivationLimitUsages_s* ActivationLimitUsages;	/* {0,1}  */
  struct zx_elem_s* ActivationLimitSession;	/* {0,1} ac:ActivationLimitSessionType */
};

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

/* -------------------------- ac_ActivationLimitDuration -------------------------- */
/* refby( zx_ac_ActivationLimit_s ) */
#ifndef zx_ac_ActivationLimitDuration_EXT
#define zx_ac_ActivationLimitDuration_EXT
#endif

struct zx_ac_ActivationLimitDuration_s* zx_DEC_ac_ActivationLimitDuration(struct zx_ctx* c);
struct zx_ac_ActivationLimitDuration_s* zx_NEW_ac_ActivationLimitDuration(struct zx_ctx* c);
struct zx_ac_ActivationLimitDuration_s* zx_DEEP_CLONE_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, int dup_strs);
void zx_DUP_STRS_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x);
void zx_FREE_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, int free_strs);
int zx_WALK_SO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_ActivationLimitDuration(struct zx_ac_ActivationLimitDuration_s* x);
char* zx_ENC_SO_ac_ActivationLimitDuration(struct zx_ac_ActivationLimitDuration_s* x, char* p);
char* zx_ENC_WO_ac_ActivationLimitDuration(struct zx_ac_ActivationLimitDuration_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_ActivationLimitDuration(struct zx_ctx* c, struct zx_ac_ActivationLimitDuration_s* x);

struct zx_ac_ActivationLimitDuration_s {
  ZX_ELEM_EXT
  zx_ac_ActivationLimitDuration_EXT
  struct zx_str_s* duration;	/* {1,1} attribute xs:duration */
};

struct zx_str_s* zx_ac_ActivationLimitDuration_GET_duration(struct zx_ac_ActivationLimitDuration_s* x);
void zx_ac_ActivationLimitDuration_PUT_duration(struct zx_ac_ActivationLimitDuration_s* x, struct zx_str_s* y);

/* -------------------------- ac_ActivationLimitUsages -------------------------- */
/* refby( zx_ac_ActivationLimit_s ) */
#ifndef zx_ac_ActivationLimitUsages_EXT
#define zx_ac_ActivationLimitUsages_EXT
#endif

struct zx_ac_ActivationLimitUsages_s* zx_DEC_ac_ActivationLimitUsages(struct zx_ctx* c);
struct zx_ac_ActivationLimitUsages_s* zx_NEW_ac_ActivationLimitUsages(struct zx_ctx* c);
struct zx_ac_ActivationLimitUsages_s* zx_DEEP_CLONE_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, int dup_strs);
void zx_DUP_STRS_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x);
void zx_FREE_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, int free_strs);
int zx_WALK_SO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_ActivationLimitUsages(struct zx_ac_ActivationLimitUsages_s* x);
char* zx_ENC_SO_ac_ActivationLimitUsages(struct zx_ac_ActivationLimitUsages_s* x, char* p);
char* zx_ENC_WO_ac_ActivationLimitUsages(struct zx_ac_ActivationLimitUsages_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_ActivationLimitUsages(struct zx_ctx* c, struct zx_ac_ActivationLimitUsages_s* x);

struct zx_ac_ActivationLimitUsages_s {
  ZX_ELEM_EXT
  zx_ac_ActivationLimitUsages_EXT
  struct zx_str_s* number;	/* {1,1} attribute xs:integer */
};

struct zx_str_s* zx_ac_ActivationLimitUsages_GET_number(struct zx_ac_ActivationLimitUsages_s* x);
void zx_ac_ActivationLimitUsages_PUT_number(struct zx_ac_ActivationLimitUsages_s* x, struct zx_str_s* y);

/* -------------------------- ac_ActivationPin -------------------------- */
/* refby( zx_ac_KeyActivation_s zx_ac_PrincipalAuthenticationMechanism_s ) */
#ifndef zx_ac_ActivationPin_EXT
#define zx_ac_ActivationPin_EXT
#endif

struct zx_ac_ActivationPin_s* zx_DEC_ac_ActivationPin(struct zx_ctx* c);
struct zx_ac_ActivationPin_s* zx_NEW_ac_ActivationPin(struct zx_ctx* c);
struct zx_ac_ActivationPin_s* zx_DEEP_CLONE_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, int dup_strs);
void zx_DUP_STRS_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x);
void zx_FREE_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, int free_strs);
int zx_WALK_SO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_ActivationPin(struct zx_ac_ActivationPin_s* x);
char* zx_ENC_SO_ac_ActivationPin(struct zx_ac_ActivationPin_s* x, char* p);
char* zx_ENC_WO_ac_ActivationPin(struct zx_ac_ActivationPin_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_ActivationPin(struct zx_ctx* c, struct zx_ac_ActivationPin_s* x);

struct zx_ac_ActivationPin_s {
  ZX_ELEM_EXT
  zx_ac_ActivationPin_EXT
  struct zx_ac_Length_s* Length;	/* {0,1} nada */
  struct zx_ac_Alphabet_s* Alphabet;	/* {0,1} nada */
  struct zx_ac_Generation_s* Generation;	/* {0,1}  */
  struct zx_ac_ActivationLimit_s* ActivationLimit;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

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

/* -------------------------- ac_Alphabet -------------------------- */
/* refby( zx_ac_Password_s zx_ac_ActivationPin_s ) */
#ifndef zx_ac_Alphabet_EXT
#define zx_ac_Alphabet_EXT
#endif

struct zx_ac_Alphabet_s* zx_DEC_ac_Alphabet(struct zx_ctx* c);
struct zx_ac_Alphabet_s* zx_NEW_ac_Alphabet(struct zx_ctx* c);
struct zx_ac_Alphabet_s* zx_DEEP_CLONE_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, int dup_strs);
void zx_DUP_STRS_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x);
void zx_FREE_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, int free_strs);
int zx_WALK_SO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Alphabet(struct zx_ac_Alphabet_s* x);
char* zx_ENC_SO_ac_Alphabet(struct zx_ac_Alphabet_s* x, char* p);
char* zx_ENC_WO_ac_Alphabet(struct zx_ac_Alphabet_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Alphabet(struct zx_ctx* c, struct zx_ac_Alphabet_s* x);

struct zx_ac_Alphabet_s {
  ZX_ELEM_EXT
  zx_ac_Alphabet_EXT
  struct zx_str_s* requiredChars;	/* {1,1} attribute xs:string */
  struct zx_str_s* excludedChars;	/* {0,1} attribute xs:string */
  struct zx_str_s* case_is_c_keyword;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_ac_Alphabet_GET_requiredChars(struct zx_ac_Alphabet_s* x);
struct zx_str_s* zx_ac_Alphabet_GET_excludedChars(struct zx_ac_Alphabet_s* x);
struct zx_str_s* zx_ac_Alphabet_GET_case_is_c_keyword(struct zx_ac_Alphabet_s* x);
void zx_ac_Alphabet_PUT_requiredChars(struct zx_ac_Alphabet_s* x, struct zx_str_s* y);
void zx_ac_Alphabet_PUT_excludedChars(struct zx_ac_Alphabet_s* x, struct zx_str_s* y);
void zx_ac_Alphabet_PUT_case_is_c_keyword(struct zx_ac_Alphabet_s* x, struct zx_str_s* y);

/* -------------------------- ac_AsymmetricDecryption -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_AsymmetricDecryption_EXT
#define zx_ac_AsymmetricDecryption_EXT
#endif

struct zx_ac_AsymmetricDecryption_s* zx_DEC_ac_AsymmetricDecryption(struct zx_ctx* c);
struct zx_ac_AsymmetricDecryption_s* zx_NEW_ac_AsymmetricDecryption(struct zx_ctx* c);
struct zx_ac_AsymmetricDecryption_s* zx_DEEP_CLONE_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, int dup_strs);
void zx_DUP_STRS_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x);
void zx_FREE_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, int free_strs);
int zx_WALK_SO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_AsymmetricDecryption(struct zx_ac_AsymmetricDecryption_s* x);
char* zx_ENC_SO_ac_AsymmetricDecryption(struct zx_ac_AsymmetricDecryption_s* x, char* p);
char* zx_ENC_WO_ac_AsymmetricDecryption(struct zx_ac_AsymmetricDecryption_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_AsymmetricDecryption(struct zx_ctx* c, struct zx_ac_AsymmetricDecryption_s* x);

struct zx_ac_AsymmetricDecryption_s {
  ZX_ELEM_EXT
  zx_ac_AsymmetricDecryption_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_AsymmetricDecryption_GET_Extension(struct zx_ac_AsymmetricDecryption_s* x, int n);
int zx_ac_AsymmetricDecryption_NUM_Extension(struct zx_ac_AsymmetricDecryption_s* x);
struct zx_ac_Extension_s* zx_ac_AsymmetricDecryption_POP_Extension(struct zx_ac_AsymmetricDecryption_s* x);
void zx_ac_AsymmetricDecryption_PUSH_Extension(struct zx_ac_AsymmetricDecryption_s* x, struct zx_ac_Extension_s* y);
void zx_ac_AsymmetricDecryption_PUT_Extension(struct zx_ac_AsymmetricDecryption_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_AsymmetricDecryption_ADD_Extension(struct zx_ac_AsymmetricDecryption_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_AsymmetricDecryption_DEL_Extension(struct zx_ac_AsymmetricDecryption_s* x, int n);
void zx_ac_AsymmetricDecryption_REV_Extension(struct zx_ac_AsymmetricDecryption_s* x);

/* -------------------------- ac_AsymmetricKeyAgreement -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_AsymmetricKeyAgreement_EXT
#define zx_ac_AsymmetricKeyAgreement_EXT
#endif

struct zx_ac_AsymmetricKeyAgreement_s* zx_DEC_ac_AsymmetricKeyAgreement(struct zx_ctx* c);
struct zx_ac_AsymmetricKeyAgreement_s* zx_NEW_ac_AsymmetricKeyAgreement(struct zx_ctx* c);
struct zx_ac_AsymmetricKeyAgreement_s* zx_DEEP_CLONE_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, int dup_strs);
void zx_DUP_STRS_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x);
void zx_FREE_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, int free_strs);
int zx_WALK_SO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_AsymmetricKeyAgreement(struct zx_ac_AsymmetricKeyAgreement_s* x);
char* zx_ENC_SO_ac_AsymmetricKeyAgreement(struct zx_ac_AsymmetricKeyAgreement_s* x, char* p);
char* zx_ENC_WO_ac_AsymmetricKeyAgreement(struct zx_ac_AsymmetricKeyAgreement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_AsymmetricKeyAgreement(struct zx_ctx* c, struct zx_ac_AsymmetricKeyAgreement_s* x);

struct zx_ac_AsymmetricKeyAgreement_s {
  ZX_ELEM_EXT
  zx_ac_AsymmetricKeyAgreement_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_AsymmetricKeyAgreement_GET_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, int n);
int zx_ac_AsymmetricKeyAgreement_NUM_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x);
struct zx_ac_Extension_s* zx_ac_AsymmetricKeyAgreement_POP_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x);
void zx_ac_AsymmetricKeyAgreement_PUSH_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, struct zx_ac_Extension_s* y);
void zx_ac_AsymmetricKeyAgreement_PUT_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_AsymmetricKeyAgreement_ADD_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_AsymmetricKeyAgreement_DEL_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x, int n);
void zx_ac_AsymmetricKeyAgreement_REV_Extension(struct zx_ac_AsymmetricKeyAgreement_s* x);

/* -------------------------- ac_AuthenticatingAuthority -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_AuthenticatingAuthority_EXT
#define zx_ac_AuthenticatingAuthority_EXT
#endif

struct zx_ac_AuthenticatingAuthority_s* zx_DEC_ac_AuthenticatingAuthority(struct zx_ctx* c);
struct zx_ac_AuthenticatingAuthority_s* zx_NEW_ac_AuthenticatingAuthority(struct zx_ctx* c);
struct zx_ac_AuthenticatingAuthority_s* zx_DEEP_CLONE_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, int dup_strs);
void zx_DUP_STRS_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x);
void zx_FREE_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, int free_strs);
int zx_WALK_SO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_AuthenticatingAuthority(struct zx_ac_AuthenticatingAuthority_s* x);
char* zx_ENC_SO_ac_AuthenticatingAuthority(struct zx_ac_AuthenticatingAuthority_s* x, char* p);
char* zx_ENC_WO_ac_AuthenticatingAuthority(struct zx_ac_AuthenticatingAuthority_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_AuthenticatingAuthority(struct zx_ctx* c, struct zx_ac_AuthenticatingAuthority_s* x);

struct zx_ac_AuthenticatingAuthority_s {
  ZX_ELEM_EXT
  zx_ac_AuthenticatingAuthority_EXT
  struct zx_ac_GoverningAgreements_s* GoverningAgreements;	/* {1,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
};

struct zx_str_s* zx_ac_AuthenticatingAuthority_GET_ID(struct zx_ac_AuthenticatingAuthority_s* x);
struct zx_ac_GoverningAgreements_s* zx_ac_AuthenticatingAuthority_GET_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, int n);
int zx_ac_AuthenticatingAuthority_NUM_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x);
struct zx_ac_GoverningAgreements_s* zx_ac_AuthenticatingAuthority_POP_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x);
void zx_ac_AuthenticatingAuthority_PUSH_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, struct zx_ac_GoverningAgreements_s* y);
void zx_ac_AuthenticatingAuthority_PUT_ID(struct zx_ac_AuthenticatingAuthority_s* x, struct zx_str_s* y);
void zx_ac_AuthenticatingAuthority_PUT_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, int n, struct zx_ac_GoverningAgreements_s* y);
void zx_ac_AuthenticatingAuthority_ADD_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, int n, struct zx_ac_GoverningAgreements_s* z);
void zx_ac_AuthenticatingAuthority_DEL_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x, int n);
void zx_ac_AuthenticatingAuthority_REV_GoverningAgreements(struct zx_ac_AuthenticatingAuthority_s* x);

/* -------------------------- ac_AuthenticationContextStatement -------------------------- */
/* refby( zx_ff12_AuthnContext_s ) */
#ifndef zx_ac_AuthenticationContextStatement_EXT
#define zx_ac_AuthenticationContextStatement_EXT
#endif

struct zx_ac_AuthenticationContextStatement_s* zx_DEC_ac_AuthenticationContextStatement(struct zx_ctx* c);
struct zx_ac_AuthenticationContextStatement_s* zx_NEW_ac_AuthenticationContextStatement(struct zx_ctx* c);
struct zx_ac_AuthenticationContextStatement_s* zx_DEEP_CLONE_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, int dup_strs);
void zx_DUP_STRS_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x);
void zx_FREE_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, int free_strs);
int zx_WALK_SO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_AuthenticationContextStatement(struct zx_ac_AuthenticationContextStatement_s* x);
char* zx_ENC_SO_ac_AuthenticationContextStatement(struct zx_ac_AuthenticationContextStatement_s* x, char* p);
char* zx_ENC_WO_ac_AuthenticationContextStatement(struct zx_ac_AuthenticationContextStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_AuthenticationContextStatement(struct zx_ctx* c, struct zx_ac_AuthenticationContextStatement_s* x);

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
  struct zx_str_s* ID;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_ac_AuthenticationContextStatement_GET_ID(struct zx_ac_AuthenticationContextStatement_s* x);
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
void zx_ac_AuthenticationContextStatement_PUT_ID(struct zx_ac_AuthenticationContextStatement_s* x, struct zx_str_s* y);
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

/* -------------------------- ac_AuthenticationMethod -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_AuthenticationMethod_EXT
#define zx_ac_AuthenticationMethod_EXT
#endif

struct zx_ac_AuthenticationMethod_s* zx_DEC_ac_AuthenticationMethod(struct zx_ctx* c);
struct zx_ac_AuthenticationMethod_s* zx_NEW_ac_AuthenticationMethod(struct zx_ctx* c);
struct zx_ac_AuthenticationMethod_s* zx_DEEP_CLONE_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, int dup_strs);
void zx_DUP_STRS_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x);
void zx_FREE_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, int free_strs);
int zx_WALK_SO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_AuthenticationMethod(struct zx_ac_AuthenticationMethod_s* x);
char* zx_ENC_SO_ac_AuthenticationMethod(struct zx_ac_AuthenticationMethod_s* x, char* p);
char* zx_ENC_WO_ac_AuthenticationMethod(struct zx_ac_AuthenticationMethod_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_AuthenticationMethod(struct zx_ctx* c, struct zx_ac_AuthenticationMethod_s* x);

struct zx_ac_AuthenticationMethod_s {
  ZX_ELEM_EXT
  zx_ac_AuthenticationMethod_EXT
  struct zx_ac_PrincipalAuthenticationMechanism_s* PrincipalAuthenticationMechanism;	/* {0,1} nada */
  struct zx_ac_Authenticator_s* Authenticator;	/* {0,1} nada */
  struct zx_ac_AuthenticatorTransportProtocol_s* AuthenticatorTransportProtocol;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

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

/* -------------------------- ac_Authenticator -------------------------- */
/* refby( zx_ac_AuthenticationMethod_s ) */
#ifndef zx_ac_Authenticator_EXT
#define zx_ac_Authenticator_EXT
#endif

struct zx_ac_Authenticator_s* zx_DEC_ac_Authenticator(struct zx_ctx* c);
struct zx_ac_Authenticator_s* zx_NEW_ac_Authenticator(struct zx_ctx* c);
struct zx_ac_Authenticator_s* zx_DEEP_CLONE_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, int dup_strs);
void zx_DUP_STRS_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x);
void zx_FREE_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, int free_strs);
int zx_WALK_SO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Authenticator(struct zx_ac_Authenticator_s* x);
char* zx_ENC_SO_ac_Authenticator(struct zx_ac_Authenticator_s* x, char* p);
char* zx_ENC_WO_ac_Authenticator(struct zx_ac_Authenticator_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Authenticator(struct zx_ctx* c, struct zx_ac_Authenticator_s* x);

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

/* -------------------------- ac_AuthenticatorTransportProtocol -------------------------- */
/* refby( zx_ac_AuthenticationMethod_s ) */
#ifndef zx_ac_AuthenticatorTransportProtocol_EXT
#define zx_ac_AuthenticatorTransportProtocol_EXT
#endif

struct zx_ac_AuthenticatorTransportProtocol_s* zx_DEC_ac_AuthenticatorTransportProtocol(struct zx_ctx* c);
struct zx_ac_AuthenticatorTransportProtocol_s* zx_NEW_ac_AuthenticatorTransportProtocol(struct zx_ctx* c);
struct zx_ac_AuthenticatorTransportProtocol_s* zx_DEEP_CLONE_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, int dup_strs);
void zx_DUP_STRS_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x);
void zx_FREE_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, int free_strs);
int zx_WALK_SO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_AuthenticatorTransportProtocol(struct zx_ac_AuthenticatorTransportProtocol_s* x);
char* zx_ENC_SO_ac_AuthenticatorTransportProtocol(struct zx_ac_AuthenticatorTransportProtocol_s* x, char* p);
char* zx_ENC_WO_ac_AuthenticatorTransportProtocol(struct zx_ac_AuthenticatorTransportProtocol_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_AuthenticatorTransportProtocol(struct zx_ctx* c, struct zx_ac_AuthenticatorTransportProtocol_s* x);

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

/* -------------------------- ac_DeactivationCallCenter -------------------------- */
/* refby( zx_ac_OperationalProtection_s ) */
#ifndef zx_ac_DeactivationCallCenter_EXT
#define zx_ac_DeactivationCallCenter_EXT
#endif

struct zx_ac_DeactivationCallCenter_s* zx_DEC_ac_DeactivationCallCenter(struct zx_ctx* c);
struct zx_ac_DeactivationCallCenter_s* zx_NEW_ac_DeactivationCallCenter(struct zx_ctx* c);
struct zx_ac_DeactivationCallCenter_s* zx_DEEP_CLONE_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, int dup_strs);
void zx_DUP_STRS_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x);
void zx_FREE_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, int free_strs);
int zx_WALK_SO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_DeactivationCallCenter(struct zx_ac_DeactivationCallCenter_s* x);
char* zx_ENC_SO_ac_DeactivationCallCenter(struct zx_ac_DeactivationCallCenter_s* x, char* p);
char* zx_ENC_WO_ac_DeactivationCallCenter(struct zx_ac_DeactivationCallCenter_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_DeactivationCallCenter(struct zx_ctx* c, struct zx_ac_DeactivationCallCenter_s* x);

struct zx_ac_DeactivationCallCenter_s {
  ZX_ELEM_EXT
  zx_ac_DeactivationCallCenter_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_DeactivationCallCenter_GET_Extension(struct zx_ac_DeactivationCallCenter_s* x, int n);
int zx_ac_DeactivationCallCenter_NUM_Extension(struct zx_ac_DeactivationCallCenter_s* x);
struct zx_ac_Extension_s* zx_ac_DeactivationCallCenter_POP_Extension(struct zx_ac_DeactivationCallCenter_s* x);
void zx_ac_DeactivationCallCenter_PUSH_Extension(struct zx_ac_DeactivationCallCenter_s* x, struct zx_ac_Extension_s* y);
void zx_ac_DeactivationCallCenter_PUT_Extension(struct zx_ac_DeactivationCallCenter_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_DeactivationCallCenter_ADD_Extension(struct zx_ac_DeactivationCallCenter_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_DeactivationCallCenter_DEL_Extension(struct zx_ac_DeactivationCallCenter_s* x, int n);
void zx_ac_DeactivationCallCenter_REV_Extension(struct zx_ac_DeactivationCallCenter_s* x);

/* -------------------------- ac_DigSig -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_DigSig_EXT
#define zx_ac_DigSig_EXT
#endif

struct zx_ac_DigSig_s* zx_DEC_ac_DigSig(struct zx_ctx* c);
struct zx_ac_DigSig_s* zx_NEW_ac_DigSig(struct zx_ctx* c);
struct zx_ac_DigSig_s* zx_DEEP_CLONE_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, int dup_strs);
void zx_DUP_STRS_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x);
void zx_FREE_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, int free_strs);
int zx_WALK_SO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_DigSig(struct zx_ac_DigSig_s* x);
char* zx_ENC_SO_ac_DigSig(struct zx_ac_DigSig_s* x, char* p);
char* zx_ENC_WO_ac_DigSig(struct zx_ac_DigSig_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_DigSig(struct zx_ctx* c, struct zx_ac_DigSig_s* x);

struct zx_ac_DigSig_s {
  ZX_ELEM_EXT
  zx_ac_DigSig_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_DigSig_GET_Extension(struct zx_ac_DigSig_s* x, int n);
int zx_ac_DigSig_NUM_Extension(struct zx_ac_DigSig_s* x);
struct zx_ac_Extension_s* zx_ac_DigSig_POP_Extension(struct zx_ac_DigSig_s* x);
void zx_ac_DigSig_PUSH_Extension(struct zx_ac_DigSig_s* x, struct zx_ac_Extension_s* y);
void zx_ac_DigSig_PUT_Extension(struct zx_ac_DigSig_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_DigSig_ADD_Extension(struct zx_ac_DigSig_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_DigSig_DEL_Extension(struct zx_ac_DigSig_s* x, int n);
void zx_ac_DigSig_REV_Extension(struct zx_ac_DigSig_s* x);

/* -------------------------- ac_Extension -------------------------- */
/* refby( zx_ac_HTTP_s zx_ac_MobileNetworkNoEncryption_s zx_ac_Token_s zx_ac_AuthenticationContextStatement_s zx_ac_WTLS_s zx_ac_IPSec_s zx_ac_SecretKeyProtection_s zx_ac_AsymmetricKeyAgreement_s zx_ac_KeyActivation_s zx_ac_TechnicalProtection_s zx_ac_Password_s zx_ac_DigSig_s zx_ac_MobileNetworkRadioEncryption_s zx_ac_PreviousSession_s zx_ac_SecurityAudit_s zx_ac_DeactivationCallCenter_s zx_ac_ZeroKnowledge_s zx_ac_ActivationPin_s zx_ac_Identification_s zx_ac_SwitchAudit_s zx_ac_SSL_s zx_ac_AuthenticatorTransportProtocol_s zx_ac_MobileNetworkEndToEndEncryption_s zx_ac_WrittenConsent_s zx_ac_ResumeSession_s zx_ac_Smartcard_s zx_ac_PrivateKeyProtection_s zx_ac_SharedSecretChallengeResponse_s zx_ac_OperationalProtection_s zx_ac_SharedSecretDynamicPlaintext_s zx_ac_AsymmetricDecryption_s zx_ac_PrincipalAuthenticationMechanism_s zx_ac_IPAddress_s zx_ac_AuthenticationMethod_s zx_ac_Authenticator_s ) */
#ifndef zx_ac_Extension_EXT
#define zx_ac_Extension_EXT
#endif

struct zx_ac_Extension_s* zx_DEC_ac_Extension(struct zx_ctx* c);
struct zx_ac_Extension_s* zx_NEW_ac_Extension(struct zx_ctx* c);
struct zx_ac_Extension_s* zx_DEEP_CLONE_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, int dup_strs);
void zx_DUP_STRS_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x);
void zx_FREE_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, int free_strs);
int zx_WALK_SO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Extension(struct zx_ac_Extension_s* x);
char* zx_ENC_SO_ac_Extension(struct zx_ac_Extension_s* x, char* p);
char* zx_ENC_WO_ac_Extension(struct zx_ac_Extension_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Extension(struct zx_ctx* c, struct zx_ac_Extension_s* x);

struct zx_ac_Extension_s {
  ZX_ELEM_EXT
  zx_ac_Extension_EXT
};


/* -------------------------- ac_Generation -------------------------- */
/* refby( zx_ac_Password_s zx_ac_ActivationPin_s ) */
#ifndef zx_ac_Generation_EXT
#define zx_ac_Generation_EXT
#endif

struct zx_ac_Generation_s* zx_DEC_ac_Generation(struct zx_ctx* c);
struct zx_ac_Generation_s* zx_NEW_ac_Generation(struct zx_ctx* c);
struct zx_ac_Generation_s* zx_DEEP_CLONE_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, int dup_strs);
void zx_DUP_STRS_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x);
void zx_FREE_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, int free_strs);
int zx_WALK_SO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Generation(struct zx_ac_Generation_s* x);
char* zx_ENC_SO_ac_Generation(struct zx_ac_Generation_s* x, char* p);
char* zx_ENC_WO_ac_Generation(struct zx_ac_Generation_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Generation(struct zx_ctx* c, struct zx_ac_Generation_s* x);

struct zx_ac_Generation_s {
  ZX_ELEM_EXT
  zx_ac_Generation_EXT
  struct zx_str_s* mechanism;	/* {1,1} attribute principalchosen */
};

struct zx_str_s* zx_ac_Generation_GET_mechanism(struct zx_ac_Generation_s* x);
void zx_ac_Generation_PUT_mechanism(struct zx_ac_Generation_s* x, struct zx_str_s* y);

/* -------------------------- ac_GoverningAgreementRef -------------------------- */
/* refby( zx_ac_GoverningAgreements_s ) */
#ifndef zx_ac_GoverningAgreementRef_EXT
#define zx_ac_GoverningAgreementRef_EXT
#endif

struct zx_ac_GoverningAgreementRef_s* zx_DEC_ac_GoverningAgreementRef(struct zx_ctx* c);
struct zx_ac_GoverningAgreementRef_s* zx_NEW_ac_GoverningAgreementRef(struct zx_ctx* c);
struct zx_ac_GoverningAgreementRef_s* zx_DEEP_CLONE_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, int dup_strs);
void zx_DUP_STRS_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x);
void zx_FREE_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, int free_strs);
int zx_WALK_SO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_GoverningAgreementRef(struct zx_ac_GoverningAgreementRef_s* x);
char* zx_ENC_SO_ac_GoverningAgreementRef(struct zx_ac_GoverningAgreementRef_s* x, char* p);
char* zx_ENC_WO_ac_GoverningAgreementRef(struct zx_ac_GoverningAgreementRef_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_GoverningAgreementRef(struct zx_ctx* c, struct zx_ac_GoverningAgreementRef_s* x);

struct zx_ac_GoverningAgreementRef_s {
  ZX_ELEM_EXT
  zx_ac_GoverningAgreementRef_EXT
  struct zx_str_s* governingAgreementRef;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ac_GoverningAgreementRef_GET_governingAgreementRef(struct zx_ac_GoverningAgreementRef_s* x);
void zx_ac_GoverningAgreementRef_PUT_governingAgreementRef(struct zx_ac_GoverningAgreementRef_s* x, struct zx_str_s* y);

/* -------------------------- ac_GoverningAgreements -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s zx_ac_AuthenticatingAuthority_s ) */
#ifndef zx_ac_GoverningAgreements_EXT
#define zx_ac_GoverningAgreements_EXT
#endif

struct zx_ac_GoverningAgreements_s* zx_DEC_ac_GoverningAgreements(struct zx_ctx* c);
struct zx_ac_GoverningAgreements_s* zx_NEW_ac_GoverningAgreements(struct zx_ctx* c);
struct zx_ac_GoverningAgreements_s* zx_DEEP_CLONE_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, int dup_strs);
void zx_DUP_STRS_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x);
void zx_FREE_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, int free_strs);
int zx_WALK_SO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_GoverningAgreements(struct zx_ac_GoverningAgreements_s* x);
char* zx_ENC_SO_ac_GoverningAgreements(struct zx_ac_GoverningAgreements_s* x, char* p);
char* zx_ENC_WO_ac_GoverningAgreements(struct zx_ac_GoverningAgreements_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_GoverningAgreements(struct zx_ctx* c, struct zx_ac_GoverningAgreements_s* x);

struct zx_ac_GoverningAgreements_s {
  ZX_ELEM_EXT
  zx_ac_GoverningAgreements_EXT
  struct zx_ac_GoverningAgreementRef_s* GoverningAgreementRef;	/* {1,-1}  */
};

struct zx_ac_GoverningAgreementRef_s* zx_ac_GoverningAgreements_GET_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, int n);
int zx_ac_GoverningAgreements_NUM_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x);
struct zx_ac_GoverningAgreementRef_s* zx_ac_GoverningAgreements_POP_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x);
void zx_ac_GoverningAgreements_PUSH_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, struct zx_ac_GoverningAgreementRef_s* y);
void zx_ac_GoverningAgreements_PUT_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, int n, struct zx_ac_GoverningAgreementRef_s* y);
void zx_ac_GoverningAgreements_ADD_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, int n, struct zx_ac_GoverningAgreementRef_s* z);
void zx_ac_GoverningAgreements_DEL_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x, int n);
void zx_ac_GoverningAgreements_REV_GoverningAgreementRef(struct zx_ac_GoverningAgreements_s* x);

/* -------------------------- ac_HTTP -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_HTTP_EXT
#define zx_ac_HTTP_EXT
#endif

struct zx_ac_HTTP_s* zx_DEC_ac_HTTP(struct zx_ctx* c);
struct zx_ac_HTTP_s* zx_NEW_ac_HTTP(struct zx_ctx* c);
struct zx_ac_HTTP_s* zx_DEEP_CLONE_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, int dup_strs);
void zx_DUP_STRS_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x);
void zx_FREE_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, int free_strs);
int zx_WALK_SO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_HTTP(struct zx_ac_HTTP_s* x);
char* zx_ENC_SO_ac_HTTP(struct zx_ac_HTTP_s* x, char* p);
char* zx_ENC_WO_ac_HTTP(struct zx_ac_HTTP_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_HTTP(struct zx_ctx* c, struct zx_ac_HTTP_s* x);

struct zx_ac_HTTP_s {
  ZX_ELEM_EXT
  zx_ac_HTTP_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_HTTP_GET_Extension(struct zx_ac_HTTP_s* x, int n);
int zx_ac_HTTP_NUM_Extension(struct zx_ac_HTTP_s* x);
struct zx_ac_Extension_s* zx_ac_HTTP_POP_Extension(struct zx_ac_HTTP_s* x);
void zx_ac_HTTP_PUSH_Extension(struct zx_ac_HTTP_s* x, struct zx_ac_Extension_s* y);
void zx_ac_HTTP_PUT_Extension(struct zx_ac_HTTP_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_HTTP_ADD_Extension(struct zx_ac_HTTP_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_HTTP_DEL_Extension(struct zx_ac_HTTP_s* x, int n);
void zx_ac_HTTP_REV_Extension(struct zx_ac_HTTP_s* x);

/* -------------------------- ac_IPAddress -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_IPAddress_EXT
#define zx_ac_IPAddress_EXT
#endif

struct zx_ac_IPAddress_s* zx_DEC_ac_IPAddress(struct zx_ctx* c);
struct zx_ac_IPAddress_s* zx_NEW_ac_IPAddress(struct zx_ctx* c);
struct zx_ac_IPAddress_s* zx_DEEP_CLONE_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, int dup_strs);
void zx_DUP_STRS_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x);
void zx_FREE_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, int free_strs);
int zx_WALK_SO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_IPAddress(struct zx_ac_IPAddress_s* x);
char* zx_ENC_SO_ac_IPAddress(struct zx_ac_IPAddress_s* x, char* p);
char* zx_ENC_WO_ac_IPAddress(struct zx_ac_IPAddress_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_IPAddress(struct zx_ctx* c, struct zx_ac_IPAddress_s* x);

struct zx_ac_IPAddress_s {
  ZX_ELEM_EXT
  zx_ac_IPAddress_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_IPAddress_GET_Extension(struct zx_ac_IPAddress_s* x, int n);
int zx_ac_IPAddress_NUM_Extension(struct zx_ac_IPAddress_s* x);
struct zx_ac_Extension_s* zx_ac_IPAddress_POP_Extension(struct zx_ac_IPAddress_s* x);
void zx_ac_IPAddress_PUSH_Extension(struct zx_ac_IPAddress_s* x, struct zx_ac_Extension_s* y);
void zx_ac_IPAddress_PUT_Extension(struct zx_ac_IPAddress_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_IPAddress_ADD_Extension(struct zx_ac_IPAddress_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_IPAddress_DEL_Extension(struct zx_ac_IPAddress_s* x, int n);
void zx_ac_IPAddress_REV_Extension(struct zx_ac_IPAddress_s* x);

/* -------------------------- ac_IPSec -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_IPSec_EXT
#define zx_ac_IPSec_EXT
#endif

struct zx_ac_IPSec_s* zx_DEC_ac_IPSec(struct zx_ctx* c);
struct zx_ac_IPSec_s* zx_NEW_ac_IPSec(struct zx_ctx* c);
struct zx_ac_IPSec_s* zx_DEEP_CLONE_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, int dup_strs);
void zx_DUP_STRS_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x);
void zx_FREE_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, int free_strs);
int zx_WALK_SO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_IPSec(struct zx_ac_IPSec_s* x);
char* zx_ENC_SO_ac_IPSec(struct zx_ac_IPSec_s* x, char* p);
char* zx_ENC_WO_ac_IPSec(struct zx_ac_IPSec_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_IPSec(struct zx_ctx* c, struct zx_ac_IPSec_s* x);

struct zx_ac_IPSec_s {
  ZX_ELEM_EXT
  zx_ac_IPSec_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_IPSec_GET_Extension(struct zx_ac_IPSec_s* x, int n);
int zx_ac_IPSec_NUM_Extension(struct zx_ac_IPSec_s* x);
struct zx_ac_Extension_s* zx_ac_IPSec_POP_Extension(struct zx_ac_IPSec_s* x);
void zx_ac_IPSec_PUSH_Extension(struct zx_ac_IPSec_s* x, struct zx_ac_Extension_s* y);
void zx_ac_IPSec_PUT_Extension(struct zx_ac_IPSec_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_IPSec_ADD_Extension(struct zx_ac_IPSec_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_IPSec_DEL_Extension(struct zx_ac_IPSec_s* x, int n);
void zx_ac_IPSec_REV_Extension(struct zx_ac_IPSec_s* x);

/* -------------------------- ac_Identification -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_Identification_EXT
#define zx_ac_Identification_EXT
#endif

struct zx_ac_Identification_s* zx_DEC_ac_Identification(struct zx_ctx* c);
struct zx_ac_Identification_s* zx_NEW_ac_Identification(struct zx_ctx* c);
struct zx_ac_Identification_s* zx_DEEP_CLONE_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, int dup_strs);
void zx_DUP_STRS_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x);
void zx_FREE_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, int free_strs);
int zx_WALK_SO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Identification(struct zx_ac_Identification_s* x);
char* zx_ENC_SO_ac_Identification(struct zx_ac_Identification_s* x, char* p);
char* zx_ENC_WO_ac_Identification(struct zx_ac_Identification_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Identification(struct zx_ctx* c, struct zx_ac_Identification_s* x);

struct zx_ac_Identification_s {
  ZX_ELEM_EXT
  zx_ac_Identification_EXT
  struct zx_ac_PhysicalVerification_s* PhysicalVerification;	/* {0,1}  */
  struct zx_ac_WrittenConsent_s* WrittenConsent;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
  struct zx_str_s* nym;	/* {0,1} attribute anonymity */
};

struct zx_str_s* zx_ac_Identification_GET_nym(struct zx_ac_Identification_s* x);
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
void zx_ac_Identification_PUT_nym(struct zx_ac_Identification_s* x, struct zx_str_s* y);
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

/* -------------------------- ac_KeyActivation -------------------------- */
/* refby( zx_ac_SecretKeyProtection_s zx_ac_PrivateKeyProtection_s ) */
#ifndef zx_ac_KeyActivation_EXT
#define zx_ac_KeyActivation_EXT
#endif

struct zx_ac_KeyActivation_s* zx_DEC_ac_KeyActivation(struct zx_ctx* c);
struct zx_ac_KeyActivation_s* zx_NEW_ac_KeyActivation(struct zx_ctx* c);
struct zx_ac_KeyActivation_s* zx_DEEP_CLONE_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, int dup_strs);
void zx_DUP_STRS_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x);
void zx_FREE_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, int free_strs);
int zx_WALK_SO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_KeyActivation(struct zx_ac_KeyActivation_s* x);
char* zx_ENC_SO_ac_KeyActivation(struct zx_ac_KeyActivation_s* x, char* p);
char* zx_ENC_WO_ac_KeyActivation(struct zx_ac_KeyActivation_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_KeyActivation(struct zx_ctx* c, struct zx_ac_KeyActivation_s* x);

struct zx_ac_KeyActivation_s {
  ZX_ELEM_EXT
  zx_ac_KeyActivation_EXT
  struct zx_ac_ActivationPin_s* ActivationPin;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {1,-1}  */
};

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

/* -------------------------- ac_KeySharing -------------------------- */
/* refby( zx_ac_PrivateKeyProtection_s ) */
#ifndef zx_ac_KeySharing_EXT
#define zx_ac_KeySharing_EXT
#endif

struct zx_ac_KeySharing_s* zx_DEC_ac_KeySharing(struct zx_ctx* c);
struct zx_ac_KeySharing_s* zx_NEW_ac_KeySharing(struct zx_ctx* c);
struct zx_ac_KeySharing_s* zx_DEEP_CLONE_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, int dup_strs);
void zx_DUP_STRS_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x);
void zx_FREE_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, int free_strs);
int zx_WALK_SO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_KeySharing(struct zx_ac_KeySharing_s* x);
char* zx_ENC_SO_ac_KeySharing(struct zx_ac_KeySharing_s* x, char* p);
char* zx_ENC_WO_ac_KeySharing(struct zx_ac_KeySharing_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_KeySharing(struct zx_ctx* c, struct zx_ac_KeySharing_s* x);

struct zx_ac_KeySharing_s {
  ZX_ELEM_EXT
  zx_ac_KeySharing_EXT
  struct zx_str_s* sharing;	/* {1,1} attribute xs:boolean */
};

struct zx_str_s* zx_ac_KeySharing_GET_sharing(struct zx_ac_KeySharing_s* x);
void zx_ac_KeySharing_PUT_sharing(struct zx_ac_KeySharing_s* x, struct zx_str_s* y);

/* -------------------------- ac_KeyStorage -------------------------- */
/* refby( zx_ac_SecretKeyProtection_s zx_ac_PrivateKeyProtection_s ) */
#ifndef zx_ac_KeyStorage_EXT
#define zx_ac_KeyStorage_EXT
#endif

struct zx_ac_KeyStorage_s* zx_DEC_ac_KeyStorage(struct zx_ctx* c);
struct zx_ac_KeyStorage_s* zx_NEW_ac_KeyStorage(struct zx_ctx* c);
struct zx_ac_KeyStorage_s* zx_DEEP_CLONE_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, int dup_strs);
void zx_DUP_STRS_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x);
void zx_FREE_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, int free_strs);
int zx_WALK_SO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_KeyStorage(struct zx_ac_KeyStorage_s* x);
char* zx_ENC_SO_ac_KeyStorage(struct zx_ac_KeyStorage_s* x, char* p);
char* zx_ENC_WO_ac_KeyStorage(struct zx_ac_KeyStorage_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_KeyStorage(struct zx_ctx* c, struct zx_ac_KeyStorage_s* x);

struct zx_ac_KeyStorage_s {
  ZX_ELEM_EXT
  zx_ac_KeyStorage_EXT
  struct zx_str_s* medium;	/* {1,1} attribute memory */
};

struct zx_str_s* zx_ac_KeyStorage_GET_medium(struct zx_ac_KeyStorage_s* x);
void zx_ac_KeyStorage_PUT_medium(struct zx_ac_KeyStorage_s* x, struct zx_str_s* y);

/* -------------------------- ac_Length -------------------------- */
/* refby( zx_ac_Password_s zx_ac_ActivationPin_s ) */
#ifndef zx_ac_Length_EXT
#define zx_ac_Length_EXT
#endif

struct zx_ac_Length_s* zx_DEC_ac_Length(struct zx_ctx* c);
struct zx_ac_Length_s* zx_NEW_ac_Length(struct zx_ctx* c);
struct zx_ac_Length_s* zx_DEEP_CLONE_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, int dup_strs);
void zx_DUP_STRS_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x);
void zx_FREE_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, int free_strs);
int zx_WALK_SO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Length(struct zx_ac_Length_s* x);
char* zx_ENC_SO_ac_Length(struct zx_ac_Length_s* x, char* p);
char* zx_ENC_WO_ac_Length(struct zx_ac_Length_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Length(struct zx_ctx* c, struct zx_ac_Length_s* x);

struct zx_ac_Length_s {
  ZX_ELEM_EXT
  zx_ac_Length_EXT
  struct zx_str_s* min;	/* {1,1} attribute xs:integer */
  struct zx_str_s* max;	/* {0,1} attribute xs:integer */
};

struct zx_str_s* zx_ac_Length_GET_min(struct zx_ac_Length_s* x);
struct zx_str_s* zx_ac_Length_GET_max(struct zx_ac_Length_s* x);
void zx_ac_Length_PUT_min(struct zx_ac_Length_s* x, struct zx_str_s* y);
void zx_ac_Length_PUT_max(struct zx_ac_Length_s* x, struct zx_str_s* y);

/* -------------------------- ac_MobileNetworkEndToEndEncryption -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_MobileNetworkEndToEndEncryption_EXT
#define zx_ac_MobileNetworkEndToEndEncryption_EXT
#endif

struct zx_ac_MobileNetworkEndToEndEncryption_s* zx_DEC_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c);
struct zx_ac_MobileNetworkEndToEndEncryption_s* zx_NEW_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c);
struct zx_ac_MobileNetworkEndToEndEncryption_s* zx_DEEP_CLONE_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int dup_strs);
void zx_DUP_STRS_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
void zx_FREE_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int free_strs);
int zx_WALK_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_MobileNetworkEndToEndEncryption(struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
char* zx_ENC_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, char* p);
char* zx_ENC_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_MobileNetworkEndToEndEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkEndToEndEncryption_s* x);

struct zx_ac_MobileNetworkEndToEndEncryption_s {
  ZX_ELEM_EXT
  zx_ac_MobileNetworkEndToEndEncryption_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_MobileNetworkEndToEndEncryption_GET_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int n);
int zx_ac_MobileNetworkEndToEndEncryption_NUM_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
struct zx_ac_Extension_s* zx_ac_MobileNetworkEndToEndEncryption_POP_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x);
void zx_ac_MobileNetworkEndToEndEncryption_PUSH_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, struct zx_ac_Extension_s* y);
void zx_ac_MobileNetworkEndToEndEncryption_PUT_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_MobileNetworkEndToEndEncryption_ADD_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_MobileNetworkEndToEndEncryption_DEL_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x, int n);
void zx_ac_MobileNetworkEndToEndEncryption_REV_Extension(struct zx_ac_MobileNetworkEndToEndEncryption_s* x);

/* -------------------------- ac_MobileNetworkNoEncryption -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_MobileNetworkNoEncryption_EXT
#define zx_ac_MobileNetworkNoEncryption_EXT
#endif

struct zx_ac_MobileNetworkNoEncryption_s* zx_DEC_ac_MobileNetworkNoEncryption(struct zx_ctx* c);
struct zx_ac_MobileNetworkNoEncryption_s* zx_NEW_ac_MobileNetworkNoEncryption(struct zx_ctx* c);
struct zx_ac_MobileNetworkNoEncryption_s* zx_DEEP_CLONE_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, int dup_strs);
void zx_DUP_STRS_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x);
void zx_FREE_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, int free_strs);
int zx_WALK_SO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_MobileNetworkNoEncryption(struct zx_ac_MobileNetworkNoEncryption_s* x);
char* zx_ENC_SO_ac_MobileNetworkNoEncryption(struct zx_ac_MobileNetworkNoEncryption_s* x, char* p);
char* zx_ENC_WO_ac_MobileNetworkNoEncryption(struct zx_ac_MobileNetworkNoEncryption_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_MobileNetworkNoEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkNoEncryption_s* x);

struct zx_ac_MobileNetworkNoEncryption_s {
  ZX_ELEM_EXT
  zx_ac_MobileNetworkNoEncryption_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_MobileNetworkNoEncryption_GET_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, int n);
int zx_ac_MobileNetworkNoEncryption_NUM_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x);
struct zx_ac_Extension_s* zx_ac_MobileNetworkNoEncryption_POP_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x);
void zx_ac_MobileNetworkNoEncryption_PUSH_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, struct zx_ac_Extension_s* y);
void zx_ac_MobileNetworkNoEncryption_PUT_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_MobileNetworkNoEncryption_ADD_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_MobileNetworkNoEncryption_DEL_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x, int n);
void zx_ac_MobileNetworkNoEncryption_REV_Extension(struct zx_ac_MobileNetworkNoEncryption_s* x);

/* -------------------------- ac_MobileNetworkRadioEncryption -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_MobileNetworkRadioEncryption_EXT
#define zx_ac_MobileNetworkRadioEncryption_EXT
#endif

struct zx_ac_MobileNetworkRadioEncryption_s* zx_DEC_ac_MobileNetworkRadioEncryption(struct zx_ctx* c);
struct zx_ac_MobileNetworkRadioEncryption_s* zx_NEW_ac_MobileNetworkRadioEncryption(struct zx_ctx* c);
struct zx_ac_MobileNetworkRadioEncryption_s* zx_DEEP_CLONE_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, int dup_strs);
void zx_DUP_STRS_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x);
void zx_FREE_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, int free_strs);
int zx_WALK_SO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_MobileNetworkRadioEncryption(struct zx_ac_MobileNetworkRadioEncryption_s* x);
char* zx_ENC_SO_ac_MobileNetworkRadioEncryption(struct zx_ac_MobileNetworkRadioEncryption_s* x, char* p);
char* zx_ENC_WO_ac_MobileNetworkRadioEncryption(struct zx_ac_MobileNetworkRadioEncryption_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_MobileNetworkRadioEncryption(struct zx_ctx* c, struct zx_ac_MobileNetworkRadioEncryption_s* x);

struct zx_ac_MobileNetworkRadioEncryption_s {
  ZX_ELEM_EXT
  zx_ac_MobileNetworkRadioEncryption_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_MobileNetworkRadioEncryption_GET_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, int n);
int zx_ac_MobileNetworkRadioEncryption_NUM_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x);
struct zx_ac_Extension_s* zx_ac_MobileNetworkRadioEncryption_POP_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x);
void zx_ac_MobileNetworkRadioEncryption_PUSH_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, struct zx_ac_Extension_s* y);
void zx_ac_MobileNetworkRadioEncryption_PUT_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_MobileNetworkRadioEncryption_ADD_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_MobileNetworkRadioEncryption_DEL_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x, int n);
void zx_ac_MobileNetworkRadioEncryption_REV_Extension(struct zx_ac_MobileNetworkRadioEncryption_s* x);

/* -------------------------- ac_OperationalProtection -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_OperationalProtection_EXT
#define zx_ac_OperationalProtection_EXT
#endif

struct zx_ac_OperationalProtection_s* zx_DEC_ac_OperationalProtection(struct zx_ctx* c);
struct zx_ac_OperationalProtection_s* zx_NEW_ac_OperationalProtection(struct zx_ctx* c);
struct zx_ac_OperationalProtection_s* zx_DEEP_CLONE_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, int dup_strs);
void zx_DUP_STRS_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x);
void zx_FREE_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, int free_strs);
int zx_WALK_SO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_OperationalProtection(struct zx_ac_OperationalProtection_s* x);
char* zx_ENC_SO_ac_OperationalProtection(struct zx_ac_OperationalProtection_s* x, char* p);
char* zx_ENC_WO_ac_OperationalProtection(struct zx_ac_OperationalProtection_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_OperationalProtection(struct zx_ctx* c, struct zx_ac_OperationalProtection_s* x);

struct zx_ac_OperationalProtection_s {
  ZX_ELEM_EXT
  zx_ac_OperationalProtection_EXT
  struct zx_ac_SecurityAudit_s* SecurityAudit;	/* {0,1} nada */
  struct zx_ac_DeactivationCallCenter_s* DeactivationCallCenter;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

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

/* -------------------------- ac_Password -------------------------- */
/* refby( zx_ac_PrincipalAuthenticationMechanism_s zx_ac_Authenticator_s ) */
#ifndef zx_ac_Password_EXT
#define zx_ac_Password_EXT
#endif

struct zx_ac_Password_s* zx_DEC_ac_Password(struct zx_ctx* c);
struct zx_ac_Password_s* zx_NEW_ac_Password(struct zx_ctx* c);
struct zx_ac_Password_s* zx_DEEP_CLONE_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, int dup_strs);
void zx_DUP_STRS_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x);
void zx_FREE_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, int free_strs);
int zx_WALK_SO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Password(struct zx_ac_Password_s* x);
char* zx_ENC_SO_ac_Password(struct zx_ac_Password_s* x, char* p);
char* zx_ENC_WO_ac_Password(struct zx_ac_Password_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Password(struct zx_ctx* c, struct zx_ac_Password_s* x);

struct zx_ac_Password_s {
  ZX_ELEM_EXT
  zx_ac_Password_EXT
  struct zx_ac_Length_s* Length;	/* {0,1} nada */
  struct zx_ac_Alphabet_s* Alphabet;	/* {0,1} nada */
  struct zx_ac_Generation_s* Generation;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

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

/* -------------------------- ac_PhysicalVerification -------------------------- */
/* refby( zx_ac_Identification_s ) */
#ifndef zx_ac_PhysicalVerification_EXT
#define zx_ac_PhysicalVerification_EXT
#endif

struct zx_ac_PhysicalVerification_s* zx_DEC_ac_PhysicalVerification(struct zx_ctx* c);
struct zx_ac_PhysicalVerification_s* zx_NEW_ac_PhysicalVerification(struct zx_ctx* c);
struct zx_ac_PhysicalVerification_s* zx_DEEP_CLONE_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, int dup_strs);
void zx_DUP_STRS_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x);
void zx_FREE_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, int free_strs);
int zx_WALK_SO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_PhysicalVerification(struct zx_ac_PhysicalVerification_s* x);
char* zx_ENC_SO_ac_PhysicalVerification(struct zx_ac_PhysicalVerification_s* x, char* p);
char* zx_ENC_WO_ac_PhysicalVerification(struct zx_ac_PhysicalVerification_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_PhysicalVerification(struct zx_ctx* c, struct zx_ac_PhysicalVerification_s* x);

struct zx_ac_PhysicalVerification_s {
  ZX_ELEM_EXT
  zx_ac_PhysicalVerification_EXT
  struct zx_str_s* credentialLevel;	/* {0,1} attribute primary */
};

struct zx_str_s* zx_ac_PhysicalVerification_GET_credentialLevel(struct zx_ac_PhysicalVerification_s* x);
void zx_ac_PhysicalVerification_PUT_credentialLevel(struct zx_ac_PhysicalVerification_s* x, struct zx_str_s* y);

/* -------------------------- ac_PreviousSession -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_PreviousSession_EXT
#define zx_ac_PreviousSession_EXT
#endif

struct zx_ac_PreviousSession_s* zx_DEC_ac_PreviousSession(struct zx_ctx* c);
struct zx_ac_PreviousSession_s* zx_NEW_ac_PreviousSession(struct zx_ctx* c);
struct zx_ac_PreviousSession_s* zx_DEEP_CLONE_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, int dup_strs);
void zx_DUP_STRS_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x);
void zx_FREE_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, int free_strs);
int zx_WALK_SO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_PreviousSession(struct zx_ac_PreviousSession_s* x);
char* zx_ENC_SO_ac_PreviousSession(struct zx_ac_PreviousSession_s* x, char* p);
char* zx_ENC_WO_ac_PreviousSession(struct zx_ac_PreviousSession_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_PreviousSession(struct zx_ctx* c, struct zx_ac_PreviousSession_s* x);

struct zx_ac_PreviousSession_s {
  ZX_ELEM_EXT
  zx_ac_PreviousSession_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_PreviousSession_GET_Extension(struct zx_ac_PreviousSession_s* x, int n);
int zx_ac_PreviousSession_NUM_Extension(struct zx_ac_PreviousSession_s* x);
struct zx_ac_Extension_s* zx_ac_PreviousSession_POP_Extension(struct zx_ac_PreviousSession_s* x);
void zx_ac_PreviousSession_PUSH_Extension(struct zx_ac_PreviousSession_s* x, struct zx_ac_Extension_s* y);
void zx_ac_PreviousSession_PUT_Extension(struct zx_ac_PreviousSession_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_PreviousSession_ADD_Extension(struct zx_ac_PreviousSession_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_PreviousSession_DEL_Extension(struct zx_ac_PreviousSession_s* x, int n);
void zx_ac_PreviousSession_REV_Extension(struct zx_ac_PreviousSession_s* x);

/* -------------------------- ac_PrincipalAuthenticationMechanism -------------------------- */
/* refby( zx_ac_AuthenticationMethod_s ) */
#ifndef zx_ac_PrincipalAuthenticationMechanism_EXT
#define zx_ac_PrincipalAuthenticationMechanism_EXT
#endif

struct zx_ac_PrincipalAuthenticationMechanism_s* zx_DEC_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c);
struct zx_ac_PrincipalAuthenticationMechanism_s* zx_NEW_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c);
struct zx_ac_PrincipalAuthenticationMechanism_s* zx_DEEP_CLONE_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, int dup_strs);
void zx_DUP_STRS_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x);
void zx_FREE_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, int free_strs);
int zx_WALK_SO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_PrincipalAuthenticationMechanism(struct zx_ac_PrincipalAuthenticationMechanism_s* x);
char* zx_ENC_SO_ac_PrincipalAuthenticationMechanism(struct zx_ac_PrincipalAuthenticationMechanism_s* x, char* p);
char* zx_ENC_WO_ac_PrincipalAuthenticationMechanism(struct zx_ac_PrincipalAuthenticationMechanism_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_PrincipalAuthenticationMechanism(struct zx_ctx* c, struct zx_ac_PrincipalAuthenticationMechanism_s* x);

struct zx_ac_PrincipalAuthenticationMechanism_s {
  ZX_ELEM_EXT
  zx_ac_PrincipalAuthenticationMechanism_EXT
  struct zx_ac_Password_s* Password;	/* {0,1} nada */
  struct zx_ac_Token_s* Token;	/* {0,1} nada */
  struct zx_ac_Smartcard_s* Smartcard;	/* {0,1}  */
  struct zx_ac_ActivationPin_s* ActivationPin;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {1,-1}  */
};

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

/* -------------------------- ac_PrivateKeyProtection -------------------------- */
/* refby( zx_ac_TechnicalProtection_s ) */
#ifndef zx_ac_PrivateKeyProtection_EXT
#define zx_ac_PrivateKeyProtection_EXT
#endif

struct zx_ac_PrivateKeyProtection_s* zx_DEC_ac_PrivateKeyProtection(struct zx_ctx* c);
struct zx_ac_PrivateKeyProtection_s* zx_NEW_ac_PrivateKeyProtection(struct zx_ctx* c);
struct zx_ac_PrivateKeyProtection_s* zx_DEEP_CLONE_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, int dup_strs);
void zx_DUP_STRS_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x);
void zx_FREE_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, int free_strs);
int zx_WALK_SO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_PrivateKeyProtection(struct zx_ac_PrivateKeyProtection_s* x);
char* zx_ENC_SO_ac_PrivateKeyProtection(struct zx_ac_PrivateKeyProtection_s* x, char* p);
char* zx_ENC_WO_ac_PrivateKeyProtection(struct zx_ac_PrivateKeyProtection_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_PrivateKeyProtection(struct zx_ctx* c, struct zx_ac_PrivateKeyProtection_s* x);

struct zx_ac_PrivateKeyProtection_s {
  ZX_ELEM_EXT
  zx_ac_PrivateKeyProtection_EXT
  struct zx_ac_KeyActivation_s* KeyActivation;	/* {0,1} nada */
  struct zx_ac_KeyStorage_s* KeyStorage;	/* {0,1}  */
  struct zx_ac_KeySharing_s* KeySharing;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

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

/* -------------------------- ac_ResumeSession -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_ResumeSession_EXT
#define zx_ac_ResumeSession_EXT
#endif

struct zx_ac_ResumeSession_s* zx_DEC_ac_ResumeSession(struct zx_ctx* c);
struct zx_ac_ResumeSession_s* zx_NEW_ac_ResumeSession(struct zx_ctx* c);
struct zx_ac_ResumeSession_s* zx_DEEP_CLONE_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, int dup_strs);
void zx_DUP_STRS_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x);
void zx_FREE_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, int free_strs);
int zx_WALK_SO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_ResumeSession(struct zx_ac_ResumeSession_s* x);
char* zx_ENC_SO_ac_ResumeSession(struct zx_ac_ResumeSession_s* x, char* p);
char* zx_ENC_WO_ac_ResumeSession(struct zx_ac_ResumeSession_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_ResumeSession(struct zx_ctx* c, struct zx_ac_ResumeSession_s* x);

struct zx_ac_ResumeSession_s {
  ZX_ELEM_EXT
  zx_ac_ResumeSession_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_ResumeSession_GET_Extension(struct zx_ac_ResumeSession_s* x, int n);
int zx_ac_ResumeSession_NUM_Extension(struct zx_ac_ResumeSession_s* x);
struct zx_ac_Extension_s* zx_ac_ResumeSession_POP_Extension(struct zx_ac_ResumeSession_s* x);
void zx_ac_ResumeSession_PUSH_Extension(struct zx_ac_ResumeSession_s* x, struct zx_ac_Extension_s* y);
void zx_ac_ResumeSession_PUT_Extension(struct zx_ac_ResumeSession_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_ResumeSession_ADD_Extension(struct zx_ac_ResumeSession_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_ResumeSession_DEL_Extension(struct zx_ac_ResumeSession_s* x, int n);
void zx_ac_ResumeSession_REV_Extension(struct zx_ac_ResumeSession_s* x);

/* -------------------------- ac_SSL -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_SSL_EXT
#define zx_ac_SSL_EXT
#endif

struct zx_ac_SSL_s* zx_DEC_ac_SSL(struct zx_ctx* c);
struct zx_ac_SSL_s* zx_NEW_ac_SSL(struct zx_ctx* c);
struct zx_ac_SSL_s* zx_DEEP_CLONE_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, int dup_strs);
void zx_DUP_STRS_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x);
void zx_FREE_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, int free_strs);
int zx_WALK_SO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_SSL(struct zx_ac_SSL_s* x);
char* zx_ENC_SO_ac_SSL(struct zx_ac_SSL_s* x, char* p);
char* zx_ENC_WO_ac_SSL(struct zx_ac_SSL_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_SSL(struct zx_ctx* c, struct zx_ac_SSL_s* x);

struct zx_ac_SSL_s {
  ZX_ELEM_EXT
  zx_ac_SSL_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_SSL_GET_Extension(struct zx_ac_SSL_s* x, int n);
int zx_ac_SSL_NUM_Extension(struct zx_ac_SSL_s* x);
struct zx_ac_Extension_s* zx_ac_SSL_POP_Extension(struct zx_ac_SSL_s* x);
void zx_ac_SSL_PUSH_Extension(struct zx_ac_SSL_s* x, struct zx_ac_Extension_s* y);
void zx_ac_SSL_PUT_Extension(struct zx_ac_SSL_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_SSL_ADD_Extension(struct zx_ac_SSL_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_SSL_DEL_Extension(struct zx_ac_SSL_s* x, int n);
void zx_ac_SSL_REV_Extension(struct zx_ac_SSL_s* x);

/* -------------------------- ac_SecretKeyProtection -------------------------- */
/* refby( zx_ac_TechnicalProtection_s ) */
#ifndef zx_ac_SecretKeyProtection_EXT
#define zx_ac_SecretKeyProtection_EXT
#endif

struct zx_ac_SecretKeyProtection_s* zx_DEC_ac_SecretKeyProtection(struct zx_ctx* c);
struct zx_ac_SecretKeyProtection_s* zx_NEW_ac_SecretKeyProtection(struct zx_ctx* c);
struct zx_ac_SecretKeyProtection_s* zx_DEEP_CLONE_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, int dup_strs);
void zx_DUP_STRS_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x);
void zx_FREE_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, int free_strs);
int zx_WALK_SO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_SecretKeyProtection(struct zx_ac_SecretKeyProtection_s* x);
char* zx_ENC_SO_ac_SecretKeyProtection(struct zx_ac_SecretKeyProtection_s* x, char* p);
char* zx_ENC_WO_ac_SecretKeyProtection(struct zx_ac_SecretKeyProtection_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_SecretKeyProtection(struct zx_ctx* c, struct zx_ac_SecretKeyProtection_s* x);

struct zx_ac_SecretKeyProtection_s {
  ZX_ELEM_EXT
  zx_ac_SecretKeyProtection_EXT
  struct zx_ac_KeyActivation_s* KeyActivation;	/* {0,1} nada */
  struct zx_ac_KeyStorage_s* KeyStorage;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {1,-1}  */
};

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

/* -------------------------- ac_SecurityAudit -------------------------- */
/* refby( zx_ac_OperationalProtection_s ) */
#ifndef zx_ac_SecurityAudit_EXT
#define zx_ac_SecurityAudit_EXT
#endif

struct zx_ac_SecurityAudit_s* zx_DEC_ac_SecurityAudit(struct zx_ctx* c);
struct zx_ac_SecurityAudit_s* zx_NEW_ac_SecurityAudit(struct zx_ctx* c);
struct zx_ac_SecurityAudit_s* zx_DEEP_CLONE_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, int dup_strs);
void zx_DUP_STRS_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x);
void zx_FREE_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, int free_strs);
int zx_WALK_SO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_SecurityAudit(struct zx_ac_SecurityAudit_s* x);
char* zx_ENC_SO_ac_SecurityAudit(struct zx_ac_SecurityAudit_s* x, char* p);
char* zx_ENC_WO_ac_SecurityAudit(struct zx_ac_SecurityAudit_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_SecurityAudit(struct zx_ctx* c, struct zx_ac_SecurityAudit_s* x);

struct zx_ac_SecurityAudit_s {
  ZX_ELEM_EXT
  zx_ac_SecurityAudit_EXT
  struct zx_ac_SwitchAudit_s* SwitchAudit;	/* {0,1}  */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

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

/* -------------------------- ac_SharedSecretChallengeResponse -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_SharedSecretChallengeResponse_EXT
#define zx_ac_SharedSecretChallengeResponse_EXT
#endif

struct zx_ac_SharedSecretChallengeResponse_s* zx_DEC_ac_SharedSecretChallengeResponse(struct zx_ctx* c);
struct zx_ac_SharedSecretChallengeResponse_s* zx_NEW_ac_SharedSecretChallengeResponse(struct zx_ctx* c);
struct zx_ac_SharedSecretChallengeResponse_s* zx_DEEP_CLONE_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, int dup_strs);
void zx_DUP_STRS_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x);
void zx_FREE_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, int free_strs);
int zx_WALK_SO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_SharedSecretChallengeResponse(struct zx_ac_SharedSecretChallengeResponse_s* x);
char* zx_ENC_SO_ac_SharedSecretChallengeResponse(struct zx_ac_SharedSecretChallengeResponse_s* x, char* p);
char* zx_ENC_WO_ac_SharedSecretChallengeResponse(struct zx_ac_SharedSecretChallengeResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_SharedSecretChallengeResponse(struct zx_ctx* c, struct zx_ac_SharedSecretChallengeResponse_s* x);

struct zx_ac_SharedSecretChallengeResponse_s {
  ZX_ELEM_EXT
  zx_ac_SharedSecretChallengeResponse_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_SharedSecretChallengeResponse_GET_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, int n);
int zx_ac_SharedSecretChallengeResponse_NUM_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x);
struct zx_ac_Extension_s* zx_ac_SharedSecretChallengeResponse_POP_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x);
void zx_ac_SharedSecretChallengeResponse_PUSH_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, struct zx_ac_Extension_s* y);
void zx_ac_SharedSecretChallengeResponse_PUT_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_SharedSecretChallengeResponse_ADD_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_SharedSecretChallengeResponse_DEL_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x, int n);
void zx_ac_SharedSecretChallengeResponse_REV_Extension(struct zx_ac_SharedSecretChallengeResponse_s* x);

/* -------------------------- ac_SharedSecretDynamicPlaintext -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_SharedSecretDynamicPlaintext_EXT
#define zx_ac_SharedSecretDynamicPlaintext_EXT
#endif

struct zx_ac_SharedSecretDynamicPlaintext_s* zx_DEC_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c);
struct zx_ac_SharedSecretDynamicPlaintext_s* zx_NEW_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c);
struct zx_ac_SharedSecretDynamicPlaintext_s* zx_DEEP_CLONE_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, int dup_strs);
void zx_DUP_STRS_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x);
void zx_FREE_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, int free_strs);
int zx_WALK_SO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_SharedSecretDynamicPlaintext(struct zx_ac_SharedSecretDynamicPlaintext_s* x);
char* zx_ENC_SO_ac_SharedSecretDynamicPlaintext(struct zx_ac_SharedSecretDynamicPlaintext_s* x, char* p);
char* zx_ENC_WO_ac_SharedSecretDynamicPlaintext(struct zx_ac_SharedSecretDynamicPlaintext_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_SharedSecretDynamicPlaintext(struct zx_ctx* c, struct zx_ac_SharedSecretDynamicPlaintext_s* x);

struct zx_ac_SharedSecretDynamicPlaintext_s {
  ZX_ELEM_EXT
  zx_ac_SharedSecretDynamicPlaintext_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_SharedSecretDynamicPlaintext_GET_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, int n);
int zx_ac_SharedSecretDynamicPlaintext_NUM_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x);
struct zx_ac_Extension_s* zx_ac_SharedSecretDynamicPlaintext_POP_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x);
void zx_ac_SharedSecretDynamicPlaintext_PUSH_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, struct zx_ac_Extension_s* y);
void zx_ac_SharedSecretDynamicPlaintext_PUT_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_SharedSecretDynamicPlaintext_ADD_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_SharedSecretDynamicPlaintext_DEL_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x, int n);
void zx_ac_SharedSecretDynamicPlaintext_REV_Extension(struct zx_ac_SharedSecretDynamicPlaintext_s* x);

/* -------------------------- ac_Smartcard -------------------------- */
/* refby( zx_ac_PrincipalAuthenticationMechanism_s ) */
#ifndef zx_ac_Smartcard_EXT
#define zx_ac_Smartcard_EXT
#endif

struct zx_ac_Smartcard_s* zx_DEC_ac_Smartcard(struct zx_ctx* c);
struct zx_ac_Smartcard_s* zx_NEW_ac_Smartcard(struct zx_ctx* c);
struct zx_ac_Smartcard_s* zx_DEEP_CLONE_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, int dup_strs);
void zx_DUP_STRS_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x);
void zx_FREE_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, int free_strs);
int zx_WALK_SO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Smartcard(struct zx_ac_Smartcard_s* x);
char* zx_ENC_SO_ac_Smartcard(struct zx_ac_Smartcard_s* x, char* p);
char* zx_ENC_WO_ac_Smartcard(struct zx_ac_Smartcard_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Smartcard(struct zx_ctx* c, struct zx_ac_Smartcard_s* x);

struct zx_ac_Smartcard_s {
  ZX_ELEM_EXT
  zx_ac_Smartcard_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_Smartcard_GET_Extension(struct zx_ac_Smartcard_s* x, int n);
int zx_ac_Smartcard_NUM_Extension(struct zx_ac_Smartcard_s* x);
struct zx_ac_Extension_s* zx_ac_Smartcard_POP_Extension(struct zx_ac_Smartcard_s* x);
void zx_ac_Smartcard_PUSH_Extension(struct zx_ac_Smartcard_s* x, struct zx_ac_Extension_s* y);
void zx_ac_Smartcard_PUT_Extension(struct zx_ac_Smartcard_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_Smartcard_ADD_Extension(struct zx_ac_Smartcard_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_Smartcard_DEL_Extension(struct zx_ac_Smartcard_s* x, int n);
void zx_ac_Smartcard_REV_Extension(struct zx_ac_Smartcard_s* x);

/* -------------------------- ac_SwitchAudit -------------------------- */
/* refby( zx_ac_SecurityAudit_s ) */
#ifndef zx_ac_SwitchAudit_EXT
#define zx_ac_SwitchAudit_EXT
#endif

struct zx_ac_SwitchAudit_s* zx_DEC_ac_SwitchAudit(struct zx_ctx* c);
struct zx_ac_SwitchAudit_s* zx_NEW_ac_SwitchAudit(struct zx_ctx* c);
struct zx_ac_SwitchAudit_s* zx_DEEP_CLONE_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, int dup_strs);
void zx_DUP_STRS_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x);
void zx_FREE_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, int free_strs);
int zx_WALK_SO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_SwitchAudit(struct zx_ac_SwitchAudit_s* x);
char* zx_ENC_SO_ac_SwitchAudit(struct zx_ac_SwitchAudit_s* x, char* p);
char* zx_ENC_WO_ac_SwitchAudit(struct zx_ac_SwitchAudit_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_SwitchAudit(struct zx_ctx* c, struct zx_ac_SwitchAudit_s* x);

struct zx_ac_SwitchAudit_s {
  ZX_ELEM_EXT
  zx_ac_SwitchAudit_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_SwitchAudit_GET_Extension(struct zx_ac_SwitchAudit_s* x, int n);
int zx_ac_SwitchAudit_NUM_Extension(struct zx_ac_SwitchAudit_s* x);
struct zx_ac_Extension_s* zx_ac_SwitchAudit_POP_Extension(struct zx_ac_SwitchAudit_s* x);
void zx_ac_SwitchAudit_PUSH_Extension(struct zx_ac_SwitchAudit_s* x, struct zx_ac_Extension_s* y);
void zx_ac_SwitchAudit_PUT_Extension(struct zx_ac_SwitchAudit_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_SwitchAudit_ADD_Extension(struct zx_ac_SwitchAudit_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_SwitchAudit_DEL_Extension(struct zx_ac_SwitchAudit_s* x, int n);
void zx_ac_SwitchAudit_REV_Extension(struct zx_ac_SwitchAudit_s* x);

/* -------------------------- ac_TechnicalProtection -------------------------- */
/* refby( zx_ac_AuthenticationContextStatement_s ) */
#ifndef zx_ac_TechnicalProtection_EXT
#define zx_ac_TechnicalProtection_EXT
#endif

struct zx_ac_TechnicalProtection_s* zx_DEC_ac_TechnicalProtection(struct zx_ctx* c);
struct zx_ac_TechnicalProtection_s* zx_NEW_ac_TechnicalProtection(struct zx_ctx* c);
struct zx_ac_TechnicalProtection_s* zx_DEEP_CLONE_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, int dup_strs);
void zx_DUP_STRS_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x);
void zx_FREE_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, int free_strs);
int zx_WALK_SO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_TechnicalProtection(struct zx_ac_TechnicalProtection_s* x);
char* zx_ENC_SO_ac_TechnicalProtection(struct zx_ac_TechnicalProtection_s* x, char* p);
char* zx_ENC_WO_ac_TechnicalProtection(struct zx_ac_TechnicalProtection_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_TechnicalProtection(struct zx_ctx* c, struct zx_ac_TechnicalProtection_s* x);

struct zx_ac_TechnicalProtection_s {
  ZX_ELEM_EXT
  zx_ac_TechnicalProtection_EXT
  struct zx_ac_PrivateKeyProtection_s* PrivateKeyProtection;	/* {0,1} nada */
  struct zx_ac_SecretKeyProtection_s* SecretKeyProtection;	/* {0,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

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

/* -------------------------- ac_TimeSyncToken -------------------------- */
/* refby( zx_ac_Token_s ) */
#ifndef zx_ac_TimeSyncToken_EXT
#define zx_ac_TimeSyncToken_EXT
#endif

struct zx_ac_TimeSyncToken_s* zx_DEC_ac_TimeSyncToken(struct zx_ctx* c);
struct zx_ac_TimeSyncToken_s* zx_NEW_ac_TimeSyncToken(struct zx_ctx* c);
struct zx_ac_TimeSyncToken_s* zx_DEEP_CLONE_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, int dup_strs);
void zx_DUP_STRS_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x);
void zx_FREE_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, int free_strs);
int zx_WALK_SO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_TimeSyncToken(struct zx_ac_TimeSyncToken_s* x);
char* zx_ENC_SO_ac_TimeSyncToken(struct zx_ac_TimeSyncToken_s* x, char* p);
char* zx_ENC_WO_ac_TimeSyncToken(struct zx_ac_TimeSyncToken_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_TimeSyncToken(struct zx_ctx* c, struct zx_ac_TimeSyncToken_s* x);

struct zx_ac_TimeSyncToken_s {
  ZX_ELEM_EXT
  zx_ac_TimeSyncToken_EXT
  struct zx_str_s* DeviceType;	/* {1,1} attribute hardware */
  struct zx_str_s* SeedLength;	/* {1,1} attribute xs:integer */
  struct zx_str_s* DeviceInHand;	/* {1,1} attribute true */
};

struct zx_str_s* zx_ac_TimeSyncToken_GET_DeviceType(struct zx_ac_TimeSyncToken_s* x);
struct zx_str_s* zx_ac_TimeSyncToken_GET_SeedLength(struct zx_ac_TimeSyncToken_s* x);
struct zx_str_s* zx_ac_TimeSyncToken_GET_DeviceInHand(struct zx_ac_TimeSyncToken_s* x);
void zx_ac_TimeSyncToken_PUT_DeviceType(struct zx_ac_TimeSyncToken_s* x, struct zx_str_s* y);
void zx_ac_TimeSyncToken_PUT_SeedLength(struct zx_ac_TimeSyncToken_s* x, struct zx_str_s* y);
void zx_ac_TimeSyncToken_PUT_DeviceInHand(struct zx_ac_TimeSyncToken_s* x, struct zx_str_s* y);

/* -------------------------- ac_Token -------------------------- */
/* refby( zx_ac_PrincipalAuthenticationMechanism_s ) */
#ifndef zx_ac_Token_EXT
#define zx_ac_Token_EXT
#endif

struct zx_ac_Token_s* zx_DEC_ac_Token(struct zx_ctx* c);
struct zx_ac_Token_s* zx_NEW_ac_Token(struct zx_ctx* c);
struct zx_ac_Token_s* zx_DEEP_CLONE_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, int dup_strs);
void zx_DUP_STRS_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x);
void zx_FREE_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, int free_strs);
int zx_WALK_SO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_Token(struct zx_ac_Token_s* x);
char* zx_ENC_SO_ac_Token(struct zx_ac_Token_s* x, char* p);
char* zx_ENC_WO_ac_Token(struct zx_ac_Token_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_Token(struct zx_ctx* c, struct zx_ac_Token_s* x);

struct zx_ac_Token_s {
  ZX_ELEM_EXT
  zx_ac_Token_EXT
  struct zx_ac_TimeSyncToken_s* TimeSyncToken;	/* {1,1} nada */
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

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

/* -------------------------- ac_WTLS -------------------------- */
/* refby( zx_ac_AuthenticatorTransportProtocol_s ) */
#ifndef zx_ac_WTLS_EXT
#define zx_ac_WTLS_EXT
#endif

struct zx_ac_WTLS_s* zx_DEC_ac_WTLS(struct zx_ctx* c);
struct zx_ac_WTLS_s* zx_NEW_ac_WTLS(struct zx_ctx* c);
struct zx_ac_WTLS_s* zx_DEEP_CLONE_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, int dup_strs);
void zx_DUP_STRS_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x);
void zx_FREE_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, int free_strs);
int zx_WALK_SO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_WTLS(struct zx_ac_WTLS_s* x);
char* zx_ENC_SO_ac_WTLS(struct zx_ac_WTLS_s* x, char* p);
char* zx_ENC_WO_ac_WTLS(struct zx_ac_WTLS_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_WTLS(struct zx_ctx* c, struct zx_ac_WTLS_s* x);

struct zx_ac_WTLS_s {
  ZX_ELEM_EXT
  zx_ac_WTLS_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_WTLS_GET_Extension(struct zx_ac_WTLS_s* x, int n);
int zx_ac_WTLS_NUM_Extension(struct zx_ac_WTLS_s* x);
struct zx_ac_Extension_s* zx_ac_WTLS_POP_Extension(struct zx_ac_WTLS_s* x);
void zx_ac_WTLS_PUSH_Extension(struct zx_ac_WTLS_s* x, struct zx_ac_Extension_s* y);
void zx_ac_WTLS_PUT_Extension(struct zx_ac_WTLS_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_WTLS_ADD_Extension(struct zx_ac_WTLS_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_WTLS_DEL_Extension(struct zx_ac_WTLS_s* x, int n);
void zx_ac_WTLS_REV_Extension(struct zx_ac_WTLS_s* x);

/* -------------------------- ac_WrittenConsent -------------------------- */
/* refby( zx_ac_Identification_s ) */
#ifndef zx_ac_WrittenConsent_EXT
#define zx_ac_WrittenConsent_EXT
#endif

struct zx_ac_WrittenConsent_s* zx_DEC_ac_WrittenConsent(struct zx_ctx* c);
struct zx_ac_WrittenConsent_s* zx_NEW_ac_WrittenConsent(struct zx_ctx* c);
struct zx_ac_WrittenConsent_s* zx_DEEP_CLONE_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, int dup_strs);
void zx_DUP_STRS_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x);
void zx_FREE_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, int free_strs);
int zx_WALK_SO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_WrittenConsent(struct zx_ac_WrittenConsent_s* x);
char* zx_ENC_SO_ac_WrittenConsent(struct zx_ac_WrittenConsent_s* x, char* p);
char* zx_ENC_WO_ac_WrittenConsent(struct zx_ac_WrittenConsent_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_WrittenConsent(struct zx_ctx* c, struct zx_ac_WrittenConsent_s* x);

struct zx_ac_WrittenConsent_s {
  ZX_ELEM_EXT
  zx_ac_WrittenConsent_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_WrittenConsent_GET_Extension(struct zx_ac_WrittenConsent_s* x, int n);
int zx_ac_WrittenConsent_NUM_Extension(struct zx_ac_WrittenConsent_s* x);
struct zx_ac_Extension_s* zx_ac_WrittenConsent_POP_Extension(struct zx_ac_WrittenConsent_s* x);
void zx_ac_WrittenConsent_PUSH_Extension(struct zx_ac_WrittenConsent_s* x, struct zx_ac_Extension_s* y);
void zx_ac_WrittenConsent_PUT_Extension(struct zx_ac_WrittenConsent_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_WrittenConsent_ADD_Extension(struct zx_ac_WrittenConsent_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_WrittenConsent_DEL_Extension(struct zx_ac_WrittenConsent_s* x, int n);
void zx_ac_WrittenConsent_REV_Extension(struct zx_ac_WrittenConsent_s* x);

/* -------------------------- ac_ZeroKnowledge -------------------------- */
/* refby( zx_ac_Authenticator_s ) */
#ifndef zx_ac_ZeroKnowledge_EXT
#define zx_ac_ZeroKnowledge_EXT
#endif

struct zx_ac_ZeroKnowledge_s* zx_DEC_ac_ZeroKnowledge(struct zx_ctx* c);
struct zx_ac_ZeroKnowledge_s* zx_NEW_ac_ZeroKnowledge(struct zx_ctx* c);
struct zx_ac_ZeroKnowledge_s* zx_DEEP_CLONE_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, int dup_strs);
void zx_DUP_STRS_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x);
void zx_FREE_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, int free_strs);
int zx_WALK_SO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ac_ZeroKnowledge(struct zx_ac_ZeroKnowledge_s* x);
char* zx_ENC_SO_ac_ZeroKnowledge(struct zx_ac_ZeroKnowledge_s* x, char* p);
char* zx_ENC_WO_ac_ZeroKnowledge(struct zx_ac_ZeroKnowledge_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ac_ZeroKnowledge(struct zx_ctx* c, struct zx_ac_ZeroKnowledge_s* x);

struct zx_ac_ZeroKnowledge_s {
  ZX_ELEM_EXT
  zx_ac_ZeroKnowledge_EXT
  struct zx_ac_Extension_s* Extension;	/* {0,-1}  */
};

struct zx_ac_Extension_s* zx_ac_ZeroKnowledge_GET_Extension(struct zx_ac_ZeroKnowledge_s* x, int n);
int zx_ac_ZeroKnowledge_NUM_Extension(struct zx_ac_ZeroKnowledge_s* x);
struct zx_ac_Extension_s* zx_ac_ZeroKnowledge_POP_Extension(struct zx_ac_ZeroKnowledge_s* x);
void zx_ac_ZeroKnowledge_PUSH_Extension(struct zx_ac_ZeroKnowledge_s* x, struct zx_ac_Extension_s* y);
void zx_ac_ZeroKnowledge_PUT_Extension(struct zx_ac_ZeroKnowledge_s* x, int n, struct zx_ac_Extension_s* y);
void zx_ac_ZeroKnowledge_ADD_Extension(struct zx_ac_ZeroKnowledge_s* x, int n, struct zx_ac_Extension_s* z);
void zx_ac_ZeroKnowledge_DEL_Extension(struct zx_ac_ZeroKnowledge_s* x, int n);
void zx_ac_ZeroKnowledge_REV_Extension(struct zx_ac_ZeroKnowledge_s* x);

/* -------------------------- ds_CanonicalizationMethod -------------------------- */
/* refby( zx_ds_SignedInfo_s ) */
#ifndef zx_ds_CanonicalizationMethod_EXT
#define zx_ds_CanonicalizationMethod_EXT
#endif

struct zx_ds_CanonicalizationMethod_s* zx_DEC_ds_CanonicalizationMethod(struct zx_ctx* c);
struct zx_ds_CanonicalizationMethod_s* zx_NEW_ds_CanonicalizationMethod(struct zx_ctx* c);
struct zx_ds_CanonicalizationMethod_s* zx_DEEP_CLONE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, int dup_strs);
void zx_DUP_STRS_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x);
void zx_FREE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, int free_strs);
int zx_WALK_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_CanonicalizationMethod(struct zx_ds_CanonicalizationMethod_s* x);
char* zx_ENC_SO_ds_CanonicalizationMethod(struct zx_ds_CanonicalizationMethod_s* x, char* p);
char* zx_ENC_WO_ds_CanonicalizationMethod(struct zx_ds_CanonicalizationMethod_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x);

struct zx_ds_CanonicalizationMethod_s {
  ZX_ELEM_EXT
  zx_ds_CanonicalizationMethod_EXT
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ds_CanonicalizationMethod_GET_Algorithm(struct zx_ds_CanonicalizationMethod_s* x);
void zx_ds_CanonicalizationMethod_PUT_Algorithm(struct zx_ds_CanonicalizationMethod_s* x, struct zx_str_s* y);

/* -------------------------- ds_DSAKeyValue -------------------------- */
/* refby( zx_ds_KeyValue_s ) */
#ifndef zx_ds_DSAKeyValue_EXT
#define zx_ds_DSAKeyValue_EXT
#endif

struct zx_ds_DSAKeyValue_s* zx_DEC_ds_DSAKeyValue(struct zx_ctx* c);
struct zx_ds_DSAKeyValue_s* zx_NEW_ds_DSAKeyValue(struct zx_ctx* c);
struct zx_ds_DSAKeyValue_s* zx_DEEP_CLONE_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, int dup_strs);
void zx_DUP_STRS_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x);
void zx_FREE_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, int free_strs);
int zx_WALK_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_DSAKeyValue(struct zx_ds_DSAKeyValue_s* x);
char* zx_ENC_SO_ds_DSAKeyValue(struct zx_ds_DSAKeyValue_s* x, char* p);
char* zx_ENC_WO_ds_DSAKeyValue(struct zx_ds_DSAKeyValue_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x);

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

/* -------------------------- ds_DigestMethod -------------------------- */
/* refby( zx_ds_Reference_s ) */
#ifndef zx_ds_DigestMethod_EXT
#define zx_ds_DigestMethod_EXT
#endif

struct zx_ds_DigestMethod_s* zx_DEC_ds_DigestMethod(struct zx_ctx* c);
struct zx_ds_DigestMethod_s* zx_NEW_ds_DigestMethod(struct zx_ctx* c);
struct zx_ds_DigestMethod_s* zx_DEEP_CLONE_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, int dup_strs);
void zx_DUP_STRS_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x);
void zx_FREE_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, int free_strs);
int zx_WALK_SO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_DigestMethod(struct zx_ds_DigestMethod_s* x);
char* zx_ENC_SO_ds_DigestMethod(struct zx_ds_DigestMethod_s* x, char* p);
char* zx_ENC_WO_ds_DigestMethod(struct zx_ds_DigestMethod_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x);

struct zx_ds_DigestMethod_s {
  ZX_ELEM_EXT
  zx_ds_DigestMethod_EXT
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ds_DigestMethod_GET_Algorithm(struct zx_ds_DigestMethod_s* x);
void zx_ds_DigestMethod_PUT_Algorithm(struct zx_ds_DigestMethod_s* x, struct zx_str_s* y);

/* -------------------------- ds_KeyInfo -------------------------- */
/* refby( zx_ds_Signature_s zx_xenc_EncryptedData_s zx_xenc_EncryptedKey_s zx_sa11_SubjectConfirmation_s ) */
#ifndef zx_ds_KeyInfo_EXT
#define zx_ds_KeyInfo_EXT
#endif

struct zx_ds_KeyInfo_s* zx_DEC_ds_KeyInfo(struct zx_ctx* c);
struct zx_ds_KeyInfo_s* zx_NEW_ds_KeyInfo(struct zx_ctx* c);
struct zx_ds_KeyInfo_s* zx_DEEP_CLONE_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, int dup_strs);
void zx_DUP_STRS_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x);
void zx_FREE_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, int free_strs);
int zx_WALK_SO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_KeyInfo(struct zx_ds_KeyInfo_s* x);
char* zx_ENC_SO_ds_KeyInfo(struct zx_ds_KeyInfo_s* x, char* p);
char* zx_ENC_WO_ds_KeyInfo(struct zx_ds_KeyInfo_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x);

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
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_ds_KeyInfo_GET_Id(struct zx_ds_KeyInfo_s* x);
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
void zx_ds_KeyInfo_PUT_Id(struct zx_ds_KeyInfo_s* x, struct zx_str_s* y);
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

/* -------------------------- ds_KeyValue -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_KeyValue_EXT
#define zx_ds_KeyValue_EXT
#endif

struct zx_ds_KeyValue_s* zx_DEC_ds_KeyValue(struct zx_ctx* c);
struct zx_ds_KeyValue_s* zx_NEW_ds_KeyValue(struct zx_ctx* c);
struct zx_ds_KeyValue_s* zx_DEEP_CLONE_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, int dup_strs);
void zx_DUP_STRS_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x);
void zx_FREE_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, int free_strs);
int zx_WALK_SO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_KeyValue(struct zx_ds_KeyValue_s* x);
char* zx_ENC_SO_ds_KeyValue(struct zx_ds_KeyValue_s* x, char* p);
char* zx_ENC_WO_ds_KeyValue(struct zx_ds_KeyValue_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x);

struct zx_ds_KeyValue_s {
  ZX_ELEM_EXT
  zx_ds_KeyValue_EXT
  struct zx_ds_DSAKeyValue_s* DSAKeyValue;	/* {0,1} nada */
  struct zx_ds_RSAKeyValue_s* RSAKeyValue;	/* {0,1} nada */
};

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

/* -------------------------- ds_Manifest -------------------------- */
/* refby( ) */
#ifndef zx_ds_Manifest_EXT
#define zx_ds_Manifest_EXT
#endif

struct zx_ds_Manifest_s* zx_DEC_ds_Manifest(struct zx_ctx* c);
struct zx_ds_Manifest_s* zx_NEW_ds_Manifest(struct zx_ctx* c);
struct zx_ds_Manifest_s* zx_DEEP_CLONE_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, int dup_strs);
void zx_DUP_STRS_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x);
void zx_FREE_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, int free_strs);
int zx_WALK_SO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_Manifest(struct zx_ds_Manifest_s* x);
char* zx_ENC_SO_ds_Manifest(struct zx_ds_Manifest_s* x, char* p);
char* zx_ENC_WO_ds_Manifest(struct zx_ds_Manifest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x);

struct zx_ds_Manifest_s {
  ZX_ELEM_EXT
  zx_ds_Manifest_EXT
  struct zx_ds_Reference_s* Reference;	/* {1,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_ds_Manifest_GET_Id(struct zx_ds_Manifest_s* x);
struct zx_ds_Reference_s* zx_ds_Manifest_GET_Reference(struct zx_ds_Manifest_s* x, int n);
int zx_ds_Manifest_NUM_Reference(struct zx_ds_Manifest_s* x);
struct zx_ds_Reference_s* zx_ds_Manifest_POP_Reference(struct zx_ds_Manifest_s* x);
void zx_ds_Manifest_PUSH_Reference(struct zx_ds_Manifest_s* x, struct zx_ds_Reference_s* y);
void zx_ds_Manifest_PUT_Id(struct zx_ds_Manifest_s* x, struct zx_str_s* y);
void zx_ds_Manifest_PUT_Reference(struct zx_ds_Manifest_s* x, int n, struct zx_ds_Reference_s* y);
void zx_ds_Manifest_ADD_Reference(struct zx_ds_Manifest_s* x, int n, struct zx_ds_Reference_s* z);
void zx_ds_Manifest_DEL_Reference(struct zx_ds_Manifest_s* x, int n);
void zx_ds_Manifest_REV_Reference(struct zx_ds_Manifest_s* x);

/* -------------------------- ds_Object -------------------------- */
/* refby( zx_ds_Signature_s ) */
#ifndef zx_ds_Object_EXT
#define zx_ds_Object_EXT
#endif

struct zx_ds_Object_s* zx_DEC_ds_Object(struct zx_ctx* c);
struct zx_ds_Object_s* zx_NEW_ds_Object(struct zx_ctx* c);
struct zx_ds_Object_s* zx_DEEP_CLONE_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, int dup_strs);
void zx_DUP_STRS_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x);
void zx_FREE_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, int free_strs);
int zx_WALK_SO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_Object(struct zx_ds_Object_s* x);
char* zx_ENC_SO_ds_Object(struct zx_ds_Object_s* x, char* p);
char* zx_ENC_WO_ds_Object(struct zx_ds_Object_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x);

struct zx_ds_Object_s {
  ZX_ELEM_EXT
  zx_ds_Object_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str_s* Encoding;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ds_Object_GET_Id(struct zx_ds_Object_s* x);
struct zx_str_s* zx_ds_Object_GET_MimeType(struct zx_ds_Object_s* x);
struct zx_str_s* zx_ds_Object_GET_Encoding(struct zx_ds_Object_s* x);
void zx_ds_Object_PUT_Id(struct zx_ds_Object_s* x, struct zx_str_s* y);
void zx_ds_Object_PUT_MimeType(struct zx_ds_Object_s* x, struct zx_str_s* y);
void zx_ds_Object_PUT_Encoding(struct zx_ds_Object_s* x, struct zx_str_s* y);

/* -------------------------- ds_PGPData -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_PGPData_EXT
#define zx_ds_PGPData_EXT
#endif

struct zx_ds_PGPData_s* zx_DEC_ds_PGPData(struct zx_ctx* c);
struct zx_ds_PGPData_s* zx_NEW_ds_PGPData(struct zx_ctx* c);
struct zx_ds_PGPData_s* zx_DEEP_CLONE_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, int dup_strs);
void zx_DUP_STRS_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x);
void zx_FREE_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, int free_strs);
int zx_WALK_SO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_PGPData(struct zx_ds_PGPData_s* x);
char* zx_ENC_SO_ds_PGPData(struct zx_ds_PGPData_s* x, char* p);
char* zx_ENC_WO_ds_PGPData(struct zx_ds_PGPData_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x);

struct zx_ds_PGPData_s {
  ZX_ELEM_EXT
  zx_ds_PGPData_EXT
  struct zx_elem_s* PGPKeyID;	/* {0,1} xs:base64Binary */
  struct zx_elem_s* PGPKeyPacket;	/* {0,1} xs:base64Binary */
};

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

/* -------------------------- ds_RSAKeyValue -------------------------- */
/* refby( zx_ds_KeyValue_s ) */
#ifndef zx_ds_RSAKeyValue_EXT
#define zx_ds_RSAKeyValue_EXT
#endif

struct zx_ds_RSAKeyValue_s* zx_DEC_ds_RSAKeyValue(struct zx_ctx* c);
struct zx_ds_RSAKeyValue_s* zx_NEW_ds_RSAKeyValue(struct zx_ctx* c);
struct zx_ds_RSAKeyValue_s* zx_DEEP_CLONE_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, int dup_strs);
void zx_DUP_STRS_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x);
void zx_FREE_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, int free_strs);
int zx_WALK_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_RSAKeyValue(struct zx_ds_RSAKeyValue_s* x);
char* zx_ENC_SO_ds_RSAKeyValue(struct zx_ds_RSAKeyValue_s* x, char* p);
char* zx_ENC_WO_ds_RSAKeyValue(struct zx_ds_RSAKeyValue_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x);

struct zx_ds_RSAKeyValue_s {
  ZX_ELEM_EXT
  zx_ds_RSAKeyValue_EXT
  struct zx_elem_s* Modulus;	/* {1,1} xs:base64Binary */
  struct zx_elem_s* Exponent;	/* {1,1} xs:base64Binary */
};

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

/* -------------------------- ds_Reference -------------------------- */
/* refby( zx_ds_SignedInfo_s zx_ds_Manifest_s ) */
#ifndef zx_ds_Reference_EXT
#define zx_ds_Reference_EXT
#endif

struct zx_ds_Reference_s* zx_DEC_ds_Reference(struct zx_ctx* c);
struct zx_ds_Reference_s* zx_NEW_ds_Reference(struct zx_ctx* c);
struct zx_ds_Reference_s* zx_DEEP_CLONE_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, int dup_strs);
void zx_DUP_STRS_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x);
void zx_FREE_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, int free_strs);
int zx_WALK_SO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_Reference(struct zx_ds_Reference_s* x);
char* zx_ENC_SO_ds_Reference(struct zx_ds_Reference_s* x, char* p);
char* zx_ENC_WO_ds_Reference(struct zx_ds_Reference_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x);

struct zx_ds_Reference_s {
  ZX_ELEM_EXT
  zx_ds_Reference_EXT
  struct zx_ds_Transforms_s* Transforms;	/* {0,1}  */
  struct zx_ds_DigestMethod_s* DigestMethod;	/* {1,1} nada */
  struct zx_elem_s* DigestValue;	/* {1,1} xs:base64Binary */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* URI;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ds_Reference_GET_Id(struct zx_ds_Reference_s* x);
struct zx_str_s* zx_ds_Reference_GET_URI(struct zx_ds_Reference_s* x);
struct zx_str_s* zx_ds_Reference_GET_Type(struct zx_ds_Reference_s* x);
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
void zx_ds_Reference_PUT_Id(struct zx_ds_Reference_s* x, struct zx_str_s* y);
void zx_ds_Reference_PUT_URI(struct zx_ds_Reference_s* x, struct zx_str_s* y);
void zx_ds_Reference_PUT_Type(struct zx_ds_Reference_s* x, struct zx_str_s* y);
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

/* -------------------------- ds_RetrievalMethod -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_RetrievalMethod_EXT
#define zx_ds_RetrievalMethod_EXT
#endif

struct zx_ds_RetrievalMethod_s* zx_DEC_ds_RetrievalMethod(struct zx_ctx* c);
struct zx_ds_RetrievalMethod_s* zx_NEW_ds_RetrievalMethod(struct zx_ctx* c);
struct zx_ds_RetrievalMethod_s* zx_DEEP_CLONE_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, int dup_strs);
void zx_DUP_STRS_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x);
void zx_FREE_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, int free_strs);
int zx_WALK_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_RetrievalMethod(struct zx_ds_RetrievalMethod_s* x);
char* zx_ENC_SO_ds_RetrievalMethod(struct zx_ds_RetrievalMethod_s* x, char* p);
char* zx_ENC_WO_ds_RetrievalMethod(struct zx_ds_RetrievalMethod_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x);

struct zx_ds_RetrievalMethod_s {
  ZX_ELEM_EXT
  zx_ds_RetrievalMethod_EXT
  struct zx_ds_Transforms_s* Transforms;	/* {0,1}  */
  struct zx_str_s* URI;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ds_RetrievalMethod_GET_URI(struct zx_ds_RetrievalMethod_s* x);
struct zx_str_s* zx_ds_RetrievalMethod_GET_Type(struct zx_ds_RetrievalMethod_s* x);
struct zx_ds_Transforms_s* zx_ds_RetrievalMethod_GET_Transforms(struct zx_ds_RetrievalMethod_s* x, int n);
int zx_ds_RetrievalMethod_NUM_Transforms(struct zx_ds_RetrievalMethod_s* x);
struct zx_ds_Transforms_s* zx_ds_RetrievalMethod_POP_Transforms(struct zx_ds_RetrievalMethod_s* x);
void zx_ds_RetrievalMethod_PUSH_Transforms(struct zx_ds_RetrievalMethod_s* x, struct zx_ds_Transforms_s* y);
void zx_ds_RetrievalMethod_PUT_URI(struct zx_ds_RetrievalMethod_s* x, struct zx_str_s* y);
void zx_ds_RetrievalMethod_PUT_Type(struct zx_ds_RetrievalMethod_s* x, struct zx_str_s* y);
void zx_ds_RetrievalMethod_PUT_Transforms(struct zx_ds_RetrievalMethod_s* x, int n, struct zx_ds_Transforms_s* y);
void zx_ds_RetrievalMethod_ADD_Transforms(struct zx_ds_RetrievalMethod_s* x, int n, struct zx_ds_Transforms_s* z);
void zx_ds_RetrievalMethod_DEL_Transforms(struct zx_ds_RetrievalMethod_s* x, int n);
void zx_ds_RetrievalMethod_REV_Transforms(struct zx_ds_RetrievalMethod_s* x);

/* -------------------------- ds_SPKIData -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_SPKIData_EXT
#define zx_ds_SPKIData_EXT
#endif

struct zx_ds_SPKIData_s* zx_DEC_ds_SPKIData(struct zx_ctx* c);
struct zx_ds_SPKIData_s* zx_NEW_ds_SPKIData(struct zx_ctx* c);
struct zx_ds_SPKIData_s* zx_DEEP_CLONE_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, int dup_strs);
void zx_DUP_STRS_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x);
void zx_FREE_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, int free_strs);
int zx_WALK_SO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_SPKIData(struct zx_ds_SPKIData_s* x);
char* zx_ENC_SO_ds_SPKIData(struct zx_ds_SPKIData_s* x, char* p);
char* zx_ENC_WO_ds_SPKIData(struct zx_ds_SPKIData_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x);

struct zx_ds_SPKIData_s {
  ZX_ELEM_EXT
  zx_ds_SPKIData_EXT
  struct zx_elem_s* SPKISexp;	/* {1,1} xs:base64Binary */
};

struct zx_elem_s* zx_ds_SPKIData_GET_SPKISexp(struct zx_ds_SPKIData_s* x, int n);
int zx_ds_SPKIData_NUM_SPKISexp(struct zx_ds_SPKIData_s* x);
struct zx_elem_s* zx_ds_SPKIData_POP_SPKISexp(struct zx_ds_SPKIData_s* x);
void zx_ds_SPKIData_PUSH_SPKISexp(struct zx_ds_SPKIData_s* x, struct zx_elem_s* y);
void zx_ds_SPKIData_PUT_SPKISexp(struct zx_ds_SPKIData_s* x, int n, struct zx_elem_s* y);
void zx_ds_SPKIData_ADD_SPKISexp(struct zx_ds_SPKIData_s* x, int n, struct zx_elem_s* z);
void zx_ds_SPKIData_DEL_SPKISexp(struct zx_ds_SPKIData_s* x, int n);
void zx_ds_SPKIData_REV_SPKISexp(struct zx_ds_SPKIData_s* x);

/* -------------------------- ds_Signature -------------------------- */
/* refby( zx_ff12_AuthnResponse_s zx_ff12_NameIdentifierMappingResponse_s zx_ff12_RegisterNameIdentifierRequest_s zx_ff12_FederationTerminationNotification_s zx_ff12_AuthnRequest_s zx_ff12_NameIdentifierMappingRequest_s zx_ff12_RegisterNameIdentifierResponse_s zx_sp_LogoutRequest_s zx_sp_ArtifactResponse_s zx_sp_AuthnRequest_s zx_sp_AuthzDecisionQuery_s zx_ff12_Assertion_s zx_ff12_LogoutResponse_s zx_sp_ArtifactResolve_s zx_sp_AttributeQuery_s zx_sp_NameIDMappingResponse_s zx_sp_ManageNameIDResponse_s zx_sp11_Request_s zx_ff12_LogoutRequest_s zx_sa11_Assertion_s zx_sp_LogoutResponse_s zx_sp_AssertionIDRequest_s zx_sp_NameIDMappingRequest_s zx_sp11_Response_s zx_sp_Response_s zx_sp_ManageNameIDRequest_s zx_sa_Assertion_s zx_sp_SubjectQuery_s zx_sp_AuthnQuery_s ) */
#ifndef zx_ds_Signature_EXT
#define zx_ds_Signature_EXT
#endif

struct zx_ds_Signature_s* zx_DEC_ds_Signature(struct zx_ctx* c);
struct zx_ds_Signature_s* zx_NEW_ds_Signature(struct zx_ctx* c);
struct zx_ds_Signature_s* zx_DEEP_CLONE_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, int dup_strs);
void zx_DUP_STRS_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x);
void zx_FREE_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, int free_strs);
int zx_WALK_SO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_Signature(struct zx_ds_Signature_s* x);
char* zx_ENC_SO_ds_Signature(struct zx_ds_Signature_s* x, char* p);
char* zx_ENC_WO_ds_Signature(struct zx_ds_Signature_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x);

struct zx_ds_Signature_s {
  ZX_ELEM_EXT
  zx_ds_Signature_EXT
  struct zx_ds_SignedInfo_s* SignedInfo;	/* {1,1} nada */
  struct zx_ds_SignatureValue_s* SignatureValue;	/* {1,1} nada */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_ds_Object_s* Object;	/* {0,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_ds_Signature_GET_Id(struct zx_ds_Signature_s* x);
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
void zx_ds_Signature_PUT_Id(struct zx_ds_Signature_s* x, struct zx_str_s* y);
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

/* -------------------------- ds_SignatureMethod -------------------------- */
/* refby( zx_ds_SignedInfo_s ) */
#ifndef zx_ds_SignatureMethod_EXT
#define zx_ds_SignatureMethod_EXT
#endif

struct zx_ds_SignatureMethod_s* zx_DEC_ds_SignatureMethod(struct zx_ctx* c);
struct zx_ds_SignatureMethod_s* zx_NEW_ds_SignatureMethod(struct zx_ctx* c);
struct zx_ds_SignatureMethod_s* zx_DEEP_CLONE_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x);
void zx_FREE_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, int free_strs);
int zx_WALK_SO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_SignatureMethod(struct zx_ds_SignatureMethod_s* x);
char* zx_ENC_SO_ds_SignatureMethod(struct zx_ds_SignatureMethod_s* x, char* p);
char* zx_ENC_WO_ds_SignatureMethod(struct zx_ds_SignatureMethod_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x);

struct zx_ds_SignatureMethod_s {
  ZX_ELEM_EXT
  zx_ds_SignatureMethod_EXT
  struct zx_elem_s* HMACOutputLength;	/* {0,1} xs:integer */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ds_SignatureMethod_GET_Algorithm(struct zx_ds_SignatureMethod_s* x);
struct zx_elem_s* zx_ds_SignatureMethod_GET_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n);
int zx_ds_SignatureMethod_NUM_HMACOutputLength(struct zx_ds_SignatureMethod_s* x);
struct zx_elem_s* zx_ds_SignatureMethod_POP_HMACOutputLength(struct zx_ds_SignatureMethod_s* x);
void zx_ds_SignatureMethod_PUSH_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, struct zx_elem_s* y);
void zx_ds_SignatureMethod_PUT_Algorithm(struct zx_ds_SignatureMethod_s* x, struct zx_str_s* y);
void zx_ds_SignatureMethod_PUT_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n, struct zx_elem_s* y);
void zx_ds_SignatureMethod_ADD_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n, struct zx_elem_s* z);
void zx_ds_SignatureMethod_DEL_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n);
void zx_ds_SignatureMethod_REV_HMACOutputLength(struct zx_ds_SignatureMethod_s* x);

/* -------------------------- ds_SignatureProperties -------------------------- */
/* refby( ) */
#ifndef zx_ds_SignatureProperties_EXT
#define zx_ds_SignatureProperties_EXT
#endif

struct zx_ds_SignatureProperties_s* zx_DEC_ds_SignatureProperties(struct zx_ctx* c);
struct zx_ds_SignatureProperties_s* zx_NEW_ds_SignatureProperties(struct zx_ctx* c);
struct zx_ds_SignatureProperties_s* zx_DEEP_CLONE_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x);
void zx_FREE_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, int free_strs);
int zx_WALK_SO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_SignatureProperties(struct zx_ds_SignatureProperties_s* x);
char* zx_ENC_SO_ds_SignatureProperties(struct zx_ds_SignatureProperties_s* x, char* p);
char* zx_ENC_WO_ds_SignatureProperties(struct zx_ds_SignatureProperties_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x);

struct zx_ds_SignatureProperties_s {
  ZX_ELEM_EXT
  zx_ds_SignatureProperties_EXT
  struct zx_ds_SignatureProperty_s* SignatureProperty;	/* {1,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_ds_SignatureProperties_GET_Id(struct zx_ds_SignatureProperties_s* x);
struct zx_ds_SignatureProperty_s* zx_ds_SignatureProperties_GET_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n);
int zx_ds_SignatureProperties_NUM_SignatureProperty(struct zx_ds_SignatureProperties_s* x);
struct zx_ds_SignatureProperty_s* zx_ds_SignatureProperties_POP_SignatureProperty(struct zx_ds_SignatureProperties_s* x);
void zx_ds_SignatureProperties_PUSH_SignatureProperty(struct zx_ds_SignatureProperties_s* x, struct zx_ds_SignatureProperty_s* y);
void zx_ds_SignatureProperties_PUT_Id(struct zx_ds_SignatureProperties_s* x, struct zx_str_s* y);
void zx_ds_SignatureProperties_PUT_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n, struct zx_ds_SignatureProperty_s* y);
void zx_ds_SignatureProperties_ADD_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n, struct zx_ds_SignatureProperty_s* z);
void zx_ds_SignatureProperties_DEL_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n);
void zx_ds_SignatureProperties_REV_SignatureProperty(struct zx_ds_SignatureProperties_s* x);

/* -------------------------- ds_SignatureProperty -------------------------- */
/* refby( zx_ds_SignatureProperties_s ) */
#ifndef zx_ds_SignatureProperty_EXT
#define zx_ds_SignatureProperty_EXT
#endif

struct zx_ds_SignatureProperty_s* zx_DEC_ds_SignatureProperty(struct zx_ctx* c);
struct zx_ds_SignatureProperty_s* zx_NEW_ds_SignatureProperty(struct zx_ctx* c);
struct zx_ds_SignatureProperty_s* zx_DEEP_CLONE_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x);
void zx_FREE_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, int free_strs);
int zx_WALK_SO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_SignatureProperty(struct zx_ds_SignatureProperty_s* x);
char* zx_ENC_SO_ds_SignatureProperty(struct zx_ds_SignatureProperty_s* x, char* p);
char* zx_ENC_WO_ds_SignatureProperty(struct zx_ds_SignatureProperty_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x);

struct zx_ds_SignatureProperty_s {
  ZX_ELEM_EXT
  zx_ds_SignatureProperty_EXT
  struct zx_str_s* Target;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_ds_SignatureProperty_GET_Target(struct zx_ds_SignatureProperty_s* x);
struct zx_str_s* zx_ds_SignatureProperty_GET_Id(struct zx_ds_SignatureProperty_s* x);
void zx_ds_SignatureProperty_PUT_Target(struct zx_ds_SignatureProperty_s* x, struct zx_str_s* y);
void zx_ds_SignatureProperty_PUT_Id(struct zx_ds_SignatureProperty_s* x, struct zx_str_s* y);

/* -------------------------- ds_SignatureValue -------------------------- */
/* refby( zx_ds_Signature_s ) */
#ifndef zx_ds_SignatureValue_EXT
#define zx_ds_SignatureValue_EXT
#endif

struct zx_ds_SignatureValue_s* zx_DEC_ds_SignatureValue(struct zx_ctx* c);
struct zx_ds_SignatureValue_s* zx_NEW_ds_SignatureValue(struct zx_ctx* c);
struct zx_ds_SignatureValue_s* zx_DEEP_CLONE_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x);
void zx_FREE_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, int free_strs);
int zx_WALK_SO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_SignatureValue(struct zx_ds_SignatureValue_s* x);
char* zx_ENC_SO_ds_SignatureValue(struct zx_ds_SignatureValue_s* x, char* p);
char* zx_ENC_WO_ds_SignatureValue(struct zx_ds_SignatureValue_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x);

struct zx_ds_SignatureValue_s {
  ZX_ELEM_EXT
  zx_ds_SignatureValue_EXT
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_ds_SignatureValue_GET_Id(struct zx_ds_SignatureValue_s* x);
void zx_ds_SignatureValue_PUT_Id(struct zx_ds_SignatureValue_s* x, struct zx_str_s* y);

/* -------------------------- ds_SignedInfo -------------------------- */
/* refby( zx_ds_Signature_s ) */
#ifndef zx_ds_SignedInfo_EXT
#define zx_ds_SignedInfo_EXT
#endif

struct zx_ds_SignedInfo_s* zx_DEC_ds_SignedInfo(struct zx_ctx* c);
struct zx_ds_SignedInfo_s* zx_NEW_ds_SignedInfo(struct zx_ctx* c);
struct zx_ds_SignedInfo_s* zx_DEEP_CLONE_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, int dup_strs);
void zx_DUP_STRS_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x);
void zx_FREE_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, int free_strs);
int zx_WALK_SO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_SignedInfo(struct zx_ds_SignedInfo_s* x);
char* zx_ENC_SO_ds_SignedInfo(struct zx_ds_SignedInfo_s* x, char* p);
char* zx_ENC_WO_ds_SignedInfo(struct zx_ds_SignedInfo_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x);

struct zx_ds_SignedInfo_s {
  ZX_ELEM_EXT
  zx_ds_SignedInfo_EXT
  struct zx_ds_CanonicalizationMethod_s* CanonicalizationMethod;	/* {1,1} nada */
  struct zx_ds_SignatureMethod_s* SignatureMethod;	/* {1,1} nada */
  struct zx_ds_Reference_s* Reference;	/* {1,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_ds_SignedInfo_GET_Id(struct zx_ds_SignedInfo_s* x);
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
void zx_ds_SignedInfo_PUT_Id(struct zx_ds_SignedInfo_s* x, struct zx_str_s* y);
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

/* -------------------------- ds_Transform -------------------------- */
/* refby( zx_xenc_Transforms_s zx_ds_Transforms_s ) */
#ifndef zx_ds_Transform_EXT
#define zx_ds_Transform_EXT
#endif

struct zx_ds_Transform_s* zx_DEC_ds_Transform(struct zx_ctx* c);
struct zx_ds_Transform_s* zx_NEW_ds_Transform(struct zx_ctx* c);
struct zx_ds_Transform_s* zx_DEEP_CLONE_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, int dup_strs);
void zx_DUP_STRS_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x);
void zx_FREE_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, int free_strs);
int zx_WALK_SO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_Transform(struct zx_ds_Transform_s* x);
char* zx_ENC_SO_ds_Transform(struct zx_ds_Transform_s* x, char* p);
char* zx_ENC_WO_ds_Transform(struct zx_ds_Transform_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x);

struct zx_ds_Transform_s {
  ZX_ELEM_EXT
  zx_ds_Transform_EXT
  struct zx_elem_s* XPath;	/* {0,-1} xs:string */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ds_Transform_GET_Algorithm(struct zx_ds_Transform_s* x);
struct zx_elem_s* zx_ds_Transform_GET_XPath(struct zx_ds_Transform_s* x, int n);
int zx_ds_Transform_NUM_XPath(struct zx_ds_Transform_s* x);
struct zx_elem_s* zx_ds_Transform_POP_XPath(struct zx_ds_Transform_s* x);
void zx_ds_Transform_PUSH_XPath(struct zx_ds_Transform_s* x, struct zx_elem_s* y);
void zx_ds_Transform_PUT_Algorithm(struct zx_ds_Transform_s* x, struct zx_str_s* y);
void zx_ds_Transform_PUT_XPath(struct zx_ds_Transform_s* x, int n, struct zx_elem_s* y);
void zx_ds_Transform_ADD_XPath(struct zx_ds_Transform_s* x, int n, struct zx_elem_s* z);
void zx_ds_Transform_DEL_XPath(struct zx_ds_Transform_s* x, int n);
void zx_ds_Transform_REV_XPath(struct zx_ds_Transform_s* x);

/* -------------------------- ds_Transforms -------------------------- */
/* refby( zx_ds_Reference_s zx_ds_RetrievalMethod_s ) */
#ifndef zx_ds_Transforms_EXT
#define zx_ds_Transforms_EXT
#endif

struct zx_ds_Transforms_s* zx_DEC_ds_Transforms(struct zx_ctx* c);
struct zx_ds_Transforms_s* zx_NEW_ds_Transforms(struct zx_ctx* c);
struct zx_ds_Transforms_s* zx_DEEP_CLONE_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, int dup_strs);
void zx_DUP_STRS_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x);
void zx_FREE_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, int free_strs);
int zx_WALK_SO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_Transforms(struct zx_ds_Transforms_s* x);
char* zx_ENC_SO_ds_Transforms(struct zx_ds_Transforms_s* x, char* p);
char* zx_ENC_WO_ds_Transforms(struct zx_ds_Transforms_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x);

struct zx_ds_Transforms_s {
  ZX_ELEM_EXT
  zx_ds_Transforms_EXT
  struct zx_ds_Transform_s* Transform;	/* {1,-1} nada */
};

struct zx_ds_Transform_s* zx_ds_Transforms_GET_Transform(struct zx_ds_Transforms_s* x, int n);
int zx_ds_Transforms_NUM_Transform(struct zx_ds_Transforms_s* x);
struct zx_ds_Transform_s* zx_ds_Transforms_POP_Transform(struct zx_ds_Transforms_s* x);
void zx_ds_Transforms_PUSH_Transform(struct zx_ds_Transforms_s* x, struct zx_ds_Transform_s* y);
void zx_ds_Transforms_PUT_Transform(struct zx_ds_Transforms_s* x, int n, struct zx_ds_Transform_s* y);
void zx_ds_Transforms_ADD_Transform(struct zx_ds_Transforms_s* x, int n, struct zx_ds_Transform_s* z);
void zx_ds_Transforms_DEL_Transform(struct zx_ds_Transforms_s* x, int n);
void zx_ds_Transforms_REV_Transform(struct zx_ds_Transforms_s* x);

/* -------------------------- ds_X509Data -------------------------- */
/* refby( zx_ds_KeyInfo_s zx_xenc_OriginatorKeyInfo_s zx_xenc_RecipientKeyInfo_s ) */
#ifndef zx_ds_X509Data_EXT
#define zx_ds_X509Data_EXT
#endif

struct zx_ds_X509Data_s* zx_DEC_ds_X509Data(struct zx_ctx* c);
struct zx_ds_X509Data_s* zx_NEW_ds_X509Data(struct zx_ctx* c);
struct zx_ds_X509Data_s* zx_DEEP_CLONE_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, int dup_strs);
void zx_DUP_STRS_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x);
void zx_FREE_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, int free_strs);
int zx_WALK_SO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_X509Data(struct zx_ds_X509Data_s* x);
char* zx_ENC_SO_ds_X509Data(struct zx_ds_X509Data_s* x, char* p);
char* zx_ENC_WO_ds_X509Data(struct zx_ds_X509Data_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x);

struct zx_ds_X509Data_s {
  ZX_ELEM_EXT
  zx_ds_X509Data_EXT
  struct zx_ds_X509IssuerSerial_s* X509IssuerSerial;	/* {0,-1}  */
  struct zx_elem_s* X509SKI;	/* {0,-1} xs:base64Binary */
  struct zx_elem_s* X509SubjectName;	/* {0,-1} xs:string */
  struct zx_elem_s* X509Certificate;	/* {0,-1} xs:base64Binary */
  struct zx_elem_s* X509CRL;	/* {0,-1} xs:base64Binary */
};

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

/* -------------------------- ds_X509IssuerSerial -------------------------- */
/* refby( zx_ds_X509Data_s ) */
#ifndef zx_ds_X509IssuerSerial_EXT
#define zx_ds_X509IssuerSerial_EXT
#endif

struct zx_ds_X509IssuerSerial_s* zx_DEC_ds_X509IssuerSerial(struct zx_ctx* c);
struct zx_ds_X509IssuerSerial_s* zx_NEW_ds_X509IssuerSerial(struct zx_ctx* c);
struct zx_ds_X509IssuerSerial_s* zx_DEEP_CLONE_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, int dup_strs);
void zx_DUP_STRS_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x);
void zx_FREE_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, int free_strs);
int zx_WALK_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ds_X509IssuerSerial(struct zx_ds_X509IssuerSerial_s* x);
char* zx_ENC_SO_ds_X509IssuerSerial(struct zx_ds_X509IssuerSerial_s* x, char* p);
char* zx_ENC_WO_ds_X509IssuerSerial(struct zx_ds_X509IssuerSerial_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x);

struct zx_ds_X509IssuerSerial_s {
  ZX_ELEM_EXT
  zx_ds_X509IssuerSerial_EXT
  struct zx_elem_s* X509IssuerName;	/* {1,1} xs:string */
  struct zx_elem_s* X509SerialNumber;	/* {1,1} xs:integer */
};

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

/* -------------------------- ff12_Assertion -------------------------- */
/* refby( ) */
#ifndef zx_ff12_Assertion_EXT
#define zx_ff12_Assertion_EXT
#endif

struct zx_ff12_Assertion_s* zx_DEC_ff12_Assertion(struct zx_ctx* c);
struct zx_ff12_Assertion_s* zx_NEW_ff12_Assertion(struct zx_ctx* c);
struct zx_ff12_Assertion_s* zx_DEEP_CLONE_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, int dup_strs);
void zx_DUP_STRS_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x);
void zx_FREE_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, int free_strs);
int zx_WALK_SO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_Assertion(struct zx_ff12_Assertion_s* x);
char* zx_ENC_SO_ff12_Assertion(struct zx_ff12_Assertion_s* x, char* p);
char* zx_ENC_WO_ff12_Assertion(struct zx_ff12_Assertion_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_Assertion(struct zx_ctx* c, struct zx_ff12_Assertion_s* x);

struct zx_ff12_Assertion_s {
  ZX_ELEM_EXT
  zx_ff12_Assertion_EXT
  struct zx_sa11_Conditions_s* Conditions;	/* {0,1} nada */
  struct zx_sa11_Advice_s* Advice;	/* {0,1} nada */
  struct zx_elem_s* Statement;	/* {0,-1} sa11:StatementAbstractType */
  struct zx_sa11_SubjectStatement_s* SubjectStatement;	/* {0,-1}  */
  struct zx_sa11_AuthenticationStatement_s* AuthenticationStatement;	/* {0,-1} nada */
  struct zx_sa11_AuthorizationDecisionStatement_s* AuthorizationDecisionStatement;	/* {0,-1} nada */
  struct zx_sa11_AttributeStatement_s* AttributeStatement;	/* {0,-1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* AssertionID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Issuer;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
};

struct zx_str_s* zx_ff12_Assertion_GET_MajorVersion(struct zx_ff12_Assertion_s* x);
struct zx_str_s* zx_ff12_Assertion_GET_MinorVersion(struct zx_ff12_Assertion_s* x);
struct zx_str_s* zx_ff12_Assertion_GET_AssertionID(struct zx_ff12_Assertion_s* x);
struct zx_str_s* zx_ff12_Assertion_GET_Issuer(struct zx_ff12_Assertion_s* x);
struct zx_str_s* zx_ff12_Assertion_GET_IssueInstant(struct zx_ff12_Assertion_s* x);
struct zx_str_s* zx_ff12_Assertion_GET_InResponseTo(struct zx_ff12_Assertion_s* x);
struct zx_sa11_Conditions_s* zx_ff12_Assertion_GET_Conditions(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_Advice_s* zx_ff12_Assertion_GET_Advice(struct zx_ff12_Assertion_s* x, int n);
struct zx_elem_s* zx_ff12_Assertion_GET_Statement(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_SubjectStatement_s* zx_ff12_Assertion_GET_SubjectStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_AuthenticationStatement_s* zx_ff12_Assertion_GET_AuthenticationStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_ff12_Assertion_GET_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_sa11_AttributeStatement_s* zx_ff12_Assertion_GET_AttributeStatement(struct zx_ff12_Assertion_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_Assertion_GET_Signature(struct zx_ff12_Assertion_s* x, int n);
int zx_ff12_Assertion_NUM_Conditions(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_Advice(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_Statement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_SubjectStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_AuthenticationStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_AttributeStatement(struct zx_ff12_Assertion_s* x);
int zx_ff12_Assertion_NUM_Signature(struct zx_ff12_Assertion_s* x);
struct zx_sa11_Conditions_s* zx_ff12_Assertion_POP_Conditions(struct zx_ff12_Assertion_s* x);
struct zx_sa11_Advice_s* zx_ff12_Assertion_POP_Advice(struct zx_ff12_Assertion_s* x);
struct zx_elem_s* zx_ff12_Assertion_POP_Statement(struct zx_ff12_Assertion_s* x);
struct zx_sa11_SubjectStatement_s* zx_ff12_Assertion_POP_SubjectStatement(struct zx_ff12_Assertion_s* x);
struct zx_sa11_AuthenticationStatement_s* zx_ff12_Assertion_POP_AuthenticationStatement(struct zx_ff12_Assertion_s* x);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_ff12_Assertion_POP_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x);
struct zx_sa11_AttributeStatement_s* zx_ff12_Assertion_POP_AttributeStatement(struct zx_ff12_Assertion_s* x);
struct zx_ds_Signature_s* zx_ff12_Assertion_POP_Signature(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_PUSH_Conditions(struct zx_ff12_Assertion_s* x, struct zx_sa11_Conditions_s* y);
void zx_ff12_Assertion_PUSH_Advice(struct zx_ff12_Assertion_s* x, struct zx_sa11_Advice_s* y);
void zx_ff12_Assertion_PUSH_Statement(struct zx_ff12_Assertion_s* x, struct zx_elem_s* y);
void zx_ff12_Assertion_PUSH_SubjectStatement(struct zx_ff12_Assertion_s* x, struct zx_sa11_SubjectStatement_s* y);
void zx_ff12_Assertion_PUSH_AuthenticationStatement(struct zx_ff12_Assertion_s* x, struct zx_sa11_AuthenticationStatement_s* y);
void zx_ff12_Assertion_PUSH_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, struct zx_sa11_AuthorizationDecisionStatement_s* y);
void zx_ff12_Assertion_PUSH_AttributeStatement(struct zx_ff12_Assertion_s* x, struct zx_sa11_AttributeStatement_s* y);
void zx_ff12_Assertion_PUSH_Signature(struct zx_ff12_Assertion_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_Assertion_PUT_MajorVersion(struct zx_ff12_Assertion_s* x, struct zx_str_s* y);
void zx_ff12_Assertion_PUT_MinorVersion(struct zx_ff12_Assertion_s* x, struct zx_str_s* y);
void zx_ff12_Assertion_PUT_AssertionID(struct zx_ff12_Assertion_s* x, struct zx_str_s* y);
void zx_ff12_Assertion_PUT_Issuer(struct zx_ff12_Assertion_s* x, struct zx_str_s* y);
void zx_ff12_Assertion_PUT_IssueInstant(struct zx_ff12_Assertion_s* x, struct zx_str_s* y);
void zx_ff12_Assertion_PUT_InResponseTo(struct zx_ff12_Assertion_s* x, struct zx_str_s* y);
void zx_ff12_Assertion_PUT_Conditions(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_Conditions_s* y);
void zx_ff12_Assertion_PUT_Advice(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_Advice_s* y);
void zx_ff12_Assertion_PUT_Statement(struct zx_ff12_Assertion_s* x, int n, struct zx_elem_s* y);
void zx_ff12_Assertion_PUT_SubjectStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_SubjectStatement_s* y);
void zx_ff12_Assertion_PUT_AuthenticationStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AuthenticationStatement_s* y);
void zx_ff12_Assertion_PUT_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AuthorizationDecisionStatement_s* y);
void zx_ff12_Assertion_PUT_AttributeStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AttributeStatement_s* y);
void zx_ff12_Assertion_PUT_Signature(struct zx_ff12_Assertion_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_Assertion_ADD_Conditions(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_Conditions_s* z);
void zx_ff12_Assertion_ADD_Advice(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_Advice_s* z);
void zx_ff12_Assertion_ADD_Statement(struct zx_ff12_Assertion_s* x, int n, struct zx_elem_s* z);
void zx_ff12_Assertion_ADD_SubjectStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_SubjectStatement_s* z);
void zx_ff12_Assertion_ADD_AuthenticationStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AuthenticationStatement_s* z);
void zx_ff12_Assertion_ADD_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AuthorizationDecisionStatement_s* z);
void zx_ff12_Assertion_ADD_AttributeStatement(struct zx_ff12_Assertion_s* x, int n, struct zx_sa11_AttributeStatement_s* z);
void zx_ff12_Assertion_ADD_Signature(struct zx_ff12_Assertion_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_Assertion_DEL_Conditions(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_Advice(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_Statement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_SubjectStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_AuthenticationStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_AttributeStatement(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_DEL_Signature(struct zx_ff12_Assertion_s* x, int n);
void zx_ff12_Assertion_REV_Conditions(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_Advice(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_Statement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_SubjectStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_AuthenticationStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_AuthorizationDecisionStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_AttributeStatement(struct zx_ff12_Assertion_s* x);
void zx_ff12_Assertion_REV_Signature(struct zx_ff12_Assertion_s* x);

/* -------------------------- ff12_AuthenticationStatement -------------------------- */
/* refby( ) */
#ifndef zx_ff12_AuthenticationStatement_EXT
#define zx_ff12_AuthenticationStatement_EXT
#endif

struct zx_ff12_AuthenticationStatement_s* zx_DEC_ff12_AuthenticationStatement(struct zx_ctx* c);
struct zx_ff12_AuthenticationStatement_s* zx_NEW_ff12_AuthenticationStatement(struct zx_ctx* c);
struct zx_ff12_AuthenticationStatement_s* zx_DEEP_CLONE_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x);
void zx_FREE_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, int free_strs);
int zx_WALK_SO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_AuthenticationStatement(struct zx_ff12_AuthenticationStatement_s* x);
char* zx_ENC_SO_ff12_AuthenticationStatement(struct zx_ff12_AuthenticationStatement_s* x, char* p);
char* zx_ENC_WO_ff12_AuthenticationStatement(struct zx_ff12_AuthenticationStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthenticationStatement(struct zx_ctx* c, struct zx_ff12_AuthenticationStatement_s* x);

struct zx_ff12_AuthenticationStatement_s {
  ZX_ELEM_EXT
  zx_ff12_AuthenticationStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_SubjectLocality_s* SubjectLocality;	/* {0,1} nada */
  struct zx_sa11_AuthorityBinding_s* AuthorityBinding;	/* {0,-1} nada */
  struct zx_str_s* AuthenticationMethod;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* AuthenticationInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_ff12_AuthnContext_s* AuthnContext;	/* {0,1}  */
  struct zx_str_s* ReauthenticateOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* SessionIndex;	/* {1,1} attribute xs:string */
};

struct zx_str_s* zx_ff12_AuthenticationStatement_GET_AuthenticationMethod(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_str_s* zx_ff12_AuthenticationStatement_GET_AuthenticationInstant(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_str_s* zx_ff12_AuthenticationStatement_GET_ReauthenticateOnOrAfter(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_str_s* zx_ff12_AuthenticationStatement_GET_SessionIndex(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_sa11_Subject_s* zx_ff12_AuthenticationStatement_GET_Subject(struct zx_ff12_AuthenticationStatement_s* x, int n);
struct zx_sa11_SubjectLocality_s* zx_ff12_AuthenticationStatement_GET_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, int n);
struct zx_sa11_AuthorityBinding_s* zx_ff12_AuthenticationStatement_GET_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, int n);
struct zx_ff12_AuthnContext_s* zx_ff12_AuthenticationStatement_GET_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, int n);
int zx_ff12_AuthenticationStatement_NUM_Subject(struct zx_ff12_AuthenticationStatement_s* x);
int zx_ff12_AuthenticationStatement_NUM_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x);
int zx_ff12_AuthenticationStatement_NUM_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x);
int zx_ff12_AuthenticationStatement_NUM_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_sa11_Subject_s* zx_ff12_AuthenticationStatement_POP_Subject(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_sa11_SubjectLocality_s* zx_ff12_AuthenticationStatement_POP_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_sa11_AuthorityBinding_s* zx_ff12_AuthenticationStatement_POP_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x);
struct zx_ff12_AuthnContext_s* zx_ff12_AuthenticationStatement_POP_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x);
void zx_ff12_AuthenticationStatement_PUSH_Subject(struct zx_ff12_AuthenticationStatement_s* x, struct zx_sa11_Subject_s* y);
void zx_ff12_AuthenticationStatement_PUSH_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, struct zx_sa11_SubjectLocality_s* y);
void zx_ff12_AuthenticationStatement_PUSH_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, struct zx_sa11_AuthorityBinding_s* y);
void zx_ff12_AuthenticationStatement_PUSH_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, struct zx_ff12_AuthnContext_s* y);
void zx_ff12_AuthenticationStatement_PUT_AuthenticationMethod(struct zx_ff12_AuthenticationStatement_s* x, struct zx_str_s* y);
void zx_ff12_AuthenticationStatement_PUT_AuthenticationInstant(struct zx_ff12_AuthenticationStatement_s* x, struct zx_str_s* y);
void zx_ff12_AuthenticationStatement_PUT_ReauthenticateOnOrAfter(struct zx_ff12_AuthenticationStatement_s* x, struct zx_str_s* y);
void zx_ff12_AuthenticationStatement_PUT_SessionIndex(struct zx_ff12_AuthenticationStatement_s* x, struct zx_str_s* y);
void zx_ff12_AuthenticationStatement_PUT_Subject(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_ff12_AuthenticationStatement_PUT_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_SubjectLocality_s* y);
void zx_ff12_AuthenticationStatement_PUT_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_AuthorityBinding_s* y);
void zx_ff12_AuthenticationStatement_PUT_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_ff12_AuthnContext_s* y);
void zx_ff12_AuthenticationStatement_ADD_Subject(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_ff12_AuthenticationStatement_ADD_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_SubjectLocality_s* z);
void zx_ff12_AuthenticationStatement_ADD_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_sa11_AuthorityBinding_s* z);
void zx_ff12_AuthenticationStatement_ADD_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, int n, struct zx_ff12_AuthnContext_s* z);
void zx_ff12_AuthenticationStatement_DEL_Subject(struct zx_ff12_AuthenticationStatement_s* x, int n);
void zx_ff12_AuthenticationStatement_DEL_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x, int n);
void zx_ff12_AuthenticationStatement_DEL_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x, int n);
void zx_ff12_AuthenticationStatement_DEL_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x, int n);
void zx_ff12_AuthenticationStatement_REV_Subject(struct zx_ff12_AuthenticationStatement_s* x);
void zx_ff12_AuthenticationStatement_REV_SubjectLocality(struct zx_ff12_AuthenticationStatement_s* x);
void zx_ff12_AuthenticationStatement_REV_AuthorityBinding(struct zx_ff12_AuthenticationStatement_s* x);
void zx_ff12_AuthenticationStatement_REV_AuthnContext(struct zx_ff12_AuthenticationStatement_s* x);

/* -------------------------- ff12_AuthnContext -------------------------- */
/* refby( zx_ff12_AuthenticationStatement_s ) */
#ifndef zx_ff12_AuthnContext_EXT
#define zx_ff12_AuthnContext_EXT
#endif

struct zx_ff12_AuthnContext_s* zx_DEC_ff12_AuthnContext(struct zx_ctx* c);
struct zx_ff12_AuthnContext_s* zx_NEW_ff12_AuthnContext(struct zx_ctx* c);
struct zx_ff12_AuthnContext_s* zx_DEEP_CLONE_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x);
void zx_FREE_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, int free_strs);
int zx_WALK_SO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_AuthnContext(struct zx_ff12_AuthnContext_s* x);
char* zx_ENC_SO_ff12_AuthnContext(struct zx_ff12_AuthnContext_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnContext(struct zx_ff12_AuthnContext_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnContext(struct zx_ctx* c, struct zx_ff12_AuthnContext_s* x);

struct zx_ff12_AuthnContext_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {0,1} xs:anyURI */
  struct zx_ac_AuthenticationContextStatement_s* AuthenticationContextStatement;	/* {0,1} nada */
  struct zx_elem_s* AuthnContextStatementRef;	/* {0,1} xs:anyURI */
};

struct zx_elem_s* zx_ff12_AuthnContext_GET_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, int n);
struct zx_ac_AuthenticationContextStatement_s* zx_ff12_AuthnContext_GET_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnContext_GET_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, int n);
int zx_ff12_AuthnContext_NUM_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x);
int zx_ff12_AuthnContext_NUM_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x);
int zx_ff12_AuthnContext_NUM_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x);
struct zx_elem_s* zx_ff12_AuthnContext_POP_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x);
struct zx_ac_AuthenticationContextStatement_s* zx_ff12_AuthnContext_POP_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x);
struct zx_elem_s* zx_ff12_AuthnContext_POP_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x);
void zx_ff12_AuthnContext_PUSH_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnContext_PUSH_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, struct zx_ac_AuthenticationContextStatement_s* y);
void zx_ff12_AuthnContext_PUSH_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnContext_PUT_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnContext_PUT_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, int n, struct zx_ac_AuthenticationContextStatement_s* y);
void zx_ff12_AuthnContext_PUT_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnContext_ADD_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnContext_ADD_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, int n, struct zx_ac_AuthenticationContextStatement_s* z);
void zx_ff12_AuthnContext_ADD_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnContext_DEL_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x, int n);
void zx_ff12_AuthnContext_DEL_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x, int n);
void zx_ff12_AuthnContext_DEL_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x, int n);
void zx_ff12_AuthnContext_REV_AuthnContextClassRef(struct zx_ff12_AuthnContext_s* x);
void zx_ff12_AuthnContext_REV_AuthenticationContextStatement(struct zx_ff12_AuthnContext_s* x);
void zx_ff12_AuthnContext_REV_AuthnContextStatementRef(struct zx_ff12_AuthnContext_s* x);

/* -------------------------- ff12_AuthnRequest -------------------------- */
/* refby( zx_ff12_AuthnRequestEnvelope_s ) */
#ifndef zx_ff12_AuthnRequest_EXT
#define zx_ff12_AuthnRequest_EXT
#endif

struct zx_ff12_AuthnRequest_s* zx_DEC_ff12_AuthnRequest(struct zx_ctx* c);
struct zx_ff12_AuthnRequest_s* zx_NEW_ff12_AuthnRequest(struct zx_ctx* c);
struct zx_ff12_AuthnRequest_s* zx_DEEP_CLONE_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x);
void zx_FREE_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, int free_strs);
int zx_WALK_SO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_AuthnRequest(struct zx_ff12_AuthnRequest_s* x);
char* zx_ENC_SO_ff12_AuthnRequest(struct zx_ff12_AuthnRequest_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnRequest(struct zx_ff12_AuthnRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnRequest(struct zx_ctx* c, struct zx_ff12_AuthnRequest_s* x);

struct zx_ff12_AuthnRequest_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnRequest_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* AffiliationID;	/* {0,1} xs:anyURI */
  struct zx_elem_s* NameIDPolicy;	/* {0,1} none */
  struct zx_elem_s* ForceAuthn;	/* {0,1} xs:boolean */
  struct zx_elem_s* IsPassive;	/* {0,1} xs:boolean */
  struct zx_elem_s* ProtocolProfile;	/* {0,1} xs:anyURI */
  struct zx_elem_s* AssertionConsumerServiceID;	/* {0,1} xs:string */
  struct zx_ff12_RequestAuthnContext_s* RequestAuthnContext;	/* {0,1} nada */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_ff12_Scoping_s* Scoping;	/* {0,1} nada */
  struct zx_str_s* consent;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_ff12_AuthnRequest_GET_RequestID(struct zx_ff12_AuthnRequest_s* x);
struct zx_str_s* zx_ff12_AuthnRequest_GET_MajorVersion(struct zx_ff12_AuthnRequest_s* x);
struct zx_str_s* zx_ff12_AuthnRequest_GET_MinorVersion(struct zx_ff12_AuthnRequest_s* x);
struct zx_str_s* zx_ff12_AuthnRequest_GET_IssueInstant(struct zx_ff12_AuthnRequest_s* x);
struct zx_str_s* zx_ff12_AuthnRequest_GET_consent(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_RespondWith(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_AuthnRequest_GET_Signature(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_AuthnRequest_GET_Extension(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_ProviderID(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_AffiliationID(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_IsPassive(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_ff12_RequestAuthnContext_s* zx_ff12_AuthnRequest_GET_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequest_GET_RelayState(struct zx_ff12_AuthnRequest_s* x, int n);
struct zx_ff12_Scoping_s* zx_ff12_AuthnRequest_GET_Scoping(struct zx_ff12_AuthnRequest_s* x, int n);
int zx_ff12_AuthnRequest_NUM_RespondWith(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_Signature(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_Extension(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_ProviderID(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_AffiliationID(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_ForceAuthn(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_IsPassive(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_RelayState(struct zx_ff12_AuthnRequest_s* x);
int zx_ff12_AuthnRequest_NUM_Scoping(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_RespondWith(struct zx_ff12_AuthnRequest_s* x);
struct zx_ds_Signature_s* zx_ff12_AuthnRequest_POP_Signature(struct zx_ff12_AuthnRequest_s* x);
struct zx_ff12_Extension_s* zx_ff12_AuthnRequest_POP_Extension(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_ProviderID(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_AffiliationID(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_ForceAuthn(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_IsPassive(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x);
struct zx_ff12_RequestAuthnContext_s* zx_ff12_AuthnRequest_POP_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x);
struct zx_elem_s* zx_ff12_AuthnRequest_POP_RelayState(struct zx_ff12_AuthnRequest_s* x);
struct zx_ff12_Scoping_s* zx_ff12_AuthnRequest_POP_Scoping(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_PUSH_RespondWith(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_Signature(struct zx_ff12_AuthnRequest_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_AuthnRequest_PUSH_Extension(struct zx_ff12_AuthnRequest_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnRequest_PUSH_ProviderID(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_AffiliationID(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_IsPassive(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, struct zx_ff12_RequestAuthnContext_s* y);
void zx_ff12_AuthnRequest_PUSH_RelayState(struct zx_ff12_AuthnRequest_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUSH_Scoping(struct zx_ff12_AuthnRequest_s* x, struct zx_ff12_Scoping_s* y);
void zx_ff12_AuthnRequest_PUT_RequestID(struct zx_ff12_AuthnRequest_s* x, struct zx_str_s* y);
void zx_ff12_AuthnRequest_PUT_MajorVersion(struct zx_ff12_AuthnRequest_s* x, struct zx_str_s* y);
void zx_ff12_AuthnRequest_PUT_MinorVersion(struct zx_ff12_AuthnRequest_s* x, struct zx_str_s* y);
void zx_ff12_AuthnRequest_PUT_IssueInstant(struct zx_ff12_AuthnRequest_s* x, struct zx_str_s* y);
void zx_ff12_AuthnRequest_PUT_consent(struct zx_ff12_AuthnRequest_s* x, struct zx_str_s* y);
void zx_ff12_AuthnRequest_PUT_RespondWith(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_Signature(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_AuthnRequest_PUT_Extension(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnRequest_PUT_ProviderID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_AffiliationID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_IsPassive(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_RequestAuthnContext_s* y);
void zx_ff12_AuthnRequest_PUT_RelayState(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequest_PUT_Scoping(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_Scoping_s* y);
void zx_ff12_AuthnRequest_ADD_RespondWith(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_Signature(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_AuthnRequest_ADD_Extension(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_AuthnRequest_ADD_ProviderID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_AffiliationID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_IsPassive(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_RequestAuthnContext_s* z);
void zx_ff12_AuthnRequest_ADD_RelayState(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequest_ADD_Scoping(struct zx_ff12_AuthnRequest_s* x, int n, struct zx_ff12_Scoping_s* z);
void zx_ff12_AuthnRequest_DEL_RespondWith(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_Signature(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_Extension(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_ProviderID(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_AffiliationID(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_ForceAuthn(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_IsPassive(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_RelayState(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_DEL_Scoping(struct zx_ff12_AuthnRequest_s* x, int n);
void zx_ff12_AuthnRequest_REV_RespondWith(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_Signature(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_Extension(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_ProviderID(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_AffiliationID(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_NameIDPolicy(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_ForceAuthn(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_IsPassive(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_ProtocolProfile(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_AssertionConsumerServiceID(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_RequestAuthnContext(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_RelayState(struct zx_ff12_AuthnRequest_s* x);
void zx_ff12_AuthnRequest_REV_Scoping(struct zx_ff12_AuthnRequest_s* x);

/* -------------------------- ff12_AuthnRequestEnvelope -------------------------- */
/* refby( ) */
#ifndef zx_ff12_AuthnRequestEnvelope_EXT
#define zx_ff12_AuthnRequestEnvelope_EXT
#endif

struct zx_ff12_AuthnRequestEnvelope_s* zx_DEC_ff12_AuthnRequestEnvelope(struct zx_ctx* c);
struct zx_ff12_AuthnRequestEnvelope_s* zx_NEW_ff12_AuthnRequestEnvelope(struct zx_ctx* c);
struct zx_ff12_AuthnRequestEnvelope_s* zx_DEEP_CLONE_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_FREE_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, int free_strs);
int zx_WALK_SO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_AuthnRequestEnvelope(struct zx_ff12_AuthnRequestEnvelope_s* x);
char* zx_ENC_SO_ff12_AuthnRequestEnvelope(struct zx_ff12_AuthnRequestEnvelope_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnRequestEnvelope(struct zx_ff12_AuthnRequestEnvelope_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnRequestEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnRequestEnvelope_s* x);

struct zx_ff12_AuthnRequestEnvelope_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnRequestEnvelope_EXT
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_ff12_AuthnRequest_s* AuthnRequest;	/* {1,1} nada */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ProviderName;	/* {0,1} xs:string */
  struct zx_elem_s* AssertionConsumerServiceURL;	/* {1,1} xs:anyURI */
  struct zx_ff12_IDPList_s* IDPList;	/* {0,1} nada */
  struct zx_elem_s* IsPassive;	/* {0,1} xs:boolean */
};

struct zx_ff12_Extension_s* zx_ff12_AuthnRequestEnvelope_GET_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_ff12_AuthnRequest_s* zx_ff12_AuthnRequestEnvelope_GET_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_GET_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_GET_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_GET_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_ff12_IDPList_s* zx_ff12_AuthnRequestEnvelope_GET_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_GET_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
int zx_ff12_AuthnRequestEnvelope_NUM_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x);
int zx_ff12_AuthnRequestEnvelope_NUM_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_ff12_Extension_s* zx_ff12_AuthnRequestEnvelope_POP_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_ff12_AuthnRequest_s* zx_ff12_AuthnRequestEnvelope_POP_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_POP_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_POP_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_POP_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_ff12_IDPList_s* zx_ff12_AuthnRequestEnvelope_POP_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnRequestEnvelope_POP_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_PUSH_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_ff12_AuthnRequest_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_ff12_IDPList_s* y);
void zx_ff12_AuthnRequestEnvelope_PUSH_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_AuthnRequest_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_IDPList_s* y);
void zx_ff12_AuthnRequestEnvelope_PUT_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnRequestEnvelope_ADD_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_AuthnRequest_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_ff12_IDPList_s* z);
void zx_ff12_AuthnRequestEnvelope_ADD_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnRequestEnvelope_DEL_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_DEL_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x, int n);
void zx_ff12_AuthnRequestEnvelope_REV_Extension(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_AuthnRequest(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_ProviderID(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_ProviderName(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_AssertionConsumerServiceURL(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_IDPList(struct zx_ff12_AuthnRequestEnvelope_s* x);
void zx_ff12_AuthnRequestEnvelope_REV_IsPassive(struct zx_ff12_AuthnRequestEnvelope_s* x);

/* -------------------------- ff12_AuthnResponse -------------------------- */
/* refby( zx_ff12_AuthnResponseEnvelope_s ) */
#ifndef zx_ff12_AuthnResponse_EXT
#define zx_ff12_AuthnResponse_EXT
#endif

struct zx_ff12_AuthnResponse_s* zx_DEC_ff12_AuthnResponse(struct zx_ctx* c);
struct zx_ff12_AuthnResponse_s* zx_NEW_ff12_AuthnResponse(struct zx_ctx* c);
struct zx_ff12_AuthnResponse_s* zx_DEEP_CLONE_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x);
void zx_FREE_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, int free_strs);
int zx_WALK_SO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_AuthnResponse(struct zx_ff12_AuthnResponse_s* x);
char* zx_ENC_SO_ff12_AuthnResponse(struct zx_ff12_AuthnResponse_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnResponse(struct zx_ff12_AuthnResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnResponse(struct zx_ctx* c, struct zx_ff12_AuthnResponse_s* x);

struct zx_ff12_AuthnResponse_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnResponse_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* ResponseID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_sa11_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_str_s* consent;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_ff12_AuthnResponse_GET_ResponseID(struct zx_ff12_AuthnResponse_s* x);
struct zx_str_s* zx_ff12_AuthnResponse_GET_InResponseTo(struct zx_ff12_AuthnResponse_s* x);
struct zx_str_s* zx_ff12_AuthnResponse_GET_MajorVersion(struct zx_ff12_AuthnResponse_s* x);
struct zx_str_s* zx_ff12_AuthnResponse_GET_MinorVersion(struct zx_ff12_AuthnResponse_s* x);
struct zx_str_s* zx_ff12_AuthnResponse_GET_IssueInstant(struct zx_ff12_AuthnResponse_s* x);
struct zx_str_s* zx_ff12_AuthnResponse_GET_Recipient(struct zx_ff12_AuthnResponse_s* x);
struct zx_str_s* zx_ff12_AuthnResponse_GET_consent(struct zx_ff12_AuthnResponse_s* x);
struct zx_ds_Signature_s* zx_ff12_AuthnResponse_GET_Signature(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_sp11_Status_s* zx_ff12_AuthnResponse_GET_Status(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_sa11_Assertion_s* zx_ff12_AuthnResponse_GET_Assertion(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_AuthnResponse_GET_Extension(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnResponse_GET_ProviderID(struct zx_ff12_AuthnResponse_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnResponse_GET_RelayState(struct zx_ff12_AuthnResponse_s* x, int n);
int zx_ff12_AuthnResponse_NUM_Signature(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_Status(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_Assertion(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_Extension(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_ProviderID(struct zx_ff12_AuthnResponse_s* x);
int zx_ff12_AuthnResponse_NUM_RelayState(struct zx_ff12_AuthnResponse_s* x);
struct zx_ds_Signature_s* zx_ff12_AuthnResponse_POP_Signature(struct zx_ff12_AuthnResponse_s* x);
struct zx_sp11_Status_s* zx_ff12_AuthnResponse_POP_Status(struct zx_ff12_AuthnResponse_s* x);
struct zx_sa11_Assertion_s* zx_ff12_AuthnResponse_POP_Assertion(struct zx_ff12_AuthnResponse_s* x);
struct zx_ff12_Extension_s* zx_ff12_AuthnResponse_POP_Extension(struct zx_ff12_AuthnResponse_s* x);
struct zx_elem_s* zx_ff12_AuthnResponse_POP_ProviderID(struct zx_ff12_AuthnResponse_s* x);
struct zx_elem_s* zx_ff12_AuthnResponse_POP_RelayState(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_PUSH_Signature(struct zx_ff12_AuthnResponse_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_AuthnResponse_PUSH_Status(struct zx_ff12_AuthnResponse_s* x, struct zx_sp11_Status_s* y);
void zx_ff12_AuthnResponse_PUSH_Assertion(struct zx_ff12_AuthnResponse_s* x, struct zx_sa11_Assertion_s* y);
void zx_ff12_AuthnResponse_PUSH_Extension(struct zx_ff12_AuthnResponse_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnResponse_PUSH_ProviderID(struct zx_ff12_AuthnResponse_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnResponse_PUSH_RelayState(struct zx_ff12_AuthnResponse_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnResponse_PUT_ResponseID(struct zx_ff12_AuthnResponse_s* x, struct zx_str_s* y);
void zx_ff12_AuthnResponse_PUT_InResponseTo(struct zx_ff12_AuthnResponse_s* x, struct zx_str_s* y);
void zx_ff12_AuthnResponse_PUT_MajorVersion(struct zx_ff12_AuthnResponse_s* x, struct zx_str_s* y);
void zx_ff12_AuthnResponse_PUT_MinorVersion(struct zx_ff12_AuthnResponse_s* x, struct zx_str_s* y);
void zx_ff12_AuthnResponse_PUT_IssueInstant(struct zx_ff12_AuthnResponse_s* x, struct zx_str_s* y);
void zx_ff12_AuthnResponse_PUT_Recipient(struct zx_ff12_AuthnResponse_s* x, struct zx_str_s* y);
void zx_ff12_AuthnResponse_PUT_consent(struct zx_ff12_AuthnResponse_s* x, struct zx_str_s* y);
void zx_ff12_AuthnResponse_PUT_Signature(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_AuthnResponse_PUT_Status(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_sp11_Status_s* y);
void zx_ff12_AuthnResponse_PUT_Assertion(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_ff12_AuthnResponse_PUT_Extension(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnResponse_PUT_ProviderID(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnResponse_PUT_RelayState(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnResponse_ADD_Signature(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_AuthnResponse_ADD_Status(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_sp11_Status_s* z);
void zx_ff12_AuthnResponse_ADD_Assertion(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_ff12_AuthnResponse_ADD_Extension(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_AuthnResponse_ADD_ProviderID(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnResponse_ADD_RelayState(struct zx_ff12_AuthnResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnResponse_DEL_Signature(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_Status(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_Assertion(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_Extension(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_ProviderID(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_DEL_RelayState(struct zx_ff12_AuthnResponse_s* x, int n);
void zx_ff12_AuthnResponse_REV_Signature(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_Status(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_Assertion(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_Extension(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_ProviderID(struct zx_ff12_AuthnResponse_s* x);
void zx_ff12_AuthnResponse_REV_RelayState(struct zx_ff12_AuthnResponse_s* x);

/* -------------------------- ff12_AuthnResponseEnvelope -------------------------- */
/* refby( ) */
#ifndef zx_ff12_AuthnResponseEnvelope_EXT
#define zx_ff12_AuthnResponseEnvelope_EXT
#endif

struct zx_ff12_AuthnResponseEnvelope_s* zx_DEC_ff12_AuthnResponseEnvelope(struct zx_ctx* c);
struct zx_ff12_AuthnResponseEnvelope_s* zx_NEW_ff12_AuthnResponseEnvelope(struct zx_ctx* c);
struct zx_ff12_AuthnResponseEnvelope_s* zx_DEEP_CLONE_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, int dup_strs);
void zx_DUP_STRS_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x);
void zx_FREE_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, int free_strs);
int zx_WALK_SO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_AuthnResponseEnvelope(struct zx_ff12_AuthnResponseEnvelope_s* x);
char* zx_ENC_SO_ff12_AuthnResponseEnvelope(struct zx_ff12_AuthnResponseEnvelope_s* x, char* p);
char* zx_ENC_WO_ff12_AuthnResponseEnvelope(struct zx_ff12_AuthnResponseEnvelope_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_AuthnResponseEnvelope(struct zx_ctx* c, struct zx_ff12_AuthnResponseEnvelope_s* x);

struct zx_ff12_AuthnResponseEnvelope_s {
  ZX_ELEM_EXT
  zx_ff12_AuthnResponseEnvelope_EXT
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_ff12_AuthnResponse_s* AuthnResponse;	/* {1,1} nada */
  struct zx_elem_s* AssertionConsumerServiceURL;	/* {1,1} xs:anyURI */
};

struct zx_ff12_Extension_s* zx_ff12_AuthnResponseEnvelope_GET_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
struct zx_ff12_AuthnResponse_s* zx_ff12_AuthnResponseEnvelope_GET_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
struct zx_elem_s* zx_ff12_AuthnResponseEnvelope_GET_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
int zx_ff12_AuthnResponseEnvelope_NUM_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x);
int zx_ff12_AuthnResponseEnvelope_NUM_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x);
int zx_ff12_AuthnResponseEnvelope_NUM_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x);
struct zx_ff12_Extension_s* zx_ff12_AuthnResponseEnvelope_POP_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x);
struct zx_ff12_AuthnResponse_s* zx_ff12_AuthnResponseEnvelope_POP_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x);
struct zx_elem_s* zx_ff12_AuthnResponseEnvelope_POP_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x);
void zx_ff12_AuthnResponseEnvelope_PUSH_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnResponseEnvelope_PUSH_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, struct zx_ff12_AuthnResponse_s* y);
void zx_ff12_AuthnResponseEnvelope_PUSH_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, struct zx_elem_s* y);
void zx_ff12_AuthnResponseEnvelope_PUT_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_AuthnResponseEnvelope_PUT_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_ff12_AuthnResponse_s* y);
void zx_ff12_AuthnResponseEnvelope_PUT_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_elem_s* y);
void zx_ff12_AuthnResponseEnvelope_ADD_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_AuthnResponseEnvelope_ADD_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_ff12_AuthnResponse_s* z);
void zx_ff12_AuthnResponseEnvelope_ADD_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, int n, struct zx_elem_s* z);
void zx_ff12_AuthnResponseEnvelope_DEL_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
void zx_ff12_AuthnResponseEnvelope_DEL_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
void zx_ff12_AuthnResponseEnvelope_DEL_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x, int n);
void zx_ff12_AuthnResponseEnvelope_REV_Extension(struct zx_ff12_AuthnResponseEnvelope_s* x);
void zx_ff12_AuthnResponseEnvelope_REV_AuthnResponse(struct zx_ff12_AuthnResponseEnvelope_s* x);
void zx_ff12_AuthnResponseEnvelope_REV_AssertionConsumerServiceURL(struct zx_ff12_AuthnResponseEnvelope_s* x);

/* -------------------------- ff12_EncryptableNameIdentifier -------------------------- */
/* refby( ) */
#ifndef zx_ff12_EncryptableNameIdentifier_EXT
#define zx_ff12_EncryptableNameIdentifier_EXT
#endif

struct zx_ff12_EncryptableNameIdentifier_s* zx_DEC_ff12_EncryptableNameIdentifier(struct zx_ctx* c);
struct zx_ff12_EncryptableNameIdentifier_s* zx_NEW_ff12_EncryptableNameIdentifier(struct zx_ctx* c);
struct zx_ff12_EncryptableNameIdentifier_s* zx_DEEP_CLONE_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x);
void zx_FREE_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, int free_strs);
int zx_WALK_SO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_EncryptableNameIdentifier(struct zx_ff12_EncryptableNameIdentifier_s* x);
char* zx_ENC_SO_ff12_EncryptableNameIdentifier(struct zx_ff12_EncryptableNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_EncryptableNameIdentifier(struct zx_ff12_EncryptableNameIdentifier_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_EncryptableNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptableNameIdentifier_s* x);

struct zx_ff12_EncryptableNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_EncryptableNameIdentifier_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* IssueInstant;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* Nonce;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_ff12_EncryptableNameIdentifier_GET_NameQualifier(struct zx_ff12_EncryptableNameIdentifier_s* x);
struct zx_str_s* zx_ff12_EncryptableNameIdentifier_GET_Format(struct zx_ff12_EncryptableNameIdentifier_s* x);
struct zx_str_s* zx_ff12_EncryptableNameIdentifier_GET_IssueInstant(struct zx_ff12_EncryptableNameIdentifier_s* x);
struct zx_str_s* zx_ff12_EncryptableNameIdentifier_GET_Nonce(struct zx_ff12_EncryptableNameIdentifier_s* x);
void zx_ff12_EncryptableNameIdentifier_PUT_NameQualifier(struct zx_ff12_EncryptableNameIdentifier_s* x, struct zx_str_s* y);
void zx_ff12_EncryptableNameIdentifier_PUT_Format(struct zx_ff12_EncryptableNameIdentifier_s* x, struct zx_str_s* y);
void zx_ff12_EncryptableNameIdentifier_PUT_IssueInstant(struct zx_ff12_EncryptableNameIdentifier_s* x, struct zx_str_s* y);
void zx_ff12_EncryptableNameIdentifier_PUT_Nonce(struct zx_ff12_EncryptableNameIdentifier_s* x, struct zx_str_s* y);

/* -------------------------- ff12_EncryptedNameIdentifier -------------------------- */
/* refby( ) */
#ifndef zx_ff12_EncryptedNameIdentifier_EXT
#define zx_ff12_EncryptedNameIdentifier_EXT
#endif

struct zx_ff12_EncryptedNameIdentifier_s* zx_DEC_ff12_EncryptedNameIdentifier(struct zx_ctx* c);
struct zx_ff12_EncryptedNameIdentifier_s* zx_NEW_ff12_EncryptedNameIdentifier(struct zx_ctx* c);
struct zx_ff12_EncryptedNameIdentifier_s* zx_DEEP_CLONE_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x);
void zx_FREE_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, int free_strs);
int zx_WALK_SO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_EncryptedNameIdentifier(struct zx_ff12_EncryptedNameIdentifier_s* x);
char* zx_ENC_SO_ff12_EncryptedNameIdentifier(struct zx_ff12_EncryptedNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_EncryptedNameIdentifier(struct zx_ff12_EncryptedNameIdentifier_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_EncryptedNameIdentifier(struct zx_ctx* c, struct zx_ff12_EncryptedNameIdentifier_s* x);

struct zx_ff12_EncryptedNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_EncryptedNameIdentifier_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,1} nada */
};

struct zx_xenc_EncryptedData_s* zx_ff12_EncryptedNameIdentifier_GET_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_ff12_EncryptedNameIdentifier_GET_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, int n);
int zx_ff12_EncryptedNameIdentifier_NUM_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x);
int zx_ff12_EncryptedNameIdentifier_NUM_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x);
struct zx_xenc_EncryptedData_s* zx_ff12_EncryptedNameIdentifier_POP_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x);
struct zx_xenc_EncryptedKey_s* zx_ff12_EncryptedNameIdentifier_POP_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x);
void zx_ff12_EncryptedNameIdentifier_PUSH_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_ff12_EncryptedNameIdentifier_PUSH_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, struct zx_xenc_EncryptedKey_s* y);
void zx_ff12_EncryptedNameIdentifier_PUT_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_ff12_EncryptedNameIdentifier_PUT_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, int n, struct zx_xenc_EncryptedKey_s* y);
void zx_ff12_EncryptedNameIdentifier_ADD_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_ff12_EncryptedNameIdentifier_ADD_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, int n, struct zx_xenc_EncryptedKey_s* z);
void zx_ff12_EncryptedNameIdentifier_DEL_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x, int n);
void zx_ff12_EncryptedNameIdentifier_DEL_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x, int n);
void zx_ff12_EncryptedNameIdentifier_REV_EncryptedData(struct zx_ff12_EncryptedNameIdentifier_s* x);
void zx_ff12_EncryptedNameIdentifier_REV_EncryptedKey(struct zx_ff12_EncryptedNameIdentifier_s* x);

/* -------------------------- ff12_Extension -------------------------- */
/* refby( zx_ff12_AuthnResponse_s zx_ff12_NameIdentifierMappingResponse_s zx_ff12_AuthnRequestEnvelope_s zx_ff12_RegisterNameIdentifierRequest_s zx_ff12_FederationTerminationNotification_s zx_ff12_AuthnRequest_s zx_ff12_NameIdentifierMappingRequest_s zx_ff12_RegisterNameIdentifierResponse_s zx_ff12_LogoutResponse_s zx_ff12_LogoutRequest_s zx_ff12_AuthnResponseEnvelope_s ) */
#ifndef zx_ff12_Extension_EXT
#define zx_ff12_Extension_EXT
#endif

struct zx_ff12_Extension_s* zx_DEC_ff12_Extension(struct zx_ctx* c);
struct zx_ff12_Extension_s* zx_NEW_ff12_Extension(struct zx_ctx* c);
struct zx_ff12_Extension_s* zx_DEEP_CLONE_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, int dup_strs);
void zx_DUP_STRS_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x);
void zx_FREE_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, int free_strs);
int zx_WALK_SO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_Extension(struct zx_ff12_Extension_s* x);
char* zx_ENC_SO_ff12_Extension(struct zx_ff12_Extension_s* x, char* p);
char* zx_ENC_WO_ff12_Extension(struct zx_ff12_Extension_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_Extension(struct zx_ctx* c, struct zx_ff12_Extension_s* x);

struct zx_ff12_Extension_s {
  ZX_ELEM_EXT
  zx_ff12_Extension_EXT
};


/* -------------------------- ff12_FederationTerminationNotification -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_ff12_FederationTerminationNotification_EXT
#define zx_ff12_FederationTerminationNotification_EXT
#endif

struct zx_ff12_FederationTerminationNotification_s* zx_DEC_ff12_FederationTerminationNotification(struct zx_ctx* c);
struct zx_ff12_FederationTerminationNotification_s* zx_NEW_ff12_FederationTerminationNotification(struct zx_ctx* c);
struct zx_ff12_FederationTerminationNotification_s* zx_DEEP_CLONE_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, int dup_strs);
void zx_DUP_STRS_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x);
void zx_FREE_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, int free_strs);
int zx_WALK_SO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_FederationTerminationNotification(struct zx_ff12_FederationTerminationNotification_s* x);
char* zx_ENC_SO_ff12_FederationTerminationNotification(struct zx_ff12_FederationTerminationNotification_s* x, char* p);
char* zx_ENC_WO_ff12_FederationTerminationNotification(struct zx_ff12_FederationTerminationNotification_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_FederationTerminationNotification(struct zx_ctx* c, struct zx_ff12_FederationTerminationNotification_s* x);

struct zx_ff12_FederationTerminationNotification_s {
  ZX_ELEM_EXT
  zx_ff12_FederationTerminationNotification_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {1,1} nada */
  struct zx_str_s* consent;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_ff12_FederationTerminationNotification_GET_RequestID(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str_s* zx_ff12_FederationTerminationNotification_GET_MajorVersion(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str_s* zx_ff12_FederationTerminationNotification_GET_MinorVersion(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str_s* zx_ff12_FederationTerminationNotification_GET_IssueInstant(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_str_s* zx_ff12_FederationTerminationNotification_GET_consent(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_elem_s* zx_ff12_FederationTerminationNotification_GET_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_FederationTerminationNotification_GET_Signature(struct zx_ff12_FederationTerminationNotification_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_FederationTerminationNotification_GET_Extension(struct zx_ff12_FederationTerminationNotification_s* x, int n);
struct zx_elem_s* zx_ff12_FederationTerminationNotification_GET_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, int n);
struct zx_sa11_NameIdentifier_s* zx_ff12_FederationTerminationNotification_GET_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, int n);
int zx_ff12_FederationTerminationNotification_NUM_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x);
int zx_ff12_FederationTerminationNotification_NUM_Signature(struct zx_ff12_FederationTerminationNotification_s* x);
int zx_ff12_FederationTerminationNotification_NUM_Extension(struct zx_ff12_FederationTerminationNotification_s* x);
int zx_ff12_FederationTerminationNotification_NUM_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x);
int zx_ff12_FederationTerminationNotification_NUM_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_elem_s* zx_ff12_FederationTerminationNotification_POP_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_ds_Signature_s* zx_ff12_FederationTerminationNotification_POP_Signature(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_ff12_Extension_s* zx_ff12_FederationTerminationNotification_POP_Extension(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_elem_s* zx_ff12_FederationTerminationNotification_POP_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_FederationTerminationNotification_POP_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_PUSH_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_elem_s* y);
void zx_ff12_FederationTerminationNotification_PUSH_Signature(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_FederationTerminationNotification_PUSH_Extension(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_FederationTerminationNotification_PUSH_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_elem_s* y);
void zx_ff12_FederationTerminationNotification_PUSH_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_FederationTerminationNotification_PUT_RequestID(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str_s* y);
void zx_ff12_FederationTerminationNotification_PUT_MajorVersion(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str_s* y);
void zx_ff12_FederationTerminationNotification_PUT_MinorVersion(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str_s* y);
void zx_ff12_FederationTerminationNotification_PUT_IssueInstant(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str_s* y);
void zx_ff12_FederationTerminationNotification_PUT_consent(struct zx_ff12_FederationTerminationNotification_s* x, struct zx_str_s* y);
void zx_ff12_FederationTerminationNotification_PUT_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_elem_s* y);
void zx_ff12_FederationTerminationNotification_PUT_Signature(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_FederationTerminationNotification_PUT_Extension(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_FederationTerminationNotification_PUT_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_elem_s* y);
void zx_ff12_FederationTerminationNotification_PUT_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_FederationTerminationNotification_ADD_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_elem_s* z);
void zx_ff12_FederationTerminationNotification_ADD_Signature(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_FederationTerminationNotification_ADD_Extension(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_FederationTerminationNotification_ADD_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_elem_s* z);
void zx_ff12_FederationTerminationNotification_ADD_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_ff12_FederationTerminationNotification_DEL_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_DEL_Signature(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_DEL_Extension(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_DEL_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_DEL_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x, int n);
void zx_ff12_FederationTerminationNotification_REV_RespondWith(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_REV_Signature(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_REV_Extension(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_REV_ProviderID(struct zx_ff12_FederationTerminationNotification_s* x);
void zx_ff12_FederationTerminationNotification_REV_NameIdentifier(struct zx_ff12_FederationTerminationNotification_s* x);

/* -------------------------- ff12_IDPEntries -------------------------- */
/* refby( zx_ff12_IDPList_s ) */
#ifndef zx_ff12_IDPEntries_EXT
#define zx_ff12_IDPEntries_EXT
#endif

struct zx_ff12_IDPEntries_s* zx_DEC_ff12_IDPEntries(struct zx_ctx* c);
struct zx_ff12_IDPEntries_s* zx_NEW_ff12_IDPEntries(struct zx_ctx* c);
struct zx_ff12_IDPEntries_s* zx_DEEP_CLONE_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, int dup_strs);
void zx_DUP_STRS_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x);
void zx_FREE_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, int free_strs);
int zx_WALK_SO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_IDPEntries(struct zx_ff12_IDPEntries_s* x);
char* zx_ENC_SO_ff12_IDPEntries(struct zx_ff12_IDPEntries_s* x, char* p);
char* zx_ENC_WO_ff12_IDPEntries(struct zx_ff12_IDPEntries_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_IDPEntries(struct zx_ctx* c, struct zx_ff12_IDPEntries_s* x);

struct zx_ff12_IDPEntries_s {
  ZX_ELEM_EXT
  zx_ff12_IDPEntries_EXT
  struct zx_ff12_IDPEntry_s* IDPEntry;	/* {1,-1} nada */
};

struct zx_ff12_IDPEntry_s* zx_ff12_IDPEntries_GET_IDPEntry(struct zx_ff12_IDPEntries_s* x, int n);
int zx_ff12_IDPEntries_NUM_IDPEntry(struct zx_ff12_IDPEntries_s* x);
struct zx_ff12_IDPEntry_s* zx_ff12_IDPEntries_POP_IDPEntry(struct zx_ff12_IDPEntries_s* x);
void zx_ff12_IDPEntries_PUSH_IDPEntry(struct zx_ff12_IDPEntries_s* x, struct zx_ff12_IDPEntry_s* y);
void zx_ff12_IDPEntries_PUT_IDPEntry(struct zx_ff12_IDPEntries_s* x, int n, struct zx_ff12_IDPEntry_s* y);
void zx_ff12_IDPEntries_ADD_IDPEntry(struct zx_ff12_IDPEntries_s* x, int n, struct zx_ff12_IDPEntry_s* z);
void zx_ff12_IDPEntries_DEL_IDPEntry(struct zx_ff12_IDPEntries_s* x, int n);
void zx_ff12_IDPEntries_REV_IDPEntry(struct zx_ff12_IDPEntries_s* x);

/* -------------------------- ff12_IDPEntry -------------------------- */
/* refby( zx_ff12_IDPEntries_s ) */
#ifndef zx_ff12_IDPEntry_EXT
#define zx_ff12_IDPEntry_EXT
#endif

struct zx_ff12_IDPEntry_s* zx_DEC_ff12_IDPEntry(struct zx_ctx* c);
struct zx_ff12_IDPEntry_s* zx_NEW_ff12_IDPEntry(struct zx_ctx* c);
struct zx_ff12_IDPEntry_s* zx_DEEP_CLONE_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, int dup_strs);
void zx_DUP_STRS_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x);
void zx_FREE_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, int free_strs);
int zx_WALK_SO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_IDPEntry(struct zx_ff12_IDPEntry_s* x);
char* zx_ENC_SO_ff12_IDPEntry(struct zx_ff12_IDPEntry_s* x, char* p);
char* zx_ENC_WO_ff12_IDPEntry(struct zx_ff12_IDPEntry_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_IDPEntry(struct zx_ctx* c, struct zx_ff12_IDPEntry_s* x);

struct zx_ff12_IDPEntry_s {
  ZX_ELEM_EXT
  zx_ff12_IDPEntry_EXT
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* ProviderName;	/* {0,1} xs:string */
  struct zx_elem_s* Loc;	/* {1,1} xs:anyURI */
};

struct zx_elem_s* zx_ff12_IDPEntry_GET_ProviderID(struct zx_ff12_IDPEntry_s* x, int n);
struct zx_elem_s* zx_ff12_IDPEntry_GET_ProviderName(struct zx_ff12_IDPEntry_s* x, int n);
struct zx_elem_s* zx_ff12_IDPEntry_GET_Loc(struct zx_ff12_IDPEntry_s* x, int n);
int zx_ff12_IDPEntry_NUM_ProviderID(struct zx_ff12_IDPEntry_s* x);
int zx_ff12_IDPEntry_NUM_ProviderName(struct zx_ff12_IDPEntry_s* x);
int zx_ff12_IDPEntry_NUM_Loc(struct zx_ff12_IDPEntry_s* x);
struct zx_elem_s* zx_ff12_IDPEntry_POP_ProviderID(struct zx_ff12_IDPEntry_s* x);
struct zx_elem_s* zx_ff12_IDPEntry_POP_ProviderName(struct zx_ff12_IDPEntry_s* x);
struct zx_elem_s* zx_ff12_IDPEntry_POP_Loc(struct zx_ff12_IDPEntry_s* x);
void zx_ff12_IDPEntry_PUSH_ProviderID(struct zx_ff12_IDPEntry_s* x, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUSH_ProviderName(struct zx_ff12_IDPEntry_s* x, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUSH_Loc(struct zx_ff12_IDPEntry_s* x, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUT_ProviderID(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUT_ProviderName(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* y);
void zx_ff12_IDPEntry_PUT_Loc(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* y);
void zx_ff12_IDPEntry_ADD_ProviderID(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* z);
void zx_ff12_IDPEntry_ADD_ProviderName(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* z);
void zx_ff12_IDPEntry_ADD_Loc(struct zx_ff12_IDPEntry_s* x, int n, struct zx_elem_s* z);
void zx_ff12_IDPEntry_DEL_ProviderID(struct zx_ff12_IDPEntry_s* x, int n);
void zx_ff12_IDPEntry_DEL_ProviderName(struct zx_ff12_IDPEntry_s* x, int n);
void zx_ff12_IDPEntry_DEL_Loc(struct zx_ff12_IDPEntry_s* x, int n);
void zx_ff12_IDPEntry_REV_ProviderID(struct zx_ff12_IDPEntry_s* x);
void zx_ff12_IDPEntry_REV_ProviderName(struct zx_ff12_IDPEntry_s* x);
void zx_ff12_IDPEntry_REV_Loc(struct zx_ff12_IDPEntry_s* x);

/* -------------------------- ff12_IDPList -------------------------- */
/* refby( zx_ff12_AuthnRequestEnvelope_s zx_ff12_Scoping_s ) */
#ifndef zx_ff12_IDPList_EXT
#define zx_ff12_IDPList_EXT
#endif

struct zx_ff12_IDPList_s* zx_DEC_ff12_IDPList(struct zx_ctx* c);
struct zx_ff12_IDPList_s* zx_NEW_ff12_IDPList(struct zx_ctx* c);
struct zx_ff12_IDPList_s* zx_DEEP_CLONE_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, int dup_strs);
void zx_DUP_STRS_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x);
void zx_FREE_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, int free_strs);
int zx_WALK_SO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_IDPList(struct zx_ff12_IDPList_s* x);
char* zx_ENC_SO_ff12_IDPList(struct zx_ff12_IDPList_s* x, char* p);
char* zx_ENC_WO_ff12_IDPList(struct zx_ff12_IDPList_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_IDPList(struct zx_ctx* c, struct zx_ff12_IDPList_s* x);

struct zx_ff12_IDPList_s {
  ZX_ELEM_EXT
  zx_ff12_IDPList_EXT
  struct zx_ff12_IDPEntries_s* IDPEntries;	/* {1,1}  */
  struct zx_elem_s* GetComplete;	/* {0,1} xs:anyURI */
};

struct zx_ff12_IDPEntries_s* zx_ff12_IDPList_GET_IDPEntries(struct zx_ff12_IDPList_s* x, int n);
struct zx_elem_s* zx_ff12_IDPList_GET_GetComplete(struct zx_ff12_IDPList_s* x, int n);
int zx_ff12_IDPList_NUM_IDPEntries(struct zx_ff12_IDPList_s* x);
int zx_ff12_IDPList_NUM_GetComplete(struct zx_ff12_IDPList_s* x);
struct zx_ff12_IDPEntries_s* zx_ff12_IDPList_POP_IDPEntries(struct zx_ff12_IDPList_s* x);
struct zx_elem_s* zx_ff12_IDPList_POP_GetComplete(struct zx_ff12_IDPList_s* x);
void zx_ff12_IDPList_PUSH_IDPEntries(struct zx_ff12_IDPList_s* x, struct zx_ff12_IDPEntries_s* y);
void zx_ff12_IDPList_PUSH_GetComplete(struct zx_ff12_IDPList_s* x, struct zx_elem_s* y);
void zx_ff12_IDPList_PUT_IDPEntries(struct zx_ff12_IDPList_s* x, int n, struct zx_ff12_IDPEntries_s* y);
void zx_ff12_IDPList_PUT_GetComplete(struct zx_ff12_IDPList_s* x, int n, struct zx_elem_s* y);
void zx_ff12_IDPList_ADD_IDPEntries(struct zx_ff12_IDPList_s* x, int n, struct zx_ff12_IDPEntries_s* z);
void zx_ff12_IDPList_ADD_GetComplete(struct zx_ff12_IDPList_s* x, int n, struct zx_elem_s* z);
void zx_ff12_IDPList_DEL_IDPEntries(struct zx_ff12_IDPList_s* x, int n);
void zx_ff12_IDPList_DEL_GetComplete(struct zx_ff12_IDPList_s* x, int n);
void zx_ff12_IDPList_REV_IDPEntries(struct zx_ff12_IDPList_s* x);
void zx_ff12_IDPList_REV_GetComplete(struct zx_ff12_IDPList_s* x);

/* -------------------------- ff12_IDPProvidedNameIdentifier -------------------------- */
/* refby( zx_ff12_RegisterNameIdentifierRequest_s zx_ff12_Subject_s ) */
#ifndef zx_ff12_IDPProvidedNameIdentifier_EXT
#define zx_ff12_IDPProvidedNameIdentifier_EXT
#endif

struct zx_ff12_IDPProvidedNameIdentifier_s* zx_DEC_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_NEW_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_DEEP_CLONE_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x);
void zx_FREE_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, int free_strs);
int zx_WALK_SO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_IDPProvidedNameIdentifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x);
char* zx_ENC_SO_ff12_IDPProvidedNameIdentifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_IDPProvidedNameIdentifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_IDPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_IDPProvidedNameIdentifier_s* x);

struct zx_ff12_IDPProvidedNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_IDPProvidedNameIdentifier_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ff12_IDPProvidedNameIdentifier_GET_NameQualifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x);
struct zx_str_s* zx_ff12_IDPProvidedNameIdentifier_GET_Format(struct zx_ff12_IDPProvidedNameIdentifier_s* x);
void zx_ff12_IDPProvidedNameIdentifier_PUT_NameQualifier(struct zx_ff12_IDPProvidedNameIdentifier_s* x, struct zx_str_s* y);
void zx_ff12_IDPProvidedNameIdentifier_PUT_Format(struct zx_ff12_IDPProvidedNameIdentifier_s* x, struct zx_str_s* y);

/* -------------------------- ff12_LogoutRequest -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_ff12_LogoutRequest_EXT
#define zx_ff12_LogoutRequest_EXT
#endif

struct zx_ff12_LogoutRequest_s* zx_DEC_ff12_LogoutRequest(struct zx_ctx* c);
struct zx_ff12_LogoutRequest_s* zx_NEW_ff12_LogoutRequest(struct zx_ctx* c);
struct zx_ff12_LogoutRequest_s* zx_DEEP_CLONE_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, int dup_strs);
void zx_DUP_STRS_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x);
void zx_FREE_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, int free_strs);
int zx_WALK_SO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_LogoutRequest(struct zx_ff12_LogoutRequest_s* x);
char* zx_ENC_SO_ff12_LogoutRequest(struct zx_ff12_LogoutRequest_s* x, char* p);
char* zx_ENC_WO_ff12_LogoutRequest(struct zx_ff12_LogoutRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_LogoutRequest(struct zx_ctx* c, struct zx_ff12_LogoutRequest_s* x);

struct zx_ff12_LogoutRequest_s {
  ZX_ELEM_EXT
  zx_ff12_LogoutRequest_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {1,1} nada */
  struct zx_elem_s* SessionIndex;	/* {0,-1} xs:string */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
  struct zx_str_s* consent;	/* {0,1} attribute xs:string */
  struct zx_str_s* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

struct zx_str_s* zx_ff12_LogoutRequest_GET_RequestID(struct zx_ff12_LogoutRequest_s* x);
struct zx_str_s* zx_ff12_LogoutRequest_GET_MajorVersion(struct zx_ff12_LogoutRequest_s* x);
struct zx_str_s* zx_ff12_LogoutRequest_GET_MinorVersion(struct zx_ff12_LogoutRequest_s* x);
struct zx_str_s* zx_ff12_LogoutRequest_GET_IssueInstant(struct zx_ff12_LogoutRequest_s* x);
struct zx_str_s* zx_ff12_LogoutRequest_GET_consent(struct zx_ff12_LogoutRequest_s* x);
struct zx_str_s* zx_ff12_LogoutRequest_GET_NotOnOrAfter(struct zx_ff12_LogoutRequest_s* x);
struct zx_elem_s* zx_ff12_LogoutRequest_GET_RespondWith(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_LogoutRequest_GET_Signature(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_LogoutRequest_GET_Extension(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutRequest_GET_ProviderID(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_sa11_NameIdentifier_s* zx_ff12_LogoutRequest_GET_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutRequest_GET_SessionIndex(struct zx_ff12_LogoutRequest_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutRequest_GET_RelayState(struct zx_ff12_LogoutRequest_s* x, int n);
int zx_ff12_LogoutRequest_NUM_RespondWith(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_Signature(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_Extension(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_ProviderID(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_NameIdentifier(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_SessionIndex(struct zx_ff12_LogoutRequest_s* x);
int zx_ff12_LogoutRequest_NUM_RelayState(struct zx_ff12_LogoutRequest_s* x);
struct zx_elem_s* zx_ff12_LogoutRequest_POP_RespondWith(struct zx_ff12_LogoutRequest_s* x);
struct zx_ds_Signature_s* zx_ff12_LogoutRequest_POP_Signature(struct zx_ff12_LogoutRequest_s* x);
struct zx_ff12_Extension_s* zx_ff12_LogoutRequest_POP_Extension(struct zx_ff12_LogoutRequest_s* x);
struct zx_elem_s* zx_ff12_LogoutRequest_POP_ProviderID(struct zx_ff12_LogoutRequest_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_LogoutRequest_POP_NameIdentifier(struct zx_ff12_LogoutRequest_s* x);
struct zx_elem_s* zx_ff12_LogoutRequest_POP_SessionIndex(struct zx_ff12_LogoutRequest_s* x);
struct zx_elem_s* zx_ff12_LogoutRequest_POP_RelayState(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_PUSH_RespondWith(struct zx_ff12_LogoutRequest_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUSH_Signature(struct zx_ff12_LogoutRequest_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_LogoutRequest_PUSH_Extension(struct zx_ff12_LogoutRequest_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_LogoutRequest_PUSH_ProviderID(struct zx_ff12_LogoutRequest_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUSH_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_LogoutRequest_PUSH_SessionIndex(struct zx_ff12_LogoutRequest_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUSH_RelayState(struct zx_ff12_LogoutRequest_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUT_RequestID(struct zx_ff12_LogoutRequest_s* x, struct zx_str_s* y);
void zx_ff12_LogoutRequest_PUT_MajorVersion(struct zx_ff12_LogoutRequest_s* x, struct zx_str_s* y);
void zx_ff12_LogoutRequest_PUT_MinorVersion(struct zx_ff12_LogoutRequest_s* x, struct zx_str_s* y);
void zx_ff12_LogoutRequest_PUT_IssueInstant(struct zx_ff12_LogoutRequest_s* x, struct zx_str_s* y);
void zx_ff12_LogoutRequest_PUT_consent(struct zx_ff12_LogoutRequest_s* x, struct zx_str_s* y);
void zx_ff12_LogoutRequest_PUT_NotOnOrAfter(struct zx_ff12_LogoutRequest_s* x, struct zx_str_s* y);
void zx_ff12_LogoutRequest_PUT_RespondWith(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUT_Signature(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_LogoutRequest_PUT_Extension(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_LogoutRequest_PUT_ProviderID(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUT_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_LogoutRequest_PUT_SessionIndex(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_PUT_RelayState(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutRequest_ADD_RespondWith(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutRequest_ADD_Signature(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_LogoutRequest_ADD_Extension(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_LogoutRequest_ADD_ProviderID(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutRequest_ADD_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_ff12_LogoutRequest_ADD_SessionIndex(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutRequest_ADD_RelayState(struct zx_ff12_LogoutRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutRequest_DEL_RespondWith(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_Signature(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_Extension(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_ProviderID(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_NameIdentifier(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_SessionIndex(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_DEL_RelayState(struct zx_ff12_LogoutRequest_s* x, int n);
void zx_ff12_LogoutRequest_REV_RespondWith(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_Signature(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_Extension(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_ProviderID(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_NameIdentifier(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_SessionIndex(struct zx_ff12_LogoutRequest_s* x);
void zx_ff12_LogoutRequest_REV_RelayState(struct zx_ff12_LogoutRequest_s* x);

/* -------------------------- ff12_LogoutResponse -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_ff12_LogoutResponse_EXT
#define zx_ff12_LogoutResponse_EXT
#endif

struct zx_ff12_LogoutResponse_s* zx_DEC_ff12_LogoutResponse(struct zx_ctx* c);
struct zx_ff12_LogoutResponse_s* zx_NEW_ff12_LogoutResponse(struct zx_ctx* c);
struct zx_ff12_LogoutResponse_s* zx_DEEP_CLONE_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, int dup_strs);
void zx_DUP_STRS_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x);
void zx_FREE_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, int free_strs);
int zx_WALK_SO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_LogoutResponse(struct zx_ff12_LogoutResponse_s* x);
char* zx_ENC_SO_ff12_LogoutResponse(struct zx_ff12_LogoutResponse_s* x, char* p);
char* zx_ENC_WO_ff12_LogoutResponse(struct zx_ff12_LogoutResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_LogoutResponse(struct zx_ctx* c, struct zx_ff12_LogoutResponse_s* x);

struct zx_ff12_LogoutResponse_s {
  ZX_ELEM_EXT
  zx_ff12_LogoutResponse_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* ResponseID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
};

struct zx_str_s* zx_ff12_LogoutResponse_GET_ResponseID(struct zx_ff12_LogoutResponse_s* x);
struct zx_str_s* zx_ff12_LogoutResponse_GET_InResponseTo(struct zx_ff12_LogoutResponse_s* x);
struct zx_str_s* zx_ff12_LogoutResponse_GET_MajorVersion(struct zx_ff12_LogoutResponse_s* x);
struct zx_str_s* zx_ff12_LogoutResponse_GET_MinorVersion(struct zx_ff12_LogoutResponse_s* x);
struct zx_str_s* zx_ff12_LogoutResponse_GET_IssueInstant(struct zx_ff12_LogoutResponse_s* x);
struct zx_str_s* zx_ff12_LogoutResponse_GET_Recipient(struct zx_ff12_LogoutResponse_s* x);
struct zx_ds_Signature_s* zx_ff12_LogoutResponse_GET_Signature(struct zx_ff12_LogoutResponse_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_LogoutResponse_GET_Extension(struct zx_ff12_LogoutResponse_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutResponse_GET_ProviderID(struct zx_ff12_LogoutResponse_s* x, int n);
struct zx_sp11_Status_s* zx_ff12_LogoutResponse_GET_Status(struct zx_ff12_LogoutResponse_s* x, int n);
struct zx_elem_s* zx_ff12_LogoutResponse_GET_RelayState(struct zx_ff12_LogoutResponse_s* x, int n);
int zx_ff12_LogoutResponse_NUM_Signature(struct zx_ff12_LogoutResponse_s* x);
int zx_ff12_LogoutResponse_NUM_Extension(struct zx_ff12_LogoutResponse_s* x);
int zx_ff12_LogoutResponse_NUM_ProviderID(struct zx_ff12_LogoutResponse_s* x);
int zx_ff12_LogoutResponse_NUM_Status(struct zx_ff12_LogoutResponse_s* x);
int zx_ff12_LogoutResponse_NUM_RelayState(struct zx_ff12_LogoutResponse_s* x);
struct zx_ds_Signature_s* zx_ff12_LogoutResponse_POP_Signature(struct zx_ff12_LogoutResponse_s* x);
struct zx_ff12_Extension_s* zx_ff12_LogoutResponse_POP_Extension(struct zx_ff12_LogoutResponse_s* x);
struct zx_elem_s* zx_ff12_LogoutResponse_POP_ProviderID(struct zx_ff12_LogoutResponse_s* x);
struct zx_sp11_Status_s* zx_ff12_LogoutResponse_POP_Status(struct zx_ff12_LogoutResponse_s* x);
struct zx_elem_s* zx_ff12_LogoutResponse_POP_RelayState(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_PUSH_Signature(struct zx_ff12_LogoutResponse_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_LogoutResponse_PUSH_Extension(struct zx_ff12_LogoutResponse_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_LogoutResponse_PUSH_ProviderID(struct zx_ff12_LogoutResponse_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutResponse_PUSH_Status(struct zx_ff12_LogoutResponse_s* x, struct zx_sp11_Status_s* y);
void zx_ff12_LogoutResponse_PUSH_RelayState(struct zx_ff12_LogoutResponse_s* x, struct zx_elem_s* y);
void zx_ff12_LogoutResponse_PUT_ResponseID(struct zx_ff12_LogoutResponse_s* x, struct zx_str_s* y);
void zx_ff12_LogoutResponse_PUT_InResponseTo(struct zx_ff12_LogoutResponse_s* x, struct zx_str_s* y);
void zx_ff12_LogoutResponse_PUT_MajorVersion(struct zx_ff12_LogoutResponse_s* x, struct zx_str_s* y);
void zx_ff12_LogoutResponse_PUT_MinorVersion(struct zx_ff12_LogoutResponse_s* x, struct zx_str_s* y);
void zx_ff12_LogoutResponse_PUT_IssueInstant(struct zx_ff12_LogoutResponse_s* x, struct zx_str_s* y);
void zx_ff12_LogoutResponse_PUT_Recipient(struct zx_ff12_LogoutResponse_s* x, struct zx_str_s* y);
void zx_ff12_LogoutResponse_PUT_Signature(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_LogoutResponse_PUT_Extension(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_LogoutResponse_PUT_ProviderID(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutResponse_PUT_Status(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_sp11_Status_s* y);
void zx_ff12_LogoutResponse_PUT_RelayState(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_LogoutResponse_ADD_Signature(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_LogoutResponse_ADD_Extension(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_LogoutResponse_ADD_ProviderID(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutResponse_ADD_Status(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_sp11_Status_s* z);
void zx_ff12_LogoutResponse_ADD_RelayState(struct zx_ff12_LogoutResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_LogoutResponse_DEL_Signature(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_DEL_Extension(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_DEL_ProviderID(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_DEL_Status(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_DEL_RelayState(struct zx_ff12_LogoutResponse_s* x, int n);
void zx_ff12_LogoutResponse_REV_Signature(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_REV_Extension(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_REV_ProviderID(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_REV_Status(struct zx_ff12_LogoutResponse_s* x);
void zx_ff12_LogoutResponse_REV_RelayState(struct zx_ff12_LogoutResponse_s* x);

/* -------------------------- ff12_NameIdentifierMappingRequest -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_ff12_NameIdentifierMappingRequest_EXT
#define zx_ff12_NameIdentifierMappingRequest_EXT
#endif

struct zx_ff12_NameIdentifierMappingRequest_s* zx_DEC_ff12_NameIdentifierMappingRequest(struct zx_ctx* c);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_NEW_ff12_NameIdentifierMappingRequest(struct zx_ctx* c);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_DEEP_CLONE_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, int dup_strs);
void zx_DUP_STRS_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_FREE_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, int free_strs);
int zx_WALK_SO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_NameIdentifierMappingRequest(struct zx_ff12_NameIdentifierMappingRequest_s* x);
char* zx_ENC_SO_ff12_NameIdentifierMappingRequest(struct zx_ff12_NameIdentifierMappingRequest_s* x, char* p);
char* zx_ENC_WO_ff12_NameIdentifierMappingRequest(struct zx_ff12_NameIdentifierMappingRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_NameIdentifierMappingRequest(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingRequest_s* x);

struct zx_ff12_NameIdentifierMappingRequest_s {
  ZX_ELEM_EXT
  zx_ff12_NameIdentifierMappingRequest_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {1,1} nada */
  struct zx_elem_s* TargetNamespace;	/* {1,1} xs:anyURI */
  struct zx_str_s* consent;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_ff12_NameIdentifierMappingRequest_GET_RequestID(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingRequest_GET_MajorVersion(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingRequest_GET_MinorVersion(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingRequest_GET_IssueInstant(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingRequest_GET_consent(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_GET_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_NameIdentifierMappingRequest_GET_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_NameIdentifierMappingRequest_GET_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_GET_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_sa11_NameIdentifier_s* zx_ff12_NameIdentifierMappingRequest_GET_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_GET_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
int zx_ff12_NameIdentifierMappingRequest_NUM_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x);
int zx_ff12_NameIdentifierMappingRequest_NUM_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_POP_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_ds_Signature_s* zx_ff12_NameIdentifierMappingRequest_POP_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_ff12_Extension_s* zx_ff12_NameIdentifierMappingRequest_POP_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_POP_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_NameIdentifierMappingRequest_POP_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x);
struct zx_elem_s* zx_ff12_NameIdentifierMappingRequest_POP_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_PUSH_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUSH_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_RequestID(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_MajorVersion(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_MinorVersion(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_IssueInstant(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_consent(struct zx_ff12_NameIdentifierMappingRequest_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_NameIdentifierMappingRequest_PUT_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingRequest_ADD_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_ff12_NameIdentifierMappingRequest_ADD_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_NameIdentifierMappingRequest_DEL_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_DEL_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x, int n);
void zx_ff12_NameIdentifierMappingRequest_REV_RespondWith(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_Signature(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_Extension(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_ProviderID(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_NameIdentifier(struct zx_ff12_NameIdentifierMappingRequest_s* x);
void zx_ff12_NameIdentifierMappingRequest_REV_TargetNamespace(struct zx_ff12_NameIdentifierMappingRequest_s* x);

/* -------------------------- ff12_NameIdentifierMappingResponse -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_ff12_NameIdentifierMappingResponse_EXT
#define zx_ff12_NameIdentifierMappingResponse_EXT
#endif

struct zx_ff12_NameIdentifierMappingResponse_s* zx_DEC_ff12_NameIdentifierMappingResponse(struct zx_ctx* c);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_NEW_ff12_NameIdentifierMappingResponse(struct zx_ctx* c);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_DEEP_CLONE_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, int dup_strs);
void zx_DUP_STRS_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_FREE_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, int free_strs);
int zx_WALK_SO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_NameIdentifierMappingResponse(struct zx_ff12_NameIdentifierMappingResponse_s* x);
char* zx_ENC_SO_ff12_NameIdentifierMappingResponse(struct zx_ff12_NameIdentifierMappingResponse_s* x, char* p);
char* zx_ENC_WO_ff12_NameIdentifierMappingResponse(struct zx_ff12_NameIdentifierMappingResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_NameIdentifierMappingResponse(struct zx_ctx* c, struct zx_ff12_NameIdentifierMappingResponse_s* x);

struct zx_ff12_NameIdentifierMappingResponse_s {
  ZX_ELEM_EXT
  zx_ff12_NameIdentifierMappingResponse_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* ResponseID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {0,1} nada */
};

struct zx_str_s* zx_ff12_NameIdentifierMappingResponse_GET_ResponseID(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingResponse_GET_InResponseTo(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingResponse_GET_MajorVersion(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingResponse_GET_MinorVersion(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingResponse_GET_IssueInstant(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_str_s* zx_ff12_NameIdentifierMappingResponse_GET_Recipient(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_ds_Signature_s* zx_ff12_NameIdentifierMappingResponse_GET_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_NameIdentifierMappingResponse_GET_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
struct zx_elem_s* zx_ff12_NameIdentifierMappingResponse_GET_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
struct zx_sp11_Status_s* zx_ff12_NameIdentifierMappingResponse_GET_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
struct zx_sa11_NameIdentifier_s* zx_ff12_NameIdentifierMappingResponse_GET_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
int zx_ff12_NameIdentifierMappingResponse_NUM_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_ff12_NameIdentifierMappingResponse_NUM_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_ff12_NameIdentifierMappingResponse_NUM_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_ff12_NameIdentifierMappingResponse_NUM_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x);
int zx_ff12_NameIdentifierMappingResponse_NUM_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_ds_Signature_s* zx_ff12_NameIdentifierMappingResponse_POP_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_ff12_Extension_s* zx_ff12_NameIdentifierMappingResponse_POP_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_elem_s* zx_ff12_NameIdentifierMappingResponse_POP_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_sp11_Status_s* zx_ff12_NameIdentifierMappingResponse_POP_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_NameIdentifierMappingResponse_POP_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_PUSH_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUSH_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUSH_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUSH_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_sp11_Status_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUSH_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_ResponseID(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_InResponseTo(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_MajorVersion(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_MinorVersion(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_IssueInstant(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_Recipient(struct zx_ff12_NameIdentifierMappingResponse_s* x, struct zx_str_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_sp11_Status_s* y);
void zx_ff12_NameIdentifierMappingResponse_PUT_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_NameIdentifierMappingResponse_ADD_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_NameIdentifierMappingResponse_ADD_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_NameIdentifierMappingResponse_ADD_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_NameIdentifierMappingResponse_ADD_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_sp11_Status_s* z);
void zx_ff12_NameIdentifierMappingResponse_ADD_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_ff12_NameIdentifierMappingResponse_DEL_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_DEL_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_DEL_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_DEL_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_DEL_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x, int n);
void zx_ff12_NameIdentifierMappingResponse_REV_Signature(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_REV_Extension(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_REV_ProviderID(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_REV_Status(struct zx_ff12_NameIdentifierMappingResponse_s* x);
void zx_ff12_NameIdentifierMappingResponse_REV_NameIdentifier(struct zx_ff12_NameIdentifierMappingResponse_s* x);

/* -------------------------- ff12_OldProvidedNameIdentifier -------------------------- */
/* refby( zx_ff12_RegisterNameIdentifierRequest_s ) */
#ifndef zx_ff12_OldProvidedNameIdentifier_EXT
#define zx_ff12_OldProvidedNameIdentifier_EXT
#endif

struct zx_ff12_OldProvidedNameIdentifier_s* zx_DEC_ff12_OldProvidedNameIdentifier(struct zx_ctx* c);
struct zx_ff12_OldProvidedNameIdentifier_s* zx_NEW_ff12_OldProvidedNameIdentifier(struct zx_ctx* c);
struct zx_ff12_OldProvidedNameIdentifier_s* zx_DEEP_CLONE_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x);
void zx_FREE_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, int free_strs);
int zx_WALK_SO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_OldProvidedNameIdentifier(struct zx_ff12_OldProvidedNameIdentifier_s* x);
char* zx_ENC_SO_ff12_OldProvidedNameIdentifier(struct zx_ff12_OldProvidedNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_OldProvidedNameIdentifier(struct zx_ff12_OldProvidedNameIdentifier_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_OldProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_OldProvidedNameIdentifier_s* x);

struct zx_ff12_OldProvidedNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_OldProvidedNameIdentifier_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ff12_OldProvidedNameIdentifier_GET_NameQualifier(struct zx_ff12_OldProvidedNameIdentifier_s* x);
struct zx_str_s* zx_ff12_OldProvidedNameIdentifier_GET_Format(struct zx_ff12_OldProvidedNameIdentifier_s* x);
void zx_ff12_OldProvidedNameIdentifier_PUT_NameQualifier(struct zx_ff12_OldProvidedNameIdentifier_s* x, struct zx_str_s* y);
void zx_ff12_OldProvidedNameIdentifier_PUT_Format(struct zx_ff12_OldProvidedNameIdentifier_s* x, struct zx_str_s* y);

/* -------------------------- ff12_RegisterNameIdentifierRequest -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_ff12_RegisterNameIdentifierRequest_EXT
#define zx_ff12_RegisterNameIdentifierRequest_EXT
#endif

struct zx_ff12_RegisterNameIdentifierRequest_s* zx_DEC_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_NEW_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_DEEP_CLONE_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, int dup_strs);
void zx_DUP_STRS_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_FREE_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, int free_strs);
int zx_WALK_SO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_RegisterNameIdentifierRequest(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
char* zx_ENC_SO_ff12_RegisterNameIdentifierRequest(struct zx_ff12_RegisterNameIdentifierRequest_s* x, char* p);
char* zx_ENC_WO_ff12_RegisterNameIdentifierRequest(struct zx_ff12_RegisterNameIdentifierRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_RegisterNameIdentifierRequest(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierRequest_s* x);

struct zx_ff12_RegisterNameIdentifierRequest_s {
  ZX_ELEM_EXT
  zx_ff12_RegisterNameIdentifierRequest_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_ff12_IDPProvidedNameIdentifier_s* IDPProvidedNameIdentifier;	/* {1,1} nada */
  struct zx_ff12_SPProvidedNameIdentifier_s* SPProvidedNameIdentifier;	/* {0,1} nada */
  struct zx_ff12_OldProvidedNameIdentifier_s* OldProvidedNameIdentifier;	/* {1,1} nada */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
};

struct zx_str_s* zx_ff12_RegisterNameIdentifierRequest_GET_RequestID(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_str_s* zx_ff12_RegisterNameIdentifierRequest_GET_MajorVersion(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_str_s* zx_ff12_RegisterNameIdentifierRequest_GET_MinorVersion(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_str_s* zx_ff12_RegisterNameIdentifierRequest_GET_IssueInstant(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_GET_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ds_Signature_s* zx_ff12_RegisterNameIdentifierRequest_GET_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_RegisterNameIdentifierRequest_GET_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_GET_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_GET_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ff12_SPProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_GET_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_ff12_OldProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_GET_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_GET_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
int zx_ff12_RegisterNameIdentifierRequest_NUM_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
int zx_ff12_RegisterNameIdentifierRequest_NUM_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_POP_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ds_Signature_s* zx_ff12_RegisterNameIdentifierRequest_POP_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ff12_Extension_s* zx_ff12_RegisterNameIdentifierRequest_POP_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_POP_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_POP_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ff12_SPProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_POP_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_ff12_OldProvidedNameIdentifier_s* zx_ff12_RegisterNameIdentifierRequest_POP_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierRequest_POP_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ff12_IDPProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ff12_SPProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_ff12_OldProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUSH_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_RequestID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_MajorVersion(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_MinorVersion(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_IssueInstant(struct zx_ff12_RegisterNameIdentifierRequest_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_SPProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_OldProvidedNameIdentifier_s* y);
void zx_ff12_RegisterNameIdentifierRequest_PUT_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierRequest_ADD_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_SPProvidedNameIdentifier_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_ff12_OldProvidedNameIdentifier_s* z);
void zx_ff12_RegisterNameIdentifierRequest_ADD_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RegisterNameIdentifierRequest_DEL_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_DEL_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x, int n);
void zx_ff12_RegisterNameIdentifierRequest_REV_RespondWith(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_Signature(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_Extension(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_ProviderID(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_IDPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_SPProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_OldProvidedNameIdentifier(struct zx_ff12_RegisterNameIdentifierRequest_s* x);
void zx_ff12_RegisterNameIdentifierRequest_REV_RelayState(struct zx_ff12_RegisterNameIdentifierRequest_s* x);

/* -------------------------- ff12_RegisterNameIdentifierResponse -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_ff12_RegisterNameIdentifierResponse_EXT
#define zx_ff12_RegisterNameIdentifierResponse_EXT
#endif

struct zx_ff12_RegisterNameIdentifierResponse_s* zx_DEC_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_NEW_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_DEEP_CLONE_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, int dup_strs);
void zx_DUP_STRS_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_FREE_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, int free_strs);
int zx_WALK_SO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_RegisterNameIdentifierResponse(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
char* zx_ENC_SO_ff12_RegisterNameIdentifierResponse(struct zx_ff12_RegisterNameIdentifierResponse_s* x, char* p);
char* zx_ENC_WO_ff12_RegisterNameIdentifierResponse(struct zx_ff12_RegisterNameIdentifierResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_RegisterNameIdentifierResponse(struct zx_ctx* c, struct zx_ff12_RegisterNameIdentifierResponse_s* x);

struct zx_ff12_RegisterNameIdentifierResponse_s {
  ZX_ELEM_EXT
  zx_ff12_RegisterNameIdentifierResponse_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* ResponseID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_ff12_Extension_s* Extension;	/* {0,-1}  */
  struct zx_elem_s* ProviderID;	/* {1,1} xs:anyURI */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* RelayState;	/* {0,1} xs:string */
};

struct zx_str_s* zx_ff12_RegisterNameIdentifierResponse_GET_ResponseID(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str_s* zx_ff12_RegisterNameIdentifierResponse_GET_InResponseTo(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str_s* zx_ff12_RegisterNameIdentifierResponse_GET_MajorVersion(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str_s* zx_ff12_RegisterNameIdentifierResponse_GET_MinorVersion(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str_s* zx_ff12_RegisterNameIdentifierResponse_GET_IssueInstant(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_str_s* zx_ff12_RegisterNameIdentifierResponse_GET_Recipient(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_ds_Signature_s* zx_ff12_RegisterNameIdentifierResponse_GET_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
struct zx_ff12_Extension_s* zx_ff12_RegisterNameIdentifierResponse_GET_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierResponse_GET_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
struct zx_sp11_Status_s* zx_ff12_RegisterNameIdentifierResponse_GET_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierResponse_GET_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
int zx_ff12_RegisterNameIdentifierResponse_NUM_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_ff12_RegisterNameIdentifierResponse_NUM_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_ff12_RegisterNameIdentifierResponse_NUM_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_ff12_RegisterNameIdentifierResponse_NUM_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
int zx_ff12_RegisterNameIdentifierResponse_NUM_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_ds_Signature_s* zx_ff12_RegisterNameIdentifierResponse_POP_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_ff12_Extension_s* zx_ff12_RegisterNameIdentifierResponse_POP_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierResponse_POP_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_sp11_Status_s* zx_ff12_RegisterNameIdentifierResponse_POP_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
struct zx_elem_s* zx_ff12_RegisterNameIdentifierResponse_POP_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_ds_Signature_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_ff12_Extension_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_sp11_Status_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUSH_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_ResponseID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_InResponseTo(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_MajorVersion(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_MinorVersion(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_IssueInstant(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_Recipient(struct zx_ff12_RegisterNameIdentifierResponse_s* x, struct zx_str_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_ff12_Extension_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_sp11_Status_s* y);
void zx_ff12_RegisterNameIdentifierResponse_PUT_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RegisterNameIdentifierResponse_ADD_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_ff12_RegisterNameIdentifierResponse_ADD_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_ff12_Extension_s* z);
void zx_ff12_RegisterNameIdentifierResponse_ADD_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RegisterNameIdentifierResponse_ADD_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_sp11_Status_s* z);
void zx_ff12_RegisterNameIdentifierResponse_ADD_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RegisterNameIdentifierResponse_DEL_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_DEL_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_DEL_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_DEL_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_DEL_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x, int n);
void zx_ff12_RegisterNameIdentifierResponse_REV_Signature(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_REV_Extension(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_REV_ProviderID(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_REV_Status(struct zx_ff12_RegisterNameIdentifierResponse_s* x);
void zx_ff12_RegisterNameIdentifierResponse_REV_RelayState(struct zx_ff12_RegisterNameIdentifierResponse_s* x);

/* -------------------------- ff12_RequestAuthnContext -------------------------- */
/* refby( zx_ff12_AuthnRequest_s ) */
#ifndef zx_ff12_RequestAuthnContext_EXT
#define zx_ff12_RequestAuthnContext_EXT
#endif

struct zx_ff12_RequestAuthnContext_s* zx_DEC_ff12_RequestAuthnContext(struct zx_ctx* c);
struct zx_ff12_RequestAuthnContext_s* zx_NEW_ff12_RequestAuthnContext(struct zx_ctx* c);
struct zx_ff12_RequestAuthnContext_s* zx_DEEP_CLONE_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, int dup_strs);
void zx_DUP_STRS_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x);
void zx_FREE_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, int free_strs);
int zx_WALK_SO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_RequestAuthnContext(struct zx_ff12_RequestAuthnContext_s* x);
char* zx_ENC_SO_ff12_RequestAuthnContext(struct zx_ff12_RequestAuthnContext_s* x, char* p);
char* zx_ENC_WO_ff12_RequestAuthnContext(struct zx_ff12_RequestAuthnContext_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_RequestAuthnContext(struct zx_ctx* c, struct zx_ff12_RequestAuthnContext_s* x);

struct zx_ff12_RequestAuthnContext_s {
  ZX_ELEM_EXT
  zx_ff12_RequestAuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* AuthnContextStatementRef;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* AuthnContextComparison;	/* {0,1} exact */
};

struct zx_elem_s* zx_ff12_RequestAuthnContext_GET_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, int n);
struct zx_elem_s* zx_ff12_RequestAuthnContext_GET_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, int n);
struct zx_elem_s* zx_ff12_RequestAuthnContext_GET_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, int n);
int zx_ff12_RequestAuthnContext_NUM_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x);
int zx_ff12_RequestAuthnContext_NUM_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x);
int zx_ff12_RequestAuthnContext_NUM_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x);
struct zx_elem_s* zx_ff12_RequestAuthnContext_POP_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x);
struct zx_elem_s* zx_ff12_RequestAuthnContext_POP_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x);
struct zx_elem_s* zx_ff12_RequestAuthnContext_POP_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x);
void zx_ff12_RequestAuthnContext_PUSH_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUSH_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUSH_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUT_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUT_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_PUT_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_ff12_RequestAuthnContext_ADD_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RequestAuthnContext_ADD_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RequestAuthnContext_ADD_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_ff12_RequestAuthnContext_DEL_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x, int n);
void zx_ff12_RequestAuthnContext_DEL_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x, int n);
void zx_ff12_RequestAuthnContext_DEL_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x, int n);
void zx_ff12_RequestAuthnContext_REV_AuthnContextClassRef(struct zx_ff12_RequestAuthnContext_s* x);
void zx_ff12_RequestAuthnContext_REV_AuthnContextStatementRef(struct zx_ff12_RequestAuthnContext_s* x);
void zx_ff12_RequestAuthnContext_REV_AuthnContextComparison(struct zx_ff12_RequestAuthnContext_s* x);

/* -------------------------- ff12_SPProvidedNameIdentifier -------------------------- */
/* refby( zx_ff12_RegisterNameIdentifierRequest_s ) */
#ifndef zx_ff12_SPProvidedNameIdentifier_EXT
#define zx_ff12_SPProvidedNameIdentifier_EXT
#endif

struct zx_ff12_SPProvidedNameIdentifier_s* zx_DEC_ff12_SPProvidedNameIdentifier(struct zx_ctx* c);
struct zx_ff12_SPProvidedNameIdentifier_s* zx_NEW_ff12_SPProvidedNameIdentifier(struct zx_ctx* c);
struct zx_ff12_SPProvidedNameIdentifier_s* zx_DEEP_CLONE_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x);
void zx_FREE_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, int free_strs);
int zx_WALK_SO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_SPProvidedNameIdentifier(struct zx_ff12_SPProvidedNameIdentifier_s* x);
char* zx_ENC_SO_ff12_SPProvidedNameIdentifier(struct zx_ff12_SPProvidedNameIdentifier_s* x, char* p);
char* zx_ENC_WO_ff12_SPProvidedNameIdentifier(struct zx_ff12_SPProvidedNameIdentifier_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_SPProvidedNameIdentifier(struct zx_ctx* c, struct zx_ff12_SPProvidedNameIdentifier_s* x);

struct zx_ff12_SPProvidedNameIdentifier_s {
  ZX_ELEM_EXT
  zx_ff12_SPProvidedNameIdentifier_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_ff12_SPProvidedNameIdentifier_GET_NameQualifier(struct zx_ff12_SPProvidedNameIdentifier_s* x);
struct zx_str_s* zx_ff12_SPProvidedNameIdentifier_GET_Format(struct zx_ff12_SPProvidedNameIdentifier_s* x);
void zx_ff12_SPProvidedNameIdentifier_PUT_NameQualifier(struct zx_ff12_SPProvidedNameIdentifier_s* x, struct zx_str_s* y);
void zx_ff12_SPProvidedNameIdentifier_PUT_Format(struct zx_ff12_SPProvidedNameIdentifier_s* x, struct zx_str_s* y);

/* -------------------------- ff12_Scoping -------------------------- */
/* refby( zx_ff12_AuthnRequest_s ) */
#ifndef zx_ff12_Scoping_EXT
#define zx_ff12_Scoping_EXT
#endif

struct zx_ff12_Scoping_s* zx_DEC_ff12_Scoping(struct zx_ctx* c);
struct zx_ff12_Scoping_s* zx_NEW_ff12_Scoping(struct zx_ctx* c);
struct zx_ff12_Scoping_s* zx_DEEP_CLONE_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, int dup_strs);
void zx_DUP_STRS_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x);
void zx_FREE_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, int free_strs);
int zx_WALK_SO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_Scoping(struct zx_ff12_Scoping_s* x);
char* zx_ENC_SO_ff12_Scoping(struct zx_ff12_Scoping_s* x, char* p);
char* zx_ENC_WO_ff12_Scoping(struct zx_ff12_Scoping_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_Scoping(struct zx_ctx* c, struct zx_ff12_Scoping_s* x);

struct zx_ff12_Scoping_s {
  ZX_ELEM_EXT
  zx_ff12_Scoping_EXT
  struct zx_elem_s* ProxyCount;	/* {0,1} xs:nonNegativeInteger */
  struct zx_ff12_IDPList_s* IDPList;	/* {0,1} nada */
};

struct zx_elem_s* zx_ff12_Scoping_GET_ProxyCount(struct zx_ff12_Scoping_s* x, int n);
struct zx_ff12_IDPList_s* zx_ff12_Scoping_GET_IDPList(struct zx_ff12_Scoping_s* x, int n);
int zx_ff12_Scoping_NUM_ProxyCount(struct zx_ff12_Scoping_s* x);
int zx_ff12_Scoping_NUM_IDPList(struct zx_ff12_Scoping_s* x);
struct zx_elem_s* zx_ff12_Scoping_POP_ProxyCount(struct zx_ff12_Scoping_s* x);
struct zx_ff12_IDPList_s* zx_ff12_Scoping_POP_IDPList(struct zx_ff12_Scoping_s* x);
void zx_ff12_Scoping_PUSH_ProxyCount(struct zx_ff12_Scoping_s* x, struct zx_elem_s* y);
void zx_ff12_Scoping_PUSH_IDPList(struct zx_ff12_Scoping_s* x, struct zx_ff12_IDPList_s* y);
void zx_ff12_Scoping_PUT_ProxyCount(struct zx_ff12_Scoping_s* x, int n, struct zx_elem_s* y);
void zx_ff12_Scoping_PUT_IDPList(struct zx_ff12_Scoping_s* x, int n, struct zx_ff12_IDPList_s* y);
void zx_ff12_Scoping_ADD_ProxyCount(struct zx_ff12_Scoping_s* x, int n, struct zx_elem_s* z);
void zx_ff12_Scoping_ADD_IDPList(struct zx_ff12_Scoping_s* x, int n, struct zx_ff12_IDPList_s* z);
void zx_ff12_Scoping_DEL_ProxyCount(struct zx_ff12_Scoping_s* x, int n);
void zx_ff12_Scoping_DEL_IDPList(struct zx_ff12_Scoping_s* x, int n);
void zx_ff12_Scoping_REV_ProxyCount(struct zx_ff12_Scoping_s* x);
void zx_ff12_Scoping_REV_IDPList(struct zx_ff12_Scoping_s* x);

/* -------------------------- ff12_Subject -------------------------- */
/* refby( ) */
#ifndef zx_ff12_Subject_EXT
#define zx_ff12_Subject_EXT
#endif

struct zx_ff12_Subject_s* zx_DEC_ff12_Subject(struct zx_ctx* c);
struct zx_ff12_Subject_s* zx_NEW_ff12_Subject(struct zx_ctx* c);
struct zx_ff12_Subject_s* zx_DEEP_CLONE_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, int dup_strs);
void zx_DUP_STRS_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x);
void zx_FREE_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, int free_strs);
int zx_WALK_SO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_ff12_Subject(struct zx_ff12_Subject_s* x);
char* zx_ENC_SO_ff12_Subject(struct zx_ff12_Subject_s* x, char* p);
char* zx_ENC_WO_ff12_Subject(struct zx_ff12_Subject_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x);
struct zx_str_s* zx_EASY_ENC_WO_ff12_Subject(struct zx_ctx* c, struct zx_ff12_Subject_s* x);

struct zx_ff12_Subject_s {
  ZX_ELEM_EXT
  zx_ff12_Subject_EXT
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {0,1} nada */
  struct zx_sa11_SubjectConfirmation_s* SubjectConfirmation;	/* {0,1} nada */
  struct zx_ff12_IDPProvidedNameIdentifier_s* IDPProvidedNameIdentifier;	/* {0,1} nada */
};

struct zx_sa11_NameIdentifier_s* zx_ff12_Subject_GET_NameIdentifier(struct zx_ff12_Subject_s* x, int n);
struct zx_sa11_SubjectConfirmation_s* zx_ff12_Subject_GET_SubjectConfirmation(struct zx_ff12_Subject_s* x, int n);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_ff12_Subject_GET_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, int n);
int zx_ff12_Subject_NUM_NameIdentifier(struct zx_ff12_Subject_s* x);
int zx_ff12_Subject_NUM_SubjectConfirmation(struct zx_ff12_Subject_s* x);
int zx_ff12_Subject_NUM_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x);
struct zx_sa11_NameIdentifier_s* zx_ff12_Subject_POP_NameIdentifier(struct zx_ff12_Subject_s* x);
struct zx_sa11_SubjectConfirmation_s* zx_ff12_Subject_POP_SubjectConfirmation(struct zx_ff12_Subject_s* x);
struct zx_ff12_IDPProvidedNameIdentifier_s* zx_ff12_Subject_POP_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x);
void zx_ff12_Subject_PUSH_NameIdentifier(struct zx_ff12_Subject_s* x, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_Subject_PUSH_SubjectConfirmation(struct zx_ff12_Subject_s* x, struct zx_sa11_SubjectConfirmation_s* y);
void zx_ff12_Subject_PUSH_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, struct zx_ff12_IDPProvidedNameIdentifier_s* y);
void zx_ff12_Subject_PUT_NameIdentifier(struct zx_ff12_Subject_s* x, int n, struct zx_sa11_NameIdentifier_s* y);
void zx_ff12_Subject_PUT_SubjectConfirmation(struct zx_ff12_Subject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* y);
void zx_ff12_Subject_PUT_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* y);
void zx_ff12_Subject_ADD_NameIdentifier(struct zx_ff12_Subject_s* x, int n, struct zx_sa11_NameIdentifier_s* z);
void zx_ff12_Subject_ADD_SubjectConfirmation(struct zx_ff12_Subject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z);
void zx_ff12_Subject_ADD_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* z);
void zx_ff12_Subject_DEL_NameIdentifier(struct zx_ff12_Subject_s* x, int n);
void zx_ff12_Subject_DEL_SubjectConfirmation(struct zx_ff12_Subject_s* x, int n);
void zx_ff12_Subject_DEL_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x, int n);
void zx_ff12_Subject_REV_NameIdentifier(struct zx_ff12_Subject_s* x);
void zx_ff12_Subject_REV_SubjectConfirmation(struct zx_ff12_Subject_s* x);
void zx_ff12_Subject_REV_IDPProvidedNameIdentifier(struct zx_ff12_Subject_s* x);

/* -------------------------- sa11_Action -------------------------- */
/* refby( zx_sa11_AuthorizationDecisionStatement_s zx_sp11_AuthorizationDecisionQuery_s ) */
#ifndef zx_sa11_Action_EXT
#define zx_sa11_Action_EXT
#endif

struct zx_sa11_Action_s* zx_DEC_sa11_Action(struct zx_ctx* c);
struct zx_sa11_Action_s* zx_NEW_sa11_Action(struct zx_ctx* c);
struct zx_sa11_Action_s* zx_DEEP_CLONE_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x);
void zx_FREE_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, int free_strs);
int zx_WALK_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_Action(struct zx_sa11_Action_s* x);
char* zx_ENC_SO_sa11_Action(struct zx_sa11_Action_s* x, char* p);
char* zx_ENC_WO_sa11_Action(struct zx_sa11_Action_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x);

struct zx_sa11_Action_s {
  ZX_ELEM_EXT
  zx_sa11_Action_EXT
  struct zx_str_s* Namespace;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sa11_Action_GET_Namespace(struct zx_sa11_Action_s* x);
void zx_sa11_Action_PUT_Namespace(struct zx_sa11_Action_s* x, struct zx_str_s* y);

/* -------------------------- sa11_Advice -------------------------- */
/* refby( zx_ff12_Assertion_s zx_sa11_Assertion_s ) */
#ifndef zx_sa11_Advice_EXT
#define zx_sa11_Advice_EXT
#endif

struct zx_sa11_Advice_s* zx_DEC_sa11_Advice(struct zx_ctx* c);
struct zx_sa11_Advice_s* zx_NEW_sa11_Advice(struct zx_ctx* c);
struct zx_sa11_Advice_s* zx_DEEP_CLONE_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x);
void zx_FREE_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, int free_strs);
int zx_WALK_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_Advice(struct zx_sa11_Advice_s* x);
char* zx_ENC_SO_sa11_Advice(struct zx_sa11_Advice_s* x, char* p);
char* zx_ENC_WO_sa11_Advice(struct zx_sa11_Advice_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x);

struct zx_sa11_Advice_s {
  ZX_ELEM_EXT
  zx_sa11_Advice_EXT
  struct zx_elem_s* AssertionIDReference;	/* {0,-1} xs:NCName */
  struct zx_sa11_Assertion_s* Assertion;	/* {0,-1} nada */
};

struct zx_elem_s* zx_sa11_Advice_GET_AssertionIDReference(struct zx_sa11_Advice_s* x, int n);
struct zx_sa11_Assertion_s* zx_sa11_Advice_GET_Assertion(struct zx_sa11_Advice_s* x, int n);
int zx_sa11_Advice_NUM_AssertionIDReference(struct zx_sa11_Advice_s* x);
int zx_sa11_Advice_NUM_Assertion(struct zx_sa11_Advice_s* x);
struct zx_elem_s* zx_sa11_Advice_POP_AssertionIDReference(struct zx_sa11_Advice_s* x);
struct zx_sa11_Assertion_s* zx_sa11_Advice_POP_Assertion(struct zx_sa11_Advice_s* x);
void zx_sa11_Advice_PUSH_AssertionIDReference(struct zx_sa11_Advice_s* x, struct zx_elem_s* y);
void zx_sa11_Advice_PUSH_Assertion(struct zx_sa11_Advice_s* x, struct zx_sa11_Assertion_s* y);
void zx_sa11_Advice_PUT_AssertionIDReference(struct zx_sa11_Advice_s* x, int n, struct zx_elem_s* y);
void zx_sa11_Advice_PUT_Assertion(struct zx_sa11_Advice_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_sa11_Advice_ADD_AssertionIDReference(struct zx_sa11_Advice_s* x, int n, struct zx_elem_s* z);
void zx_sa11_Advice_ADD_Assertion(struct zx_sa11_Advice_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_sa11_Advice_DEL_AssertionIDReference(struct zx_sa11_Advice_s* x, int n);
void zx_sa11_Advice_DEL_Assertion(struct zx_sa11_Advice_s* x, int n);
void zx_sa11_Advice_REV_AssertionIDReference(struct zx_sa11_Advice_s* x);
void zx_sa11_Advice_REV_Assertion(struct zx_sa11_Advice_s* x);

/* -------------------------- sa11_Assertion -------------------------- */
/* refby( zx_ff12_AuthnResponse_s zx_sa11_Evidence_s zx_sp11_Response_s zx_sa11_Advice_s ) */
#ifndef zx_sa11_Assertion_EXT
#define zx_sa11_Assertion_EXT
#endif

struct zx_sa11_Assertion_s* zx_DEC_sa11_Assertion(struct zx_ctx* c);
struct zx_sa11_Assertion_s* zx_NEW_sa11_Assertion(struct zx_ctx* c);
struct zx_sa11_Assertion_s* zx_DEEP_CLONE_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x);
void zx_FREE_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, int free_strs);
int zx_WALK_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_Assertion(struct zx_sa11_Assertion_s* x);
char* zx_ENC_SO_sa11_Assertion(struct zx_sa11_Assertion_s* x, char* p);
char* zx_ENC_WO_sa11_Assertion(struct zx_sa11_Assertion_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x);

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
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* AssertionID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Issuer;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
};

struct zx_str_s* zx_sa11_Assertion_GET_MajorVersion(struct zx_sa11_Assertion_s* x);
struct zx_str_s* zx_sa11_Assertion_GET_MinorVersion(struct zx_sa11_Assertion_s* x);
struct zx_str_s* zx_sa11_Assertion_GET_AssertionID(struct zx_sa11_Assertion_s* x);
struct zx_str_s* zx_sa11_Assertion_GET_Issuer(struct zx_sa11_Assertion_s* x);
struct zx_str_s* zx_sa11_Assertion_GET_IssueInstant(struct zx_sa11_Assertion_s* x);
struct zx_sa11_Conditions_s* zx_sa11_Assertion_GET_Conditions(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_Advice_s* zx_sa11_Assertion_GET_Advice(struct zx_sa11_Assertion_s* x, int n);
struct zx_elem_s* zx_sa11_Assertion_GET_Statement(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_SubjectStatement_s* zx_sa11_Assertion_GET_SubjectStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_AuthenticationStatement_s* zx_sa11_Assertion_GET_AuthenticationStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_sa11_Assertion_GET_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_sa11_AttributeStatement_s* zx_sa11_Assertion_GET_AttributeStatement(struct zx_sa11_Assertion_s* x, int n);
struct zx_ds_Signature_s* zx_sa11_Assertion_GET_Signature(struct zx_sa11_Assertion_s* x, int n);
int zx_sa11_Assertion_NUM_Conditions(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_Advice(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_Statement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_SubjectStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_AuthenticationStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_AttributeStatement(struct zx_sa11_Assertion_s* x);
int zx_sa11_Assertion_NUM_Signature(struct zx_sa11_Assertion_s* x);
struct zx_sa11_Conditions_s* zx_sa11_Assertion_POP_Conditions(struct zx_sa11_Assertion_s* x);
struct zx_sa11_Advice_s* zx_sa11_Assertion_POP_Advice(struct zx_sa11_Assertion_s* x);
struct zx_elem_s* zx_sa11_Assertion_POP_Statement(struct zx_sa11_Assertion_s* x);
struct zx_sa11_SubjectStatement_s* zx_sa11_Assertion_POP_SubjectStatement(struct zx_sa11_Assertion_s* x);
struct zx_sa11_AuthenticationStatement_s* zx_sa11_Assertion_POP_AuthenticationStatement(struct zx_sa11_Assertion_s* x);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_sa11_Assertion_POP_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x);
struct zx_sa11_AttributeStatement_s* zx_sa11_Assertion_POP_AttributeStatement(struct zx_sa11_Assertion_s* x);
struct zx_ds_Signature_s* zx_sa11_Assertion_POP_Signature(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_PUSH_Conditions(struct zx_sa11_Assertion_s* x, struct zx_sa11_Conditions_s* y);
void zx_sa11_Assertion_PUSH_Advice(struct zx_sa11_Assertion_s* x, struct zx_sa11_Advice_s* y);
void zx_sa11_Assertion_PUSH_Statement(struct zx_sa11_Assertion_s* x, struct zx_elem_s* y);
void zx_sa11_Assertion_PUSH_SubjectStatement(struct zx_sa11_Assertion_s* x, struct zx_sa11_SubjectStatement_s* y);
void zx_sa11_Assertion_PUSH_AuthenticationStatement(struct zx_sa11_Assertion_s* x, struct zx_sa11_AuthenticationStatement_s* y);
void zx_sa11_Assertion_PUSH_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, struct zx_sa11_AuthorizationDecisionStatement_s* y);
void zx_sa11_Assertion_PUSH_AttributeStatement(struct zx_sa11_Assertion_s* x, struct zx_sa11_AttributeStatement_s* y);
void zx_sa11_Assertion_PUSH_Signature(struct zx_sa11_Assertion_s* x, struct zx_ds_Signature_s* y);
void zx_sa11_Assertion_PUT_MajorVersion(struct zx_sa11_Assertion_s* x, struct zx_str_s* y);
void zx_sa11_Assertion_PUT_MinorVersion(struct zx_sa11_Assertion_s* x, struct zx_str_s* y);
void zx_sa11_Assertion_PUT_AssertionID(struct zx_sa11_Assertion_s* x, struct zx_str_s* y);
void zx_sa11_Assertion_PUT_Issuer(struct zx_sa11_Assertion_s* x, struct zx_str_s* y);
void zx_sa11_Assertion_PUT_IssueInstant(struct zx_sa11_Assertion_s* x, struct zx_str_s* y);
void zx_sa11_Assertion_PUT_Conditions(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_Conditions_s* y);
void zx_sa11_Assertion_PUT_Advice(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_Advice_s* y);
void zx_sa11_Assertion_PUT_Statement(struct zx_sa11_Assertion_s* x, int n, struct zx_elem_s* y);
void zx_sa11_Assertion_PUT_SubjectStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_SubjectStatement_s* y);
void zx_sa11_Assertion_PUT_AuthenticationStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AuthenticationStatement_s* y);
void zx_sa11_Assertion_PUT_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AuthorizationDecisionStatement_s* y);
void zx_sa11_Assertion_PUT_AttributeStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AttributeStatement_s* y);
void zx_sa11_Assertion_PUT_Signature(struct zx_sa11_Assertion_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sa11_Assertion_ADD_Conditions(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_Conditions_s* z);
void zx_sa11_Assertion_ADD_Advice(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_Advice_s* z);
void zx_sa11_Assertion_ADD_Statement(struct zx_sa11_Assertion_s* x, int n, struct zx_elem_s* z);
void zx_sa11_Assertion_ADD_SubjectStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_SubjectStatement_s* z);
void zx_sa11_Assertion_ADD_AuthenticationStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AuthenticationStatement_s* z);
void zx_sa11_Assertion_ADD_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AuthorizationDecisionStatement_s* z);
void zx_sa11_Assertion_ADD_AttributeStatement(struct zx_sa11_Assertion_s* x, int n, struct zx_sa11_AttributeStatement_s* z);
void zx_sa11_Assertion_ADD_Signature(struct zx_sa11_Assertion_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sa11_Assertion_DEL_Conditions(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_Advice(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_Statement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_SubjectStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_AuthenticationStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_AttributeStatement(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_DEL_Signature(struct zx_sa11_Assertion_s* x, int n);
void zx_sa11_Assertion_REV_Conditions(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_Advice(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_Statement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_SubjectStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_AuthenticationStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_AuthorizationDecisionStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_AttributeStatement(struct zx_sa11_Assertion_s* x);
void zx_sa11_Assertion_REV_Signature(struct zx_sa11_Assertion_s* x);

/* -------------------------- sa11_Attribute -------------------------- */
/* refby( zx_sa11_AttributeStatement_s ) */
#ifndef zx_sa11_Attribute_EXT
#define zx_sa11_Attribute_EXT
#endif

struct zx_sa11_Attribute_s* zx_DEC_sa11_Attribute(struct zx_ctx* c);
struct zx_sa11_Attribute_s* zx_NEW_sa11_Attribute(struct zx_ctx* c);
struct zx_sa11_Attribute_s* zx_DEEP_CLONE_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x);
void zx_FREE_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, int free_strs);
int zx_WALK_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_Attribute(struct zx_sa11_Attribute_s* x);
char* zx_ENC_SO_sa11_Attribute(struct zx_sa11_Attribute_s* x, char* p);
char* zx_ENC_WO_sa11_Attribute(struct zx_sa11_Attribute_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x);

struct zx_sa11_Attribute_s {
  ZX_ELEM_EXT
  zx_sa11_Attribute_EXT
  struct zx_str_s* AttributeName;	/* {1,1} attribute xs:string */
  struct zx_str_s* AttributeNamespace;	/* {1,1} attribute xs:anyURI */
  struct zx_elem_s* AttributeValue;	/* {1,-1} xs:anyType */
};

struct zx_str_s* zx_sa11_Attribute_GET_AttributeName(struct zx_sa11_Attribute_s* x);
struct zx_str_s* zx_sa11_Attribute_GET_AttributeNamespace(struct zx_sa11_Attribute_s* x);
struct zx_elem_s* zx_sa11_Attribute_GET_AttributeValue(struct zx_sa11_Attribute_s* x, int n);
int zx_sa11_Attribute_NUM_AttributeValue(struct zx_sa11_Attribute_s* x);
struct zx_elem_s* zx_sa11_Attribute_POP_AttributeValue(struct zx_sa11_Attribute_s* x);
void zx_sa11_Attribute_PUSH_AttributeValue(struct zx_sa11_Attribute_s* x, struct zx_elem_s* y);
void zx_sa11_Attribute_PUT_AttributeName(struct zx_sa11_Attribute_s* x, struct zx_str_s* y);
void zx_sa11_Attribute_PUT_AttributeNamespace(struct zx_sa11_Attribute_s* x, struct zx_str_s* y);
void zx_sa11_Attribute_PUT_AttributeValue(struct zx_sa11_Attribute_s* x, int n, struct zx_elem_s* y);
void zx_sa11_Attribute_ADD_AttributeValue(struct zx_sa11_Attribute_s* x, int n, struct zx_elem_s* z);
void zx_sa11_Attribute_DEL_AttributeValue(struct zx_sa11_Attribute_s* x, int n);
void zx_sa11_Attribute_REV_AttributeValue(struct zx_sa11_Attribute_s* x);

/* -------------------------- sa11_AttributeDesignator -------------------------- */
/* refby( zx_sp11_AttributeQuery_s ) */
#ifndef zx_sa11_AttributeDesignator_EXT
#define zx_sa11_AttributeDesignator_EXT
#endif

struct zx_sa11_AttributeDesignator_s* zx_DEC_sa11_AttributeDesignator(struct zx_ctx* c);
struct zx_sa11_AttributeDesignator_s* zx_NEW_sa11_AttributeDesignator(struct zx_ctx* c);
struct zx_sa11_AttributeDesignator_s* zx_DEEP_CLONE_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x);
void zx_FREE_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, int free_strs);
int zx_WALK_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_AttributeDesignator(struct zx_sa11_AttributeDesignator_s* x);
char* zx_ENC_SO_sa11_AttributeDesignator(struct zx_sa11_AttributeDesignator_s* x, char* p);
char* zx_ENC_WO_sa11_AttributeDesignator(struct zx_sa11_AttributeDesignator_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x);

struct zx_sa11_AttributeDesignator_s {
  ZX_ELEM_EXT
  zx_sa11_AttributeDesignator_EXT
  struct zx_str_s* AttributeName;	/* {1,1} attribute xs:string */
  struct zx_str_s* AttributeNamespace;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sa11_AttributeDesignator_GET_AttributeName(struct zx_sa11_AttributeDesignator_s* x);
struct zx_str_s* zx_sa11_AttributeDesignator_GET_AttributeNamespace(struct zx_sa11_AttributeDesignator_s* x);
void zx_sa11_AttributeDesignator_PUT_AttributeName(struct zx_sa11_AttributeDesignator_s* x, struct zx_str_s* y);
void zx_sa11_AttributeDesignator_PUT_AttributeNamespace(struct zx_sa11_AttributeDesignator_s* x, struct zx_str_s* y);

/* -------------------------- sa11_AttributeStatement -------------------------- */
/* refby( zx_ff12_Assertion_s zx_sa11_Assertion_s ) */
#ifndef zx_sa11_AttributeStatement_EXT
#define zx_sa11_AttributeStatement_EXT
#endif

struct zx_sa11_AttributeStatement_s* zx_DEC_sa11_AttributeStatement(struct zx_ctx* c);
struct zx_sa11_AttributeStatement_s* zx_NEW_sa11_AttributeStatement(struct zx_ctx* c);
struct zx_sa11_AttributeStatement_s* zx_DEEP_CLONE_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x);
void zx_FREE_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, int free_strs);
int zx_WALK_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_AttributeStatement(struct zx_sa11_AttributeStatement_s* x);
char* zx_ENC_SO_sa11_AttributeStatement(struct zx_sa11_AttributeStatement_s* x, char* p);
char* zx_ENC_WO_sa11_AttributeStatement(struct zx_sa11_AttributeStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x);

struct zx_sa11_AttributeStatement_s {
  ZX_ELEM_EXT
  zx_sa11_AttributeStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_Attribute_s* Attribute;	/* {1,-1} nada */
};

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

/* -------------------------- sa11_AudienceRestrictionCondition -------------------------- */
/* refby( zx_sa11_Conditions_s ) */
#ifndef zx_sa11_AudienceRestrictionCondition_EXT
#define zx_sa11_AudienceRestrictionCondition_EXT
#endif

struct zx_sa11_AudienceRestrictionCondition_s* zx_DEC_sa11_AudienceRestrictionCondition(struct zx_ctx* c);
struct zx_sa11_AudienceRestrictionCondition_s* zx_NEW_sa11_AudienceRestrictionCondition(struct zx_ctx* c);
struct zx_sa11_AudienceRestrictionCondition_s* zx_DEEP_CLONE_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x);
void zx_FREE_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, int free_strs);
int zx_WALK_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_AudienceRestrictionCondition(struct zx_sa11_AudienceRestrictionCondition_s* x);
char* zx_ENC_SO_sa11_AudienceRestrictionCondition(struct zx_sa11_AudienceRestrictionCondition_s* x, char* p);
char* zx_ENC_WO_sa11_AudienceRestrictionCondition(struct zx_sa11_AudienceRestrictionCondition_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x);

struct zx_sa11_AudienceRestrictionCondition_s {
  ZX_ELEM_EXT
  zx_sa11_AudienceRestrictionCondition_EXT
  struct zx_elem_s* Audience;	/* {1,-1} xs:anyURI */
};

struct zx_elem_s* zx_sa11_AudienceRestrictionCondition_GET_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, int n);
int zx_sa11_AudienceRestrictionCondition_NUM_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x);
struct zx_elem_s* zx_sa11_AudienceRestrictionCondition_POP_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x);
void zx_sa11_AudienceRestrictionCondition_PUSH_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, struct zx_elem_s* y);
void zx_sa11_AudienceRestrictionCondition_PUT_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, int n, struct zx_elem_s* y);
void zx_sa11_AudienceRestrictionCondition_ADD_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, int n, struct zx_elem_s* z);
void zx_sa11_AudienceRestrictionCondition_DEL_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x, int n);
void zx_sa11_AudienceRestrictionCondition_REV_Audience(struct zx_sa11_AudienceRestrictionCondition_s* x);

/* -------------------------- sa11_AuthenticationStatement -------------------------- */
/* refby( zx_ff12_Assertion_s zx_sa11_Assertion_s ) */
#ifndef zx_sa11_AuthenticationStatement_EXT
#define zx_sa11_AuthenticationStatement_EXT
#endif

struct zx_sa11_AuthenticationStatement_s* zx_DEC_sa11_AuthenticationStatement(struct zx_ctx* c);
struct zx_sa11_AuthenticationStatement_s* zx_NEW_sa11_AuthenticationStatement(struct zx_ctx* c);
struct zx_sa11_AuthenticationStatement_s* zx_DEEP_CLONE_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x);
void zx_FREE_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, int free_strs);
int zx_WALK_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_AuthenticationStatement(struct zx_sa11_AuthenticationStatement_s* x);
char* zx_ENC_SO_sa11_AuthenticationStatement(struct zx_sa11_AuthenticationStatement_s* x, char* p);
char* zx_ENC_WO_sa11_AuthenticationStatement(struct zx_sa11_AuthenticationStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x);

struct zx_sa11_AuthenticationStatement_s {
  ZX_ELEM_EXT
  zx_sa11_AuthenticationStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_SubjectLocality_s* SubjectLocality;	/* {0,1} nada */
  struct zx_sa11_AuthorityBinding_s* AuthorityBinding;	/* {0,-1} nada */
  struct zx_str_s* AuthenticationMethod;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* AuthenticationInstant;	/* {1,1} attribute xs:dateTime */
};

struct zx_str_s* zx_sa11_AuthenticationStatement_GET_AuthenticationMethod(struct zx_sa11_AuthenticationStatement_s* x);
struct zx_str_s* zx_sa11_AuthenticationStatement_GET_AuthenticationInstant(struct zx_sa11_AuthenticationStatement_s* x);
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
void zx_sa11_AuthenticationStatement_PUT_AuthenticationMethod(struct zx_sa11_AuthenticationStatement_s* x, struct zx_str_s* y);
void zx_sa11_AuthenticationStatement_PUT_AuthenticationInstant(struct zx_sa11_AuthenticationStatement_s* x, struct zx_str_s* y);
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

/* -------------------------- sa11_AuthorityBinding -------------------------- */
/* refby( zx_sa11_AuthenticationStatement_s zx_ff12_AuthenticationStatement_s ) */
#ifndef zx_sa11_AuthorityBinding_EXT
#define zx_sa11_AuthorityBinding_EXT
#endif

struct zx_sa11_AuthorityBinding_s* zx_DEC_sa11_AuthorityBinding(struct zx_ctx* c);
struct zx_sa11_AuthorityBinding_s* zx_NEW_sa11_AuthorityBinding(struct zx_ctx* c);
struct zx_sa11_AuthorityBinding_s* zx_DEEP_CLONE_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x);
void zx_FREE_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, int free_strs);
int zx_WALK_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_AuthorityBinding(struct zx_sa11_AuthorityBinding_s* x);
char* zx_ENC_SO_sa11_AuthorityBinding(struct zx_sa11_AuthorityBinding_s* x, char* p);
char* zx_ENC_WO_sa11_AuthorityBinding(struct zx_sa11_AuthorityBinding_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x);

struct zx_sa11_AuthorityBinding_s {
  ZX_ELEM_EXT
  zx_sa11_AuthorityBinding_EXT
  struct zx_str_s* AuthorityKind;	/* {1,1} attribute xs:QName */
  struct zx_str_s* Location;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Binding;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sa11_AuthorityBinding_GET_AuthorityKind(struct zx_sa11_AuthorityBinding_s* x);
struct zx_str_s* zx_sa11_AuthorityBinding_GET_Location(struct zx_sa11_AuthorityBinding_s* x);
struct zx_str_s* zx_sa11_AuthorityBinding_GET_Binding(struct zx_sa11_AuthorityBinding_s* x);
void zx_sa11_AuthorityBinding_PUT_AuthorityKind(struct zx_sa11_AuthorityBinding_s* x, struct zx_str_s* y);
void zx_sa11_AuthorityBinding_PUT_Location(struct zx_sa11_AuthorityBinding_s* x, struct zx_str_s* y);
void zx_sa11_AuthorityBinding_PUT_Binding(struct zx_sa11_AuthorityBinding_s* x, struct zx_str_s* y);

/* -------------------------- sa11_AuthorizationDecisionStatement -------------------------- */
/* refby( zx_ff12_Assertion_s zx_sa11_Assertion_s ) */
#ifndef zx_sa11_AuthorizationDecisionStatement_EXT
#define zx_sa11_AuthorizationDecisionStatement_EXT
#endif

struct zx_sa11_AuthorizationDecisionStatement_s* zx_DEC_sa11_AuthorizationDecisionStatement(struct zx_ctx* c);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_NEW_sa11_AuthorizationDecisionStatement(struct zx_ctx* c);
struct zx_sa11_AuthorizationDecisionStatement_s* zx_DEEP_CLONE_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x);
void zx_FREE_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, int free_strs);
int zx_WALK_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_AuthorizationDecisionStatement(struct zx_sa11_AuthorizationDecisionStatement_s* x);
char* zx_ENC_SO_sa11_AuthorizationDecisionStatement(struct zx_sa11_AuthorizationDecisionStatement_s* x, char* p);
char* zx_ENC_WO_sa11_AuthorizationDecisionStatement(struct zx_sa11_AuthorizationDecisionStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x);

struct zx_sa11_AuthorizationDecisionStatement_s {
  ZX_ELEM_EXT
  zx_sa11_AuthorizationDecisionStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_Action_s* Action;	/* {1,-1} nada */
  struct zx_sa11_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str_s* Resource;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Decision;	/* {1,1} attribute sa11:DecisionType */
};

struct zx_str_s* zx_sa11_AuthorizationDecisionStatement_GET_Resource(struct zx_sa11_AuthorizationDecisionStatement_s* x);
struct zx_str_s* zx_sa11_AuthorizationDecisionStatement_GET_Decision(struct zx_sa11_AuthorizationDecisionStatement_s* x);
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
void zx_sa11_AuthorizationDecisionStatement_PUT_Resource(struct zx_sa11_AuthorizationDecisionStatement_s* x, struct zx_str_s* y);
void zx_sa11_AuthorizationDecisionStatement_PUT_Decision(struct zx_sa11_AuthorizationDecisionStatement_s* x, struct zx_str_s* y);
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

/* -------------------------- sa11_Conditions -------------------------- */
/* refby( zx_ff12_Assertion_s zx_sa11_Assertion_s ) */
#ifndef zx_sa11_Conditions_EXT
#define zx_sa11_Conditions_EXT
#endif

struct zx_sa11_Conditions_s* zx_DEC_sa11_Conditions(struct zx_ctx* c);
struct zx_sa11_Conditions_s* zx_NEW_sa11_Conditions(struct zx_ctx* c);
struct zx_sa11_Conditions_s* zx_DEEP_CLONE_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x);
void zx_FREE_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, int free_strs);
int zx_WALK_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_Conditions(struct zx_sa11_Conditions_s* x);
char* zx_ENC_SO_sa11_Conditions(struct zx_sa11_Conditions_s* x, char* p);
char* zx_ENC_WO_sa11_Conditions(struct zx_sa11_Conditions_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x);

struct zx_sa11_Conditions_s {
  ZX_ELEM_EXT
  zx_sa11_Conditions_EXT
  struct zx_sa11_AudienceRestrictionCondition_s* AudienceRestrictionCondition;	/* {0,-1}  */
  struct zx_sa11_DoNotCacheCondition_s* DoNotCacheCondition;	/* {0,-1} nada */
  struct zx_elem_s* Condition;	/* {0,-1} sa11:ConditionAbstractType */
  struct zx_str_s* NotBefore;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

struct zx_str_s* zx_sa11_Conditions_GET_NotBefore(struct zx_sa11_Conditions_s* x);
struct zx_str_s* zx_sa11_Conditions_GET_NotOnOrAfter(struct zx_sa11_Conditions_s* x);
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
void zx_sa11_Conditions_PUT_NotBefore(struct zx_sa11_Conditions_s* x, struct zx_str_s* y);
void zx_sa11_Conditions_PUT_NotOnOrAfter(struct zx_sa11_Conditions_s* x, struct zx_str_s* y);
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

/* -------------------------- sa11_DoNotCacheCondition -------------------------- */
/* refby( zx_sa11_Conditions_s ) */
#ifndef zx_sa11_DoNotCacheCondition_EXT
#define zx_sa11_DoNotCacheCondition_EXT
#endif

struct zx_sa11_DoNotCacheCondition_s* zx_DEC_sa11_DoNotCacheCondition(struct zx_ctx* c);
struct zx_sa11_DoNotCacheCondition_s* zx_NEW_sa11_DoNotCacheCondition(struct zx_ctx* c);
struct zx_sa11_DoNotCacheCondition_s* zx_DEEP_CLONE_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, int dup_strs);
void zx_DUP_STRS_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x);
void zx_FREE_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, int free_strs);
int zx_WALK_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_DoNotCacheCondition(struct zx_sa11_DoNotCacheCondition_s* x);
char* zx_ENC_SO_sa11_DoNotCacheCondition(struct zx_sa11_DoNotCacheCondition_s* x, char* p);
char* zx_ENC_WO_sa11_DoNotCacheCondition(struct zx_sa11_DoNotCacheCondition_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x);

struct zx_sa11_DoNotCacheCondition_s {
  ZX_ELEM_EXT
  zx_sa11_DoNotCacheCondition_EXT
};


/* -------------------------- sa11_Evidence -------------------------- */
/* refby( zx_sa11_AuthorizationDecisionStatement_s zx_sp11_AuthorizationDecisionQuery_s ) */
#ifndef zx_sa11_Evidence_EXT
#define zx_sa11_Evidence_EXT
#endif

struct zx_sa11_Evidence_s* zx_DEC_sa11_Evidence(struct zx_ctx* c);
struct zx_sa11_Evidence_s* zx_NEW_sa11_Evidence(struct zx_ctx* c);
struct zx_sa11_Evidence_s* zx_DEEP_CLONE_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x);
void zx_FREE_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, int free_strs);
int zx_WALK_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_Evidence(struct zx_sa11_Evidence_s* x);
char* zx_ENC_SO_sa11_Evidence(struct zx_sa11_Evidence_s* x, char* p);
char* zx_ENC_WO_sa11_Evidence(struct zx_sa11_Evidence_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x);

struct zx_sa11_Evidence_s {
  ZX_ELEM_EXT
  zx_sa11_Evidence_EXT
  struct zx_elem_s* AssertionIDReference;	/* {0,-1} xs:NCName */
  struct zx_sa11_Assertion_s* Assertion;	/* {0,-1} nada */
};

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

/* -------------------------- sa11_NameIdentifier -------------------------- */
/* refby( zx_ff12_NameIdentifierMappingResponse_s zx_ff12_FederationTerminationNotification_s zx_ff12_NameIdentifierMappingRequest_s zx_sa11_Subject_s zx_ff12_LogoutRequest_s zx_ff12_Subject_s ) */
#ifndef zx_sa11_NameIdentifier_EXT
#define zx_sa11_NameIdentifier_EXT
#endif

struct zx_sa11_NameIdentifier_s* zx_DEC_sa11_NameIdentifier(struct zx_ctx* c);
struct zx_sa11_NameIdentifier_s* zx_NEW_sa11_NameIdentifier(struct zx_ctx* c);
struct zx_sa11_NameIdentifier_s* zx_DEEP_CLONE_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x);
void zx_FREE_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, int free_strs);
int zx_WALK_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_NameIdentifier(struct zx_sa11_NameIdentifier_s* x);
char* zx_ENC_SO_sa11_NameIdentifier(struct zx_sa11_NameIdentifier_s* x, char* p);
char* zx_ENC_WO_sa11_NameIdentifier(struct zx_sa11_NameIdentifier_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x);

struct zx_sa11_NameIdentifier_s {
  ZX_ELEM_EXT
  zx_sa11_NameIdentifier_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sa11_NameIdentifier_GET_NameQualifier(struct zx_sa11_NameIdentifier_s* x);
struct zx_str_s* zx_sa11_NameIdentifier_GET_Format(struct zx_sa11_NameIdentifier_s* x);
void zx_sa11_NameIdentifier_PUT_NameQualifier(struct zx_sa11_NameIdentifier_s* x, struct zx_str_s* y);
void zx_sa11_NameIdentifier_PUT_Format(struct zx_sa11_NameIdentifier_s* x, struct zx_str_s* y);

/* -------------------------- sa11_Subject -------------------------- */
/* refby( zx_sp11_AttributeQuery_s zx_sp11_AuthenticationQuery_s zx_sa11_AuthorizationDecisionStatement_s zx_sa11_AuthenticationStatement_s zx_ff12_AuthenticationStatement_s zx_sp11_SubjectQuery_s zx_sa11_AttributeStatement_s zx_sa11_SubjectStatement_s zx_sp11_AuthorizationDecisionQuery_s ) */
#ifndef zx_sa11_Subject_EXT
#define zx_sa11_Subject_EXT
#endif

struct zx_sa11_Subject_s* zx_DEC_sa11_Subject(struct zx_ctx* c);
struct zx_sa11_Subject_s* zx_NEW_sa11_Subject(struct zx_ctx* c);
struct zx_sa11_Subject_s* zx_DEEP_CLONE_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, int dup_strs);
void zx_DUP_STRS_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x);
void zx_FREE_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, int free_strs);
int zx_WALK_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_Subject(struct zx_sa11_Subject_s* x);
char* zx_ENC_SO_sa11_Subject(struct zx_sa11_Subject_s* x, char* p);
char* zx_ENC_WO_sa11_Subject(struct zx_sa11_Subject_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x);

struct zx_sa11_Subject_s {
  ZX_ELEM_EXT
  zx_sa11_Subject_EXT
  struct zx_sa11_NameIdentifier_s* NameIdentifier;	/* {0,1} nada */
  struct zx_sa11_SubjectConfirmation_s* SubjectConfirmation;	/* {0,1} nada */
};

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

/* -------------------------- sa11_SubjectConfirmation -------------------------- */
/* refby( zx_sa11_Subject_s zx_ff12_Subject_s ) */
#ifndef zx_sa11_SubjectConfirmation_EXT
#define zx_sa11_SubjectConfirmation_EXT
#endif

struct zx_sa11_SubjectConfirmation_s* zx_DEC_sa11_SubjectConfirmation(struct zx_ctx* c);
struct zx_sa11_SubjectConfirmation_s* zx_NEW_sa11_SubjectConfirmation(struct zx_ctx* c);
struct zx_sa11_SubjectConfirmation_s* zx_DEEP_CLONE_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, int dup_strs);
void zx_DUP_STRS_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x);
void zx_FREE_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, int free_strs);
int zx_WALK_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_SubjectConfirmation(struct zx_sa11_SubjectConfirmation_s* x);
char* zx_ENC_SO_sa11_SubjectConfirmation(struct zx_sa11_SubjectConfirmation_s* x, char* p);
char* zx_ENC_WO_sa11_SubjectConfirmation(struct zx_sa11_SubjectConfirmation_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x);

struct zx_sa11_SubjectConfirmation_s {
  ZX_ELEM_EXT
  zx_sa11_SubjectConfirmation_EXT
  struct zx_elem_s* ConfirmationMethod;	/* {1,-1} xs:anyURI */
  struct zx_elem_s* SubjectConfirmationData;	/* {0,1} xs:anyType */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
};

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

/* -------------------------- sa11_SubjectLocality -------------------------- */
/* refby( zx_sa11_AuthenticationStatement_s zx_ff12_AuthenticationStatement_s ) */
#ifndef zx_sa11_SubjectLocality_EXT
#define zx_sa11_SubjectLocality_EXT
#endif

struct zx_sa11_SubjectLocality_s* zx_DEC_sa11_SubjectLocality(struct zx_ctx* c);
struct zx_sa11_SubjectLocality_s* zx_NEW_sa11_SubjectLocality(struct zx_ctx* c);
struct zx_sa11_SubjectLocality_s* zx_DEEP_CLONE_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, int dup_strs);
void zx_DUP_STRS_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x);
void zx_FREE_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, int free_strs);
int zx_WALK_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_SubjectLocality(struct zx_sa11_SubjectLocality_s* x);
char* zx_ENC_SO_sa11_SubjectLocality(struct zx_sa11_SubjectLocality_s* x, char* p);
char* zx_ENC_WO_sa11_SubjectLocality(struct zx_sa11_SubjectLocality_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x);

struct zx_sa11_SubjectLocality_s {
  ZX_ELEM_EXT
  zx_sa11_SubjectLocality_EXT
  struct zx_str_s* IPAddress;	/* {0,1} attribute xs:string */
  struct zx_str_s* DNSAddress;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sa11_SubjectLocality_GET_IPAddress(struct zx_sa11_SubjectLocality_s* x);
struct zx_str_s* zx_sa11_SubjectLocality_GET_DNSAddress(struct zx_sa11_SubjectLocality_s* x);
void zx_sa11_SubjectLocality_PUT_IPAddress(struct zx_sa11_SubjectLocality_s* x, struct zx_str_s* y);
void zx_sa11_SubjectLocality_PUT_DNSAddress(struct zx_sa11_SubjectLocality_s* x, struct zx_str_s* y);

/* -------------------------- sa11_SubjectStatement -------------------------- */
/* refby( zx_ff12_Assertion_s zx_sa11_Assertion_s ) */
#ifndef zx_sa11_SubjectStatement_EXT
#define zx_sa11_SubjectStatement_EXT
#endif

struct zx_sa11_SubjectStatement_s* zx_DEC_sa11_SubjectStatement(struct zx_ctx* c);
struct zx_sa11_SubjectStatement_s* zx_NEW_sa11_SubjectStatement(struct zx_ctx* c);
struct zx_sa11_SubjectStatement_s* zx_DEEP_CLONE_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x);
void zx_FREE_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, int free_strs);
int zx_WALK_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa11_SubjectStatement(struct zx_sa11_SubjectStatement_s* x);
char* zx_ENC_SO_sa11_SubjectStatement(struct zx_sa11_SubjectStatement_s* x, char* p);
char* zx_ENC_WO_sa11_SubjectStatement(struct zx_sa11_SubjectStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x);

struct zx_sa11_SubjectStatement_s {
  ZX_ELEM_EXT
  zx_sa11_SubjectStatement_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
};

struct zx_sa11_Subject_s* zx_sa11_SubjectStatement_GET_Subject(struct zx_sa11_SubjectStatement_s* x, int n);
int zx_sa11_SubjectStatement_NUM_Subject(struct zx_sa11_SubjectStatement_s* x);
struct zx_sa11_Subject_s* zx_sa11_SubjectStatement_POP_Subject(struct zx_sa11_SubjectStatement_s* x);
void zx_sa11_SubjectStatement_PUSH_Subject(struct zx_sa11_SubjectStatement_s* x, struct zx_sa11_Subject_s* y);
void zx_sa11_SubjectStatement_PUT_Subject(struct zx_sa11_SubjectStatement_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sa11_SubjectStatement_ADD_Subject(struct zx_sa11_SubjectStatement_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sa11_SubjectStatement_DEL_Subject(struct zx_sa11_SubjectStatement_s* x, int n);
void zx_sa11_SubjectStatement_REV_Subject(struct zx_sa11_SubjectStatement_s* x);

/* -------------------------- sa_Action -------------------------- */
/* refby( zx_sp_AuthzDecisionQuery_s zx_sa_AuthzDecisionStatement_s ) */
#ifndef zx_sa_Action_EXT
#define zx_sa_Action_EXT
#endif

struct zx_sa_Action_s* zx_DEC_sa_Action(struct zx_ctx* c);
struct zx_sa_Action_s* zx_NEW_sa_Action(struct zx_ctx* c);
struct zx_sa_Action_s* zx_DEEP_CLONE_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, int dup_strs);
void zx_DUP_STRS_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x);
void zx_FREE_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, int free_strs);
int zx_WALK_SO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_Action(struct zx_sa_Action_s* x);
char* zx_ENC_SO_sa_Action(struct zx_sa_Action_s* x, char* p);
char* zx_ENC_WO_sa_Action(struct zx_sa_Action_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x);

struct zx_sa_Action_s {
  ZX_ELEM_EXT
  zx_sa_Action_EXT
  struct zx_str_s* Namespace;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sa_Action_GET_Namespace(struct zx_sa_Action_s* x);
void zx_sa_Action_PUT_Namespace(struct zx_sa_Action_s* x, struct zx_str_s* y);

/* -------------------------- sa_Advice -------------------------- */
/* refby( zx_sa_Assertion_s ) */
#ifndef zx_sa_Advice_EXT
#define zx_sa_Advice_EXT
#endif

struct zx_sa_Advice_s* zx_DEC_sa_Advice(struct zx_ctx* c);
struct zx_sa_Advice_s* zx_NEW_sa_Advice(struct zx_ctx* c);
struct zx_sa_Advice_s* zx_DEEP_CLONE_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, int dup_strs);
void zx_DUP_STRS_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x);
void zx_FREE_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, int free_strs);
int zx_WALK_SO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_Advice(struct zx_sa_Advice_s* x);
char* zx_ENC_SO_sa_Advice(struct zx_sa_Advice_s* x, char* p);
char* zx_ENC_WO_sa_Advice(struct zx_sa_Advice_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x);

struct zx_sa_Advice_s {
  ZX_ELEM_EXT
  zx_sa_Advice_EXT
  struct zx_elem_s* AssertionIDRef;	/* {0,-1} xs:NCName */
  struct zx_elem_s* AssertionURIRef;	/* {0,-1} xs:anyURI */
  struct zx_sa_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,-1} nada */
};

struct zx_elem_s* zx_sa_Advice_GET_AssertionIDRef(struct zx_sa_Advice_s* x, int n);
struct zx_elem_s* zx_sa_Advice_GET_AssertionURIRef(struct zx_sa_Advice_s* x, int n);
struct zx_sa_Assertion_s* zx_sa_Advice_GET_Assertion(struct zx_sa_Advice_s* x, int n);
struct zx_sa_EncryptedAssertion_s* zx_sa_Advice_GET_EncryptedAssertion(struct zx_sa_Advice_s* x, int n);
int zx_sa_Advice_NUM_AssertionIDRef(struct zx_sa_Advice_s* x);
int zx_sa_Advice_NUM_AssertionURIRef(struct zx_sa_Advice_s* x);
int zx_sa_Advice_NUM_Assertion(struct zx_sa_Advice_s* x);
int zx_sa_Advice_NUM_EncryptedAssertion(struct zx_sa_Advice_s* x);
struct zx_elem_s* zx_sa_Advice_POP_AssertionIDRef(struct zx_sa_Advice_s* x);
struct zx_elem_s* zx_sa_Advice_POP_AssertionURIRef(struct zx_sa_Advice_s* x);
struct zx_sa_Assertion_s* zx_sa_Advice_POP_Assertion(struct zx_sa_Advice_s* x);
struct zx_sa_EncryptedAssertion_s* zx_sa_Advice_POP_EncryptedAssertion(struct zx_sa_Advice_s* x);
void zx_sa_Advice_PUSH_AssertionIDRef(struct zx_sa_Advice_s* x, struct zx_elem_s* y);
void zx_sa_Advice_PUSH_AssertionURIRef(struct zx_sa_Advice_s* x, struct zx_elem_s* y);
void zx_sa_Advice_PUSH_Assertion(struct zx_sa_Advice_s* x, struct zx_sa_Assertion_s* y);
void zx_sa_Advice_PUSH_EncryptedAssertion(struct zx_sa_Advice_s* x, struct zx_sa_EncryptedAssertion_s* y);
void zx_sa_Advice_PUT_AssertionIDRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* y);
void zx_sa_Advice_PUT_AssertionURIRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* y);
void zx_sa_Advice_PUT_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_sa_Advice_PUT_EncryptedAssertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_EncryptedAssertion_s* y);
void zx_sa_Advice_ADD_AssertionIDRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* z);
void zx_sa_Advice_ADD_AssertionURIRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* z);
void zx_sa_Advice_ADD_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_sa_Advice_ADD_EncryptedAssertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_EncryptedAssertion_s* z);
void zx_sa_Advice_DEL_AssertionIDRef(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_DEL_AssertionURIRef(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_DEL_Assertion(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_DEL_EncryptedAssertion(struct zx_sa_Advice_s* x, int n);
void zx_sa_Advice_REV_AssertionIDRef(struct zx_sa_Advice_s* x);
void zx_sa_Advice_REV_AssertionURIRef(struct zx_sa_Advice_s* x);
void zx_sa_Advice_REV_Assertion(struct zx_sa_Advice_s* x);
void zx_sa_Advice_REV_EncryptedAssertion(struct zx_sa_Advice_s* x);

/* -------------------------- sa_Assertion -------------------------- */
/* refby( zx_sa_Evidence_s zx_sa_Advice_s zx_sp_Response_s ) */
#ifndef zx_sa_Assertion_EXT
#define zx_sa_Assertion_EXT
#endif

struct zx_sa_Assertion_s* zx_DEC_sa_Assertion(struct zx_ctx* c);
struct zx_sa_Assertion_s* zx_NEW_sa_Assertion(struct zx_ctx* c);
struct zx_sa_Assertion_s* zx_DEEP_CLONE_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, int dup_strs);
void zx_DUP_STRS_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x);
void zx_FREE_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, int free_strs);
int zx_WALK_SO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_Assertion(struct zx_sa_Assertion_s* x);
char* zx_ENC_SO_sa_Assertion(struct zx_sa_Assertion_s* x, char* p);
char* zx_ENC_WO_sa_Assertion(struct zx_sa_Assertion_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x);

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
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
};

struct zx_str_s* zx_sa_Assertion_GET_Version(struct zx_sa_Assertion_s* x);
struct zx_str_s* zx_sa_Assertion_GET_ID(struct zx_sa_Assertion_s* x);
struct zx_str_s* zx_sa_Assertion_GET_IssueInstant(struct zx_sa_Assertion_s* x);
struct zx_sa_Issuer_s* zx_sa_Assertion_GET_Issuer(struct zx_sa_Assertion_s* x, int n);
struct zx_ds_Signature_s* zx_sa_Assertion_GET_Signature(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_Subject_s* zx_sa_Assertion_GET_Subject(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_Conditions_s* zx_sa_Assertion_GET_Conditions(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_Advice_s* zx_sa_Assertion_GET_Advice(struct zx_sa_Assertion_s* x, int n);
struct zx_elem_s* zx_sa_Assertion_GET_Statement(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_AuthnStatement_s* zx_sa_Assertion_GET_AuthnStatement(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_AuthzDecisionStatement_s* zx_sa_Assertion_GET_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n);
struct zx_sa_AttributeStatement_s* zx_sa_Assertion_GET_AttributeStatement(struct zx_sa_Assertion_s* x, int n);
int zx_sa_Assertion_NUM_Issuer(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Signature(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Subject(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Conditions(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Advice(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_Statement(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_AuthnStatement(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_AuthzDecisionStatement(struct zx_sa_Assertion_s* x);
int zx_sa_Assertion_NUM_AttributeStatement(struct zx_sa_Assertion_s* x);
struct zx_sa_Issuer_s* zx_sa_Assertion_POP_Issuer(struct zx_sa_Assertion_s* x);
struct zx_ds_Signature_s* zx_sa_Assertion_POP_Signature(struct zx_sa_Assertion_s* x);
struct zx_sa_Subject_s* zx_sa_Assertion_POP_Subject(struct zx_sa_Assertion_s* x);
struct zx_sa_Conditions_s* zx_sa_Assertion_POP_Conditions(struct zx_sa_Assertion_s* x);
struct zx_sa_Advice_s* zx_sa_Assertion_POP_Advice(struct zx_sa_Assertion_s* x);
struct zx_elem_s* zx_sa_Assertion_POP_Statement(struct zx_sa_Assertion_s* x);
struct zx_sa_AuthnStatement_s* zx_sa_Assertion_POP_AuthnStatement(struct zx_sa_Assertion_s* x);
struct zx_sa_AuthzDecisionStatement_s* zx_sa_Assertion_POP_AuthzDecisionStatement(struct zx_sa_Assertion_s* x);
struct zx_sa_AttributeStatement_s* zx_sa_Assertion_POP_AttributeStatement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_PUSH_Issuer(struct zx_sa_Assertion_s* x, struct zx_sa_Issuer_s* y);
void zx_sa_Assertion_PUSH_Signature(struct zx_sa_Assertion_s* x, struct zx_ds_Signature_s* y);
void zx_sa_Assertion_PUSH_Subject(struct zx_sa_Assertion_s* x, struct zx_sa_Subject_s* y);
void zx_sa_Assertion_PUSH_Conditions(struct zx_sa_Assertion_s* x, struct zx_sa_Conditions_s* y);
void zx_sa_Assertion_PUSH_Advice(struct zx_sa_Assertion_s* x, struct zx_sa_Advice_s* y);
void zx_sa_Assertion_PUSH_Statement(struct zx_sa_Assertion_s* x, struct zx_elem_s* y);
void zx_sa_Assertion_PUSH_AuthnStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AuthnStatement_s* y);
void zx_sa_Assertion_PUSH_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AuthzDecisionStatement_s* y);
void zx_sa_Assertion_PUSH_AttributeStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AttributeStatement_s* y);
void zx_sa_Assertion_PUT_Version(struct zx_sa_Assertion_s* x, struct zx_str_s* y);
void zx_sa_Assertion_PUT_ID(struct zx_sa_Assertion_s* x, struct zx_str_s* y);
void zx_sa_Assertion_PUT_IssueInstant(struct zx_sa_Assertion_s* x, struct zx_str_s* y);
void zx_sa_Assertion_PUT_Issuer(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sa_Assertion_PUT_Signature(struct zx_sa_Assertion_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sa_Assertion_PUT_Subject(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sa_Assertion_PUT_Conditions(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Conditions_s* y);
void zx_sa_Assertion_PUT_Advice(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Advice_s* y);
void zx_sa_Assertion_PUT_Statement(struct zx_sa_Assertion_s* x, int n, struct zx_elem_s* y);
void zx_sa_Assertion_PUT_AuthnStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthnStatement_s* y);
void zx_sa_Assertion_PUT_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthzDecisionStatement_s* y);
void zx_sa_Assertion_PUT_AttributeStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AttributeStatement_s* y);
void zx_sa_Assertion_ADD_Issuer(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sa_Assertion_ADD_Signature(struct zx_sa_Assertion_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sa_Assertion_ADD_Subject(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sa_Assertion_ADD_Conditions(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Conditions_s* z);
void zx_sa_Assertion_ADD_Advice(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Advice_s* z);
void zx_sa_Assertion_ADD_Statement(struct zx_sa_Assertion_s* x, int n, struct zx_elem_s* z);
void zx_sa_Assertion_ADD_AuthnStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthnStatement_s* z);
void zx_sa_Assertion_ADD_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthzDecisionStatement_s* z);
void zx_sa_Assertion_ADD_AttributeStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AttributeStatement_s* z);
void zx_sa_Assertion_DEL_Issuer(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Signature(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Subject(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Conditions(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Advice(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_Statement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_AuthnStatement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_DEL_AttributeStatement(struct zx_sa_Assertion_s* x, int n);
void zx_sa_Assertion_REV_Issuer(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Signature(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Subject(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Conditions(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Advice(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_Statement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_AuthnStatement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_AuthzDecisionStatement(struct zx_sa_Assertion_s* x);
void zx_sa_Assertion_REV_AttributeStatement(struct zx_sa_Assertion_s* x);

/* -------------------------- sa_Attribute -------------------------- */
/* refby( zx_sa_AttributeStatement_s zx_sp_AttributeQuery_s ) */
#ifndef zx_sa_Attribute_EXT
#define zx_sa_Attribute_EXT
#endif

struct zx_sa_Attribute_s* zx_DEC_sa_Attribute(struct zx_ctx* c);
struct zx_sa_Attribute_s* zx_NEW_sa_Attribute(struct zx_ctx* c);
struct zx_sa_Attribute_s* zx_DEEP_CLONE_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, int dup_strs);
void zx_DUP_STRS_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x);
void zx_FREE_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, int free_strs);
int zx_WALK_SO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_Attribute(struct zx_sa_Attribute_s* x);
char* zx_ENC_SO_sa_Attribute(struct zx_sa_Attribute_s* x, char* p);
char* zx_ENC_WO_sa_Attribute(struct zx_sa_Attribute_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x);

struct zx_sa_Attribute_s {
  ZX_ELEM_EXT
  zx_sa_Attribute_EXT
  struct zx_elem_s* AttributeValue;	/* {0,-1} xs:anyType */
  struct zx_str_s* Name;	/* {1,1} attribute xs:string */
  struct zx_str_s* NameFormat;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* FriendlyName;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sa_Attribute_GET_Name(struct zx_sa_Attribute_s* x);
struct zx_str_s* zx_sa_Attribute_GET_NameFormat(struct zx_sa_Attribute_s* x);
struct zx_str_s* zx_sa_Attribute_GET_FriendlyName(struct zx_sa_Attribute_s* x);
struct zx_elem_s* zx_sa_Attribute_GET_AttributeValue(struct zx_sa_Attribute_s* x, int n);
int zx_sa_Attribute_NUM_AttributeValue(struct zx_sa_Attribute_s* x);
struct zx_elem_s* zx_sa_Attribute_POP_AttributeValue(struct zx_sa_Attribute_s* x);
void zx_sa_Attribute_PUSH_AttributeValue(struct zx_sa_Attribute_s* x, struct zx_elem_s* y);
void zx_sa_Attribute_PUT_Name(struct zx_sa_Attribute_s* x, struct zx_str_s* y);
void zx_sa_Attribute_PUT_NameFormat(struct zx_sa_Attribute_s* x, struct zx_str_s* y);
void zx_sa_Attribute_PUT_FriendlyName(struct zx_sa_Attribute_s* x, struct zx_str_s* y);
void zx_sa_Attribute_PUT_AttributeValue(struct zx_sa_Attribute_s* x, int n, struct zx_elem_s* y);
void zx_sa_Attribute_ADD_AttributeValue(struct zx_sa_Attribute_s* x, int n, struct zx_elem_s* z);
void zx_sa_Attribute_DEL_AttributeValue(struct zx_sa_Attribute_s* x, int n);
void zx_sa_Attribute_REV_AttributeValue(struct zx_sa_Attribute_s* x);

/* -------------------------- sa_AttributeStatement -------------------------- */
/* refby( zx_sa_Assertion_s ) */
#ifndef zx_sa_AttributeStatement_EXT
#define zx_sa_AttributeStatement_EXT
#endif

struct zx_sa_AttributeStatement_s* zx_DEC_sa_AttributeStatement(struct zx_ctx* c);
struct zx_sa_AttributeStatement_s* zx_NEW_sa_AttributeStatement(struct zx_ctx* c);
struct zx_sa_AttributeStatement_s* zx_DEEP_CLONE_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x);
void zx_FREE_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, int free_strs);
int zx_WALK_SO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_AttributeStatement(struct zx_sa_AttributeStatement_s* x);
char* zx_ENC_SO_sa_AttributeStatement(struct zx_sa_AttributeStatement_s* x, char* p);
char* zx_ENC_WO_sa_AttributeStatement(struct zx_sa_AttributeStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x);

struct zx_sa_AttributeStatement_s {
  ZX_ELEM_EXT
  zx_sa_AttributeStatement_EXT
  struct zx_sa_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zx_sa_EncryptedAttribute_s* EncryptedAttribute;	/* {0,-1} nada */
};

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

/* -------------------------- sa_AudienceRestriction -------------------------- */
/* refby( zx_sa_Conditions_s ) */
#ifndef zx_sa_AudienceRestriction_EXT
#define zx_sa_AudienceRestriction_EXT
#endif

struct zx_sa_AudienceRestriction_s* zx_DEC_sa_AudienceRestriction(struct zx_ctx* c);
struct zx_sa_AudienceRestriction_s* zx_NEW_sa_AudienceRestriction(struct zx_ctx* c);
struct zx_sa_AudienceRestriction_s* zx_DEEP_CLONE_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, int dup_strs);
void zx_DUP_STRS_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x);
void zx_FREE_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, int free_strs);
int zx_WALK_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_AudienceRestriction(struct zx_sa_AudienceRestriction_s* x);
char* zx_ENC_SO_sa_AudienceRestriction(struct zx_sa_AudienceRestriction_s* x, char* p);
char* zx_ENC_WO_sa_AudienceRestriction(struct zx_sa_AudienceRestriction_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x);

struct zx_sa_AudienceRestriction_s {
  ZX_ELEM_EXT
  zx_sa_AudienceRestriction_EXT
  struct zx_elem_s* Audience;	/* {1,-1} xs:anyURI */
};

struct zx_elem_s* zx_sa_AudienceRestriction_GET_Audience(struct zx_sa_AudienceRestriction_s* x, int n);
int zx_sa_AudienceRestriction_NUM_Audience(struct zx_sa_AudienceRestriction_s* x);
struct zx_elem_s* zx_sa_AudienceRestriction_POP_Audience(struct zx_sa_AudienceRestriction_s* x);
void zx_sa_AudienceRestriction_PUSH_Audience(struct zx_sa_AudienceRestriction_s* x, struct zx_elem_s* y);
void zx_sa_AudienceRestriction_PUT_Audience(struct zx_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* y);
void zx_sa_AudienceRestriction_ADD_Audience(struct zx_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* z);
void zx_sa_AudienceRestriction_DEL_Audience(struct zx_sa_AudienceRestriction_s* x, int n);
void zx_sa_AudienceRestriction_REV_Audience(struct zx_sa_AudienceRestriction_s* x);

/* -------------------------- sa_AuthnContext -------------------------- */
/* refby( zx_sa_AuthnStatement_s ) */
#ifndef zx_sa_AuthnContext_EXT
#define zx_sa_AuthnContext_EXT
#endif

struct zx_sa_AuthnContext_s* zx_DEC_sa_AuthnContext(struct zx_ctx* c);
struct zx_sa_AuthnContext_s* zx_NEW_sa_AuthnContext(struct zx_ctx* c);
struct zx_sa_AuthnContext_s* zx_DEEP_CLONE_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, int dup_strs);
void zx_DUP_STRS_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x);
void zx_FREE_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, int free_strs);
int zx_WALK_SO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_AuthnContext(struct zx_sa_AuthnContext_s* x);
char* zx_ENC_SO_sa_AuthnContext(struct zx_sa_AuthnContext_s* x, char* p);
char* zx_ENC_WO_sa_AuthnContext(struct zx_sa_AuthnContext_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x);

struct zx_sa_AuthnContext_s {
  ZX_ELEM_EXT
  zx_sa_AuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {0,1} xs:anyURI */
  struct zx_elem_s* AuthnContextDecl;	/* {0,1} xs:anyType */
  struct zx_elem_s* AuthnContextDeclRef;	/* {0,1} xs:anyURI */
  struct zx_elem_s* AuthenticatingAuthority;	/* {0,-1} xs:anyURI */
};

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

/* -------------------------- sa_AuthnStatement -------------------------- */
/* refby( zx_sa_Assertion_s ) */
#ifndef zx_sa_AuthnStatement_EXT
#define zx_sa_AuthnStatement_EXT
#endif

struct zx_sa_AuthnStatement_s* zx_DEC_sa_AuthnStatement(struct zx_ctx* c);
struct zx_sa_AuthnStatement_s* zx_NEW_sa_AuthnStatement(struct zx_ctx* c);
struct zx_sa_AuthnStatement_s* zx_DEEP_CLONE_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x);
void zx_FREE_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, int free_strs);
int zx_WALK_SO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_AuthnStatement(struct zx_sa_AuthnStatement_s* x);
char* zx_ENC_SO_sa_AuthnStatement(struct zx_sa_AuthnStatement_s* x, char* p);
char* zx_ENC_WO_sa_AuthnStatement(struct zx_sa_AuthnStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x);

struct zx_sa_AuthnStatement_s {
  ZX_ELEM_EXT
  zx_sa_AuthnStatement_EXT
  struct zx_sa_SubjectLocality_s* SubjectLocality;	/* {0,1} nada */
  struct zx_sa_AuthnContext_s* AuthnContext;	/* {1,1} nada */
  struct zx_str_s* AuthnInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* SessionIndex;	/* {0,1} attribute xs:string */
  struct zx_str_s* SessionNotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

struct zx_str_s* zx_sa_AuthnStatement_GET_AuthnInstant(struct zx_sa_AuthnStatement_s* x);
struct zx_str_s* zx_sa_AuthnStatement_GET_SessionIndex(struct zx_sa_AuthnStatement_s* x);
struct zx_str_s* zx_sa_AuthnStatement_GET_SessionNotOnOrAfter(struct zx_sa_AuthnStatement_s* x);
struct zx_sa_SubjectLocality_s* zx_sa_AuthnStatement_GET_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n);
struct zx_sa_AuthnContext_s* zx_sa_AuthnStatement_GET_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n);
int zx_sa_AuthnStatement_NUM_SubjectLocality(struct zx_sa_AuthnStatement_s* x);
int zx_sa_AuthnStatement_NUM_AuthnContext(struct zx_sa_AuthnStatement_s* x);
struct zx_sa_SubjectLocality_s* zx_sa_AuthnStatement_POP_SubjectLocality(struct zx_sa_AuthnStatement_s* x);
struct zx_sa_AuthnContext_s* zx_sa_AuthnStatement_POP_AuthnContext(struct zx_sa_AuthnStatement_s* x);
void zx_sa_AuthnStatement_PUSH_SubjectLocality(struct zx_sa_AuthnStatement_s* x, struct zx_sa_SubjectLocality_s* y);
void zx_sa_AuthnStatement_PUSH_AuthnContext(struct zx_sa_AuthnStatement_s* x, struct zx_sa_AuthnContext_s* y);
void zx_sa_AuthnStatement_PUT_AuthnInstant(struct zx_sa_AuthnStatement_s* x, struct zx_str_s* y);
void zx_sa_AuthnStatement_PUT_SessionIndex(struct zx_sa_AuthnStatement_s* x, struct zx_str_s* y);
void zx_sa_AuthnStatement_PUT_SessionNotOnOrAfter(struct zx_sa_AuthnStatement_s* x, struct zx_str_s* y);
void zx_sa_AuthnStatement_PUT_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_SubjectLocality_s* y);
void zx_sa_AuthnStatement_PUT_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_AuthnContext_s* y);
void zx_sa_AuthnStatement_ADD_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_SubjectLocality_s* z);
void zx_sa_AuthnStatement_ADD_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_AuthnContext_s* z);
void zx_sa_AuthnStatement_DEL_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n);
void zx_sa_AuthnStatement_DEL_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n);
void zx_sa_AuthnStatement_REV_SubjectLocality(struct zx_sa_AuthnStatement_s* x);
void zx_sa_AuthnStatement_REV_AuthnContext(struct zx_sa_AuthnStatement_s* x);

/* -------------------------- sa_AuthzDecisionStatement -------------------------- */
/* refby( zx_sa_Assertion_s ) */
#ifndef zx_sa_AuthzDecisionStatement_EXT
#define zx_sa_AuthzDecisionStatement_EXT
#endif

struct zx_sa_AuthzDecisionStatement_s* zx_DEC_sa_AuthzDecisionStatement(struct zx_ctx* c);
struct zx_sa_AuthzDecisionStatement_s* zx_NEW_sa_AuthzDecisionStatement(struct zx_ctx* c);
struct zx_sa_AuthzDecisionStatement_s* zx_DEEP_CLONE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, int dup_strs);
void zx_DUP_STRS_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x);
void zx_FREE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, int free_strs);
int zx_WALK_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_AuthzDecisionStatement(struct zx_sa_AuthzDecisionStatement_s* x);
char* zx_ENC_SO_sa_AuthzDecisionStatement(struct zx_sa_AuthzDecisionStatement_s* x, char* p);
char* zx_ENC_WO_sa_AuthzDecisionStatement(struct zx_sa_AuthzDecisionStatement_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x);

struct zx_sa_AuthzDecisionStatement_s {
  ZX_ELEM_EXT
  zx_sa_AuthzDecisionStatement_EXT
  struct zx_sa_Action_s* Action;	/* {1,-1} nada */
  struct zx_sa_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str_s* Resource;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Decision;	/* {1,1} attribute sa11:DecisionType */
};

struct zx_str_s* zx_sa_AuthzDecisionStatement_GET_Resource(struct zx_sa_AuthzDecisionStatement_s* x);
struct zx_str_s* zx_sa_AuthzDecisionStatement_GET_Decision(struct zx_sa_AuthzDecisionStatement_s* x);
struct zx_sa_Action_s* zx_sa_AuthzDecisionStatement_GET_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n);
struct zx_sa_Evidence_s* zx_sa_AuthzDecisionStatement_GET_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n);
int zx_sa_AuthzDecisionStatement_NUM_Action(struct zx_sa_AuthzDecisionStatement_s* x);
int zx_sa_AuthzDecisionStatement_NUM_Evidence(struct zx_sa_AuthzDecisionStatement_s* x);
struct zx_sa_Action_s* zx_sa_AuthzDecisionStatement_POP_Action(struct zx_sa_AuthzDecisionStatement_s* x);
struct zx_sa_Evidence_s* zx_sa_AuthzDecisionStatement_POP_Evidence(struct zx_sa_AuthzDecisionStatement_s* x);
void zx_sa_AuthzDecisionStatement_PUSH_Action(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_sa_Action_s* y);
void zx_sa_AuthzDecisionStatement_PUSH_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_sa_Evidence_s* y);
void zx_sa_AuthzDecisionStatement_PUT_Resource(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_str_s* y);
void zx_sa_AuthzDecisionStatement_PUT_Decision(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_str_s* y);
void zx_sa_AuthzDecisionStatement_PUT_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Action_s* y);
void zx_sa_AuthzDecisionStatement_PUT_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Evidence_s* y);
void zx_sa_AuthzDecisionStatement_ADD_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Action_s* z);
void zx_sa_AuthzDecisionStatement_ADD_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Evidence_s* z);
void zx_sa_AuthzDecisionStatement_DEL_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n);
void zx_sa_AuthzDecisionStatement_DEL_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n);
void zx_sa_AuthzDecisionStatement_REV_Action(struct zx_sa_AuthzDecisionStatement_s* x);
void zx_sa_AuthzDecisionStatement_REV_Evidence(struct zx_sa_AuthzDecisionStatement_s* x);

/* -------------------------- sa_BaseID -------------------------- */
/* refby( zx_sp_LogoutRequest_s zx_sp_NameIDMappingRequest_s zx_sa_SubjectConfirmation_s zx_sa_Subject_s ) */
#ifndef zx_sa_BaseID_EXT
#define zx_sa_BaseID_EXT
#endif

struct zx_sa_BaseID_s* zx_DEC_sa_BaseID(struct zx_ctx* c);
struct zx_sa_BaseID_s* zx_NEW_sa_BaseID(struct zx_ctx* c);
struct zx_sa_BaseID_s* zx_DEEP_CLONE_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, int dup_strs);
void zx_DUP_STRS_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x);
void zx_FREE_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, int free_strs);
int zx_WALK_SO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_BaseID(struct zx_sa_BaseID_s* x);
char* zx_ENC_SO_sa_BaseID(struct zx_sa_BaseID_s* x, char* p);
char* zx_ENC_WO_sa_BaseID(struct zx_sa_BaseID_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x);

struct zx_sa_BaseID_s {
  ZX_ELEM_EXT
  zx_sa_BaseID_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* SPNameQualifier;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sa_BaseID_GET_NameQualifier(struct zx_sa_BaseID_s* x);
struct zx_str_s* zx_sa_BaseID_GET_SPNameQualifier(struct zx_sa_BaseID_s* x);
void zx_sa_BaseID_PUT_NameQualifier(struct zx_sa_BaseID_s* x, struct zx_str_s* y);
void zx_sa_BaseID_PUT_SPNameQualifier(struct zx_sa_BaseID_s* x, struct zx_str_s* y);

/* -------------------------- sa_Conditions -------------------------- */
/* refby( zx_sp_AuthnRequest_s zx_sa_Assertion_s ) */
#ifndef zx_sa_Conditions_EXT
#define zx_sa_Conditions_EXT
#endif

struct zx_sa_Conditions_s* zx_DEC_sa_Conditions(struct zx_ctx* c);
struct zx_sa_Conditions_s* zx_NEW_sa_Conditions(struct zx_ctx* c);
struct zx_sa_Conditions_s* zx_DEEP_CLONE_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, int dup_strs);
void zx_DUP_STRS_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x);
void zx_FREE_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, int free_strs);
int zx_WALK_SO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_Conditions(struct zx_sa_Conditions_s* x);
char* zx_ENC_SO_sa_Conditions(struct zx_sa_Conditions_s* x, char* p);
char* zx_ENC_WO_sa_Conditions(struct zx_sa_Conditions_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x);

struct zx_sa_Conditions_s {
  ZX_ELEM_EXT
  zx_sa_Conditions_EXT
  struct zx_elem_s* Condition;	/* {0,-1} sa:ConditionAbstractType */
  struct zx_sa_AudienceRestriction_s* AudienceRestriction;	/* {0,-1}  */
  struct zx_sa_OneTimeUse_s* OneTimeUse;	/* {0,-1} nada */
  struct zx_sa_ProxyRestriction_s* ProxyRestriction;	/* {0,-1} nada */
  struct zx_str_s* NotBefore;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

struct zx_str_s* zx_sa_Conditions_GET_NotBefore(struct zx_sa_Conditions_s* x);
struct zx_str_s* zx_sa_Conditions_GET_NotOnOrAfter(struct zx_sa_Conditions_s* x);
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
void zx_sa_Conditions_PUT_NotBefore(struct zx_sa_Conditions_s* x, struct zx_str_s* y);
void zx_sa_Conditions_PUT_NotOnOrAfter(struct zx_sa_Conditions_s* x, struct zx_str_s* y);
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

/* -------------------------- sa_EncryptedAssertion -------------------------- */
/* refby( zx_sa_Evidence_s zx_sa_Advice_s zx_sp_Response_s ) */
#ifndef zx_sa_EncryptedAssertion_EXT
#define zx_sa_EncryptedAssertion_EXT
#endif

struct zx_sa_EncryptedAssertion_s* zx_DEC_sa_EncryptedAssertion(struct zx_ctx* c);
struct zx_sa_EncryptedAssertion_s* zx_NEW_sa_EncryptedAssertion(struct zx_ctx* c);
struct zx_sa_EncryptedAssertion_s* zx_DEEP_CLONE_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, int dup_strs);
void zx_DUP_STRS_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x);
void zx_FREE_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, int free_strs);
int zx_WALK_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_EncryptedAssertion(struct zx_sa_EncryptedAssertion_s* x);
char* zx_ENC_SO_sa_EncryptedAssertion(struct zx_sa_EncryptedAssertion_s* x, char* p);
char* zx_ENC_WO_sa_EncryptedAssertion(struct zx_sa_EncryptedAssertion_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x);

struct zx_sa_EncryptedAssertion_s {
  ZX_ELEM_EXT
  zx_sa_EncryptedAssertion_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

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

/* -------------------------- sa_EncryptedAttribute -------------------------- */
/* refby( zx_sa_AttributeStatement_s ) */
#ifndef zx_sa_EncryptedAttribute_EXT
#define zx_sa_EncryptedAttribute_EXT
#endif

struct zx_sa_EncryptedAttribute_s* zx_DEC_sa_EncryptedAttribute(struct zx_ctx* c);
struct zx_sa_EncryptedAttribute_s* zx_NEW_sa_EncryptedAttribute(struct zx_ctx* c);
struct zx_sa_EncryptedAttribute_s* zx_DEEP_CLONE_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, int dup_strs);
void zx_DUP_STRS_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x);
void zx_FREE_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, int free_strs);
int zx_WALK_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_EncryptedAttribute(struct zx_sa_EncryptedAttribute_s* x);
char* zx_ENC_SO_sa_EncryptedAttribute(struct zx_sa_EncryptedAttribute_s* x, char* p);
char* zx_ENC_WO_sa_EncryptedAttribute(struct zx_sa_EncryptedAttribute_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x);

struct zx_sa_EncryptedAttribute_s {
  ZX_ELEM_EXT
  zx_sa_EncryptedAttribute_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

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

/* -------------------------- sa_EncryptedID -------------------------- */
/* refby( zx_sp_LogoutRequest_s zx_sp_NameIDMappingResponse_s zx_sp_NameIDMappingRequest_s zx_sp_ManageNameIDRequest_s zx_sa_SubjectConfirmation_s zx_sa_Subject_s ) */
#ifndef zx_sa_EncryptedID_EXT
#define zx_sa_EncryptedID_EXT
#endif

struct zx_sa_EncryptedID_s* zx_DEC_sa_EncryptedID(struct zx_ctx* c);
struct zx_sa_EncryptedID_s* zx_NEW_sa_EncryptedID(struct zx_ctx* c);
struct zx_sa_EncryptedID_s* zx_DEEP_CLONE_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, int dup_strs);
void zx_DUP_STRS_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x);
void zx_FREE_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, int free_strs);
int zx_WALK_SO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_EncryptedID(struct zx_sa_EncryptedID_s* x);
char* zx_ENC_SO_sa_EncryptedID(struct zx_sa_EncryptedID_s* x, char* p);
char* zx_ENC_WO_sa_EncryptedID(struct zx_sa_EncryptedID_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x);

struct zx_sa_EncryptedID_s {
  ZX_ELEM_EXT
  zx_sa_EncryptedID_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

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

/* -------------------------- sa_Evidence -------------------------- */
/* refby( zx_sp_AuthzDecisionQuery_s zx_sa_AuthzDecisionStatement_s ) */
#ifndef zx_sa_Evidence_EXT
#define zx_sa_Evidence_EXT
#endif

struct zx_sa_Evidence_s* zx_DEC_sa_Evidence(struct zx_ctx* c);
struct zx_sa_Evidence_s* zx_NEW_sa_Evidence(struct zx_ctx* c);
struct zx_sa_Evidence_s* zx_DEEP_CLONE_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, int dup_strs);
void zx_DUP_STRS_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x);
void zx_FREE_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, int free_strs);
int zx_WALK_SO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_Evidence(struct zx_sa_Evidence_s* x);
char* zx_ENC_SO_sa_Evidence(struct zx_sa_Evidence_s* x, char* p);
char* zx_ENC_WO_sa_Evidence(struct zx_sa_Evidence_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x);

struct zx_sa_Evidence_s {
  ZX_ELEM_EXT
  zx_sa_Evidence_EXT
  struct zx_elem_s* AssertionIDRef;	/* {0,-1} xs:NCName */
  struct zx_elem_s* AssertionURIRef;	/* {0,-1} xs:anyURI */
  struct zx_sa_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,-1} nada */
};

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

/* -------------------------- sa_Issuer -------------------------- */
/* refby( zx_sp_LogoutRequest_s zx_sp_ArtifactResponse_s zx_sp_AuthnRequest_s zx_sp_AuthzDecisionQuery_s zx_sp_ArtifactResolve_s zx_sp_AttributeQuery_s zx_sp_NameIDMappingResponse_s zx_sp_ManageNameIDResponse_s zx_sp_LogoutResponse_s zx_sp_AssertionIDRequest_s zx_sp_NameIDMappingRequest_s zx_sp_Response_s zx_sp_ManageNameIDRequest_s zx_sa_Assertion_s zx_sp_SubjectQuery_s zx_sp_AuthnQuery_s ) */
#ifndef zx_sa_Issuer_EXT
#define zx_sa_Issuer_EXT
#endif

struct zx_sa_Issuer_s* zx_DEC_sa_Issuer(struct zx_ctx* c);
struct zx_sa_Issuer_s* zx_NEW_sa_Issuer(struct zx_ctx* c);
struct zx_sa_Issuer_s* zx_DEEP_CLONE_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, int dup_strs);
void zx_DUP_STRS_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x);
void zx_FREE_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, int free_strs);
int zx_WALK_SO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_Issuer(struct zx_sa_Issuer_s* x);
char* zx_ENC_SO_sa_Issuer(struct zx_sa_Issuer_s* x, char* p);
char* zx_ENC_WO_sa_Issuer(struct zx_sa_Issuer_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x);

struct zx_sa_Issuer_s {
  ZX_ELEM_EXT
  zx_sa_Issuer_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* SPNameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* SPProvidedID;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sa_Issuer_GET_NameQualifier(struct zx_sa_Issuer_s* x);
struct zx_str_s* zx_sa_Issuer_GET_SPNameQualifier(struct zx_sa_Issuer_s* x);
struct zx_str_s* zx_sa_Issuer_GET_Format(struct zx_sa_Issuer_s* x);
struct zx_str_s* zx_sa_Issuer_GET_SPProvidedID(struct zx_sa_Issuer_s* x);
void zx_sa_Issuer_PUT_NameQualifier(struct zx_sa_Issuer_s* x, struct zx_str_s* y);
void zx_sa_Issuer_PUT_SPNameQualifier(struct zx_sa_Issuer_s* x, struct zx_str_s* y);
void zx_sa_Issuer_PUT_Format(struct zx_sa_Issuer_s* x, struct zx_str_s* y);
void zx_sa_Issuer_PUT_SPProvidedID(struct zx_sa_Issuer_s* x, struct zx_str_s* y);

/* -------------------------- sa_NameID -------------------------- */
/* refby( zx_sp_LogoutRequest_s zx_sp_NameIDMappingResponse_s zx_sp_NameIDMappingRequest_s zx_sp_ManageNameIDRequest_s zx_sa_SubjectConfirmation_s zx_sa_Subject_s ) */
#ifndef zx_sa_NameID_EXT
#define zx_sa_NameID_EXT
#endif

struct zx_sa_NameID_s* zx_DEC_sa_NameID(struct zx_ctx* c);
struct zx_sa_NameID_s* zx_NEW_sa_NameID(struct zx_ctx* c);
struct zx_sa_NameID_s* zx_DEEP_CLONE_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, int dup_strs);
void zx_DUP_STRS_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x);
void zx_FREE_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, int free_strs);
int zx_WALK_SO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_NameID(struct zx_sa_NameID_s* x);
char* zx_ENC_SO_sa_NameID(struct zx_sa_NameID_s* x, char* p);
char* zx_ENC_WO_sa_NameID(struct zx_sa_NameID_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x);

struct zx_sa_NameID_s {
  ZX_ELEM_EXT
  zx_sa_NameID_EXT
  struct zx_str_s* NameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* SPNameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* SPProvidedID;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sa_NameID_GET_NameQualifier(struct zx_sa_NameID_s* x);
struct zx_str_s* zx_sa_NameID_GET_SPNameQualifier(struct zx_sa_NameID_s* x);
struct zx_str_s* zx_sa_NameID_GET_Format(struct zx_sa_NameID_s* x);
struct zx_str_s* zx_sa_NameID_GET_SPProvidedID(struct zx_sa_NameID_s* x);
void zx_sa_NameID_PUT_NameQualifier(struct zx_sa_NameID_s* x, struct zx_str_s* y);
void zx_sa_NameID_PUT_SPNameQualifier(struct zx_sa_NameID_s* x, struct zx_str_s* y);
void zx_sa_NameID_PUT_Format(struct zx_sa_NameID_s* x, struct zx_str_s* y);
void zx_sa_NameID_PUT_SPProvidedID(struct zx_sa_NameID_s* x, struct zx_str_s* y);

/* -------------------------- sa_OneTimeUse -------------------------- */
/* refby( zx_sa_Conditions_s ) */
#ifndef zx_sa_OneTimeUse_EXT
#define zx_sa_OneTimeUse_EXT
#endif

struct zx_sa_OneTimeUse_s* zx_DEC_sa_OneTimeUse(struct zx_ctx* c);
struct zx_sa_OneTimeUse_s* zx_NEW_sa_OneTimeUse(struct zx_ctx* c);
struct zx_sa_OneTimeUse_s* zx_DEEP_CLONE_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, int dup_strs);
void zx_DUP_STRS_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x);
void zx_FREE_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, int free_strs);
int zx_WALK_SO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_OneTimeUse(struct zx_sa_OneTimeUse_s* x);
char* zx_ENC_SO_sa_OneTimeUse(struct zx_sa_OneTimeUse_s* x, char* p);
char* zx_ENC_WO_sa_OneTimeUse(struct zx_sa_OneTimeUse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x);

struct zx_sa_OneTimeUse_s {
  ZX_ELEM_EXT
  zx_sa_OneTimeUse_EXT
};


/* -------------------------- sa_ProxyRestriction -------------------------- */
/* refby( zx_sa_Conditions_s ) */
#ifndef zx_sa_ProxyRestriction_EXT
#define zx_sa_ProxyRestriction_EXT
#endif

struct zx_sa_ProxyRestriction_s* zx_DEC_sa_ProxyRestriction(struct zx_ctx* c);
struct zx_sa_ProxyRestriction_s* zx_NEW_sa_ProxyRestriction(struct zx_ctx* c);
struct zx_sa_ProxyRestriction_s* zx_DEEP_CLONE_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, int dup_strs);
void zx_DUP_STRS_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x);
void zx_FREE_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, int free_strs);
int zx_WALK_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_ProxyRestriction(struct zx_sa_ProxyRestriction_s* x);
char* zx_ENC_SO_sa_ProxyRestriction(struct zx_sa_ProxyRestriction_s* x, char* p);
char* zx_ENC_WO_sa_ProxyRestriction(struct zx_sa_ProxyRestriction_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x);

struct zx_sa_ProxyRestriction_s {
  ZX_ELEM_EXT
  zx_sa_ProxyRestriction_EXT
  struct zx_elem_s* Audience;	/* {0,-1} xs:anyURI */
  struct zx_str_s* Count;	/* {0,1} attribute xs:nonNegativeInteger */
};

struct zx_str_s* zx_sa_ProxyRestriction_GET_Count(struct zx_sa_ProxyRestriction_s* x);
struct zx_elem_s* zx_sa_ProxyRestriction_GET_Audience(struct zx_sa_ProxyRestriction_s* x, int n);
int zx_sa_ProxyRestriction_NUM_Audience(struct zx_sa_ProxyRestriction_s* x);
struct zx_elem_s* zx_sa_ProxyRestriction_POP_Audience(struct zx_sa_ProxyRestriction_s* x);
void zx_sa_ProxyRestriction_PUSH_Audience(struct zx_sa_ProxyRestriction_s* x, struct zx_elem_s* y);
void zx_sa_ProxyRestriction_PUT_Count(struct zx_sa_ProxyRestriction_s* x, struct zx_str_s* y);
void zx_sa_ProxyRestriction_PUT_Audience(struct zx_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* y);
void zx_sa_ProxyRestriction_ADD_Audience(struct zx_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* z);
void zx_sa_ProxyRestriction_DEL_Audience(struct zx_sa_ProxyRestriction_s* x, int n);
void zx_sa_ProxyRestriction_REV_Audience(struct zx_sa_ProxyRestriction_s* x);

/* -------------------------- sa_Subject -------------------------- */
/* refby( zx_sp_AuthnRequest_s zx_sp_AuthzDecisionQuery_s zx_sp_AttributeQuery_s zx_sa_Assertion_s zx_sp_SubjectQuery_s zx_sp_AuthnQuery_s ) */
#ifndef zx_sa_Subject_EXT
#define zx_sa_Subject_EXT
#endif

struct zx_sa_Subject_s* zx_DEC_sa_Subject(struct zx_ctx* c);
struct zx_sa_Subject_s* zx_NEW_sa_Subject(struct zx_ctx* c);
struct zx_sa_Subject_s* zx_DEEP_CLONE_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, int dup_strs);
void zx_DUP_STRS_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x);
void zx_FREE_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, int free_strs);
int zx_WALK_SO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_Subject(struct zx_sa_Subject_s* x);
char* zx_ENC_SO_sa_Subject(struct zx_sa_Subject_s* x, char* p);
char* zx_ENC_WO_sa_Subject(struct zx_sa_Subject_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x);

struct zx_sa_Subject_s {
  ZX_ELEM_EXT
  zx_sa_Subject_EXT
  struct zx_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_sa_SubjectConfirmation_s* SubjectConfirmation;	/* {0,-1} nada */
};

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

/* -------------------------- sa_SubjectConfirmation -------------------------- */
/* refby( zx_sa_Subject_s ) */
#ifndef zx_sa_SubjectConfirmation_EXT
#define zx_sa_SubjectConfirmation_EXT
#endif

struct zx_sa_SubjectConfirmation_s* zx_DEC_sa_SubjectConfirmation(struct zx_ctx* c);
struct zx_sa_SubjectConfirmation_s* zx_NEW_sa_SubjectConfirmation(struct zx_ctx* c);
struct zx_sa_SubjectConfirmation_s* zx_DEEP_CLONE_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, int dup_strs);
void zx_DUP_STRS_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x);
void zx_FREE_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, int free_strs);
int zx_WALK_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_SubjectConfirmation(struct zx_sa_SubjectConfirmation_s* x);
char* zx_ENC_SO_sa_SubjectConfirmation(struct zx_sa_SubjectConfirmation_s* x, char* p);
char* zx_ENC_WO_sa_SubjectConfirmation(struct zx_sa_SubjectConfirmation_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x);

struct zx_sa_SubjectConfirmation_s {
  ZX_ELEM_EXT
  zx_sa_SubjectConfirmation_EXT
  struct zx_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_sa_SubjectConfirmationData_s* SubjectConfirmationData;	/* {0,1} nada */
  struct zx_str_s* Method;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sa_SubjectConfirmation_GET_Method(struct zx_sa_SubjectConfirmation_s* x);
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
void zx_sa_SubjectConfirmation_PUT_Method(struct zx_sa_SubjectConfirmation_s* x, struct zx_str_s* y);
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

/* -------------------------- sa_SubjectConfirmationData -------------------------- */
/* refby( zx_sa_SubjectConfirmation_s ) */
#ifndef zx_sa_SubjectConfirmationData_EXT
#define zx_sa_SubjectConfirmationData_EXT
#endif

struct zx_sa_SubjectConfirmationData_s* zx_DEC_sa_SubjectConfirmationData(struct zx_ctx* c);
struct zx_sa_SubjectConfirmationData_s* zx_NEW_sa_SubjectConfirmationData(struct zx_ctx* c);
struct zx_sa_SubjectConfirmationData_s* zx_DEEP_CLONE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, int dup_strs);
void zx_DUP_STRS_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x);
void zx_FREE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, int free_strs);
int zx_WALK_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_SubjectConfirmationData(struct zx_sa_SubjectConfirmationData_s* x);
char* zx_ENC_SO_sa_SubjectConfirmationData(struct zx_sa_SubjectConfirmationData_s* x, char* p);
char* zx_ENC_WO_sa_SubjectConfirmationData(struct zx_sa_SubjectConfirmationData_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x);

struct zx_sa_SubjectConfirmationData_s {
  ZX_ELEM_EXT
  zx_sa_SubjectConfirmationData_EXT
  struct zx_str_s* NotBefore;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* Address;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sa_SubjectConfirmationData_GET_NotBefore(struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_NotOnOrAfter(struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_Recipient(struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_InResponseTo(struct zx_sa_SubjectConfirmationData_s* x);
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_Address(struct zx_sa_SubjectConfirmationData_s* x);
void zx_sa_SubjectConfirmationData_PUT_NotBefore(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);
void zx_sa_SubjectConfirmationData_PUT_NotOnOrAfter(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);
void zx_sa_SubjectConfirmationData_PUT_Recipient(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);
void zx_sa_SubjectConfirmationData_PUT_InResponseTo(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);
void zx_sa_SubjectConfirmationData_PUT_Address(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y);

/* -------------------------- sa_SubjectLocality -------------------------- */
/* refby( zx_sa_AuthnStatement_s ) */
#ifndef zx_sa_SubjectLocality_EXT
#define zx_sa_SubjectLocality_EXT
#endif

struct zx_sa_SubjectLocality_s* zx_DEC_sa_SubjectLocality(struct zx_ctx* c);
struct zx_sa_SubjectLocality_s* zx_NEW_sa_SubjectLocality(struct zx_ctx* c);
struct zx_sa_SubjectLocality_s* zx_DEEP_CLONE_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, int dup_strs);
void zx_DUP_STRS_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x);
void zx_FREE_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, int free_strs);
int zx_WALK_SO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_SubjectLocality(struct zx_sa_SubjectLocality_s* x);
char* zx_ENC_SO_sa_SubjectLocality(struct zx_sa_SubjectLocality_s* x, char* p);
char* zx_ENC_WO_sa_SubjectLocality(struct zx_sa_SubjectLocality_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x);

struct zx_sa_SubjectLocality_s {
  ZX_ELEM_EXT
  zx_sa_SubjectLocality_EXT
  struct zx_str_s* Address;	/* {0,1} attribute xs:string */
  struct zx_str_s* DNSName;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sa_SubjectLocality_GET_Address(struct zx_sa_SubjectLocality_s* x);
struct zx_str_s* zx_sa_SubjectLocality_GET_DNSName(struct zx_sa_SubjectLocality_s* x);
void zx_sa_SubjectLocality_PUT_Address(struct zx_sa_SubjectLocality_s* x, struct zx_str_s* y);
void zx_sa_SubjectLocality_PUT_DNSName(struct zx_sa_SubjectLocality_s* x, struct zx_str_s* y);

/* -------------------------- sa_TestElem -------------------------- */
/* refby( ) */
#ifndef zx_sa_TestElem_EXT
#define zx_sa_TestElem_EXT
#endif

struct zx_sa_TestElem_s* zx_DEC_sa_TestElem(struct zx_ctx* c);
struct zx_sa_TestElem_s* zx_NEW_sa_TestElem(struct zx_ctx* c);
struct zx_sa_TestElem_s* zx_DEEP_CLONE_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, int dup_strs);
void zx_DUP_STRS_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x);
void zx_FREE_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, int free_strs);
int zx_WALK_SO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sa_TestElem(struct zx_sa_TestElem_s* x);
char* zx_ENC_SO_sa_TestElem(struct zx_sa_TestElem_s* x, char* p);
char* zx_ENC_WO_sa_TestElem(struct zx_sa_TestElem_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x);

struct zx_sa_TestElem_s {
  ZX_ELEM_EXT
  zx_sa_TestElem_EXT
  struct zx_elem_s* AttributeValue;	/* {0,-1} xs:anyType */
};

struct zx_elem_s* zx_sa_TestElem_GET_AttributeValue(struct zx_sa_TestElem_s* x, int n);
int zx_sa_TestElem_NUM_AttributeValue(struct zx_sa_TestElem_s* x);
struct zx_elem_s* zx_sa_TestElem_POP_AttributeValue(struct zx_sa_TestElem_s* x);
void zx_sa_TestElem_PUSH_AttributeValue(struct zx_sa_TestElem_s* x, struct zx_elem_s* y);
void zx_sa_TestElem_PUT_AttributeValue(struct zx_sa_TestElem_s* x, int n, struct zx_elem_s* y);
void zx_sa_TestElem_ADD_AttributeValue(struct zx_sa_TestElem_s* x, int n, struct zx_elem_s* z);
void zx_sa_TestElem_DEL_AttributeValue(struct zx_sa_TestElem_s* x, int n);
void zx_sa_TestElem_REV_AttributeValue(struct zx_sa_TestElem_s* x);

/* -------------------------- se_Body -------------------------- */
/* refby( zx_se_Envelope_s ) */
#ifndef zx_se_Body_EXT
#define zx_se_Body_EXT
#endif

struct zx_se_Body_s* zx_DEC_se_Body(struct zx_ctx* c);
struct zx_se_Body_s* zx_NEW_se_Body(struct zx_ctx* c);
struct zx_se_Body_s* zx_DEEP_CLONE_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, int dup_strs);
void zx_DUP_STRS_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x);
void zx_FREE_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, int free_strs);
int zx_WALK_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_se_Body(struct zx_se_Body_s* x);
char* zx_ENC_SO_se_Body(struct zx_se_Body_s* x, char* p);
char* zx_ENC_WO_se_Body(struct zx_se_Body_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x);
struct zx_str_s* zx_EASY_ENC_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x);

struct zx_se_Body_s {
  ZX_ELEM_EXT
  zx_se_Body_EXT
  struct zx_sp_ArtifactResolve_s* ArtifactResolve;	/* {0,1} nada */
  struct zx_sp_ArtifactResponse_s* ArtifactResponse;	/* {0,1} nada */
  struct zx_sp_ManageNameIDRequest_s* ManageNameIDRequest;	/* {0,1} nada */
  struct zx_sp_ManageNameIDResponse_s* ManageNameIDResponse;	/* {0,1} nada */
  struct zx_sp_LogoutRequest_s* LogoutRequest;	/* {0,1} nada */
  struct zx_sp_LogoutResponse_s* LogoutResponse;	/* {0,1} nada */
  struct zx_sp_NameIDMappingRequest_s* NameIDMappingRequest;	/* {0,1} nada */
  struct zx_sp_NameIDMappingResponse_s* NameIDMappingResponse;	/* {0,1} nada */
  struct zx_sp_AttributeQuery_s* AttributeQuery;	/* {0,1} nada */
  struct zx_sp_AuthnQuery_s* AuthnQuery;	/* {0,1} nada */
  struct zx_sp_AuthzDecisionQuery_s* AuthzDecisionQuery;	/* {0,1} nada */
  struct zx_sp_AssertionIDRequest_s* AssertionIDRequest;	/* {0,1} nada */
  struct zx_sp_Response_s* Response;	/* {0,1} nada */
  struct zx_sp11_Request_s* Request;	/* {0,1} nada */
  struct zx_sp11_Response_s* sp11_Response;	/* {0,1} nada */
  struct zx_ff12_RegisterNameIdentifierRequest_s* RegisterNameIdentifierRequest;	/* {0,1} nada */
  struct zx_ff12_RegisterNameIdentifierResponse_s* RegisterNameIdentifierResponse;	/* {0,1} nada */
  struct zx_ff12_FederationTerminationNotification_s* FederationTerminationNotification;	/* {0,1} nada */
  struct zx_ff12_LogoutRequest_s* ff12_LogoutRequest;	/* {0,1} nada */
  struct zx_ff12_LogoutResponse_s* ff12_LogoutResponse;	/* {0,1} nada */
  struct zx_ff12_NameIdentifierMappingRequest_s* NameIdentifierMappingRequest;	/* {0,1} nada */
  struct zx_ff12_NameIdentifierMappingResponse_s* NameIdentifierMappingResponse;	/* {0,1} nada */
  struct zx_se_Fault_s* Fault;	/* {0,1} nada */
};

struct zx_sp_ArtifactResolve_s* zx_se_Body_GET_ArtifactResolve(struct zx_se_Body_s* x, int n);
struct zx_sp_ArtifactResponse_s* zx_se_Body_GET_ArtifactResponse(struct zx_se_Body_s* x, int n);
struct zx_sp_ManageNameIDRequest_s* zx_se_Body_GET_ManageNameIDRequest(struct zx_se_Body_s* x, int n);
struct zx_sp_ManageNameIDResponse_s* zx_se_Body_GET_ManageNameIDResponse(struct zx_se_Body_s* x, int n);
struct zx_sp_LogoutRequest_s* zx_se_Body_GET_LogoutRequest(struct zx_se_Body_s* x, int n);
struct zx_sp_LogoutResponse_s* zx_se_Body_GET_LogoutResponse(struct zx_se_Body_s* x, int n);
struct zx_sp_NameIDMappingRequest_s* zx_se_Body_GET_NameIDMappingRequest(struct zx_se_Body_s* x, int n);
struct zx_sp_NameIDMappingResponse_s* zx_se_Body_GET_NameIDMappingResponse(struct zx_se_Body_s* x, int n);
struct zx_sp_AttributeQuery_s* zx_se_Body_GET_AttributeQuery(struct zx_se_Body_s* x, int n);
struct zx_sp_AuthnQuery_s* zx_se_Body_GET_AuthnQuery(struct zx_se_Body_s* x, int n);
struct zx_sp_AuthzDecisionQuery_s* zx_se_Body_GET_AuthzDecisionQuery(struct zx_se_Body_s* x, int n);
struct zx_sp_AssertionIDRequest_s* zx_se_Body_GET_AssertionIDRequest(struct zx_se_Body_s* x, int n);
struct zx_sp_Response_s* zx_se_Body_GET_Response(struct zx_se_Body_s* x, int n);
struct zx_sp11_Request_s* zx_se_Body_GET_Request(struct zx_se_Body_s* x, int n);
struct zx_sp11_Response_s* zx_se_Body_GET_sp11_Response(struct zx_se_Body_s* x, int n);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_se_Body_GET_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_se_Body_GET_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n);
struct zx_ff12_FederationTerminationNotification_s* zx_se_Body_GET_FederationTerminationNotification(struct zx_se_Body_s* x, int n);
struct zx_ff12_LogoutRequest_s* zx_se_Body_GET_ff12_LogoutRequest(struct zx_se_Body_s* x, int n);
struct zx_ff12_LogoutResponse_s* zx_se_Body_GET_ff12_LogoutResponse(struct zx_se_Body_s* x, int n);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_se_Body_GET_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_se_Body_GET_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n);
struct zx_se_Fault_s* zx_se_Body_GET_Fault(struct zx_se_Body_s* x, int n);
int zx_se_Body_NUM_ArtifactResolve(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ArtifactResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ManageNameIDRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ManageNameIDResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_LogoutRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_LogoutResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_NameIDMappingRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_NameIDMappingResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_AttributeQuery(struct zx_se_Body_s* x);
int zx_se_Body_NUM_AuthnQuery(struct zx_se_Body_s* x);
int zx_se_Body_NUM_AuthzDecisionQuery(struct zx_se_Body_s* x);
int zx_se_Body_NUM_AssertionIDRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_Response(struct zx_se_Body_s* x);
int zx_se_Body_NUM_Request(struct zx_se_Body_s* x);
int zx_se_Body_NUM_sp11_Response(struct zx_se_Body_s* x);
int zx_se_Body_NUM_RegisterNameIdentifierRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_RegisterNameIdentifierResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_FederationTerminationNotification(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ff12_LogoutRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_ff12_LogoutResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_NameIdentifierMappingRequest(struct zx_se_Body_s* x);
int zx_se_Body_NUM_NameIdentifierMappingResponse(struct zx_se_Body_s* x);
int zx_se_Body_NUM_Fault(struct zx_se_Body_s* x);
struct zx_sp_ArtifactResolve_s* zx_se_Body_POP_ArtifactResolve(struct zx_se_Body_s* x);
struct zx_sp_ArtifactResponse_s* zx_se_Body_POP_ArtifactResponse(struct zx_se_Body_s* x);
struct zx_sp_ManageNameIDRequest_s* zx_se_Body_POP_ManageNameIDRequest(struct zx_se_Body_s* x);
struct zx_sp_ManageNameIDResponse_s* zx_se_Body_POP_ManageNameIDResponse(struct zx_se_Body_s* x);
struct zx_sp_LogoutRequest_s* zx_se_Body_POP_LogoutRequest(struct zx_se_Body_s* x);
struct zx_sp_LogoutResponse_s* zx_se_Body_POP_LogoutResponse(struct zx_se_Body_s* x);
struct zx_sp_NameIDMappingRequest_s* zx_se_Body_POP_NameIDMappingRequest(struct zx_se_Body_s* x);
struct zx_sp_NameIDMappingResponse_s* zx_se_Body_POP_NameIDMappingResponse(struct zx_se_Body_s* x);
struct zx_sp_AttributeQuery_s* zx_se_Body_POP_AttributeQuery(struct zx_se_Body_s* x);
struct zx_sp_AuthnQuery_s* zx_se_Body_POP_AuthnQuery(struct zx_se_Body_s* x);
struct zx_sp_AuthzDecisionQuery_s* zx_se_Body_POP_AuthzDecisionQuery(struct zx_se_Body_s* x);
struct zx_sp_AssertionIDRequest_s* zx_se_Body_POP_AssertionIDRequest(struct zx_se_Body_s* x);
struct zx_sp_Response_s* zx_se_Body_POP_Response(struct zx_se_Body_s* x);
struct zx_sp11_Request_s* zx_se_Body_POP_Request(struct zx_se_Body_s* x);
struct zx_sp11_Response_s* zx_se_Body_POP_sp11_Response(struct zx_se_Body_s* x);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_se_Body_POP_RegisterNameIdentifierRequest(struct zx_se_Body_s* x);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_se_Body_POP_RegisterNameIdentifierResponse(struct zx_se_Body_s* x);
struct zx_ff12_FederationTerminationNotification_s* zx_se_Body_POP_FederationTerminationNotification(struct zx_se_Body_s* x);
struct zx_ff12_LogoutRequest_s* zx_se_Body_POP_ff12_LogoutRequest(struct zx_se_Body_s* x);
struct zx_ff12_LogoutResponse_s* zx_se_Body_POP_ff12_LogoutResponse(struct zx_se_Body_s* x);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_se_Body_POP_NameIdentifierMappingRequest(struct zx_se_Body_s* x);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_se_Body_POP_NameIdentifierMappingResponse(struct zx_se_Body_s* x);
struct zx_se_Fault_s* zx_se_Body_POP_Fault(struct zx_se_Body_s* x);
void zx_se_Body_PUSH_ArtifactResolve(struct zx_se_Body_s* x, struct zx_sp_ArtifactResolve_s* y);
void zx_se_Body_PUSH_ArtifactResponse(struct zx_se_Body_s* x, struct zx_sp_ArtifactResponse_s* y);
void zx_se_Body_PUSH_ManageNameIDRequest(struct zx_se_Body_s* x, struct zx_sp_ManageNameIDRequest_s* y);
void zx_se_Body_PUSH_ManageNameIDResponse(struct zx_se_Body_s* x, struct zx_sp_ManageNameIDResponse_s* y);
void zx_se_Body_PUSH_LogoutRequest(struct zx_se_Body_s* x, struct zx_sp_LogoutRequest_s* y);
void zx_se_Body_PUSH_LogoutResponse(struct zx_se_Body_s* x, struct zx_sp_LogoutResponse_s* y);
void zx_se_Body_PUSH_NameIDMappingRequest(struct zx_se_Body_s* x, struct zx_sp_NameIDMappingRequest_s* y);
void zx_se_Body_PUSH_NameIDMappingResponse(struct zx_se_Body_s* x, struct zx_sp_NameIDMappingResponse_s* y);
void zx_se_Body_PUSH_AttributeQuery(struct zx_se_Body_s* x, struct zx_sp_AttributeQuery_s* y);
void zx_se_Body_PUSH_AuthnQuery(struct zx_se_Body_s* x, struct zx_sp_AuthnQuery_s* y);
void zx_se_Body_PUSH_AuthzDecisionQuery(struct zx_se_Body_s* x, struct zx_sp_AuthzDecisionQuery_s* y);
void zx_se_Body_PUSH_AssertionIDRequest(struct zx_se_Body_s* x, struct zx_sp_AssertionIDRequest_s* y);
void zx_se_Body_PUSH_Response(struct zx_se_Body_s* x, struct zx_sp_Response_s* y);
void zx_se_Body_PUSH_Request(struct zx_se_Body_s* x, struct zx_sp11_Request_s* y);
void zx_se_Body_PUSH_sp11_Response(struct zx_se_Body_s* x, struct zx_sp11_Response_s* y);
void zx_se_Body_PUSH_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, struct zx_ff12_RegisterNameIdentifierRequest_s* y);
void zx_se_Body_PUSH_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, struct zx_ff12_RegisterNameIdentifierResponse_s* y);
void zx_se_Body_PUSH_FederationTerminationNotification(struct zx_se_Body_s* x, struct zx_ff12_FederationTerminationNotification_s* y);
void zx_se_Body_PUSH_ff12_LogoutRequest(struct zx_se_Body_s* x, struct zx_ff12_LogoutRequest_s* y);
void zx_se_Body_PUSH_ff12_LogoutResponse(struct zx_se_Body_s* x, struct zx_ff12_LogoutResponse_s* y);
void zx_se_Body_PUSH_NameIdentifierMappingRequest(struct zx_se_Body_s* x, struct zx_ff12_NameIdentifierMappingRequest_s* y);
void zx_se_Body_PUSH_NameIdentifierMappingResponse(struct zx_se_Body_s* x, struct zx_ff12_NameIdentifierMappingResponse_s* y);
void zx_se_Body_PUSH_Fault(struct zx_se_Body_s* x, struct zx_se_Fault_s* y);
void zx_se_Body_PUT_ArtifactResolve(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* y);
void zx_se_Body_PUT_ArtifactResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* y);
void zx_se_Body_PUT_ManageNameIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* y);
void zx_se_Body_PUT_ManageNameIDResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* y);
void zx_se_Body_PUT_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutRequest_s* y);
void zx_se_Body_PUT_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutResponse_s* y);
void zx_se_Body_PUT_NameIDMappingRequest(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* y);
void zx_se_Body_PUT_NameIDMappingResponse(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* y);
void zx_se_Body_PUT_AttributeQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AttributeQuery_s* y);
void zx_se_Body_PUT_AuthnQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthnQuery_s* y);
void zx_se_Body_PUT_AuthzDecisionQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* y);
void zx_se_Body_PUT_AssertionIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* y);
void zx_se_Body_PUT_Response(struct zx_se_Body_s* x, int n, struct zx_sp_Response_s* y);
void zx_se_Body_PUT_Request(struct zx_se_Body_s* x, int n, struct zx_sp11_Request_s* y);
void zx_se_Body_PUT_sp11_Response(struct zx_se_Body_s* x, int n, struct zx_sp11_Response_s* y);
void zx_se_Body_PUT_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* y);
void zx_se_Body_PUT_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* y);
void zx_se_Body_PUT_FederationTerminationNotification(struct zx_se_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* y);
void zx_se_Body_PUT_ff12_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* y);
void zx_se_Body_PUT_ff12_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* y);
void zx_se_Body_PUT_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* y);
void zx_se_Body_PUT_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* y);
void zx_se_Body_PUT_Fault(struct zx_se_Body_s* x, int n, struct zx_se_Fault_s* y);
void zx_se_Body_ADD_ArtifactResolve(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z);
void zx_se_Body_ADD_ArtifactResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z);
void zx_se_Body_ADD_ManageNameIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z);
void zx_se_Body_ADD_ManageNameIDResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z);
void zx_se_Body_ADD_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z);
void zx_se_Body_ADD_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z);
void zx_se_Body_ADD_NameIDMappingRequest(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z);
void zx_se_Body_ADD_NameIDMappingResponse(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z);
void zx_se_Body_ADD_AttributeQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z);
void zx_se_Body_ADD_AuthnQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z);
void zx_se_Body_ADD_AuthzDecisionQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z);
void zx_se_Body_ADD_AssertionIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z);
void zx_se_Body_ADD_Response(struct zx_se_Body_s* x, int n, struct zx_sp_Response_s* z);
void zx_se_Body_ADD_Request(struct zx_se_Body_s* x, int n, struct zx_sp11_Request_s* z);
void zx_se_Body_ADD_sp11_Response(struct zx_se_Body_s* x, int n, struct zx_sp11_Response_s* z);
void zx_se_Body_ADD_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z);
void zx_se_Body_ADD_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z);
void zx_se_Body_ADD_FederationTerminationNotification(struct zx_se_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z);
void zx_se_Body_ADD_ff12_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* z);
void zx_se_Body_ADD_ff12_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* z);
void zx_se_Body_ADD_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z);
void zx_se_Body_ADD_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z);
void zx_se_Body_ADD_Fault(struct zx_se_Body_s* x, int n, struct zx_se_Fault_s* z);
void zx_se_Body_DEL_ArtifactResolve(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ArtifactResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ManageNameIDRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ManageNameIDResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_LogoutRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_LogoutResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_NameIDMappingRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_NameIDMappingResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_AttributeQuery(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_AuthnQuery(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_AuthzDecisionQuery(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_AssertionIDRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_Response(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_Request(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_sp11_Response(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_FederationTerminationNotification(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ff12_LogoutRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_ff12_LogoutResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n);
void zx_se_Body_DEL_Fault(struct zx_se_Body_s* x, int n);
void zx_se_Body_REV_ArtifactResolve(struct zx_se_Body_s* x);
void zx_se_Body_REV_ArtifactResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_ManageNameIDRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_ManageNameIDResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_LogoutRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_LogoutResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_NameIDMappingRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_NameIDMappingResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_AttributeQuery(struct zx_se_Body_s* x);
void zx_se_Body_REV_AuthnQuery(struct zx_se_Body_s* x);
void zx_se_Body_REV_AuthzDecisionQuery(struct zx_se_Body_s* x);
void zx_se_Body_REV_AssertionIDRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_Response(struct zx_se_Body_s* x);
void zx_se_Body_REV_Request(struct zx_se_Body_s* x);
void zx_se_Body_REV_sp11_Response(struct zx_se_Body_s* x);
void zx_se_Body_REV_RegisterNameIdentifierRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_RegisterNameIdentifierResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_FederationTerminationNotification(struct zx_se_Body_s* x);
void zx_se_Body_REV_ff12_LogoutRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_ff12_LogoutResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_NameIdentifierMappingRequest(struct zx_se_Body_s* x);
void zx_se_Body_REV_NameIdentifierMappingResponse(struct zx_se_Body_s* x);
void zx_se_Body_REV_Fault(struct zx_se_Body_s* x);

/* -------------------------- se_Envelope -------------------------- */
/* refby( ) */
#ifndef zx_se_Envelope_EXT
#define zx_se_Envelope_EXT
#endif

struct zx_se_Envelope_s* zx_DEC_se_Envelope(struct zx_ctx* c);
struct zx_se_Envelope_s* zx_NEW_se_Envelope(struct zx_ctx* c);
struct zx_se_Envelope_s* zx_DEEP_CLONE_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, int dup_strs);
void zx_DUP_STRS_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x);
void zx_FREE_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, int free_strs);
int zx_WALK_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_se_Envelope(struct zx_se_Envelope_s* x);
char* zx_ENC_SO_se_Envelope(struct zx_se_Envelope_s* x, char* p);
char* zx_ENC_WO_se_Envelope(struct zx_se_Envelope_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x);
struct zx_str_s* zx_EASY_ENC_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x);

struct zx_se_Envelope_s {
  ZX_ELEM_EXT
  zx_se_Envelope_EXT
  struct zx_se_Header_s* Header;	/* {0,1} nada */
  struct zx_se_Body_s* Body;	/* {1,1} nada */
};

struct zx_se_Header_s* zx_se_Envelope_GET_Header(struct zx_se_Envelope_s* x, int n);
struct zx_se_Body_s* zx_se_Envelope_GET_Body(struct zx_se_Envelope_s* x, int n);
int zx_se_Envelope_NUM_Header(struct zx_se_Envelope_s* x);
int zx_se_Envelope_NUM_Body(struct zx_se_Envelope_s* x);
struct zx_se_Header_s* zx_se_Envelope_POP_Header(struct zx_se_Envelope_s* x);
struct zx_se_Body_s* zx_se_Envelope_POP_Body(struct zx_se_Envelope_s* x);
void zx_se_Envelope_PUSH_Header(struct zx_se_Envelope_s* x, struct zx_se_Header_s* y);
void zx_se_Envelope_PUSH_Body(struct zx_se_Envelope_s* x, struct zx_se_Body_s* y);
void zx_se_Envelope_PUT_Header(struct zx_se_Envelope_s* x, int n, struct zx_se_Header_s* y);
void zx_se_Envelope_PUT_Body(struct zx_se_Envelope_s* x, int n, struct zx_se_Body_s* y);
void zx_se_Envelope_ADD_Header(struct zx_se_Envelope_s* x, int n, struct zx_se_Header_s* z);
void zx_se_Envelope_ADD_Body(struct zx_se_Envelope_s* x, int n, struct zx_se_Body_s* z);
void zx_se_Envelope_DEL_Header(struct zx_se_Envelope_s* x, int n);
void zx_se_Envelope_DEL_Body(struct zx_se_Envelope_s* x, int n);
void zx_se_Envelope_REV_Header(struct zx_se_Envelope_s* x);
void zx_se_Envelope_REV_Body(struct zx_se_Envelope_s* x);

/* -------------------------- se_Fault -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_se_Fault_EXT
#define zx_se_Fault_EXT
#endif

struct zx_se_Fault_s* zx_DEC_se_Fault(struct zx_ctx* c);
struct zx_se_Fault_s* zx_NEW_se_Fault(struct zx_ctx* c);
struct zx_se_Fault_s* zx_DEEP_CLONE_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, int dup_strs);
void zx_DUP_STRS_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x);
void zx_FREE_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, int free_strs);
int zx_WALK_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_se_Fault(struct zx_se_Fault_s* x);
char* zx_ENC_SO_se_Fault(struct zx_se_Fault_s* x, char* p);
char* zx_ENC_WO_se_Fault(struct zx_se_Fault_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x);
struct zx_str_s* zx_EASY_ENC_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x);

struct zx_se_Fault_s {
  ZX_ELEM_EXT
  zx_se_Fault_EXT
  struct zx_elem_s* faultcode;	/* {1,1} xs:QName */
  struct zx_elem_s* faultstring;	/* {1,1} xs:string */
  struct zx_elem_s* faultactor;	/* {0,1} xs:anyURI */
  struct zx_se_detail_s* detail;	/* {0,1}  */
};

struct zx_elem_s* zx_se_Fault_GET_faultcode(struct zx_se_Fault_s* x, int n);
struct zx_elem_s* zx_se_Fault_GET_faultstring(struct zx_se_Fault_s* x, int n);
struct zx_elem_s* zx_se_Fault_GET_faultactor(struct zx_se_Fault_s* x, int n);
struct zx_se_detail_s* zx_se_Fault_GET_detail(struct zx_se_Fault_s* x, int n);
int zx_se_Fault_NUM_faultcode(struct zx_se_Fault_s* x);
int zx_se_Fault_NUM_faultstring(struct zx_se_Fault_s* x);
int zx_se_Fault_NUM_faultactor(struct zx_se_Fault_s* x);
int zx_se_Fault_NUM_detail(struct zx_se_Fault_s* x);
struct zx_elem_s* zx_se_Fault_POP_faultcode(struct zx_se_Fault_s* x);
struct zx_elem_s* zx_se_Fault_POP_faultstring(struct zx_se_Fault_s* x);
struct zx_elem_s* zx_se_Fault_POP_faultactor(struct zx_se_Fault_s* x);
struct zx_se_detail_s* zx_se_Fault_POP_detail(struct zx_se_Fault_s* x);
void zx_se_Fault_PUSH_faultcode(struct zx_se_Fault_s* x, struct zx_elem_s* y);
void zx_se_Fault_PUSH_faultstring(struct zx_se_Fault_s* x, struct zx_elem_s* y);
void zx_se_Fault_PUSH_faultactor(struct zx_se_Fault_s* x, struct zx_elem_s* y);
void zx_se_Fault_PUSH_detail(struct zx_se_Fault_s* x, struct zx_se_detail_s* y);
void zx_se_Fault_PUT_faultcode(struct zx_se_Fault_s* x, int n, struct zx_elem_s* y);
void zx_se_Fault_PUT_faultstring(struct zx_se_Fault_s* x, int n, struct zx_elem_s* y);
void zx_se_Fault_PUT_faultactor(struct zx_se_Fault_s* x, int n, struct zx_elem_s* y);
void zx_se_Fault_PUT_detail(struct zx_se_Fault_s* x, int n, struct zx_se_detail_s* y);
void zx_se_Fault_ADD_faultcode(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z);
void zx_se_Fault_ADD_faultstring(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z);
void zx_se_Fault_ADD_faultactor(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z);
void zx_se_Fault_ADD_detail(struct zx_se_Fault_s* x, int n, struct zx_se_detail_s* z);
void zx_se_Fault_DEL_faultcode(struct zx_se_Fault_s* x, int n);
void zx_se_Fault_DEL_faultstring(struct zx_se_Fault_s* x, int n);
void zx_se_Fault_DEL_faultactor(struct zx_se_Fault_s* x, int n);
void zx_se_Fault_DEL_detail(struct zx_se_Fault_s* x, int n);
void zx_se_Fault_REV_faultcode(struct zx_se_Fault_s* x);
void zx_se_Fault_REV_faultstring(struct zx_se_Fault_s* x);
void zx_se_Fault_REV_faultactor(struct zx_se_Fault_s* x);
void zx_se_Fault_REV_detail(struct zx_se_Fault_s* x);

/* -------------------------- se_Header -------------------------- */
/* refby( zx_se_Envelope_s ) */
#ifndef zx_se_Header_EXT
#define zx_se_Header_EXT
#endif

struct zx_se_Header_s* zx_DEC_se_Header(struct zx_ctx* c);
struct zx_se_Header_s* zx_NEW_se_Header(struct zx_ctx* c);
struct zx_se_Header_s* zx_DEEP_CLONE_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, int dup_strs);
void zx_DUP_STRS_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x);
void zx_FREE_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, int free_strs);
int zx_WALK_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_se_Header(struct zx_se_Header_s* x);
char* zx_ENC_SO_se_Header(struct zx_se_Header_s* x, char* p);
char* zx_ENC_WO_se_Header(struct zx_se_Header_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x);
struct zx_str_s* zx_EASY_ENC_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x);

struct zx_se_Header_s {
  ZX_ELEM_EXT
  zx_se_Header_EXT
};


/* -------------------------- se_detail -------------------------- */
/* refby( zx_se_Fault_s ) */
#ifndef zx_se_detail_EXT
#define zx_se_detail_EXT
#endif

struct zx_se_detail_s* zx_DEC_se_detail(struct zx_ctx* c);
struct zx_se_detail_s* zx_NEW_se_detail(struct zx_ctx* c);
struct zx_se_detail_s* zx_DEEP_CLONE_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, int dup_strs);
void zx_DUP_STRS_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x);
void zx_FREE_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, int free_strs);
int zx_WALK_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_se_detail(struct zx_se_detail_s* x);
char* zx_ENC_SO_se_detail(struct zx_se_detail_s* x, char* p);
char* zx_ENC_WO_se_detail(struct zx_se_detail_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x);
struct zx_str_s* zx_EASY_ENC_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x);

struct zx_se_detail_s {
  ZX_ELEM_EXT
  zx_se_detail_EXT
};


/* -------------------------- sp11_AttributeQuery -------------------------- */
/* refby( zx_sp11_Request_s ) */
#ifndef zx_sp11_AttributeQuery_EXT
#define zx_sp11_AttributeQuery_EXT
#endif

struct zx_sp11_AttributeQuery_s* zx_DEC_sp11_AttributeQuery(struct zx_ctx* c);
struct zx_sp11_AttributeQuery_s* zx_NEW_sp11_AttributeQuery(struct zx_ctx* c);
struct zx_sp11_AttributeQuery_s* zx_DEEP_CLONE_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x);
void zx_FREE_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, int free_strs);
int zx_WALK_SO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_AttributeQuery(struct zx_sp11_AttributeQuery_s* x);
char* zx_ENC_SO_sp11_AttributeQuery(struct zx_sp11_AttributeQuery_s* x, char* p);
char* zx_ENC_WO_sp11_AttributeQuery(struct zx_sp11_AttributeQuery_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x);

struct zx_sp11_AttributeQuery_s {
  ZX_ELEM_EXT
  zx_sp11_AttributeQuery_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_AttributeDesignator_s* AttributeDesignator;	/* {0,-1} nada */
  struct zx_str_s* Resource;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sp11_AttributeQuery_GET_Resource(struct zx_sp11_AttributeQuery_s* x);
struct zx_sa11_Subject_s* zx_sp11_AttributeQuery_GET_Subject(struct zx_sp11_AttributeQuery_s* x, int n);
struct zx_sa11_AttributeDesignator_s* zx_sp11_AttributeQuery_GET_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n);
int zx_sp11_AttributeQuery_NUM_Subject(struct zx_sp11_AttributeQuery_s* x);
int zx_sp11_AttributeQuery_NUM_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x);
struct zx_sa11_Subject_s* zx_sp11_AttributeQuery_POP_Subject(struct zx_sp11_AttributeQuery_s* x);
struct zx_sa11_AttributeDesignator_s* zx_sp11_AttributeQuery_POP_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x);
void zx_sp11_AttributeQuery_PUSH_Subject(struct zx_sp11_AttributeQuery_s* x, struct zx_sa11_Subject_s* y);
void zx_sp11_AttributeQuery_PUSH_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, struct zx_sa11_AttributeDesignator_s* y);
void zx_sp11_AttributeQuery_PUT_Resource(struct zx_sp11_AttributeQuery_s* x, struct zx_str_s* y);
void zx_sp11_AttributeQuery_PUT_Subject(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sp11_AttributeQuery_PUT_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_AttributeDesignator_s* y);
void zx_sp11_AttributeQuery_ADD_Subject(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sp11_AttributeQuery_ADD_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_AttributeDesignator_s* z);
void zx_sp11_AttributeQuery_DEL_Subject(struct zx_sp11_AttributeQuery_s* x, int n);
void zx_sp11_AttributeQuery_DEL_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n);
void zx_sp11_AttributeQuery_REV_Subject(struct zx_sp11_AttributeQuery_s* x);
void zx_sp11_AttributeQuery_REV_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x);

/* -------------------------- sp11_AuthenticationQuery -------------------------- */
/* refby( zx_sp11_Request_s ) */
#ifndef zx_sp11_AuthenticationQuery_EXT
#define zx_sp11_AuthenticationQuery_EXT
#endif

struct zx_sp11_AuthenticationQuery_s* zx_DEC_sp11_AuthenticationQuery(struct zx_ctx* c);
struct zx_sp11_AuthenticationQuery_s* zx_NEW_sp11_AuthenticationQuery(struct zx_ctx* c);
struct zx_sp11_AuthenticationQuery_s* zx_DEEP_CLONE_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x);
void zx_FREE_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, int free_strs);
int zx_WALK_SO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_AuthenticationQuery(struct zx_sp11_AuthenticationQuery_s* x);
char* zx_ENC_SO_sp11_AuthenticationQuery(struct zx_sp11_AuthenticationQuery_s* x, char* p);
char* zx_ENC_WO_sp11_AuthenticationQuery(struct zx_sp11_AuthenticationQuery_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x);

struct zx_sp11_AuthenticationQuery_s {
  ZX_ELEM_EXT
  zx_sp11_AuthenticationQuery_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_str_s* AuthenticationMethod;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sp11_AuthenticationQuery_GET_AuthenticationMethod(struct zx_sp11_AuthenticationQuery_s* x);
struct zx_sa11_Subject_s* zx_sp11_AuthenticationQuery_GET_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n);
int zx_sp11_AuthenticationQuery_NUM_Subject(struct zx_sp11_AuthenticationQuery_s* x);
struct zx_sa11_Subject_s* zx_sp11_AuthenticationQuery_POP_Subject(struct zx_sp11_AuthenticationQuery_s* x);
void zx_sp11_AuthenticationQuery_PUSH_Subject(struct zx_sp11_AuthenticationQuery_s* x, struct zx_sa11_Subject_s* y);
void zx_sp11_AuthenticationQuery_PUT_AuthenticationMethod(struct zx_sp11_AuthenticationQuery_s* x, struct zx_str_s* y);
void zx_sp11_AuthenticationQuery_PUT_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sp11_AuthenticationQuery_ADD_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sp11_AuthenticationQuery_DEL_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n);
void zx_sp11_AuthenticationQuery_REV_Subject(struct zx_sp11_AuthenticationQuery_s* x);

/* -------------------------- sp11_AuthorizationDecisionQuery -------------------------- */
/* refby( zx_sp11_Request_s ) */
#ifndef zx_sp11_AuthorizationDecisionQuery_EXT
#define zx_sp11_AuthorizationDecisionQuery_EXT
#endif

struct zx_sp11_AuthorizationDecisionQuery_s* zx_DEC_sp11_AuthorizationDecisionQuery(struct zx_ctx* c);
struct zx_sp11_AuthorizationDecisionQuery_s* zx_NEW_sp11_AuthorizationDecisionQuery(struct zx_ctx* c);
struct zx_sp11_AuthorizationDecisionQuery_s* zx_DEEP_CLONE_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x);
void zx_FREE_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, int free_strs);
int zx_WALK_SO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_AuthorizationDecisionQuery(struct zx_sp11_AuthorizationDecisionQuery_s* x);
char* zx_ENC_SO_sp11_AuthorizationDecisionQuery(struct zx_sp11_AuthorizationDecisionQuery_s* x, char* p);
char* zx_ENC_WO_sp11_AuthorizationDecisionQuery(struct zx_sp11_AuthorizationDecisionQuery_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x);

struct zx_sp11_AuthorizationDecisionQuery_s {
  ZX_ELEM_EXT
  zx_sp11_AuthorizationDecisionQuery_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_Action_s* Action;	/* {1,-1} nada */
  struct zx_sa11_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str_s* Resource;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sp11_AuthorizationDecisionQuery_GET_Resource(struct zx_sp11_AuthorizationDecisionQuery_s* x);
struct zx_sa11_Subject_s* zx_sp11_AuthorizationDecisionQuery_GET_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
struct zx_sa11_Action_s* zx_sp11_AuthorizationDecisionQuery_GET_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
struct zx_sa11_Evidence_s* zx_sp11_AuthorizationDecisionQuery_GET_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
int zx_sp11_AuthorizationDecisionQuery_NUM_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x);
int zx_sp11_AuthorizationDecisionQuery_NUM_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x);
int zx_sp11_AuthorizationDecisionQuery_NUM_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x);
struct zx_sa11_Subject_s* zx_sp11_AuthorizationDecisionQuery_POP_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x);
struct zx_sa11_Action_s* zx_sp11_AuthorizationDecisionQuery_POP_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x);
struct zx_sa11_Evidence_s* zx_sp11_AuthorizationDecisionQuery_POP_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x);
void zx_sp11_AuthorizationDecisionQuery_PUSH_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Subject_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUSH_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Action_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUSH_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Evidence_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUT_Resource(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_str_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUT_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUT_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Action_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUT_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Evidence_s* y);
void zx_sp11_AuthorizationDecisionQuery_ADD_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sp11_AuthorizationDecisionQuery_ADD_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Action_s* z);
void zx_sp11_AuthorizationDecisionQuery_ADD_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Evidence_s* z);
void zx_sp11_AuthorizationDecisionQuery_DEL_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
void zx_sp11_AuthorizationDecisionQuery_DEL_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
void zx_sp11_AuthorizationDecisionQuery_DEL_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
void zx_sp11_AuthorizationDecisionQuery_REV_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x);
void zx_sp11_AuthorizationDecisionQuery_REV_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x);
void zx_sp11_AuthorizationDecisionQuery_REV_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x);

/* -------------------------- sp11_Request -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp11_Request_EXT
#define zx_sp11_Request_EXT
#endif

struct zx_sp11_Request_s* zx_DEC_sp11_Request(struct zx_ctx* c);
struct zx_sp11_Request_s* zx_NEW_sp11_Request(struct zx_ctx* c);
struct zx_sp11_Request_s* zx_DEEP_CLONE_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, int dup_strs);
void zx_DUP_STRS_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x);
void zx_FREE_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, int free_strs);
int zx_WALK_SO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_Request(struct zx_sp11_Request_s* x);
char* zx_ENC_SO_sp11_Request(struct zx_sp11_Request_s* x, char* p);
char* zx_ENC_WO_sp11_Request(struct zx_sp11_Request_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x);

struct zx_sp11_Request_s {
  ZX_ELEM_EXT
  zx_sp11_Request_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* RequestID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_elem_s* Query;	/* {0,1} sp11:QueryAbstractType */
  struct zx_sp11_SubjectQuery_s* SubjectQuery;	/* {0,1}  */
  struct zx_sp11_AuthenticationQuery_s* AuthenticationQuery;	/* {0,1} nada */
  struct zx_sp11_AttributeQuery_s* AttributeQuery;	/* {0,1} nada */
  struct zx_sp11_AuthorizationDecisionQuery_s* AuthorizationDecisionQuery;	/* {0,1} nada */
  struct zx_elem_s* AssertionIDReference;	/* {1,-1} xs:NCName */
  struct zx_elem_s* AssertionArtifact;	/* {1,-1} xs:string */
};

struct zx_str_s* zx_sp11_Request_GET_RequestID(struct zx_sp11_Request_s* x);
struct zx_str_s* zx_sp11_Request_GET_MajorVersion(struct zx_sp11_Request_s* x);
struct zx_str_s* zx_sp11_Request_GET_MinorVersion(struct zx_sp11_Request_s* x);
struct zx_str_s* zx_sp11_Request_GET_IssueInstant(struct zx_sp11_Request_s* x);
struct zx_elem_s* zx_sp11_Request_GET_RespondWith(struct zx_sp11_Request_s* x, int n);
struct zx_ds_Signature_s* zx_sp11_Request_GET_Signature(struct zx_sp11_Request_s* x, int n);
struct zx_elem_s* zx_sp11_Request_GET_Query(struct zx_sp11_Request_s* x, int n);
struct zx_sp11_SubjectQuery_s* zx_sp11_Request_GET_SubjectQuery(struct zx_sp11_Request_s* x, int n);
struct zx_sp11_AuthenticationQuery_s* zx_sp11_Request_GET_AuthenticationQuery(struct zx_sp11_Request_s* x, int n);
struct zx_sp11_AttributeQuery_s* zx_sp11_Request_GET_AttributeQuery(struct zx_sp11_Request_s* x, int n);
struct zx_sp11_AuthorizationDecisionQuery_s* zx_sp11_Request_GET_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n);
struct zx_elem_s* zx_sp11_Request_GET_AssertionIDReference(struct zx_sp11_Request_s* x, int n);
struct zx_elem_s* zx_sp11_Request_GET_AssertionArtifact(struct zx_sp11_Request_s* x, int n);
int zx_sp11_Request_NUM_RespondWith(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_Signature(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_Query(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_SubjectQuery(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AuthenticationQuery(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AttributeQuery(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AssertionIDReference(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AssertionArtifact(struct zx_sp11_Request_s* x);
struct zx_elem_s* zx_sp11_Request_POP_RespondWith(struct zx_sp11_Request_s* x);
struct zx_ds_Signature_s* zx_sp11_Request_POP_Signature(struct zx_sp11_Request_s* x);
struct zx_elem_s* zx_sp11_Request_POP_Query(struct zx_sp11_Request_s* x);
struct zx_sp11_SubjectQuery_s* zx_sp11_Request_POP_SubjectQuery(struct zx_sp11_Request_s* x);
struct zx_sp11_AuthenticationQuery_s* zx_sp11_Request_POP_AuthenticationQuery(struct zx_sp11_Request_s* x);
struct zx_sp11_AttributeQuery_s* zx_sp11_Request_POP_AttributeQuery(struct zx_sp11_Request_s* x);
struct zx_sp11_AuthorizationDecisionQuery_s* zx_sp11_Request_POP_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x);
struct zx_elem_s* zx_sp11_Request_POP_AssertionIDReference(struct zx_sp11_Request_s* x);
struct zx_elem_s* zx_sp11_Request_POP_AssertionArtifact(struct zx_sp11_Request_s* x);
void zx_sp11_Request_PUSH_RespondWith(struct zx_sp11_Request_s* x, struct zx_elem_s* y);
void zx_sp11_Request_PUSH_Signature(struct zx_sp11_Request_s* x, struct zx_ds_Signature_s* y);
void zx_sp11_Request_PUSH_Query(struct zx_sp11_Request_s* x, struct zx_elem_s* y);
void zx_sp11_Request_PUSH_SubjectQuery(struct zx_sp11_Request_s* x, struct zx_sp11_SubjectQuery_s* y);
void zx_sp11_Request_PUSH_AuthenticationQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AuthenticationQuery_s* y);
void zx_sp11_Request_PUSH_AttributeQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AttributeQuery_s* y);
void zx_sp11_Request_PUSH_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AuthorizationDecisionQuery_s* y);
void zx_sp11_Request_PUSH_AssertionIDReference(struct zx_sp11_Request_s* x, struct zx_elem_s* y);
void zx_sp11_Request_PUSH_AssertionArtifact(struct zx_sp11_Request_s* x, struct zx_elem_s* y);
void zx_sp11_Request_PUT_RequestID(struct zx_sp11_Request_s* x, struct zx_str_s* y);
void zx_sp11_Request_PUT_MajorVersion(struct zx_sp11_Request_s* x, struct zx_str_s* y);
void zx_sp11_Request_PUT_MinorVersion(struct zx_sp11_Request_s* x, struct zx_str_s* y);
void zx_sp11_Request_PUT_IssueInstant(struct zx_sp11_Request_s* x, struct zx_str_s* y);
void zx_sp11_Request_PUT_RespondWith(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Request_PUT_Signature(struct zx_sp11_Request_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp11_Request_PUT_Query(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Request_PUT_SubjectQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_SubjectQuery_s* y);
void zx_sp11_Request_PUT_AuthenticationQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthenticationQuery_s* y);
void zx_sp11_Request_PUT_AttributeQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AttributeQuery_s* y);
void zx_sp11_Request_PUT_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthorizationDecisionQuery_s* y);
void zx_sp11_Request_PUT_AssertionIDReference(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Request_PUT_AssertionArtifact(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Request_ADD_RespondWith(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Request_ADD_Signature(struct zx_sp11_Request_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp11_Request_ADD_Query(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Request_ADD_SubjectQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_SubjectQuery_s* z);
void zx_sp11_Request_ADD_AuthenticationQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthenticationQuery_s* z);
void zx_sp11_Request_ADD_AttributeQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AttributeQuery_s* z);
void zx_sp11_Request_ADD_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthorizationDecisionQuery_s* z);
void zx_sp11_Request_ADD_AssertionIDReference(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Request_ADD_AssertionArtifact(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Request_DEL_RespondWith(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_Signature(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_Query(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_SubjectQuery(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AuthenticationQuery(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AttributeQuery(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AssertionIDReference(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AssertionArtifact(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_REV_RespondWith(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_Signature(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_Query(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_SubjectQuery(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AuthenticationQuery(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AttributeQuery(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AssertionIDReference(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AssertionArtifact(struct zx_sp11_Request_s* x);

/* -------------------------- sp11_Response -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp11_Response_EXT
#define zx_sp11_Response_EXT
#endif

struct zx_sp11_Response_s* zx_DEC_sp11_Response(struct zx_ctx* c);
struct zx_sp11_Response_s* zx_NEW_sp11_Response(struct zx_ctx* c);
struct zx_sp11_Response_s* zx_DEEP_CLONE_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, int dup_strs);
void zx_DUP_STRS_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x);
void zx_FREE_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, int free_strs);
int zx_WALK_SO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_Response(struct zx_sp11_Response_s* x);
char* zx_ENC_SO_sp11_Response(struct zx_sp11_Response_s* x, char* p);
char* zx_ENC_WO_sp11_Response(struct zx_sp11_Response_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x);

struct zx_sp11_Response_s {
  ZX_ELEM_EXT
  zx_sp11_Response_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str_s* ResponseID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_sa11_Assertion_s* Assertion;	/* {0,-1} nada */
};

struct zx_str_s* zx_sp11_Response_GET_ResponseID(struct zx_sp11_Response_s* x);
struct zx_str_s* zx_sp11_Response_GET_InResponseTo(struct zx_sp11_Response_s* x);
struct zx_str_s* zx_sp11_Response_GET_MajorVersion(struct zx_sp11_Response_s* x);
struct zx_str_s* zx_sp11_Response_GET_MinorVersion(struct zx_sp11_Response_s* x);
struct zx_str_s* zx_sp11_Response_GET_IssueInstant(struct zx_sp11_Response_s* x);
struct zx_str_s* zx_sp11_Response_GET_Recipient(struct zx_sp11_Response_s* x);
struct zx_ds_Signature_s* zx_sp11_Response_GET_Signature(struct zx_sp11_Response_s* x, int n);
struct zx_sp11_Status_s* zx_sp11_Response_GET_Status(struct zx_sp11_Response_s* x, int n);
struct zx_sa11_Assertion_s* zx_sp11_Response_GET_Assertion(struct zx_sp11_Response_s* x, int n);
int zx_sp11_Response_NUM_Signature(struct zx_sp11_Response_s* x);
int zx_sp11_Response_NUM_Status(struct zx_sp11_Response_s* x);
int zx_sp11_Response_NUM_Assertion(struct zx_sp11_Response_s* x);
struct zx_ds_Signature_s* zx_sp11_Response_POP_Signature(struct zx_sp11_Response_s* x);
struct zx_sp11_Status_s* zx_sp11_Response_POP_Status(struct zx_sp11_Response_s* x);
struct zx_sa11_Assertion_s* zx_sp11_Response_POP_Assertion(struct zx_sp11_Response_s* x);
void zx_sp11_Response_PUSH_Signature(struct zx_sp11_Response_s* x, struct zx_ds_Signature_s* y);
void zx_sp11_Response_PUSH_Status(struct zx_sp11_Response_s* x, struct zx_sp11_Status_s* y);
void zx_sp11_Response_PUSH_Assertion(struct zx_sp11_Response_s* x, struct zx_sa11_Assertion_s* y);
void zx_sp11_Response_PUT_ResponseID(struct zx_sp11_Response_s* x, struct zx_str_s* y);
void zx_sp11_Response_PUT_InResponseTo(struct zx_sp11_Response_s* x, struct zx_str_s* y);
void zx_sp11_Response_PUT_MajorVersion(struct zx_sp11_Response_s* x, struct zx_str_s* y);
void zx_sp11_Response_PUT_MinorVersion(struct zx_sp11_Response_s* x, struct zx_str_s* y);
void zx_sp11_Response_PUT_IssueInstant(struct zx_sp11_Response_s* x, struct zx_str_s* y);
void zx_sp11_Response_PUT_Recipient(struct zx_sp11_Response_s* x, struct zx_str_s* y);
void zx_sp11_Response_PUT_Signature(struct zx_sp11_Response_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp11_Response_PUT_Status(struct zx_sp11_Response_s* x, int n, struct zx_sp11_Status_s* y);
void zx_sp11_Response_PUT_Assertion(struct zx_sp11_Response_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_sp11_Response_ADD_Signature(struct zx_sp11_Response_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp11_Response_ADD_Status(struct zx_sp11_Response_s* x, int n, struct zx_sp11_Status_s* z);
void zx_sp11_Response_ADD_Assertion(struct zx_sp11_Response_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_sp11_Response_DEL_Signature(struct zx_sp11_Response_s* x, int n);
void zx_sp11_Response_DEL_Status(struct zx_sp11_Response_s* x, int n);
void zx_sp11_Response_DEL_Assertion(struct zx_sp11_Response_s* x, int n);
void zx_sp11_Response_REV_Signature(struct zx_sp11_Response_s* x);
void zx_sp11_Response_REV_Status(struct zx_sp11_Response_s* x);
void zx_sp11_Response_REV_Assertion(struct zx_sp11_Response_s* x);

/* -------------------------- sp11_Status -------------------------- */
/* refby( zx_ff12_AuthnResponse_s zx_ff12_NameIdentifierMappingResponse_s zx_ff12_RegisterNameIdentifierResponse_s zx_ff12_LogoutResponse_s zx_sp11_Response_s ) */
#ifndef zx_sp11_Status_EXT
#define zx_sp11_Status_EXT
#endif

struct zx_sp11_Status_s* zx_DEC_sp11_Status(struct zx_ctx* c);
struct zx_sp11_Status_s* zx_NEW_sp11_Status(struct zx_ctx* c);
struct zx_sp11_Status_s* zx_DEEP_CLONE_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, int dup_strs);
void zx_DUP_STRS_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x);
void zx_FREE_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, int free_strs);
int zx_WALK_SO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_Status(struct zx_sp11_Status_s* x);
char* zx_ENC_SO_sp11_Status(struct zx_sp11_Status_s* x, char* p);
char* zx_ENC_WO_sp11_Status(struct zx_sp11_Status_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x);

struct zx_sp11_Status_s {
  ZX_ELEM_EXT
  zx_sp11_Status_EXT
  struct zx_sp11_StatusCode_s* StatusCode;	/* {1,1} nada */
  struct zx_elem_s* StatusMessage;	/* {0,1} xs:string */
  struct zx_sp11_StatusDetail_s* StatusDetail;	/* {0,1}  */
};

struct zx_sp11_StatusCode_s* zx_sp11_Status_GET_StatusCode(struct zx_sp11_Status_s* x, int n);
struct zx_elem_s* zx_sp11_Status_GET_StatusMessage(struct zx_sp11_Status_s* x, int n);
struct zx_sp11_StatusDetail_s* zx_sp11_Status_GET_StatusDetail(struct zx_sp11_Status_s* x, int n);
int zx_sp11_Status_NUM_StatusCode(struct zx_sp11_Status_s* x);
int zx_sp11_Status_NUM_StatusMessage(struct zx_sp11_Status_s* x);
int zx_sp11_Status_NUM_StatusDetail(struct zx_sp11_Status_s* x);
struct zx_sp11_StatusCode_s* zx_sp11_Status_POP_StatusCode(struct zx_sp11_Status_s* x);
struct zx_elem_s* zx_sp11_Status_POP_StatusMessage(struct zx_sp11_Status_s* x);
struct zx_sp11_StatusDetail_s* zx_sp11_Status_POP_StatusDetail(struct zx_sp11_Status_s* x);
void zx_sp11_Status_PUSH_StatusCode(struct zx_sp11_Status_s* x, struct zx_sp11_StatusCode_s* y);
void zx_sp11_Status_PUSH_StatusMessage(struct zx_sp11_Status_s* x, struct zx_elem_s* y);
void zx_sp11_Status_PUSH_StatusDetail(struct zx_sp11_Status_s* x, struct zx_sp11_StatusDetail_s* y);
void zx_sp11_Status_PUT_StatusCode(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusCode_s* y);
void zx_sp11_Status_PUT_StatusMessage(struct zx_sp11_Status_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Status_PUT_StatusDetail(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusDetail_s* y);
void zx_sp11_Status_ADD_StatusCode(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusCode_s* z);
void zx_sp11_Status_ADD_StatusMessage(struct zx_sp11_Status_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Status_ADD_StatusDetail(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusDetail_s* z);
void zx_sp11_Status_DEL_StatusCode(struct zx_sp11_Status_s* x, int n);
void zx_sp11_Status_DEL_StatusMessage(struct zx_sp11_Status_s* x, int n);
void zx_sp11_Status_DEL_StatusDetail(struct zx_sp11_Status_s* x, int n);
void zx_sp11_Status_REV_StatusCode(struct zx_sp11_Status_s* x);
void zx_sp11_Status_REV_StatusMessage(struct zx_sp11_Status_s* x);
void zx_sp11_Status_REV_StatusDetail(struct zx_sp11_Status_s* x);

/* -------------------------- sp11_StatusCode -------------------------- */
/* refby( zx_sp11_StatusCode_s zx_sp11_Status_s ) */
#ifndef zx_sp11_StatusCode_EXT
#define zx_sp11_StatusCode_EXT
#endif

struct zx_sp11_StatusCode_s* zx_DEC_sp11_StatusCode(struct zx_ctx* c);
struct zx_sp11_StatusCode_s* zx_NEW_sp11_StatusCode(struct zx_ctx* c);
struct zx_sp11_StatusCode_s* zx_DEEP_CLONE_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, int dup_strs);
void zx_DUP_STRS_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x);
void zx_FREE_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, int free_strs);
int zx_WALK_SO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_StatusCode(struct zx_sp11_StatusCode_s* x);
char* zx_ENC_SO_sp11_StatusCode(struct zx_sp11_StatusCode_s* x, char* p);
char* zx_ENC_WO_sp11_StatusCode(struct zx_sp11_StatusCode_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x);

struct zx_sp11_StatusCode_s {
  ZX_ELEM_EXT
  zx_sp11_StatusCode_EXT
  struct zx_sp11_StatusCode_s* StatusCode;	/* {0,1} nada */
  struct zx_str_s* Value;	/* {1,1} attribute xs:QName */
};

struct zx_str_s* zx_sp11_StatusCode_GET_Value(struct zx_sp11_StatusCode_s* x);
struct zx_sp11_StatusCode_s* zx_sp11_StatusCode_GET_StatusCode(struct zx_sp11_StatusCode_s* x, int n);
int zx_sp11_StatusCode_NUM_StatusCode(struct zx_sp11_StatusCode_s* x);
struct zx_sp11_StatusCode_s* zx_sp11_StatusCode_POP_StatusCode(struct zx_sp11_StatusCode_s* x);
void zx_sp11_StatusCode_PUSH_StatusCode(struct zx_sp11_StatusCode_s* x, struct zx_sp11_StatusCode_s* y);
void zx_sp11_StatusCode_PUT_Value(struct zx_sp11_StatusCode_s* x, struct zx_str_s* y);
void zx_sp11_StatusCode_PUT_StatusCode(struct zx_sp11_StatusCode_s* x, int n, struct zx_sp11_StatusCode_s* y);
void zx_sp11_StatusCode_ADD_StatusCode(struct zx_sp11_StatusCode_s* x, int n, struct zx_sp11_StatusCode_s* z);
void zx_sp11_StatusCode_DEL_StatusCode(struct zx_sp11_StatusCode_s* x, int n);
void zx_sp11_StatusCode_REV_StatusCode(struct zx_sp11_StatusCode_s* x);

/* -------------------------- sp11_StatusDetail -------------------------- */
/* refby( zx_sp11_Status_s ) */
#ifndef zx_sp11_StatusDetail_EXT
#define zx_sp11_StatusDetail_EXT
#endif

struct zx_sp11_StatusDetail_s* zx_DEC_sp11_StatusDetail(struct zx_ctx* c);
struct zx_sp11_StatusDetail_s* zx_NEW_sp11_StatusDetail(struct zx_ctx* c);
struct zx_sp11_StatusDetail_s* zx_DEEP_CLONE_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, int dup_strs);
void zx_DUP_STRS_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x);
void zx_FREE_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, int free_strs);
int zx_WALK_SO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_StatusDetail(struct zx_sp11_StatusDetail_s* x);
char* zx_ENC_SO_sp11_StatusDetail(struct zx_sp11_StatusDetail_s* x, char* p);
char* zx_ENC_WO_sp11_StatusDetail(struct zx_sp11_StatusDetail_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x);

struct zx_sp11_StatusDetail_s {
  ZX_ELEM_EXT
  zx_sp11_StatusDetail_EXT
};


/* -------------------------- sp11_SubjectQuery -------------------------- */
/* refby( zx_sp11_Request_s ) */
#ifndef zx_sp11_SubjectQuery_EXT
#define zx_sp11_SubjectQuery_EXT
#endif

struct zx_sp11_SubjectQuery_s* zx_DEC_sp11_SubjectQuery(struct zx_ctx* c);
struct zx_sp11_SubjectQuery_s* zx_NEW_sp11_SubjectQuery(struct zx_ctx* c);
struct zx_sp11_SubjectQuery_s* zx_DEEP_CLONE_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x);
void zx_FREE_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, int free_strs);
int zx_WALK_SO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp11_SubjectQuery(struct zx_sp11_SubjectQuery_s* x);
char* zx_ENC_SO_sp11_SubjectQuery(struct zx_sp11_SubjectQuery_s* x, char* p);
char* zx_ENC_WO_sp11_SubjectQuery(struct zx_sp11_SubjectQuery_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x);

struct zx_sp11_SubjectQuery_s {
  ZX_ELEM_EXT
  zx_sp11_SubjectQuery_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
};

struct zx_sa11_Subject_s* zx_sp11_SubjectQuery_GET_Subject(struct zx_sp11_SubjectQuery_s* x, int n);
int zx_sp11_SubjectQuery_NUM_Subject(struct zx_sp11_SubjectQuery_s* x);
struct zx_sa11_Subject_s* zx_sp11_SubjectQuery_POP_Subject(struct zx_sp11_SubjectQuery_s* x);
void zx_sp11_SubjectQuery_PUSH_Subject(struct zx_sp11_SubjectQuery_s* x, struct zx_sa11_Subject_s* y);
void zx_sp11_SubjectQuery_PUT_Subject(struct zx_sp11_SubjectQuery_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sp11_SubjectQuery_ADD_Subject(struct zx_sp11_SubjectQuery_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sp11_SubjectQuery_DEL_Subject(struct zx_sp11_SubjectQuery_s* x, int n);
void zx_sp11_SubjectQuery_REV_Subject(struct zx_sp11_SubjectQuery_s* x);

/* -------------------------- sp_ArtifactResolve -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_ArtifactResolve_EXT
#define zx_sp_ArtifactResolve_EXT
#endif

struct zx_sp_ArtifactResolve_s* zx_DEC_sp_ArtifactResolve(struct zx_ctx* c);
struct zx_sp_ArtifactResolve_s* zx_NEW_sp_ArtifactResolve(struct zx_ctx* c);
struct zx_sp_ArtifactResolve_s* zx_DEEP_CLONE_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, int dup_strs);
void zx_DUP_STRS_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x);
void zx_FREE_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, int free_strs);
int zx_WALK_SO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_ArtifactResolve(struct zx_sp_ArtifactResolve_s* x);
char* zx_ENC_SO_sp_ArtifactResolve(struct zx_sp_ArtifactResolve_s* x, char* p);
char* zx_ENC_WO_sp_ArtifactResolve(struct zx_sp_ArtifactResolve_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x);

struct zx_sp_ArtifactResolve_s {
  ZX_ELEM_EXT
  zx_sp_ArtifactResolve_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_elem_s* Artifact;	/* {1,1} xs:string */
};

struct zx_str_s* zx_sp_ArtifactResolve_GET_ID(struct zx_sp_ArtifactResolve_s* x);
struct zx_str_s* zx_sp_ArtifactResolve_GET_Version(struct zx_sp_ArtifactResolve_s* x);
struct zx_str_s* zx_sp_ArtifactResolve_GET_IssueInstant(struct zx_sp_ArtifactResolve_s* x);
struct zx_str_s* zx_sp_ArtifactResolve_GET_Destination(struct zx_sp_ArtifactResolve_s* x);
struct zx_str_s* zx_sp_ArtifactResolve_GET_Consent(struct zx_sp_ArtifactResolve_s* x);
struct zx_sa_Issuer_s* zx_sp_ArtifactResolve_GET_Issuer(struct zx_sp_ArtifactResolve_s* x, int n);
struct zx_ds_Signature_s* zx_sp_ArtifactResolve_GET_Signature(struct zx_sp_ArtifactResolve_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_ArtifactResolve_GET_Extensions(struct zx_sp_ArtifactResolve_s* x, int n);
struct zx_elem_s* zx_sp_ArtifactResolve_GET_Artifact(struct zx_sp_ArtifactResolve_s* x, int n);
int zx_sp_ArtifactResolve_NUM_Issuer(struct zx_sp_ArtifactResolve_s* x);
int zx_sp_ArtifactResolve_NUM_Signature(struct zx_sp_ArtifactResolve_s* x);
int zx_sp_ArtifactResolve_NUM_Extensions(struct zx_sp_ArtifactResolve_s* x);
int zx_sp_ArtifactResolve_NUM_Artifact(struct zx_sp_ArtifactResolve_s* x);
struct zx_sa_Issuer_s* zx_sp_ArtifactResolve_POP_Issuer(struct zx_sp_ArtifactResolve_s* x);
struct zx_ds_Signature_s* zx_sp_ArtifactResolve_POP_Signature(struct zx_sp_ArtifactResolve_s* x);
struct zx_sp_Extensions_s* zx_sp_ArtifactResolve_POP_Extensions(struct zx_sp_ArtifactResolve_s* x);
struct zx_elem_s* zx_sp_ArtifactResolve_POP_Artifact(struct zx_sp_ArtifactResolve_s* x);
void zx_sp_ArtifactResolve_PUSH_Issuer(struct zx_sp_ArtifactResolve_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_ArtifactResolve_PUSH_Signature(struct zx_sp_ArtifactResolve_s* x, struct zx_ds_Signature_s* y);
void zx_sp_ArtifactResolve_PUSH_Extensions(struct zx_sp_ArtifactResolve_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_ArtifactResolve_PUSH_Artifact(struct zx_sp_ArtifactResolve_s* x, struct zx_elem_s* y);
void zx_sp_ArtifactResolve_PUT_ID(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResolve_PUT_Version(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResolve_PUT_IssueInstant(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResolve_PUT_Destination(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResolve_PUT_Consent(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResolve_PUT_Issuer(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_ArtifactResolve_PUT_Signature(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_ArtifactResolve_PUT_Extensions(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_ArtifactResolve_PUT_Artifact(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_elem_s* y);
void zx_sp_ArtifactResolve_ADD_Issuer(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_ArtifactResolve_ADD_Signature(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_ArtifactResolve_ADD_Extensions(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_ArtifactResolve_ADD_Artifact(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_elem_s* z);
void zx_sp_ArtifactResolve_DEL_Issuer(struct zx_sp_ArtifactResolve_s* x, int n);
void zx_sp_ArtifactResolve_DEL_Signature(struct zx_sp_ArtifactResolve_s* x, int n);
void zx_sp_ArtifactResolve_DEL_Extensions(struct zx_sp_ArtifactResolve_s* x, int n);
void zx_sp_ArtifactResolve_DEL_Artifact(struct zx_sp_ArtifactResolve_s* x, int n);
void zx_sp_ArtifactResolve_REV_Issuer(struct zx_sp_ArtifactResolve_s* x);
void zx_sp_ArtifactResolve_REV_Signature(struct zx_sp_ArtifactResolve_s* x);
void zx_sp_ArtifactResolve_REV_Extensions(struct zx_sp_ArtifactResolve_s* x);
void zx_sp_ArtifactResolve_REV_Artifact(struct zx_sp_ArtifactResolve_s* x);

/* -------------------------- sp_ArtifactResponse -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_ArtifactResponse_EXT
#define zx_sp_ArtifactResponse_EXT
#endif

struct zx_sp_ArtifactResponse_s* zx_DEC_sp_ArtifactResponse(struct zx_ctx* c);
struct zx_sp_ArtifactResponse_s* zx_NEW_sp_ArtifactResponse(struct zx_ctx* c);
struct zx_sp_ArtifactResponse_s* zx_DEEP_CLONE_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, int dup_strs);
void zx_DUP_STRS_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x);
void zx_FREE_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, int free_strs);
int zx_WALK_SO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_ArtifactResponse(struct zx_sp_ArtifactResponse_s* x);
char* zx_ENC_SO_sp_ArtifactResponse(struct zx_sp_ArtifactResponse_s* x, char* p);
char* zx_ENC_WO_sp_ArtifactResponse(struct zx_sp_ArtifactResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x);

struct zx_sp_ArtifactResponse_s {
  ZX_ELEM_EXT
  zx_sp_ArtifactResponse_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sp_Response_s* Response;	/* {0,1} nada */
};

struct zx_str_s* zx_sp_ArtifactResponse_GET_ID(struct zx_sp_ArtifactResponse_s* x);
struct zx_str_s* zx_sp_ArtifactResponse_GET_InResponseTo(struct zx_sp_ArtifactResponse_s* x);
struct zx_str_s* zx_sp_ArtifactResponse_GET_Version(struct zx_sp_ArtifactResponse_s* x);
struct zx_str_s* zx_sp_ArtifactResponse_GET_IssueInstant(struct zx_sp_ArtifactResponse_s* x);
struct zx_str_s* zx_sp_ArtifactResponse_GET_Destination(struct zx_sp_ArtifactResponse_s* x);
struct zx_str_s* zx_sp_ArtifactResponse_GET_Consent(struct zx_sp_ArtifactResponse_s* x);
struct zx_sa_Issuer_s* zx_sp_ArtifactResponse_GET_Issuer(struct zx_sp_ArtifactResponse_s* x, int n);
struct zx_ds_Signature_s* zx_sp_ArtifactResponse_GET_Signature(struct zx_sp_ArtifactResponse_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_ArtifactResponse_GET_Extensions(struct zx_sp_ArtifactResponse_s* x, int n);
struct zx_sp_Status_s* zx_sp_ArtifactResponse_GET_Status(struct zx_sp_ArtifactResponse_s* x, int n);
struct zx_sp_Response_s* zx_sp_ArtifactResponse_GET_Response(struct zx_sp_ArtifactResponse_s* x, int n);
int zx_sp_ArtifactResponse_NUM_Issuer(struct zx_sp_ArtifactResponse_s* x);
int zx_sp_ArtifactResponse_NUM_Signature(struct zx_sp_ArtifactResponse_s* x);
int zx_sp_ArtifactResponse_NUM_Extensions(struct zx_sp_ArtifactResponse_s* x);
int zx_sp_ArtifactResponse_NUM_Status(struct zx_sp_ArtifactResponse_s* x);
int zx_sp_ArtifactResponse_NUM_Response(struct zx_sp_ArtifactResponse_s* x);
struct zx_sa_Issuer_s* zx_sp_ArtifactResponse_POP_Issuer(struct zx_sp_ArtifactResponse_s* x);
struct zx_ds_Signature_s* zx_sp_ArtifactResponse_POP_Signature(struct zx_sp_ArtifactResponse_s* x);
struct zx_sp_Extensions_s* zx_sp_ArtifactResponse_POP_Extensions(struct zx_sp_ArtifactResponse_s* x);
struct zx_sp_Status_s* zx_sp_ArtifactResponse_POP_Status(struct zx_sp_ArtifactResponse_s* x);
struct zx_sp_Response_s* zx_sp_ArtifactResponse_POP_Response(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_PUSH_Issuer(struct zx_sp_ArtifactResponse_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_ArtifactResponse_PUSH_Signature(struct zx_sp_ArtifactResponse_s* x, struct zx_ds_Signature_s* y);
void zx_sp_ArtifactResponse_PUSH_Extensions(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_ArtifactResponse_PUSH_Status(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Status_s* y);
void zx_sp_ArtifactResponse_PUSH_Response(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Response_s* y);
void zx_sp_ArtifactResponse_PUT_ID(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResponse_PUT_InResponseTo(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResponse_PUT_Version(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResponse_PUT_IssueInstant(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResponse_PUT_Destination(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResponse_PUT_Consent(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y);
void zx_sp_ArtifactResponse_PUT_Issuer(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_ArtifactResponse_PUT_Signature(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_ArtifactResponse_PUT_Extensions(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_ArtifactResponse_PUT_Status(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Status_s* y);
void zx_sp_ArtifactResponse_PUT_Response(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Response_s* y);
void zx_sp_ArtifactResponse_ADD_Issuer(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_ArtifactResponse_ADD_Signature(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_ArtifactResponse_ADD_Extensions(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_ArtifactResponse_ADD_Status(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Status_s* z);
void zx_sp_ArtifactResponse_ADD_Response(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Response_s* z);
void zx_sp_ArtifactResponse_DEL_Issuer(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_DEL_Signature(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_DEL_Extensions(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_DEL_Status(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_DEL_Response(struct zx_sp_ArtifactResponse_s* x, int n);
void zx_sp_ArtifactResponse_REV_Issuer(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_REV_Signature(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_REV_Extensions(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_REV_Status(struct zx_sp_ArtifactResponse_s* x);
void zx_sp_ArtifactResponse_REV_Response(struct zx_sp_ArtifactResponse_s* x);

/* -------------------------- sp_AssertionIDRequest -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_AssertionIDRequest_EXT
#define zx_sp_AssertionIDRequest_EXT
#endif

struct zx_sp_AssertionIDRequest_s* zx_DEC_sp_AssertionIDRequest(struct zx_ctx* c);
struct zx_sp_AssertionIDRequest_s* zx_NEW_sp_AssertionIDRequest(struct zx_ctx* c);
struct zx_sp_AssertionIDRequest_s* zx_DEEP_CLONE_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x);
void zx_FREE_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, int free_strs);
int zx_WALK_SO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_AssertionIDRequest(struct zx_sp_AssertionIDRequest_s* x);
char* zx_ENC_SO_sp_AssertionIDRequest(struct zx_sp_AssertionIDRequest_s* x, char* p);
char* zx_ENC_WO_sp_AssertionIDRequest(struct zx_sp_AssertionIDRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x);

struct zx_sp_AssertionIDRequest_s {
  ZX_ELEM_EXT
  zx_sp_AssertionIDRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_elem_s* AssertionIDRef;	/* {1,-1} xs:NCName */
};

struct zx_str_s* zx_sp_AssertionIDRequest_GET_ID(struct zx_sp_AssertionIDRequest_s* x);
struct zx_str_s* zx_sp_AssertionIDRequest_GET_Version(struct zx_sp_AssertionIDRequest_s* x);
struct zx_str_s* zx_sp_AssertionIDRequest_GET_IssueInstant(struct zx_sp_AssertionIDRequest_s* x);
struct zx_str_s* zx_sp_AssertionIDRequest_GET_Destination(struct zx_sp_AssertionIDRequest_s* x);
struct zx_str_s* zx_sp_AssertionIDRequest_GET_Consent(struct zx_sp_AssertionIDRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_AssertionIDRequest_GET_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AssertionIDRequest_GET_Signature(struct zx_sp_AssertionIDRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AssertionIDRequest_GET_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n);
struct zx_elem_s* zx_sp_AssertionIDRequest_GET_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n);
int zx_sp_AssertionIDRequest_NUM_Issuer(struct zx_sp_AssertionIDRequest_s* x);
int zx_sp_AssertionIDRequest_NUM_Signature(struct zx_sp_AssertionIDRequest_s* x);
int zx_sp_AssertionIDRequest_NUM_Extensions(struct zx_sp_AssertionIDRequest_s* x);
int zx_sp_AssertionIDRequest_NUM_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_AssertionIDRequest_POP_Issuer(struct zx_sp_AssertionIDRequest_s* x);
struct zx_ds_Signature_s* zx_sp_AssertionIDRequest_POP_Signature(struct zx_sp_AssertionIDRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_AssertionIDRequest_POP_Extensions(struct zx_sp_AssertionIDRequest_s* x);
struct zx_elem_s* zx_sp_AssertionIDRequest_POP_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x);
void zx_sp_AssertionIDRequest_PUSH_Issuer(struct zx_sp_AssertionIDRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AssertionIDRequest_PUSH_Signature(struct zx_sp_AssertionIDRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AssertionIDRequest_PUSH_Extensions(struct zx_sp_AssertionIDRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AssertionIDRequest_PUSH_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, struct zx_elem_s* y);
void zx_sp_AssertionIDRequest_PUT_ID(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y);
void zx_sp_AssertionIDRequest_PUT_Version(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y);
void zx_sp_AssertionIDRequest_PUT_IssueInstant(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y);
void zx_sp_AssertionIDRequest_PUT_Destination(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y);
void zx_sp_AssertionIDRequest_PUT_Consent(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y);
void zx_sp_AssertionIDRequest_PUT_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AssertionIDRequest_PUT_Signature(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AssertionIDRequest_PUT_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AssertionIDRequest_PUT_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_elem_s* y);
void zx_sp_AssertionIDRequest_ADD_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AssertionIDRequest_ADD_Signature(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AssertionIDRequest_ADD_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AssertionIDRequest_ADD_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_elem_s* z);
void zx_sp_AssertionIDRequest_DEL_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n);
void zx_sp_AssertionIDRequest_DEL_Signature(struct zx_sp_AssertionIDRequest_s* x, int n);
void zx_sp_AssertionIDRequest_DEL_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n);
void zx_sp_AssertionIDRequest_DEL_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n);
void zx_sp_AssertionIDRequest_REV_Issuer(struct zx_sp_AssertionIDRequest_s* x);
void zx_sp_AssertionIDRequest_REV_Signature(struct zx_sp_AssertionIDRequest_s* x);
void zx_sp_AssertionIDRequest_REV_Extensions(struct zx_sp_AssertionIDRequest_s* x);
void zx_sp_AssertionIDRequest_REV_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x);

/* -------------------------- sp_AttributeQuery -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_AttributeQuery_EXT
#define zx_sp_AttributeQuery_EXT
#endif

struct zx_sp_AttributeQuery_s* zx_DEC_sp_AttributeQuery(struct zx_ctx* c);
struct zx_sp_AttributeQuery_s* zx_NEW_sp_AttributeQuery(struct zx_ctx* c);
struct zx_sp_AttributeQuery_s* zx_DEEP_CLONE_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x);
void zx_FREE_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, int free_strs);
int zx_WALK_SO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_AttributeQuery(struct zx_sp_AttributeQuery_s* x);
char* zx_ENC_SO_sp_AttributeQuery(struct zx_sp_AttributeQuery_s* x, char* p);
char* zx_ENC_WO_sp_AttributeQuery(struct zx_sp_AttributeQuery_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x);

struct zx_sp_AttributeQuery_s {
  ZX_ELEM_EXT
  zx_sp_AttributeQuery_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa_Attribute_s* Attribute;	/* {0,-1} nada */
};

struct zx_str_s* zx_sp_AttributeQuery_GET_ID(struct zx_sp_AttributeQuery_s* x);
struct zx_str_s* zx_sp_AttributeQuery_GET_Version(struct zx_sp_AttributeQuery_s* x);
struct zx_str_s* zx_sp_AttributeQuery_GET_IssueInstant(struct zx_sp_AttributeQuery_s* x);
struct zx_str_s* zx_sp_AttributeQuery_GET_Destination(struct zx_sp_AttributeQuery_s* x);
struct zx_str_s* zx_sp_AttributeQuery_GET_Consent(struct zx_sp_AttributeQuery_s* x);
struct zx_sa_Issuer_s* zx_sp_AttributeQuery_GET_Issuer(struct zx_sp_AttributeQuery_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AttributeQuery_GET_Signature(struct zx_sp_AttributeQuery_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AttributeQuery_GET_Extensions(struct zx_sp_AttributeQuery_s* x, int n);
struct zx_sa_Subject_s* zx_sp_AttributeQuery_GET_Subject(struct zx_sp_AttributeQuery_s* x, int n);
struct zx_sa_Attribute_s* zx_sp_AttributeQuery_GET_Attribute(struct zx_sp_AttributeQuery_s* x, int n);
int zx_sp_AttributeQuery_NUM_Issuer(struct zx_sp_AttributeQuery_s* x);
int zx_sp_AttributeQuery_NUM_Signature(struct zx_sp_AttributeQuery_s* x);
int zx_sp_AttributeQuery_NUM_Extensions(struct zx_sp_AttributeQuery_s* x);
int zx_sp_AttributeQuery_NUM_Subject(struct zx_sp_AttributeQuery_s* x);
int zx_sp_AttributeQuery_NUM_Attribute(struct zx_sp_AttributeQuery_s* x);
struct zx_sa_Issuer_s* zx_sp_AttributeQuery_POP_Issuer(struct zx_sp_AttributeQuery_s* x);
struct zx_ds_Signature_s* zx_sp_AttributeQuery_POP_Signature(struct zx_sp_AttributeQuery_s* x);
struct zx_sp_Extensions_s* zx_sp_AttributeQuery_POP_Extensions(struct zx_sp_AttributeQuery_s* x);
struct zx_sa_Subject_s* zx_sp_AttributeQuery_POP_Subject(struct zx_sp_AttributeQuery_s* x);
struct zx_sa_Attribute_s* zx_sp_AttributeQuery_POP_Attribute(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_PUSH_Issuer(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AttributeQuery_PUSH_Signature(struct zx_sp_AttributeQuery_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AttributeQuery_PUSH_Extensions(struct zx_sp_AttributeQuery_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AttributeQuery_PUSH_Subject(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Subject_s* y);
void zx_sp_AttributeQuery_PUSH_Attribute(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Attribute_s* y);
void zx_sp_AttributeQuery_PUT_ID(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y);
void zx_sp_AttributeQuery_PUT_Version(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y);
void zx_sp_AttributeQuery_PUT_IssueInstant(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y);
void zx_sp_AttributeQuery_PUT_Destination(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y);
void zx_sp_AttributeQuery_PUT_Consent(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y);
void zx_sp_AttributeQuery_PUT_Issuer(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AttributeQuery_PUT_Signature(struct zx_sp_AttributeQuery_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AttributeQuery_PUT_Extensions(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AttributeQuery_PUT_Subject(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_AttributeQuery_PUT_Attribute(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Attribute_s* y);
void zx_sp_AttributeQuery_ADD_Issuer(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AttributeQuery_ADD_Signature(struct zx_sp_AttributeQuery_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AttributeQuery_ADD_Extensions(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AttributeQuery_ADD_Subject(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_AttributeQuery_ADD_Attribute(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Attribute_s* z);
void zx_sp_AttributeQuery_DEL_Issuer(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_DEL_Signature(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_DEL_Extensions(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_DEL_Subject(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_DEL_Attribute(struct zx_sp_AttributeQuery_s* x, int n);
void zx_sp_AttributeQuery_REV_Issuer(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_REV_Signature(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_REV_Extensions(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_REV_Subject(struct zx_sp_AttributeQuery_s* x);
void zx_sp_AttributeQuery_REV_Attribute(struct zx_sp_AttributeQuery_s* x);

/* -------------------------- sp_AuthnQuery -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_AuthnQuery_EXT
#define zx_sp_AuthnQuery_EXT
#endif

struct zx_sp_AuthnQuery_s* zx_DEC_sp_AuthnQuery(struct zx_ctx* c);
struct zx_sp_AuthnQuery_s* zx_NEW_sp_AuthnQuery(struct zx_ctx* c);
struct zx_sp_AuthnQuery_s* zx_DEEP_CLONE_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x);
void zx_FREE_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, int free_strs);
int zx_WALK_SO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_AuthnQuery(struct zx_sp_AuthnQuery_s* x);
char* zx_ENC_SO_sp_AuthnQuery(struct zx_sp_AuthnQuery_s* x, char* p);
char* zx_ENC_WO_sp_AuthnQuery(struct zx_sp_AuthnQuery_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x);

struct zx_sp_AuthnQuery_s {
  ZX_ELEM_EXT
  zx_sp_AuthnQuery_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sp_RequestedAuthnContext_s* RequestedAuthnContext;	/* {0,1} nada */
  struct zx_str_s* SessionIndex;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sp_AuthnQuery_GET_ID(struct zx_sp_AuthnQuery_s* x);
struct zx_str_s* zx_sp_AuthnQuery_GET_Version(struct zx_sp_AuthnQuery_s* x);
struct zx_str_s* zx_sp_AuthnQuery_GET_IssueInstant(struct zx_sp_AuthnQuery_s* x);
struct zx_str_s* zx_sp_AuthnQuery_GET_Destination(struct zx_sp_AuthnQuery_s* x);
struct zx_str_s* zx_sp_AuthnQuery_GET_Consent(struct zx_sp_AuthnQuery_s* x);
struct zx_str_s* zx_sp_AuthnQuery_GET_SessionIndex(struct zx_sp_AuthnQuery_s* x);
struct zx_sa_Issuer_s* zx_sp_AuthnQuery_GET_Issuer(struct zx_sp_AuthnQuery_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AuthnQuery_GET_Signature(struct zx_sp_AuthnQuery_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AuthnQuery_GET_Extensions(struct zx_sp_AuthnQuery_s* x, int n);
struct zx_sa_Subject_s* zx_sp_AuthnQuery_GET_Subject(struct zx_sp_AuthnQuery_s* x, int n);
struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnQuery_GET_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n);
int zx_sp_AuthnQuery_NUM_Issuer(struct zx_sp_AuthnQuery_s* x);
int zx_sp_AuthnQuery_NUM_Signature(struct zx_sp_AuthnQuery_s* x);
int zx_sp_AuthnQuery_NUM_Extensions(struct zx_sp_AuthnQuery_s* x);
int zx_sp_AuthnQuery_NUM_Subject(struct zx_sp_AuthnQuery_s* x);
int zx_sp_AuthnQuery_NUM_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x);
struct zx_sa_Issuer_s* zx_sp_AuthnQuery_POP_Issuer(struct zx_sp_AuthnQuery_s* x);
struct zx_ds_Signature_s* zx_sp_AuthnQuery_POP_Signature(struct zx_sp_AuthnQuery_s* x);
struct zx_sp_Extensions_s* zx_sp_AuthnQuery_POP_Extensions(struct zx_sp_AuthnQuery_s* x);
struct zx_sa_Subject_s* zx_sp_AuthnQuery_POP_Subject(struct zx_sp_AuthnQuery_s* x);
struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnQuery_POP_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_PUSH_Issuer(struct zx_sp_AuthnQuery_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AuthnQuery_PUSH_Signature(struct zx_sp_AuthnQuery_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AuthnQuery_PUSH_Extensions(struct zx_sp_AuthnQuery_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AuthnQuery_PUSH_Subject(struct zx_sp_AuthnQuery_s* x, struct zx_sa_Subject_s* y);
void zx_sp_AuthnQuery_PUSH_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, struct zx_sp_RequestedAuthnContext_s* y);
void zx_sp_AuthnQuery_PUT_ID(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthnQuery_PUT_Version(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthnQuery_PUT_IssueInstant(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthnQuery_PUT_Destination(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthnQuery_PUT_Consent(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthnQuery_PUT_SessionIndex(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthnQuery_PUT_Issuer(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AuthnQuery_PUT_Signature(struct zx_sp_AuthnQuery_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AuthnQuery_PUT_Extensions(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AuthnQuery_PUT_Subject(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_AuthnQuery_PUT_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_RequestedAuthnContext_s* y);
void zx_sp_AuthnQuery_ADD_Issuer(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AuthnQuery_ADD_Signature(struct zx_sp_AuthnQuery_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AuthnQuery_ADD_Extensions(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AuthnQuery_ADD_Subject(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_AuthnQuery_ADD_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z);
void zx_sp_AuthnQuery_DEL_Issuer(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_DEL_Signature(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_DEL_Extensions(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_DEL_Subject(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_DEL_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n);
void zx_sp_AuthnQuery_REV_Issuer(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_REV_Signature(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_REV_Extensions(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_REV_Subject(struct zx_sp_AuthnQuery_s* x);
void zx_sp_AuthnQuery_REV_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x);

/* -------------------------- sp_AuthnRequest -------------------------- */
/* refby( ) */
#ifndef zx_sp_AuthnRequest_EXT
#define zx_sp_AuthnRequest_EXT
#endif

struct zx_sp_AuthnRequest_s* zx_DEC_sp_AuthnRequest(struct zx_ctx* c);
struct zx_sp_AuthnRequest_s* zx_NEW_sp_AuthnRequest(struct zx_ctx* c);
struct zx_sp_AuthnRequest_s* zx_DEEP_CLONE_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x);
void zx_FREE_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, int free_strs);
int zx_WALK_SO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_AuthnRequest(struct zx_sp_AuthnRequest_s* x);
char* zx_ENC_SO_sp_AuthnRequest(struct zx_sp_AuthnRequest_s* x, char* p);
char* zx_ENC_WO_sp_AuthnRequest(struct zx_sp_AuthnRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x);

struct zx_sp_AuthnRequest_s {
  ZX_ELEM_EXT
  zx_sp_AuthnRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_Subject_s* Subject;	/* {0,1} nada */
  struct zx_sp_NameIDPolicy_s* NameIDPolicy;	/* {0,1} nada */
  struct zx_sa_Conditions_s* Conditions;	/* {0,1} nada */
  struct zx_sp_RequestedAuthnContext_s* RequestedAuthnContext;	/* {0,1} nada */
  struct zx_sp_Scoping_s* Scoping;	/* {0,1} nada */
  struct zx_str_s* ForceAuthn;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* IsPassive;	/* {0,1} attribute xs:boolean */
  struct zx_str_s* ProtocolBinding;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* AssertionConsumerServiceIndex;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str_s* AssertionConsumerServiceURL;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* AttributeConsumingServiceIndex;	/* {0,1} attribute xs:unsignedShort */
  struct zx_str_s* ProviderName;	/* {0,1} attribute xs:string */
};

struct zx_str_s* zx_sp_AuthnRequest_GET_ID(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_Version(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_IssueInstant(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_Destination(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_Consent(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_ForceAuthn(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_IsPassive(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_ProtocolBinding(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_AssertionConsumerServiceIndex(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_AssertionConsumerServiceURL(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_AttributeConsumingServiceIndex(struct zx_sp_AuthnRequest_s* x);
struct zx_str_s* zx_sp_AuthnRequest_GET_ProviderName(struct zx_sp_AuthnRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_AuthnRequest_GET_Issuer(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AuthnRequest_GET_Signature(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AuthnRequest_GET_Extensions(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sa_Subject_s* zx_sp_AuthnRequest_GET_Subject(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sp_NameIDPolicy_s* zx_sp_AuthnRequest_GET_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sa_Conditions_s* zx_sp_AuthnRequest_GET_Conditions(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnRequest_GET_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n);
struct zx_sp_Scoping_s* zx_sp_AuthnRequest_GET_Scoping(struct zx_sp_AuthnRequest_s* x, int n);
int zx_sp_AuthnRequest_NUM_Issuer(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Signature(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Extensions(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Subject(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_NameIDPolicy(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Conditions(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x);
int zx_sp_AuthnRequest_NUM_Scoping(struct zx_sp_AuthnRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_AuthnRequest_POP_Issuer(struct zx_sp_AuthnRequest_s* x);
struct zx_ds_Signature_s* zx_sp_AuthnRequest_POP_Signature(struct zx_sp_AuthnRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_AuthnRequest_POP_Extensions(struct zx_sp_AuthnRequest_s* x);
struct zx_sa_Subject_s* zx_sp_AuthnRequest_POP_Subject(struct zx_sp_AuthnRequest_s* x);
struct zx_sp_NameIDPolicy_s* zx_sp_AuthnRequest_POP_NameIDPolicy(struct zx_sp_AuthnRequest_s* x);
struct zx_sa_Conditions_s* zx_sp_AuthnRequest_POP_Conditions(struct zx_sp_AuthnRequest_s* x);
struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnRequest_POP_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x);
struct zx_sp_Scoping_s* zx_sp_AuthnRequest_POP_Scoping(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_PUSH_Issuer(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AuthnRequest_PUSH_Signature(struct zx_sp_AuthnRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AuthnRequest_PUSH_Extensions(struct zx_sp_AuthnRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AuthnRequest_PUSH_Subject(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Subject_s* y);
void zx_sp_AuthnRequest_PUSH_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, struct zx_sp_NameIDPolicy_s* y);
void zx_sp_AuthnRequest_PUSH_Conditions(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Conditions_s* y);
void zx_sp_AuthnRequest_PUSH_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, struct zx_sp_RequestedAuthnContext_s* y);
void zx_sp_AuthnRequest_PUSH_Scoping(struct zx_sp_AuthnRequest_s* x, struct zx_sp_Scoping_s* y);
void zx_sp_AuthnRequest_PUT_ID(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_Version(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_IssueInstant(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_Destination(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_Consent(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_ForceAuthn(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_IsPassive(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_ProtocolBinding(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_AssertionConsumerServiceIndex(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_AssertionConsumerServiceURL(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_AttributeConsumingServiceIndex(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_ProviderName(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y);
void zx_sp_AuthnRequest_PUT_Issuer(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AuthnRequest_PUT_Signature(struct zx_sp_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AuthnRequest_PUT_Extensions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AuthnRequest_PUT_Subject(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_AuthnRequest_PUT_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* y);
void zx_sp_AuthnRequest_PUT_Conditions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Conditions_s* y);
void zx_sp_AuthnRequest_PUT_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* y);
void zx_sp_AuthnRequest_PUT_Scoping(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Scoping_s* y);
void zx_sp_AuthnRequest_ADD_Issuer(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AuthnRequest_ADD_Signature(struct zx_sp_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AuthnRequest_ADD_Extensions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AuthnRequest_ADD_Subject(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_AuthnRequest_ADD_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z);
void zx_sp_AuthnRequest_ADD_Conditions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Conditions_s* z);
void zx_sp_AuthnRequest_ADD_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z);
void zx_sp_AuthnRequest_ADD_Scoping(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Scoping_s* z);
void zx_sp_AuthnRequest_DEL_Issuer(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Signature(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Extensions(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Subject(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Conditions(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_DEL_Scoping(struct zx_sp_AuthnRequest_s* x, int n);
void zx_sp_AuthnRequest_REV_Issuer(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Signature(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Extensions(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Subject(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_NameIDPolicy(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Conditions(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x);
void zx_sp_AuthnRequest_REV_Scoping(struct zx_sp_AuthnRequest_s* x);

/* -------------------------- sp_AuthzDecisionQuery -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_AuthzDecisionQuery_EXT
#define zx_sp_AuthzDecisionQuery_EXT
#endif

struct zx_sp_AuthzDecisionQuery_s* zx_DEC_sp_AuthzDecisionQuery(struct zx_ctx* c);
struct zx_sp_AuthzDecisionQuery_s* zx_NEW_sp_AuthzDecisionQuery(struct zx_ctx* c);
struct zx_sp_AuthzDecisionQuery_s* zx_DEEP_CLONE_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x);
void zx_FREE_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, int free_strs);
int zx_WALK_SO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_AuthzDecisionQuery(struct zx_sp_AuthzDecisionQuery_s* x);
char* zx_ENC_SO_sp_AuthzDecisionQuery(struct zx_sp_AuthzDecisionQuery_s* x, char* p);
char* zx_ENC_WO_sp_AuthzDecisionQuery(struct zx_sp_AuthzDecisionQuery_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x);

struct zx_sp_AuthzDecisionQuery_s {
  ZX_ELEM_EXT
  zx_sp_AuthzDecisionQuery_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa_Action_s* Action;	/* {1,-1} nada */
  struct zx_sa_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str_s* Resource;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_ID(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_Version(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_IssueInstant(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_Destination(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_Consent(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_Resource(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sa_Issuer_s* zx_sp_AuthzDecisionQuery_GET_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_ds_Signature_s* zx_sp_AuthzDecisionQuery_GET_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_AuthzDecisionQuery_GET_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_sa_Subject_s* zx_sp_AuthzDecisionQuery_GET_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_sa_Action_s* zx_sp_AuthzDecisionQuery_GET_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n);
struct zx_sa_Evidence_s* zx_sp_AuthzDecisionQuery_GET_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n);
int zx_sp_AuthzDecisionQuery_NUM_Issuer(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Signature(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Extensions(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Subject(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Action(struct zx_sp_AuthzDecisionQuery_s* x);
int zx_sp_AuthzDecisionQuery_NUM_Evidence(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sa_Issuer_s* zx_sp_AuthzDecisionQuery_POP_Issuer(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_ds_Signature_s* zx_sp_AuthzDecisionQuery_POP_Signature(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sp_Extensions_s* zx_sp_AuthzDecisionQuery_POP_Extensions(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sa_Subject_s* zx_sp_AuthzDecisionQuery_POP_Subject(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sa_Action_s* zx_sp_AuthzDecisionQuery_POP_Action(struct zx_sp_AuthzDecisionQuery_s* x);
struct zx_sa_Evidence_s* zx_sp_AuthzDecisionQuery_POP_Evidence(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_PUSH_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Signature(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_ds_Signature_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Subject(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Subject_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Action(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Action_s* y);
void zx_sp_AuthzDecisionQuery_PUSH_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Evidence_s* y);
void zx_sp_AuthzDecisionQuery_PUT_ID(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Version(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthzDecisionQuery_PUT_IssueInstant(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Destination(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Consent(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Resource(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Action_s* y);
void zx_sp_AuthzDecisionQuery_PUT_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Evidence_s* y);
void zx_sp_AuthzDecisionQuery_ADD_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Action_s* z);
void zx_sp_AuthzDecisionQuery_ADD_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Evidence_s* z);
void zx_sp_AuthzDecisionQuery_DEL_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_DEL_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n);
void zx_sp_AuthzDecisionQuery_REV_Issuer(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Signature(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Extensions(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Subject(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Action(struct zx_sp_AuthzDecisionQuery_s* x);
void zx_sp_AuthzDecisionQuery_REV_Evidence(struct zx_sp_AuthzDecisionQuery_s* x);

/* -------------------------- sp_Extensions -------------------------- */
/* refby( zx_sp_LogoutRequest_s zx_sp_ArtifactResponse_s zx_sp_AuthnRequest_s zx_sp_AuthzDecisionQuery_s zx_sp_ArtifactResolve_s zx_sp_AttributeQuery_s zx_sp_NameIDMappingResponse_s zx_sp_ManageNameIDResponse_s zx_sp_LogoutResponse_s zx_sp_AssertionIDRequest_s zx_sp_NameIDMappingRequest_s zx_sp_Response_s zx_sp_ManageNameIDRequest_s zx_sp_SubjectQuery_s zx_sp_AuthnQuery_s ) */
#ifndef zx_sp_Extensions_EXT
#define zx_sp_Extensions_EXT
#endif

struct zx_sp_Extensions_s* zx_DEC_sp_Extensions(struct zx_ctx* c);
struct zx_sp_Extensions_s* zx_NEW_sp_Extensions(struct zx_ctx* c);
struct zx_sp_Extensions_s* zx_DEEP_CLONE_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, int dup_strs);
void zx_DUP_STRS_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x);
void zx_FREE_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, int free_strs);
int zx_WALK_SO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_Extensions(struct zx_sp_Extensions_s* x);
char* zx_ENC_SO_sp_Extensions(struct zx_sp_Extensions_s* x, char* p);
char* zx_ENC_WO_sp_Extensions(struct zx_sp_Extensions_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x);

struct zx_sp_Extensions_s {
  ZX_ELEM_EXT
  zx_sp_Extensions_EXT
};


/* -------------------------- sp_IDPEntry -------------------------- */
/* refby( zx_sp_IDPList_s ) */
#ifndef zx_sp_IDPEntry_EXT
#define zx_sp_IDPEntry_EXT
#endif

struct zx_sp_IDPEntry_s* zx_DEC_sp_IDPEntry(struct zx_ctx* c);
struct zx_sp_IDPEntry_s* zx_NEW_sp_IDPEntry(struct zx_ctx* c);
struct zx_sp_IDPEntry_s* zx_DEEP_CLONE_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, int dup_strs);
void zx_DUP_STRS_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x);
void zx_FREE_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, int free_strs);
int zx_WALK_SO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_IDPEntry(struct zx_sp_IDPEntry_s* x);
char* zx_ENC_SO_sp_IDPEntry(struct zx_sp_IDPEntry_s* x, char* p);
char* zx_ENC_WO_sp_IDPEntry(struct zx_sp_IDPEntry_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x);

struct zx_sp_IDPEntry_s {
  ZX_ELEM_EXT
  zx_sp_IDPEntry_EXT
  struct zx_str_s* ProviderID;	/* {1,1} attribute xs:anyURI */
  struct zx_str_s* Name;	/* {0,1} attribute xs:string */
  struct zx_str_s* Loc;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sp_IDPEntry_GET_ProviderID(struct zx_sp_IDPEntry_s* x);
struct zx_str_s* zx_sp_IDPEntry_GET_Name(struct zx_sp_IDPEntry_s* x);
struct zx_str_s* zx_sp_IDPEntry_GET_Loc(struct zx_sp_IDPEntry_s* x);
void zx_sp_IDPEntry_PUT_ProviderID(struct zx_sp_IDPEntry_s* x, struct zx_str_s* y);
void zx_sp_IDPEntry_PUT_Name(struct zx_sp_IDPEntry_s* x, struct zx_str_s* y);
void zx_sp_IDPEntry_PUT_Loc(struct zx_sp_IDPEntry_s* x, struct zx_str_s* y);

/* -------------------------- sp_IDPList -------------------------- */
/* refby( zx_sp_Scoping_s ) */
#ifndef zx_sp_IDPList_EXT
#define zx_sp_IDPList_EXT
#endif

struct zx_sp_IDPList_s* zx_DEC_sp_IDPList(struct zx_ctx* c);
struct zx_sp_IDPList_s* zx_NEW_sp_IDPList(struct zx_ctx* c);
struct zx_sp_IDPList_s* zx_DEEP_CLONE_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, int dup_strs);
void zx_DUP_STRS_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x);
void zx_FREE_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, int free_strs);
int zx_WALK_SO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_IDPList(struct zx_sp_IDPList_s* x);
char* zx_ENC_SO_sp_IDPList(struct zx_sp_IDPList_s* x, char* p);
char* zx_ENC_WO_sp_IDPList(struct zx_sp_IDPList_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x);

struct zx_sp_IDPList_s {
  ZX_ELEM_EXT
  zx_sp_IDPList_EXT
  struct zx_sp_IDPEntry_s* IDPEntry;	/* {1,-1} nada */
  struct zx_elem_s* GetComplete;	/* {0,1} xs:anyURI */
};

struct zx_sp_IDPEntry_s* zx_sp_IDPList_GET_IDPEntry(struct zx_sp_IDPList_s* x, int n);
struct zx_elem_s* zx_sp_IDPList_GET_GetComplete(struct zx_sp_IDPList_s* x, int n);
int zx_sp_IDPList_NUM_IDPEntry(struct zx_sp_IDPList_s* x);
int zx_sp_IDPList_NUM_GetComplete(struct zx_sp_IDPList_s* x);
struct zx_sp_IDPEntry_s* zx_sp_IDPList_POP_IDPEntry(struct zx_sp_IDPList_s* x);
struct zx_elem_s* zx_sp_IDPList_POP_GetComplete(struct zx_sp_IDPList_s* x);
void zx_sp_IDPList_PUSH_IDPEntry(struct zx_sp_IDPList_s* x, struct zx_sp_IDPEntry_s* y);
void zx_sp_IDPList_PUSH_GetComplete(struct zx_sp_IDPList_s* x, struct zx_elem_s* y);
void zx_sp_IDPList_PUT_IDPEntry(struct zx_sp_IDPList_s* x, int n, struct zx_sp_IDPEntry_s* y);
void zx_sp_IDPList_PUT_GetComplete(struct zx_sp_IDPList_s* x, int n, struct zx_elem_s* y);
void zx_sp_IDPList_ADD_IDPEntry(struct zx_sp_IDPList_s* x, int n, struct zx_sp_IDPEntry_s* z);
void zx_sp_IDPList_ADD_GetComplete(struct zx_sp_IDPList_s* x, int n, struct zx_elem_s* z);
void zx_sp_IDPList_DEL_IDPEntry(struct zx_sp_IDPList_s* x, int n);
void zx_sp_IDPList_DEL_GetComplete(struct zx_sp_IDPList_s* x, int n);
void zx_sp_IDPList_REV_IDPEntry(struct zx_sp_IDPList_s* x);
void zx_sp_IDPList_REV_GetComplete(struct zx_sp_IDPList_s* x);

/* -------------------------- sp_LogoutRequest -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_LogoutRequest_EXT
#define zx_sp_LogoutRequest_EXT
#endif

struct zx_sp_LogoutRequest_s* zx_DEC_sp_LogoutRequest(struct zx_ctx* c);
struct zx_sp_LogoutRequest_s* zx_NEW_sp_LogoutRequest(struct zx_ctx* c);
struct zx_sp_LogoutRequest_s* zx_DEEP_CLONE_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x);
void zx_FREE_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, int free_strs);
int zx_WALK_SO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_LogoutRequest(struct zx_sp_LogoutRequest_s* x);
char* zx_ENC_SO_sp_LogoutRequest(struct zx_sp_LogoutRequest_s* x, char* p);
char* zx_ENC_WO_sp_LogoutRequest(struct zx_sp_LogoutRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x);

struct zx_sp_LogoutRequest_s {
  ZX_ELEM_EXT
  zx_sp_LogoutRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_elem_s* SessionIndex;	/* {0,-1} xs:string */
  struct zx_str_s* Reason;	/* {0,1} attribute xs:string */
  struct zx_str_s* NotOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

struct zx_str_s* zx_sp_LogoutRequest_GET_ID(struct zx_sp_LogoutRequest_s* x);
struct zx_str_s* zx_sp_LogoutRequest_GET_Version(struct zx_sp_LogoutRequest_s* x);
struct zx_str_s* zx_sp_LogoutRequest_GET_IssueInstant(struct zx_sp_LogoutRequest_s* x);
struct zx_str_s* zx_sp_LogoutRequest_GET_Destination(struct zx_sp_LogoutRequest_s* x);
struct zx_str_s* zx_sp_LogoutRequest_GET_Consent(struct zx_sp_LogoutRequest_s* x);
struct zx_str_s* zx_sp_LogoutRequest_GET_Reason(struct zx_sp_LogoutRequest_s* x);
struct zx_str_s* zx_sp_LogoutRequest_GET_NotOnOrAfter(struct zx_sp_LogoutRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_LogoutRequest_GET_Issuer(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_LogoutRequest_GET_Signature(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_LogoutRequest_GET_Extensions(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_sa_BaseID_s* zx_sp_LogoutRequest_GET_BaseID(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_sa_NameID_s* zx_sp_LogoutRequest_GET_NameID(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sp_LogoutRequest_GET_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n);
struct zx_elem_s* zx_sp_LogoutRequest_GET_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n);
int zx_sp_LogoutRequest_NUM_Issuer(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_Signature(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_Extensions(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_BaseID(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_NameID(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_EncryptedID(struct zx_sp_LogoutRequest_s* x);
int zx_sp_LogoutRequest_NUM_SessionIndex(struct zx_sp_LogoutRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_LogoutRequest_POP_Issuer(struct zx_sp_LogoutRequest_s* x);
struct zx_ds_Signature_s* zx_sp_LogoutRequest_POP_Signature(struct zx_sp_LogoutRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_LogoutRequest_POP_Extensions(struct zx_sp_LogoutRequest_s* x);
struct zx_sa_BaseID_s* zx_sp_LogoutRequest_POP_BaseID(struct zx_sp_LogoutRequest_s* x);
struct zx_sa_NameID_s* zx_sp_LogoutRequest_POP_NameID(struct zx_sp_LogoutRequest_s* x);
struct zx_sa_EncryptedID_s* zx_sp_LogoutRequest_POP_EncryptedID(struct zx_sp_LogoutRequest_s* x);
struct zx_elem_s* zx_sp_LogoutRequest_POP_SessionIndex(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_PUSH_Issuer(struct zx_sp_LogoutRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_LogoutRequest_PUSH_Signature(struct zx_sp_LogoutRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_LogoutRequest_PUSH_Extensions(struct zx_sp_LogoutRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_LogoutRequest_PUSH_BaseID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_BaseID_s* y);
void zx_sp_LogoutRequest_PUSH_NameID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_NameID_s* y);
void zx_sp_LogoutRequest_PUSH_EncryptedID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sp_LogoutRequest_PUSH_SessionIndex(struct zx_sp_LogoutRequest_s* x, struct zx_elem_s* y);
void zx_sp_LogoutRequest_PUT_ID(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y);
void zx_sp_LogoutRequest_PUT_Version(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y);
void zx_sp_LogoutRequest_PUT_IssueInstant(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y);
void zx_sp_LogoutRequest_PUT_Destination(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y);
void zx_sp_LogoutRequest_PUT_Consent(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y);
void zx_sp_LogoutRequest_PUT_Reason(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y);
void zx_sp_LogoutRequest_PUT_NotOnOrAfter(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y);
void zx_sp_LogoutRequest_PUT_Issuer(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_LogoutRequest_PUT_Signature(struct zx_sp_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_LogoutRequest_PUT_Extensions(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_LogoutRequest_PUT_BaseID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_BaseID_s* y);
void zx_sp_LogoutRequest_PUT_NameID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sp_LogoutRequest_PUT_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sp_LogoutRequest_PUT_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n, struct zx_elem_s* y);
void zx_sp_LogoutRequest_ADD_Issuer(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_LogoutRequest_ADD_Signature(struct zx_sp_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_LogoutRequest_ADD_Extensions(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_LogoutRequest_ADD_BaseID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_BaseID_s* z);
void zx_sp_LogoutRequest_ADD_NameID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sp_LogoutRequest_ADD_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sp_LogoutRequest_ADD_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n, struct zx_elem_s* z);
void zx_sp_LogoutRequest_DEL_Issuer(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_Signature(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_Extensions(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_BaseID(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_NameID(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_DEL_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n);
void zx_sp_LogoutRequest_REV_Issuer(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_Signature(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_Extensions(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_BaseID(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_NameID(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_EncryptedID(struct zx_sp_LogoutRequest_s* x);
void zx_sp_LogoutRequest_REV_SessionIndex(struct zx_sp_LogoutRequest_s* x);

/* -------------------------- sp_LogoutResponse -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_LogoutResponse_EXT
#define zx_sp_LogoutResponse_EXT
#endif

struct zx_sp_LogoutResponse_s* zx_DEC_sp_LogoutResponse(struct zx_ctx* c);
struct zx_sp_LogoutResponse_s* zx_NEW_sp_LogoutResponse(struct zx_ctx* c);
struct zx_sp_LogoutResponse_s* zx_DEEP_CLONE_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, int dup_strs);
void zx_DUP_STRS_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x);
void zx_FREE_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, int free_strs);
int zx_WALK_SO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_LogoutResponse(struct zx_sp_LogoutResponse_s* x);
char* zx_ENC_SO_sp_LogoutResponse(struct zx_sp_LogoutResponse_s* x, char* p);
char* zx_ENC_WO_sp_LogoutResponse(struct zx_sp_LogoutResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x);

struct zx_sp_LogoutResponse_s {
  ZX_ELEM_EXT
  zx_sp_LogoutResponse_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sp_LogoutResponse_GET_ID(struct zx_sp_LogoutResponse_s* x);
struct zx_str_s* zx_sp_LogoutResponse_GET_InResponseTo(struct zx_sp_LogoutResponse_s* x);
struct zx_str_s* zx_sp_LogoutResponse_GET_Version(struct zx_sp_LogoutResponse_s* x);
struct zx_str_s* zx_sp_LogoutResponse_GET_IssueInstant(struct zx_sp_LogoutResponse_s* x);
struct zx_str_s* zx_sp_LogoutResponse_GET_Destination(struct zx_sp_LogoutResponse_s* x);
struct zx_str_s* zx_sp_LogoutResponse_GET_Consent(struct zx_sp_LogoutResponse_s* x);
struct zx_sa_Issuer_s* zx_sp_LogoutResponse_GET_Issuer(struct zx_sp_LogoutResponse_s* x, int n);
struct zx_ds_Signature_s* zx_sp_LogoutResponse_GET_Signature(struct zx_sp_LogoutResponse_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_LogoutResponse_GET_Extensions(struct zx_sp_LogoutResponse_s* x, int n);
struct zx_sp_Status_s* zx_sp_LogoutResponse_GET_Status(struct zx_sp_LogoutResponse_s* x, int n);
int zx_sp_LogoutResponse_NUM_Issuer(struct zx_sp_LogoutResponse_s* x);
int zx_sp_LogoutResponse_NUM_Signature(struct zx_sp_LogoutResponse_s* x);
int zx_sp_LogoutResponse_NUM_Extensions(struct zx_sp_LogoutResponse_s* x);
int zx_sp_LogoutResponse_NUM_Status(struct zx_sp_LogoutResponse_s* x);
struct zx_sa_Issuer_s* zx_sp_LogoutResponse_POP_Issuer(struct zx_sp_LogoutResponse_s* x);
struct zx_ds_Signature_s* zx_sp_LogoutResponse_POP_Signature(struct zx_sp_LogoutResponse_s* x);
struct zx_sp_Extensions_s* zx_sp_LogoutResponse_POP_Extensions(struct zx_sp_LogoutResponse_s* x);
struct zx_sp_Status_s* zx_sp_LogoutResponse_POP_Status(struct zx_sp_LogoutResponse_s* x);
void zx_sp_LogoutResponse_PUSH_Issuer(struct zx_sp_LogoutResponse_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_LogoutResponse_PUSH_Signature(struct zx_sp_LogoutResponse_s* x, struct zx_ds_Signature_s* y);
void zx_sp_LogoutResponse_PUSH_Extensions(struct zx_sp_LogoutResponse_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_LogoutResponse_PUSH_Status(struct zx_sp_LogoutResponse_s* x, struct zx_sp_Status_s* y);
void zx_sp_LogoutResponse_PUT_ID(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y);
void zx_sp_LogoutResponse_PUT_InResponseTo(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y);
void zx_sp_LogoutResponse_PUT_Version(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y);
void zx_sp_LogoutResponse_PUT_IssueInstant(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y);
void zx_sp_LogoutResponse_PUT_Destination(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y);
void zx_sp_LogoutResponse_PUT_Consent(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y);
void zx_sp_LogoutResponse_PUT_Issuer(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_LogoutResponse_PUT_Signature(struct zx_sp_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_LogoutResponse_PUT_Extensions(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_LogoutResponse_PUT_Status(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Status_s* y);
void zx_sp_LogoutResponse_ADD_Issuer(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_LogoutResponse_ADD_Signature(struct zx_sp_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_LogoutResponse_ADD_Extensions(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_LogoutResponse_ADD_Status(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Status_s* z);
void zx_sp_LogoutResponse_DEL_Issuer(struct zx_sp_LogoutResponse_s* x, int n);
void zx_sp_LogoutResponse_DEL_Signature(struct zx_sp_LogoutResponse_s* x, int n);
void zx_sp_LogoutResponse_DEL_Extensions(struct zx_sp_LogoutResponse_s* x, int n);
void zx_sp_LogoutResponse_DEL_Status(struct zx_sp_LogoutResponse_s* x, int n);
void zx_sp_LogoutResponse_REV_Issuer(struct zx_sp_LogoutResponse_s* x);
void zx_sp_LogoutResponse_REV_Signature(struct zx_sp_LogoutResponse_s* x);
void zx_sp_LogoutResponse_REV_Extensions(struct zx_sp_LogoutResponse_s* x);
void zx_sp_LogoutResponse_REV_Status(struct zx_sp_LogoutResponse_s* x);

/* -------------------------- sp_ManageNameIDRequest -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_ManageNameIDRequest_EXT
#define zx_sp_ManageNameIDRequest_EXT
#endif

struct zx_sp_ManageNameIDRequest_s* zx_DEC_sp_ManageNameIDRequest(struct zx_ctx* c);
struct zx_sp_ManageNameIDRequest_s* zx_NEW_sp_ManageNameIDRequest(struct zx_ctx* c);
struct zx_sp_ManageNameIDRequest_s* zx_DEEP_CLONE_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x);
void zx_FREE_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, int free_strs);
int zx_WALK_SO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_ManageNameIDRequest(struct zx_sp_ManageNameIDRequest_s* x);
char* zx_ENC_SO_sp_ManageNameIDRequest(struct zx_sp_ManageNameIDRequest_s* x, char* p);
char* zx_ENC_WO_sp_ManageNameIDRequest(struct zx_sp_ManageNameIDRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x);

struct zx_sp_ManageNameIDRequest_s {
  ZX_ELEM_EXT
  zx_sp_ManageNameIDRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_elem_s* NewID;	/* {0,1} xs:string */
  struct zx_sp_NewEncryptedID_s* NewEncryptedID;	/* {0,1} nada */
  struct zx_elem_s* Terminate;	/* {0,1} sp:TerminateType */
};

struct zx_str_s* zx_sp_ManageNameIDRequest_GET_ID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_Version(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_IssueInstant(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_Destination(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_Consent(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_ManageNameIDRequest_GET_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_ManageNameIDRequest_GET_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_ManageNameIDRequest_GET_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_sa_NameID_s* zx_sp_ManageNameIDRequest_GET_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sp_ManageNameIDRequest_GET_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_elem_s* zx_sp_ManageNameIDRequest_GET_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_sp_NewEncryptedID_s* zx_sp_ManageNameIDRequest_GET_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n);
struct zx_elem_s* zx_sp_ManageNameIDRequest_GET_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n);
int zx_sp_ManageNameIDRequest_NUM_Issuer(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_Signature(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_Extensions(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_NameID(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_NewID(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
int zx_sp_ManageNameIDRequest_NUM_Terminate(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_ManageNameIDRequest_POP_Issuer(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_ds_Signature_s* zx_sp_ManageNameIDRequest_POP_Signature(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_ManageNameIDRequest_POP_Extensions(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sa_NameID_s* zx_sp_ManageNameIDRequest_POP_NameID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sa_EncryptedID_s* zx_sp_ManageNameIDRequest_POP_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_elem_s* zx_sp_ManageNameIDRequest_POP_NewID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_sp_NewEncryptedID_s* zx_sp_ManageNameIDRequest_POP_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
struct zx_elem_s* zx_sp_ManageNameIDRequest_POP_Terminate(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_PUSH_Issuer(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_ManageNameIDRequest_PUSH_Signature(struct zx_sp_ManageNameIDRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_ManageNameIDRequest_PUSH_Extensions(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_ManageNameIDRequest_PUSH_NameID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_NameID_s* y);
void zx_sp_ManageNameIDRequest_PUSH_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sp_ManageNameIDRequest_PUSH_NewID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_elem_s* y);
void zx_sp_ManageNameIDRequest_PUSH_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sp_NewEncryptedID_s* y);
void zx_sp_ManageNameIDRequest_PUSH_Terminate(struct zx_sp_ManageNameIDRequest_s* x, struct zx_elem_s* y);
void zx_sp_ManageNameIDRequest_PUT_ID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDRequest_PUT_Version(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDRequest_PUT_IssueInstant(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDRequest_PUT_Destination(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDRequest_PUT_Consent(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDRequest_PUT_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_ManageNameIDRequest_PUT_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_ManageNameIDRequest_PUT_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_ManageNameIDRequest_PUT_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sp_ManageNameIDRequest_PUT_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sp_ManageNameIDRequest_PUT_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* y);
void zx_sp_ManageNameIDRequest_PUT_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_NewEncryptedID_s* y);
void zx_sp_ManageNameIDRequest_PUT_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* y);
void zx_sp_ManageNameIDRequest_ADD_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_ManageNameIDRequest_ADD_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_ManageNameIDRequest_ADD_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_ManageNameIDRequest_ADD_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sp_ManageNameIDRequest_ADD_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sp_ManageNameIDRequest_ADD_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z);
void zx_sp_ManageNameIDRequest_ADD_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_NewEncryptedID_s* z);
void zx_sp_ManageNameIDRequest_ADD_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z);
void zx_sp_ManageNameIDRequest_DEL_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_DEL_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n);
void zx_sp_ManageNameIDRequest_REV_Issuer(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_Signature(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_Extensions(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_NameID(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_NewID(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x);
void zx_sp_ManageNameIDRequest_REV_Terminate(struct zx_sp_ManageNameIDRequest_s* x);

/* -------------------------- sp_ManageNameIDResponse -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_ManageNameIDResponse_EXT
#define zx_sp_ManageNameIDResponse_EXT
#endif

struct zx_sp_ManageNameIDResponse_s* zx_DEC_sp_ManageNameIDResponse(struct zx_ctx* c);
struct zx_sp_ManageNameIDResponse_s* zx_NEW_sp_ManageNameIDResponse(struct zx_ctx* c);
struct zx_sp_ManageNameIDResponse_s* zx_DEEP_CLONE_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, int dup_strs);
void zx_DUP_STRS_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x);
void zx_FREE_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, int free_strs);
int zx_WALK_SO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_ManageNameIDResponse(struct zx_sp_ManageNameIDResponse_s* x);
char* zx_ENC_SO_sp_ManageNameIDResponse(struct zx_sp_ManageNameIDResponse_s* x, char* p);
char* zx_ENC_WO_sp_ManageNameIDResponse(struct zx_sp_ManageNameIDResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x);

struct zx_sp_ManageNameIDResponse_s {
  ZX_ELEM_EXT
  zx_sp_ManageNameIDResponse_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_sp_ManageNameIDResponse_GET_ID(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_InResponseTo(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_Version(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_IssueInstant(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_Destination(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_Consent(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_sa_Issuer_s* zx_sp_ManageNameIDResponse_GET_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n);
struct zx_ds_Signature_s* zx_sp_ManageNameIDResponse_GET_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_ManageNameIDResponse_GET_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n);
struct zx_sp_Status_s* zx_sp_ManageNameIDResponse_GET_Status(struct zx_sp_ManageNameIDResponse_s* x, int n);
int zx_sp_ManageNameIDResponse_NUM_Issuer(struct zx_sp_ManageNameIDResponse_s* x);
int zx_sp_ManageNameIDResponse_NUM_Signature(struct zx_sp_ManageNameIDResponse_s* x);
int zx_sp_ManageNameIDResponse_NUM_Extensions(struct zx_sp_ManageNameIDResponse_s* x);
int zx_sp_ManageNameIDResponse_NUM_Status(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_sa_Issuer_s* zx_sp_ManageNameIDResponse_POP_Issuer(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_ds_Signature_s* zx_sp_ManageNameIDResponse_POP_Signature(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_sp_Extensions_s* zx_sp_ManageNameIDResponse_POP_Extensions(struct zx_sp_ManageNameIDResponse_s* x);
struct zx_sp_Status_s* zx_sp_ManageNameIDResponse_POP_Status(struct zx_sp_ManageNameIDResponse_s* x);
void zx_sp_ManageNameIDResponse_PUSH_Issuer(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_ManageNameIDResponse_PUSH_Signature(struct zx_sp_ManageNameIDResponse_s* x, struct zx_ds_Signature_s* y);
void zx_sp_ManageNameIDResponse_PUSH_Extensions(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_ManageNameIDResponse_PUSH_Status(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sp_Status_s* y);
void zx_sp_ManageNameIDResponse_PUT_ID(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDResponse_PUT_InResponseTo(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDResponse_PUT_Version(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDResponse_PUT_IssueInstant(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDResponse_PUT_Destination(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDResponse_PUT_Consent(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y);
void zx_sp_ManageNameIDResponse_PUT_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_ManageNameIDResponse_PUT_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_ManageNameIDResponse_PUT_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_ManageNameIDResponse_PUT_Status(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Status_s* y);
void zx_sp_ManageNameIDResponse_ADD_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_ManageNameIDResponse_ADD_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_ManageNameIDResponse_ADD_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_ManageNameIDResponse_ADD_Status(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Status_s* z);
void zx_sp_ManageNameIDResponse_DEL_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n);
void zx_sp_ManageNameIDResponse_DEL_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n);
void zx_sp_ManageNameIDResponse_DEL_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n);
void zx_sp_ManageNameIDResponse_DEL_Status(struct zx_sp_ManageNameIDResponse_s* x, int n);
void zx_sp_ManageNameIDResponse_REV_Issuer(struct zx_sp_ManageNameIDResponse_s* x);
void zx_sp_ManageNameIDResponse_REV_Signature(struct zx_sp_ManageNameIDResponse_s* x);
void zx_sp_ManageNameIDResponse_REV_Extensions(struct zx_sp_ManageNameIDResponse_s* x);
void zx_sp_ManageNameIDResponse_REV_Status(struct zx_sp_ManageNameIDResponse_s* x);

/* -------------------------- sp_NameIDMappingRequest -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_NameIDMappingRequest_EXT
#define zx_sp_NameIDMappingRequest_EXT
#endif

struct zx_sp_NameIDMappingRequest_s* zx_DEC_sp_NameIDMappingRequest(struct zx_ctx* c);
struct zx_sp_NameIDMappingRequest_s* zx_NEW_sp_NameIDMappingRequest(struct zx_ctx* c);
struct zx_sp_NameIDMappingRequest_s* zx_DEEP_CLONE_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, int dup_strs);
void zx_DUP_STRS_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x);
void zx_FREE_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, int free_strs);
int zx_WALK_SO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_NameIDMappingRequest(struct zx_sp_NameIDMappingRequest_s* x);
char* zx_ENC_SO_sp_NameIDMappingRequest(struct zx_sp_NameIDMappingRequest_s* x, char* p);
char* zx_ENC_WO_sp_NameIDMappingRequest(struct zx_sp_NameIDMappingRequest_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x);

struct zx_sp_NameIDMappingRequest_s {
  ZX_ELEM_EXT
  zx_sp_NameIDMappingRequest_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_BaseID_s* BaseID;	/* {0,1} nada */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
  struct zx_sp_NameIDPolicy_s* NameIDPolicy;	/* {1,1} nada */
};

struct zx_str_s* zx_sp_NameIDMappingRequest_GET_ID(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_Version(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_IssueInstant(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_Destination(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_Consent(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_NameIDMappingRequest_GET_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_ds_Signature_s* zx_sp_NameIDMappingRequest_GET_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_NameIDMappingRequest_GET_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sa_BaseID_s* zx_sp_NameIDMappingRequest_GET_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sa_NameID_s* zx_sp_NameIDMappingRequest_GET_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingRequest_GET_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n);
struct zx_sp_NameIDPolicy_s* zx_sp_NameIDMappingRequest_GET_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n);
int zx_sp_NameIDMappingRequest_NUM_Issuer(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_Signature(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_Extensions(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_BaseID(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_NameID(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x);
int zx_sp_NameIDMappingRequest_NUM_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sa_Issuer_s* zx_sp_NameIDMappingRequest_POP_Issuer(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_ds_Signature_s* zx_sp_NameIDMappingRequest_POP_Signature(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sp_Extensions_s* zx_sp_NameIDMappingRequest_POP_Extensions(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sa_BaseID_s* zx_sp_NameIDMappingRequest_POP_BaseID(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sa_NameID_s* zx_sp_NameIDMappingRequest_POP_NameID(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingRequest_POP_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x);
struct zx_sp_NameIDPolicy_s* zx_sp_NameIDMappingRequest_POP_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_PUSH_Issuer(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_NameIDMappingRequest_PUSH_Signature(struct zx_sp_NameIDMappingRequest_s* x, struct zx_ds_Signature_s* y);
void zx_sp_NameIDMappingRequest_PUSH_Extensions(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_NameIDMappingRequest_PUSH_BaseID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_BaseID_s* y);
void zx_sp_NameIDMappingRequest_PUSH_NameID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_NameID_s* y);
void zx_sp_NameIDMappingRequest_PUSH_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sp_NameIDMappingRequest_PUSH_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sp_NameIDPolicy_s* y);
void zx_sp_NameIDMappingRequest_PUT_ID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingRequest_PUT_Version(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingRequest_PUT_IssueInstant(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingRequest_PUT_Destination(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingRequest_PUT_Consent(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingRequest_PUT_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_NameIDMappingRequest_PUT_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_NameIDMappingRequest_PUT_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_NameIDMappingRequest_PUT_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_BaseID_s* y);
void zx_sp_NameIDMappingRequest_PUT_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sp_NameIDMappingRequest_PUT_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sp_NameIDMappingRequest_PUT_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* y);
void zx_sp_NameIDMappingRequest_ADD_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_NameIDMappingRequest_ADD_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_NameIDMappingRequest_ADD_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_NameIDMappingRequest_ADD_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_BaseID_s* z);
void zx_sp_NameIDMappingRequest_ADD_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sp_NameIDMappingRequest_ADD_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sp_NameIDMappingRequest_ADD_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z);
void zx_sp_NameIDMappingRequest_DEL_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_DEL_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n);
void zx_sp_NameIDMappingRequest_REV_Issuer(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_Signature(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_Extensions(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_BaseID(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_NameID(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x);
void zx_sp_NameIDMappingRequest_REV_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x);

/* -------------------------- sp_NameIDMappingResponse -------------------------- */
/* refby( zx_se_Body_s ) */
#ifndef zx_sp_NameIDMappingResponse_EXT
#define zx_sp_NameIDMappingResponse_EXT
#endif

struct zx_sp_NameIDMappingResponse_s* zx_DEC_sp_NameIDMappingResponse(struct zx_ctx* c);
struct zx_sp_NameIDMappingResponse_s* zx_NEW_sp_NameIDMappingResponse(struct zx_ctx* c);
struct zx_sp_NameIDMappingResponse_s* zx_DEEP_CLONE_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, int dup_strs);
void zx_DUP_STRS_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x);
void zx_FREE_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, int free_strs);
int zx_WALK_SO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_NameIDMappingResponse(struct zx_sp_NameIDMappingResponse_s* x);
char* zx_ENC_SO_sp_NameIDMappingResponse(struct zx_sp_NameIDMappingResponse_s* x, char* p);
char* zx_ENC_WO_sp_NameIDMappingResponse(struct zx_sp_NameIDMappingResponse_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x);

struct zx_sp_NameIDMappingResponse_s {
  ZX_ELEM_EXT
  zx_sp_NameIDMappingResponse_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_NameID_s* NameID;	/* {0,1} nada */
  struct zx_sa_EncryptedID_s* EncryptedID;	/* {0,1} nada */
};

struct zx_str_s* zx_sp_NameIDMappingResponse_GET_ID(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_InResponseTo(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_Version(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_IssueInstant(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_Destination(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_Consent(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sa_Issuer_s* zx_sp_NameIDMappingResponse_GET_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_ds_Signature_s* zx_sp_NameIDMappingResponse_GET_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_NameIDMappingResponse_GET_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_sp_Status_s* zx_sp_NameIDMappingResponse_GET_Status(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_sa_NameID_s* zx_sp_NameIDMappingResponse_GET_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n);
struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingResponse_GET_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n);
int zx_sp_NameIDMappingResponse_NUM_Issuer(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_Signature(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_Extensions(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_Status(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_NameID(struct zx_sp_NameIDMappingResponse_s* x);
int zx_sp_NameIDMappingResponse_NUM_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sa_Issuer_s* zx_sp_NameIDMappingResponse_POP_Issuer(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_ds_Signature_s* zx_sp_NameIDMappingResponse_POP_Signature(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sp_Extensions_s* zx_sp_NameIDMappingResponse_POP_Extensions(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sp_Status_s* zx_sp_NameIDMappingResponse_POP_Status(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sa_NameID_s* zx_sp_NameIDMappingResponse_POP_NameID(struct zx_sp_NameIDMappingResponse_s* x);
struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingResponse_POP_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_PUSH_Issuer(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_NameIDMappingResponse_PUSH_Signature(struct zx_sp_NameIDMappingResponse_s* x, struct zx_ds_Signature_s* y);
void zx_sp_NameIDMappingResponse_PUSH_Extensions(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_NameIDMappingResponse_PUSH_Status(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sp_Status_s* y);
void zx_sp_NameIDMappingResponse_PUSH_NameID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_NameID_s* y);
void zx_sp_NameIDMappingResponse_PUSH_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_EncryptedID_s* y);
void zx_sp_NameIDMappingResponse_PUT_ID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingResponse_PUT_InResponseTo(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingResponse_PUT_Version(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingResponse_PUT_IssueInstant(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingResponse_PUT_Destination(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingResponse_PUT_Consent(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y);
void zx_sp_NameIDMappingResponse_PUT_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_NameIDMappingResponse_PUT_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_NameIDMappingResponse_PUT_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_NameIDMappingResponse_PUT_Status(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Status_s* y);
void zx_sp_NameIDMappingResponse_PUT_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_NameID_s* y);
void zx_sp_NameIDMappingResponse_PUT_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_EncryptedID_s* y);
void zx_sp_NameIDMappingResponse_ADD_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_NameIDMappingResponse_ADD_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_NameIDMappingResponse_ADD_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_NameIDMappingResponse_ADD_Status(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Status_s* z);
void zx_sp_NameIDMappingResponse_ADD_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_NameID_s* z);
void zx_sp_NameIDMappingResponse_ADD_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_EncryptedID_s* z);
void zx_sp_NameIDMappingResponse_DEL_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_Status(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_DEL_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n);
void zx_sp_NameIDMappingResponse_REV_Issuer(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_Signature(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_Extensions(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_Status(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_NameID(struct zx_sp_NameIDMappingResponse_s* x);
void zx_sp_NameIDMappingResponse_REV_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x);

/* -------------------------- sp_NameIDPolicy -------------------------- */
/* refby( zx_sp_AuthnRequest_s zx_sp_NameIDMappingRequest_s ) */
#ifndef zx_sp_NameIDPolicy_EXT
#define zx_sp_NameIDPolicy_EXT
#endif

struct zx_sp_NameIDPolicy_s* zx_DEC_sp_NameIDPolicy(struct zx_ctx* c);
struct zx_sp_NameIDPolicy_s* zx_NEW_sp_NameIDPolicy(struct zx_ctx* c);
struct zx_sp_NameIDPolicy_s* zx_DEEP_CLONE_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, int dup_strs);
void zx_DUP_STRS_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x);
void zx_FREE_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, int free_strs);
int zx_WALK_SO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_NameIDPolicy(struct zx_sp_NameIDPolicy_s* x);
char* zx_ENC_SO_sp_NameIDPolicy(struct zx_sp_NameIDPolicy_s* x, char* p);
char* zx_ENC_WO_sp_NameIDPolicy(struct zx_sp_NameIDPolicy_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x);

struct zx_sp_NameIDPolicy_s {
  ZX_ELEM_EXT
  zx_sp_NameIDPolicy_EXT
  struct zx_str_s* Format;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* SPNameQualifier;	/* {0,1} attribute xs:string */
  struct zx_str_s* AllowCreate;	/* {0,1} attribute xs:boolean */
};

struct zx_str_s* zx_sp_NameIDPolicy_GET_Format(struct zx_sp_NameIDPolicy_s* x);
struct zx_str_s* zx_sp_NameIDPolicy_GET_SPNameQualifier(struct zx_sp_NameIDPolicy_s* x);
struct zx_str_s* zx_sp_NameIDPolicy_GET_AllowCreate(struct zx_sp_NameIDPolicy_s* x);
void zx_sp_NameIDPolicy_PUT_Format(struct zx_sp_NameIDPolicy_s* x, struct zx_str_s* y);
void zx_sp_NameIDPolicy_PUT_SPNameQualifier(struct zx_sp_NameIDPolicy_s* x, struct zx_str_s* y);
void zx_sp_NameIDPolicy_PUT_AllowCreate(struct zx_sp_NameIDPolicy_s* x, struct zx_str_s* y);

/* -------------------------- sp_NewEncryptedID -------------------------- */
/* refby( zx_sp_ManageNameIDRequest_s ) */
#ifndef zx_sp_NewEncryptedID_EXT
#define zx_sp_NewEncryptedID_EXT
#endif

struct zx_sp_NewEncryptedID_s* zx_DEC_sp_NewEncryptedID(struct zx_ctx* c);
struct zx_sp_NewEncryptedID_s* zx_NEW_sp_NewEncryptedID(struct zx_ctx* c);
struct zx_sp_NewEncryptedID_s* zx_DEEP_CLONE_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, int dup_strs);
void zx_DUP_STRS_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x);
void zx_FREE_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, int free_strs);
int zx_WALK_SO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_NewEncryptedID(struct zx_sp_NewEncryptedID_s* x);
char* zx_ENC_SO_sp_NewEncryptedID(struct zx_sp_NewEncryptedID_s* x, char* p);
char* zx_ENC_WO_sp_NewEncryptedID(struct zx_sp_NewEncryptedID_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x);

struct zx_sp_NewEncryptedID_s {
  ZX_ELEM_EXT
  zx_sp_NewEncryptedID_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {0,-1} nada */
};

struct zx_xenc_EncryptedData_s* zx_sp_NewEncryptedID_GET_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_sp_NewEncryptedID_GET_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n);
int zx_sp_NewEncryptedID_NUM_EncryptedData(struct zx_sp_NewEncryptedID_s* x);
int zx_sp_NewEncryptedID_NUM_EncryptedKey(struct zx_sp_NewEncryptedID_s* x);
struct zx_xenc_EncryptedData_s* zx_sp_NewEncryptedID_POP_EncryptedData(struct zx_sp_NewEncryptedID_s* x);
struct zx_xenc_EncryptedKey_s* zx_sp_NewEncryptedID_POP_EncryptedKey(struct zx_sp_NewEncryptedID_s* x);
void zx_sp_NewEncryptedID_PUSH_EncryptedData(struct zx_sp_NewEncryptedID_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_sp_NewEncryptedID_PUSH_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, struct zx_xenc_EncryptedKey_s* y);
void zx_sp_NewEncryptedID_PUT_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_sp_NewEncryptedID_PUT_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* y);
void zx_sp_NewEncryptedID_ADD_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_sp_NewEncryptedID_ADD_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z);
void zx_sp_NewEncryptedID_DEL_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n);
void zx_sp_NewEncryptedID_DEL_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n);
void zx_sp_NewEncryptedID_REV_EncryptedData(struct zx_sp_NewEncryptedID_s* x);
void zx_sp_NewEncryptedID_REV_EncryptedKey(struct zx_sp_NewEncryptedID_s* x);

/* -------------------------- sp_RequestedAuthnContext -------------------------- */
/* refby( zx_sp_AuthnRequest_s zx_sp_AuthnQuery_s ) */
#ifndef zx_sp_RequestedAuthnContext_EXT
#define zx_sp_RequestedAuthnContext_EXT
#endif

struct zx_sp_RequestedAuthnContext_s* zx_DEC_sp_RequestedAuthnContext(struct zx_ctx* c);
struct zx_sp_RequestedAuthnContext_s* zx_NEW_sp_RequestedAuthnContext(struct zx_ctx* c);
struct zx_sp_RequestedAuthnContext_s* zx_DEEP_CLONE_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, int dup_strs);
void zx_DUP_STRS_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x);
void zx_FREE_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, int free_strs);
int zx_WALK_SO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_RequestedAuthnContext(struct zx_sp_RequestedAuthnContext_s* x);
char* zx_ENC_SO_sp_RequestedAuthnContext(struct zx_sp_RequestedAuthnContext_s* x, char* p);
char* zx_ENC_WO_sp_RequestedAuthnContext(struct zx_sp_RequestedAuthnContext_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x);

struct zx_sp_RequestedAuthnContext_s {
  ZX_ELEM_EXT
  zx_sp_RequestedAuthnContext_EXT
  struct zx_elem_s* AuthnContextClassRef;	/* {0,-1} xs:anyURI */
  struct zx_elem_s* AuthnContextDeclRef;	/* {0,-1} xs:anyURI */
  struct zx_str_s* Comparison;	/* {0,1} attribute sp:AuthnContextComparisonType */
};

struct zx_str_s* zx_sp_RequestedAuthnContext_GET_Comparison(struct zx_sp_RequestedAuthnContext_s* x);
struct zx_elem_s* zx_sp_RequestedAuthnContext_GET_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n);
struct zx_elem_s* zx_sp_RequestedAuthnContext_GET_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n);
int zx_sp_RequestedAuthnContext_NUM_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x);
int zx_sp_RequestedAuthnContext_NUM_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x);
struct zx_elem_s* zx_sp_RequestedAuthnContext_POP_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x);
struct zx_elem_s* zx_sp_RequestedAuthnContext_POP_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x);
void zx_sp_RequestedAuthnContext_PUSH_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, struct zx_elem_s* y);
void zx_sp_RequestedAuthnContext_PUSH_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, struct zx_elem_s* y);
void zx_sp_RequestedAuthnContext_PUT_Comparison(struct zx_sp_RequestedAuthnContext_s* x, struct zx_str_s* y);
void zx_sp_RequestedAuthnContext_PUT_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_sp_RequestedAuthnContext_PUT_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* y);
void zx_sp_RequestedAuthnContext_ADD_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_sp_RequestedAuthnContext_ADD_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z);
void zx_sp_RequestedAuthnContext_DEL_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n);
void zx_sp_RequestedAuthnContext_DEL_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n);
void zx_sp_RequestedAuthnContext_REV_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x);
void zx_sp_RequestedAuthnContext_REV_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x);

/* -------------------------- sp_Response -------------------------- */
/* refby( zx_se_Body_s zx_sp_ArtifactResponse_s ) */
#ifndef zx_sp_Response_EXT
#define zx_sp_Response_EXT
#endif

struct zx_sp_Response_s* zx_DEC_sp_Response(struct zx_ctx* c);
struct zx_sp_Response_s* zx_NEW_sp_Response(struct zx_ctx* c);
struct zx_sp_Response_s* zx_DEEP_CLONE_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, int dup_strs);
void zx_DUP_STRS_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x);
void zx_FREE_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, int free_strs);
int zx_WALK_SO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_Response(struct zx_sp_Response_s* x);
char* zx_ENC_SO_sp_Response(struct zx_sp_Response_s* x, char* p);
char* zx_ENC_WO_sp_Response(struct zx_sp_Response_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x);

struct zx_sp_Response_s {
  ZX_ELEM_EXT
  zx_sp_Response_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_sp_Status_s* Status;	/* {1,1} nada */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_Assertion_s* Assertion;	/* {0,1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,1} nada */
};

struct zx_str_s* zx_sp_Response_GET_ID(struct zx_sp_Response_s* x);
struct zx_str_s* zx_sp_Response_GET_InResponseTo(struct zx_sp_Response_s* x);
struct zx_str_s* zx_sp_Response_GET_Version(struct zx_sp_Response_s* x);
struct zx_str_s* zx_sp_Response_GET_IssueInstant(struct zx_sp_Response_s* x);
struct zx_str_s* zx_sp_Response_GET_Destination(struct zx_sp_Response_s* x);
struct zx_str_s* zx_sp_Response_GET_Consent(struct zx_sp_Response_s* x);
struct zx_sa_Issuer_s* zx_sp_Response_GET_Issuer(struct zx_sp_Response_s* x, int n);
struct zx_ds_Signature_s* zx_sp_Response_GET_Signature(struct zx_sp_Response_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_Response_GET_Extensions(struct zx_sp_Response_s* x, int n);
struct zx_sp_Status_s* zx_sp_Response_GET_Status(struct zx_sp_Response_s* x, int n);
struct zx_sa_Assertion_s* zx_sp_Response_GET_Assertion(struct zx_sp_Response_s* x, int n);
struct zx_sa_EncryptedAssertion_s* zx_sp_Response_GET_EncryptedAssertion(struct zx_sp_Response_s* x, int n);
int zx_sp_Response_NUM_Issuer(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_Signature(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_Extensions(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_Status(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_Assertion(struct zx_sp_Response_s* x);
int zx_sp_Response_NUM_EncryptedAssertion(struct zx_sp_Response_s* x);
struct zx_sa_Issuer_s* zx_sp_Response_POP_Issuer(struct zx_sp_Response_s* x);
struct zx_ds_Signature_s* zx_sp_Response_POP_Signature(struct zx_sp_Response_s* x);
struct zx_sp_Extensions_s* zx_sp_Response_POP_Extensions(struct zx_sp_Response_s* x);
struct zx_sp_Status_s* zx_sp_Response_POP_Status(struct zx_sp_Response_s* x);
struct zx_sa_Assertion_s* zx_sp_Response_POP_Assertion(struct zx_sp_Response_s* x);
struct zx_sa_EncryptedAssertion_s* zx_sp_Response_POP_EncryptedAssertion(struct zx_sp_Response_s* x);
void zx_sp_Response_PUSH_Issuer(struct zx_sp_Response_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_Response_PUSH_Signature(struct zx_sp_Response_s* x, struct zx_ds_Signature_s* y);
void zx_sp_Response_PUSH_Extensions(struct zx_sp_Response_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_Response_PUSH_Status(struct zx_sp_Response_s* x, struct zx_sp_Status_s* y);
void zx_sp_Response_PUSH_Assertion(struct zx_sp_Response_s* x, struct zx_sa_Assertion_s* y);
void zx_sp_Response_PUSH_EncryptedAssertion(struct zx_sp_Response_s* x, struct zx_sa_EncryptedAssertion_s* y);
void zx_sp_Response_PUT_ID(struct zx_sp_Response_s* x, struct zx_str_s* y);
void zx_sp_Response_PUT_InResponseTo(struct zx_sp_Response_s* x, struct zx_str_s* y);
void zx_sp_Response_PUT_Version(struct zx_sp_Response_s* x, struct zx_str_s* y);
void zx_sp_Response_PUT_IssueInstant(struct zx_sp_Response_s* x, struct zx_str_s* y);
void zx_sp_Response_PUT_Destination(struct zx_sp_Response_s* x, struct zx_str_s* y);
void zx_sp_Response_PUT_Consent(struct zx_sp_Response_s* x, struct zx_str_s* y);
void zx_sp_Response_PUT_Issuer(struct zx_sp_Response_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_Response_PUT_Signature(struct zx_sp_Response_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_Response_PUT_Extensions(struct zx_sp_Response_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_Response_PUT_Status(struct zx_sp_Response_s* x, int n, struct zx_sp_Status_s* y);
void zx_sp_Response_PUT_Assertion(struct zx_sp_Response_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_sp_Response_PUT_EncryptedAssertion(struct zx_sp_Response_s* x, int n, struct zx_sa_EncryptedAssertion_s* y);
void zx_sp_Response_ADD_Issuer(struct zx_sp_Response_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_Response_ADD_Signature(struct zx_sp_Response_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_Response_ADD_Extensions(struct zx_sp_Response_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_Response_ADD_Status(struct zx_sp_Response_s* x, int n, struct zx_sp_Status_s* z);
void zx_sp_Response_ADD_Assertion(struct zx_sp_Response_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_sp_Response_ADD_EncryptedAssertion(struct zx_sp_Response_s* x, int n, struct zx_sa_EncryptedAssertion_s* z);
void zx_sp_Response_DEL_Issuer(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_Signature(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_Extensions(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_Status(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_Assertion(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_DEL_EncryptedAssertion(struct zx_sp_Response_s* x, int n);
void zx_sp_Response_REV_Issuer(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_Signature(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_Extensions(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_Status(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_Assertion(struct zx_sp_Response_s* x);
void zx_sp_Response_REV_EncryptedAssertion(struct zx_sp_Response_s* x);

/* -------------------------- sp_Scoping -------------------------- */
/* refby( zx_sp_AuthnRequest_s ) */
#ifndef zx_sp_Scoping_EXT
#define zx_sp_Scoping_EXT
#endif

struct zx_sp_Scoping_s* zx_DEC_sp_Scoping(struct zx_ctx* c);
struct zx_sp_Scoping_s* zx_NEW_sp_Scoping(struct zx_ctx* c);
struct zx_sp_Scoping_s* zx_DEEP_CLONE_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, int dup_strs);
void zx_DUP_STRS_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x);
void zx_FREE_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, int free_strs);
int zx_WALK_SO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_Scoping(struct zx_sp_Scoping_s* x);
char* zx_ENC_SO_sp_Scoping(struct zx_sp_Scoping_s* x, char* p);
char* zx_ENC_WO_sp_Scoping(struct zx_sp_Scoping_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x);

struct zx_sp_Scoping_s {
  ZX_ELEM_EXT
  zx_sp_Scoping_EXT
  struct zx_sp_IDPList_s* IDPList;	/* {0,1} nada */
  struct zx_elem_s* RequesterID;	/* {0,-1} xs:anyURI */
  struct zx_str_s* ProxyCount;	/* {0,1} attribute xs:nonNegativeInteger */
};

struct zx_str_s* zx_sp_Scoping_GET_ProxyCount(struct zx_sp_Scoping_s* x);
struct zx_sp_IDPList_s* zx_sp_Scoping_GET_IDPList(struct zx_sp_Scoping_s* x, int n);
struct zx_elem_s* zx_sp_Scoping_GET_RequesterID(struct zx_sp_Scoping_s* x, int n);
int zx_sp_Scoping_NUM_IDPList(struct zx_sp_Scoping_s* x);
int zx_sp_Scoping_NUM_RequesterID(struct zx_sp_Scoping_s* x);
struct zx_sp_IDPList_s* zx_sp_Scoping_POP_IDPList(struct zx_sp_Scoping_s* x);
struct zx_elem_s* zx_sp_Scoping_POP_RequesterID(struct zx_sp_Scoping_s* x);
void zx_sp_Scoping_PUSH_IDPList(struct zx_sp_Scoping_s* x, struct zx_sp_IDPList_s* y);
void zx_sp_Scoping_PUSH_RequesterID(struct zx_sp_Scoping_s* x, struct zx_elem_s* y);
void zx_sp_Scoping_PUT_ProxyCount(struct zx_sp_Scoping_s* x, struct zx_str_s* y);
void zx_sp_Scoping_PUT_IDPList(struct zx_sp_Scoping_s* x, int n, struct zx_sp_IDPList_s* y);
void zx_sp_Scoping_PUT_RequesterID(struct zx_sp_Scoping_s* x, int n, struct zx_elem_s* y);
void zx_sp_Scoping_ADD_IDPList(struct zx_sp_Scoping_s* x, int n, struct zx_sp_IDPList_s* z);
void zx_sp_Scoping_ADD_RequesterID(struct zx_sp_Scoping_s* x, int n, struct zx_elem_s* z);
void zx_sp_Scoping_DEL_IDPList(struct zx_sp_Scoping_s* x, int n);
void zx_sp_Scoping_DEL_RequesterID(struct zx_sp_Scoping_s* x, int n);
void zx_sp_Scoping_REV_IDPList(struct zx_sp_Scoping_s* x);
void zx_sp_Scoping_REV_RequesterID(struct zx_sp_Scoping_s* x);

/* -------------------------- sp_Status -------------------------- */
/* refby( zx_sp_ArtifactResponse_s zx_sp_NameIDMappingResponse_s zx_sp_ManageNameIDResponse_s zx_sp_LogoutResponse_s zx_sp_Response_s ) */
#ifndef zx_sp_Status_EXT
#define zx_sp_Status_EXT
#endif

struct zx_sp_Status_s* zx_DEC_sp_Status(struct zx_ctx* c);
struct zx_sp_Status_s* zx_NEW_sp_Status(struct zx_ctx* c);
struct zx_sp_Status_s* zx_DEEP_CLONE_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, int dup_strs);
void zx_DUP_STRS_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x);
void zx_FREE_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, int free_strs);
int zx_WALK_SO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_Status(struct zx_sp_Status_s* x);
char* zx_ENC_SO_sp_Status(struct zx_sp_Status_s* x, char* p);
char* zx_ENC_WO_sp_Status(struct zx_sp_Status_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x);

struct zx_sp_Status_s {
  ZX_ELEM_EXT
  zx_sp_Status_EXT
  struct zx_sp_StatusCode_s* StatusCode;	/* {1,1} nada */
  struct zx_elem_s* StatusMessage;	/* {0,1} xs:string */
  struct zx_sp_StatusDetail_s* StatusDetail;	/* {0,1}  */
};

struct zx_sp_StatusCode_s* zx_sp_Status_GET_StatusCode(struct zx_sp_Status_s* x, int n);
struct zx_elem_s* zx_sp_Status_GET_StatusMessage(struct zx_sp_Status_s* x, int n);
struct zx_sp_StatusDetail_s* zx_sp_Status_GET_StatusDetail(struct zx_sp_Status_s* x, int n);
int zx_sp_Status_NUM_StatusCode(struct zx_sp_Status_s* x);
int zx_sp_Status_NUM_StatusMessage(struct zx_sp_Status_s* x);
int zx_sp_Status_NUM_StatusDetail(struct zx_sp_Status_s* x);
struct zx_sp_StatusCode_s* zx_sp_Status_POP_StatusCode(struct zx_sp_Status_s* x);
struct zx_elem_s* zx_sp_Status_POP_StatusMessage(struct zx_sp_Status_s* x);
struct zx_sp_StatusDetail_s* zx_sp_Status_POP_StatusDetail(struct zx_sp_Status_s* x);
void zx_sp_Status_PUSH_StatusCode(struct zx_sp_Status_s* x, struct zx_sp_StatusCode_s* y);
void zx_sp_Status_PUSH_StatusMessage(struct zx_sp_Status_s* x, struct zx_elem_s* y);
void zx_sp_Status_PUSH_StatusDetail(struct zx_sp_Status_s* x, struct zx_sp_StatusDetail_s* y);
void zx_sp_Status_PUT_StatusCode(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusCode_s* y);
void zx_sp_Status_PUT_StatusMessage(struct zx_sp_Status_s* x, int n, struct zx_elem_s* y);
void zx_sp_Status_PUT_StatusDetail(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusDetail_s* y);
void zx_sp_Status_ADD_StatusCode(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusCode_s* z);
void zx_sp_Status_ADD_StatusMessage(struct zx_sp_Status_s* x, int n, struct zx_elem_s* z);
void zx_sp_Status_ADD_StatusDetail(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusDetail_s* z);
void zx_sp_Status_DEL_StatusCode(struct zx_sp_Status_s* x, int n);
void zx_sp_Status_DEL_StatusMessage(struct zx_sp_Status_s* x, int n);
void zx_sp_Status_DEL_StatusDetail(struct zx_sp_Status_s* x, int n);
void zx_sp_Status_REV_StatusCode(struct zx_sp_Status_s* x);
void zx_sp_Status_REV_StatusMessage(struct zx_sp_Status_s* x);
void zx_sp_Status_REV_StatusDetail(struct zx_sp_Status_s* x);

/* -------------------------- sp_StatusCode -------------------------- */
/* refby( zx_sp_StatusCode_s zx_sp_Status_s ) */
#ifndef zx_sp_StatusCode_EXT
#define zx_sp_StatusCode_EXT
#endif

struct zx_sp_StatusCode_s* zx_DEC_sp_StatusCode(struct zx_ctx* c);
struct zx_sp_StatusCode_s* zx_NEW_sp_StatusCode(struct zx_ctx* c);
struct zx_sp_StatusCode_s* zx_DEEP_CLONE_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, int dup_strs);
void zx_DUP_STRS_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x);
void zx_FREE_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, int free_strs);
int zx_WALK_SO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_StatusCode(struct zx_sp_StatusCode_s* x);
char* zx_ENC_SO_sp_StatusCode(struct zx_sp_StatusCode_s* x, char* p);
char* zx_ENC_WO_sp_StatusCode(struct zx_sp_StatusCode_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x);

struct zx_sp_StatusCode_s {
  ZX_ELEM_EXT
  zx_sp_StatusCode_EXT
  struct zx_sp_StatusCode_s* StatusCode;	/* {0,1} nada */
  struct zx_str_s* Value;	/* {1,1} attribute xs:QName */
};

struct zx_str_s* zx_sp_StatusCode_GET_Value(struct zx_sp_StatusCode_s* x);
struct zx_sp_StatusCode_s* zx_sp_StatusCode_GET_StatusCode(struct zx_sp_StatusCode_s* x, int n);
int zx_sp_StatusCode_NUM_StatusCode(struct zx_sp_StatusCode_s* x);
struct zx_sp_StatusCode_s* zx_sp_StatusCode_POP_StatusCode(struct zx_sp_StatusCode_s* x);
void zx_sp_StatusCode_PUSH_StatusCode(struct zx_sp_StatusCode_s* x, struct zx_sp_StatusCode_s* y);
void zx_sp_StatusCode_PUT_Value(struct zx_sp_StatusCode_s* x, struct zx_str_s* y);
void zx_sp_StatusCode_PUT_StatusCode(struct zx_sp_StatusCode_s* x, int n, struct zx_sp_StatusCode_s* y);
void zx_sp_StatusCode_ADD_StatusCode(struct zx_sp_StatusCode_s* x, int n, struct zx_sp_StatusCode_s* z);
void zx_sp_StatusCode_DEL_StatusCode(struct zx_sp_StatusCode_s* x, int n);
void zx_sp_StatusCode_REV_StatusCode(struct zx_sp_StatusCode_s* x);

/* -------------------------- sp_StatusDetail -------------------------- */
/* refby( zx_sp_Status_s ) */
#ifndef zx_sp_StatusDetail_EXT
#define zx_sp_StatusDetail_EXT
#endif

struct zx_sp_StatusDetail_s* zx_DEC_sp_StatusDetail(struct zx_ctx* c);
struct zx_sp_StatusDetail_s* zx_NEW_sp_StatusDetail(struct zx_ctx* c);
struct zx_sp_StatusDetail_s* zx_DEEP_CLONE_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, int dup_strs);
void zx_DUP_STRS_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x);
void zx_FREE_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, int free_strs);
int zx_WALK_SO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_StatusDetail(struct zx_sp_StatusDetail_s* x);
char* zx_ENC_SO_sp_StatusDetail(struct zx_sp_StatusDetail_s* x, char* p);
char* zx_ENC_WO_sp_StatusDetail(struct zx_sp_StatusDetail_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x);

struct zx_sp_StatusDetail_s {
  ZX_ELEM_EXT
  zx_sp_StatusDetail_EXT
};


/* -------------------------- sp_SubjectQuery -------------------------- */
/* refby( ) */
#ifndef zx_sp_SubjectQuery_EXT
#define zx_sp_SubjectQuery_EXT
#endif

struct zx_sp_SubjectQuery_s* zx_DEC_sp_SubjectQuery(struct zx_ctx* c);
struct zx_sp_SubjectQuery_s* zx_NEW_sp_SubjectQuery(struct zx_ctx* c);
struct zx_sp_SubjectQuery_s* zx_DEEP_CLONE_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x);
void zx_FREE_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, int free_strs);
int zx_WALK_SO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_sp_SubjectQuery(struct zx_sp_SubjectQuery_s* x);
char* zx_ENC_SO_sp_SubjectQuery(struct zx_sp_SubjectQuery_s* x, char* p);
char* zx_ENC_WO_sp_SubjectQuery(struct zx_sp_SubjectQuery_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x);
struct zx_str_s* zx_EASY_ENC_WO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x);

struct zx_sp_SubjectQuery_s {
  ZX_ELEM_EXT
  zx_sp_SubjectQuery_EXT
  struct zx_sa_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_str_s* ID;	/* {1,1} attribute xs:ID */
  struct zx_str_s* Version;	/* {1,1} attribute xs:string */
  struct zx_str_s* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str_s* Destination;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Consent;	/* {0,1} attribute xs:anyURI */
  struct zx_sa_Subject_s* Subject;	/* {1,1} nada */
};

struct zx_str_s* zx_sp_SubjectQuery_GET_ID(struct zx_sp_SubjectQuery_s* x);
struct zx_str_s* zx_sp_SubjectQuery_GET_Version(struct zx_sp_SubjectQuery_s* x);
struct zx_str_s* zx_sp_SubjectQuery_GET_IssueInstant(struct zx_sp_SubjectQuery_s* x);
struct zx_str_s* zx_sp_SubjectQuery_GET_Destination(struct zx_sp_SubjectQuery_s* x);
struct zx_str_s* zx_sp_SubjectQuery_GET_Consent(struct zx_sp_SubjectQuery_s* x);
struct zx_sa_Issuer_s* zx_sp_SubjectQuery_GET_Issuer(struct zx_sp_SubjectQuery_s* x, int n);
struct zx_ds_Signature_s* zx_sp_SubjectQuery_GET_Signature(struct zx_sp_SubjectQuery_s* x, int n);
struct zx_sp_Extensions_s* zx_sp_SubjectQuery_GET_Extensions(struct zx_sp_SubjectQuery_s* x, int n);
struct zx_sa_Subject_s* zx_sp_SubjectQuery_GET_Subject(struct zx_sp_SubjectQuery_s* x, int n);
int zx_sp_SubjectQuery_NUM_Issuer(struct zx_sp_SubjectQuery_s* x);
int zx_sp_SubjectQuery_NUM_Signature(struct zx_sp_SubjectQuery_s* x);
int zx_sp_SubjectQuery_NUM_Extensions(struct zx_sp_SubjectQuery_s* x);
int zx_sp_SubjectQuery_NUM_Subject(struct zx_sp_SubjectQuery_s* x);
struct zx_sa_Issuer_s* zx_sp_SubjectQuery_POP_Issuer(struct zx_sp_SubjectQuery_s* x);
struct zx_ds_Signature_s* zx_sp_SubjectQuery_POP_Signature(struct zx_sp_SubjectQuery_s* x);
struct zx_sp_Extensions_s* zx_sp_SubjectQuery_POP_Extensions(struct zx_sp_SubjectQuery_s* x);
struct zx_sa_Subject_s* zx_sp_SubjectQuery_POP_Subject(struct zx_sp_SubjectQuery_s* x);
void zx_sp_SubjectQuery_PUSH_Issuer(struct zx_sp_SubjectQuery_s* x, struct zx_sa_Issuer_s* y);
void zx_sp_SubjectQuery_PUSH_Signature(struct zx_sp_SubjectQuery_s* x, struct zx_ds_Signature_s* y);
void zx_sp_SubjectQuery_PUSH_Extensions(struct zx_sp_SubjectQuery_s* x, struct zx_sp_Extensions_s* y);
void zx_sp_SubjectQuery_PUSH_Subject(struct zx_sp_SubjectQuery_s* x, struct zx_sa_Subject_s* y);
void zx_sp_SubjectQuery_PUT_ID(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y);
void zx_sp_SubjectQuery_PUT_Version(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y);
void zx_sp_SubjectQuery_PUT_IssueInstant(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y);
void zx_sp_SubjectQuery_PUT_Destination(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y);
void zx_sp_SubjectQuery_PUT_Consent(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y);
void zx_sp_SubjectQuery_PUT_Issuer(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Issuer_s* y);
void zx_sp_SubjectQuery_PUT_Signature(struct zx_sp_SubjectQuery_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp_SubjectQuery_PUT_Extensions(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sp_Extensions_s* y);
void zx_sp_SubjectQuery_PUT_Subject(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Subject_s* y);
void zx_sp_SubjectQuery_ADD_Issuer(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Issuer_s* z);
void zx_sp_SubjectQuery_ADD_Signature(struct zx_sp_SubjectQuery_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp_SubjectQuery_ADD_Extensions(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sp_Extensions_s* z);
void zx_sp_SubjectQuery_ADD_Subject(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Subject_s* z);
void zx_sp_SubjectQuery_DEL_Issuer(struct zx_sp_SubjectQuery_s* x, int n);
void zx_sp_SubjectQuery_DEL_Signature(struct zx_sp_SubjectQuery_s* x, int n);
void zx_sp_SubjectQuery_DEL_Extensions(struct zx_sp_SubjectQuery_s* x, int n);
void zx_sp_SubjectQuery_DEL_Subject(struct zx_sp_SubjectQuery_s* x, int n);
void zx_sp_SubjectQuery_REV_Issuer(struct zx_sp_SubjectQuery_s* x);
void zx_sp_SubjectQuery_REV_Signature(struct zx_sp_SubjectQuery_s* x);
void zx_sp_SubjectQuery_REV_Extensions(struct zx_sp_SubjectQuery_s* x);
void zx_sp_SubjectQuery_REV_Subject(struct zx_sp_SubjectQuery_s* x);

/* -------------------------- xenc_AgreementMethod -------------------------- */
/* refby( ) */
#ifndef zx_xenc_AgreementMethod_EXT
#define zx_xenc_AgreementMethod_EXT
#endif

struct zx_xenc_AgreementMethod_s* zx_DEC_xenc_AgreementMethod(struct zx_ctx* c);
struct zx_xenc_AgreementMethod_s* zx_NEW_xenc_AgreementMethod(struct zx_ctx* c);
struct zx_xenc_AgreementMethod_s* zx_DEEP_CLONE_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, int dup_strs);
void zx_DUP_STRS_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x);
void zx_FREE_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, int free_strs);
int zx_WALK_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_AgreementMethod(struct zx_xenc_AgreementMethod_s* x);
char* zx_ENC_SO_xenc_AgreementMethod(struct zx_xenc_AgreementMethod_s* x, char* p);
char* zx_ENC_WO_xenc_AgreementMethod(struct zx_xenc_AgreementMethod_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x);

struct zx_xenc_AgreementMethod_s {
  ZX_ELEM_EXT
  zx_xenc_AgreementMethod_EXT
  struct zx_elem_s* KA_Nonce;	/* {0,1} xs:base64Binary */
  struct zx_xenc_OriginatorKeyInfo_s* OriginatorKeyInfo;	/* {0,1}  */
  struct zx_xenc_RecipientKeyInfo_s* RecipientKeyInfo;	/* {0,1}  */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_xenc_AgreementMethod_GET_Algorithm(struct zx_xenc_AgreementMethod_s* x);
struct zx_elem_s* zx_xenc_AgreementMethod_GET_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n);
struct zx_xenc_OriginatorKeyInfo_s* zx_xenc_AgreementMethod_GET_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n);
struct zx_xenc_RecipientKeyInfo_s* zx_xenc_AgreementMethod_GET_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n);
int zx_xenc_AgreementMethod_NUM_KA_Nonce(struct zx_xenc_AgreementMethod_s* x);
int zx_xenc_AgreementMethod_NUM_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x);
int zx_xenc_AgreementMethod_NUM_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x);
struct zx_elem_s* zx_xenc_AgreementMethod_POP_KA_Nonce(struct zx_xenc_AgreementMethod_s* x);
struct zx_xenc_OriginatorKeyInfo_s* zx_xenc_AgreementMethod_POP_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x);
struct zx_xenc_RecipientKeyInfo_s* zx_xenc_AgreementMethod_POP_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x);
void zx_xenc_AgreementMethod_PUSH_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, struct zx_elem_s* y);
void zx_xenc_AgreementMethod_PUSH_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, struct zx_xenc_OriginatorKeyInfo_s* y);
void zx_xenc_AgreementMethod_PUSH_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, struct zx_xenc_RecipientKeyInfo_s* y);
void zx_xenc_AgreementMethod_PUT_Algorithm(struct zx_xenc_AgreementMethod_s* x, struct zx_str_s* y);
void zx_xenc_AgreementMethod_PUT_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* y);
void zx_xenc_AgreementMethod_PUT_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_OriginatorKeyInfo_s* y);
void zx_xenc_AgreementMethod_PUT_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_RecipientKeyInfo_s* y);
void zx_xenc_AgreementMethod_ADD_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* z);
void zx_xenc_AgreementMethod_ADD_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_OriginatorKeyInfo_s* z);
void zx_xenc_AgreementMethod_ADD_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_RecipientKeyInfo_s* z);
void zx_xenc_AgreementMethod_DEL_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n);
void zx_xenc_AgreementMethod_DEL_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n);
void zx_xenc_AgreementMethod_DEL_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n);
void zx_xenc_AgreementMethod_REV_KA_Nonce(struct zx_xenc_AgreementMethod_s* x);
void zx_xenc_AgreementMethod_REV_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x);
void zx_xenc_AgreementMethod_REV_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x);

/* -------------------------- xenc_CipherData -------------------------- */
/* refby( zx_xenc_EncryptedData_s zx_xenc_EncryptedKey_s ) */
#ifndef zx_xenc_CipherData_EXT
#define zx_xenc_CipherData_EXT
#endif

struct zx_xenc_CipherData_s* zx_DEC_xenc_CipherData(struct zx_ctx* c);
struct zx_xenc_CipherData_s* zx_NEW_xenc_CipherData(struct zx_ctx* c);
struct zx_xenc_CipherData_s* zx_DEEP_CLONE_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, int dup_strs);
void zx_DUP_STRS_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x);
void zx_FREE_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, int free_strs);
int zx_WALK_SO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_CipherData(struct zx_xenc_CipherData_s* x);
char* zx_ENC_SO_xenc_CipherData(struct zx_xenc_CipherData_s* x, char* p);
char* zx_ENC_WO_xenc_CipherData(struct zx_xenc_CipherData_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x);

struct zx_xenc_CipherData_s {
  ZX_ELEM_EXT
  zx_xenc_CipherData_EXT
  struct zx_elem_s* CipherValue;	/* {0,1} xs:base64Binary */
  struct zx_xenc_CipherReference_s* CipherReference;	/* {0,1} nada */
};

struct zx_elem_s* zx_xenc_CipherData_GET_CipherValue(struct zx_xenc_CipherData_s* x, int n);
struct zx_xenc_CipherReference_s* zx_xenc_CipherData_GET_CipherReference(struct zx_xenc_CipherData_s* x, int n);
int zx_xenc_CipherData_NUM_CipherValue(struct zx_xenc_CipherData_s* x);
int zx_xenc_CipherData_NUM_CipherReference(struct zx_xenc_CipherData_s* x);
struct zx_elem_s* zx_xenc_CipherData_POP_CipherValue(struct zx_xenc_CipherData_s* x);
struct zx_xenc_CipherReference_s* zx_xenc_CipherData_POP_CipherReference(struct zx_xenc_CipherData_s* x);
void zx_xenc_CipherData_PUSH_CipherValue(struct zx_xenc_CipherData_s* x, struct zx_elem_s* y);
void zx_xenc_CipherData_PUSH_CipherReference(struct zx_xenc_CipherData_s* x, struct zx_xenc_CipherReference_s* y);
void zx_xenc_CipherData_PUT_CipherValue(struct zx_xenc_CipherData_s* x, int n, struct zx_elem_s* y);
void zx_xenc_CipherData_PUT_CipherReference(struct zx_xenc_CipherData_s* x, int n, struct zx_xenc_CipherReference_s* y);
void zx_xenc_CipherData_ADD_CipherValue(struct zx_xenc_CipherData_s* x, int n, struct zx_elem_s* z);
void zx_xenc_CipherData_ADD_CipherReference(struct zx_xenc_CipherData_s* x, int n, struct zx_xenc_CipherReference_s* z);
void zx_xenc_CipherData_DEL_CipherValue(struct zx_xenc_CipherData_s* x, int n);
void zx_xenc_CipherData_DEL_CipherReference(struct zx_xenc_CipherData_s* x, int n);
void zx_xenc_CipherData_REV_CipherValue(struct zx_xenc_CipherData_s* x);
void zx_xenc_CipherData_REV_CipherReference(struct zx_xenc_CipherData_s* x);

/* -------------------------- xenc_CipherReference -------------------------- */
/* refby( zx_xenc_CipherData_s ) */
#ifndef zx_xenc_CipherReference_EXT
#define zx_xenc_CipherReference_EXT
#endif

struct zx_xenc_CipherReference_s* zx_DEC_xenc_CipherReference(struct zx_ctx* c);
struct zx_xenc_CipherReference_s* zx_NEW_xenc_CipherReference(struct zx_ctx* c);
struct zx_xenc_CipherReference_s* zx_DEEP_CLONE_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, int dup_strs);
void zx_DUP_STRS_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x);
void zx_FREE_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, int free_strs);
int zx_WALK_SO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_CipherReference(struct zx_xenc_CipherReference_s* x);
char* zx_ENC_SO_xenc_CipherReference(struct zx_xenc_CipherReference_s* x, char* p);
char* zx_ENC_WO_xenc_CipherReference(struct zx_xenc_CipherReference_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x);

struct zx_xenc_CipherReference_s {
  ZX_ELEM_EXT
  zx_xenc_CipherReference_EXT
  struct zx_xenc_Transforms_s* Transforms;	/* {0,1}  */
  struct zx_str_s* URI;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_xenc_CipherReference_GET_URI(struct zx_xenc_CipherReference_s* x);
struct zx_xenc_Transforms_s* zx_xenc_CipherReference_GET_Transforms(struct zx_xenc_CipherReference_s* x, int n);
int zx_xenc_CipherReference_NUM_Transforms(struct zx_xenc_CipherReference_s* x);
struct zx_xenc_Transforms_s* zx_xenc_CipherReference_POP_Transforms(struct zx_xenc_CipherReference_s* x);
void zx_xenc_CipherReference_PUSH_Transforms(struct zx_xenc_CipherReference_s* x, struct zx_xenc_Transforms_s* y);
void zx_xenc_CipherReference_PUT_URI(struct zx_xenc_CipherReference_s* x, struct zx_str_s* y);
void zx_xenc_CipherReference_PUT_Transforms(struct zx_xenc_CipherReference_s* x, int n, struct zx_xenc_Transforms_s* y);
void zx_xenc_CipherReference_ADD_Transforms(struct zx_xenc_CipherReference_s* x, int n, struct zx_xenc_Transforms_s* z);
void zx_xenc_CipherReference_DEL_Transforms(struct zx_xenc_CipherReference_s* x, int n);
void zx_xenc_CipherReference_REV_Transforms(struct zx_xenc_CipherReference_s* x);

/* -------------------------- xenc_DataReference -------------------------- */
/* refby( zx_xenc_ReferenceList_s ) */
#ifndef zx_xenc_DataReference_EXT
#define zx_xenc_DataReference_EXT
#endif

struct zx_xenc_DataReference_s* zx_DEC_xenc_DataReference(struct zx_ctx* c);
struct zx_xenc_DataReference_s* zx_NEW_xenc_DataReference(struct zx_ctx* c);
struct zx_xenc_DataReference_s* zx_DEEP_CLONE_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, int dup_strs);
void zx_DUP_STRS_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x);
void zx_FREE_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, int free_strs);
int zx_WALK_SO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_DataReference(struct zx_xenc_DataReference_s* x);
char* zx_ENC_SO_xenc_DataReference(struct zx_xenc_DataReference_s* x, char* p);
char* zx_ENC_WO_xenc_DataReference(struct zx_xenc_DataReference_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x);

struct zx_xenc_DataReference_s {
  ZX_ELEM_EXT
  zx_xenc_DataReference_EXT
  struct zx_str_s* URI;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_xenc_DataReference_GET_URI(struct zx_xenc_DataReference_s* x);
void zx_xenc_DataReference_PUT_URI(struct zx_xenc_DataReference_s* x, struct zx_str_s* y);

/* -------------------------- xenc_EncryptedData -------------------------- */
/* refby( zx_sp_NewEncryptedID_s zx_ff12_EncryptedNameIdentifier_s zx_sa_EncryptedID_s zx_sa_EncryptedAttribute_s zx_sa_EncryptedAssertion_s ) */
#ifndef zx_xenc_EncryptedData_EXT
#define zx_xenc_EncryptedData_EXT
#endif

struct zx_xenc_EncryptedData_s* zx_DEC_xenc_EncryptedData(struct zx_ctx* c);
struct zx_xenc_EncryptedData_s* zx_NEW_xenc_EncryptedData(struct zx_ctx* c);
struct zx_xenc_EncryptedData_s* zx_DEEP_CLONE_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x);
void zx_FREE_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, int free_strs);
int zx_WALK_SO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_EncryptedData(struct zx_xenc_EncryptedData_s* x);
char* zx_ENC_SO_xenc_EncryptedData(struct zx_xenc_EncryptedData_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptedData(struct zx_xenc_EncryptedData_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x);

struct zx_xenc_EncryptedData_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptedData_EXT
  struct zx_xenc_EncryptionMethod_s* EncryptionMethod;	/* {0,1}  */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_xenc_CipherData_s* CipherData;	/* {1,1} nada */
  struct zx_xenc_EncryptionProperties_s* EncryptionProperties;	/* {0,1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str_s* Encoding;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_xenc_EncryptedData_GET_Id(struct zx_xenc_EncryptedData_s* x);
struct zx_str_s* zx_xenc_EncryptedData_GET_Type(struct zx_xenc_EncryptedData_s* x);
struct zx_str_s* zx_xenc_EncryptedData_GET_MimeType(struct zx_xenc_EncryptedData_s* x);
struct zx_str_s* zx_xenc_EncryptedData_GET_Encoding(struct zx_xenc_EncryptedData_s* x);
struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedData_GET_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n);
struct zx_ds_KeyInfo_s* zx_xenc_EncryptedData_GET_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n);
struct zx_xenc_CipherData_s* zx_xenc_EncryptedData_GET_CipherData(struct zx_xenc_EncryptedData_s* x, int n);
struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedData_GET_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n);
int zx_xenc_EncryptedData_NUM_EncryptionMethod(struct zx_xenc_EncryptedData_s* x);
int zx_xenc_EncryptedData_NUM_KeyInfo(struct zx_xenc_EncryptedData_s* x);
int zx_xenc_EncryptedData_NUM_CipherData(struct zx_xenc_EncryptedData_s* x);
int zx_xenc_EncryptedData_NUM_EncryptionProperties(struct zx_xenc_EncryptedData_s* x);
struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedData_POP_EncryptionMethod(struct zx_xenc_EncryptedData_s* x);
struct zx_ds_KeyInfo_s* zx_xenc_EncryptedData_POP_KeyInfo(struct zx_xenc_EncryptedData_s* x);
struct zx_xenc_CipherData_s* zx_xenc_EncryptedData_POP_CipherData(struct zx_xenc_EncryptedData_s* x);
struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedData_POP_EncryptionProperties(struct zx_xenc_EncryptedData_s* x);
void zx_xenc_EncryptedData_PUSH_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_EncryptionMethod_s* y);
void zx_xenc_EncryptedData_PUSH_KeyInfo(struct zx_xenc_EncryptedData_s* x, struct zx_ds_KeyInfo_s* y);
void zx_xenc_EncryptedData_PUSH_CipherData(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_CipherData_s* y);
void zx_xenc_EncryptedData_PUSH_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_EncryptionProperties_s* y);
void zx_xenc_EncryptedData_PUT_Id(struct zx_xenc_EncryptedData_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedData_PUT_Type(struct zx_xenc_EncryptedData_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedData_PUT_MimeType(struct zx_xenc_EncryptedData_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedData_PUT_Encoding(struct zx_xenc_EncryptedData_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedData_PUT_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionMethod_s* y);
void zx_xenc_EncryptedData_PUT_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n, struct zx_ds_KeyInfo_s* y);
void zx_xenc_EncryptedData_PUT_CipherData(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_CipherData_s* y);
void zx_xenc_EncryptedData_PUT_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionProperties_s* y);
void zx_xenc_EncryptedData_ADD_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionMethod_s* z);
void zx_xenc_EncryptedData_ADD_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n, struct zx_ds_KeyInfo_s* z);
void zx_xenc_EncryptedData_ADD_CipherData(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_CipherData_s* z);
void zx_xenc_EncryptedData_ADD_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionProperties_s* z);
void zx_xenc_EncryptedData_DEL_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n);
void zx_xenc_EncryptedData_DEL_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n);
void zx_xenc_EncryptedData_DEL_CipherData(struct zx_xenc_EncryptedData_s* x, int n);
void zx_xenc_EncryptedData_DEL_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n);
void zx_xenc_EncryptedData_REV_EncryptionMethod(struct zx_xenc_EncryptedData_s* x);
void zx_xenc_EncryptedData_REV_KeyInfo(struct zx_xenc_EncryptedData_s* x);
void zx_xenc_EncryptedData_REV_CipherData(struct zx_xenc_EncryptedData_s* x);
void zx_xenc_EncryptedData_REV_EncryptionProperties(struct zx_xenc_EncryptedData_s* x);

/* -------------------------- xenc_EncryptedKey -------------------------- */
/* refby( zx_sp_NewEncryptedID_s zx_ff12_EncryptedNameIdentifier_s zx_sa_EncryptedID_s zx_sa_EncryptedAttribute_s zx_sa_EncryptedAssertion_s ) */
#ifndef zx_xenc_EncryptedKey_EXT
#define zx_xenc_EncryptedKey_EXT
#endif

struct zx_xenc_EncryptedKey_s* zx_DEC_xenc_EncryptedKey(struct zx_ctx* c);
struct zx_xenc_EncryptedKey_s* zx_NEW_xenc_EncryptedKey(struct zx_ctx* c);
struct zx_xenc_EncryptedKey_s* zx_DEEP_CLONE_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x);
void zx_FREE_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, int free_strs);
int zx_WALK_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_EncryptedKey(struct zx_xenc_EncryptedKey_s* x);
char* zx_ENC_SO_xenc_EncryptedKey(struct zx_xenc_EncryptedKey_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptedKey(struct zx_xenc_EncryptedKey_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x);

struct zx_xenc_EncryptedKey_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptedKey_EXT
  struct zx_xenc_EncryptionMethod_s* EncryptionMethod;	/* {0,1}  */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_xenc_CipherData_s* CipherData;	/* {1,1} nada */
  struct zx_xenc_EncryptionProperties_s* EncryptionProperties;	/* {0,1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
  struct zx_str_s* Type;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* MimeType;	/* {0,1} attribute xs:string */
  struct zx_str_s* Encoding;	/* {0,1} attribute xs:anyURI */
  struct zx_xenc_ReferenceList_s* ReferenceList;	/* {0,1} nada */
  struct zx_elem_s* CarriedKeyName;	/* {0,1} xs:string */
  struct zx_str_s* Recipient;	/* {0,1} attribute xs:anyURI */
};

struct zx_str_s* zx_xenc_EncryptedKey_GET_Id(struct zx_xenc_EncryptedKey_s* x);
struct zx_str_s* zx_xenc_EncryptedKey_GET_Type(struct zx_xenc_EncryptedKey_s* x);
struct zx_str_s* zx_xenc_EncryptedKey_GET_MimeType(struct zx_xenc_EncryptedKey_s* x);
struct zx_str_s* zx_xenc_EncryptedKey_GET_Encoding(struct zx_xenc_EncryptedKey_s* x);
struct zx_str_s* zx_xenc_EncryptedKey_GET_Recipient(struct zx_xenc_EncryptedKey_s* x);
struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedKey_GET_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_ds_KeyInfo_s* zx_xenc_EncryptedKey_GET_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_xenc_CipherData_s* zx_xenc_EncryptedKey_GET_CipherData(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedKey_GET_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_xenc_ReferenceList_s* zx_xenc_EncryptedKey_GET_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n);
struct zx_elem_s* zx_xenc_EncryptedKey_GET_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n);
int zx_xenc_EncryptedKey_NUM_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_KeyInfo(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_CipherData(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_ReferenceList(struct zx_xenc_EncryptedKey_s* x);
int zx_xenc_EncryptedKey_NUM_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x);
struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedKey_POP_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x);
struct zx_ds_KeyInfo_s* zx_xenc_EncryptedKey_POP_KeyInfo(struct zx_xenc_EncryptedKey_s* x);
struct zx_xenc_CipherData_s* zx_xenc_EncryptedKey_POP_CipherData(struct zx_xenc_EncryptedKey_s* x);
struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedKey_POP_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x);
struct zx_xenc_ReferenceList_s* zx_xenc_EncryptedKey_POP_ReferenceList(struct zx_xenc_EncryptedKey_s* x);
struct zx_elem_s* zx_xenc_EncryptedKey_POP_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_PUSH_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_EncryptionMethod_s* y);
void zx_xenc_EncryptedKey_PUSH_KeyInfo(struct zx_xenc_EncryptedKey_s* x, struct zx_ds_KeyInfo_s* y);
void zx_xenc_EncryptedKey_PUSH_CipherData(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_CipherData_s* y);
void zx_xenc_EncryptedKey_PUSH_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_EncryptionProperties_s* y);
void zx_xenc_EncryptedKey_PUSH_ReferenceList(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_ReferenceList_s* y);
void zx_xenc_EncryptedKey_PUSH_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, struct zx_elem_s* y);
void zx_xenc_EncryptedKey_PUT_Id(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedKey_PUT_Type(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedKey_PUT_MimeType(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedKey_PUT_Encoding(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedKey_PUT_Recipient(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y);
void zx_xenc_EncryptedKey_PUT_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionMethod_s* y);
void zx_xenc_EncryptedKey_PUT_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_ds_KeyInfo_s* y);
void zx_xenc_EncryptedKey_PUT_CipherData(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_CipherData_s* y);
void zx_xenc_EncryptedKey_PUT_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionProperties_s* y);
void zx_xenc_EncryptedKey_PUT_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_ReferenceList_s* y);
void zx_xenc_EncryptedKey_PUT_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* y);
void zx_xenc_EncryptedKey_ADD_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionMethod_s* z);
void zx_xenc_EncryptedKey_ADD_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_ds_KeyInfo_s* z);
void zx_xenc_EncryptedKey_ADD_CipherData(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_CipherData_s* z);
void zx_xenc_EncryptedKey_ADD_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionProperties_s* z);
void zx_xenc_EncryptedKey_ADD_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_ReferenceList_s* z);
void zx_xenc_EncryptedKey_ADD_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* z);
void zx_xenc_EncryptedKey_DEL_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_CipherData(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_DEL_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n);
void zx_xenc_EncryptedKey_REV_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_KeyInfo(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_CipherData(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_ReferenceList(struct zx_xenc_EncryptedKey_s* x);
void zx_xenc_EncryptedKey_REV_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x);

/* -------------------------- xenc_EncryptionMethod -------------------------- */
/* refby( zx_xenc_EncryptedData_s zx_xenc_EncryptedKey_s ) */
#ifndef zx_xenc_EncryptionMethod_EXT
#define zx_xenc_EncryptionMethod_EXT
#endif

struct zx_xenc_EncryptionMethod_s* zx_DEC_xenc_EncryptionMethod(struct zx_ctx* c);
struct zx_xenc_EncryptionMethod_s* zx_NEW_xenc_EncryptionMethod(struct zx_ctx* c);
struct zx_xenc_EncryptionMethod_s* zx_DEEP_CLONE_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x);
void zx_FREE_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, int free_strs);
int zx_WALK_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_EncryptionMethod(struct zx_xenc_EncryptionMethod_s* x);
char* zx_ENC_SO_xenc_EncryptionMethod(struct zx_xenc_EncryptionMethod_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptionMethod(struct zx_xenc_EncryptionMethod_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x);

struct zx_xenc_EncryptionMethod_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptionMethod_EXT
  struct zx_elem_s* KeySize;	/* {0,1} xs:integer */
  struct zx_elem_s* OAEPparams;	/* {0,1} xs:base64Binary */
  struct zx_str_s* Algorithm;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_xenc_EncryptionMethod_GET_Algorithm(struct zx_xenc_EncryptionMethod_s* x);
struct zx_elem_s* zx_xenc_EncryptionMethod_GET_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n);
struct zx_elem_s* zx_xenc_EncryptionMethod_GET_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n);
int zx_xenc_EncryptionMethod_NUM_KeySize(struct zx_xenc_EncryptionMethod_s* x);
int zx_xenc_EncryptionMethod_NUM_OAEPparams(struct zx_xenc_EncryptionMethod_s* x);
struct zx_elem_s* zx_xenc_EncryptionMethod_POP_KeySize(struct zx_xenc_EncryptionMethod_s* x);
struct zx_elem_s* zx_xenc_EncryptionMethod_POP_OAEPparams(struct zx_xenc_EncryptionMethod_s* x);
void zx_xenc_EncryptionMethod_PUSH_KeySize(struct zx_xenc_EncryptionMethod_s* x, struct zx_elem_s* y);
void zx_xenc_EncryptionMethod_PUSH_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, struct zx_elem_s* y);
void zx_xenc_EncryptionMethod_PUT_Algorithm(struct zx_xenc_EncryptionMethod_s* x, struct zx_str_s* y);
void zx_xenc_EncryptionMethod_PUT_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* y);
void zx_xenc_EncryptionMethod_PUT_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* y);
void zx_xenc_EncryptionMethod_ADD_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z);
void zx_xenc_EncryptionMethod_ADD_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z);
void zx_xenc_EncryptionMethod_DEL_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n);
void zx_xenc_EncryptionMethod_DEL_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n);
void zx_xenc_EncryptionMethod_REV_KeySize(struct zx_xenc_EncryptionMethod_s* x);
void zx_xenc_EncryptionMethod_REV_OAEPparams(struct zx_xenc_EncryptionMethod_s* x);

/* -------------------------- xenc_EncryptionProperties -------------------------- */
/* refby( zx_xenc_EncryptedData_s zx_xenc_EncryptedKey_s ) */
#ifndef zx_xenc_EncryptionProperties_EXT
#define zx_xenc_EncryptionProperties_EXT
#endif

struct zx_xenc_EncryptionProperties_s* zx_DEC_xenc_EncryptionProperties(struct zx_ctx* c);
struct zx_xenc_EncryptionProperties_s* zx_NEW_xenc_EncryptionProperties(struct zx_ctx* c);
struct zx_xenc_EncryptionProperties_s* zx_DEEP_CLONE_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x);
void zx_FREE_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, int free_strs);
int zx_WALK_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_EncryptionProperties(struct zx_xenc_EncryptionProperties_s* x);
char* zx_ENC_SO_xenc_EncryptionProperties(struct zx_xenc_EncryptionProperties_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptionProperties(struct zx_xenc_EncryptionProperties_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x);

struct zx_xenc_EncryptionProperties_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptionProperties_EXT
  struct zx_xenc_EncryptionProperty_s* EncryptionProperty;	/* {1,-1} nada */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_xenc_EncryptionProperties_GET_Id(struct zx_xenc_EncryptionProperties_s* x);
struct zx_xenc_EncryptionProperty_s* zx_xenc_EncryptionProperties_GET_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n);
int zx_xenc_EncryptionProperties_NUM_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x);
struct zx_xenc_EncryptionProperty_s* zx_xenc_EncryptionProperties_POP_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x);
void zx_xenc_EncryptionProperties_PUSH_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, struct zx_xenc_EncryptionProperty_s* y);
void zx_xenc_EncryptionProperties_PUT_Id(struct zx_xenc_EncryptionProperties_s* x, struct zx_str_s* y);
void zx_xenc_EncryptionProperties_PUT_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n, struct zx_xenc_EncryptionProperty_s* y);
void zx_xenc_EncryptionProperties_ADD_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n, struct zx_xenc_EncryptionProperty_s* z);
void zx_xenc_EncryptionProperties_DEL_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n);
void zx_xenc_EncryptionProperties_REV_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x);

/* -------------------------- xenc_EncryptionProperty -------------------------- */
/* refby( zx_xenc_EncryptionProperties_s ) */
#ifndef zx_xenc_EncryptionProperty_EXT
#define zx_xenc_EncryptionProperty_EXT
#endif

struct zx_xenc_EncryptionProperty_s* zx_DEC_xenc_EncryptionProperty(struct zx_ctx* c);
struct zx_xenc_EncryptionProperty_s* zx_NEW_xenc_EncryptionProperty(struct zx_ctx* c);
struct zx_xenc_EncryptionProperty_s* zx_DEEP_CLONE_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, int dup_strs);
void zx_DUP_STRS_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x);
void zx_FREE_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, int free_strs);
int zx_WALK_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_EncryptionProperty(struct zx_xenc_EncryptionProperty_s* x);
char* zx_ENC_SO_xenc_EncryptionProperty(struct zx_xenc_EncryptionProperty_s* x, char* p);
char* zx_ENC_WO_xenc_EncryptionProperty(struct zx_xenc_EncryptionProperty_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x);

struct zx_xenc_EncryptionProperty_s {
  ZX_ELEM_EXT
  zx_xenc_EncryptionProperty_EXT
  struct zx_str_s* Target;	/* {0,1} attribute xs:anyURI */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_xenc_EncryptionProperty_GET_Target(struct zx_xenc_EncryptionProperty_s* x);
struct zx_str_s* zx_xenc_EncryptionProperty_GET_Id(struct zx_xenc_EncryptionProperty_s* x);
void zx_xenc_EncryptionProperty_PUT_Target(struct zx_xenc_EncryptionProperty_s* x, struct zx_str_s* y);
void zx_xenc_EncryptionProperty_PUT_Id(struct zx_xenc_EncryptionProperty_s* x, struct zx_str_s* y);

/* -------------------------- xenc_KeyReference -------------------------- */
/* refby( zx_xenc_ReferenceList_s ) */
#ifndef zx_xenc_KeyReference_EXT
#define zx_xenc_KeyReference_EXT
#endif

struct zx_xenc_KeyReference_s* zx_DEC_xenc_KeyReference(struct zx_ctx* c);
struct zx_xenc_KeyReference_s* zx_NEW_xenc_KeyReference(struct zx_ctx* c);
struct zx_xenc_KeyReference_s* zx_DEEP_CLONE_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, int dup_strs);
void zx_DUP_STRS_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x);
void zx_FREE_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, int free_strs);
int zx_WALK_SO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_KeyReference(struct zx_xenc_KeyReference_s* x);
char* zx_ENC_SO_xenc_KeyReference(struct zx_xenc_KeyReference_s* x, char* p);
char* zx_ENC_WO_xenc_KeyReference(struct zx_xenc_KeyReference_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x);

struct zx_xenc_KeyReference_s {
  ZX_ELEM_EXT
  zx_xenc_KeyReference_EXT
  struct zx_str_s* URI;	/* {1,1} attribute xs:anyURI */
};

struct zx_str_s* zx_xenc_KeyReference_GET_URI(struct zx_xenc_KeyReference_s* x);
void zx_xenc_KeyReference_PUT_URI(struct zx_xenc_KeyReference_s* x, struct zx_str_s* y);

/* -------------------------- xenc_OriginatorKeyInfo -------------------------- */
/* refby( zx_xenc_AgreementMethod_s ) */
#ifndef zx_xenc_OriginatorKeyInfo_EXT
#define zx_xenc_OriginatorKeyInfo_EXT
#endif

struct zx_xenc_OriginatorKeyInfo_s* zx_DEC_xenc_OriginatorKeyInfo(struct zx_ctx* c);
struct zx_xenc_OriginatorKeyInfo_s* zx_NEW_xenc_OriginatorKeyInfo(struct zx_ctx* c);
struct zx_xenc_OriginatorKeyInfo_s* zx_DEEP_CLONE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, int dup_strs);
void zx_DUP_STRS_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_FREE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, int free_strs);
int zx_WALK_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_OriginatorKeyInfo(struct zx_xenc_OriginatorKeyInfo_s* x);
char* zx_ENC_SO_xenc_OriginatorKeyInfo(struct zx_xenc_OriginatorKeyInfo_s* x, char* p);
char* zx_ENC_WO_xenc_OriginatorKeyInfo(struct zx_xenc_OriginatorKeyInfo_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x);

struct zx_xenc_OriginatorKeyInfo_s {
  ZX_ELEM_EXT
  zx_xenc_OriginatorKeyInfo_EXT
  struct zx_elem_s* KeyName;	/* {0,-1} xs:string */
  struct zx_ds_KeyValue_s* KeyValue;	/* {0,-1} nada */
  struct zx_ds_RetrievalMethod_s* RetrievalMethod;	/* {0,-1} nada */
  struct zx_ds_X509Data_s* X509Data;	/* {0,-1} nada */
  struct zx_ds_PGPData_s* PGPData;	/* {0,-1} nada */
  struct zx_ds_SPKIData_s* SPKIData;	/* {0,-1} nada */
  struct zx_elem_s* MgmtData;	/* {0,-1} xs:string */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_xenc_OriginatorKeyInfo_GET_Id(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_elem_s* zx_xenc_OriginatorKeyInfo_GET_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_KeyValue_s* zx_xenc_OriginatorKeyInfo_GET_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_RetrievalMethod_s* zx_xenc_OriginatorKeyInfo_GET_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_X509Data_s* zx_xenc_OriginatorKeyInfo_GET_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_PGPData_s* zx_xenc_OriginatorKeyInfo_GET_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_ds_SPKIData_s* zx_xenc_OriginatorKeyInfo_GET_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
struct zx_elem_s* zx_xenc_OriginatorKeyInfo_GET_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
int zx_xenc_OriginatorKeyInfo_NUM_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x);
int zx_xenc_OriginatorKeyInfo_NUM_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_elem_s* zx_xenc_OriginatorKeyInfo_POP_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_KeyValue_s* zx_xenc_OriginatorKeyInfo_POP_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_RetrievalMethod_s* zx_xenc_OriginatorKeyInfo_POP_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_X509Data_s* zx_xenc_OriginatorKeyInfo_POP_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_PGPData_s* zx_xenc_OriginatorKeyInfo_POP_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_ds_SPKIData_s* zx_xenc_OriginatorKeyInfo_POP_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x);
struct zx_elem_s* zx_xenc_OriginatorKeyInfo_POP_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_PUSH_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_KeyValue_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_RetrievalMethod_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_X509Data_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_PGPData_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_SPKIData_s* y);
void zx_xenc_OriginatorKeyInfo_PUSH_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_Id(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_str_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_X509Data_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_PGPData_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* y);
void zx_xenc_OriginatorKeyInfo_PUT_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_xenc_OriginatorKeyInfo_ADD_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_X509Data_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_PGPData_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z);
void zx_xenc_OriginatorKeyInfo_ADD_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_xenc_OriginatorKeyInfo_DEL_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_DEL_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n);
void zx_xenc_OriginatorKeyInfo_REV_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x);
void zx_xenc_OriginatorKeyInfo_REV_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x);

/* -------------------------- xenc_RecipientKeyInfo -------------------------- */
/* refby( zx_xenc_AgreementMethod_s ) */
#ifndef zx_xenc_RecipientKeyInfo_EXT
#define zx_xenc_RecipientKeyInfo_EXT
#endif

struct zx_xenc_RecipientKeyInfo_s* zx_DEC_xenc_RecipientKeyInfo(struct zx_ctx* c);
struct zx_xenc_RecipientKeyInfo_s* zx_NEW_xenc_RecipientKeyInfo(struct zx_ctx* c);
struct zx_xenc_RecipientKeyInfo_s* zx_DEEP_CLONE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, int dup_strs);
void zx_DUP_STRS_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x);
void zx_FREE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, int free_strs);
int zx_WALK_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_RecipientKeyInfo(struct zx_xenc_RecipientKeyInfo_s* x);
char* zx_ENC_SO_xenc_RecipientKeyInfo(struct zx_xenc_RecipientKeyInfo_s* x, char* p);
char* zx_ENC_WO_xenc_RecipientKeyInfo(struct zx_xenc_RecipientKeyInfo_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x);

struct zx_xenc_RecipientKeyInfo_s {
  ZX_ELEM_EXT
  zx_xenc_RecipientKeyInfo_EXT
  struct zx_elem_s* KeyName;	/* {0,-1} xs:string */
  struct zx_ds_KeyValue_s* KeyValue;	/* {0,-1} nada */
  struct zx_ds_RetrievalMethod_s* RetrievalMethod;	/* {0,-1} nada */
  struct zx_ds_X509Data_s* X509Data;	/* {0,-1} nada */
  struct zx_ds_PGPData_s* PGPData;	/* {0,-1} nada */
  struct zx_ds_SPKIData_s* SPKIData;	/* {0,-1} nada */
  struct zx_elem_s* MgmtData;	/* {0,-1} xs:string */
  struct zx_str_s* Id;	/* {0,1} attribute xs:ID */
};

struct zx_str_s* zx_xenc_RecipientKeyInfo_GET_Id(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_elem_s* zx_xenc_RecipientKeyInfo_GET_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_KeyValue_s* zx_xenc_RecipientKeyInfo_GET_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_RetrievalMethod_s* zx_xenc_RecipientKeyInfo_GET_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_X509Data_s* zx_xenc_RecipientKeyInfo_GET_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_PGPData_s* zx_xenc_RecipientKeyInfo_GET_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_ds_SPKIData_s* zx_xenc_RecipientKeyInfo_GET_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
struct zx_elem_s* zx_xenc_RecipientKeyInfo_GET_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
int zx_xenc_RecipientKeyInfo_NUM_KeyName(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_X509Data(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_PGPData(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x);
int zx_xenc_RecipientKeyInfo_NUM_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_elem_s* zx_xenc_RecipientKeyInfo_POP_KeyName(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_KeyValue_s* zx_xenc_RecipientKeyInfo_POP_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_RetrievalMethod_s* zx_xenc_RecipientKeyInfo_POP_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_X509Data_s* zx_xenc_RecipientKeyInfo_POP_X509Data(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_PGPData_s* zx_xenc_RecipientKeyInfo_POP_PGPData(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_ds_SPKIData_s* zx_xenc_RecipientKeyInfo_POP_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x);
struct zx_elem_s* zx_xenc_RecipientKeyInfo_POP_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_PUSH_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_KeyValue_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_RetrievalMethod_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_X509Data_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_PGPData_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_SPKIData_s* y);
void zx_xenc_RecipientKeyInfo_PUSH_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* y);
void zx_xenc_RecipientKeyInfo_PUT_Id(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_str_s* y);
void zx_xenc_RecipientKeyInfo_PUT_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_xenc_RecipientKeyInfo_PUT_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* y);
void zx_xenc_RecipientKeyInfo_PUT_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* y);
void zx_xenc_RecipientKeyInfo_PUT_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_X509Data_s* y);
void zx_xenc_RecipientKeyInfo_PUT_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_PGPData_s* y);
void zx_xenc_RecipientKeyInfo_PUT_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* y);
void zx_xenc_RecipientKeyInfo_PUT_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* y);
void zx_xenc_RecipientKeyInfo_ADD_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_xenc_RecipientKeyInfo_ADD_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z);
void zx_xenc_RecipientKeyInfo_ADD_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z);
void zx_xenc_RecipientKeyInfo_ADD_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_X509Data_s* z);
void zx_xenc_RecipientKeyInfo_ADD_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_PGPData_s* z);
void zx_xenc_RecipientKeyInfo_ADD_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z);
void zx_xenc_RecipientKeyInfo_ADD_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z);
void zx_xenc_RecipientKeyInfo_DEL_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_DEL_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n);
void zx_xenc_RecipientKeyInfo_REV_KeyName(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_X509Data(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_PGPData(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x);
void zx_xenc_RecipientKeyInfo_REV_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x);

/* -------------------------- xenc_ReferenceList -------------------------- */
/* refby( zx_xenc_EncryptedKey_s ) */
#ifndef zx_xenc_ReferenceList_EXT
#define zx_xenc_ReferenceList_EXT
#endif

struct zx_xenc_ReferenceList_s* zx_DEC_xenc_ReferenceList(struct zx_ctx* c);
struct zx_xenc_ReferenceList_s* zx_NEW_xenc_ReferenceList(struct zx_ctx* c);
struct zx_xenc_ReferenceList_s* zx_DEEP_CLONE_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, int dup_strs);
void zx_DUP_STRS_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x);
void zx_FREE_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, int free_strs);
int zx_WALK_SO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_ReferenceList(struct zx_xenc_ReferenceList_s* x);
char* zx_ENC_SO_xenc_ReferenceList(struct zx_xenc_ReferenceList_s* x, char* p);
char* zx_ENC_WO_xenc_ReferenceList(struct zx_xenc_ReferenceList_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x);

struct zx_xenc_ReferenceList_s {
  ZX_ELEM_EXT
  zx_xenc_ReferenceList_EXT
  struct zx_xenc_DataReference_s* DataReference;	/* {0,1}  */
  struct zx_xenc_KeyReference_s* KeyReference;	/* {0,1}  */
};

struct zx_xenc_DataReference_s* zx_xenc_ReferenceList_GET_DataReference(struct zx_xenc_ReferenceList_s* x, int n);
struct zx_xenc_KeyReference_s* zx_xenc_ReferenceList_GET_KeyReference(struct zx_xenc_ReferenceList_s* x, int n);
int zx_xenc_ReferenceList_NUM_DataReference(struct zx_xenc_ReferenceList_s* x);
int zx_xenc_ReferenceList_NUM_KeyReference(struct zx_xenc_ReferenceList_s* x);
struct zx_xenc_DataReference_s* zx_xenc_ReferenceList_POP_DataReference(struct zx_xenc_ReferenceList_s* x);
struct zx_xenc_KeyReference_s* zx_xenc_ReferenceList_POP_KeyReference(struct zx_xenc_ReferenceList_s* x);
void zx_xenc_ReferenceList_PUSH_DataReference(struct zx_xenc_ReferenceList_s* x, struct zx_xenc_DataReference_s* y);
void zx_xenc_ReferenceList_PUSH_KeyReference(struct zx_xenc_ReferenceList_s* x, struct zx_xenc_KeyReference_s* y);
void zx_xenc_ReferenceList_PUT_DataReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_DataReference_s* y);
void zx_xenc_ReferenceList_PUT_KeyReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_KeyReference_s* y);
void zx_xenc_ReferenceList_ADD_DataReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_DataReference_s* z);
void zx_xenc_ReferenceList_ADD_KeyReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_KeyReference_s* z);
void zx_xenc_ReferenceList_DEL_DataReference(struct zx_xenc_ReferenceList_s* x, int n);
void zx_xenc_ReferenceList_DEL_KeyReference(struct zx_xenc_ReferenceList_s* x, int n);
void zx_xenc_ReferenceList_REV_DataReference(struct zx_xenc_ReferenceList_s* x);
void zx_xenc_ReferenceList_REV_KeyReference(struct zx_xenc_ReferenceList_s* x);

/* -------------------------- xenc_Transforms -------------------------- */
/* refby( zx_xenc_CipherReference_s ) */
#ifndef zx_xenc_Transforms_EXT
#define zx_xenc_Transforms_EXT
#endif

struct zx_xenc_Transforms_s* zx_DEC_xenc_Transforms(struct zx_ctx* c);
struct zx_xenc_Transforms_s* zx_NEW_xenc_Transforms(struct zx_ctx* c);
struct zx_xenc_Transforms_s* zx_DEEP_CLONE_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, int dup_strs);
void zx_DUP_STRS_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x);
void zx_FREE_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, int free_strs);
int zx_WALK_SO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_xenc_Transforms(struct zx_xenc_Transforms_s* x);
char* zx_ENC_SO_xenc_Transforms(struct zx_xenc_Transforms_s* x, char* p);
char* zx_ENC_WO_xenc_Transforms(struct zx_xenc_Transforms_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x);
struct zx_str_s* zx_EASY_ENC_WO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x);

struct zx_xenc_Transforms_s {
  ZX_ELEM_EXT
  zx_xenc_Transforms_EXT
  struct zx_ds_Transform_s* Transform;	/* {1,-1} nada */
};

struct zx_ds_Transform_s* zx_xenc_Transforms_GET_Transform(struct zx_xenc_Transforms_s* x, int n);
int zx_xenc_Transforms_NUM_Transform(struct zx_xenc_Transforms_s* x);
struct zx_ds_Transform_s* zx_xenc_Transforms_POP_Transform(struct zx_xenc_Transforms_s* x);
void zx_xenc_Transforms_PUSH_Transform(struct zx_xenc_Transforms_s* x, struct zx_ds_Transform_s* y);
void zx_xenc_Transforms_PUT_Transform(struct zx_xenc_Transforms_s* x, int n, struct zx_ds_Transform_s* y);
void zx_xenc_Transforms_ADD_Transform(struct zx_xenc_Transforms_s* x, int n, struct zx_ds_Transform_s* z);
void zx_xenc_Transforms_DEL_Transform(struct zx_xenc_Transforms_s* x, int n);
void zx_xenc_Transforms_REV_Transform(struct zx_xenc_Transforms_s* x);

/* -------------------------- root -------------------------- */
/* refby( ) */
#ifndef zx_root_EXT
#define zx_root_EXT
#endif

struct zx_root_s* zx_DEC_root(struct zx_ctx* c);
struct zx_root_s* zx_NEW_root(struct zx_ctx* c);
struct zx_root_s* zx_DEEP_CLONE_root(struct zx_ctx* c, struct zx_root_s* x, int dup_strs);
void zx_DUP_STRS_root(struct zx_ctx* c, struct zx_root_s* x);
void zx_FREE_root(struct zx_ctx* c, struct zx_root_s* x, int free_strs);
int zx_WALK_SO_root(struct zx_ctx* c, struct zx_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_root(struct zx_ctx* c, struct zx_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_LEN_root(struct zx_root_s* x);
char* zx_ENC_SO_root(struct zx_root_s* x, char* p);
char* zx_ENC_WO_root(struct zx_root_s* x, char* p);
struct zx_str_s* zx_EASY_ENC_SO_root(struct zx_ctx* c, struct zx_root_s* x);
struct zx_str_s* zx_EASY_ENC_WO_root(struct zx_ctx* c, struct zx_root_s* x);

struct zx_root_s {
  ZX_ELEM_EXT
  zx_root_EXT
  struct zx_sa_Assertion_s* Assertion;	/* {0,-1} root */
  struct zx_sp_AuthnRequest_s* AuthnRequest;	/* {0,-1} root */
  struct zx_sp_Response_s* Response;	/* {0,-1} root */
  struct zx_sp_LogoutRequest_s* LogoutRequest;	/* {0,-1} root */
  struct zx_sp_LogoutResponse_s* LogoutResponse;	/* {0,-1} root */
  struct zx_sp_ManageNameIDRequest_s* ManageNameIDRequest;	/* {0,-1} root */
  struct zx_sp_ManageNameIDResponse_s* ManageNameIDResponse;	/* {0,-1} root */
  struct zx_se_Envelope_s* Envelope;	/* {0,-1} root */
  struct zx_sa11_Assertion_s* sa11_Assertion;	/* {0,-1} root */
  struct zx_sp11_Request_s* Request;	/* {0,-1} root */
  struct zx_sp11_Response_s* sp11_Response;	/* {0,-1} root */
  struct zx_ff12_Assertion_s* ff12_Assertion;	/* {0,-1} root */
  struct zx_ff12_AuthnRequest_s* ff12_AuthnRequest;	/* {0,-1} root */
  struct zx_ff12_AuthnResponse_s* AuthnResponse;	/* {0,-1} root */
  struct zx_ff12_AuthnRequestEnvelope_s* AuthnRequestEnvelope;	/* {0,-1} root */
  struct zx_ff12_AuthnResponseEnvelope_s* AuthnResponseEnvelope;	/* {0,-1} root */
  struct zx_ff12_RegisterNameIdentifierRequest_s* RegisterNameIdentifierRequest;	/* {0,-1} root */
  struct zx_ff12_RegisterNameIdentifierResponse_s* RegisterNameIdentifierResponse;	/* {0,-1} root */
  struct zx_ff12_FederationTerminationNotification_s* FederationTerminationNotification;	/* {0,-1} root */
  struct zx_ff12_LogoutRequest_s* ff12_LogoutRequest;	/* {0,-1} root */
  struct zx_ff12_LogoutResponse_s* ff12_LogoutResponse;	/* {0,-1} root */
  struct zx_ff12_NameIdentifierMappingRequest_s* NameIdentifierMappingRequest;	/* {0,-1} root */
  struct zx_ff12_NameIdentifierMappingResponse_s* NameIdentifierMappingResponse;	/* {0,-1} root */
};

struct zx_sa_Assertion_s* zx_root_GET_Assertion(struct zx_root_s* x, int n);
struct zx_sp_AuthnRequest_s* zx_root_GET_AuthnRequest(struct zx_root_s* x, int n);
struct zx_sp_Response_s* zx_root_GET_Response(struct zx_root_s* x, int n);
struct zx_sp_LogoutRequest_s* zx_root_GET_LogoutRequest(struct zx_root_s* x, int n);
struct zx_sp_LogoutResponse_s* zx_root_GET_LogoutResponse(struct zx_root_s* x, int n);
struct zx_sp_ManageNameIDRequest_s* zx_root_GET_ManageNameIDRequest(struct zx_root_s* x, int n);
struct zx_sp_ManageNameIDResponse_s* zx_root_GET_ManageNameIDResponse(struct zx_root_s* x, int n);
struct zx_se_Envelope_s* zx_root_GET_Envelope(struct zx_root_s* x, int n);
struct zx_sa11_Assertion_s* zx_root_GET_sa11_Assertion(struct zx_root_s* x, int n);
struct zx_sp11_Request_s* zx_root_GET_Request(struct zx_root_s* x, int n);
struct zx_sp11_Response_s* zx_root_GET_sp11_Response(struct zx_root_s* x, int n);
struct zx_ff12_Assertion_s* zx_root_GET_ff12_Assertion(struct zx_root_s* x, int n);
struct zx_ff12_AuthnRequest_s* zx_root_GET_ff12_AuthnRequest(struct zx_root_s* x, int n);
struct zx_ff12_AuthnResponse_s* zx_root_GET_AuthnResponse(struct zx_root_s* x, int n);
struct zx_ff12_AuthnRequestEnvelope_s* zx_root_GET_AuthnRequestEnvelope(struct zx_root_s* x, int n);
struct zx_ff12_AuthnResponseEnvelope_s* zx_root_GET_AuthnResponseEnvelope(struct zx_root_s* x, int n);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_root_GET_RegisterNameIdentifierRequest(struct zx_root_s* x, int n);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_root_GET_RegisterNameIdentifierResponse(struct zx_root_s* x, int n);
struct zx_ff12_FederationTerminationNotification_s* zx_root_GET_FederationTerminationNotification(struct zx_root_s* x, int n);
struct zx_ff12_LogoutRequest_s* zx_root_GET_ff12_LogoutRequest(struct zx_root_s* x, int n);
struct zx_ff12_LogoutResponse_s* zx_root_GET_ff12_LogoutResponse(struct zx_root_s* x, int n);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_root_GET_NameIdentifierMappingRequest(struct zx_root_s* x, int n);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_root_GET_NameIdentifierMappingResponse(struct zx_root_s* x, int n);
int zx_root_NUM_Assertion(struct zx_root_s* x);
int zx_root_NUM_AuthnRequest(struct zx_root_s* x);
int zx_root_NUM_Response(struct zx_root_s* x);
int zx_root_NUM_LogoutRequest(struct zx_root_s* x);
int zx_root_NUM_LogoutResponse(struct zx_root_s* x);
int zx_root_NUM_ManageNameIDRequest(struct zx_root_s* x);
int zx_root_NUM_ManageNameIDResponse(struct zx_root_s* x);
int zx_root_NUM_Envelope(struct zx_root_s* x);
int zx_root_NUM_sa11_Assertion(struct zx_root_s* x);
int zx_root_NUM_Request(struct zx_root_s* x);
int zx_root_NUM_sp11_Response(struct zx_root_s* x);
int zx_root_NUM_ff12_Assertion(struct zx_root_s* x);
int zx_root_NUM_ff12_AuthnRequest(struct zx_root_s* x);
int zx_root_NUM_AuthnResponse(struct zx_root_s* x);
int zx_root_NUM_AuthnRequestEnvelope(struct zx_root_s* x);
int zx_root_NUM_AuthnResponseEnvelope(struct zx_root_s* x);
int zx_root_NUM_RegisterNameIdentifierRequest(struct zx_root_s* x);
int zx_root_NUM_RegisterNameIdentifierResponse(struct zx_root_s* x);
int zx_root_NUM_FederationTerminationNotification(struct zx_root_s* x);
int zx_root_NUM_ff12_LogoutRequest(struct zx_root_s* x);
int zx_root_NUM_ff12_LogoutResponse(struct zx_root_s* x);
int zx_root_NUM_NameIdentifierMappingRequest(struct zx_root_s* x);
int zx_root_NUM_NameIdentifierMappingResponse(struct zx_root_s* x);
struct zx_sa_Assertion_s* zx_root_POP_Assertion(struct zx_root_s* x);
struct zx_sp_AuthnRequest_s* zx_root_POP_AuthnRequest(struct zx_root_s* x);
struct zx_sp_Response_s* zx_root_POP_Response(struct zx_root_s* x);
struct zx_sp_LogoutRequest_s* zx_root_POP_LogoutRequest(struct zx_root_s* x);
struct zx_sp_LogoutResponse_s* zx_root_POP_LogoutResponse(struct zx_root_s* x);
struct zx_sp_ManageNameIDRequest_s* zx_root_POP_ManageNameIDRequest(struct zx_root_s* x);
struct zx_sp_ManageNameIDResponse_s* zx_root_POP_ManageNameIDResponse(struct zx_root_s* x);
struct zx_se_Envelope_s* zx_root_POP_Envelope(struct zx_root_s* x);
struct zx_sa11_Assertion_s* zx_root_POP_sa11_Assertion(struct zx_root_s* x);
struct zx_sp11_Request_s* zx_root_POP_Request(struct zx_root_s* x);
struct zx_sp11_Response_s* zx_root_POP_sp11_Response(struct zx_root_s* x);
struct zx_ff12_Assertion_s* zx_root_POP_ff12_Assertion(struct zx_root_s* x);
struct zx_ff12_AuthnRequest_s* zx_root_POP_ff12_AuthnRequest(struct zx_root_s* x);
struct zx_ff12_AuthnResponse_s* zx_root_POP_AuthnResponse(struct zx_root_s* x);
struct zx_ff12_AuthnRequestEnvelope_s* zx_root_POP_AuthnRequestEnvelope(struct zx_root_s* x);
struct zx_ff12_AuthnResponseEnvelope_s* zx_root_POP_AuthnResponseEnvelope(struct zx_root_s* x);
struct zx_ff12_RegisterNameIdentifierRequest_s* zx_root_POP_RegisterNameIdentifierRequest(struct zx_root_s* x);
struct zx_ff12_RegisterNameIdentifierResponse_s* zx_root_POP_RegisterNameIdentifierResponse(struct zx_root_s* x);
struct zx_ff12_FederationTerminationNotification_s* zx_root_POP_FederationTerminationNotification(struct zx_root_s* x);
struct zx_ff12_LogoutRequest_s* zx_root_POP_ff12_LogoutRequest(struct zx_root_s* x);
struct zx_ff12_LogoutResponse_s* zx_root_POP_ff12_LogoutResponse(struct zx_root_s* x);
struct zx_ff12_NameIdentifierMappingRequest_s* zx_root_POP_NameIdentifierMappingRequest(struct zx_root_s* x);
struct zx_ff12_NameIdentifierMappingResponse_s* zx_root_POP_NameIdentifierMappingResponse(struct zx_root_s* x);
void zx_root_PUSH_Assertion(struct zx_root_s* x, struct zx_sa_Assertion_s* y);
void zx_root_PUSH_AuthnRequest(struct zx_root_s* x, struct zx_sp_AuthnRequest_s* y);
void zx_root_PUSH_Response(struct zx_root_s* x, struct zx_sp_Response_s* y);
void zx_root_PUSH_LogoutRequest(struct zx_root_s* x, struct zx_sp_LogoutRequest_s* y);
void zx_root_PUSH_LogoutResponse(struct zx_root_s* x, struct zx_sp_LogoutResponse_s* y);
void zx_root_PUSH_ManageNameIDRequest(struct zx_root_s* x, struct zx_sp_ManageNameIDRequest_s* y);
void zx_root_PUSH_ManageNameIDResponse(struct zx_root_s* x, struct zx_sp_ManageNameIDResponse_s* y);
void zx_root_PUSH_Envelope(struct zx_root_s* x, struct zx_se_Envelope_s* y);
void zx_root_PUSH_sa11_Assertion(struct zx_root_s* x, struct zx_sa11_Assertion_s* y);
void zx_root_PUSH_Request(struct zx_root_s* x, struct zx_sp11_Request_s* y);
void zx_root_PUSH_sp11_Response(struct zx_root_s* x, struct zx_sp11_Response_s* y);
void zx_root_PUSH_ff12_Assertion(struct zx_root_s* x, struct zx_ff12_Assertion_s* y);
void zx_root_PUSH_ff12_AuthnRequest(struct zx_root_s* x, struct zx_ff12_AuthnRequest_s* y);
void zx_root_PUSH_AuthnResponse(struct zx_root_s* x, struct zx_ff12_AuthnResponse_s* y);
void zx_root_PUSH_AuthnRequestEnvelope(struct zx_root_s* x, struct zx_ff12_AuthnRequestEnvelope_s* y);
void zx_root_PUSH_AuthnResponseEnvelope(struct zx_root_s* x, struct zx_ff12_AuthnResponseEnvelope_s* y);
void zx_root_PUSH_RegisterNameIdentifierRequest(struct zx_root_s* x, struct zx_ff12_RegisterNameIdentifierRequest_s* y);
void zx_root_PUSH_RegisterNameIdentifierResponse(struct zx_root_s* x, struct zx_ff12_RegisterNameIdentifierResponse_s* y);
void zx_root_PUSH_FederationTerminationNotification(struct zx_root_s* x, struct zx_ff12_FederationTerminationNotification_s* y);
void zx_root_PUSH_ff12_LogoutRequest(struct zx_root_s* x, struct zx_ff12_LogoutRequest_s* y);
void zx_root_PUSH_ff12_LogoutResponse(struct zx_root_s* x, struct zx_ff12_LogoutResponse_s* y);
void zx_root_PUSH_NameIdentifierMappingRequest(struct zx_root_s* x, struct zx_ff12_NameIdentifierMappingRequest_s* y);
void zx_root_PUSH_NameIdentifierMappingResponse(struct zx_root_s* x, struct zx_ff12_NameIdentifierMappingResponse_s* y);
void zx_root_PUT_Assertion(struct zx_root_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_root_PUT_AuthnRequest(struct zx_root_s* x, int n, struct zx_sp_AuthnRequest_s* y);
void zx_root_PUT_Response(struct zx_root_s* x, int n, struct zx_sp_Response_s* y);
void zx_root_PUT_LogoutRequest(struct zx_root_s* x, int n, struct zx_sp_LogoutRequest_s* y);
void zx_root_PUT_LogoutResponse(struct zx_root_s* x, int n, struct zx_sp_LogoutResponse_s* y);
void zx_root_PUT_ManageNameIDRequest(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDRequest_s* y);
void zx_root_PUT_ManageNameIDResponse(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDResponse_s* y);
void zx_root_PUT_Envelope(struct zx_root_s* x, int n, struct zx_se_Envelope_s* y);
void zx_root_PUT_sa11_Assertion(struct zx_root_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_root_PUT_Request(struct zx_root_s* x, int n, struct zx_sp11_Request_s* y);
void zx_root_PUT_sp11_Response(struct zx_root_s* x, int n, struct zx_sp11_Response_s* y);
void zx_root_PUT_ff12_Assertion(struct zx_root_s* x, int n, struct zx_ff12_Assertion_s* y);
void zx_root_PUT_ff12_AuthnRequest(struct zx_root_s* x, int n, struct zx_ff12_AuthnRequest_s* y);
void zx_root_PUT_AuthnResponse(struct zx_root_s* x, int n, struct zx_ff12_AuthnResponse_s* y);
void zx_root_PUT_AuthnRequestEnvelope(struct zx_root_s* x, int n, struct zx_ff12_AuthnRequestEnvelope_s* y);
void zx_root_PUT_AuthnResponseEnvelope(struct zx_root_s* x, int n, struct zx_ff12_AuthnResponseEnvelope_s* y);
void zx_root_PUT_RegisterNameIdentifierRequest(struct zx_root_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* y);
void zx_root_PUT_RegisterNameIdentifierResponse(struct zx_root_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* y);
void zx_root_PUT_FederationTerminationNotification(struct zx_root_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* y);
void zx_root_PUT_ff12_LogoutRequest(struct zx_root_s* x, int n, struct zx_ff12_LogoutRequest_s* y);
void zx_root_PUT_ff12_LogoutResponse(struct zx_root_s* x, int n, struct zx_ff12_LogoutResponse_s* y);
void zx_root_PUT_NameIdentifierMappingRequest(struct zx_root_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* y);
void zx_root_PUT_NameIdentifierMappingResponse(struct zx_root_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* y);
void zx_root_ADD_Assertion(struct zx_root_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_root_ADD_AuthnRequest(struct zx_root_s* x, int n, struct zx_sp_AuthnRequest_s* z);
void zx_root_ADD_Response(struct zx_root_s* x, int n, struct zx_sp_Response_s* z);
void zx_root_ADD_LogoutRequest(struct zx_root_s* x, int n, struct zx_sp_LogoutRequest_s* z);
void zx_root_ADD_LogoutResponse(struct zx_root_s* x, int n, struct zx_sp_LogoutResponse_s* z);
void zx_root_ADD_ManageNameIDRequest(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z);
void zx_root_ADD_ManageNameIDResponse(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z);
void zx_root_ADD_Envelope(struct zx_root_s* x, int n, struct zx_se_Envelope_s* z);
void zx_root_ADD_sa11_Assertion(struct zx_root_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_root_ADD_Request(struct zx_root_s* x, int n, struct zx_sp11_Request_s* z);
void zx_root_ADD_sp11_Response(struct zx_root_s* x, int n, struct zx_sp11_Response_s* z);
void zx_root_ADD_ff12_Assertion(struct zx_root_s* x, int n, struct zx_ff12_Assertion_s* z);
void zx_root_ADD_ff12_AuthnRequest(struct zx_root_s* x, int n, struct zx_ff12_AuthnRequest_s* z);
void zx_root_ADD_AuthnResponse(struct zx_root_s* x, int n, struct zx_ff12_AuthnResponse_s* z);
void zx_root_ADD_AuthnRequestEnvelope(struct zx_root_s* x, int n, struct zx_ff12_AuthnRequestEnvelope_s* z);
void zx_root_ADD_AuthnResponseEnvelope(struct zx_root_s* x, int n, struct zx_ff12_AuthnResponseEnvelope_s* z);
void zx_root_ADD_RegisterNameIdentifierRequest(struct zx_root_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z);
void zx_root_ADD_RegisterNameIdentifierResponse(struct zx_root_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z);
void zx_root_ADD_FederationTerminationNotification(struct zx_root_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z);
void zx_root_ADD_ff12_LogoutRequest(struct zx_root_s* x, int n, struct zx_ff12_LogoutRequest_s* z);
void zx_root_ADD_ff12_LogoutResponse(struct zx_root_s* x, int n, struct zx_ff12_LogoutResponse_s* z);
void zx_root_ADD_NameIdentifierMappingRequest(struct zx_root_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z);
void zx_root_ADD_NameIdentifierMappingResponse(struct zx_root_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z);
void zx_root_DEL_Assertion(struct zx_root_s* x, int n);
void zx_root_DEL_AuthnRequest(struct zx_root_s* x, int n);
void zx_root_DEL_Response(struct zx_root_s* x, int n);
void zx_root_DEL_LogoutRequest(struct zx_root_s* x, int n);
void zx_root_DEL_LogoutResponse(struct zx_root_s* x, int n);
void zx_root_DEL_ManageNameIDRequest(struct zx_root_s* x, int n);
void zx_root_DEL_ManageNameIDResponse(struct zx_root_s* x, int n);
void zx_root_DEL_Envelope(struct zx_root_s* x, int n);
void zx_root_DEL_sa11_Assertion(struct zx_root_s* x, int n);
void zx_root_DEL_Request(struct zx_root_s* x, int n);
void zx_root_DEL_sp11_Response(struct zx_root_s* x, int n);
void zx_root_DEL_ff12_Assertion(struct zx_root_s* x, int n);
void zx_root_DEL_ff12_AuthnRequest(struct zx_root_s* x, int n);
void zx_root_DEL_AuthnResponse(struct zx_root_s* x, int n);
void zx_root_DEL_AuthnRequestEnvelope(struct zx_root_s* x, int n);
void zx_root_DEL_AuthnResponseEnvelope(struct zx_root_s* x, int n);
void zx_root_DEL_RegisterNameIdentifierRequest(struct zx_root_s* x, int n);
void zx_root_DEL_RegisterNameIdentifierResponse(struct zx_root_s* x, int n);
void zx_root_DEL_FederationTerminationNotification(struct zx_root_s* x, int n);
void zx_root_DEL_ff12_LogoutRequest(struct zx_root_s* x, int n);
void zx_root_DEL_ff12_LogoutResponse(struct zx_root_s* x, int n);
void zx_root_DEL_NameIdentifierMappingRequest(struct zx_root_s* x, int n);
void zx_root_DEL_NameIdentifierMappingResponse(struct zx_root_s* x, int n);
void zx_root_REV_Assertion(struct zx_root_s* x);
void zx_root_REV_AuthnRequest(struct zx_root_s* x);
void zx_root_REV_Response(struct zx_root_s* x);
void zx_root_REV_LogoutRequest(struct zx_root_s* x);
void zx_root_REV_LogoutResponse(struct zx_root_s* x);
void zx_root_REV_ManageNameIDRequest(struct zx_root_s* x);
void zx_root_REV_ManageNameIDResponse(struct zx_root_s* x);
void zx_root_REV_Envelope(struct zx_root_s* x);
void zx_root_REV_sa11_Assertion(struct zx_root_s* x);
void zx_root_REV_Request(struct zx_root_s* x);
void zx_root_REV_sp11_Response(struct zx_root_s* x);
void zx_root_REV_ff12_Assertion(struct zx_root_s* x);
void zx_root_REV_ff12_AuthnRequest(struct zx_root_s* x);
void zx_root_REV_AuthnResponse(struct zx_root_s* x);
void zx_root_REV_AuthnRequestEnvelope(struct zx_root_s* x);
void zx_root_REV_AuthnResponseEnvelope(struct zx_root_s* x);
void zx_root_REV_RegisterNameIdentifierRequest(struct zx_root_s* x);
void zx_root_REV_RegisterNameIdentifierResponse(struct zx_root_s* x);
void zx_root_REV_FederationTerminationNotification(struct zx_root_s* x);
void zx_root_REV_ff12_LogoutRequest(struct zx_root_s* x);
void zx_root_REV_ff12_LogoutResponse(struct zx_root_s* x);
void zx_root_REV_NameIdentifierMappingRequest(struct zx_root_s* x);
void zx_root_REV_NameIdentifierMappingResponse(struct zx_root_s* x);

int zx_LEN_simple_elem(struct zx_elem_s* x , int simplelen);
char* zx_ENC_SO_simple_elem(struct zx_elem_s* x, char* p, char* simpletag, int simplelen);
char* zx_ENC_WO_simple_elem(struct zx_elem_s* x, char* p, char* simpletag, int simplelen);
struct zx_str_s* zx_EASY_ENC_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, char* simpletag, int simplelen);
struct zx_str_s* zx_EASY_ENC_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, char* simpletag, int simplelen);
struct zx_elem_s* zx_DEC_simple_elem(struct zx_ctx* c, int tok);
struct zx_any_elem_s* zx_DEC_wrong_elem(struct zx_ctx* c, char* nam, int namlen);
void zx_DUP_STRS_simple_elem(struct zx_ctx* c, struct zx_elem_s* x);
struct zx_elem_s* zx_DEEP_CLONE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs);
void zx_FREE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int free_strs);
int zx_WALK_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
struct zx_elem_s* zx_NEXT_simple_elem(struct zx_ctx* c, struct zx_elem_s* x);

#endif
