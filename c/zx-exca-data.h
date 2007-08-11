/* c/zx-exca-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_exca_data_h
#define _c_zx_exca_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- exca_InclusiveNamespaces -------------------------- */
/* refby( zx_ds_Transform_s ) */
#ifndef zx_exca_InclusiveNamespaces_EXT
#define zx_exca_InclusiveNamespaces_EXT
#endif

struct zx_exca_InclusiveNamespaces_s* zx_DEC_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_exca_InclusiveNamespaces_s* zx_NEW_exca_InclusiveNamespaces(struct zx_ctx* c);
void zx_FREE_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_exca_InclusiveNamespaces_s* zx_DEEP_CLONE_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x, int dup_strs);
void zx_DUP_STRS_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x);
int zx_WALK_SO_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x);
int zx_LEN_WO_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x);
char* zx_ENC_SO_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x, char* p);
char* zx_ENC_WO_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x);
struct zx_str* zx_EASY_ENC_WO_exca_InclusiveNamespaces(struct zx_ctx* c, struct zx_exca_InclusiveNamespaces_s* x);

struct zx_exca_InclusiveNamespaces_s {
  ZX_ELEM_EXT
  zx_exca_InclusiveNamespaces_EXT
  struct zx_str* PrefixList;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_exca_InclusiveNamespaces_GET_PrefixList(struct zx_exca_InclusiveNamespaces_s* x);





void zx_exca_InclusiveNamespaces_PUT_PrefixList(struct zx_exca_InclusiveNamespaces_s* x, struct zx_str* y);





#endif

#endif
