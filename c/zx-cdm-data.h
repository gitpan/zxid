/* c/zx-cdm-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_cdm_data_h
#define _c_zx_cdm_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- cdm_ADR -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_ADR_EXT
#define zx_cdm_ADR_EXT
#endif

struct zx_cdm_ADR_s* zx_DEC_cdm_ADR(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_ADR_s* zx_NEW_cdm_ADR(struct zx_ctx* c);
void zx_FREE_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_ADR_s* zx_DEEP_CLONE_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x, int dup_strs);
void zx_DUP_STRS_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x);
int zx_WALK_SO_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x);
int zx_LEN_WO_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x);
char* zx_ENC_SO_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x, char* p);
char* zx_ENC_WO_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_ADR(struct zx_ctx* c, struct zx_cdm_ADR_s* x);

struct zx_cdm_ADR_s {
  ZX_ELEM_EXT
  zx_cdm_ADR_EXT
  struct zx_elem_s* HOME;	/* {0,1} xs:string */
  struct zx_elem_s* WORK;	/* {0,1} xs:string */
  struct zx_elem_s* POSTAL;	/* {0,1} xs:string */
  struct zx_elem_s* PARCEL;	/* {0,1} xs:string */
  struct zx_elem_s* DOM;	/* {0,1} xs:string */
  struct zx_elem_s* INTL;	/* {0,1} xs:string */
  struct zx_elem_s* PREF;	/* {0,1} xs:string */
  struct zx_cdm_POBOX_s* POBOX;	/* {0,1} nada */
  struct zx_cdm_EXTADR_s* EXTADR;	/* {0,1} nada */
  struct zx_cdm_STREET_s* STREET;	/* {0,1} nada */
  struct zx_cdm_LOCALITY_s* LOCALITY;	/* {0,1} nada */
  struct zx_cdm_REGION_s* REGION;	/* {0,1} nada */
  struct zx_cdm_PCODE_s* PCODE;	/* {0,1} nada */
  struct zx_cdm_CTRY_s* CTRY;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_ADR_GET_id(struct zx_cdm_ADR_s* x);
struct zx_str* zx_cdm_ADR_GET_modificationTime(struct zx_cdm_ADR_s* x);

struct zx_elem_s* zx_cdm_ADR_GET_HOME(struct zx_cdm_ADR_s* x, int n);
struct zx_elem_s* zx_cdm_ADR_GET_WORK(struct zx_cdm_ADR_s* x, int n);
struct zx_elem_s* zx_cdm_ADR_GET_POSTAL(struct zx_cdm_ADR_s* x, int n);
struct zx_elem_s* zx_cdm_ADR_GET_PARCEL(struct zx_cdm_ADR_s* x, int n);
struct zx_elem_s* zx_cdm_ADR_GET_DOM(struct zx_cdm_ADR_s* x, int n);
struct zx_elem_s* zx_cdm_ADR_GET_INTL(struct zx_cdm_ADR_s* x, int n);
struct zx_elem_s* zx_cdm_ADR_GET_PREF(struct zx_cdm_ADR_s* x, int n);
struct zx_cdm_POBOX_s* zx_cdm_ADR_GET_POBOX(struct zx_cdm_ADR_s* x, int n);
struct zx_cdm_EXTADR_s* zx_cdm_ADR_GET_EXTADR(struct zx_cdm_ADR_s* x, int n);
struct zx_cdm_STREET_s* zx_cdm_ADR_GET_STREET(struct zx_cdm_ADR_s* x, int n);
struct zx_cdm_LOCALITY_s* zx_cdm_ADR_GET_LOCALITY(struct zx_cdm_ADR_s* x, int n);
struct zx_cdm_REGION_s* zx_cdm_ADR_GET_REGION(struct zx_cdm_ADR_s* x, int n);
struct zx_cdm_PCODE_s* zx_cdm_ADR_GET_PCODE(struct zx_cdm_ADR_s* x, int n);
struct zx_cdm_CTRY_s* zx_cdm_ADR_GET_CTRY(struct zx_cdm_ADR_s* x, int n);

int zx_cdm_ADR_NUM_HOME(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_WORK(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_POSTAL(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_PARCEL(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_DOM(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_INTL(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_PREF(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_POBOX(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_EXTADR(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_STREET(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_LOCALITY(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_REGION(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_PCODE(struct zx_cdm_ADR_s* x);
int zx_cdm_ADR_NUM_CTRY(struct zx_cdm_ADR_s* x);

struct zx_elem_s* zx_cdm_ADR_POP_HOME(struct zx_cdm_ADR_s* x);
struct zx_elem_s* zx_cdm_ADR_POP_WORK(struct zx_cdm_ADR_s* x);
struct zx_elem_s* zx_cdm_ADR_POP_POSTAL(struct zx_cdm_ADR_s* x);
struct zx_elem_s* zx_cdm_ADR_POP_PARCEL(struct zx_cdm_ADR_s* x);
struct zx_elem_s* zx_cdm_ADR_POP_DOM(struct zx_cdm_ADR_s* x);
struct zx_elem_s* zx_cdm_ADR_POP_INTL(struct zx_cdm_ADR_s* x);
struct zx_elem_s* zx_cdm_ADR_POP_PREF(struct zx_cdm_ADR_s* x);
struct zx_cdm_POBOX_s* zx_cdm_ADR_POP_POBOX(struct zx_cdm_ADR_s* x);
struct zx_cdm_EXTADR_s* zx_cdm_ADR_POP_EXTADR(struct zx_cdm_ADR_s* x);
struct zx_cdm_STREET_s* zx_cdm_ADR_POP_STREET(struct zx_cdm_ADR_s* x);
struct zx_cdm_LOCALITY_s* zx_cdm_ADR_POP_LOCALITY(struct zx_cdm_ADR_s* x);
struct zx_cdm_REGION_s* zx_cdm_ADR_POP_REGION(struct zx_cdm_ADR_s* x);
struct zx_cdm_PCODE_s* zx_cdm_ADR_POP_PCODE(struct zx_cdm_ADR_s* x);
struct zx_cdm_CTRY_s* zx_cdm_ADR_POP_CTRY(struct zx_cdm_ADR_s* x);

void zx_cdm_ADR_PUSH_HOME(struct zx_cdm_ADR_s* x, struct zx_elem_s* y);
void zx_cdm_ADR_PUSH_WORK(struct zx_cdm_ADR_s* x, struct zx_elem_s* y);
void zx_cdm_ADR_PUSH_POSTAL(struct zx_cdm_ADR_s* x, struct zx_elem_s* y);
void zx_cdm_ADR_PUSH_PARCEL(struct zx_cdm_ADR_s* x, struct zx_elem_s* y);
void zx_cdm_ADR_PUSH_DOM(struct zx_cdm_ADR_s* x, struct zx_elem_s* y);
void zx_cdm_ADR_PUSH_INTL(struct zx_cdm_ADR_s* x, struct zx_elem_s* y);
void zx_cdm_ADR_PUSH_PREF(struct zx_cdm_ADR_s* x, struct zx_elem_s* y);
void zx_cdm_ADR_PUSH_POBOX(struct zx_cdm_ADR_s* x, struct zx_cdm_POBOX_s* y);
void zx_cdm_ADR_PUSH_EXTADR(struct zx_cdm_ADR_s* x, struct zx_cdm_EXTADR_s* y);
void zx_cdm_ADR_PUSH_STREET(struct zx_cdm_ADR_s* x, struct zx_cdm_STREET_s* y);
void zx_cdm_ADR_PUSH_LOCALITY(struct zx_cdm_ADR_s* x, struct zx_cdm_LOCALITY_s* y);
void zx_cdm_ADR_PUSH_REGION(struct zx_cdm_ADR_s* x, struct zx_cdm_REGION_s* y);
void zx_cdm_ADR_PUSH_PCODE(struct zx_cdm_ADR_s* x, struct zx_cdm_PCODE_s* y);
void zx_cdm_ADR_PUSH_CTRY(struct zx_cdm_ADR_s* x, struct zx_cdm_CTRY_s* y);

void zx_cdm_ADR_PUT_id(struct zx_cdm_ADR_s* x, struct zx_str* y);
void zx_cdm_ADR_PUT_modificationTime(struct zx_cdm_ADR_s* x, struct zx_str* y);

void zx_cdm_ADR_PUT_HOME(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* y);
void zx_cdm_ADR_PUT_WORK(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* y);
void zx_cdm_ADR_PUT_POSTAL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* y);
void zx_cdm_ADR_PUT_PARCEL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* y);
void zx_cdm_ADR_PUT_DOM(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* y);
void zx_cdm_ADR_PUT_INTL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* y);
void zx_cdm_ADR_PUT_PREF(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* y);
void zx_cdm_ADR_PUT_POBOX(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_POBOX_s* y);
void zx_cdm_ADR_PUT_EXTADR(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_EXTADR_s* y);
void zx_cdm_ADR_PUT_STREET(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_STREET_s* y);
void zx_cdm_ADR_PUT_LOCALITY(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_LOCALITY_s* y);
void zx_cdm_ADR_PUT_REGION(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_REGION_s* y);
void zx_cdm_ADR_PUT_PCODE(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_PCODE_s* y);
void zx_cdm_ADR_PUT_CTRY(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_CTRY_s* y);

void zx_cdm_ADR_ADD_HOME(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z);
void zx_cdm_ADR_ADD_WORK(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z);
void zx_cdm_ADR_ADD_POSTAL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z);
void zx_cdm_ADR_ADD_PARCEL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z);
void zx_cdm_ADR_ADD_DOM(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z);
void zx_cdm_ADR_ADD_INTL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z);
void zx_cdm_ADR_ADD_PREF(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z);
void zx_cdm_ADR_ADD_POBOX(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_POBOX_s* z);
void zx_cdm_ADR_ADD_EXTADR(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_EXTADR_s* z);
void zx_cdm_ADR_ADD_STREET(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_STREET_s* z);
void zx_cdm_ADR_ADD_LOCALITY(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_LOCALITY_s* z);
void zx_cdm_ADR_ADD_REGION(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_REGION_s* z);
void zx_cdm_ADR_ADD_PCODE(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_PCODE_s* z);
void zx_cdm_ADR_ADD_CTRY(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_CTRY_s* z);

void zx_cdm_ADR_DEL_HOME(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_WORK(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_POSTAL(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_PARCEL(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_DOM(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_INTL(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_PREF(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_POBOX(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_EXTADR(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_STREET(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_LOCALITY(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_REGION(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_PCODE(struct zx_cdm_ADR_s* x, int n);
void zx_cdm_ADR_DEL_CTRY(struct zx_cdm_ADR_s* x, int n);

void zx_cdm_ADR_REV_HOME(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_WORK(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_POSTAL(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_PARCEL(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_DOM(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_INTL(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_PREF(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_POBOX(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_EXTADR(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_STREET(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_LOCALITY(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_REGION(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_PCODE(struct zx_cdm_ADR_s* x);
void zx_cdm_ADR_REV_CTRY(struct zx_cdm_ADR_s* x);

#endif
/* -------------------------- cdm_AGENT -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_AGENT_EXT
#define zx_cdm_AGENT_EXT
#endif

struct zx_cdm_AGENT_s* zx_DEC_cdm_AGENT(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_AGENT_s* zx_NEW_cdm_AGENT(struct zx_ctx* c);
void zx_FREE_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_AGENT_s* zx_DEEP_CLONE_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x, int dup_strs);
void zx_DUP_STRS_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x);
int zx_WALK_SO_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x);
int zx_LEN_WO_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x);
char* zx_ENC_SO_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x, char* p);
char* zx_ENC_WO_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_AGENT(struct zx_ctx* c, struct zx_cdm_AGENT_s* x);

struct zx_cdm_AGENT_s {
  ZX_ELEM_EXT
  zx_cdm_AGENT_EXT
  struct zx_cdm_vCard_s* vCard;	/* {0,1} nada */
  struct zx_cdm_EXTVAL_s* EXTVAL;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_AGENT_GET_id(struct zx_cdm_AGENT_s* x);
struct zx_str* zx_cdm_AGENT_GET_modificationTime(struct zx_cdm_AGENT_s* x);

struct zx_cdm_vCard_s* zx_cdm_AGENT_GET_vCard(struct zx_cdm_AGENT_s* x, int n);
struct zx_cdm_EXTVAL_s* zx_cdm_AGENT_GET_EXTVAL(struct zx_cdm_AGENT_s* x, int n);

int zx_cdm_AGENT_NUM_vCard(struct zx_cdm_AGENT_s* x);
int zx_cdm_AGENT_NUM_EXTVAL(struct zx_cdm_AGENT_s* x);

struct zx_cdm_vCard_s* zx_cdm_AGENT_POP_vCard(struct zx_cdm_AGENT_s* x);
struct zx_cdm_EXTVAL_s* zx_cdm_AGENT_POP_EXTVAL(struct zx_cdm_AGENT_s* x);

void zx_cdm_AGENT_PUSH_vCard(struct zx_cdm_AGENT_s* x, struct zx_cdm_vCard_s* y);
void zx_cdm_AGENT_PUSH_EXTVAL(struct zx_cdm_AGENT_s* x, struct zx_cdm_EXTVAL_s* y);

void zx_cdm_AGENT_PUT_id(struct zx_cdm_AGENT_s* x, struct zx_str* y);
void zx_cdm_AGENT_PUT_modificationTime(struct zx_cdm_AGENT_s* x, struct zx_str* y);

void zx_cdm_AGENT_PUT_vCard(struct zx_cdm_AGENT_s* x, int n, struct zx_cdm_vCard_s* y);
void zx_cdm_AGENT_PUT_EXTVAL(struct zx_cdm_AGENT_s* x, int n, struct zx_cdm_EXTVAL_s* y);

void zx_cdm_AGENT_ADD_vCard(struct zx_cdm_AGENT_s* x, int n, struct zx_cdm_vCard_s* z);
void zx_cdm_AGENT_ADD_EXTVAL(struct zx_cdm_AGENT_s* x, int n, struct zx_cdm_EXTVAL_s* z);

void zx_cdm_AGENT_DEL_vCard(struct zx_cdm_AGENT_s* x, int n);
void zx_cdm_AGENT_DEL_EXTVAL(struct zx_cdm_AGENT_s* x, int n);

void zx_cdm_AGENT_REV_vCard(struct zx_cdm_AGENT_s* x);
void zx_cdm_AGENT_REV_EXTVAL(struct zx_cdm_AGENT_s* x);

#endif
/* -------------------------- cdm_BDAY -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_BDAY_EXT
#define zx_cdm_BDAY_EXT
#endif

struct zx_cdm_BDAY_s* zx_DEC_cdm_BDAY(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_BDAY_s* zx_NEW_cdm_BDAY(struct zx_ctx* c);
void zx_FREE_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_BDAY_s* zx_DEEP_CLONE_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x, int dup_strs);
void zx_DUP_STRS_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x);
int zx_WALK_SO_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x);
int zx_LEN_WO_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x);
char* zx_ENC_SO_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x, char* p);
char* zx_ENC_WO_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_BDAY(struct zx_ctx* c, struct zx_cdm_BDAY_s* x);

struct zx_cdm_BDAY_s {
  ZX_ELEM_EXT
  zx_cdm_BDAY_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_BDAY_GET_id(struct zx_cdm_BDAY_s* x);
struct zx_str* zx_cdm_BDAY_GET_modificationTime(struct zx_cdm_BDAY_s* x);
struct zx_str* zx_cdm_BDAY_GET_ACC(struct zx_cdm_BDAY_s* x);
struct zx_str* zx_cdm_BDAY_GET_ACCTime(struct zx_cdm_BDAY_s* x);
struct zx_str* zx_cdm_BDAY_GET_modifier(struct zx_cdm_BDAY_s* x);





void zx_cdm_BDAY_PUT_id(struct zx_cdm_BDAY_s* x, struct zx_str* y);
void zx_cdm_BDAY_PUT_modificationTime(struct zx_cdm_BDAY_s* x, struct zx_str* y);
void zx_cdm_BDAY_PUT_ACC(struct zx_cdm_BDAY_s* x, struct zx_str* y);
void zx_cdm_BDAY_PUT_ACCTime(struct zx_cdm_BDAY_s* x, struct zx_str* y);
void zx_cdm_BDAY_PUT_modifier(struct zx_cdm_BDAY_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_BINVAL -------------------------- */
/* refby( zx_cdm_LOGO_s zx_cdm_PHOTO_s zx_cdm_SOUND_s ) */
#ifndef zx_cdm_BINVAL_EXT
#define zx_cdm_BINVAL_EXT
#endif

struct zx_cdm_BINVAL_s* zx_DEC_cdm_BINVAL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_BINVAL_s* zx_NEW_cdm_BINVAL(struct zx_ctx* c);
void zx_FREE_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_BINVAL_s* zx_DEEP_CLONE_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x, int dup_strs);
void zx_DUP_STRS_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x);
int zx_WALK_SO_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x);
int zx_LEN_WO_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x);
char* zx_ENC_SO_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x, char* p);
char* zx_ENC_WO_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_BINVAL(struct zx_ctx* c, struct zx_cdm_BINVAL_s* x);

struct zx_cdm_BINVAL_s {
  ZX_ELEM_EXT
  zx_cdm_BINVAL_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_BINVAL_GET_id(struct zx_cdm_BINVAL_s* x);
struct zx_str* zx_cdm_BINVAL_GET_modificationTime(struct zx_cdm_BINVAL_s* x);
struct zx_str* zx_cdm_BINVAL_GET_ACC(struct zx_cdm_BINVAL_s* x);
struct zx_str* zx_cdm_BINVAL_GET_ACCTime(struct zx_cdm_BINVAL_s* x);
struct zx_str* zx_cdm_BINVAL_GET_modifier(struct zx_cdm_BINVAL_s* x);





void zx_cdm_BINVAL_PUT_id(struct zx_cdm_BINVAL_s* x, struct zx_str* y);
void zx_cdm_BINVAL_PUT_modificationTime(struct zx_cdm_BINVAL_s* x, struct zx_str* y);
void zx_cdm_BINVAL_PUT_ACC(struct zx_cdm_BINVAL_s* x, struct zx_str* y);
void zx_cdm_BINVAL_PUT_ACCTime(struct zx_cdm_BINVAL_s* x, struct zx_str* y);
void zx_cdm_BINVAL_PUT_modifier(struct zx_cdm_BINVAL_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_CALADRURI -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_CALADRURI_EXT
#define zx_cdm_CALADRURI_EXT
#endif

struct zx_cdm_CALADRURI_s* zx_DEC_cdm_CALADRURI(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_CALADRURI_s* zx_NEW_cdm_CALADRURI(struct zx_ctx* c);
void zx_FREE_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_CALADRURI_s* zx_DEEP_CLONE_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x, int dup_strs);
void zx_DUP_STRS_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x);
int zx_WALK_SO_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x);
int zx_LEN_WO_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x);
char* zx_ENC_SO_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x, char* p);
char* zx_ENC_WO_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_CALADRURI(struct zx_ctx* c, struct zx_cdm_CALADRURI_s* x);

struct zx_cdm_CALADRURI_s {
  ZX_ELEM_EXT
  zx_cdm_CALADRURI_EXT
  struct zx_elem_s* PREF;	/* {0,1} xs:string */
  struct zx_cdm_URI_s* URI;	/* {1,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_CALADRURI_GET_id(struct zx_cdm_CALADRURI_s* x);
struct zx_str* zx_cdm_CALADRURI_GET_modificationTime(struct zx_cdm_CALADRURI_s* x);
struct zx_str* zx_cdm_CALADRURI_GET_ACC(struct zx_cdm_CALADRURI_s* x);
struct zx_str* zx_cdm_CALADRURI_GET_ACCTime(struct zx_cdm_CALADRURI_s* x);
struct zx_str* zx_cdm_CALADRURI_GET_modifier(struct zx_cdm_CALADRURI_s* x);

struct zx_elem_s* zx_cdm_CALADRURI_GET_PREF(struct zx_cdm_CALADRURI_s* x, int n);
struct zx_cdm_URI_s* zx_cdm_CALADRURI_GET_URI(struct zx_cdm_CALADRURI_s* x, int n);

int zx_cdm_CALADRURI_NUM_PREF(struct zx_cdm_CALADRURI_s* x);
int zx_cdm_CALADRURI_NUM_URI(struct zx_cdm_CALADRURI_s* x);

struct zx_elem_s* zx_cdm_CALADRURI_POP_PREF(struct zx_cdm_CALADRURI_s* x);
struct zx_cdm_URI_s* zx_cdm_CALADRURI_POP_URI(struct zx_cdm_CALADRURI_s* x);

void zx_cdm_CALADRURI_PUSH_PREF(struct zx_cdm_CALADRURI_s* x, struct zx_elem_s* y);
void zx_cdm_CALADRURI_PUSH_URI(struct zx_cdm_CALADRURI_s* x, struct zx_cdm_URI_s* y);

void zx_cdm_CALADRURI_PUT_id(struct zx_cdm_CALADRURI_s* x, struct zx_str* y);
void zx_cdm_CALADRURI_PUT_modificationTime(struct zx_cdm_CALADRURI_s* x, struct zx_str* y);
void zx_cdm_CALADRURI_PUT_ACC(struct zx_cdm_CALADRURI_s* x, struct zx_str* y);
void zx_cdm_CALADRURI_PUT_ACCTime(struct zx_cdm_CALADRURI_s* x, struct zx_str* y);
void zx_cdm_CALADRURI_PUT_modifier(struct zx_cdm_CALADRURI_s* x, struct zx_str* y);

void zx_cdm_CALADRURI_PUT_PREF(struct zx_cdm_CALADRURI_s* x, int n, struct zx_elem_s* y);
void zx_cdm_CALADRURI_PUT_URI(struct zx_cdm_CALADRURI_s* x, int n, struct zx_cdm_URI_s* y);

void zx_cdm_CALADRURI_ADD_PREF(struct zx_cdm_CALADRURI_s* x, int n, struct zx_elem_s* z);
void zx_cdm_CALADRURI_ADD_URI(struct zx_cdm_CALADRURI_s* x, int n, struct zx_cdm_URI_s* z);

void zx_cdm_CALADRURI_DEL_PREF(struct zx_cdm_CALADRURI_s* x, int n);
void zx_cdm_CALADRURI_DEL_URI(struct zx_cdm_CALADRURI_s* x, int n);

void zx_cdm_CALADRURI_REV_PREF(struct zx_cdm_CALADRURI_s* x);
void zx_cdm_CALADRURI_REV_URI(struct zx_cdm_CALADRURI_s* x);

#endif
/* -------------------------- cdm_CALURI -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_CALURI_EXT
#define zx_cdm_CALURI_EXT
#endif

struct zx_cdm_CALURI_s* zx_DEC_cdm_CALURI(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_CALURI_s* zx_NEW_cdm_CALURI(struct zx_ctx* c);
void zx_FREE_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_CALURI_s* zx_DEEP_CLONE_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x, int dup_strs);
void zx_DUP_STRS_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x);
int zx_WALK_SO_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x);
int zx_LEN_WO_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x);
char* zx_ENC_SO_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x, char* p);
char* zx_ENC_WO_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_CALURI(struct zx_ctx* c, struct zx_cdm_CALURI_s* x);

struct zx_cdm_CALURI_s {
  ZX_ELEM_EXT
  zx_cdm_CALURI_EXT
  struct zx_elem_s* PREF;	/* {0,1} xs:string */
  struct zx_cdm_URI_s* URI;	/* {1,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_CALURI_GET_id(struct zx_cdm_CALURI_s* x);
struct zx_str* zx_cdm_CALURI_GET_modificationTime(struct zx_cdm_CALURI_s* x);
struct zx_str* zx_cdm_CALURI_GET_ACC(struct zx_cdm_CALURI_s* x);
struct zx_str* zx_cdm_CALURI_GET_ACCTime(struct zx_cdm_CALURI_s* x);
struct zx_str* zx_cdm_CALURI_GET_modifier(struct zx_cdm_CALURI_s* x);

struct zx_elem_s* zx_cdm_CALURI_GET_PREF(struct zx_cdm_CALURI_s* x, int n);
struct zx_cdm_URI_s* zx_cdm_CALURI_GET_URI(struct zx_cdm_CALURI_s* x, int n);

int zx_cdm_CALURI_NUM_PREF(struct zx_cdm_CALURI_s* x);
int zx_cdm_CALURI_NUM_URI(struct zx_cdm_CALURI_s* x);

struct zx_elem_s* zx_cdm_CALURI_POP_PREF(struct zx_cdm_CALURI_s* x);
struct zx_cdm_URI_s* zx_cdm_CALURI_POP_URI(struct zx_cdm_CALURI_s* x);

void zx_cdm_CALURI_PUSH_PREF(struct zx_cdm_CALURI_s* x, struct zx_elem_s* y);
void zx_cdm_CALURI_PUSH_URI(struct zx_cdm_CALURI_s* x, struct zx_cdm_URI_s* y);

void zx_cdm_CALURI_PUT_id(struct zx_cdm_CALURI_s* x, struct zx_str* y);
void zx_cdm_CALURI_PUT_modificationTime(struct zx_cdm_CALURI_s* x, struct zx_str* y);
void zx_cdm_CALURI_PUT_ACC(struct zx_cdm_CALURI_s* x, struct zx_str* y);
void zx_cdm_CALURI_PUT_ACCTime(struct zx_cdm_CALURI_s* x, struct zx_str* y);
void zx_cdm_CALURI_PUT_modifier(struct zx_cdm_CALURI_s* x, struct zx_str* y);

void zx_cdm_CALURI_PUT_PREF(struct zx_cdm_CALURI_s* x, int n, struct zx_elem_s* y);
void zx_cdm_CALURI_PUT_URI(struct zx_cdm_CALURI_s* x, int n, struct zx_cdm_URI_s* y);

void zx_cdm_CALURI_ADD_PREF(struct zx_cdm_CALURI_s* x, int n, struct zx_elem_s* z);
void zx_cdm_CALURI_ADD_URI(struct zx_cdm_CALURI_s* x, int n, struct zx_cdm_URI_s* z);

void zx_cdm_CALURI_DEL_PREF(struct zx_cdm_CALURI_s* x, int n);
void zx_cdm_CALURI_DEL_URI(struct zx_cdm_CALURI_s* x, int n);

void zx_cdm_CALURI_REV_PREF(struct zx_cdm_CALURI_s* x);
void zx_cdm_CALURI_REV_URI(struct zx_cdm_CALURI_s* x);

#endif
/* -------------------------- cdm_CAPURI -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_CAPURI_EXT
#define zx_cdm_CAPURI_EXT
#endif

struct zx_cdm_CAPURI_s* zx_DEC_cdm_CAPURI(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_CAPURI_s* zx_NEW_cdm_CAPURI(struct zx_ctx* c);
void zx_FREE_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_CAPURI_s* zx_DEEP_CLONE_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x, int dup_strs);
void zx_DUP_STRS_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x);
int zx_WALK_SO_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x);
int zx_LEN_WO_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x);
char* zx_ENC_SO_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x, char* p);
char* zx_ENC_WO_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_CAPURI(struct zx_ctx* c, struct zx_cdm_CAPURI_s* x);

struct zx_cdm_CAPURI_s {
  ZX_ELEM_EXT
  zx_cdm_CAPURI_EXT
  struct zx_elem_s* PREF;	/* {0,1} xs:string */
  struct zx_cdm_URI_s* URI;	/* {1,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_CAPURI_GET_id(struct zx_cdm_CAPURI_s* x);
struct zx_str* zx_cdm_CAPURI_GET_modificationTime(struct zx_cdm_CAPURI_s* x);
struct zx_str* zx_cdm_CAPURI_GET_ACC(struct zx_cdm_CAPURI_s* x);
struct zx_str* zx_cdm_CAPURI_GET_ACCTime(struct zx_cdm_CAPURI_s* x);
struct zx_str* zx_cdm_CAPURI_GET_modifier(struct zx_cdm_CAPURI_s* x);

struct zx_elem_s* zx_cdm_CAPURI_GET_PREF(struct zx_cdm_CAPURI_s* x, int n);
struct zx_cdm_URI_s* zx_cdm_CAPURI_GET_URI(struct zx_cdm_CAPURI_s* x, int n);

int zx_cdm_CAPURI_NUM_PREF(struct zx_cdm_CAPURI_s* x);
int zx_cdm_CAPURI_NUM_URI(struct zx_cdm_CAPURI_s* x);

struct zx_elem_s* zx_cdm_CAPURI_POP_PREF(struct zx_cdm_CAPURI_s* x);
struct zx_cdm_URI_s* zx_cdm_CAPURI_POP_URI(struct zx_cdm_CAPURI_s* x);

void zx_cdm_CAPURI_PUSH_PREF(struct zx_cdm_CAPURI_s* x, struct zx_elem_s* y);
void zx_cdm_CAPURI_PUSH_URI(struct zx_cdm_CAPURI_s* x, struct zx_cdm_URI_s* y);

void zx_cdm_CAPURI_PUT_id(struct zx_cdm_CAPURI_s* x, struct zx_str* y);
void zx_cdm_CAPURI_PUT_modificationTime(struct zx_cdm_CAPURI_s* x, struct zx_str* y);
void zx_cdm_CAPURI_PUT_ACC(struct zx_cdm_CAPURI_s* x, struct zx_str* y);
void zx_cdm_CAPURI_PUT_ACCTime(struct zx_cdm_CAPURI_s* x, struct zx_str* y);
void zx_cdm_CAPURI_PUT_modifier(struct zx_cdm_CAPURI_s* x, struct zx_str* y);

void zx_cdm_CAPURI_PUT_PREF(struct zx_cdm_CAPURI_s* x, int n, struct zx_elem_s* y);
void zx_cdm_CAPURI_PUT_URI(struct zx_cdm_CAPURI_s* x, int n, struct zx_cdm_URI_s* y);

void zx_cdm_CAPURI_ADD_PREF(struct zx_cdm_CAPURI_s* x, int n, struct zx_elem_s* z);
void zx_cdm_CAPURI_ADD_URI(struct zx_cdm_CAPURI_s* x, int n, struct zx_cdm_URI_s* z);

void zx_cdm_CAPURI_DEL_PREF(struct zx_cdm_CAPURI_s* x, int n);
void zx_cdm_CAPURI_DEL_URI(struct zx_cdm_CAPURI_s* x, int n);

void zx_cdm_CAPURI_REV_PREF(struct zx_cdm_CAPURI_s* x);
void zx_cdm_CAPURI_REV_URI(struct zx_cdm_CAPURI_s* x);

#endif
/* -------------------------- cdm_CATEGORIES -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_CATEGORIES_EXT
#define zx_cdm_CATEGORIES_EXT
#endif

struct zx_cdm_CATEGORIES_s* zx_DEC_cdm_CATEGORIES(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_CATEGORIES_s* zx_NEW_cdm_CATEGORIES(struct zx_ctx* c);
void zx_FREE_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_CATEGORIES_s* zx_DEEP_CLONE_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x, int dup_strs);
void zx_DUP_STRS_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x);
int zx_WALK_SO_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x);
int zx_LEN_WO_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x);
char* zx_ENC_SO_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x, char* p);
char* zx_ENC_WO_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_CATEGORIES(struct zx_ctx* c, struct zx_cdm_CATEGORIES_s* x);

struct zx_cdm_CATEGORIES_s {
  ZX_ELEM_EXT
  zx_cdm_CATEGORIES_EXT
  struct zx_cdm_KEYWORD_s* KEYWORD;	/* {1,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_CATEGORIES_GET_id(struct zx_cdm_CATEGORIES_s* x);
struct zx_str* zx_cdm_CATEGORIES_GET_modificationTime(struct zx_cdm_CATEGORIES_s* x);

struct zx_cdm_KEYWORD_s* zx_cdm_CATEGORIES_GET_KEYWORD(struct zx_cdm_CATEGORIES_s* x, int n);

int zx_cdm_CATEGORIES_NUM_KEYWORD(struct zx_cdm_CATEGORIES_s* x);

struct zx_cdm_KEYWORD_s* zx_cdm_CATEGORIES_POP_KEYWORD(struct zx_cdm_CATEGORIES_s* x);

void zx_cdm_CATEGORIES_PUSH_KEYWORD(struct zx_cdm_CATEGORIES_s* x, struct zx_cdm_KEYWORD_s* y);

void zx_cdm_CATEGORIES_PUT_id(struct zx_cdm_CATEGORIES_s* x, struct zx_str* y);
void zx_cdm_CATEGORIES_PUT_modificationTime(struct zx_cdm_CATEGORIES_s* x, struct zx_str* y);

void zx_cdm_CATEGORIES_PUT_KEYWORD(struct zx_cdm_CATEGORIES_s* x, int n, struct zx_cdm_KEYWORD_s* y);

void zx_cdm_CATEGORIES_ADD_KEYWORD(struct zx_cdm_CATEGORIES_s* x, int n, struct zx_cdm_KEYWORD_s* z);

void zx_cdm_CATEGORIES_DEL_KEYWORD(struct zx_cdm_CATEGORIES_s* x, int n);

void zx_cdm_CATEGORIES_REV_KEYWORD(struct zx_cdm_CATEGORIES_s* x);

#endif
/* -------------------------- cdm_CLASS -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_CLASS_EXT
#define zx_cdm_CLASS_EXT
#endif

struct zx_cdm_CLASS_s* zx_DEC_cdm_CLASS(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_CLASS_s* zx_NEW_cdm_CLASS(struct zx_ctx* c);
void zx_FREE_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_CLASS_s* zx_DEEP_CLONE_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x, int dup_strs);
void zx_DUP_STRS_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x);
int zx_WALK_SO_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x);
int zx_LEN_WO_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x);
char* zx_ENC_SO_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x, char* p);
char* zx_ENC_WO_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_CLASS(struct zx_ctx* c, struct zx_cdm_CLASS_s* x);

struct zx_cdm_CLASS_s {
  ZX_ELEM_EXT
  zx_cdm_CLASS_EXT
  struct zx_elem_s* PUBLIC;	/* {0,1} xs:string */
  struct zx_elem_s* PRIVATE;	/* {0,1} xs:string */
  struct zx_elem_s* CONFIDENTIAL;	/* {0,1} xs:string */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_CLASS_GET_id(struct zx_cdm_CLASS_s* x);
struct zx_str* zx_cdm_CLASS_GET_modificationTime(struct zx_cdm_CLASS_s* x);
struct zx_str* zx_cdm_CLASS_GET_ACC(struct zx_cdm_CLASS_s* x);
struct zx_str* zx_cdm_CLASS_GET_ACCTime(struct zx_cdm_CLASS_s* x);
struct zx_str* zx_cdm_CLASS_GET_modifier(struct zx_cdm_CLASS_s* x);

struct zx_elem_s* zx_cdm_CLASS_GET_PUBLIC(struct zx_cdm_CLASS_s* x, int n);
struct zx_elem_s* zx_cdm_CLASS_GET_PRIVATE(struct zx_cdm_CLASS_s* x, int n);
struct zx_elem_s* zx_cdm_CLASS_GET_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, int n);

int zx_cdm_CLASS_NUM_PUBLIC(struct zx_cdm_CLASS_s* x);
int zx_cdm_CLASS_NUM_PRIVATE(struct zx_cdm_CLASS_s* x);
int zx_cdm_CLASS_NUM_CONFIDENTIAL(struct zx_cdm_CLASS_s* x);

struct zx_elem_s* zx_cdm_CLASS_POP_PUBLIC(struct zx_cdm_CLASS_s* x);
struct zx_elem_s* zx_cdm_CLASS_POP_PRIVATE(struct zx_cdm_CLASS_s* x);
struct zx_elem_s* zx_cdm_CLASS_POP_CONFIDENTIAL(struct zx_cdm_CLASS_s* x);

void zx_cdm_CLASS_PUSH_PUBLIC(struct zx_cdm_CLASS_s* x, struct zx_elem_s* y);
void zx_cdm_CLASS_PUSH_PRIVATE(struct zx_cdm_CLASS_s* x, struct zx_elem_s* y);
void zx_cdm_CLASS_PUSH_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, struct zx_elem_s* y);

void zx_cdm_CLASS_PUT_id(struct zx_cdm_CLASS_s* x, struct zx_str* y);
void zx_cdm_CLASS_PUT_modificationTime(struct zx_cdm_CLASS_s* x, struct zx_str* y);
void zx_cdm_CLASS_PUT_ACC(struct zx_cdm_CLASS_s* x, struct zx_str* y);
void zx_cdm_CLASS_PUT_ACCTime(struct zx_cdm_CLASS_s* x, struct zx_str* y);
void zx_cdm_CLASS_PUT_modifier(struct zx_cdm_CLASS_s* x, struct zx_str* y);

void zx_cdm_CLASS_PUT_PUBLIC(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* y);
void zx_cdm_CLASS_PUT_PRIVATE(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* y);
void zx_cdm_CLASS_PUT_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* y);

void zx_cdm_CLASS_ADD_PUBLIC(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z);
void zx_cdm_CLASS_ADD_PRIVATE(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z);
void zx_cdm_CLASS_ADD_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z);

void zx_cdm_CLASS_DEL_PUBLIC(struct zx_cdm_CLASS_s* x, int n);
void zx_cdm_CLASS_DEL_PRIVATE(struct zx_cdm_CLASS_s* x, int n);
void zx_cdm_CLASS_DEL_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, int n);

void zx_cdm_CLASS_REV_PUBLIC(struct zx_cdm_CLASS_s* x);
void zx_cdm_CLASS_REV_PRIVATE(struct zx_cdm_CLASS_s* x);
void zx_cdm_CLASS_REV_CONFIDENTIAL(struct zx_cdm_CLASS_s* x);

#endif
/* -------------------------- cdm_CRED -------------------------- */
/* refby( zx_cdm_KEY_s ) */
#ifndef zx_cdm_CRED_EXT
#define zx_cdm_CRED_EXT
#endif

struct zx_cdm_CRED_s* zx_DEC_cdm_CRED(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_CRED_s* zx_NEW_cdm_CRED(struct zx_ctx* c);
void zx_FREE_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_CRED_s* zx_DEEP_CLONE_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x, int dup_strs);
void zx_DUP_STRS_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x);
int zx_WALK_SO_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x);
int zx_LEN_WO_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x);
char* zx_ENC_SO_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x, char* p);
char* zx_ENC_WO_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_CRED(struct zx_ctx* c, struct zx_cdm_CRED_s* x);

struct zx_cdm_CRED_s {
  ZX_ELEM_EXT
  zx_cdm_CRED_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_CRED_GET_id(struct zx_cdm_CRED_s* x);
struct zx_str* zx_cdm_CRED_GET_modificationTime(struct zx_cdm_CRED_s* x);
struct zx_str* zx_cdm_CRED_GET_ACC(struct zx_cdm_CRED_s* x);
struct zx_str* zx_cdm_CRED_GET_ACCTime(struct zx_cdm_CRED_s* x);
struct zx_str* zx_cdm_CRED_GET_modifier(struct zx_cdm_CRED_s* x);





void zx_cdm_CRED_PUT_id(struct zx_cdm_CRED_s* x, struct zx_str* y);
void zx_cdm_CRED_PUT_modificationTime(struct zx_cdm_CRED_s* x, struct zx_str* y);
void zx_cdm_CRED_PUT_ACC(struct zx_cdm_CRED_s* x, struct zx_str* y);
void zx_cdm_CRED_PUT_ACCTime(struct zx_cdm_CRED_s* x, struct zx_str* y);
void zx_cdm_CRED_PUT_modifier(struct zx_cdm_CRED_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_CTRY -------------------------- */
/* refby( zx_cdm_ADR_s ) */
#ifndef zx_cdm_CTRY_EXT
#define zx_cdm_CTRY_EXT
#endif

struct zx_cdm_CTRY_s* zx_DEC_cdm_CTRY(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_CTRY_s* zx_NEW_cdm_CTRY(struct zx_ctx* c);
void zx_FREE_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_CTRY_s* zx_DEEP_CLONE_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x, int dup_strs);
void zx_DUP_STRS_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x);
int zx_WALK_SO_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x);
int zx_LEN_WO_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x);
char* zx_ENC_SO_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x, char* p);
char* zx_ENC_WO_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_CTRY(struct zx_ctx* c, struct zx_cdm_CTRY_s* x);

struct zx_cdm_CTRY_s {
  ZX_ELEM_EXT
  zx_cdm_CTRY_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_CTRY_GET_group(struct zx_cdm_CTRY_s* x);





void zx_cdm_CTRY_PUT_group(struct zx_cdm_CTRY_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_DESC -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_DESC_EXT
#define zx_cdm_DESC_EXT
#endif

struct zx_cdm_DESC_s* zx_DEC_cdm_DESC(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_DESC_s* zx_NEW_cdm_DESC(struct zx_ctx* c);
void zx_FREE_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_DESC_s* zx_DEEP_CLONE_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x, int dup_strs);
void zx_DUP_STRS_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x);
int zx_WALK_SO_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x);
int zx_LEN_WO_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x);
char* zx_ENC_SO_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x, char* p);
char* zx_ENC_WO_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_DESC(struct zx_ctx* c, struct zx_cdm_DESC_s* x);

struct zx_cdm_DESC_s {
  ZX_ELEM_EXT
  zx_cdm_DESC_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_DESC_GET_group(struct zx_cdm_DESC_s* x);





void zx_cdm_DESC_PUT_group(struct zx_cdm_DESC_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_EMAIL -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_EMAIL_EXT
#define zx_cdm_EMAIL_EXT
#endif

struct zx_cdm_EMAIL_s* zx_DEC_cdm_EMAIL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_EMAIL_s* zx_NEW_cdm_EMAIL(struct zx_ctx* c);
void zx_FREE_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_EMAIL_s* zx_DEEP_CLONE_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x, int dup_strs);
void zx_DUP_STRS_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x);
int zx_WALK_SO_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x);
int zx_LEN_WO_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x);
char* zx_ENC_SO_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x, char* p);
char* zx_ENC_WO_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_EMAIL(struct zx_ctx* c, struct zx_cdm_EMAIL_s* x);

struct zx_cdm_EMAIL_s {
  ZX_ELEM_EXT
  zx_cdm_EMAIL_EXT
  struct zx_elem_s* HOME;	/* {0,1} xs:string */
  struct zx_elem_s* WORK;	/* {0,1} xs:string */
  struct zx_elem_s* INTERNET;	/* {0,1} xs:string */
  struct zx_elem_s* PREF;	/* {0,1} xs:string */
  struct zx_elem_s* X400;	/* {0,1} xs:string */
  struct zx_cdm_USERID_s* USERID;	/* {1,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_EMAIL_GET_id(struct zx_cdm_EMAIL_s* x);
struct zx_str* zx_cdm_EMAIL_GET_modificationTime(struct zx_cdm_EMAIL_s* x);

struct zx_elem_s* zx_cdm_EMAIL_GET_HOME(struct zx_cdm_EMAIL_s* x, int n);
struct zx_elem_s* zx_cdm_EMAIL_GET_WORK(struct zx_cdm_EMAIL_s* x, int n);
struct zx_elem_s* zx_cdm_EMAIL_GET_INTERNET(struct zx_cdm_EMAIL_s* x, int n);
struct zx_elem_s* zx_cdm_EMAIL_GET_PREF(struct zx_cdm_EMAIL_s* x, int n);
struct zx_elem_s* zx_cdm_EMAIL_GET_X400(struct zx_cdm_EMAIL_s* x, int n);
struct zx_cdm_USERID_s* zx_cdm_EMAIL_GET_USERID(struct zx_cdm_EMAIL_s* x, int n);

int zx_cdm_EMAIL_NUM_HOME(struct zx_cdm_EMAIL_s* x);
int zx_cdm_EMAIL_NUM_WORK(struct zx_cdm_EMAIL_s* x);
int zx_cdm_EMAIL_NUM_INTERNET(struct zx_cdm_EMAIL_s* x);
int zx_cdm_EMAIL_NUM_PREF(struct zx_cdm_EMAIL_s* x);
int zx_cdm_EMAIL_NUM_X400(struct zx_cdm_EMAIL_s* x);
int zx_cdm_EMAIL_NUM_USERID(struct zx_cdm_EMAIL_s* x);

struct zx_elem_s* zx_cdm_EMAIL_POP_HOME(struct zx_cdm_EMAIL_s* x);
struct zx_elem_s* zx_cdm_EMAIL_POP_WORK(struct zx_cdm_EMAIL_s* x);
struct zx_elem_s* zx_cdm_EMAIL_POP_INTERNET(struct zx_cdm_EMAIL_s* x);
struct zx_elem_s* zx_cdm_EMAIL_POP_PREF(struct zx_cdm_EMAIL_s* x);
struct zx_elem_s* zx_cdm_EMAIL_POP_X400(struct zx_cdm_EMAIL_s* x);
struct zx_cdm_USERID_s* zx_cdm_EMAIL_POP_USERID(struct zx_cdm_EMAIL_s* x);

void zx_cdm_EMAIL_PUSH_HOME(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUSH_WORK(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUSH_INTERNET(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUSH_PREF(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUSH_X400(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUSH_USERID(struct zx_cdm_EMAIL_s* x, struct zx_cdm_USERID_s* y);

void zx_cdm_EMAIL_PUT_id(struct zx_cdm_EMAIL_s* x, struct zx_str* y);
void zx_cdm_EMAIL_PUT_modificationTime(struct zx_cdm_EMAIL_s* x, struct zx_str* y);

void zx_cdm_EMAIL_PUT_HOME(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUT_WORK(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUT_INTERNET(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUT_PREF(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUT_X400(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_EMAIL_PUT_USERID(struct zx_cdm_EMAIL_s* x, int n, struct zx_cdm_USERID_s* y);

void zx_cdm_EMAIL_ADD_HOME(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_EMAIL_ADD_WORK(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_EMAIL_ADD_INTERNET(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_EMAIL_ADD_PREF(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_EMAIL_ADD_X400(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_EMAIL_ADD_USERID(struct zx_cdm_EMAIL_s* x, int n, struct zx_cdm_USERID_s* z);

void zx_cdm_EMAIL_DEL_HOME(struct zx_cdm_EMAIL_s* x, int n);
void zx_cdm_EMAIL_DEL_WORK(struct zx_cdm_EMAIL_s* x, int n);
void zx_cdm_EMAIL_DEL_INTERNET(struct zx_cdm_EMAIL_s* x, int n);
void zx_cdm_EMAIL_DEL_PREF(struct zx_cdm_EMAIL_s* x, int n);
void zx_cdm_EMAIL_DEL_X400(struct zx_cdm_EMAIL_s* x, int n);
void zx_cdm_EMAIL_DEL_USERID(struct zx_cdm_EMAIL_s* x, int n);

void zx_cdm_EMAIL_REV_HOME(struct zx_cdm_EMAIL_s* x);
void zx_cdm_EMAIL_REV_WORK(struct zx_cdm_EMAIL_s* x);
void zx_cdm_EMAIL_REV_INTERNET(struct zx_cdm_EMAIL_s* x);
void zx_cdm_EMAIL_REV_PREF(struct zx_cdm_EMAIL_s* x);
void zx_cdm_EMAIL_REV_X400(struct zx_cdm_EMAIL_s* x);
void zx_cdm_EMAIL_REV_USERID(struct zx_cdm_EMAIL_s* x);

#endif
/* -------------------------- cdm_EXTADR -------------------------- */
/* refby( zx_cdm_ADR_s ) */
#ifndef zx_cdm_EXTADR_EXT
#define zx_cdm_EXTADR_EXT
#endif

struct zx_cdm_EXTADR_s* zx_DEC_cdm_EXTADR(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_EXTADR_s* zx_NEW_cdm_EXTADR(struct zx_ctx* c);
void zx_FREE_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_EXTADR_s* zx_DEEP_CLONE_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x, int dup_strs);
void zx_DUP_STRS_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x);
int zx_WALK_SO_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x);
int zx_LEN_WO_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x);
char* zx_ENC_SO_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x, char* p);
char* zx_ENC_WO_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_EXTADR(struct zx_ctx* c, struct zx_cdm_EXTADR_s* x);

struct zx_cdm_EXTADR_s {
  ZX_ELEM_EXT
  zx_cdm_EXTADR_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_EXTADR_GET_group(struct zx_cdm_EXTADR_s* x);





void zx_cdm_EXTADR_PUT_group(struct zx_cdm_EXTADR_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_EXTVAL -------------------------- */
/* refby( zx_cdm_LOGO_s zx_cdm_PHOTO_s zx_cdm_AGENT_s zx_cdm_SOUND_s ) */
#ifndef zx_cdm_EXTVAL_EXT
#define zx_cdm_EXTVAL_EXT
#endif

struct zx_cdm_EXTVAL_s* zx_DEC_cdm_EXTVAL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_EXTVAL_s* zx_NEW_cdm_EXTVAL(struct zx_ctx* c);
void zx_FREE_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_EXTVAL_s* zx_DEEP_CLONE_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x, int dup_strs);
void zx_DUP_STRS_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x);
int zx_WALK_SO_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x);
int zx_LEN_WO_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x);
char* zx_ENC_SO_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x, char* p);
char* zx_ENC_WO_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_EXTVAL(struct zx_ctx* c, struct zx_cdm_EXTVAL_s* x);

struct zx_cdm_EXTVAL_s {
  ZX_ELEM_EXT
  zx_cdm_EXTVAL_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_EXTVAL_GET_id(struct zx_cdm_EXTVAL_s* x);
struct zx_str* zx_cdm_EXTVAL_GET_modificationTime(struct zx_cdm_EXTVAL_s* x);
struct zx_str* zx_cdm_EXTVAL_GET_ACC(struct zx_cdm_EXTVAL_s* x);
struct zx_str* zx_cdm_EXTVAL_GET_ACCTime(struct zx_cdm_EXTVAL_s* x);
struct zx_str* zx_cdm_EXTVAL_GET_modifier(struct zx_cdm_EXTVAL_s* x);





void zx_cdm_EXTVAL_PUT_id(struct zx_cdm_EXTVAL_s* x, struct zx_str* y);
void zx_cdm_EXTVAL_PUT_modificationTime(struct zx_cdm_EXTVAL_s* x, struct zx_str* y);
void zx_cdm_EXTVAL_PUT_ACC(struct zx_cdm_EXTVAL_s* x, struct zx_str* y);
void zx_cdm_EXTVAL_PUT_ACCTime(struct zx_cdm_EXTVAL_s* x, struct zx_str* y);
void zx_cdm_EXTVAL_PUT_modifier(struct zx_cdm_EXTVAL_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_FAMILY -------------------------- */
/* refby( zx_cdm_N_s ) */
#ifndef zx_cdm_FAMILY_EXT
#define zx_cdm_FAMILY_EXT
#endif

struct zx_cdm_FAMILY_s* zx_DEC_cdm_FAMILY(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_FAMILY_s* zx_NEW_cdm_FAMILY(struct zx_ctx* c);
void zx_FREE_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_FAMILY_s* zx_DEEP_CLONE_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x, int dup_strs);
void zx_DUP_STRS_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x);
int zx_WALK_SO_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x);
int zx_LEN_WO_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x);
char* zx_ENC_SO_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x, char* p);
char* zx_ENC_WO_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_FAMILY(struct zx_ctx* c, struct zx_cdm_FAMILY_s* x);

struct zx_cdm_FAMILY_s {
  ZX_ELEM_EXT
  zx_cdm_FAMILY_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_FAMILY_GET_group(struct zx_cdm_FAMILY_s* x);





void zx_cdm_FAMILY_PUT_group(struct zx_cdm_FAMILY_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_FBURL -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_FBURL_EXT
#define zx_cdm_FBURL_EXT
#endif

struct zx_cdm_FBURL_s* zx_DEC_cdm_FBURL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_FBURL_s* zx_NEW_cdm_FBURL(struct zx_ctx* c);
void zx_FREE_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_FBURL_s* zx_DEEP_CLONE_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x, int dup_strs);
void zx_DUP_STRS_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x);
int zx_WALK_SO_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x);
int zx_LEN_WO_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x);
char* zx_ENC_SO_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x, char* p);
char* zx_ENC_WO_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_FBURL(struct zx_ctx* c, struct zx_cdm_FBURL_s* x);

struct zx_cdm_FBURL_s {
  ZX_ELEM_EXT
  zx_cdm_FBURL_EXT
  struct zx_elem_s* PREF;	/* {0,1} xs:string */
  struct zx_cdm_URI_s* URI;	/* {1,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_FBURL_GET_id(struct zx_cdm_FBURL_s* x);
struct zx_str* zx_cdm_FBURL_GET_modificationTime(struct zx_cdm_FBURL_s* x);
struct zx_str* zx_cdm_FBURL_GET_ACC(struct zx_cdm_FBURL_s* x);
struct zx_str* zx_cdm_FBURL_GET_ACCTime(struct zx_cdm_FBURL_s* x);
struct zx_str* zx_cdm_FBURL_GET_modifier(struct zx_cdm_FBURL_s* x);

struct zx_elem_s* zx_cdm_FBURL_GET_PREF(struct zx_cdm_FBURL_s* x, int n);
struct zx_cdm_URI_s* zx_cdm_FBURL_GET_URI(struct zx_cdm_FBURL_s* x, int n);

int zx_cdm_FBURL_NUM_PREF(struct zx_cdm_FBURL_s* x);
int zx_cdm_FBURL_NUM_URI(struct zx_cdm_FBURL_s* x);

struct zx_elem_s* zx_cdm_FBURL_POP_PREF(struct zx_cdm_FBURL_s* x);
struct zx_cdm_URI_s* zx_cdm_FBURL_POP_URI(struct zx_cdm_FBURL_s* x);

void zx_cdm_FBURL_PUSH_PREF(struct zx_cdm_FBURL_s* x, struct zx_elem_s* y);
void zx_cdm_FBURL_PUSH_URI(struct zx_cdm_FBURL_s* x, struct zx_cdm_URI_s* y);

void zx_cdm_FBURL_PUT_id(struct zx_cdm_FBURL_s* x, struct zx_str* y);
void zx_cdm_FBURL_PUT_modificationTime(struct zx_cdm_FBURL_s* x, struct zx_str* y);
void zx_cdm_FBURL_PUT_ACC(struct zx_cdm_FBURL_s* x, struct zx_str* y);
void zx_cdm_FBURL_PUT_ACCTime(struct zx_cdm_FBURL_s* x, struct zx_str* y);
void zx_cdm_FBURL_PUT_modifier(struct zx_cdm_FBURL_s* x, struct zx_str* y);

void zx_cdm_FBURL_PUT_PREF(struct zx_cdm_FBURL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_FBURL_PUT_URI(struct zx_cdm_FBURL_s* x, int n, struct zx_cdm_URI_s* y);

void zx_cdm_FBURL_ADD_PREF(struct zx_cdm_FBURL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_FBURL_ADD_URI(struct zx_cdm_FBURL_s* x, int n, struct zx_cdm_URI_s* z);

void zx_cdm_FBURL_DEL_PREF(struct zx_cdm_FBURL_s* x, int n);
void zx_cdm_FBURL_DEL_URI(struct zx_cdm_FBURL_s* x, int n);

void zx_cdm_FBURL_REV_PREF(struct zx_cdm_FBURL_s* x);
void zx_cdm_FBURL_REV_URI(struct zx_cdm_FBURL_s* x);

#endif
/* -------------------------- cdm_FN -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_FN_EXT
#define zx_cdm_FN_EXT
#endif

struct zx_cdm_FN_s* zx_DEC_cdm_FN(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_FN_s* zx_NEW_cdm_FN(struct zx_ctx* c);
void zx_FREE_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_FN_s* zx_DEEP_CLONE_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x, int dup_strs);
void zx_DUP_STRS_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x);
int zx_WALK_SO_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x);
int zx_LEN_WO_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x);
char* zx_ENC_SO_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x, char* p);
char* zx_ENC_WO_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_FN(struct zx_ctx* c, struct zx_cdm_FN_s* x);

struct zx_cdm_FN_s {
  ZX_ELEM_EXT
  zx_cdm_FN_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_FN_GET_group(struct zx_cdm_FN_s* x);





void zx_cdm_FN_PUT_group(struct zx_cdm_FN_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_GEO -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_GEO_EXT
#define zx_cdm_GEO_EXT
#endif

struct zx_cdm_GEO_s* zx_DEC_cdm_GEO(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_GEO_s* zx_NEW_cdm_GEO(struct zx_ctx* c);
void zx_FREE_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_GEO_s* zx_DEEP_CLONE_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x, int dup_strs);
void zx_DUP_STRS_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x);
int zx_WALK_SO_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x);
int zx_LEN_WO_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x);
char* zx_ENC_SO_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x, char* p);
char* zx_ENC_WO_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_GEO(struct zx_ctx* c, struct zx_cdm_GEO_s* x);

struct zx_cdm_GEO_s {
  ZX_ELEM_EXT
  zx_cdm_GEO_EXT
  struct zx_cdm_LAT_s* LAT;	/* {1,1} nada */
  struct zx_cdm_LON_s* LON;	/* {1,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_GEO_GET_id(struct zx_cdm_GEO_s* x);
struct zx_str* zx_cdm_GEO_GET_modificationTime(struct zx_cdm_GEO_s* x);

struct zx_cdm_LAT_s* zx_cdm_GEO_GET_LAT(struct zx_cdm_GEO_s* x, int n);
struct zx_cdm_LON_s* zx_cdm_GEO_GET_LON(struct zx_cdm_GEO_s* x, int n);

int zx_cdm_GEO_NUM_LAT(struct zx_cdm_GEO_s* x);
int zx_cdm_GEO_NUM_LON(struct zx_cdm_GEO_s* x);

struct zx_cdm_LAT_s* zx_cdm_GEO_POP_LAT(struct zx_cdm_GEO_s* x);
struct zx_cdm_LON_s* zx_cdm_GEO_POP_LON(struct zx_cdm_GEO_s* x);

void zx_cdm_GEO_PUSH_LAT(struct zx_cdm_GEO_s* x, struct zx_cdm_LAT_s* y);
void zx_cdm_GEO_PUSH_LON(struct zx_cdm_GEO_s* x, struct zx_cdm_LON_s* y);

void zx_cdm_GEO_PUT_id(struct zx_cdm_GEO_s* x, struct zx_str* y);
void zx_cdm_GEO_PUT_modificationTime(struct zx_cdm_GEO_s* x, struct zx_str* y);

void zx_cdm_GEO_PUT_LAT(struct zx_cdm_GEO_s* x, int n, struct zx_cdm_LAT_s* y);
void zx_cdm_GEO_PUT_LON(struct zx_cdm_GEO_s* x, int n, struct zx_cdm_LON_s* y);

void zx_cdm_GEO_ADD_LAT(struct zx_cdm_GEO_s* x, int n, struct zx_cdm_LAT_s* z);
void zx_cdm_GEO_ADD_LON(struct zx_cdm_GEO_s* x, int n, struct zx_cdm_LON_s* z);

void zx_cdm_GEO_DEL_LAT(struct zx_cdm_GEO_s* x, int n);
void zx_cdm_GEO_DEL_LON(struct zx_cdm_GEO_s* x, int n);

void zx_cdm_GEO_REV_LAT(struct zx_cdm_GEO_s* x);
void zx_cdm_GEO_REV_LON(struct zx_cdm_GEO_s* x);

#endif
/* -------------------------- cdm_GIVEN -------------------------- */
/* refby( zx_cdm_N_s ) */
#ifndef zx_cdm_GIVEN_EXT
#define zx_cdm_GIVEN_EXT
#endif

struct zx_cdm_GIVEN_s* zx_DEC_cdm_GIVEN(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_GIVEN_s* zx_NEW_cdm_GIVEN(struct zx_ctx* c);
void zx_FREE_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_GIVEN_s* zx_DEEP_CLONE_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x, int dup_strs);
void zx_DUP_STRS_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x);
int zx_WALK_SO_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x);
int zx_LEN_WO_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x);
char* zx_ENC_SO_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x, char* p);
char* zx_ENC_WO_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_GIVEN(struct zx_ctx* c, struct zx_cdm_GIVEN_s* x);

struct zx_cdm_GIVEN_s {
  ZX_ELEM_EXT
  zx_cdm_GIVEN_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_GIVEN_GET_group(struct zx_cdm_GIVEN_s* x);





void zx_cdm_GIVEN_PUT_group(struct zx_cdm_GIVEN_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_JABBERID -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_JABBERID_EXT
#define zx_cdm_JABBERID_EXT
#endif

struct zx_cdm_JABBERID_s* zx_DEC_cdm_JABBERID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_JABBERID_s* zx_NEW_cdm_JABBERID(struct zx_ctx* c);
void zx_FREE_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_JABBERID_s* zx_DEEP_CLONE_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x, int dup_strs);
void zx_DUP_STRS_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x);
int zx_WALK_SO_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x);
int zx_LEN_WO_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x);
char* zx_ENC_SO_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x, char* p);
char* zx_ENC_WO_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_JABBERID(struct zx_ctx* c, struct zx_cdm_JABBERID_s* x);

struct zx_cdm_JABBERID_s {
  ZX_ELEM_EXT
  zx_cdm_JABBERID_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_JABBERID_GET_id(struct zx_cdm_JABBERID_s* x);
struct zx_str* zx_cdm_JABBERID_GET_modificationTime(struct zx_cdm_JABBERID_s* x);
struct zx_str* zx_cdm_JABBERID_GET_ACC(struct zx_cdm_JABBERID_s* x);
struct zx_str* zx_cdm_JABBERID_GET_ACCTime(struct zx_cdm_JABBERID_s* x);
struct zx_str* zx_cdm_JABBERID_GET_modifier(struct zx_cdm_JABBERID_s* x);





void zx_cdm_JABBERID_PUT_id(struct zx_cdm_JABBERID_s* x, struct zx_str* y);
void zx_cdm_JABBERID_PUT_modificationTime(struct zx_cdm_JABBERID_s* x, struct zx_str* y);
void zx_cdm_JABBERID_PUT_ACC(struct zx_cdm_JABBERID_s* x, struct zx_str* y);
void zx_cdm_JABBERID_PUT_ACCTime(struct zx_cdm_JABBERID_s* x, struct zx_str* y);
void zx_cdm_JABBERID_PUT_modifier(struct zx_cdm_JABBERID_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_KEY -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_KEY_EXT
#define zx_cdm_KEY_EXT
#endif

struct zx_cdm_KEY_s* zx_DEC_cdm_KEY(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_KEY_s* zx_NEW_cdm_KEY(struct zx_ctx* c);
void zx_FREE_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_KEY_s* zx_DEEP_CLONE_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x, int dup_strs);
void zx_DUP_STRS_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x);
int zx_WALK_SO_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x);
int zx_LEN_WO_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x);
char* zx_ENC_SO_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x, char* p);
char* zx_ENC_WO_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_KEY(struct zx_ctx* c, struct zx_cdm_KEY_s* x);

struct zx_cdm_KEY_s {
  ZX_ELEM_EXT
  zx_cdm_KEY_EXT
  struct zx_cdm_TYPE_s* TYPE;	/* {0,1} nada */
  struct zx_cdm_CRED_s* CRED;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_cdm_TYPE_s* zx_cdm_KEY_GET_TYPE(struct zx_cdm_KEY_s* x, int n);
struct zx_cdm_CRED_s* zx_cdm_KEY_GET_CRED(struct zx_cdm_KEY_s* x, int n);

int zx_cdm_KEY_NUM_TYPE(struct zx_cdm_KEY_s* x);
int zx_cdm_KEY_NUM_CRED(struct zx_cdm_KEY_s* x);

struct zx_cdm_TYPE_s* zx_cdm_KEY_POP_TYPE(struct zx_cdm_KEY_s* x);
struct zx_cdm_CRED_s* zx_cdm_KEY_POP_CRED(struct zx_cdm_KEY_s* x);

void zx_cdm_KEY_PUSH_TYPE(struct zx_cdm_KEY_s* x, struct zx_cdm_TYPE_s* y);
void zx_cdm_KEY_PUSH_CRED(struct zx_cdm_KEY_s* x, struct zx_cdm_CRED_s* y);


void zx_cdm_KEY_PUT_TYPE(struct zx_cdm_KEY_s* x, int n, struct zx_cdm_TYPE_s* y);
void zx_cdm_KEY_PUT_CRED(struct zx_cdm_KEY_s* x, int n, struct zx_cdm_CRED_s* y);

void zx_cdm_KEY_ADD_TYPE(struct zx_cdm_KEY_s* x, int n, struct zx_cdm_TYPE_s* z);
void zx_cdm_KEY_ADD_CRED(struct zx_cdm_KEY_s* x, int n, struct zx_cdm_CRED_s* z);

void zx_cdm_KEY_DEL_TYPE(struct zx_cdm_KEY_s* x, int n);
void zx_cdm_KEY_DEL_CRED(struct zx_cdm_KEY_s* x, int n);

void zx_cdm_KEY_REV_TYPE(struct zx_cdm_KEY_s* x);
void zx_cdm_KEY_REV_CRED(struct zx_cdm_KEY_s* x);

#endif
/* -------------------------- cdm_KEYWORD -------------------------- */
/* refby( zx_cdm_CATEGORIES_s ) */
#ifndef zx_cdm_KEYWORD_EXT
#define zx_cdm_KEYWORD_EXT
#endif

struct zx_cdm_KEYWORD_s* zx_DEC_cdm_KEYWORD(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_KEYWORD_s* zx_NEW_cdm_KEYWORD(struct zx_ctx* c);
void zx_FREE_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_KEYWORD_s* zx_DEEP_CLONE_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x, int dup_strs);
void zx_DUP_STRS_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x);
int zx_WALK_SO_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x);
int zx_LEN_WO_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x);
char* zx_ENC_SO_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x, char* p);
char* zx_ENC_WO_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_KEYWORD(struct zx_ctx* c, struct zx_cdm_KEYWORD_s* x);

struct zx_cdm_KEYWORD_s {
  ZX_ELEM_EXT
  zx_cdm_KEYWORD_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_KEYWORD_GET_id(struct zx_cdm_KEYWORD_s* x);
struct zx_str* zx_cdm_KEYWORD_GET_modificationTime(struct zx_cdm_KEYWORD_s* x);
struct zx_str* zx_cdm_KEYWORD_GET_ACC(struct zx_cdm_KEYWORD_s* x);
struct zx_str* zx_cdm_KEYWORD_GET_ACCTime(struct zx_cdm_KEYWORD_s* x);
struct zx_str* zx_cdm_KEYWORD_GET_modifier(struct zx_cdm_KEYWORD_s* x);





void zx_cdm_KEYWORD_PUT_id(struct zx_cdm_KEYWORD_s* x, struct zx_str* y);
void zx_cdm_KEYWORD_PUT_modificationTime(struct zx_cdm_KEYWORD_s* x, struct zx_str* y);
void zx_cdm_KEYWORD_PUT_ACC(struct zx_cdm_KEYWORD_s* x, struct zx_str* y);
void zx_cdm_KEYWORD_PUT_ACCTime(struct zx_cdm_KEYWORD_s* x, struct zx_str* y);
void zx_cdm_KEYWORD_PUT_modifier(struct zx_cdm_KEYWORD_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_LABEL -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_LABEL_EXT
#define zx_cdm_LABEL_EXT
#endif

struct zx_cdm_LABEL_s* zx_DEC_cdm_LABEL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_LABEL_s* zx_NEW_cdm_LABEL(struct zx_ctx* c);
void zx_FREE_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_LABEL_s* zx_DEEP_CLONE_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x, int dup_strs);
void zx_DUP_STRS_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x);
int zx_WALK_SO_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x);
int zx_LEN_WO_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x);
char* zx_ENC_SO_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x, char* p);
char* zx_ENC_WO_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_LABEL(struct zx_ctx* c, struct zx_cdm_LABEL_s* x);

struct zx_cdm_LABEL_s {
  ZX_ELEM_EXT
  zx_cdm_LABEL_EXT
  struct zx_elem_s* HOME;	/* {0,1} xs:string */
  struct zx_elem_s* WORK;	/* {0,1} xs:string */
  struct zx_elem_s* POSTAL;	/* {0,1} xs:string */
  struct zx_elem_s* PARCEL;	/* {0,1} xs:string */
  struct zx_elem_s* DOM;	/* {0,1} xs:string */
  struct zx_elem_s* INTL;	/* {0,1} xs:string */
  struct zx_elem_s* PREF;	/* {0,1} xs:string */
  struct zx_cdm_LINE_s* LINE;	/* {1,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_LABEL_GET_id(struct zx_cdm_LABEL_s* x);
struct zx_str* zx_cdm_LABEL_GET_modificationTime(struct zx_cdm_LABEL_s* x);

struct zx_elem_s* zx_cdm_LABEL_GET_HOME(struct zx_cdm_LABEL_s* x, int n);
struct zx_elem_s* zx_cdm_LABEL_GET_WORK(struct zx_cdm_LABEL_s* x, int n);
struct zx_elem_s* zx_cdm_LABEL_GET_POSTAL(struct zx_cdm_LABEL_s* x, int n);
struct zx_elem_s* zx_cdm_LABEL_GET_PARCEL(struct zx_cdm_LABEL_s* x, int n);
struct zx_elem_s* zx_cdm_LABEL_GET_DOM(struct zx_cdm_LABEL_s* x, int n);
struct zx_elem_s* zx_cdm_LABEL_GET_INTL(struct zx_cdm_LABEL_s* x, int n);
struct zx_elem_s* zx_cdm_LABEL_GET_PREF(struct zx_cdm_LABEL_s* x, int n);
struct zx_cdm_LINE_s* zx_cdm_LABEL_GET_LINE(struct zx_cdm_LABEL_s* x, int n);

int zx_cdm_LABEL_NUM_HOME(struct zx_cdm_LABEL_s* x);
int zx_cdm_LABEL_NUM_WORK(struct zx_cdm_LABEL_s* x);
int zx_cdm_LABEL_NUM_POSTAL(struct zx_cdm_LABEL_s* x);
int zx_cdm_LABEL_NUM_PARCEL(struct zx_cdm_LABEL_s* x);
int zx_cdm_LABEL_NUM_DOM(struct zx_cdm_LABEL_s* x);
int zx_cdm_LABEL_NUM_INTL(struct zx_cdm_LABEL_s* x);
int zx_cdm_LABEL_NUM_PREF(struct zx_cdm_LABEL_s* x);
int zx_cdm_LABEL_NUM_LINE(struct zx_cdm_LABEL_s* x);

struct zx_elem_s* zx_cdm_LABEL_POP_HOME(struct zx_cdm_LABEL_s* x);
struct zx_elem_s* zx_cdm_LABEL_POP_WORK(struct zx_cdm_LABEL_s* x);
struct zx_elem_s* zx_cdm_LABEL_POP_POSTAL(struct zx_cdm_LABEL_s* x);
struct zx_elem_s* zx_cdm_LABEL_POP_PARCEL(struct zx_cdm_LABEL_s* x);
struct zx_elem_s* zx_cdm_LABEL_POP_DOM(struct zx_cdm_LABEL_s* x);
struct zx_elem_s* zx_cdm_LABEL_POP_INTL(struct zx_cdm_LABEL_s* x);
struct zx_elem_s* zx_cdm_LABEL_POP_PREF(struct zx_cdm_LABEL_s* x);
struct zx_cdm_LINE_s* zx_cdm_LABEL_POP_LINE(struct zx_cdm_LABEL_s* x);

void zx_cdm_LABEL_PUSH_HOME(struct zx_cdm_LABEL_s* x, struct zx_elem_s* y);
void zx_cdm_LABEL_PUSH_WORK(struct zx_cdm_LABEL_s* x, struct zx_elem_s* y);
void zx_cdm_LABEL_PUSH_POSTAL(struct zx_cdm_LABEL_s* x, struct zx_elem_s* y);
void zx_cdm_LABEL_PUSH_PARCEL(struct zx_cdm_LABEL_s* x, struct zx_elem_s* y);
void zx_cdm_LABEL_PUSH_DOM(struct zx_cdm_LABEL_s* x, struct zx_elem_s* y);
void zx_cdm_LABEL_PUSH_INTL(struct zx_cdm_LABEL_s* x, struct zx_elem_s* y);
void zx_cdm_LABEL_PUSH_PREF(struct zx_cdm_LABEL_s* x, struct zx_elem_s* y);
void zx_cdm_LABEL_PUSH_LINE(struct zx_cdm_LABEL_s* x, struct zx_cdm_LINE_s* y);

void zx_cdm_LABEL_PUT_id(struct zx_cdm_LABEL_s* x, struct zx_str* y);
void zx_cdm_LABEL_PUT_modificationTime(struct zx_cdm_LABEL_s* x, struct zx_str* y);

void zx_cdm_LABEL_PUT_HOME(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_LABEL_PUT_WORK(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_LABEL_PUT_POSTAL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_LABEL_PUT_PARCEL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_LABEL_PUT_DOM(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_LABEL_PUT_INTL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_LABEL_PUT_PREF(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_LABEL_PUT_LINE(struct zx_cdm_LABEL_s* x, int n, struct zx_cdm_LINE_s* y);

void zx_cdm_LABEL_ADD_HOME(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_LABEL_ADD_WORK(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_LABEL_ADD_POSTAL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_LABEL_ADD_PARCEL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_LABEL_ADD_DOM(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_LABEL_ADD_INTL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_LABEL_ADD_PREF(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_LABEL_ADD_LINE(struct zx_cdm_LABEL_s* x, int n, struct zx_cdm_LINE_s* z);

void zx_cdm_LABEL_DEL_HOME(struct zx_cdm_LABEL_s* x, int n);
void zx_cdm_LABEL_DEL_WORK(struct zx_cdm_LABEL_s* x, int n);
void zx_cdm_LABEL_DEL_POSTAL(struct zx_cdm_LABEL_s* x, int n);
void zx_cdm_LABEL_DEL_PARCEL(struct zx_cdm_LABEL_s* x, int n);
void zx_cdm_LABEL_DEL_DOM(struct zx_cdm_LABEL_s* x, int n);
void zx_cdm_LABEL_DEL_INTL(struct zx_cdm_LABEL_s* x, int n);
void zx_cdm_LABEL_DEL_PREF(struct zx_cdm_LABEL_s* x, int n);
void zx_cdm_LABEL_DEL_LINE(struct zx_cdm_LABEL_s* x, int n);

void zx_cdm_LABEL_REV_HOME(struct zx_cdm_LABEL_s* x);
void zx_cdm_LABEL_REV_WORK(struct zx_cdm_LABEL_s* x);
void zx_cdm_LABEL_REV_POSTAL(struct zx_cdm_LABEL_s* x);
void zx_cdm_LABEL_REV_PARCEL(struct zx_cdm_LABEL_s* x);
void zx_cdm_LABEL_REV_DOM(struct zx_cdm_LABEL_s* x);
void zx_cdm_LABEL_REV_INTL(struct zx_cdm_LABEL_s* x);
void zx_cdm_LABEL_REV_PREF(struct zx_cdm_LABEL_s* x);
void zx_cdm_LABEL_REV_LINE(struct zx_cdm_LABEL_s* x);

#endif
/* -------------------------- cdm_LAT -------------------------- */
/* refby( zx_cdm_GEO_s ) */
#ifndef zx_cdm_LAT_EXT
#define zx_cdm_LAT_EXT
#endif

struct zx_cdm_LAT_s* zx_DEC_cdm_LAT(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_LAT_s* zx_NEW_cdm_LAT(struct zx_ctx* c);
void zx_FREE_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_LAT_s* zx_DEEP_CLONE_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x, int dup_strs);
void zx_DUP_STRS_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x);
int zx_WALK_SO_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x);
int zx_LEN_WO_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x);
char* zx_ENC_SO_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x, char* p);
char* zx_ENC_WO_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_LAT(struct zx_ctx* c, struct zx_cdm_LAT_s* x);

struct zx_cdm_LAT_s {
  ZX_ELEM_EXT
  zx_cdm_LAT_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_LAT_GET_id(struct zx_cdm_LAT_s* x);
struct zx_str* zx_cdm_LAT_GET_modificationTime(struct zx_cdm_LAT_s* x);
struct zx_str* zx_cdm_LAT_GET_ACC(struct zx_cdm_LAT_s* x);
struct zx_str* zx_cdm_LAT_GET_ACCTime(struct zx_cdm_LAT_s* x);
struct zx_str* zx_cdm_LAT_GET_modifier(struct zx_cdm_LAT_s* x);





void zx_cdm_LAT_PUT_id(struct zx_cdm_LAT_s* x, struct zx_str* y);
void zx_cdm_LAT_PUT_modificationTime(struct zx_cdm_LAT_s* x, struct zx_str* y);
void zx_cdm_LAT_PUT_ACC(struct zx_cdm_LAT_s* x, struct zx_str* y);
void zx_cdm_LAT_PUT_ACCTime(struct zx_cdm_LAT_s* x, struct zx_str* y);
void zx_cdm_LAT_PUT_modifier(struct zx_cdm_LAT_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_LINE -------------------------- */
/* refby( zx_cdm_LABEL_s ) */
#ifndef zx_cdm_LINE_EXT
#define zx_cdm_LINE_EXT
#endif

struct zx_cdm_LINE_s* zx_DEC_cdm_LINE(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_LINE_s* zx_NEW_cdm_LINE(struct zx_ctx* c);
void zx_FREE_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_LINE_s* zx_DEEP_CLONE_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x, int dup_strs);
void zx_DUP_STRS_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x);
int zx_WALK_SO_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x);
int zx_LEN_WO_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x);
char* zx_ENC_SO_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x, char* p);
char* zx_ENC_WO_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_LINE(struct zx_ctx* c, struct zx_cdm_LINE_s* x);

struct zx_cdm_LINE_s {
  ZX_ELEM_EXT
  zx_cdm_LINE_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_LINE_GET_group(struct zx_cdm_LINE_s* x);





void zx_cdm_LINE_PUT_group(struct zx_cdm_LINE_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_LISTMEMBER -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_LISTMEMBER_EXT
#define zx_cdm_LISTMEMBER_EXT
#endif

struct zx_cdm_LISTMEMBER_s* zx_DEC_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_LISTMEMBER_s* zx_NEW_cdm_LISTMEMBER(struct zx_ctx* c);
void zx_FREE_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_LISTMEMBER_s* zx_DEEP_CLONE_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x, int dup_strs);
void zx_DUP_STRS_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x);
int zx_WALK_SO_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x);
int zx_LEN_WO_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x);
char* zx_ENC_SO_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x, char* p);
char* zx_ENC_WO_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_LISTMEMBER(struct zx_ctx* c, struct zx_cdm_LISTMEMBER_s* x);

struct zx_cdm_LISTMEMBER_s {
  ZX_ELEM_EXT
  zx_cdm_LISTMEMBER_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_LISTMEMBER_GET_id(struct zx_cdm_LISTMEMBER_s* x);
struct zx_str* zx_cdm_LISTMEMBER_GET_modificationTime(struct zx_cdm_LISTMEMBER_s* x);
struct zx_str* zx_cdm_LISTMEMBER_GET_ACC(struct zx_cdm_LISTMEMBER_s* x);
struct zx_str* zx_cdm_LISTMEMBER_GET_ACCTime(struct zx_cdm_LISTMEMBER_s* x);
struct zx_str* zx_cdm_LISTMEMBER_GET_modifier(struct zx_cdm_LISTMEMBER_s* x);





void zx_cdm_LISTMEMBER_PUT_id(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y);
void zx_cdm_LISTMEMBER_PUT_modificationTime(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y);
void zx_cdm_LISTMEMBER_PUT_ACC(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y);
void zx_cdm_LISTMEMBER_PUT_ACCTime(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y);
void zx_cdm_LISTMEMBER_PUT_modifier(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_LOCALITY -------------------------- */
/* refby( zx_cdm_ADR_s ) */
#ifndef zx_cdm_LOCALITY_EXT
#define zx_cdm_LOCALITY_EXT
#endif

struct zx_cdm_LOCALITY_s* zx_DEC_cdm_LOCALITY(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_LOCALITY_s* zx_NEW_cdm_LOCALITY(struct zx_ctx* c);
void zx_FREE_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_LOCALITY_s* zx_DEEP_CLONE_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x, int dup_strs);
void zx_DUP_STRS_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x);
int zx_WALK_SO_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x);
int zx_LEN_WO_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x);
char* zx_ENC_SO_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x, char* p);
char* zx_ENC_WO_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_LOCALITY(struct zx_ctx* c, struct zx_cdm_LOCALITY_s* x);

struct zx_cdm_LOCALITY_s {
  ZX_ELEM_EXT
  zx_cdm_LOCALITY_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_LOCALITY_GET_group(struct zx_cdm_LOCALITY_s* x);





void zx_cdm_LOCALITY_PUT_group(struct zx_cdm_LOCALITY_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_LOGO -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_LOGO_EXT
#define zx_cdm_LOGO_EXT
#endif

struct zx_cdm_LOGO_s* zx_DEC_cdm_LOGO(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_LOGO_s* zx_NEW_cdm_LOGO(struct zx_ctx* c);
void zx_FREE_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_LOGO_s* zx_DEEP_CLONE_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x, int dup_strs);
void zx_DUP_STRS_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x);
int zx_WALK_SO_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x);
int zx_LEN_WO_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x);
char* zx_ENC_SO_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x, char* p);
char* zx_ENC_WO_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_LOGO(struct zx_ctx* c, struct zx_cdm_LOGO_s* x);

struct zx_cdm_LOGO_s {
  ZX_ELEM_EXT
  zx_cdm_LOGO_EXT
  struct zx_cdm_TYPE_s* TYPE;	/* {0,1} nada */
  struct zx_cdm_BINVAL_s* BINVAL;	/* {0,1} nada */
  struct zx_cdm_EXTVAL_s* EXTVAL;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_LOGO_GET_id(struct zx_cdm_LOGO_s* x);
struct zx_str* zx_cdm_LOGO_GET_modificationTime(struct zx_cdm_LOGO_s* x);

struct zx_cdm_TYPE_s* zx_cdm_LOGO_GET_TYPE(struct zx_cdm_LOGO_s* x, int n);
struct zx_cdm_BINVAL_s* zx_cdm_LOGO_GET_BINVAL(struct zx_cdm_LOGO_s* x, int n);
struct zx_cdm_EXTVAL_s* zx_cdm_LOGO_GET_EXTVAL(struct zx_cdm_LOGO_s* x, int n);

int zx_cdm_LOGO_NUM_TYPE(struct zx_cdm_LOGO_s* x);
int zx_cdm_LOGO_NUM_BINVAL(struct zx_cdm_LOGO_s* x);
int zx_cdm_LOGO_NUM_EXTVAL(struct zx_cdm_LOGO_s* x);

struct zx_cdm_TYPE_s* zx_cdm_LOGO_POP_TYPE(struct zx_cdm_LOGO_s* x);
struct zx_cdm_BINVAL_s* zx_cdm_LOGO_POP_BINVAL(struct zx_cdm_LOGO_s* x);
struct zx_cdm_EXTVAL_s* zx_cdm_LOGO_POP_EXTVAL(struct zx_cdm_LOGO_s* x);

void zx_cdm_LOGO_PUSH_TYPE(struct zx_cdm_LOGO_s* x, struct zx_cdm_TYPE_s* y);
void zx_cdm_LOGO_PUSH_BINVAL(struct zx_cdm_LOGO_s* x, struct zx_cdm_BINVAL_s* y);
void zx_cdm_LOGO_PUSH_EXTVAL(struct zx_cdm_LOGO_s* x, struct zx_cdm_EXTVAL_s* y);

void zx_cdm_LOGO_PUT_id(struct zx_cdm_LOGO_s* x, struct zx_str* y);
void zx_cdm_LOGO_PUT_modificationTime(struct zx_cdm_LOGO_s* x, struct zx_str* y);

void zx_cdm_LOGO_PUT_TYPE(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_TYPE_s* y);
void zx_cdm_LOGO_PUT_BINVAL(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_BINVAL_s* y);
void zx_cdm_LOGO_PUT_EXTVAL(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_EXTVAL_s* y);

void zx_cdm_LOGO_ADD_TYPE(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_TYPE_s* z);
void zx_cdm_LOGO_ADD_BINVAL(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_BINVAL_s* z);
void zx_cdm_LOGO_ADD_EXTVAL(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_EXTVAL_s* z);

void zx_cdm_LOGO_DEL_TYPE(struct zx_cdm_LOGO_s* x, int n);
void zx_cdm_LOGO_DEL_BINVAL(struct zx_cdm_LOGO_s* x, int n);
void zx_cdm_LOGO_DEL_EXTVAL(struct zx_cdm_LOGO_s* x, int n);

void zx_cdm_LOGO_REV_TYPE(struct zx_cdm_LOGO_s* x);
void zx_cdm_LOGO_REV_BINVAL(struct zx_cdm_LOGO_s* x);
void zx_cdm_LOGO_REV_EXTVAL(struct zx_cdm_LOGO_s* x);

#endif
/* -------------------------- cdm_LON -------------------------- */
/* refby( zx_cdm_GEO_s ) */
#ifndef zx_cdm_LON_EXT
#define zx_cdm_LON_EXT
#endif

struct zx_cdm_LON_s* zx_DEC_cdm_LON(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_LON_s* zx_NEW_cdm_LON(struct zx_ctx* c);
void zx_FREE_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_LON_s* zx_DEEP_CLONE_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x, int dup_strs);
void zx_DUP_STRS_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x);
int zx_WALK_SO_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x);
int zx_LEN_WO_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x);
char* zx_ENC_SO_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x, char* p);
char* zx_ENC_WO_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_LON(struct zx_ctx* c, struct zx_cdm_LON_s* x);

struct zx_cdm_LON_s {
  ZX_ELEM_EXT
  zx_cdm_LON_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_LON_GET_id(struct zx_cdm_LON_s* x);
struct zx_str* zx_cdm_LON_GET_modificationTime(struct zx_cdm_LON_s* x);
struct zx_str* zx_cdm_LON_GET_ACC(struct zx_cdm_LON_s* x);
struct zx_str* zx_cdm_LON_GET_ACCTime(struct zx_cdm_LON_s* x);
struct zx_str* zx_cdm_LON_GET_modifier(struct zx_cdm_LON_s* x);





void zx_cdm_LON_PUT_id(struct zx_cdm_LON_s* x, struct zx_str* y);
void zx_cdm_LON_PUT_modificationTime(struct zx_cdm_LON_s* x, struct zx_str* y);
void zx_cdm_LON_PUT_ACC(struct zx_cdm_LON_s* x, struct zx_str* y);
void zx_cdm_LON_PUT_ACCTime(struct zx_cdm_LON_s* x, struct zx_str* y);
void zx_cdm_LON_PUT_modifier(struct zx_cdm_LON_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_MAILER -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_MAILER_EXT
#define zx_cdm_MAILER_EXT
#endif

struct zx_cdm_MAILER_s* zx_DEC_cdm_MAILER(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_MAILER_s* zx_NEW_cdm_MAILER(struct zx_ctx* c);
void zx_FREE_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_MAILER_s* zx_DEEP_CLONE_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x, int dup_strs);
void zx_DUP_STRS_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x);
int zx_WALK_SO_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x);
int zx_LEN_WO_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x);
char* zx_ENC_SO_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x, char* p);
char* zx_ENC_WO_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_MAILER(struct zx_ctx* c, struct zx_cdm_MAILER_s* x);

struct zx_cdm_MAILER_s {
  ZX_ELEM_EXT
  zx_cdm_MAILER_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_MAILER_GET_id(struct zx_cdm_MAILER_s* x);
struct zx_str* zx_cdm_MAILER_GET_modificationTime(struct zx_cdm_MAILER_s* x);
struct zx_str* zx_cdm_MAILER_GET_ACC(struct zx_cdm_MAILER_s* x);
struct zx_str* zx_cdm_MAILER_GET_ACCTime(struct zx_cdm_MAILER_s* x);
struct zx_str* zx_cdm_MAILER_GET_modifier(struct zx_cdm_MAILER_s* x);





void zx_cdm_MAILER_PUT_id(struct zx_cdm_MAILER_s* x, struct zx_str* y);
void zx_cdm_MAILER_PUT_modificationTime(struct zx_cdm_MAILER_s* x, struct zx_str* y);
void zx_cdm_MAILER_PUT_ACC(struct zx_cdm_MAILER_s* x, struct zx_str* y);
void zx_cdm_MAILER_PUT_ACCTime(struct zx_cdm_MAILER_s* x, struct zx_str* y);
void zx_cdm_MAILER_PUT_modifier(struct zx_cdm_MAILER_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_MIDDLE -------------------------- */
/* refby( zx_cdm_N_s ) */
#ifndef zx_cdm_MIDDLE_EXT
#define zx_cdm_MIDDLE_EXT
#endif

struct zx_cdm_MIDDLE_s* zx_DEC_cdm_MIDDLE(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_MIDDLE_s* zx_NEW_cdm_MIDDLE(struct zx_ctx* c);
void zx_FREE_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_MIDDLE_s* zx_DEEP_CLONE_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x, int dup_strs);
void zx_DUP_STRS_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x);
int zx_WALK_SO_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x);
int zx_LEN_WO_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x);
char* zx_ENC_SO_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x, char* p);
char* zx_ENC_WO_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_MIDDLE(struct zx_ctx* c, struct zx_cdm_MIDDLE_s* x);

struct zx_cdm_MIDDLE_s {
  ZX_ELEM_EXT
  zx_cdm_MIDDLE_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_MIDDLE_GET_group(struct zx_cdm_MIDDLE_s* x);





void zx_cdm_MIDDLE_PUT_group(struct zx_cdm_MIDDLE_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_N -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_N_EXT
#define zx_cdm_N_EXT
#endif

struct zx_cdm_N_s* zx_DEC_cdm_N(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_N_s* zx_NEW_cdm_N(struct zx_ctx* c);
void zx_FREE_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_N_s* zx_DEEP_CLONE_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x, int dup_strs);
void zx_DUP_STRS_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x);
int zx_WALK_SO_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x);
int zx_LEN_WO_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x);
char* zx_ENC_SO_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x, char* p);
char* zx_ENC_WO_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_N(struct zx_ctx* c, struct zx_cdm_N_s* x);

struct zx_cdm_N_s {
  ZX_ELEM_EXT
  zx_cdm_N_EXT
  struct zx_cdm_FAMILY_s* FAMILY;	/* {0,1} nada */
  struct zx_cdm_GIVEN_s* GIVEN;	/* {0,1} nada */
  struct zx_cdm_MIDDLE_s* MIDDLE;	/* {0,1} nada */
  struct zx_cdm_PREFIX_s* PREFIX;	/* {0,1} nada */
  struct zx_cdm_SUFFIX_s* SUFFIX;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_N_GET_id(struct zx_cdm_N_s* x);
struct zx_str* zx_cdm_N_GET_modificationTime(struct zx_cdm_N_s* x);

struct zx_cdm_FAMILY_s* zx_cdm_N_GET_FAMILY(struct zx_cdm_N_s* x, int n);
struct zx_cdm_GIVEN_s* zx_cdm_N_GET_GIVEN(struct zx_cdm_N_s* x, int n);
struct zx_cdm_MIDDLE_s* zx_cdm_N_GET_MIDDLE(struct zx_cdm_N_s* x, int n);
struct zx_cdm_PREFIX_s* zx_cdm_N_GET_PREFIX(struct zx_cdm_N_s* x, int n);
struct zx_cdm_SUFFIX_s* zx_cdm_N_GET_SUFFIX(struct zx_cdm_N_s* x, int n);

int zx_cdm_N_NUM_FAMILY(struct zx_cdm_N_s* x);
int zx_cdm_N_NUM_GIVEN(struct zx_cdm_N_s* x);
int zx_cdm_N_NUM_MIDDLE(struct zx_cdm_N_s* x);
int zx_cdm_N_NUM_PREFIX(struct zx_cdm_N_s* x);
int zx_cdm_N_NUM_SUFFIX(struct zx_cdm_N_s* x);

struct zx_cdm_FAMILY_s* zx_cdm_N_POP_FAMILY(struct zx_cdm_N_s* x);
struct zx_cdm_GIVEN_s* zx_cdm_N_POP_GIVEN(struct zx_cdm_N_s* x);
struct zx_cdm_MIDDLE_s* zx_cdm_N_POP_MIDDLE(struct zx_cdm_N_s* x);
struct zx_cdm_PREFIX_s* zx_cdm_N_POP_PREFIX(struct zx_cdm_N_s* x);
struct zx_cdm_SUFFIX_s* zx_cdm_N_POP_SUFFIX(struct zx_cdm_N_s* x);

void zx_cdm_N_PUSH_FAMILY(struct zx_cdm_N_s* x, struct zx_cdm_FAMILY_s* y);
void zx_cdm_N_PUSH_GIVEN(struct zx_cdm_N_s* x, struct zx_cdm_GIVEN_s* y);
void zx_cdm_N_PUSH_MIDDLE(struct zx_cdm_N_s* x, struct zx_cdm_MIDDLE_s* y);
void zx_cdm_N_PUSH_PREFIX(struct zx_cdm_N_s* x, struct zx_cdm_PREFIX_s* y);
void zx_cdm_N_PUSH_SUFFIX(struct zx_cdm_N_s* x, struct zx_cdm_SUFFIX_s* y);

void zx_cdm_N_PUT_id(struct zx_cdm_N_s* x, struct zx_str* y);
void zx_cdm_N_PUT_modificationTime(struct zx_cdm_N_s* x, struct zx_str* y);

void zx_cdm_N_PUT_FAMILY(struct zx_cdm_N_s* x, int n, struct zx_cdm_FAMILY_s* y);
void zx_cdm_N_PUT_GIVEN(struct zx_cdm_N_s* x, int n, struct zx_cdm_GIVEN_s* y);
void zx_cdm_N_PUT_MIDDLE(struct zx_cdm_N_s* x, int n, struct zx_cdm_MIDDLE_s* y);
void zx_cdm_N_PUT_PREFIX(struct zx_cdm_N_s* x, int n, struct zx_cdm_PREFIX_s* y);
void zx_cdm_N_PUT_SUFFIX(struct zx_cdm_N_s* x, int n, struct zx_cdm_SUFFIX_s* y);

void zx_cdm_N_ADD_FAMILY(struct zx_cdm_N_s* x, int n, struct zx_cdm_FAMILY_s* z);
void zx_cdm_N_ADD_GIVEN(struct zx_cdm_N_s* x, int n, struct zx_cdm_GIVEN_s* z);
void zx_cdm_N_ADD_MIDDLE(struct zx_cdm_N_s* x, int n, struct zx_cdm_MIDDLE_s* z);
void zx_cdm_N_ADD_PREFIX(struct zx_cdm_N_s* x, int n, struct zx_cdm_PREFIX_s* z);
void zx_cdm_N_ADD_SUFFIX(struct zx_cdm_N_s* x, int n, struct zx_cdm_SUFFIX_s* z);

void zx_cdm_N_DEL_FAMILY(struct zx_cdm_N_s* x, int n);
void zx_cdm_N_DEL_GIVEN(struct zx_cdm_N_s* x, int n);
void zx_cdm_N_DEL_MIDDLE(struct zx_cdm_N_s* x, int n);
void zx_cdm_N_DEL_PREFIX(struct zx_cdm_N_s* x, int n);
void zx_cdm_N_DEL_SUFFIX(struct zx_cdm_N_s* x, int n);

void zx_cdm_N_REV_FAMILY(struct zx_cdm_N_s* x);
void zx_cdm_N_REV_GIVEN(struct zx_cdm_N_s* x);
void zx_cdm_N_REV_MIDDLE(struct zx_cdm_N_s* x);
void zx_cdm_N_REV_PREFIX(struct zx_cdm_N_s* x);
void zx_cdm_N_REV_SUFFIX(struct zx_cdm_N_s* x);

#endif
/* -------------------------- cdm_NICKNAME -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_NICKNAME_EXT
#define zx_cdm_NICKNAME_EXT
#endif

struct zx_cdm_NICKNAME_s* zx_DEC_cdm_NICKNAME(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_NICKNAME_s* zx_NEW_cdm_NICKNAME(struct zx_ctx* c);
void zx_FREE_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_NICKNAME_s* zx_DEEP_CLONE_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x, int dup_strs);
void zx_DUP_STRS_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x);
int zx_WALK_SO_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x);
int zx_LEN_WO_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x);
char* zx_ENC_SO_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x, char* p);
char* zx_ENC_WO_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_NICKNAME(struct zx_ctx* c, struct zx_cdm_NICKNAME_s* x);

struct zx_cdm_NICKNAME_s {
  ZX_ELEM_EXT
  zx_cdm_NICKNAME_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_NICKNAME_GET_group(struct zx_cdm_NICKNAME_s* x);





void zx_cdm_NICKNAME_PUT_group(struct zx_cdm_NICKNAME_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_NOTE -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_NOTE_EXT
#define zx_cdm_NOTE_EXT
#endif

struct zx_cdm_NOTE_s* zx_DEC_cdm_NOTE(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_NOTE_s* zx_NEW_cdm_NOTE(struct zx_ctx* c);
void zx_FREE_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_NOTE_s* zx_DEEP_CLONE_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x, int dup_strs);
void zx_DUP_STRS_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x);
int zx_WALK_SO_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x);
int zx_LEN_WO_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x);
char* zx_ENC_SO_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x, char* p);
char* zx_ENC_WO_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_NOTE(struct zx_ctx* c, struct zx_cdm_NOTE_s* x);

struct zx_cdm_NOTE_s {
  ZX_ELEM_EXT
  zx_cdm_NOTE_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_NOTE_GET_group(struct zx_cdm_NOTE_s* x);





void zx_cdm_NOTE_PUT_group(struct zx_cdm_NOTE_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_NUMBER -------------------------- */
/* refby( zx_cdm_TEL_s ) */
#ifndef zx_cdm_NUMBER_EXT
#define zx_cdm_NUMBER_EXT
#endif

struct zx_cdm_NUMBER_s* zx_DEC_cdm_NUMBER(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_NUMBER_s* zx_NEW_cdm_NUMBER(struct zx_ctx* c);
void zx_FREE_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_NUMBER_s* zx_DEEP_CLONE_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x, int dup_strs);
void zx_DUP_STRS_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x);
int zx_WALK_SO_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x);
int zx_LEN_WO_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x);
char* zx_ENC_SO_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x, char* p);
char* zx_ENC_WO_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_NUMBER(struct zx_ctx* c, struct zx_cdm_NUMBER_s* x);

struct zx_cdm_NUMBER_s {
  ZX_ELEM_EXT
  zx_cdm_NUMBER_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_NUMBER_GET_id(struct zx_cdm_NUMBER_s* x);
struct zx_str* zx_cdm_NUMBER_GET_modificationTime(struct zx_cdm_NUMBER_s* x);
struct zx_str* zx_cdm_NUMBER_GET_ACC(struct zx_cdm_NUMBER_s* x);
struct zx_str* zx_cdm_NUMBER_GET_ACCTime(struct zx_cdm_NUMBER_s* x);
struct zx_str* zx_cdm_NUMBER_GET_modifier(struct zx_cdm_NUMBER_s* x);





void zx_cdm_NUMBER_PUT_id(struct zx_cdm_NUMBER_s* x, struct zx_str* y);
void zx_cdm_NUMBER_PUT_modificationTime(struct zx_cdm_NUMBER_s* x, struct zx_str* y);
void zx_cdm_NUMBER_PUT_ACC(struct zx_cdm_NUMBER_s* x, struct zx_str* y);
void zx_cdm_NUMBER_PUT_ACCTime(struct zx_cdm_NUMBER_s* x, struct zx_str* y);
void zx_cdm_NUMBER_PUT_modifier(struct zx_cdm_NUMBER_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_ORG -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_ORG_EXT
#define zx_cdm_ORG_EXT
#endif

struct zx_cdm_ORG_s* zx_DEC_cdm_ORG(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_ORG_s* zx_NEW_cdm_ORG(struct zx_ctx* c);
void zx_FREE_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_ORG_s* zx_DEEP_CLONE_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x, int dup_strs);
void zx_DUP_STRS_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x);
int zx_WALK_SO_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x);
int zx_LEN_WO_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x);
char* zx_ENC_SO_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x, char* p);
char* zx_ENC_WO_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_ORG(struct zx_ctx* c, struct zx_cdm_ORG_s* x);

struct zx_cdm_ORG_s {
  ZX_ELEM_EXT
  zx_cdm_ORG_EXT
  struct zx_cdm_ORGNAME_s* ORGNAME;	/* {1,1} nada */
  struct zx_cdm_ORGUNIT_s* ORGUNIT;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_ORG_GET_id(struct zx_cdm_ORG_s* x);
struct zx_str* zx_cdm_ORG_GET_modificationTime(struct zx_cdm_ORG_s* x);

struct zx_cdm_ORGNAME_s* zx_cdm_ORG_GET_ORGNAME(struct zx_cdm_ORG_s* x, int n);
struct zx_cdm_ORGUNIT_s* zx_cdm_ORG_GET_ORGUNIT(struct zx_cdm_ORG_s* x, int n);

int zx_cdm_ORG_NUM_ORGNAME(struct zx_cdm_ORG_s* x);
int zx_cdm_ORG_NUM_ORGUNIT(struct zx_cdm_ORG_s* x);

struct zx_cdm_ORGNAME_s* zx_cdm_ORG_POP_ORGNAME(struct zx_cdm_ORG_s* x);
struct zx_cdm_ORGUNIT_s* zx_cdm_ORG_POP_ORGUNIT(struct zx_cdm_ORG_s* x);

void zx_cdm_ORG_PUSH_ORGNAME(struct zx_cdm_ORG_s* x, struct zx_cdm_ORGNAME_s* y);
void zx_cdm_ORG_PUSH_ORGUNIT(struct zx_cdm_ORG_s* x, struct zx_cdm_ORGUNIT_s* y);

void zx_cdm_ORG_PUT_id(struct zx_cdm_ORG_s* x, struct zx_str* y);
void zx_cdm_ORG_PUT_modificationTime(struct zx_cdm_ORG_s* x, struct zx_str* y);

void zx_cdm_ORG_PUT_ORGNAME(struct zx_cdm_ORG_s* x, int n, struct zx_cdm_ORGNAME_s* y);
void zx_cdm_ORG_PUT_ORGUNIT(struct zx_cdm_ORG_s* x, int n, struct zx_cdm_ORGUNIT_s* y);

void zx_cdm_ORG_ADD_ORGNAME(struct zx_cdm_ORG_s* x, int n, struct zx_cdm_ORGNAME_s* z);
void zx_cdm_ORG_ADD_ORGUNIT(struct zx_cdm_ORG_s* x, int n, struct zx_cdm_ORGUNIT_s* z);

void zx_cdm_ORG_DEL_ORGNAME(struct zx_cdm_ORG_s* x, int n);
void zx_cdm_ORG_DEL_ORGUNIT(struct zx_cdm_ORG_s* x, int n);

void zx_cdm_ORG_REV_ORGNAME(struct zx_cdm_ORG_s* x);
void zx_cdm_ORG_REV_ORGUNIT(struct zx_cdm_ORG_s* x);

#endif
/* -------------------------- cdm_ORGNAME -------------------------- */
/* refby( zx_cdm_ORG_s ) */
#ifndef zx_cdm_ORGNAME_EXT
#define zx_cdm_ORGNAME_EXT
#endif

struct zx_cdm_ORGNAME_s* zx_DEC_cdm_ORGNAME(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_ORGNAME_s* zx_NEW_cdm_ORGNAME(struct zx_ctx* c);
void zx_FREE_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_ORGNAME_s* zx_DEEP_CLONE_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x, int dup_strs);
void zx_DUP_STRS_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x);
int zx_WALK_SO_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x);
int zx_LEN_WO_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x);
char* zx_ENC_SO_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x, char* p);
char* zx_ENC_WO_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_ORGNAME(struct zx_ctx* c, struct zx_cdm_ORGNAME_s* x);

struct zx_cdm_ORGNAME_s {
  ZX_ELEM_EXT
  zx_cdm_ORGNAME_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_ORGNAME_GET_group(struct zx_cdm_ORGNAME_s* x);





void zx_cdm_ORGNAME_PUT_group(struct zx_cdm_ORGNAME_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_ORGUNIT -------------------------- */
/* refby( zx_cdm_ORG_s ) */
#ifndef zx_cdm_ORGUNIT_EXT
#define zx_cdm_ORGUNIT_EXT
#endif

struct zx_cdm_ORGUNIT_s* zx_DEC_cdm_ORGUNIT(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_ORGUNIT_s* zx_NEW_cdm_ORGUNIT(struct zx_ctx* c);
void zx_FREE_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_ORGUNIT_s* zx_DEEP_CLONE_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x, int dup_strs);
void zx_DUP_STRS_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x);
int zx_WALK_SO_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x);
int zx_LEN_WO_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x);
char* zx_ENC_SO_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x, char* p);
char* zx_ENC_WO_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_ORGUNIT(struct zx_ctx* c, struct zx_cdm_ORGUNIT_s* x);

struct zx_cdm_ORGUNIT_s {
  ZX_ELEM_EXT
  zx_cdm_ORGUNIT_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_ORGUNIT_GET_group(struct zx_cdm_ORGUNIT_s* x);





void zx_cdm_ORGUNIT_PUT_group(struct zx_cdm_ORGUNIT_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_PCODE -------------------------- */
/* refby( zx_cdm_ADR_s ) */
#ifndef zx_cdm_PCODE_EXT
#define zx_cdm_PCODE_EXT
#endif

struct zx_cdm_PCODE_s* zx_DEC_cdm_PCODE(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_PCODE_s* zx_NEW_cdm_PCODE(struct zx_ctx* c);
void zx_FREE_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_PCODE_s* zx_DEEP_CLONE_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x, int dup_strs);
void zx_DUP_STRS_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x);
int zx_WALK_SO_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x);
int zx_LEN_WO_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x);
char* zx_ENC_SO_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x, char* p);
char* zx_ENC_WO_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_PCODE(struct zx_ctx* c, struct zx_cdm_PCODE_s* x);

struct zx_cdm_PCODE_s {
  ZX_ELEM_EXT
  zx_cdm_PCODE_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_PCODE_GET_group(struct zx_cdm_PCODE_s* x);





void zx_cdm_PCODE_PUT_group(struct zx_cdm_PCODE_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_PHONETIC -------------------------- */
/* refby( zx_cdm_SOUND_s ) */
#ifndef zx_cdm_PHONETIC_EXT
#define zx_cdm_PHONETIC_EXT
#endif

struct zx_cdm_PHONETIC_s* zx_DEC_cdm_PHONETIC(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_PHONETIC_s* zx_NEW_cdm_PHONETIC(struct zx_ctx* c);
void zx_FREE_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_PHONETIC_s* zx_DEEP_CLONE_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x, int dup_strs);
void zx_DUP_STRS_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x);
int zx_WALK_SO_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x);
int zx_LEN_WO_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x);
char* zx_ENC_SO_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x, char* p);
char* zx_ENC_WO_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_PHONETIC(struct zx_ctx* c, struct zx_cdm_PHONETIC_s* x);

struct zx_cdm_PHONETIC_s {
  ZX_ELEM_EXT
  zx_cdm_PHONETIC_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_PHONETIC_GET_group(struct zx_cdm_PHONETIC_s* x);





void zx_cdm_PHONETIC_PUT_group(struct zx_cdm_PHONETIC_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_PHOTO -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_PHOTO_EXT
#define zx_cdm_PHOTO_EXT
#endif

struct zx_cdm_PHOTO_s* zx_DEC_cdm_PHOTO(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_PHOTO_s* zx_NEW_cdm_PHOTO(struct zx_ctx* c);
void zx_FREE_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_PHOTO_s* zx_DEEP_CLONE_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x, int dup_strs);
void zx_DUP_STRS_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x);
int zx_WALK_SO_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x);
int zx_LEN_WO_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x);
char* zx_ENC_SO_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x, char* p);
char* zx_ENC_WO_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_PHOTO(struct zx_ctx* c, struct zx_cdm_PHOTO_s* x);

struct zx_cdm_PHOTO_s {
  ZX_ELEM_EXT
  zx_cdm_PHOTO_EXT
  struct zx_cdm_TYPE_s* TYPE;	/* {0,1} nada */
  struct zx_cdm_BINVAL_s* BINVAL;	/* {0,1} nada */
  struct zx_cdm_EXTVAL_s* EXTVAL;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_PHOTO_GET_id(struct zx_cdm_PHOTO_s* x);
struct zx_str* zx_cdm_PHOTO_GET_modificationTime(struct zx_cdm_PHOTO_s* x);

struct zx_cdm_TYPE_s* zx_cdm_PHOTO_GET_TYPE(struct zx_cdm_PHOTO_s* x, int n);
struct zx_cdm_BINVAL_s* zx_cdm_PHOTO_GET_BINVAL(struct zx_cdm_PHOTO_s* x, int n);
struct zx_cdm_EXTVAL_s* zx_cdm_PHOTO_GET_EXTVAL(struct zx_cdm_PHOTO_s* x, int n);

int zx_cdm_PHOTO_NUM_TYPE(struct zx_cdm_PHOTO_s* x);
int zx_cdm_PHOTO_NUM_BINVAL(struct zx_cdm_PHOTO_s* x);
int zx_cdm_PHOTO_NUM_EXTVAL(struct zx_cdm_PHOTO_s* x);

struct zx_cdm_TYPE_s* zx_cdm_PHOTO_POP_TYPE(struct zx_cdm_PHOTO_s* x);
struct zx_cdm_BINVAL_s* zx_cdm_PHOTO_POP_BINVAL(struct zx_cdm_PHOTO_s* x);
struct zx_cdm_EXTVAL_s* zx_cdm_PHOTO_POP_EXTVAL(struct zx_cdm_PHOTO_s* x);

void zx_cdm_PHOTO_PUSH_TYPE(struct zx_cdm_PHOTO_s* x, struct zx_cdm_TYPE_s* y);
void zx_cdm_PHOTO_PUSH_BINVAL(struct zx_cdm_PHOTO_s* x, struct zx_cdm_BINVAL_s* y);
void zx_cdm_PHOTO_PUSH_EXTVAL(struct zx_cdm_PHOTO_s* x, struct zx_cdm_EXTVAL_s* y);

void zx_cdm_PHOTO_PUT_id(struct zx_cdm_PHOTO_s* x, struct zx_str* y);
void zx_cdm_PHOTO_PUT_modificationTime(struct zx_cdm_PHOTO_s* x, struct zx_str* y);

void zx_cdm_PHOTO_PUT_TYPE(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_TYPE_s* y);
void zx_cdm_PHOTO_PUT_BINVAL(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_BINVAL_s* y);
void zx_cdm_PHOTO_PUT_EXTVAL(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_EXTVAL_s* y);

void zx_cdm_PHOTO_ADD_TYPE(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_TYPE_s* z);
void zx_cdm_PHOTO_ADD_BINVAL(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_BINVAL_s* z);
void zx_cdm_PHOTO_ADD_EXTVAL(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_EXTVAL_s* z);

void zx_cdm_PHOTO_DEL_TYPE(struct zx_cdm_PHOTO_s* x, int n);
void zx_cdm_PHOTO_DEL_BINVAL(struct zx_cdm_PHOTO_s* x, int n);
void zx_cdm_PHOTO_DEL_EXTVAL(struct zx_cdm_PHOTO_s* x, int n);

void zx_cdm_PHOTO_REV_TYPE(struct zx_cdm_PHOTO_s* x);
void zx_cdm_PHOTO_REV_BINVAL(struct zx_cdm_PHOTO_s* x);
void zx_cdm_PHOTO_REV_EXTVAL(struct zx_cdm_PHOTO_s* x);

#endif
/* -------------------------- cdm_PHYSICALACCESS -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_PHYSICALACCESS_EXT
#define zx_cdm_PHYSICALACCESS_EXT
#endif

struct zx_cdm_PHYSICALACCESS_s* zx_DEC_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_PHYSICALACCESS_s* zx_NEW_cdm_PHYSICALACCESS(struct zx_ctx* c);
void zx_FREE_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_PHYSICALACCESS_s* zx_DEEP_CLONE_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x, int dup_strs);
void zx_DUP_STRS_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x);
int zx_WALK_SO_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x);
int zx_LEN_WO_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x);
char* zx_ENC_SO_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x, char* p);
char* zx_ENC_WO_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_PHYSICALACCESS(struct zx_ctx* c, struct zx_cdm_PHYSICALACCESS_s* x);

struct zx_cdm_PHYSICALACCESS_s {
  ZX_ELEM_EXT
  zx_cdm_PHYSICALACCESS_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_PHYSICALACCESS_GET_group(struct zx_cdm_PHYSICALACCESS_s* x);





void zx_cdm_PHYSICALACCESS_PUT_group(struct zx_cdm_PHYSICALACCESS_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_POBOX -------------------------- */
/* refby( zx_cdm_ADR_s ) */
#ifndef zx_cdm_POBOX_EXT
#define zx_cdm_POBOX_EXT
#endif

struct zx_cdm_POBOX_s* zx_DEC_cdm_POBOX(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_POBOX_s* zx_NEW_cdm_POBOX(struct zx_ctx* c);
void zx_FREE_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_POBOX_s* zx_DEEP_CLONE_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x, int dup_strs);
void zx_DUP_STRS_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x);
int zx_WALK_SO_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x);
int zx_LEN_WO_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x);
char* zx_ENC_SO_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x, char* p);
char* zx_ENC_WO_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_POBOX(struct zx_ctx* c, struct zx_cdm_POBOX_s* x);

struct zx_cdm_POBOX_s {
  ZX_ELEM_EXT
  zx_cdm_POBOX_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_POBOX_GET_group(struct zx_cdm_POBOX_s* x);





void zx_cdm_POBOX_PUT_group(struct zx_cdm_POBOX_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_PREFIX -------------------------- */
/* refby( zx_cdm_N_s ) */
#ifndef zx_cdm_PREFIX_EXT
#define zx_cdm_PREFIX_EXT
#endif

struct zx_cdm_PREFIX_s* zx_DEC_cdm_PREFIX(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_PREFIX_s* zx_NEW_cdm_PREFIX(struct zx_ctx* c);
void zx_FREE_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_PREFIX_s* zx_DEEP_CLONE_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x, int dup_strs);
void zx_DUP_STRS_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x);
int zx_WALK_SO_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x);
int zx_LEN_WO_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x);
char* zx_ENC_SO_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x, char* p);
char* zx_ENC_WO_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_PREFIX(struct zx_ctx* c, struct zx_cdm_PREFIX_s* x);

struct zx_cdm_PREFIX_s {
  ZX_ELEM_EXT
  zx_cdm_PREFIX_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_PREFIX_GET_group(struct zx_cdm_PREFIX_s* x);





void zx_cdm_PREFIX_PUT_group(struct zx_cdm_PREFIX_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_PRODID -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_PRODID_EXT
#define zx_cdm_PRODID_EXT
#endif

struct zx_cdm_PRODID_s* zx_DEC_cdm_PRODID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_PRODID_s* zx_NEW_cdm_PRODID(struct zx_ctx* c);
void zx_FREE_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_PRODID_s* zx_DEEP_CLONE_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x, int dup_strs);
void zx_DUP_STRS_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x);
int zx_WALK_SO_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x);
int zx_LEN_WO_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x);
char* zx_ENC_SO_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x, char* p);
char* zx_ENC_WO_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_PRODID(struct zx_ctx* c, struct zx_cdm_PRODID_s* x);

struct zx_cdm_PRODID_s {
  ZX_ELEM_EXT
  zx_cdm_PRODID_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_PRODID_GET_id(struct zx_cdm_PRODID_s* x);
struct zx_str* zx_cdm_PRODID_GET_modificationTime(struct zx_cdm_PRODID_s* x);
struct zx_str* zx_cdm_PRODID_GET_ACC(struct zx_cdm_PRODID_s* x);
struct zx_str* zx_cdm_PRODID_GET_ACCTime(struct zx_cdm_PRODID_s* x);
struct zx_str* zx_cdm_PRODID_GET_modifier(struct zx_cdm_PRODID_s* x);





void zx_cdm_PRODID_PUT_id(struct zx_cdm_PRODID_s* x, struct zx_str* y);
void zx_cdm_PRODID_PUT_modificationTime(struct zx_cdm_PRODID_s* x, struct zx_str* y);
void zx_cdm_PRODID_PUT_ACC(struct zx_cdm_PRODID_s* x, struct zx_str* y);
void zx_cdm_PRODID_PUT_ACCTime(struct zx_cdm_PRODID_s* x, struct zx_str* y);
void zx_cdm_PRODID_PUT_modifier(struct zx_cdm_PRODID_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_REGION -------------------------- */
/* refby( zx_cdm_ADR_s ) */
#ifndef zx_cdm_REGION_EXT
#define zx_cdm_REGION_EXT
#endif

struct zx_cdm_REGION_s* zx_DEC_cdm_REGION(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_REGION_s* zx_NEW_cdm_REGION(struct zx_ctx* c);
void zx_FREE_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_REGION_s* zx_DEEP_CLONE_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x, int dup_strs);
void zx_DUP_STRS_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x);
int zx_WALK_SO_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x);
int zx_LEN_WO_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x);
char* zx_ENC_SO_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x, char* p);
char* zx_ENC_WO_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_REGION(struct zx_ctx* c, struct zx_cdm_REGION_s* x);

struct zx_cdm_REGION_s {
  ZX_ELEM_EXT
  zx_cdm_REGION_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_REGION_GET_group(struct zx_cdm_REGION_s* x);





void zx_cdm_REGION_PUT_group(struct zx_cdm_REGION_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_REV -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_REV_EXT
#define zx_cdm_REV_EXT
#endif

struct zx_cdm_REV_s* zx_DEC_cdm_REV(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_REV_s* zx_NEW_cdm_REV(struct zx_ctx* c);
void zx_FREE_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_REV_s* zx_DEEP_CLONE_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x, int dup_strs);
void zx_DUP_STRS_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x);
int zx_WALK_SO_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x);
int zx_LEN_WO_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x);
char* zx_ENC_SO_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x, char* p);
char* zx_ENC_WO_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_REV(struct zx_ctx* c, struct zx_cdm_REV_s* x);

struct zx_cdm_REV_s {
  ZX_ELEM_EXT
  zx_cdm_REV_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_REV_GET_id(struct zx_cdm_REV_s* x);
struct zx_str* zx_cdm_REV_GET_modificationTime(struct zx_cdm_REV_s* x);
struct zx_str* zx_cdm_REV_GET_ACC(struct zx_cdm_REV_s* x);
struct zx_str* zx_cdm_REV_GET_ACCTime(struct zx_cdm_REV_s* x);
struct zx_str* zx_cdm_REV_GET_modifier(struct zx_cdm_REV_s* x);





void zx_cdm_REV_PUT_id(struct zx_cdm_REV_s* x, struct zx_str* y);
void zx_cdm_REV_PUT_modificationTime(struct zx_cdm_REV_s* x, struct zx_str* y);
void zx_cdm_REV_PUT_ACC(struct zx_cdm_REV_s* x, struct zx_str* y);
void zx_cdm_REV_PUT_ACCTime(struct zx_cdm_REV_s* x, struct zx_str* y);
void zx_cdm_REV_PUT_modifier(struct zx_cdm_REV_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_ROLE -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_ROLE_EXT
#define zx_cdm_ROLE_EXT
#endif

struct zx_cdm_ROLE_s* zx_DEC_cdm_ROLE(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_ROLE_s* zx_NEW_cdm_ROLE(struct zx_ctx* c);
void zx_FREE_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_ROLE_s* zx_DEEP_CLONE_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x, int dup_strs);
void zx_DUP_STRS_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x);
int zx_WALK_SO_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x);
int zx_LEN_WO_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x);
char* zx_ENC_SO_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x, char* p);
char* zx_ENC_WO_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_ROLE(struct zx_ctx* c, struct zx_cdm_ROLE_s* x);

struct zx_cdm_ROLE_s {
  ZX_ELEM_EXT
  zx_cdm_ROLE_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_ROLE_GET_group(struct zx_cdm_ROLE_s* x);





void zx_cdm_ROLE_PUT_group(struct zx_cdm_ROLE_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_SORT_STRING -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_SORT_STRING_EXT
#define zx_cdm_SORT_STRING_EXT
#endif

struct zx_cdm_SORT_STRING_s* zx_DEC_cdm_SORT_STRING(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_SORT_STRING_s* zx_NEW_cdm_SORT_STRING(struct zx_ctx* c);
void zx_FREE_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_SORT_STRING_s* zx_DEEP_CLONE_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x, int dup_strs);
void zx_DUP_STRS_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x);
int zx_WALK_SO_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x);
int zx_LEN_WO_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x);
char* zx_ENC_SO_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x, char* p);
char* zx_ENC_WO_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_SORT_STRING(struct zx_ctx* c, struct zx_cdm_SORT_STRING_s* x);

struct zx_cdm_SORT_STRING_s {
  ZX_ELEM_EXT
  zx_cdm_SORT_STRING_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_SORT_STRING_GET_group(struct zx_cdm_SORT_STRING_s* x);





void zx_cdm_SORT_STRING_PUT_group(struct zx_cdm_SORT_STRING_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_SOUND -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_SOUND_EXT
#define zx_cdm_SOUND_EXT
#endif

struct zx_cdm_SOUND_s* zx_DEC_cdm_SOUND(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_SOUND_s* zx_NEW_cdm_SOUND(struct zx_ctx* c);
void zx_FREE_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_SOUND_s* zx_DEEP_CLONE_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x, int dup_strs);
void zx_DUP_STRS_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x);
int zx_WALK_SO_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x);
int zx_LEN_WO_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x);
char* zx_ENC_SO_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x, char* p);
char* zx_ENC_WO_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_SOUND(struct zx_ctx* c, struct zx_cdm_SOUND_s* x);

struct zx_cdm_SOUND_s {
  ZX_ELEM_EXT
  zx_cdm_SOUND_EXT
  struct zx_cdm_PHONETIC_s* PHONETIC;	/* {0,1} nada */
  struct zx_cdm_BINVAL_s* BINVAL;	/* {0,1} nada */
  struct zx_cdm_EXTVAL_s* EXTVAL;	/* {0,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_SOUND_GET_id(struct zx_cdm_SOUND_s* x);
struct zx_str* zx_cdm_SOUND_GET_modificationTime(struct zx_cdm_SOUND_s* x);

struct zx_cdm_PHONETIC_s* zx_cdm_SOUND_GET_PHONETIC(struct zx_cdm_SOUND_s* x, int n);
struct zx_cdm_BINVAL_s* zx_cdm_SOUND_GET_BINVAL(struct zx_cdm_SOUND_s* x, int n);
struct zx_cdm_EXTVAL_s* zx_cdm_SOUND_GET_EXTVAL(struct zx_cdm_SOUND_s* x, int n);

int zx_cdm_SOUND_NUM_PHONETIC(struct zx_cdm_SOUND_s* x);
int zx_cdm_SOUND_NUM_BINVAL(struct zx_cdm_SOUND_s* x);
int zx_cdm_SOUND_NUM_EXTVAL(struct zx_cdm_SOUND_s* x);

struct zx_cdm_PHONETIC_s* zx_cdm_SOUND_POP_PHONETIC(struct zx_cdm_SOUND_s* x);
struct zx_cdm_BINVAL_s* zx_cdm_SOUND_POP_BINVAL(struct zx_cdm_SOUND_s* x);
struct zx_cdm_EXTVAL_s* zx_cdm_SOUND_POP_EXTVAL(struct zx_cdm_SOUND_s* x);

void zx_cdm_SOUND_PUSH_PHONETIC(struct zx_cdm_SOUND_s* x, struct zx_cdm_PHONETIC_s* y);
void zx_cdm_SOUND_PUSH_BINVAL(struct zx_cdm_SOUND_s* x, struct zx_cdm_BINVAL_s* y);
void zx_cdm_SOUND_PUSH_EXTVAL(struct zx_cdm_SOUND_s* x, struct zx_cdm_EXTVAL_s* y);

void zx_cdm_SOUND_PUT_id(struct zx_cdm_SOUND_s* x, struct zx_str* y);
void zx_cdm_SOUND_PUT_modificationTime(struct zx_cdm_SOUND_s* x, struct zx_str* y);

void zx_cdm_SOUND_PUT_PHONETIC(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_PHONETIC_s* y);
void zx_cdm_SOUND_PUT_BINVAL(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_BINVAL_s* y);
void zx_cdm_SOUND_PUT_EXTVAL(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_EXTVAL_s* y);

void zx_cdm_SOUND_ADD_PHONETIC(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_PHONETIC_s* z);
void zx_cdm_SOUND_ADD_BINVAL(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_BINVAL_s* z);
void zx_cdm_SOUND_ADD_EXTVAL(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_EXTVAL_s* z);

void zx_cdm_SOUND_DEL_PHONETIC(struct zx_cdm_SOUND_s* x, int n);
void zx_cdm_SOUND_DEL_BINVAL(struct zx_cdm_SOUND_s* x, int n);
void zx_cdm_SOUND_DEL_EXTVAL(struct zx_cdm_SOUND_s* x, int n);

void zx_cdm_SOUND_REV_PHONETIC(struct zx_cdm_SOUND_s* x);
void zx_cdm_SOUND_REV_BINVAL(struct zx_cdm_SOUND_s* x);
void zx_cdm_SOUND_REV_EXTVAL(struct zx_cdm_SOUND_s* x);

#endif
/* -------------------------- cdm_STREET -------------------------- */
/* refby( zx_cdm_ADR_s ) */
#ifndef zx_cdm_STREET_EXT
#define zx_cdm_STREET_EXT
#endif

struct zx_cdm_STREET_s* zx_DEC_cdm_STREET(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_STREET_s* zx_NEW_cdm_STREET(struct zx_ctx* c);
void zx_FREE_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_STREET_s* zx_DEEP_CLONE_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x, int dup_strs);
void zx_DUP_STRS_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x);
int zx_WALK_SO_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x);
int zx_LEN_WO_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x);
char* zx_ENC_SO_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x, char* p);
char* zx_ENC_WO_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_STREET(struct zx_ctx* c, struct zx_cdm_STREET_s* x);

struct zx_cdm_STREET_s {
  ZX_ELEM_EXT
  zx_cdm_STREET_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_STREET_GET_group(struct zx_cdm_STREET_s* x);





void zx_cdm_STREET_PUT_group(struct zx_cdm_STREET_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_SUFFIX -------------------------- */
/* refby( zx_cdm_N_s ) */
#ifndef zx_cdm_SUFFIX_EXT
#define zx_cdm_SUFFIX_EXT
#endif

struct zx_cdm_SUFFIX_s* zx_DEC_cdm_SUFFIX(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_SUFFIX_s* zx_NEW_cdm_SUFFIX(struct zx_ctx* c);
void zx_FREE_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_SUFFIX_s* zx_DEEP_CLONE_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x, int dup_strs);
void zx_DUP_STRS_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x);
int zx_WALK_SO_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x);
int zx_LEN_WO_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x);
char* zx_ENC_SO_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x, char* p);
char* zx_ENC_WO_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_SUFFIX(struct zx_ctx* c, struct zx_cdm_SUFFIX_s* x);

struct zx_cdm_SUFFIX_s {
  ZX_ELEM_EXT
  zx_cdm_SUFFIX_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_SUFFIX_GET_group(struct zx_cdm_SUFFIX_s* x);





void zx_cdm_SUFFIX_PUT_group(struct zx_cdm_SUFFIX_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_TEL -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_TEL_EXT
#define zx_cdm_TEL_EXT
#endif

struct zx_cdm_TEL_s* zx_DEC_cdm_TEL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_TEL_s* zx_NEW_cdm_TEL(struct zx_ctx* c);
void zx_FREE_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_TEL_s* zx_DEEP_CLONE_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x, int dup_strs);
void zx_DUP_STRS_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x);
int zx_WALK_SO_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x);
int zx_LEN_WO_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x);
char* zx_ENC_SO_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x, char* p);
char* zx_ENC_WO_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_TEL(struct zx_ctx* c, struct zx_cdm_TEL_s* x);

struct zx_cdm_TEL_s {
  ZX_ELEM_EXT
  zx_cdm_TEL_EXT
  struct zx_elem_s* HOME;	/* {0,1} xs:string */
  struct zx_elem_s* WORK;	/* {0,1} xs:string */
  struct zx_elem_s* VOICE;	/* {0,1} xs:string */
  struct zx_elem_s* FAX;	/* {0,1} xs:string */
  struct zx_elem_s* PAGER;	/* {0,1} xs:string */
  struct zx_elem_s* MSG;	/* {0,1} xs:string */
  struct zx_elem_s* CELL;	/* {0,1} xs:string */
  struct zx_elem_s* VIDEO;	/* {0,1} xs:string */
  struct zx_elem_s* BBS;	/* {0,1} xs:string */
  struct zx_elem_s* MODEM;	/* {0,1} xs:string */
  struct zx_elem_s* ISDN;	/* {0,1} xs:string */
  struct zx_elem_s* PCS;	/* {0,1} xs:string */
  struct zx_elem_s* PREF;	/* {0,1} xs:string */
  struct zx_cdm_NUMBER_s* NUMBER;	/* {1,1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_TEL_GET_id(struct zx_cdm_TEL_s* x);
struct zx_str* zx_cdm_TEL_GET_modificationTime(struct zx_cdm_TEL_s* x);

struct zx_elem_s* zx_cdm_TEL_GET_HOME(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_WORK(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_VOICE(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_FAX(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_PAGER(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_MSG(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_CELL(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_VIDEO(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_BBS(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_MODEM(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_ISDN(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_PCS(struct zx_cdm_TEL_s* x, int n);
struct zx_elem_s* zx_cdm_TEL_GET_PREF(struct zx_cdm_TEL_s* x, int n);
struct zx_cdm_NUMBER_s* zx_cdm_TEL_GET_NUMBER(struct zx_cdm_TEL_s* x, int n);

int zx_cdm_TEL_NUM_HOME(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_WORK(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_VOICE(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_FAX(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_PAGER(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_MSG(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_CELL(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_VIDEO(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_BBS(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_MODEM(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_ISDN(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_PCS(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_PREF(struct zx_cdm_TEL_s* x);
int zx_cdm_TEL_NUM_NUMBER(struct zx_cdm_TEL_s* x);

struct zx_elem_s* zx_cdm_TEL_POP_HOME(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_WORK(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_VOICE(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_FAX(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_PAGER(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_MSG(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_CELL(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_VIDEO(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_BBS(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_MODEM(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_ISDN(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_PCS(struct zx_cdm_TEL_s* x);
struct zx_elem_s* zx_cdm_TEL_POP_PREF(struct zx_cdm_TEL_s* x);
struct zx_cdm_NUMBER_s* zx_cdm_TEL_POP_NUMBER(struct zx_cdm_TEL_s* x);

void zx_cdm_TEL_PUSH_HOME(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_WORK(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_VOICE(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_FAX(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_PAGER(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_MSG(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_CELL(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_VIDEO(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_BBS(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_MODEM(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_ISDN(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_PCS(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_PREF(struct zx_cdm_TEL_s* x, struct zx_elem_s* y);
void zx_cdm_TEL_PUSH_NUMBER(struct zx_cdm_TEL_s* x, struct zx_cdm_NUMBER_s* y);

void zx_cdm_TEL_PUT_id(struct zx_cdm_TEL_s* x, struct zx_str* y);
void zx_cdm_TEL_PUT_modificationTime(struct zx_cdm_TEL_s* x, struct zx_str* y);

void zx_cdm_TEL_PUT_HOME(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_WORK(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_VOICE(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_FAX(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_PAGER(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_MSG(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_CELL(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_VIDEO(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_BBS(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_MODEM(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_ISDN(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_PCS(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_PREF(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* y);
void zx_cdm_TEL_PUT_NUMBER(struct zx_cdm_TEL_s* x, int n, struct zx_cdm_NUMBER_s* y);

void zx_cdm_TEL_ADD_HOME(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_WORK(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_VOICE(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_FAX(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_PAGER(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_MSG(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_CELL(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_VIDEO(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_BBS(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_MODEM(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_ISDN(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_PCS(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_PREF(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z);
void zx_cdm_TEL_ADD_NUMBER(struct zx_cdm_TEL_s* x, int n, struct zx_cdm_NUMBER_s* z);

void zx_cdm_TEL_DEL_HOME(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_WORK(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_VOICE(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_FAX(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_PAGER(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_MSG(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_CELL(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_VIDEO(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_BBS(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_MODEM(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_ISDN(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_PCS(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_PREF(struct zx_cdm_TEL_s* x, int n);
void zx_cdm_TEL_DEL_NUMBER(struct zx_cdm_TEL_s* x, int n);

void zx_cdm_TEL_REV_HOME(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_WORK(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_VOICE(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_FAX(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_PAGER(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_MSG(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_CELL(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_VIDEO(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_BBS(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_MODEM(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_ISDN(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_PCS(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_PREF(struct zx_cdm_TEL_s* x);
void zx_cdm_TEL_REV_NUMBER(struct zx_cdm_TEL_s* x);

#endif
/* -------------------------- cdm_TITLE -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_TITLE_EXT
#define zx_cdm_TITLE_EXT
#endif

struct zx_cdm_TITLE_s* zx_DEC_cdm_TITLE(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_TITLE_s* zx_NEW_cdm_TITLE(struct zx_ctx* c);
void zx_FREE_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_TITLE_s* zx_DEEP_CLONE_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x, int dup_strs);
void zx_DUP_STRS_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x);
int zx_WALK_SO_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x);
int zx_LEN_WO_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x);
char* zx_ENC_SO_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x, char* p);
char* zx_ENC_WO_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_TITLE(struct zx_ctx* c, struct zx_cdm_TITLE_s* x);

struct zx_cdm_TITLE_s {
  ZX_ELEM_EXT
  zx_cdm_TITLE_EXT
  struct zx_str* group;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_TITLE_GET_group(struct zx_cdm_TITLE_s* x);





void zx_cdm_TITLE_PUT_group(struct zx_cdm_TITLE_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_TYPE -------------------------- */
/* refby( zx_cdm_LOGO_s zx_cdm_KEY_s zx_cdm_PHOTO_s ) */
#ifndef zx_cdm_TYPE_EXT
#define zx_cdm_TYPE_EXT
#endif

struct zx_cdm_TYPE_s* zx_DEC_cdm_TYPE(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_TYPE_s* zx_NEW_cdm_TYPE(struct zx_ctx* c);
void zx_FREE_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_TYPE_s* zx_DEEP_CLONE_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x, int dup_strs);
void zx_DUP_STRS_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x);
int zx_WALK_SO_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x);
int zx_LEN_WO_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x);
char* zx_ENC_SO_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x, char* p);
char* zx_ENC_WO_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_TYPE(struct zx_ctx* c, struct zx_cdm_TYPE_s* x);

struct zx_cdm_TYPE_s {
  ZX_ELEM_EXT
  zx_cdm_TYPE_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_TYPE_GET_id(struct zx_cdm_TYPE_s* x);
struct zx_str* zx_cdm_TYPE_GET_modificationTime(struct zx_cdm_TYPE_s* x);
struct zx_str* zx_cdm_TYPE_GET_ACC(struct zx_cdm_TYPE_s* x);
struct zx_str* zx_cdm_TYPE_GET_ACCTime(struct zx_cdm_TYPE_s* x);
struct zx_str* zx_cdm_TYPE_GET_modifier(struct zx_cdm_TYPE_s* x);





void zx_cdm_TYPE_PUT_id(struct zx_cdm_TYPE_s* x, struct zx_str* y);
void zx_cdm_TYPE_PUT_modificationTime(struct zx_cdm_TYPE_s* x, struct zx_str* y);
void zx_cdm_TYPE_PUT_ACC(struct zx_cdm_TYPE_s* x, struct zx_str* y);
void zx_cdm_TYPE_PUT_ACCTime(struct zx_cdm_TYPE_s* x, struct zx_str* y);
void zx_cdm_TYPE_PUT_modifier(struct zx_cdm_TYPE_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_TZ -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_TZ_EXT
#define zx_cdm_TZ_EXT
#endif

struct zx_cdm_TZ_s* zx_DEC_cdm_TZ(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_TZ_s* zx_NEW_cdm_TZ(struct zx_ctx* c);
void zx_FREE_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_TZ_s* zx_DEEP_CLONE_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x, int dup_strs);
void zx_DUP_STRS_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x);
int zx_WALK_SO_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x);
int zx_LEN_WO_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x);
char* zx_ENC_SO_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x, char* p);
char* zx_ENC_WO_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_TZ(struct zx_ctx* c, struct zx_cdm_TZ_s* x);

struct zx_cdm_TZ_s {
  ZX_ELEM_EXT
  zx_cdm_TZ_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_TZ_GET_id(struct zx_cdm_TZ_s* x);
struct zx_str* zx_cdm_TZ_GET_modificationTime(struct zx_cdm_TZ_s* x);
struct zx_str* zx_cdm_TZ_GET_ACC(struct zx_cdm_TZ_s* x);
struct zx_str* zx_cdm_TZ_GET_ACCTime(struct zx_cdm_TZ_s* x);
struct zx_str* zx_cdm_TZ_GET_modifier(struct zx_cdm_TZ_s* x);





void zx_cdm_TZ_PUT_id(struct zx_cdm_TZ_s* x, struct zx_str* y);
void zx_cdm_TZ_PUT_modificationTime(struct zx_cdm_TZ_s* x, struct zx_str* y);
void zx_cdm_TZ_PUT_ACC(struct zx_cdm_TZ_s* x, struct zx_str* y);
void zx_cdm_TZ_PUT_ACCTime(struct zx_cdm_TZ_s* x, struct zx_str* y);
void zx_cdm_TZ_PUT_modifier(struct zx_cdm_TZ_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_UID -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_UID_EXT
#define zx_cdm_UID_EXT
#endif

struct zx_cdm_UID_s* zx_DEC_cdm_UID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_UID_s* zx_NEW_cdm_UID(struct zx_ctx* c);
void zx_FREE_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_UID_s* zx_DEEP_CLONE_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x, int dup_strs);
void zx_DUP_STRS_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x);
int zx_WALK_SO_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x);
int zx_LEN_WO_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x);
char* zx_ENC_SO_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x, char* p);
char* zx_ENC_WO_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_UID(struct zx_ctx* c, struct zx_cdm_UID_s* x);

struct zx_cdm_UID_s {
  ZX_ELEM_EXT
  zx_cdm_UID_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_UID_GET_id(struct zx_cdm_UID_s* x);
struct zx_str* zx_cdm_UID_GET_modificationTime(struct zx_cdm_UID_s* x);
struct zx_str* zx_cdm_UID_GET_ACC(struct zx_cdm_UID_s* x);
struct zx_str* zx_cdm_UID_GET_ACCTime(struct zx_cdm_UID_s* x);
struct zx_str* zx_cdm_UID_GET_modifier(struct zx_cdm_UID_s* x);





void zx_cdm_UID_PUT_id(struct zx_cdm_UID_s* x, struct zx_str* y);
void zx_cdm_UID_PUT_modificationTime(struct zx_cdm_UID_s* x, struct zx_str* y);
void zx_cdm_UID_PUT_ACC(struct zx_cdm_UID_s* x, struct zx_str* y);
void zx_cdm_UID_PUT_ACCTime(struct zx_cdm_UID_s* x, struct zx_str* y);
void zx_cdm_UID_PUT_modifier(struct zx_cdm_UID_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_URI -------------------------- */
/* refby( zx_cdm_FBURL_s zx_cdm_CAPURI_s zx_cdm_CALADRURI_s zx_cdm_CALURI_s ) */
#ifndef zx_cdm_URI_EXT
#define zx_cdm_URI_EXT
#endif

struct zx_cdm_URI_s* zx_DEC_cdm_URI(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_URI_s* zx_NEW_cdm_URI(struct zx_ctx* c);
void zx_FREE_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_URI_s* zx_DEEP_CLONE_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x, int dup_strs);
void zx_DUP_STRS_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x);
int zx_WALK_SO_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x);
int zx_LEN_WO_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x);
char* zx_ENC_SO_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x, char* p);
char* zx_ENC_WO_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_URI(struct zx_ctx* c, struct zx_cdm_URI_s* x);

struct zx_cdm_URI_s {
  ZX_ELEM_EXT
  zx_cdm_URI_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_URI_GET_id(struct zx_cdm_URI_s* x);
struct zx_str* zx_cdm_URI_GET_modificationTime(struct zx_cdm_URI_s* x);
struct zx_str* zx_cdm_URI_GET_ACC(struct zx_cdm_URI_s* x);
struct zx_str* zx_cdm_URI_GET_ACCTime(struct zx_cdm_URI_s* x);
struct zx_str* zx_cdm_URI_GET_modifier(struct zx_cdm_URI_s* x);





void zx_cdm_URI_PUT_id(struct zx_cdm_URI_s* x, struct zx_str* y);
void zx_cdm_URI_PUT_modificationTime(struct zx_cdm_URI_s* x, struct zx_str* y);
void zx_cdm_URI_PUT_ACC(struct zx_cdm_URI_s* x, struct zx_str* y);
void zx_cdm_URI_PUT_ACCTime(struct zx_cdm_URI_s* x, struct zx_str* y);
void zx_cdm_URI_PUT_modifier(struct zx_cdm_URI_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_URL -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_URL_EXT
#define zx_cdm_URL_EXT
#endif

struct zx_cdm_URL_s* zx_DEC_cdm_URL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_URL_s* zx_NEW_cdm_URL(struct zx_ctx* c);
void zx_FREE_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_URL_s* zx_DEEP_CLONE_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x, int dup_strs);
void zx_DUP_STRS_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x);
int zx_WALK_SO_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x);
int zx_LEN_WO_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x);
char* zx_ENC_SO_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x, char* p);
char* zx_ENC_WO_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_URL(struct zx_ctx* c, struct zx_cdm_URL_s* x);

struct zx_cdm_URL_s {
  ZX_ELEM_EXT
  zx_cdm_URL_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_URL_GET_id(struct zx_cdm_URL_s* x);
struct zx_str* zx_cdm_URL_GET_modificationTime(struct zx_cdm_URL_s* x);
struct zx_str* zx_cdm_URL_GET_ACC(struct zx_cdm_URL_s* x);
struct zx_str* zx_cdm_URL_GET_ACCTime(struct zx_cdm_URL_s* x);
struct zx_str* zx_cdm_URL_GET_modifier(struct zx_cdm_URL_s* x);





void zx_cdm_URL_PUT_id(struct zx_cdm_URL_s* x, struct zx_str* y);
void zx_cdm_URL_PUT_modificationTime(struct zx_cdm_URL_s* x, struct zx_str* y);
void zx_cdm_URL_PUT_ACC(struct zx_cdm_URL_s* x, struct zx_str* y);
void zx_cdm_URL_PUT_ACCTime(struct zx_cdm_URL_s* x, struct zx_str* y);
void zx_cdm_URL_PUT_modifier(struct zx_cdm_URL_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_USERID -------------------------- */
/* refby( zx_cdm_EMAIL_s ) */
#ifndef zx_cdm_USERID_EXT
#define zx_cdm_USERID_EXT
#endif

struct zx_cdm_USERID_s* zx_DEC_cdm_USERID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_USERID_s* zx_NEW_cdm_USERID(struct zx_ctx* c);
void zx_FREE_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_USERID_s* zx_DEEP_CLONE_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x, int dup_strs);
void zx_DUP_STRS_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x);
int zx_WALK_SO_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x);
int zx_LEN_WO_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x);
char* zx_ENC_SO_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x, char* p);
char* zx_ENC_WO_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_USERID(struct zx_ctx* c, struct zx_cdm_USERID_s* x);

struct zx_cdm_USERID_s {
  ZX_ELEM_EXT
  zx_cdm_USERID_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_USERID_GET_id(struct zx_cdm_USERID_s* x);
struct zx_str* zx_cdm_USERID_GET_modificationTime(struct zx_cdm_USERID_s* x);
struct zx_str* zx_cdm_USERID_GET_ACC(struct zx_cdm_USERID_s* x);
struct zx_str* zx_cdm_USERID_GET_ACCTime(struct zx_cdm_USERID_s* x);
struct zx_str* zx_cdm_USERID_GET_modifier(struct zx_cdm_USERID_s* x);





void zx_cdm_USERID_PUT_id(struct zx_cdm_USERID_s* x, struct zx_str* y);
void zx_cdm_USERID_PUT_modificationTime(struct zx_cdm_USERID_s* x, struct zx_str* y);
void zx_cdm_USERID_PUT_ACC(struct zx_cdm_USERID_s* x, struct zx_str* y);
void zx_cdm_USERID_PUT_ACCTime(struct zx_cdm_USERID_s* x, struct zx_str* y);
void zx_cdm_USERID_PUT_modifier(struct zx_cdm_USERID_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_VERSION -------------------------- */
/* refby( zx_cdm_vCard_s ) */
#ifndef zx_cdm_VERSION_EXT
#define zx_cdm_VERSION_EXT
#endif

struct zx_cdm_VERSION_s* zx_DEC_cdm_VERSION(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_VERSION_s* zx_NEW_cdm_VERSION(struct zx_ctx* c);
void zx_FREE_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_VERSION_s* zx_DEEP_CLONE_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x, int dup_strs);
void zx_DUP_STRS_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x);
int zx_WALK_SO_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x);
int zx_LEN_WO_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x);
char* zx_ENC_SO_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x, char* p);
char* zx_ENC_WO_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_VERSION(struct zx_ctx* c, struct zx_cdm_VERSION_s* x);

struct zx_cdm_VERSION_s {
  ZX_ELEM_EXT
  zx_cdm_VERSION_EXT
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ACCTime;	/* {0,1} attribute xs:dateTime */
  struct zx_str* modifier;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_VERSION_GET_id(struct zx_cdm_VERSION_s* x);
struct zx_str* zx_cdm_VERSION_GET_modificationTime(struct zx_cdm_VERSION_s* x);
struct zx_str* zx_cdm_VERSION_GET_ACC(struct zx_cdm_VERSION_s* x);
struct zx_str* zx_cdm_VERSION_GET_ACCTime(struct zx_cdm_VERSION_s* x);
struct zx_str* zx_cdm_VERSION_GET_modifier(struct zx_cdm_VERSION_s* x);





void zx_cdm_VERSION_PUT_id(struct zx_cdm_VERSION_s* x, struct zx_str* y);
void zx_cdm_VERSION_PUT_modificationTime(struct zx_cdm_VERSION_s* x, struct zx_str* y);
void zx_cdm_VERSION_PUT_ACC(struct zx_cdm_VERSION_s* x, struct zx_str* y);
void zx_cdm_VERSION_PUT_ACCTime(struct zx_cdm_VERSION_s* x, struct zx_str* y);
void zx_cdm_VERSION_PUT_modifier(struct zx_cdm_VERSION_s* x, struct zx_str* y);





#endif
/* -------------------------- cdm_vCard -------------------------- */
/* refby( zx_cdm_AGENT_s ) */
#ifndef zx_cdm_vCard_EXT
#define zx_cdm_vCard_EXT
#endif

struct zx_cdm_vCard_s* zx_DEC_cdm_vCard(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_cdm_vCard_s* zx_NEW_cdm_vCard(struct zx_ctx* c);
void zx_FREE_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_cdm_vCard_s* zx_DEEP_CLONE_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x, int dup_strs);
void zx_DUP_STRS_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x);
int zx_WALK_SO_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x);
int zx_LEN_WO_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x);
char* zx_ENC_SO_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x, char* p);
char* zx_ENC_WO_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x);
struct zx_str* zx_EASY_ENC_WO_cdm_vCard(struct zx_ctx* c, struct zx_cdm_vCard_s* x);

struct zx_cdm_vCard_s {
  ZX_ELEM_EXT
  zx_cdm_vCard_EXT
  struct zx_cdm_VERSION_s* VERSION_is_Perl_MakeMaker_gobbled;	/* {1,1} nada */
  struct zx_elem_s* CARDID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* DISTRIBUTIONLIST;	/* {0,1} xs:string */
  struct zx_elem_s* SELF;	/* {0,1} xs:string */
  struct zx_elem_s* FAVORITE;	/* {0,1} xs:string */
  struct zx_cdm_FN_s* FN;	/* {1,-1} nada */
  struct zx_cdm_N_s* N;	/* {1,-1} nada */
  struct zx_cdm_LISTMEMBER_s* LISTMEMBER;	/* {0,-1} nada */
  struct zx_cdm_NICKNAME_s* NICKNAME;	/* {0,-1} nada */
  struct zx_cdm_PHOTO_s* PHOTO;	/* {0,-1} nada */
  struct zx_cdm_BDAY_s* BDAY;	/* {0,-1} nada */
  struct zx_cdm_ADR_s* ADR;	/* {0,-1} nada */
  struct zx_cdm_LABEL_s* LABEL;	/* {0,-1} nada */
  struct zx_cdm_TEL_s* TEL;	/* {0,-1} nada */
  struct zx_cdm_EMAIL_s* EMAIL;	/* {0,-1} nada */
  struct zx_cdm_JABBERID_s* JABBERID;	/* {0,-1} nada */
  struct zx_cdm_MAILER_s* MAILER;	/* {0,-1} nada */
  struct zx_cdm_TZ_s* TZ;	/* {0,-1} nada */
  struct zx_cdm_GEO_s* GEO;	/* {0,-1} nada */
  struct zx_cdm_TITLE_s* TITLE;	/* {0,-1} nada */
  struct zx_cdm_ROLE_s* ROLE;	/* {0,-1} nada */
  struct zx_cdm_LOGO_s* LOGO;	/* {0,-1} nada */
  struct zx_cdm_AGENT_s* AGENT;	/* {0,-1} nada */
  struct zx_cdm_ORG_s* ORG;	/* {0,-1} nada */
  struct zx_cdm_CATEGORIES_s* CATEGORIES;	/* {0,-1} nada */
  struct zx_cdm_NOTE_s* NOTE;	/* {0,-1} nada */
  struct zx_cdm_PRODID_s* PRODID;	/* {0,-1} nada */
  struct zx_cdm_REV_s* REV;	/* {0,-1} nada */
  struct zx_cdm_SORT_STRING_s* SORT_STRING;	/* {0,-1} nada */
  struct zx_cdm_SOUND_s* SOUND;	/* {0,-1} nada */
  struct zx_cdm_UID_s* UID;	/* {0,-1} nada */
  struct zx_cdm_URL_s* URL;	/* {0,-1} nada */
  struct zx_cdm_CLASS_s* CLASS;	/* {0,-1} nada */
  struct zx_cdm_KEY_s* KEY;	/* {0,-1} nada */
  struct zx_cdm_DESC_s* DESC;	/* {0,-1} nada */
  struct zx_cdm_PHYSICALACCESS_s* PHYSICALACCESS;	/* {0,-1} nada */
  struct zx_cdm_CALURI_s* CALURI;	/* {0,-1} nada */
  struct zx_cdm_CAPURI_s* CAPURI;	/* {0,-1} nada */
  struct zx_cdm_CALADRURI_s* CALADRURI;	/* {0,-1} nada */
  struct zx_cdm_FBURL_s* FBURL;	/* {0,-1} nada */
  struct zx_cb_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:string */
  struct zx_str* modificationTime;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_cdm_vCard_GET_id(struct zx_cdm_vCard_s* x);
struct zx_str* zx_cdm_vCard_GET_modificationTime(struct zx_cdm_vCard_s* x);

struct zx_cdm_VERSION_s* zx_cdm_vCard_GET_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, int n);
struct zx_elem_s* zx_cdm_vCard_GET_CARDID(struct zx_cdm_vCard_s* x, int n);
struct zx_elem_s* zx_cdm_vCard_GET_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, int n);
struct zx_elem_s* zx_cdm_vCard_GET_SELF(struct zx_cdm_vCard_s* x, int n);
struct zx_elem_s* zx_cdm_vCard_GET_FAVORITE(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_FN_s* zx_cdm_vCard_GET_FN(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_N_s* zx_cdm_vCard_GET_N(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_LISTMEMBER_s* zx_cdm_vCard_GET_LISTMEMBER(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_NICKNAME_s* zx_cdm_vCard_GET_NICKNAME(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_PHOTO_s* zx_cdm_vCard_GET_PHOTO(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_BDAY_s* zx_cdm_vCard_GET_BDAY(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_ADR_s* zx_cdm_vCard_GET_ADR(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_LABEL_s* zx_cdm_vCard_GET_LABEL(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_TEL_s* zx_cdm_vCard_GET_TEL(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_EMAIL_s* zx_cdm_vCard_GET_EMAIL(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_JABBERID_s* zx_cdm_vCard_GET_JABBERID(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_MAILER_s* zx_cdm_vCard_GET_MAILER(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_TZ_s* zx_cdm_vCard_GET_TZ(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_GEO_s* zx_cdm_vCard_GET_GEO(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_TITLE_s* zx_cdm_vCard_GET_TITLE(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_ROLE_s* zx_cdm_vCard_GET_ROLE(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_LOGO_s* zx_cdm_vCard_GET_LOGO(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_AGENT_s* zx_cdm_vCard_GET_AGENT(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_ORG_s* zx_cdm_vCard_GET_ORG(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_CATEGORIES_s* zx_cdm_vCard_GET_CATEGORIES(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_NOTE_s* zx_cdm_vCard_GET_NOTE(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_PRODID_s* zx_cdm_vCard_GET_PRODID(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_REV_s* zx_cdm_vCard_GET_REV(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_SORT_STRING_s* zx_cdm_vCard_GET_SORT_STRING(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_SOUND_s* zx_cdm_vCard_GET_SOUND(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_UID_s* zx_cdm_vCard_GET_UID(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_URL_s* zx_cdm_vCard_GET_URL(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_CLASS_s* zx_cdm_vCard_GET_CLASS(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_KEY_s* zx_cdm_vCard_GET_KEY(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_DESC_s* zx_cdm_vCard_GET_DESC(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_PHYSICALACCESS_s* zx_cdm_vCard_GET_PHYSICALACCESS(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_CALURI_s* zx_cdm_vCard_GET_CALURI(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_CAPURI_s* zx_cdm_vCard_GET_CAPURI(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_CALADRURI_s* zx_cdm_vCard_GET_CALADRURI(struct zx_cdm_vCard_s* x, int n);
struct zx_cdm_FBURL_s* zx_cdm_vCard_GET_FBURL(struct zx_cdm_vCard_s* x, int n);
struct zx_cb_Extension_s* zx_cdm_vCard_GET_Extension(struct zx_cdm_vCard_s* x, int n);

int zx_cdm_vCard_NUM_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_CARDID(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_SELF(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_FAVORITE(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_FN(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_N(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_LISTMEMBER(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_NICKNAME(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_PHOTO(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_BDAY(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_ADR(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_LABEL(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_TEL(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_EMAIL(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_JABBERID(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_MAILER(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_TZ(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_GEO(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_TITLE(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_ROLE(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_LOGO(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_AGENT(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_ORG(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_CATEGORIES(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_NOTE(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_PRODID(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_REV(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_SORT_STRING(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_SOUND(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_UID(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_URL(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_CLASS(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_KEY(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_DESC(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_PHYSICALACCESS(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_CALURI(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_CAPURI(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_CALADRURI(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_FBURL(struct zx_cdm_vCard_s* x);
int zx_cdm_vCard_NUM_Extension(struct zx_cdm_vCard_s* x);

struct zx_cdm_VERSION_s* zx_cdm_vCard_POP_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x);
struct zx_elem_s* zx_cdm_vCard_POP_CARDID(struct zx_cdm_vCard_s* x);
struct zx_elem_s* zx_cdm_vCard_POP_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x);
struct zx_elem_s* zx_cdm_vCard_POP_SELF(struct zx_cdm_vCard_s* x);
struct zx_elem_s* zx_cdm_vCard_POP_FAVORITE(struct zx_cdm_vCard_s* x);
struct zx_cdm_FN_s* zx_cdm_vCard_POP_FN(struct zx_cdm_vCard_s* x);
struct zx_cdm_N_s* zx_cdm_vCard_POP_N(struct zx_cdm_vCard_s* x);
struct zx_cdm_LISTMEMBER_s* zx_cdm_vCard_POP_LISTMEMBER(struct zx_cdm_vCard_s* x);
struct zx_cdm_NICKNAME_s* zx_cdm_vCard_POP_NICKNAME(struct zx_cdm_vCard_s* x);
struct zx_cdm_PHOTO_s* zx_cdm_vCard_POP_PHOTO(struct zx_cdm_vCard_s* x);
struct zx_cdm_BDAY_s* zx_cdm_vCard_POP_BDAY(struct zx_cdm_vCard_s* x);
struct zx_cdm_ADR_s* zx_cdm_vCard_POP_ADR(struct zx_cdm_vCard_s* x);
struct zx_cdm_LABEL_s* zx_cdm_vCard_POP_LABEL(struct zx_cdm_vCard_s* x);
struct zx_cdm_TEL_s* zx_cdm_vCard_POP_TEL(struct zx_cdm_vCard_s* x);
struct zx_cdm_EMAIL_s* zx_cdm_vCard_POP_EMAIL(struct zx_cdm_vCard_s* x);
struct zx_cdm_JABBERID_s* zx_cdm_vCard_POP_JABBERID(struct zx_cdm_vCard_s* x);
struct zx_cdm_MAILER_s* zx_cdm_vCard_POP_MAILER(struct zx_cdm_vCard_s* x);
struct zx_cdm_TZ_s* zx_cdm_vCard_POP_TZ(struct zx_cdm_vCard_s* x);
struct zx_cdm_GEO_s* zx_cdm_vCard_POP_GEO(struct zx_cdm_vCard_s* x);
struct zx_cdm_TITLE_s* zx_cdm_vCard_POP_TITLE(struct zx_cdm_vCard_s* x);
struct zx_cdm_ROLE_s* zx_cdm_vCard_POP_ROLE(struct zx_cdm_vCard_s* x);
struct zx_cdm_LOGO_s* zx_cdm_vCard_POP_LOGO(struct zx_cdm_vCard_s* x);
struct zx_cdm_AGENT_s* zx_cdm_vCard_POP_AGENT(struct zx_cdm_vCard_s* x);
struct zx_cdm_ORG_s* zx_cdm_vCard_POP_ORG(struct zx_cdm_vCard_s* x);
struct zx_cdm_CATEGORIES_s* zx_cdm_vCard_POP_CATEGORIES(struct zx_cdm_vCard_s* x);
struct zx_cdm_NOTE_s* zx_cdm_vCard_POP_NOTE(struct zx_cdm_vCard_s* x);
struct zx_cdm_PRODID_s* zx_cdm_vCard_POP_PRODID(struct zx_cdm_vCard_s* x);
struct zx_cdm_REV_s* zx_cdm_vCard_POP_REV(struct zx_cdm_vCard_s* x);
struct zx_cdm_SORT_STRING_s* zx_cdm_vCard_POP_SORT_STRING(struct zx_cdm_vCard_s* x);
struct zx_cdm_SOUND_s* zx_cdm_vCard_POP_SOUND(struct zx_cdm_vCard_s* x);
struct zx_cdm_UID_s* zx_cdm_vCard_POP_UID(struct zx_cdm_vCard_s* x);
struct zx_cdm_URL_s* zx_cdm_vCard_POP_URL(struct zx_cdm_vCard_s* x);
struct zx_cdm_CLASS_s* zx_cdm_vCard_POP_CLASS(struct zx_cdm_vCard_s* x);
struct zx_cdm_KEY_s* zx_cdm_vCard_POP_KEY(struct zx_cdm_vCard_s* x);
struct zx_cdm_DESC_s* zx_cdm_vCard_POP_DESC(struct zx_cdm_vCard_s* x);
struct zx_cdm_PHYSICALACCESS_s* zx_cdm_vCard_POP_PHYSICALACCESS(struct zx_cdm_vCard_s* x);
struct zx_cdm_CALURI_s* zx_cdm_vCard_POP_CALURI(struct zx_cdm_vCard_s* x);
struct zx_cdm_CAPURI_s* zx_cdm_vCard_POP_CAPURI(struct zx_cdm_vCard_s* x);
struct zx_cdm_CALADRURI_s* zx_cdm_vCard_POP_CALADRURI(struct zx_cdm_vCard_s* x);
struct zx_cdm_FBURL_s* zx_cdm_vCard_POP_FBURL(struct zx_cdm_vCard_s* x);
struct zx_cb_Extension_s* zx_cdm_vCard_POP_Extension(struct zx_cdm_vCard_s* x);

void zx_cdm_vCard_PUSH_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, struct zx_cdm_VERSION_s* y);
void zx_cdm_vCard_PUSH_CARDID(struct zx_cdm_vCard_s* x, struct zx_elem_s* y);
void zx_cdm_vCard_PUSH_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, struct zx_elem_s* y);
void zx_cdm_vCard_PUSH_SELF(struct zx_cdm_vCard_s* x, struct zx_elem_s* y);
void zx_cdm_vCard_PUSH_FAVORITE(struct zx_cdm_vCard_s* x, struct zx_elem_s* y);
void zx_cdm_vCard_PUSH_FN(struct zx_cdm_vCard_s* x, struct zx_cdm_FN_s* y);
void zx_cdm_vCard_PUSH_N(struct zx_cdm_vCard_s* x, struct zx_cdm_N_s* y);
void zx_cdm_vCard_PUSH_LISTMEMBER(struct zx_cdm_vCard_s* x, struct zx_cdm_LISTMEMBER_s* y);
void zx_cdm_vCard_PUSH_NICKNAME(struct zx_cdm_vCard_s* x, struct zx_cdm_NICKNAME_s* y);
void zx_cdm_vCard_PUSH_PHOTO(struct zx_cdm_vCard_s* x, struct zx_cdm_PHOTO_s* y);
void zx_cdm_vCard_PUSH_BDAY(struct zx_cdm_vCard_s* x, struct zx_cdm_BDAY_s* y);
void zx_cdm_vCard_PUSH_ADR(struct zx_cdm_vCard_s* x, struct zx_cdm_ADR_s* y);
void zx_cdm_vCard_PUSH_LABEL(struct zx_cdm_vCard_s* x, struct zx_cdm_LABEL_s* y);
void zx_cdm_vCard_PUSH_TEL(struct zx_cdm_vCard_s* x, struct zx_cdm_TEL_s* y);
void zx_cdm_vCard_PUSH_EMAIL(struct zx_cdm_vCard_s* x, struct zx_cdm_EMAIL_s* y);
void zx_cdm_vCard_PUSH_JABBERID(struct zx_cdm_vCard_s* x, struct zx_cdm_JABBERID_s* y);
void zx_cdm_vCard_PUSH_MAILER(struct zx_cdm_vCard_s* x, struct zx_cdm_MAILER_s* y);
void zx_cdm_vCard_PUSH_TZ(struct zx_cdm_vCard_s* x, struct zx_cdm_TZ_s* y);
void zx_cdm_vCard_PUSH_GEO(struct zx_cdm_vCard_s* x, struct zx_cdm_GEO_s* y);
void zx_cdm_vCard_PUSH_TITLE(struct zx_cdm_vCard_s* x, struct zx_cdm_TITLE_s* y);
void zx_cdm_vCard_PUSH_ROLE(struct zx_cdm_vCard_s* x, struct zx_cdm_ROLE_s* y);
void zx_cdm_vCard_PUSH_LOGO(struct zx_cdm_vCard_s* x, struct zx_cdm_LOGO_s* y);
void zx_cdm_vCard_PUSH_AGENT(struct zx_cdm_vCard_s* x, struct zx_cdm_AGENT_s* y);
void zx_cdm_vCard_PUSH_ORG(struct zx_cdm_vCard_s* x, struct zx_cdm_ORG_s* y);
void zx_cdm_vCard_PUSH_CATEGORIES(struct zx_cdm_vCard_s* x, struct zx_cdm_CATEGORIES_s* y);
void zx_cdm_vCard_PUSH_NOTE(struct zx_cdm_vCard_s* x, struct zx_cdm_NOTE_s* y);
void zx_cdm_vCard_PUSH_PRODID(struct zx_cdm_vCard_s* x, struct zx_cdm_PRODID_s* y);
void zx_cdm_vCard_PUSH_REV(struct zx_cdm_vCard_s* x, struct zx_cdm_REV_s* y);
void zx_cdm_vCard_PUSH_SORT_STRING(struct zx_cdm_vCard_s* x, struct zx_cdm_SORT_STRING_s* y);
void zx_cdm_vCard_PUSH_SOUND(struct zx_cdm_vCard_s* x, struct zx_cdm_SOUND_s* y);
void zx_cdm_vCard_PUSH_UID(struct zx_cdm_vCard_s* x, struct zx_cdm_UID_s* y);
void zx_cdm_vCard_PUSH_URL(struct zx_cdm_vCard_s* x, struct zx_cdm_URL_s* y);
void zx_cdm_vCard_PUSH_CLASS(struct zx_cdm_vCard_s* x, struct zx_cdm_CLASS_s* y);
void zx_cdm_vCard_PUSH_KEY(struct zx_cdm_vCard_s* x, struct zx_cdm_KEY_s* y);
void zx_cdm_vCard_PUSH_DESC(struct zx_cdm_vCard_s* x, struct zx_cdm_DESC_s* y);
void zx_cdm_vCard_PUSH_PHYSICALACCESS(struct zx_cdm_vCard_s* x, struct zx_cdm_PHYSICALACCESS_s* y);
void zx_cdm_vCard_PUSH_CALURI(struct zx_cdm_vCard_s* x, struct zx_cdm_CALURI_s* y);
void zx_cdm_vCard_PUSH_CAPURI(struct zx_cdm_vCard_s* x, struct zx_cdm_CAPURI_s* y);
void zx_cdm_vCard_PUSH_CALADRURI(struct zx_cdm_vCard_s* x, struct zx_cdm_CALADRURI_s* y);
void zx_cdm_vCard_PUSH_FBURL(struct zx_cdm_vCard_s* x, struct zx_cdm_FBURL_s* y);
void zx_cdm_vCard_PUSH_Extension(struct zx_cdm_vCard_s* x, struct zx_cb_Extension_s* y);

void zx_cdm_vCard_PUT_id(struct zx_cdm_vCard_s* x, struct zx_str* y);
void zx_cdm_vCard_PUT_modificationTime(struct zx_cdm_vCard_s* x, struct zx_str* y);

void zx_cdm_vCard_PUT_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_VERSION_s* y);
void zx_cdm_vCard_PUT_CARDID(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* y);
void zx_cdm_vCard_PUT_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* y);
void zx_cdm_vCard_PUT_SELF(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* y);
void zx_cdm_vCard_PUT_FAVORITE(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* y);
void zx_cdm_vCard_PUT_FN(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_FN_s* y);
void zx_cdm_vCard_PUT_N(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_N_s* y);
void zx_cdm_vCard_PUT_LISTMEMBER(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LISTMEMBER_s* y);
void zx_cdm_vCard_PUT_NICKNAME(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_NICKNAME_s* y);
void zx_cdm_vCard_PUT_PHOTO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PHOTO_s* y);
void zx_cdm_vCard_PUT_BDAY(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_BDAY_s* y);
void zx_cdm_vCard_PUT_ADR(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ADR_s* y);
void zx_cdm_vCard_PUT_LABEL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LABEL_s* y);
void zx_cdm_vCard_PUT_TEL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TEL_s* y);
void zx_cdm_vCard_PUT_EMAIL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_EMAIL_s* y);
void zx_cdm_vCard_PUT_JABBERID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_JABBERID_s* y);
void zx_cdm_vCard_PUT_MAILER(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_MAILER_s* y);
void zx_cdm_vCard_PUT_TZ(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TZ_s* y);
void zx_cdm_vCard_PUT_GEO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_GEO_s* y);
void zx_cdm_vCard_PUT_TITLE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TITLE_s* y);
void zx_cdm_vCard_PUT_ROLE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ROLE_s* y);
void zx_cdm_vCard_PUT_LOGO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LOGO_s* y);
void zx_cdm_vCard_PUT_AGENT(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_AGENT_s* y);
void zx_cdm_vCard_PUT_ORG(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ORG_s* y);
void zx_cdm_vCard_PUT_CATEGORIES(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CATEGORIES_s* y);
void zx_cdm_vCard_PUT_NOTE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_NOTE_s* y);
void zx_cdm_vCard_PUT_PRODID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PRODID_s* y);
void zx_cdm_vCard_PUT_REV(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_REV_s* y);
void zx_cdm_vCard_PUT_SORT_STRING(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_SORT_STRING_s* y);
void zx_cdm_vCard_PUT_SOUND(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_SOUND_s* y);
void zx_cdm_vCard_PUT_UID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_UID_s* y);
void zx_cdm_vCard_PUT_URL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_URL_s* y);
void zx_cdm_vCard_PUT_CLASS(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CLASS_s* y);
void zx_cdm_vCard_PUT_KEY(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_KEY_s* y);
void zx_cdm_vCard_PUT_DESC(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_DESC_s* y);
void zx_cdm_vCard_PUT_PHYSICALACCESS(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PHYSICALACCESS_s* y);
void zx_cdm_vCard_PUT_CALURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CALURI_s* y);
void zx_cdm_vCard_PUT_CAPURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CAPURI_s* y);
void zx_cdm_vCard_PUT_CALADRURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CALADRURI_s* y);
void zx_cdm_vCard_PUT_FBURL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_FBURL_s* y);
void zx_cdm_vCard_PUT_Extension(struct zx_cdm_vCard_s* x, int n, struct zx_cb_Extension_s* y);

void zx_cdm_vCard_ADD_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_VERSION_s* z);
void zx_cdm_vCard_ADD_CARDID(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z);
void zx_cdm_vCard_ADD_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z);
void zx_cdm_vCard_ADD_SELF(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z);
void zx_cdm_vCard_ADD_FAVORITE(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z);
void zx_cdm_vCard_ADD_FN(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_FN_s* z);
void zx_cdm_vCard_ADD_N(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_N_s* z);
void zx_cdm_vCard_ADD_LISTMEMBER(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LISTMEMBER_s* z);
void zx_cdm_vCard_ADD_NICKNAME(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_NICKNAME_s* z);
void zx_cdm_vCard_ADD_PHOTO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PHOTO_s* z);
void zx_cdm_vCard_ADD_BDAY(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_BDAY_s* z);
void zx_cdm_vCard_ADD_ADR(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ADR_s* z);
void zx_cdm_vCard_ADD_LABEL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LABEL_s* z);
void zx_cdm_vCard_ADD_TEL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TEL_s* z);
void zx_cdm_vCard_ADD_EMAIL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_EMAIL_s* z);
void zx_cdm_vCard_ADD_JABBERID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_JABBERID_s* z);
void zx_cdm_vCard_ADD_MAILER(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_MAILER_s* z);
void zx_cdm_vCard_ADD_TZ(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TZ_s* z);
void zx_cdm_vCard_ADD_GEO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_GEO_s* z);
void zx_cdm_vCard_ADD_TITLE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TITLE_s* z);
void zx_cdm_vCard_ADD_ROLE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ROLE_s* z);
void zx_cdm_vCard_ADD_LOGO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LOGO_s* z);
void zx_cdm_vCard_ADD_AGENT(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_AGENT_s* z);
void zx_cdm_vCard_ADD_ORG(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ORG_s* z);
void zx_cdm_vCard_ADD_CATEGORIES(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CATEGORIES_s* z);
void zx_cdm_vCard_ADD_NOTE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_NOTE_s* z);
void zx_cdm_vCard_ADD_PRODID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PRODID_s* z);
void zx_cdm_vCard_ADD_REV(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_REV_s* z);
void zx_cdm_vCard_ADD_SORT_STRING(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_SORT_STRING_s* z);
void zx_cdm_vCard_ADD_SOUND(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_SOUND_s* z);
void zx_cdm_vCard_ADD_UID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_UID_s* z);
void zx_cdm_vCard_ADD_URL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_URL_s* z);
void zx_cdm_vCard_ADD_CLASS(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CLASS_s* z);
void zx_cdm_vCard_ADD_KEY(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_KEY_s* z);
void zx_cdm_vCard_ADD_DESC(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_DESC_s* z);
void zx_cdm_vCard_ADD_PHYSICALACCESS(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PHYSICALACCESS_s* z);
void zx_cdm_vCard_ADD_CALURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CALURI_s* z);
void zx_cdm_vCard_ADD_CAPURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CAPURI_s* z);
void zx_cdm_vCard_ADD_CALADRURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CALADRURI_s* z);
void zx_cdm_vCard_ADD_FBURL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_FBURL_s* z);
void zx_cdm_vCard_ADD_Extension(struct zx_cdm_vCard_s* x, int n, struct zx_cb_Extension_s* z);

void zx_cdm_vCard_DEL_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_CARDID(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_SELF(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_FAVORITE(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_FN(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_N(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_LISTMEMBER(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_NICKNAME(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_PHOTO(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_BDAY(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_ADR(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_LABEL(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_TEL(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_EMAIL(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_JABBERID(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_MAILER(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_TZ(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_GEO(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_TITLE(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_ROLE(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_LOGO(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_AGENT(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_ORG(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_CATEGORIES(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_NOTE(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_PRODID(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_REV(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_SORT_STRING(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_SOUND(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_UID(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_URL(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_CLASS(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_KEY(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_DESC(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_PHYSICALACCESS(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_CALURI(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_CAPURI(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_CALADRURI(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_FBURL(struct zx_cdm_vCard_s* x, int n);
void zx_cdm_vCard_DEL_Extension(struct zx_cdm_vCard_s* x, int n);

void zx_cdm_vCard_REV_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_CARDID(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_SELF(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_FAVORITE(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_FN(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_N(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_LISTMEMBER(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_NICKNAME(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_PHOTO(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_BDAY(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_ADR(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_LABEL(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_TEL(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_EMAIL(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_JABBERID(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_MAILER(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_TZ(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_GEO(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_TITLE(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_ROLE(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_LOGO(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_AGENT(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_ORG(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_CATEGORIES(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_NOTE(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_PRODID(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_REV(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_SORT_STRING(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_SOUND(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_UID(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_URL(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_CLASS(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_KEY(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_DESC(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_PHYSICALACCESS(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_CALURI(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_CAPURI(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_CALADRURI(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_FBURL(struct zx_cdm_vCard_s* x);
void zx_cdm_vCard_REV_Extension(struct zx_cdm_vCard_s* x);

#endif

#endif
