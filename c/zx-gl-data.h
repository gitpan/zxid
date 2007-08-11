/* c/zx-gl-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_gl_data_h
#define _c_zx_gl_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- gl_AreaComparison -------------------------- */
/* refby( zx_gl_QueryItem_s zx_gl_ItemSelection_s ) */
#ifndef zx_gl_AreaComparison_EXT
#define zx_gl_AreaComparison_EXT
#endif

struct zx_gl_AreaComparison_s* zx_DEC_gl_AreaComparison(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_AreaComparison_s* zx_NEW_gl_AreaComparison(struct zx_ctx* c);
void zx_FREE_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_AreaComparison_s* zx_DEEP_CLONE_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x, int dup_strs);
void zx_DUP_STRS_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x);
int zx_WALK_SO_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x);
int zx_LEN_WO_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x);
char* zx_ENC_SO_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x, char* p);
char* zx_ENC_WO_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_AreaComparison(struct zx_ctx* c, struct zx_gl_AreaComparison_s* x);

struct zx_gl_AreaComparison_s {
  ZX_ELEM_EXT
  zx_gl_AreaComparison_EXT
  struct zx_gl_CivilData_s* CivilData;	/* {0,-1} nada */
  struct zx_gl_shape_s* shape;	/* {0,-1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* itemID;	/* {0,1} attribute xs:string */
  struct zx_str* returnLocation;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_AreaComparison_GET_itemID(struct zx_gl_AreaComparison_s* x);
struct zx_str* zx_gl_AreaComparison_GET_returnLocation(struct zx_gl_AreaComparison_s* x);

struct zx_gl_CivilData_s* zx_gl_AreaComparison_GET_CivilData(struct zx_gl_AreaComparison_s* x, int n);
struct zx_gl_shape_s* zx_gl_AreaComparison_GET_shape(struct zx_gl_AreaComparison_s* x, int n);
struct zx_gl_Extension_s* zx_gl_AreaComparison_GET_Extension(struct zx_gl_AreaComparison_s* x, int n);

int zx_gl_AreaComparison_NUM_CivilData(struct zx_gl_AreaComparison_s* x);
int zx_gl_AreaComparison_NUM_shape(struct zx_gl_AreaComparison_s* x);
int zx_gl_AreaComparison_NUM_Extension(struct zx_gl_AreaComparison_s* x);

struct zx_gl_CivilData_s* zx_gl_AreaComparison_POP_CivilData(struct zx_gl_AreaComparison_s* x);
struct zx_gl_shape_s* zx_gl_AreaComparison_POP_shape(struct zx_gl_AreaComparison_s* x);
struct zx_gl_Extension_s* zx_gl_AreaComparison_POP_Extension(struct zx_gl_AreaComparison_s* x);

void zx_gl_AreaComparison_PUSH_CivilData(struct zx_gl_AreaComparison_s* x, struct zx_gl_CivilData_s* y);
void zx_gl_AreaComparison_PUSH_shape(struct zx_gl_AreaComparison_s* x, struct zx_gl_shape_s* y);
void zx_gl_AreaComparison_PUSH_Extension(struct zx_gl_AreaComparison_s* x, struct zx_gl_Extension_s* y);

void zx_gl_AreaComparison_PUT_itemID(struct zx_gl_AreaComparison_s* x, struct zx_str* y);
void zx_gl_AreaComparison_PUT_returnLocation(struct zx_gl_AreaComparison_s* x, struct zx_str* y);

void zx_gl_AreaComparison_PUT_CivilData(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_CivilData_s* y);
void zx_gl_AreaComparison_PUT_shape(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_shape_s* y);
void zx_gl_AreaComparison_PUT_Extension(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_AreaComparison_ADD_CivilData(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_CivilData_s* z);
void zx_gl_AreaComparison_ADD_shape(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_shape_s* z);
void zx_gl_AreaComparison_ADD_Extension(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_AreaComparison_DEL_CivilData(struct zx_gl_AreaComparison_s* x, int n);
void zx_gl_AreaComparison_DEL_shape(struct zx_gl_AreaComparison_s* x, int n);
void zx_gl_AreaComparison_DEL_Extension(struct zx_gl_AreaComparison_s* x, int n);

void zx_gl_AreaComparison_REV_CivilData(struct zx_gl_AreaComparison_s* x);
void zx_gl_AreaComparison_REV_shape(struct zx_gl_AreaComparison_s* x);
void zx_gl_AreaComparison_REV_Extension(struct zx_gl_AreaComparison_s* x);

#endif
/* -------------------------- gl_Box -------------------------- */
/* refby( zx_gl_MultiPolygon_s zx_gl_shape_s ) */
#ifndef zx_gl_Box_EXT
#define zx_gl_Box_EXT
#endif

struct zx_gl_Box_s* zx_DEC_gl_Box(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Box_s* zx_NEW_gl_Box(struct zx_ctx* c);
void zx_FREE_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Box_s* zx_DEEP_CLONE_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x, int dup_strs);
void zx_DUP_STRS_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x);
int zx_WALK_SO_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x);
int zx_LEN_WO_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x);
char* zx_ENC_SO_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x, char* p);
char* zx_ENC_WO_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Box(struct zx_ctx* c, struct zx_gl_Box_s* x);

struct zx_gl_Box_s {
  ZX_ELEM_EXT
  zx_gl_Box_EXT
  struct zx_gl_coord_s* coord;	/* {1,-1} nada */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Box_GET_gid(struct zx_gl_Box_s* x);
struct zx_str* zx_gl_Box_GET_srsName(struct zx_gl_Box_s* x);

struct zx_gl_coord_s* zx_gl_Box_GET_coord(struct zx_gl_Box_s* x, int n);

int zx_gl_Box_NUM_coord(struct zx_gl_Box_s* x);

struct zx_gl_coord_s* zx_gl_Box_POP_coord(struct zx_gl_Box_s* x);

void zx_gl_Box_PUSH_coord(struct zx_gl_Box_s* x, struct zx_gl_coord_s* y);

void zx_gl_Box_PUT_gid(struct zx_gl_Box_s* x, struct zx_str* y);
void zx_gl_Box_PUT_srsName(struct zx_gl_Box_s* x, struct zx_str* y);

void zx_gl_Box_PUT_coord(struct zx_gl_Box_s* x, int n, struct zx_gl_coord_s* y);

void zx_gl_Box_ADD_coord(struct zx_gl_Box_s* x, int n, struct zx_gl_coord_s* z);

void zx_gl_Box_DEL_coord(struct zx_gl_Box_s* x, int n);

void zx_gl_Box_REV_coord(struct zx_gl_Box_s* x);

#endif
/* -------------------------- gl_ChangeArea -------------------------- */
/* refby( zx_gl_Trigger_s ) */
#ifndef zx_gl_ChangeArea_EXT
#define zx_gl_ChangeArea_EXT
#endif

struct zx_gl_ChangeArea_s* zx_DEC_gl_ChangeArea(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_ChangeArea_s* zx_NEW_gl_ChangeArea(struct zx_ctx* c);
void zx_FREE_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_ChangeArea_s* zx_DEEP_CLONE_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x, int dup_strs);
void zx_DUP_STRS_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x);
int zx_WALK_SO_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x);
int zx_LEN_WO_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x);
char* zx_ENC_SO_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x, char* p);
char* zx_ENC_WO_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_ChangeArea(struct zx_ctx* c, struct zx_gl_ChangeArea_s* x);

struct zx_gl_ChangeArea_s {
  ZX_ELEM_EXT
  zx_gl_ChangeArea_EXT
  struct zx_gl_CivilData_s* CivilData;	/* {0,-1} nada */
  struct zx_gl_shape_s* shape;	/* {0,-1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* event;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_ChangeArea_GET_event(struct zx_gl_ChangeArea_s* x);

struct zx_gl_CivilData_s* zx_gl_ChangeArea_GET_CivilData(struct zx_gl_ChangeArea_s* x, int n);
struct zx_gl_shape_s* zx_gl_ChangeArea_GET_shape(struct zx_gl_ChangeArea_s* x, int n);
struct zx_gl_Extension_s* zx_gl_ChangeArea_GET_Extension(struct zx_gl_ChangeArea_s* x, int n);

int zx_gl_ChangeArea_NUM_CivilData(struct zx_gl_ChangeArea_s* x);
int zx_gl_ChangeArea_NUM_shape(struct zx_gl_ChangeArea_s* x);
int zx_gl_ChangeArea_NUM_Extension(struct zx_gl_ChangeArea_s* x);

struct zx_gl_CivilData_s* zx_gl_ChangeArea_POP_CivilData(struct zx_gl_ChangeArea_s* x);
struct zx_gl_shape_s* zx_gl_ChangeArea_POP_shape(struct zx_gl_ChangeArea_s* x);
struct zx_gl_Extension_s* zx_gl_ChangeArea_POP_Extension(struct zx_gl_ChangeArea_s* x);

void zx_gl_ChangeArea_PUSH_CivilData(struct zx_gl_ChangeArea_s* x, struct zx_gl_CivilData_s* y);
void zx_gl_ChangeArea_PUSH_shape(struct zx_gl_ChangeArea_s* x, struct zx_gl_shape_s* y);
void zx_gl_ChangeArea_PUSH_Extension(struct zx_gl_ChangeArea_s* x, struct zx_gl_Extension_s* y);

void zx_gl_ChangeArea_PUT_event(struct zx_gl_ChangeArea_s* x, struct zx_str* y);

void zx_gl_ChangeArea_PUT_CivilData(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_CivilData_s* y);
void zx_gl_ChangeArea_PUT_shape(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_shape_s* y);
void zx_gl_ChangeArea_PUT_Extension(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_ChangeArea_ADD_CivilData(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_CivilData_s* z);
void zx_gl_ChangeArea_ADD_shape(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_shape_s* z);
void zx_gl_ChangeArea_ADD_Extension(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_ChangeArea_DEL_CivilData(struct zx_gl_ChangeArea_s* x, int n);
void zx_gl_ChangeArea_DEL_shape(struct zx_gl_ChangeArea_s* x, int n);
void zx_gl_ChangeArea_DEL_Extension(struct zx_gl_ChangeArea_s* x, int n);

void zx_gl_ChangeArea_REV_CivilData(struct zx_gl_ChangeArea_s* x);
void zx_gl_ChangeArea_REV_shape(struct zx_gl_ChangeArea_s* x);
void zx_gl_ChangeArea_REV_Extension(struct zx_gl_ChangeArea_s* x);

#endif
/* -------------------------- gl_CircularArcArea -------------------------- */
/* refby( zx_gl_MultiPolygon_s zx_gl_shape_s ) */
#ifndef zx_gl_CircularArcArea_EXT
#define zx_gl_CircularArcArea_EXT
#endif

struct zx_gl_CircularArcArea_s* zx_DEC_gl_CircularArcArea(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_CircularArcArea_s* zx_NEW_gl_CircularArcArea(struct zx_ctx* c);
void zx_FREE_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_CircularArcArea_s* zx_DEEP_CLONE_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x, int dup_strs);
void zx_DUP_STRS_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x);
int zx_WALK_SO_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x);
int zx_LEN_WO_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x);
char* zx_ENC_SO_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x, char* p);
char* zx_ENC_WO_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_CircularArcArea(struct zx_ctx* c, struct zx_gl_CircularArcArea_s* x);

struct zx_gl_CircularArcArea_s {
  ZX_ELEM_EXT
  zx_gl_CircularArcArea_EXT
  struct zx_gl_coord_s* coord;	/* {1,1} nada */
  struct zx_elem_s* inRadius;	/* {1,1} xs:string */
  struct zx_elem_s* outRadius;	/* {1,1} xs:string */
  struct zx_elem_s* startAngle;	/* {1,1} xs:string */
  struct zx_elem_s* stopAngle;	/* {1,1} xs:string */
  struct zx_elem_s* angularUnit;	/* {0,1} xs:string */
  struct zx_elem_s* distanceUnit;	/* {0,1} xs:string */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_CircularArcArea_GET_gid(struct zx_gl_CircularArcArea_s* x);
struct zx_str* zx_gl_CircularArcArea_GET_srsName(struct zx_gl_CircularArcArea_s* x);

struct zx_gl_coord_s* zx_gl_CircularArcArea_GET_coord(struct zx_gl_CircularArcArea_s* x, int n);
struct zx_elem_s* zx_gl_CircularArcArea_GET_inRadius(struct zx_gl_CircularArcArea_s* x, int n);
struct zx_elem_s* zx_gl_CircularArcArea_GET_outRadius(struct zx_gl_CircularArcArea_s* x, int n);
struct zx_elem_s* zx_gl_CircularArcArea_GET_startAngle(struct zx_gl_CircularArcArea_s* x, int n);
struct zx_elem_s* zx_gl_CircularArcArea_GET_stopAngle(struct zx_gl_CircularArcArea_s* x, int n);
struct zx_elem_s* zx_gl_CircularArcArea_GET_angularUnit(struct zx_gl_CircularArcArea_s* x, int n);
struct zx_elem_s* zx_gl_CircularArcArea_GET_distanceUnit(struct zx_gl_CircularArcArea_s* x, int n);

int zx_gl_CircularArcArea_NUM_coord(struct zx_gl_CircularArcArea_s* x);
int zx_gl_CircularArcArea_NUM_inRadius(struct zx_gl_CircularArcArea_s* x);
int zx_gl_CircularArcArea_NUM_outRadius(struct zx_gl_CircularArcArea_s* x);
int zx_gl_CircularArcArea_NUM_startAngle(struct zx_gl_CircularArcArea_s* x);
int zx_gl_CircularArcArea_NUM_stopAngle(struct zx_gl_CircularArcArea_s* x);
int zx_gl_CircularArcArea_NUM_angularUnit(struct zx_gl_CircularArcArea_s* x);
int zx_gl_CircularArcArea_NUM_distanceUnit(struct zx_gl_CircularArcArea_s* x);

struct zx_gl_coord_s* zx_gl_CircularArcArea_POP_coord(struct zx_gl_CircularArcArea_s* x);
struct zx_elem_s* zx_gl_CircularArcArea_POP_inRadius(struct zx_gl_CircularArcArea_s* x);
struct zx_elem_s* zx_gl_CircularArcArea_POP_outRadius(struct zx_gl_CircularArcArea_s* x);
struct zx_elem_s* zx_gl_CircularArcArea_POP_startAngle(struct zx_gl_CircularArcArea_s* x);
struct zx_elem_s* zx_gl_CircularArcArea_POP_stopAngle(struct zx_gl_CircularArcArea_s* x);
struct zx_elem_s* zx_gl_CircularArcArea_POP_angularUnit(struct zx_gl_CircularArcArea_s* x);
struct zx_elem_s* zx_gl_CircularArcArea_POP_distanceUnit(struct zx_gl_CircularArcArea_s* x);

void zx_gl_CircularArcArea_PUSH_coord(struct zx_gl_CircularArcArea_s* x, struct zx_gl_coord_s* y);
void zx_gl_CircularArcArea_PUSH_inRadius(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUSH_outRadius(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUSH_startAngle(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUSH_stopAngle(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUSH_angularUnit(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUSH_distanceUnit(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* y);

void zx_gl_CircularArcArea_PUT_gid(struct zx_gl_CircularArcArea_s* x, struct zx_str* y);
void zx_gl_CircularArcArea_PUT_srsName(struct zx_gl_CircularArcArea_s* x, struct zx_str* y);

void zx_gl_CircularArcArea_PUT_coord(struct zx_gl_CircularArcArea_s* x, int n, struct zx_gl_coord_s* y);
void zx_gl_CircularArcArea_PUT_inRadius(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUT_outRadius(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUT_startAngle(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUT_stopAngle(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUT_angularUnit(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_CircularArcArea_PUT_distanceUnit(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* y);

void zx_gl_CircularArcArea_ADD_coord(struct zx_gl_CircularArcArea_s* x, int n, struct zx_gl_coord_s* z);
void zx_gl_CircularArcArea_ADD_inRadius(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_CircularArcArea_ADD_outRadius(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_CircularArcArea_ADD_startAngle(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_CircularArcArea_ADD_stopAngle(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_CircularArcArea_ADD_angularUnit(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_CircularArcArea_ADD_distanceUnit(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z);

void zx_gl_CircularArcArea_DEL_coord(struct zx_gl_CircularArcArea_s* x, int n);
void zx_gl_CircularArcArea_DEL_inRadius(struct zx_gl_CircularArcArea_s* x, int n);
void zx_gl_CircularArcArea_DEL_outRadius(struct zx_gl_CircularArcArea_s* x, int n);
void zx_gl_CircularArcArea_DEL_startAngle(struct zx_gl_CircularArcArea_s* x, int n);
void zx_gl_CircularArcArea_DEL_stopAngle(struct zx_gl_CircularArcArea_s* x, int n);
void zx_gl_CircularArcArea_DEL_angularUnit(struct zx_gl_CircularArcArea_s* x, int n);
void zx_gl_CircularArcArea_DEL_distanceUnit(struct zx_gl_CircularArcArea_s* x, int n);

void zx_gl_CircularArcArea_REV_coord(struct zx_gl_CircularArcArea_s* x);
void zx_gl_CircularArcArea_REV_inRadius(struct zx_gl_CircularArcArea_s* x);
void zx_gl_CircularArcArea_REV_outRadius(struct zx_gl_CircularArcArea_s* x);
void zx_gl_CircularArcArea_REV_startAngle(struct zx_gl_CircularArcArea_s* x);
void zx_gl_CircularArcArea_REV_stopAngle(struct zx_gl_CircularArcArea_s* x);
void zx_gl_CircularArcArea_REV_angularUnit(struct zx_gl_CircularArcArea_s* x);
void zx_gl_CircularArcArea_REV_distanceUnit(struct zx_gl_CircularArcArea_s* x);

#endif
/* -------------------------- gl_CircularArea -------------------------- */
/* refby( zx_gl_MultiPolygon_s zx_gl_shape_s ) */
#ifndef zx_gl_CircularArea_EXT
#define zx_gl_CircularArea_EXT
#endif

struct zx_gl_CircularArea_s* zx_DEC_gl_CircularArea(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_CircularArea_s* zx_NEW_gl_CircularArea(struct zx_ctx* c);
void zx_FREE_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_CircularArea_s* zx_DEEP_CLONE_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x, int dup_strs);
void zx_DUP_STRS_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x);
int zx_WALK_SO_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x);
int zx_LEN_WO_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x);
char* zx_ENC_SO_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x, char* p);
char* zx_ENC_WO_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_CircularArea(struct zx_ctx* c, struct zx_gl_CircularArea_s* x);

struct zx_gl_CircularArea_s {
  ZX_ELEM_EXT
  zx_gl_CircularArea_EXT
  struct zx_gl_coord_s* coord;	/* {1,1} nada */
  struct zx_elem_s* radius;	/* {1,1} xs:string */
  struct zx_elem_s* distanceUnit;	/* {0,1} xs:string */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_CircularArea_GET_gid(struct zx_gl_CircularArea_s* x);
struct zx_str* zx_gl_CircularArea_GET_srsName(struct zx_gl_CircularArea_s* x);

struct zx_gl_coord_s* zx_gl_CircularArea_GET_coord(struct zx_gl_CircularArea_s* x, int n);
struct zx_elem_s* zx_gl_CircularArea_GET_radius(struct zx_gl_CircularArea_s* x, int n);
struct zx_elem_s* zx_gl_CircularArea_GET_distanceUnit(struct zx_gl_CircularArea_s* x, int n);

int zx_gl_CircularArea_NUM_coord(struct zx_gl_CircularArea_s* x);
int zx_gl_CircularArea_NUM_radius(struct zx_gl_CircularArea_s* x);
int zx_gl_CircularArea_NUM_distanceUnit(struct zx_gl_CircularArea_s* x);

struct zx_gl_coord_s* zx_gl_CircularArea_POP_coord(struct zx_gl_CircularArea_s* x);
struct zx_elem_s* zx_gl_CircularArea_POP_radius(struct zx_gl_CircularArea_s* x);
struct zx_elem_s* zx_gl_CircularArea_POP_distanceUnit(struct zx_gl_CircularArea_s* x);

void zx_gl_CircularArea_PUSH_coord(struct zx_gl_CircularArea_s* x, struct zx_gl_coord_s* y);
void zx_gl_CircularArea_PUSH_radius(struct zx_gl_CircularArea_s* x, struct zx_elem_s* y);
void zx_gl_CircularArea_PUSH_distanceUnit(struct zx_gl_CircularArea_s* x, struct zx_elem_s* y);

void zx_gl_CircularArea_PUT_gid(struct zx_gl_CircularArea_s* x, struct zx_str* y);
void zx_gl_CircularArea_PUT_srsName(struct zx_gl_CircularArea_s* x, struct zx_str* y);

void zx_gl_CircularArea_PUT_coord(struct zx_gl_CircularArea_s* x, int n, struct zx_gl_coord_s* y);
void zx_gl_CircularArea_PUT_radius(struct zx_gl_CircularArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_CircularArea_PUT_distanceUnit(struct zx_gl_CircularArea_s* x, int n, struct zx_elem_s* y);

void zx_gl_CircularArea_ADD_coord(struct zx_gl_CircularArea_s* x, int n, struct zx_gl_coord_s* z);
void zx_gl_CircularArea_ADD_radius(struct zx_gl_CircularArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_CircularArea_ADD_distanceUnit(struct zx_gl_CircularArea_s* x, int n, struct zx_elem_s* z);

void zx_gl_CircularArea_DEL_coord(struct zx_gl_CircularArea_s* x, int n);
void zx_gl_CircularArea_DEL_radius(struct zx_gl_CircularArea_s* x, int n);
void zx_gl_CircularArea_DEL_distanceUnit(struct zx_gl_CircularArea_s* x, int n);

void zx_gl_CircularArea_REV_coord(struct zx_gl_CircularArea_s* x);
void zx_gl_CircularArea_REV_radius(struct zx_gl_CircularArea_s* x);
void zx_gl_CircularArea_REV_distanceUnit(struct zx_gl_CircularArea_s* x);

#endif
/* -------------------------- gl_CivilData -------------------------- */
/* refby( zx_gl_AreaComparison_s zx_gl_geoinfo_s zx_gl_pd_s zx_gl_ChangeArea_s ) */
#ifndef zx_gl_CivilData_EXT
#define zx_gl_CivilData_EXT
#endif

struct zx_gl_CivilData_s* zx_DEC_gl_CivilData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_CivilData_s* zx_NEW_gl_CivilData(struct zx_ctx* c);
void zx_FREE_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_CivilData_s* zx_DEEP_CLONE_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x, int dup_strs);
void zx_DUP_STRS_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x);
int zx_WALK_SO_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x);
int zx_LEN_WO_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x);
char* zx_ENC_SO_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x, char* p);
char* zx_ENC_WO_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_CivilData(struct zx_ctx* c, struct zx_gl_CivilData_s* x);

struct zx_gl_CivilData_s {
  ZX_ELEM_EXT
  zx_gl_CivilData_EXT
  struct zx_elem_s* PostalAddress;	/* {0,1} xs:string */
  struct zx_gl_LPostalAddress_s* LPostalAddress;	/* {0,-1}  */
  struct zx_elem_s* PostalCode;	/* {0,1} xs:string */
  struct zx_elem_s* L;	/* {0,1} xs:string */
  struct zx_gl_LL_s* LL;	/* {0,-1}  */
  struct zx_elem_s* St;	/* {0,1} xs:string */
  struct zx_gl_LSt_s* LSt;	/* {0,-1}  */
  struct zx_elem_s* C;	/* {0,1} xs:string */
  struct zx_elem_s* MNC;	/* {0,1} xs:string */
  struct zx_gl_Extension_s* Extension;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_gl_CivilData_GET_PostalAddress(struct zx_gl_CivilData_s* x, int n);
struct zx_gl_LPostalAddress_s* zx_gl_CivilData_GET_LPostalAddress(struct zx_gl_CivilData_s* x, int n);
struct zx_elem_s* zx_gl_CivilData_GET_PostalCode(struct zx_gl_CivilData_s* x, int n);
struct zx_elem_s* zx_gl_CivilData_GET_L(struct zx_gl_CivilData_s* x, int n);
struct zx_gl_LL_s* zx_gl_CivilData_GET_LL(struct zx_gl_CivilData_s* x, int n);
struct zx_elem_s* zx_gl_CivilData_GET_St(struct zx_gl_CivilData_s* x, int n);
struct zx_gl_LSt_s* zx_gl_CivilData_GET_LSt(struct zx_gl_CivilData_s* x, int n);
struct zx_elem_s* zx_gl_CivilData_GET_C(struct zx_gl_CivilData_s* x, int n);
struct zx_elem_s* zx_gl_CivilData_GET_MNC(struct zx_gl_CivilData_s* x, int n);
struct zx_gl_Extension_s* zx_gl_CivilData_GET_Extension(struct zx_gl_CivilData_s* x, int n);

int zx_gl_CivilData_NUM_PostalAddress(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_LPostalAddress(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_PostalCode(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_L(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_LL(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_St(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_LSt(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_C(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_MNC(struct zx_gl_CivilData_s* x);
int zx_gl_CivilData_NUM_Extension(struct zx_gl_CivilData_s* x);

struct zx_elem_s* zx_gl_CivilData_POP_PostalAddress(struct zx_gl_CivilData_s* x);
struct zx_gl_LPostalAddress_s* zx_gl_CivilData_POP_LPostalAddress(struct zx_gl_CivilData_s* x);
struct zx_elem_s* zx_gl_CivilData_POP_PostalCode(struct zx_gl_CivilData_s* x);
struct zx_elem_s* zx_gl_CivilData_POP_L(struct zx_gl_CivilData_s* x);
struct zx_gl_LL_s* zx_gl_CivilData_POP_LL(struct zx_gl_CivilData_s* x);
struct zx_elem_s* zx_gl_CivilData_POP_St(struct zx_gl_CivilData_s* x);
struct zx_gl_LSt_s* zx_gl_CivilData_POP_LSt(struct zx_gl_CivilData_s* x);
struct zx_elem_s* zx_gl_CivilData_POP_C(struct zx_gl_CivilData_s* x);
struct zx_elem_s* zx_gl_CivilData_POP_MNC(struct zx_gl_CivilData_s* x);
struct zx_gl_Extension_s* zx_gl_CivilData_POP_Extension(struct zx_gl_CivilData_s* x);

void zx_gl_CivilData_PUSH_PostalAddress(struct zx_gl_CivilData_s* x, struct zx_elem_s* y);
void zx_gl_CivilData_PUSH_LPostalAddress(struct zx_gl_CivilData_s* x, struct zx_gl_LPostalAddress_s* y);
void zx_gl_CivilData_PUSH_PostalCode(struct zx_gl_CivilData_s* x, struct zx_elem_s* y);
void zx_gl_CivilData_PUSH_L(struct zx_gl_CivilData_s* x, struct zx_elem_s* y);
void zx_gl_CivilData_PUSH_LL(struct zx_gl_CivilData_s* x, struct zx_gl_LL_s* y);
void zx_gl_CivilData_PUSH_St(struct zx_gl_CivilData_s* x, struct zx_elem_s* y);
void zx_gl_CivilData_PUSH_LSt(struct zx_gl_CivilData_s* x, struct zx_gl_LSt_s* y);
void zx_gl_CivilData_PUSH_C(struct zx_gl_CivilData_s* x, struct zx_elem_s* y);
void zx_gl_CivilData_PUSH_MNC(struct zx_gl_CivilData_s* x, struct zx_elem_s* y);
void zx_gl_CivilData_PUSH_Extension(struct zx_gl_CivilData_s* x, struct zx_gl_Extension_s* y);


void zx_gl_CivilData_PUT_PostalAddress(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* y);
void zx_gl_CivilData_PUT_LPostalAddress(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LPostalAddress_s* y);
void zx_gl_CivilData_PUT_PostalCode(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* y);
void zx_gl_CivilData_PUT_L(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* y);
void zx_gl_CivilData_PUT_LL(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LL_s* y);
void zx_gl_CivilData_PUT_St(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* y);
void zx_gl_CivilData_PUT_LSt(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LSt_s* y);
void zx_gl_CivilData_PUT_C(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* y);
void zx_gl_CivilData_PUT_MNC(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* y);
void zx_gl_CivilData_PUT_Extension(struct zx_gl_CivilData_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_CivilData_ADD_PostalAddress(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z);
void zx_gl_CivilData_ADD_LPostalAddress(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LPostalAddress_s* z);
void zx_gl_CivilData_ADD_PostalCode(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z);
void zx_gl_CivilData_ADD_L(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z);
void zx_gl_CivilData_ADD_LL(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LL_s* z);
void zx_gl_CivilData_ADD_St(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z);
void zx_gl_CivilData_ADD_LSt(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LSt_s* z);
void zx_gl_CivilData_ADD_C(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z);
void zx_gl_CivilData_ADD_MNC(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z);
void zx_gl_CivilData_ADD_Extension(struct zx_gl_CivilData_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_CivilData_DEL_PostalAddress(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_LPostalAddress(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_PostalCode(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_L(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_LL(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_St(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_LSt(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_C(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_MNC(struct zx_gl_CivilData_s* x, int n);
void zx_gl_CivilData_DEL_Extension(struct zx_gl_CivilData_s* x, int n);

void zx_gl_CivilData_REV_PostalAddress(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_LPostalAddress(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_PostalCode(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_L(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_LL(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_St(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_LSt(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_C(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_MNC(struct zx_gl_CivilData_s* x);
void zx_gl_CivilData_REV_Extension(struct zx_gl_CivilData_s* x);

#endif
/* -------------------------- gl_ComparisonResult -------------------------- */
/* refby( ) */
#ifndef zx_gl_ComparisonResult_EXT
#define zx_gl_ComparisonResult_EXT
#endif

struct zx_gl_ComparisonResult_s* zx_DEC_gl_ComparisonResult(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_ComparisonResult_s* zx_NEW_gl_ComparisonResult(struct zx_ctx* c);
void zx_FREE_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_ComparisonResult_s* zx_DEEP_CLONE_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x, int dup_strs);
void zx_DUP_STRS_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x);
int zx_WALK_SO_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x);
int zx_LEN_WO_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x);
char* zx_ENC_SO_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x, char* p);
char* zx_ENC_WO_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_ComparisonResult(struct zx_ctx* c, struct zx_gl_ComparisonResult_s* x);

struct zx_gl_ComparisonResult_s {
  ZX_ELEM_EXT
  zx_gl_ComparisonResult_EXT
  struct zx_str* ItemIDRef;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_ComparisonResult_GET_ItemIDRef(struct zx_gl_ComparisonResult_s* x);





void zx_gl_ComparisonResult_PUT_ItemIDRef(struct zx_gl_ComparisonResult_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_CoordinateReferenceSystem -------------------------- */
/* refby( zx_gl_geoinfo_s ) */
#ifndef zx_gl_CoordinateReferenceSystem_EXT
#define zx_gl_CoordinateReferenceSystem_EXT
#endif

struct zx_gl_CoordinateReferenceSystem_s* zx_DEC_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_CoordinateReferenceSystem_s* zx_NEW_gl_CoordinateReferenceSystem(struct zx_ctx* c);
void zx_FREE_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_CoordinateReferenceSystem_s* zx_DEEP_CLONE_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x, int dup_strs);
void zx_DUP_STRS_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x);
int zx_WALK_SO_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x);
int zx_LEN_WO_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x);
char* zx_ENC_SO_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x, char* p);
char* zx_ENC_WO_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_CoordinateReferenceSystem(struct zx_ctx* c, struct zx_gl_CoordinateReferenceSystem_s* x);

struct zx_gl_CoordinateReferenceSystem_s {
  ZX_ELEM_EXT
  zx_gl_CoordinateReferenceSystem_EXT
  struct zx_gl_Identifier_s* Identifier;	/* {1,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_gl_Identifier_s* zx_gl_CoordinateReferenceSystem_GET_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, int n);

int zx_gl_CoordinateReferenceSystem_NUM_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x);

struct zx_gl_Identifier_s* zx_gl_CoordinateReferenceSystem_POP_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x);

void zx_gl_CoordinateReferenceSystem_PUSH_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, struct zx_gl_Identifier_s* y);


void zx_gl_CoordinateReferenceSystem_PUT_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, int n, struct zx_gl_Identifier_s* y);

void zx_gl_CoordinateReferenceSystem_ADD_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, int n, struct zx_gl_Identifier_s* z);

void zx_gl_CoordinateReferenceSystem_DEL_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, int n);

void zx_gl_CoordinateReferenceSystem_REV_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x);

#endif
/* -------------------------- gl_Create -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_Create_EXT
#define zx_gl_Create_EXT
#endif

struct zx_gl_Create_s* zx_DEC_gl_Create(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Create_s* zx_NEW_gl_Create(struct zx_ctx* c);
void zx_FREE_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Create_s* zx_DEEP_CLONE_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x, int dup_strs);
void zx_DUP_STRS_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x);
int zx_WALK_SO_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x);
int zx_LEN_WO_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x);
char* zx_ENC_SO_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x, char* p);
char* zx_ENC_WO_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Create(struct zx_ctx* c, struct zx_gl_Create_s* x);

struct zx_gl_Create_s {
  ZX_ELEM_EXT
  zx_gl_Create_EXT
  struct zx_gl_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_gl_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_gl_Subscription_s* Subscription;	/* {0,-1} nada */
  struct zx_gl_CreateItem_s* CreateItem;	/* {1,-1}  */
  struct zx_gl_ItemSelection_s* ItemSelection;	/* {0,-1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Create_GET_id(struct zx_gl_Create_s* x);

struct zx_gl_ResourceID_s* zx_gl_Create_GET_ResourceID(struct zx_gl_Create_s* x, int n);
struct zx_gl_EncryptedResourceID_s* zx_gl_Create_GET_EncryptedResourceID(struct zx_gl_Create_s* x, int n);
struct zx_gl_Subscription_s* zx_gl_Create_GET_Subscription(struct zx_gl_Create_s* x, int n);
struct zx_gl_CreateItem_s* zx_gl_Create_GET_CreateItem(struct zx_gl_Create_s* x, int n);
struct zx_gl_ItemSelection_s* zx_gl_Create_GET_ItemSelection(struct zx_gl_Create_s* x, int n);
struct zx_gl_Extension_s* zx_gl_Create_GET_Extension(struct zx_gl_Create_s* x, int n);

int zx_gl_Create_NUM_ResourceID(struct zx_gl_Create_s* x);
int zx_gl_Create_NUM_EncryptedResourceID(struct zx_gl_Create_s* x);
int zx_gl_Create_NUM_Subscription(struct zx_gl_Create_s* x);
int zx_gl_Create_NUM_CreateItem(struct zx_gl_Create_s* x);
int zx_gl_Create_NUM_ItemSelection(struct zx_gl_Create_s* x);
int zx_gl_Create_NUM_Extension(struct zx_gl_Create_s* x);

struct zx_gl_ResourceID_s* zx_gl_Create_POP_ResourceID(struct zx_gl_Create_s* x);
struct zx_gl_EncryptedResourceID_s* zx_gl_Create_POP_EncryptedResourceID(struct zx_gl_Create_s* x);
struct zx_gl_Subscription_s* zx_gl_Create_POP_Subscription(struct zx_gl_Create_s* x);
struct zx_gl_CreateItem_s* zx_gl_Create_POP_CreateItem(struct zx_gl_Create_s* x);
struct zx_gl_ItemSelection_s* zx_gl_Create_POP_ItemSelection(struct zx_gl_Create_s* x);
struct zx_gl_Extension_s* zx_gl_Create_POP_Extension(struct zx_gl_Create_s* x);

void zx_gl_Create_PUSH_ResourceID(struct zx_gl_Create_s* x, struct zx_gl_ResourceID_s* y);
void zx_gl_Create_PUSH_EncryptedResourceID(struct zx_gl_Create_s* x, struct zx_gl_EncryptedResourceID_s* y);
void zx_gl_Create_PUSH_Subscription(struct zx_gl_Create_s* x, struct zx_gl_Subscription_s* y);
void zx_gl_Create_PUSH_CreateItem(struct zx_gl_Create_s* x, struct zx_gl_CreateItem_s* y);
void zx_gl_Create_PUSH_ItemSelection(struct zx_gl_Create_s* x, struct zx_gl_ItemSelection_s* y);
void zx_gl_Create_PUSH_Extension(struct zx_gl_Create_s* x, struct zx_gl_Extension_s* y);

void zx_gl_Create_PUT_id(struct zx_gl_Create_s* x, struct zx_str* y);

void zx_gl_Create_PUT_ResourceID(struct zx_gl_Create_s* x, int n, struct zx_gl_ResourceID_s* y);
void zx_gl_Create_PUT_EncryptedResourceID(struct zx_gl_Create_s* x, int n, struct zx_gl_EncryptedResourceID_s* y);
void zx_gl_Create_PUT_Subscription(struct zx_gl_Create_s* x, int n, struct zx_gl_Subscription_s* y);
void zx_gl_Create_PUT_CreateItem(struct zx_gl_Create_s* x, int n, struct zx_gl_CreateItem_s* y);
void zx_gl_Create_PUT_ItemSelection(struct zx_gl_Create_s* x, int n, struct zx_gl_ItemSelection_s* y);
void zx_gl_Create_PUT_Extension(struct zx_gl_Create_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_Create_ADD_ResourceID(struct zx_gl_Create_s* x, int n, struct zx_gl_ResourceID_s* z);
void zx_gl_Create_ADD_EncryptedResourceID(struct zx_gl_Create_s* x, int n, struct zx_gl_EncryptedResourceID_s* z);
void zx_gl_Create_ADD_Subscription(struct zx_gl_Create_s* x, int n, struct zx_gl_Subscription_s* z);
void zx_gl_Create_ADD_CreateItem(struct zx_gl_Create_s* x, int n, struct zx_gl_CreateItem_s* z);
void zx_gl_Create_ADD_ItemSelection(struct zx_gl_Create_s* x, int n, struct zx_gl_ItemSelection_s* z);
void zx_gl_Create_ADD_Extension(struct zx_gl_Create_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_Create_DEL_ResourceID(struct zx_gl_Create_s* x, int n);
void zx_gl_Create_DEL_EncryptedResourceID(struct zx_gl_Create_s* x, int n);
void zx_gl_Create_DEL_Subscription(struct zx_gl_Create_s* x, int n);
void zx_gl_Create_DEL_CreateItem(struct zx_gl_Create_s* x, int n);
void zx_gl_Create_DEL_ItemSelection(struct zx_gl_Create_s* x, int n);
void zx_gl_Create_DEL_Extension(struct zx_gl_Create_s* x, int n);

void zx_gl_Create_REV_ResourceID(struct zx_gl_Create_s* x);
void zx_gl_Create_REV_EncryptedResourceID(struct zx_gl_Create_s* x);
void zx_gl_Create_REV_Subscription(struct zx_gl_Create_s* x);
void zx_gl_Create_REV_CreateItem(struct zx_gl_Create_s* x);
void zx_gl_Create_REV_ItemSelection(struct zx_gl_Create_s* x);
void zx_gl_Create_REV_Extension(struct zx_gl_Create_s* x);

#endif
/* -------------------------- gl_CreateItem -------------------------- */
/* refby( zx_gl_Create_s ) */
#ifndef zx_gl_CreateItem_EXT
#define zx_gl_CreateItem_EXT
#endif

struct zx_gl_CreateItem_s* zx_DEC_gl_CreateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_CreateItem_s* zx_NEW_gl_CreateItem(struct zx_ctx* c);
void zx_FREE_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_CreateItem_s* zx_DEEP_CLONE_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x, int dup_strs);
void zx_DUP_STRS_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x);
int zx_WALK_SO_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x);
int zx_LEN_WO_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x);
char* zx_ENC_SO_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x, char* p);
char* zx_ENC_WO_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_CreateItem(struct zx_ctx* c, struct zx_gl_CreateItem_s* x);

struct zx_gl_CreateItem_s {
  ZX_ELEM_EXT
  zx_gl_CreateItem_EXT
  struct zx_gl_NewData_s* NewData;	/* {0,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemID;	/* {0,1} attribute xs:string */
  struct zx_str* objectType;	/* {0,1} attribute xs:NCName */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_CreateItem_GET_id(struct zx_gl_CreateItem_s* x);
struct zx_str* zx_gl_CreateItem_GET_itemID(struct zx_gl_CreateItem_s* x);
struct zx_str* zx_gl_CreateItem_GET_objectType(struct zx_gl_CreateItem_s* x);

struct zx_gl_NewData_s* zx_gl_CreateItem_GET_NewData(struct zx_gl_CreateItem_s* x, int n);

int zx_gl_CreateItem_NUM_NewData(struct zx_gl_CreateItem_s* x);

struct zx_gl_NewData_s* zx_gl_CreateItem_POP_NewData(struct zx_gl_CreateItem_s* x);

void zx_gl_CreateItem_PUSH_NewData(struct zx_gl_CreateItem_s* x, struct zx_gl_NewData_s* y);

void zx_gl_CreateItem_PUT_id(struct zx_gl_CreateItem_s* x, struct zx_str* y);
void zx_gl_CreateItem_PUT_itemID(struct zx_gl_CreateItem_s* x, struct zx_str* y);
void zx_gl_CreateItem_PUT_objectType(struct zx_gl_CreateItem_s* x, struct zx_str* y);

void zx_gl_CreateItem_PUT_NewData(struct zx_gl_CreateItem_s* x, int n, struct zx_gl_NewData_s* y);

void zx_gl_CreateItem_ADD_NewData(struct zx_gl_CreateItem_s* x, int n, struct zx_gl_NewData_s* z);

void zx_gl_CreateItem_DEL_NewData(struct zx_gl_CreateItem_s* x, int n);

void zx_gl_CreateItem_REV_NewData(struct zx_gl_CreateItem_s* x);

#endif
/* -------------------------- gl_CreateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_CreateResponse_EXT
#define zx_gl_CreateResponse_EXT
#endif

struct zx_gl_CreateResponse_s* zx_DEC_gl_CreateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_CreateResponse_s* zx_NEW_gl_CreateResponse(struct zx_ctx* c);
void zx_FREE_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_CreateResponse_s* zx_DEEP_CLONE_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x, int dup_strs);
void zx_DUP_STRS_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x);
int zx_WALK_SO_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x);
int zx_LEN_WO_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x);
char* zx_ENC_SO_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x, char* p);
char* zx_ENC_WO_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_CreateResponse(struct zx_ctx* c, struct zx_gl_CreateResponse_s* x);

struct zx_gl_CreateResponse_s {
  ZX_ELEM_EXT
  zx_gl_CreateResponse_EXT
  struct zx_gl_Status_s* Status;	/* {1,1} nada */
  struct zx_gl_ItemData_s* ItemData;	/* {0,-1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_CreateResponse_GET_id(struct zx_gl_CreateResponse_s* x);
struct zx_str* zx_gl_CreateResponse_GET_timeStamp(struct zx_gl_CreateResponse_s* x);

struct zx_gl_Status_s* zx_gl_CreateResponse_GET_Status(struct zx_gl_CreateResponse_s* x, int n);
struct zx_gl_ItemData_s* zx_gl_CreateResponse_GET_ItemData(struct zx_gl_CreateResponse_s* x, int n);
struct zx_gl_Extension_s* zx_gl_CreateResponse_GET_Extension(struct zx_gl_CreateResponse_s* x, int n);

int zx_gl_CreateResponse_NUM_Status(struct zx_gl_CreateResponse_s* x);
int zx_gl_CreateResponse_NUM_ItemData(struct zx_gl_CreateResponse_s* x);
int zx_gl_CreateResponse_NUM_Extension(struct zx_gl_CreateResponse_s* x);

struct zx_gl_Status_s* zx_gl_CreateResponse_POP_Status(struct zx_gl_CreateResponse_s* x);
struct zx_gl_ItemData_s* zx_gl_CreateResponse_POP_ItemData(struct zx_gl_CreateResponse_s* x);
struct zx_gl_Extension_s* zx_gl_CreateResponse_POP_Extension(struct zx_gl_CreateResponse_s* x);

void zx_gl_CreateResponse_PUSH_Status(struct zx_gl_CreateResponse_s* x, struct zx_gl_Status_s* y);
void zx_gl_CreateResponse_PUSH_ItemData(struct zx_gl_CreateResponse_s* x, struct zx_gl_ItemData_s* y);
void zx_gl_CreateResponse_PUSH_Extension(struct zx_gl_CreateResponse_s* x, struct zx_gl_Extension_s* y);

void zx_gl_CreateResponse_PUT_id(struct zx_gl_CreateResponse_s* x, struct zx_str* y);
void zx_gl_CreateResponse_PUT_timeStamp(struct zx_gl_CreateResponse_s* x, struct zx_str* y);

void zx_gl_CreateResponse_PUT_Status(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_Status_s* y);
void zx_gl_CreateResponse_PUT_ItemData(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_ItemData_s* y);
void zx_gl_CreateResponse_PUT_Extension(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_CreateResponse_ADD_Status(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_Status_s* z);
void zx_gl_CreateResponse_ADD_ItemData(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_ItemData_s* z);
void zx_gl_CreateResponse_ADD_Extension(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_CreateResponse_DEL_Status(struct zx_gl_CreateResponse_s* x, int n);
void zx_gl_CreateResponse_DEL_ItemData(struct zx_gl_CreateResponse_s* x, int n);
void zx_gl_CreateResponse_DEL_Extension(struct zx_gl_CreateResponse_s* x, int n);

void zx_gl_CreateResponse_REV_Status(struct zx_gl_CreateResponse_s* x);
void zx_gl_CreateResponse_REV_ItemData(struct zx_gl_CreateResponse_s* x);
void zx_gl_CreateResponse_REV_Extension(struct zx_gl_CreateResponse_s* x);

#endif
/* -------------------------- gl_Credential -------------------------- */
/* refby( zx_gl_NotifyTo_s zx_gl_NotifyAdminTo_s ) */
#ifndef zx_gl_Credential_EXT
#define zx_gl_Credential_EXT
#endif

struct zx_gl_Credential_s* zx_DEC_gl_Credential(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Credential_s* zx_NEW_gl_Credential(struct zx_ctx* c);
void zx_FREE_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Credential_s* zx_DEEP_CLONE_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x, int dup_strs);
void zx_DUP_STRS_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x);
int zx_WALK_SO_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x);
int zx_LEN_WO_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x);
char* zx_ENC_SO_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x, char* p);
char* zx_ENC_WO_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Credential(struct zx_ctx* c, struct zx_gl_Credential_s* x);

struct zx_gl_Credential_s {
  ZX_ELEM_EXT
  zx_gl_Credential_EXT
  struct zx_sa_Assertion_s* Assertion;	/* {0,1} nada */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Credential_GET_notOnOrAfter(struct zx_gl_Credential_s* x);

struct zx_sa_Assertion_s* zx_gl_Credential_GET_Assertion(struct zx_gl_Credential_s* x, int n);

int zx_gl_Credential_NUM_Assertion(struct zx_gl_Credential_s* x);

struct zx_sa_Assertion_s* zx_gl_Credential_POP_Assertion(struct zx_gl_Credential_s* x);

void zx_gl_Credential_PUSH_Assertion(struct zx_gl_Credential_s* x, struct zx_sa_Assertion_s* y);

void zx_gl_Credential_PUT_notOnOrAfter(struct zx_gl_Credential_s* x, struct zx_str* y);

void zx_gl_Credential_PUT_Assertion(struct zx_gl_Credential_s* x, int n, struct zx_sa_Assertion_s* y);

void zx_gl_Credential_ADD_Assertion(struct zx_gl_Credential_s* x, int n, struct zx_sa_Assertion_s* z);

void zx_gl_Credential_DEL_Assertion(struct zx_gl_Credential_s* x, int n);

void zx_gl_Credential_REV_Assertion(struct zx_gl_Credential_s* x);

#endif
/* -------------------------- gl_Data -------------------------- */
/* refby( zx_gl_QueryResponse_s ) */
#ifndef zx_gl_Data_EXT
#define zx_gl_Data_EXT
#endif

struct zx_gl_Data_s* zx_DEC_gl_Data(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Data_s* zx_NEW_gl_Data(struct zx_ctx* c);
void zx_FREE_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Data_s* zx_DEEP_CLONE_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x, int dup_strs);
void zx_DUP_STRS_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x);
int zx_WALK_SO_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x);
int zx_LEN_WO_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x);
char* zx_ENC_SO_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x, char* p);
char* zx_ENC_WO_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Data(struct zx_ctx* c, struct zx_gl_Data_s* x);

struct zx_gl_Data_s {
  ZX_ELEM_EXT
  zx_gl_Data_EXT
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemIDRef;	/* {0,1} attribute xs:string */
  struct zx_str* notSorted;	/* {0,1} attribute Now */
  struct zx_str* remaining;	/* {0,1} attribute xs:integer */
  struct zx_str* nextOffset;	/* {0,1} attribute xs:nonNegativeInteger */
  struct zx_str* setID;	/* {0,1} attribute xs:string */
  struct zx_str* changeFormat;	/* {0,1} attribute ChangedElements */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Data_GET_id(struct zx_gl_Data_s* x);
struct zx_str* zx_gl_Data_GET_itemIDRef(struct zx_gl_Data_s* x);
struct zx_str* zx_gl_Data_GET_notSorted(struct zx_gl_Data_s* x);
struct zx_str* zx_gl_Data_GET_remaining(struct zx_gl_Data_s* x);
struct zx_str* zx_gl_Data_GET_nextOffset(struct zx_gl_Data_s* x);
struct zx_str* zx_gl_Data_GET_setID(struct zx_gl_Data_s* x);
struct zx_str* zx_gl_Data_GET_changeFormat(struct zx_gl_Data_s* x);





void zx_gl_Data_PUT_id(struct zx_gl_Data_s* x, struct zx_str* y);
void zx_gl_Data_PUT_itemIDRef(struct zx_gl_Data_s* x, struct zx_str* y);
void zx_gl_Data_PUT_notSorted(struct zx_gl_Data_s* x, struct zx_str* y);
void zx_gl_Data_PUT_remaining(struct zx_gl_Data_s* x, struct zx_str* y);
void zx_gl_Data_PUT_nextOffset(struct zx_gl_Data_s* x, struct zx_str* y);
void zx_gl_Data_PUT_setID(struct zx_gl_Data_s* x, struct zx_str* y);
void zx_gl_Data_PUT_changeFormat(struct zx_gl_Data_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_Delete -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_Delete_EXT
#define zx_gl_Delete_EXT
#endif

struct zx_gl_Delete_s* zx_DEC_gl_Delete(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Delete_s* zx_NEW_gl_Delete(struct zx_ctx* c);
void zx_FREE_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Delete_s* zx_DEEP_CLONE_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x, int dup_strs);
void zx_DUP_STRS_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x);
int zx_WALK_SO_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x);
int zx_LEN_WO_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x);
char* zx_ENC_SO_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x, char* p);
char* zx_ENC_WO_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Delete(struct zx_ctx* c, struct zx_gl_Delete_s* x);

struct zx_gl_Delete_s {
  ZX_ELEM_EXT
  zx_gl_Delete_EXT
  struct zx_gl_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_gl_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_gl_DeleteItem_s* DeleteItem;	/* {1,-1}  */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Delete_GET_id(struct zx_gl_Delete_s* x);

struct zx_gl_ResourceID_s* zx_gl_Delete_GET_ResourceID(struct zx_gl_Delete_s* x, int n);
struct zx_gl_EncryptedResourceID_s* zx_gl_Delete_GET_EncryptedResourceID(struct zx_gl_Delete_s* x, int n);
struct zx_gl_DeleteItem_s* zx_gl_Delete_GET_DeleteItem(struct zx_gl_Delete_s* x, int n);
struct zx_gl_Extension_s* zx_gl_Delete_GET_Extension(struct zx_gl_Delete_s* x, int n);

int zx_gl_Delete_NUM_ResourceID(struct zx_gl_Delete_s* x);
int zx_gl_Delete_NUM_EncryptedResourceID(struct zx_gl_Delete_s* x);
int zx_gl_Delete_NUM_DeleteItem(struct zx_gl_Delete_s* x);
int zx_gl_Delete_NUM_Extension(struct zx_gl_Delete_s* x);

struct zx_gl_ResourceID_s* zx_gl_Delete_POP_ResourceID(struct zx_gl_Delete_s* x);
struct zx_gl_EncryptedResourceID_s* zx_gl_Delete_POP_EncryptedResourceID(struct zx_gl_Delete_s* x);
struct zx_gl_DeleteItem_s* zx_gl_Delete_POP_DeleteItem(struct zx_gl_Delete_s* x);
struct zx_gl_Extension_s* zx_gl_Delete_POP_Extension(struct zx_gl_Delete_s* x);

void zx_gl_Delete_PUSH_ResourceID(struct zx_gl_Delete_s* x, struct zx_gl_ResourceID_s* y);
void zx_gl_Delete_PUSH_EncryptedResourceID(struct zx_gl_Delete_s* x, struct zx_gl_EncryptedResourceID_s* y);
void zx_gl_Delete_PUSH_DeleteItem(struct zx_gl_Delete_s* x, struct zx_gl_DeleteItem_s* y);
void zx_gl_Delete_PUSH_Extension(struct zx_gl_Delete_s* x, struct zx_gl_Extension_s* y);

void zx_gl_Delete_PUT_id(struct zx_gl_Delete_s* x, struct zx_str* y);

void zx_gl_Delete_PUT_ResourceID(struct zx_gl_Delete_s* x, int n, struct zx_gl_ResourceID_s* y);
void zx_gl_Delete_PUT_EncryptedResourceID(struct zx_gl_Delete_s* x, int n, struct zx_gl_EncryptedResourceID_s* y);
void zx_gl_Delete_PUT_DeleteItem(struct zx_gl_Delete_s* x, int n, struct zx_gl_DeleteItem_s* y);
void zx_gl_Delete_PUT_Extension(struct zx_gl_Delete_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_Delete_ADD_ResourceID(struct zx_gl_Delete_s* x, int n, struct zx_gl_ResourceID_s* z);
void zx_gl_Delete_ADD_EncryptedResourceID(struct zx_gl_Delete_s* x, int n, struct zx_gl_EncryptedResourceID_s* z);
void zx_gl_Delete_ADD_DeleteItem(struct zx_gl_Delete_s* x, int n, struct zx_gl_DeleteItem_s* z);
void zx_gl_Delete_ADD_Extension(struct zx_gl_Delete_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_Delete_DEL_ResourceID(struct zx_gl_Delete_s* x, int n);
void zx_gl_Delete_DEL_EncryptedResourceID(struct zx_gl_Delete_s* x, int n);
void zx_gl_Delete_DEL_DeleteItem(struct zx_gl_Delete_s* x, int n);
void zx_gl_Delete_DEL_Extension(struct zx_gl_Delete_s* x, int n);

void zx_gl_Delete_REV_ResourceID(struct zx_gl_Delete_s* x);
void zx_gl_Delete_REV_EncryptedResourceID(struct zx_gl_Delete_s* x);
void zx_gl_Delete_REV_DeleteItem(struct zx_gl_Delete_s* x);
void zx_gl_Delete_REV_Extension(struct zx_gl_Delete_s* x);

#endif
/* -------------------------- gl_DeleteItem -------------------------- */
/* refby( zx_gl_Delete_s ) */
#ifndef zx_gl_DeleteItem_EXT
#define zx_gl_DeleteItem_EXT
#endif

struct zx_gl_DeleteItem_s* zx_DEC_gl_DeleteItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_DeleteItem_s* zx_NEW_gl_DeleteItem(struct zx_ctx* c);
void zx_FREE_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_DeleteItem_s* zx_DEEP_CLONE_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x, int dup_strs);
void zx_DUP_STRS_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x);
int zx_WALK_SO_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x);
int zx_LEN_WO_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x);
char* zx_ENC_SO_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x, char* p);
char* zx_ENC_WO_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_DeleteItem(struct zx_ctx* c, struct zx_gl_DeleteItem_s* x);

struct zx_gl_DeleteItem_s {
  ZX_ELEM_EXT
  zx_gl_DeleteItem_EXT
  struct zx_elem_s* Select;	/* {0,1} SelectType */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemID;	/* {0,1} attribute xs:string */
  struct zx_str* notChangedSince;	/* {0,1} attribute xs:dateTime */
  struct zx_str* objectType;	/* {0,1} attribute xs:NCName */
  struct zx_str* predefined;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_DeleteItem_GET_id(struct zx_gl_DeleteItem_s* x);
struct zx_str* zx_gl_DeleteItem_GET_itemID(struct zx_gl_DeleteItem_s* x);
struct zx_str* zx_gl_DeleteItem_GET_notChangedSince(struct zx_gl_DeleteItem_s* x);
struct zx_str* zx_gl_DeleteItem_GET_objectType(struct zx_gl_DeleteItem_s* x);
struct zx_str* zx_gl_DeleteItem_GET_predefined(struct zx_gl_DeleteItem_s* x);

struct zx_elem_s* zx_gl_DeleteItem_GET_Select(struct zx_gl_DeleteItem_s* x, int n);

int zx_gl_DeleteItem_NUM_Select(struct zx_gl_DeleteItem_s* x);

struct zx_elem_s* zx_gl_DeleteItem_POP_Select(struct zx_gl_DeleteItem_s* x);

void zx_gl_DeleteItem_PUSH_Select(struct zx_gl_DeleteItem_s* x, struct zx_elem_s* y);

void zx_gl_DeleteItem_PUT_id(struct zx_gl_DeleteItem_s* x, struct zx_str* y);
void zx_gl_DeleteItem_PUT_itemID(struct zx_gl_DeleteItem_s* x, struct zx_str* y);
void zx_gl_DeleteItem_PUT_notChangedSince(struct zx_gl_DeleteItem_s* x, struct zx_str* y);
void zx_gl_DeleteItem_PUT_objectType(struct zx_gl_DeleteItem_s* x, struct zx_str* y);
void zx_gl_DeleteItem_PUT_predefined(struct zx_gl_DeleteItem_s* x, struct zx_str* y);

void zx_gl_DeleteItem_PUT_Select(struct zx_gl_DeleteItem_s* x, int n, struct zx_elem_s* y);

void zx_gl_DeleteItem_ADD_Select(struct zx_gl_DeleteItem_s* x, int n, struct zx_elem_s* z);

void zx_gl_DeleteItem_DEL_Select(struct zx_gl_DeleteItem_s* x, int n);

void zx_gl_DeleteItem_REV_Select(struct zx_gl_DeleteItem_s* x);

#endif
/* -------------------------- gl_DeleteResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_DeleteResponse_EXT
#define zx_gl_DeleteResponse_EXT
#endif

struct zx_gl_DeleteResponse_s* zx_DEC_gl_DeleteResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_DeleteResponse_s* zx_NEW_gl_DeleteResponse(struct zx_ctx* c);
void zx_FREE_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_DeleteResponse_s* zx_DEEP_CLONE_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x, int dup_strs);
void zx_DUP_STRS_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x);
int zx_WALK_SO_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x);
int zx_LEN_WO_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x);
char* zx_ENC_SO_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x, char* p);
char* zx_ENC_WO_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_DeleteResponse(struct zx_ctx* c, struct zx_gl_DeleteResponse_s* x);

struct zx_gl_DeleteResponse_s {
  ZX_ELEM_EXT
  zx_gl_DeleteResponse_EXT
  struct zx_gl_Status_s* Status;	/* {1,1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_DeleteResponse_GET_id(struct zx_gl_DeleteResponse_s* x);

struct zx_gl_Status_s* zx_gl_DeleteResponse_GET_Status(struct zx_gl_DeleteResponse_s* x, int n);
struct zx_gl_Extension_s* zx_gl_DeleteResponse_GET_Extension(struct zx_gl_DeleteResponse_s* x, int n);

int zx_gl_DeleteResponse_NUM_Status(struct zx_gl_DeleteResponse_s* x);
int zx_gl_DeleteResponse_NUM_Extension(struct zx_gl_DeleteResponse_s* x);

struct zx_gl_Status_s* zx_gl_DeleteResponse_POP_Status(struct zx_gl_DeleteResponse_s* x);
struct zx_gl_Extension_s* zx_gl_DeleteResponse_POP_Extension(struct zx_gl_DeleteResponse_s* x);

void zx_gl_DeleteResponse_PUSH_Status(struct zx_gl_DeleteResponse_s* x, struct zx_gl_Status_s* y);
void zx_gl_DeleteResponse_PUSH_Extension(struct zx_gl_DeleteResponse_s* x, struct zx_gl_Extension_s* y);

void zx_gl_DeleteResponse_PUT_id(struct zx_gl_DeleteResponse_s* x, struct zx_str* y);

void zx_gl_DeleteResponse_PUT_Status(struct zx_gl_DeleteResponse_s* x, int n, struct zx_gl_Status_s* y);
void zx_gl_DeleteResponse_PUT_Extension(struct zx_gl_DeleteResponse_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_DeleteResponse_ADD_Status(struct zx_gl_DeleteResponse_s* x, int n, struct zx_gl_Status_s* z);
void zx_gl_DeleteResponse_ADD_Extension(struct zx_gl_DeleteResponse_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_DeleteResponse_DEL_Status(struct zx_gl_DeleteResponse_s* x, int n);
void zx_gl_DeleteResponse_DEL_Extension(struct zx_gl_DeleteResponse_s* x, int n);

void zx_gl_DeleteResponse_REV_Status(struct zx_gl_DeleteResponse_s* x);
void zx_gl_DeleteResponse_REV_Extension(struct zx_gl_DeleteResponse_s* x);

#endif
/* -------------------------- gl_EllipticalArea -------------------------- */
/* refby( zx_gl_MultiPolygon_s zx_gl_shape_s ) */
#ifndef zx_gl_EllipticalArea_EXT
#define zx_gl_EllipticalArea_EXT
#endif

struct zx_gl_EllipticalArea_s* zx_DEC_gl_EllipticalArea(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_EllipticalArea_s* zx_NEW_gl_EllipticalArea(struct zx_ctx* c);
void zx_FREE_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_EllipticalArea_s* zx_DEEP_CLONE_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x, int dup_strs);
void zx_DUP_STRS_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x);
int zx_WALK_SO_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x);
int zx_LEN_WO_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x);
char* zx_ENC_SO_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x, char* p);
char* zx_ENC_WO_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_EllipticalArea(struct zx_ctx* c, struct zx_gl_EllipticalArea_s* x);

struct zx_gl_EllipticalArea_s {
  ZX_ELEM_EXT
  zx_gl_EllipticalArea_EXT
  struct zx_gl_coord_s* coord;	/* {1,1} nada */
  struct zx_elem_s* angle;	/* {1,1} xs:string */
  struct zx_elem_s* semiMajor;	/* {1,1} xs:string */
  struct zx_elem_s* semiMinor;	/* {1,1} xs:string */
  struct zx_elem_s* angularUnit;	/* {1,1} xs:string */
  struct zx_elem_s* distanceUnit;	/* {0,1} xs:string */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_EllipticalArea_GET_gid(struct zx_gl_EllipticalArea_s* x);
struct zx_str* zx_gl_EllipticalArea_GET_srsName(struct zx_gl_EllipticalArea_s* x);

struct zx_gl_coord_s* zx_gl_EllipticalArea_GET_coord(struct zx_gl_EllipticalArea_s* x, int n);
struct zx_elem_s* zx_gl_EllipticalArea_GET_angle(struct zx_gl_EllipticalArea_s* x, int n);
struct zx_elem_s* zx_gl_EllipticalArea_GET_semiMajor(struct zx_gl_EllipticalArea_s* x, int n);
struct zx_elem_s* zx_gl_EllipticalArea_GET_semiMinor(struct zx_gl_EllipticalArea_s* x, int n);
struct zx_elem_s* zx_gl_EllipticalArea_GET_angularUnit(struct zx_gl_EllipticalArea_s* x, int n);
struct zx_elem_s* zx_gl_EllipticalArea_GET_distanceUnit(struct zx_gl_EllipticalArea_s* x, int n);

int zx_gl_EllipticalArea_NUM_coord(struct zx_gl_EllipticalArea_s* x);
int zx_gl_EllipticalArea_NUM_angle(struct zx_gl_EllipticalArea_s* x);
int zx_gl_EllipticalArea_NUM_semiMajor(struct zx_gl_EllipticalArea_s* x);
int zx_gl_EllipticalArea_NUM_semiMinor(struct zx_gl_EllipticalArea_s* x);
int zx_gl_EllipticalArea_NUM_angularUnit(struct zx_gl_EllipticalArea_s* x);
int zx_gl_EllipticalArea_NUM_distanceUnit(struct zx_gl_EllipticalArea_s* x);

struct zx_gl_coord_s* zx_gl_EllipticalArea_POP_coord(struct zx_gl_EllipticalArea_s* x);
struct zx_elem_s* zx_gl_EllipticalArea_POP_angle(struct zx_gl_EllipticalArea_s* x);
struct zx_elem_s* zx_gl_EllipticalArea_POP_semiMajor(struct zx_gl_EllipticalArea_s* x);
struct zx_elem_s* zx_gl_EllipticalArea_POP_semiMinor(struct zx_gl_EllipticalArea_s* x);
struct zx_elem_s* zx_gl_EllipticalArea_POP_angularUnit(struct zx_gl_EllipticalArea_s* x);
struct zx_elem_s* zx_gl_EllipticalArea_POP_distanceUnit(struct zx_gl_EllipticalArea_s* x);

void zx_gl_EllipticalArea_PUSH_coord(struct zx_gl_EllipticalArea_s* x, struct zx_gl_coord_s* y);
void zx_gl_EllipticalArea_PUSH_angle(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* y);
void zx_gl_EllipticalArea_PUSH_semiMajor(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* y);
void zx_gl_EllipticalArea_PUSH_semiMinor(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* y);
void zx_gl_EllipticalArea_PUSH_angularUnit(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* y);
void zx_gl_EllipticalArea_PUSH_distanceUnit(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* y);

void zx_gl_EllipticalArea_PUT_gid(struct zx_gl_EllipticalArea_s* x, struct zx_str* y);
void zx_gl_EllipticalArea_PUT_srsName(struct zx_gl_EllipticalArea_s* x, struct zx_str* y);

void zx_gl_EllipticalArea_PUT_coord(struct zx_gl_EllipticalArea_s* x, int n, struct zx_gl_coord_s* y);
void zx_gl_EllipticalArea_PUT_angle(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_EllipticalArea_PUT_semiMajor(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_EllipticalArea_PUT_semiMinor(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_EllipticalArea_PUT_angularUnit(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* y);
void zx_gl_EllipticalArea_PUT_distanceUnit(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* y);

void zx_gl_EllipticalArea_ADD_coord(struct zx_gl_EllipticalArea_s* x, int n, struct zx_gl_coord_s* z);
void zx_gl_EllipticalArea_ADD_angle(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_EllipticalArea_ADD_semiMajor(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_EllipticalArea_ADD_semiMinor(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_EllipticalArea_ADD_angularUnit(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z);
void zx_gl_EllipticalArea_ADD_distanceUnit(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z);

void zx_gl_EllipticalArea_DEL_coord(struct zx_gl_EllipticalArea_s* x, int n);
void zx_gl_EllipticalArea_DEL_angle(struct zx_gl_EllipticalArea_s* x, int n);
void zx_gl_EllipticalArea_DEL_semiMajor(struct zx_gl_EllipticalArea_s* x, int n);
void zx_gl_EllipticalArea_DEL_semiMinor(struct zx_gl_EllipticalArea_s* x, int n);
void zx_gl_EllipticalArea_DEL_angularUnit(struct zx_gl_EllipticalArea_s* x, int n);
void zx_gl_EllipticalArea_DEL_distanceUnit(struct zx_gl_EllipticalArea_s* x, int n);

void zx_gl_EllipticalArea_REV_coord(struct zx_gl_EllipticalArea_s* x);
void zx_gl_EllipticalArea_REV_angle(struct zx_gl_EllipticalArea_s* x);
void zx_gl_EllipticalArea_REV_semiMajor(struct zx_gl_EllipticalArea_s* x);
void zx_gl_EllipticalArea_REV_semiMinor(struct zx_gl_EllipticalArea_s* x);
void zx_gl_EllipticalArea_REV_angularUnit(struct zx_gl_EllipticalArea_s* x);
void zx_gl_EllipticalArea_REV_distanceUnit(struct zx_gl_EllipticalArea_s* x);

#endif
/* -------------------------- gl_EncryptedResourceID -------------------------- */
/* refby( zx_gl_Modify_s zx_gl_Delete_s zx_gl_Create_s zx_gl_Query_s ) */
#ifndef zx_gl_EncryptedResourceID_EXT
#define zx_gl_EncryptedResourceID_EXT
#endif

struct zx_gl_EncryptedResourceID_s* zx_DEC_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_EncryptedResourceID_s* zx_NEW_gl_EncryptedResourceID(struct zx_ctx* c);
void zx_FREE_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_EncryptedResourceID_s* zx_DEEP_CLONE_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x, int dup_strs);
void zx_DUP_STRS_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x);
int zx_WALK_SO_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x);
int zx_LEN_WO_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x);
char* zx_ENC_SO_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x, char* p);
char* zx_ENC_WO_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_EncryptedResourceID(struct zx_ctx* c, struct zx_gl_EncryptedResourceID_s* x);

struct zx_gl_EncryptedResourceID_s {
  ZX_ELEM_EXT
  zx_gl_EncryptedResourceID_EXT
  struct zx_xenc_EncryptedData_s* EncryptedData;	/* {1,1} nada */
  struct zx_xenc_EncryptedKey_s* EncryptedKey;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xenc_EncryptedData_s* zx_gl_EncryptedResourceID_GET_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, int n);
struct zx_xenc_EncryptedKey_s* zx_gl_EncryptedResourceID_GET_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, int n);

int zx_gl_EncryptedResourceID_NUM_EncryptedData(struct zx_gl_EncryptedResourceID_s* x);
int zx_gl_EncryptedResourceID_NUM_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x);

struct zx_xenc_EncryptedData_s* zx_gl_EncryptedResourceID_POP_EncryptedData(struct zx_gl_EncryptedResourceID_s* x);
struct zx_xenc_EncryptedKey_s* zx_gl_EncryptedResourceID_POP_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x);

void zx_gl_EncryptedResourceID_PUSH_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, struct zx_xenc_EncryptedData_s* y);
void zx_gl_EncryptedResourceID_PUSH_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, struct zx_xenc_EncryptedKey_s* y);


void zx_gl_EncryptedResourceID_PUT_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* y);
void zx_gl_EncryptedResourceID_PUT_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* y);

void zx_gl_EncryptedResourceID_ADD_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z);
void zx_gl_EncryptedResourceID_ADD_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z);

void zx_gl_EncryptedResourceID_DEL_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, int n);
void zx_gl_EncryptedResourceID_DEL_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, int n);

void zx_gl_EncryptedResourceID_REV_EncryptedData(struct zx_gl_EncryptedResourceID_s* x);
void zx_gl_EncryptedResourceID_REV_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x);

#endif
/* -------------------------- gl_Extension -------------------------- */
/* refby( zx_gl_AreaComparison_s zx_gl_QueryResponse_s zx_gl_QueryItem_s zx_gl_ItemSelection_s zx_gl_Modify_s zx_gl_eqop_s zx_gl_CreateResponse_s zx_gl_Delete_s zx_gl_CivilData_s zx_gl_Trigger_s zx_gl_NotifyResponse_s zx_gl_Subscription_s zx_gl_shape_s zx_gl_Create_s zx_gl_geoinfo_s zx_gl_Notify_s zx_gl_pd_s zx_gl_ModifyResponse_s zx_gl_ChangeArea_s zx_gl_Query_s zx_gl_DeleteResponse_s ) */
#ifndef zx_gl_Extension_EXT
#define zx_gl_Extension_EXT
#endif

struct zx_gl_Extension_s* zx_DEC_gl_Extension(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Extension_s* zx_NEW_gl_Extension(struct zx_ctx* c);
void zx_FREE_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Extension_s* zx_DEEP_CLONE_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x, int dup_strs);
void zx_DUP_STRS_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x);
int zx_WALK_SO_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x);
int zx_LEN_WO_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x);
char* zx_ENC_SO_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x, char* p);
char* zx_ENC_WO_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Extension(struct zx_ctx* c, struct zx_gl_Extension_s* x);

struct zx_gl_Extension_s {
  ZX_ELEM_EXT
  zx_gl_Extension_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- gl_GeometryCollection -------------------------- */
/* refby( zx_gl_shape_s ) */
#ifndef zx_gl_GeometryCollection_EXT
#define zx_gl_GeometryCollection_EXT
#endif

struct zx_gl_GeometryCollection_s* zx_DEC_gl_GeometryCollection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_GeometryCollection_s* zx_NEW_gl_GeometryCollection(struct zx_ctx* c);
void zx_FREE_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_GeometryCollection_s* zx_DEEP_CLONE_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x, int dup_strs);
void zx_DUP_STRS_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x);
int zx_WALK_SO_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x);
int zx_LEN_WO_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x);
char* zx_ENC_SO_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x, char* p);
char* zx_ENC_WO_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_GeometryCollection(struct zx_ctx* c, struct zx_gl_GeometryCollection_s* x);

struct zx_gl_GeometryCollection_s {
  ZX_ELEM_EXT
  zx_gl_GeometryCollection_EXT
  struct zx_gl_shape_s* shape;	/* {1,-1} nada */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_GeometryCollection_GET_gid(struct zx_gl_GeometryCollection_s* x);
struct zx_str* zx_gl_GeometryCollection_GET_srsName(struct zx_gl_GeometryCollection_s* x);

struct zx_gl_shape_s* zx_gl_GeometryCollection_GET_shape(struct zx_gl_GeometryCollection_s* x, int n);

int zx_gl_GeometryCollection_NUM_shape(struct zx_gl_GeometryCollection_s* x);

struct zx_gl_shape_s* zx_gl_GeometryCollection_POP_shape(struct zx_gl_GeometryCollection_s* x);

void zx_gl_GeometryCollection_PUSH_shape(struct zx_gl_GeometryCollection_s* x, struct zx_gl_shape_s* y);

void zx_gl_GeometryCollection_PUT_gid(struct zx_gl_GeometryCollection_s* x, struct zx_str* y);
void zx_gl_GeometryCollection_PUT_srsName(struct zx_gl_GeometryCollection_s* x, struct zx_str* y);

void zx_gl_GeometryCollection_PUT_shape(struct zx_gl_GeometryCollection_s* x, int n, struct zx_gl_shape_s* y);

void zx_gl_GeometryCollection_ADD_shape(struct zx_gl_GeometryCollection_s* x, int n, struct zx_gl_shape_s* z);

void zx_gl_GeometryCollection_DEL_shape(struct zx_gl_GeometryCollection_s* x, int n);

void zx_gl_GeometryCollection_REV_shape(struct zx_gl_GeometryCollection_s* x);

#endif
/* -------------------------- gl_Identifier -------------------------- */
/* refby( zx_gl_CoordinateReferenceSystem_s ) */
#ifndef zx_gl_Identifier_EXT
#define zx_gl_Identifier_EXT
#endif

struct zx_gl_Identifier_s* zx_DEC_gl_Identifier(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Identifier_s* zx_NEW_gl_Identifier(struct zx_ctx* c);
void zx_FREE_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Identifier_s* zx_DEEP_CLONE_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x, int dup_strs);
void zx_DUP_STRS_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x);
int zx_WALK_SO_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x);
int zx_LEN_WO_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x);
char* zx_ENC_SO_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x, char* p);
char* zx_ENC_WO_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Identifier(struct zx_ctx* c, struct zx_gl_Identifier_s* x);

struct zx_gl_Identifier_s {
  ZX_ELEM_EXT
  zx_gl_Identifier_EXT
  struct zx_elem_s* code;	/* {1,1} xs:string */
  struct zx_elem_s* codeSpace;	/* {1,1} xs:string */
  struct zx_elem_s* edition;	/* {1,1} xs:string */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_gl_Identifier_GET_code(struct zx_gl_Identifier_s* x, int n);
struct zx_elem_s* zx_gl_Identifier_GET_codeSpace(struct zx_gl_Identifier_s* x, int n);
struct zx_elem_s* zx_gl_Identifier_GET_edition(struct zx_gl_Identifier_s* x, int n);

int zx_gl_Identifier_NUM_code(struct zx_gl_Identifier_s* x);
int zx_gl_Identifier_NUM_codeSpace(struct zx_gl_Identifier_s* x);
int zx_gl_Identifier_NUM_edition(struct zx_gl_Identifier_s* x);

struct zx_elem_s* zx_gl_Identifier_POP_code(struct zx_gl_Identifier_s* x);
struct zx_elem_s* zx_gl_Identifier_POP_codeSpace(struct zx_gl_Identifier_s* x);
struct zx_elem_s* zx_gl_Identifier_POP_edition(struct zx_gl_Identifier_s* x);

void zx_gl_Identifier_PUSH_code(struct zx_gl_Identifier_s* x, struct zx_elem_s* y);
void zx_gl_Identifier_PUSH_codeSpace(struct zx_gl_Identifier_s* x, struct zx_elem_s* y);
void zx_gl_Identifier_PUSH_edition(struct zx_gl_Identifier_s* x, struct zx_elem_s* y);


void zx_gl_Identifier_PUT_code(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* y);
void zx_gl_Identifier_PUT_codeSpace(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* y);
void zx_gl_Identifier_PUT_edition(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* y);

void zx_gl_Identifier_ADD_code(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z);
void zx_gl_Identifier_ADD_codeSpace(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z);
void zx_gl_Identifier_ADD_edition(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z);

void zx_gl_Identifier_DEL_code(struct zx_gl_Identifier_s* x, int n);
void zx_gl_Identifier_DEL_codeSpace(struct zx_gl_Identifier_s* x, int n);
void zx_gl_Identifier_DEL_edition(struct zx_gl_Identifier_s* x, int n);

void zx_gl_Identifier_REV_code(struct zx_gl_Identifier_s* x);
void zx_gl_Identifier_REV_codeSpace(struct zx_gl_Identifier_s* x);
void zx_gl_Identifier_REV_edition(struct zx_gl_Identifier_s* x);

#endif
/* -------------------------- gl_ItemData -------------------------- */
/* refby( zx_gl_CreateResponse_s zx_gl_ModifyResponse_s zx_gl_Notification_s ) */
#ifndef zx_gl_ItemData_EXT
#define zx_gl_ItemData_EXT
#endif

struct zx_gl_ItemData_s* zx_DEC_gl_ItemData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_ItemData_s* zx_NEW_gl_ItemData(struct zx_ctx* c);
void zx_FREE_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_ItemData_s* zx_DEEP_CLONE_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x, int dup_strs);
void zx_DUP_STRS_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x);
int zx_WALK_SO_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x);
int zx_LEN_WO_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x);
char* zx_ENC_SO_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x, char* p);
char* zx_ENC_WO_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_ItemData(struct zx_ctx* c, struct zx_gl_ItemData_s* x);

struct zx_gl_ItemData_s {
  ZX_ELEM_EXT
  zx_gl_ItemData_EXT
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemIDRef;	/* {0,1} attribute xs:string */
  struct zx_str* notSorted;	/* {0,1} attribute Now */
  struct zx_str* changeFormat;	/* {0,1} attribute ChangedElements */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_ItemData_GET_id(struct zx_gl_ItemData_s* x);
struct zx_str* zx_gl_ItemData_GET_itemIDRef(struct zx_gl_ItemData_s* x);
struct zx_str* zx_gl_ItemData_GET_notSorted(struct zx_gl_ItemData_s* x);
struct zx_str* zx_gl_ItemData_GET_changeFormat(struct zx_gl_ItemData_s* x);





void zx_gl_ItemData_PUT_id(struct zx_gl_ItemData_s* x, struct zx_str* y);
void zx_gl_ItemData_PUT_itemIDRef(struct zx_gl_ItemData_s* x, struct zx_str* y);
void zx_gl_ItemData_PUT_notSorted(struct zx_gl_ItemData_s* x, struct zx_str* y);
void zx_gl_ItemData_PUT_changeFormat(struct zx_gl_ItemData_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_ItemSelection -------------------------- */
/* refby( zx_gl_Modify_s zx_gl_Subscription_s zx_gl_Create_s ) */
#ifndef zx_gl_ItemSelection_EXT
#define zx_gl_ItemSelection_EXT
#endif

struct zx_gl_ItemSelection_s* zx_DEC_gl_ItemSelection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_ItemSelection_s* zx_NEW_gl_ItemSelection(struct zx_ctx* c);
void zx_FREE_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_ItemSelection_s* zx_DEEP_CLONE_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x, int dup_strs);
void zx_DUP_STRS_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x);
int zx_WALK_SO_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x);
int zx_LEN_WO_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x);
char* zx_ENC_SO_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x, char* p);
char* zx_ENC_WO_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_ItemSelection(struct zx_ctx* c, struct zx_gl_ItemSelection_s* x);

struct zx_gl_ItemSelection_s {
  ZX_ELEM_EXT
  zx_gl_ItemSelection_EXT
  struct zx_gl_AreaComparison_s* AreaComparison;	/* {0,-1}  */
  struct zx_gl_eqop_s* eqop;	/* {0,1}  */
  struct zx_gl_geoinfo_s* geoinfo;	/* {0,1}  */
  struct zx_gl_loc_type_s* loc_type;	/* {0,1}  */
  struct zx_gl_prio_s* prio;	/* {0,1}  */
  struct zx_gl_Extension_s* Extension;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_gl_AreaComparison_s* zx_gl_ItemSelection_GET_AreaComparison(struct zx_gl_ItemSelection_s* x, int n);
struct zx_gl_eqop_s* zx_gl_ItemSelection_GET_eqop(struct zx_gl_ItemSelection_s* x, int n);
struct zx_gl_geoinfo_s* zx_gl_ItemSelection_GET_geoinfo(struct zx_gl_ItemSelection_s* x, int n);
struct zx_gl_loc_type_s* zx_gl_ItemSelection_GET_loc_type(struct zx_gl_ItemSelection_s* x, int n);
struct zx_gl_prio_s* zx_gl_ItemSelection_GET_prio(struct zx_gl_ItemSelection_s* x, int n);
struct zx_gl_Extension_s* zx_gl_ItemSelection_GET_Extension(struct zx_gl_ItemSelection_s* x, int n);

int zx_gl_ItemSelection_NUM_AreaComparison(struct zx_gl_ItemSelection_s* x);
int zx_gl_ItemSelection_NUM_eqop(struct zx_gl_ItemSelection_s* x);
int zx_gl_ItemSelection_NUM_geoinfo(struct zx_gl_ItemSelection_s* x);
int zx_gl_ItemSelection_NUM_loc_type(struct zx_gl_ItemSelection_s* x);
int zx_gl_ItemSelection_NUM_prio(struct zx_gl_ItemSelection_s* x);
int zx_gl_ItemSelection_NUM_Extension(struct zx_gl_ItemSelection_s* x);

struct zx_gl_AreaComparison_s* zx_gl_ItemSelection_POP_AreaComparison(struct zx_gl_ItemSelection_s* x);
struct zx_gl_eqop_s* zx_gl_ItemSelection_POP_eqop(struct zx_gl_ItemSelection_s* x);
struct zx_gl_geoinfo_s* zx_gl_ItemSelection_POP_geoinfo(struct zx_gl_ItemSelection_s* x);
struct zx_gl_loc_type_s* zx_gl_ItemSelection_POP_loc_type(struct zx_gl_ItemSelection_s* x);
struct zx_gl_prio_s* zx_gl_ItemSelection_POP_prio(struct zx_gl_ItemSelection_s* x);
struct zx_gl_Extension_s* zx_gl_ItemSelection_POP_Extension(struct zx_gl_ItemSelection_s* x);

void zx_gl_ItemSelection_PUSH_AreaComparison(struct zx_gl_ItemSelection_s* x, struct zx_gl_AreaComparison_s* y);
void zx_gl_ItemSelection_PUSH_eqop(struct zx_gl_ItemSelection_s* x, struct zx_gl_eqop_s* y);
void zx_gl_ItemSelection_PUSH_geoinfo(struct zx_gl_ItemSelection_s* x, struct zx_gl_geoinfo_s* y);
void zx_gl_ItemSelection_PUSH_loc_type(struct zx_gl_ItemSelection_s* x, struct zx_gl_loc_type_s* y);
void zx_gl_ItemSelection_PUSH_prio(struct zx_gl_ItemSelection_s* x, struct zx_gl_prio_s* y);
void zx_gl_ItemSelection_PUSH_Extension(struct zx_gl_ItemSelection_s* x, struct zx_gl_Extension_s* y);


void zx_gl_ItemSelection_PUT_AreaComparison(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_AreaComparison_s* y);
void zx_gl_ItemSelection_PUT_eqop(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_eqop_s* y);
void zx_gl_ItemSelection_PUT_geoinfo(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_geoinfo_s* y);
void zx_gl_ItemSelection_PUT_loc_type(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_loc_type_s* y);
void zx_gl_ItemSelection_PUT_prio(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_prio_s* y);
void zx_gl_ItemSelection_PUT_Extension(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_ItemSelection_ADD_AreaComparison(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_AreaComparison_s* z);
void zx_gl_ItemSelection_ADD_eqop(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_eqop_s* z);
void zx_gl_ItemSelection_ADD_geoinfo(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_geoinfo_s* z);
void zx_gl_ItemSelection_ADD_loc_type(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_loc_type_s* z);
void zx_gl_ItemSelection_ADD_prio(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_prio_s* z);
void zx_gl_ItemSelection_ADD_Extension(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_ItemSelection_DEL_AreaComparison(struct zx_gl_ItemSelection_s* x, int n);
void zx_gl_ItemSelection_DEL_eqop(struct zx_gl_ItemSelection_s* x, int n);
void zx_gl_ItemSelection_DEL_geoinfo(struct zx_gl_ItemSelection_s* x, int n);
void zx_gl_ItemSelection_DEL_loc_type(struct zx_gl_ItemSelection_s* x, int n);
void zx_gl_ItemSelection_DEL_prio(struct zx_gl_ItemSelection_s* x, int n);
void zx_gl_ItemSelection_DEL_Extension(struct zx_gl_ItemSelection_s* x, int n);

void zx_gl_ItemSelection_REV_AreaComparison(struct zx_gl_ItemSelection_s* x);
void zx_gl_ItemSelection_REV_eqop(struct zx_gl_ItemSelection_s* x);
void zx_gl_ItemSelection_REV_geoinfo(struct zx_gl_ItemSelection_s* x);
void zx_gl_ItemSelection_REV_loc_type(struct zx_gl_ItemSelection_s* x);
void zx_gl_ItemSelection_REV_prio(struct zx_gl_ItemSelection_s* x);
void zx_gl_ItemSelection_REV_Extension(struct zx_gl_ItemSelection_s* x);

#endif
/* -------------------------- gl_LL -------------------------- */
/* refby( zx_gl_CivilData_s ) */
#ifndef zx_gl_LL_EXT
#define zx_gl_LL_EXT
#endif

struct zx_gl_LL_s* zx_DEC_gl_LL(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_LL_s* zx_NEW_gl_LL(struct zx_ctx* c);
void zx_FREE_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_LL_s* zx_DEEP_CLONE_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x, int dup_strs);
void zx_DUP_STRS_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x);
int zx_WALK_SO_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x);
int zx_LEN_WO_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x);
char* zx_ENC_SO_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x, char* p);
char* zx_ENC_WO_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_LL(struct zx_ctx* c, struct zx_gl_LL_s* x);

struct zx_gl_LL_s {
  ZX_ELEM_EXT
  zx_gl_LL_EXT
  struct zx_str* script;	/* {0,1} attribute xs:anyURI */
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_LL_GET_script(struct zx_gl_LL_s* x);
struct zx_str* zx_gl_LL_GET_lang(struct zx_gl_LL_s* x);





void zx_gl_LL_PUT_script(struct zx_gl_LL_s* x, struct zx_str* y);
void zx_gl_LL_PUT_lang(struct zx_gl_LL_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_LPostalAddress -------------------------- */
/* refby( zx_gl_CivilData_s ) */
#ifndef zx_gl_LPostalAddress_EXT
#define zx_gl_LPostalAddress_EXT
#endif

struct zx_gl_LPostalAddress_s* zx_DEC_gl_LPostalAddress(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_LPostalAddress_s* zx_NEW_gl_LPostalAddress(struct zx_ctx* c);
void zx_FREE_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_LPostalAddress_s* zx_DEEP_CLONE_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x, int dup_strs);
void zx_DUP_STRS_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x);
int zx_WALK_SO_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x);
int zx_LEN_WO_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x);
char* zx_ENC_SO_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x, char* p);
char* zx_ENC_WO_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_LPostalAddress(struct zx_ctx* c, struct zx_gl_LPostalAddress_s* x);

struct zx_gl_LPostalAddress_s {
  ZX_ELEM_EXT
  zx_gl_LPostalAddress_EXT
  struct zx_str* script;	/* {0,1} attribute xs:anyURI */
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_LPostalAddress_GET_script(struct zx_gl_LPostalAddress_s* x);
struct zx_str* zx_gl_LPostalAddress_GET_lang(struct zx_gl_LPostalAddress_s* x);





void zx_gl_LPostalAddress_PUT_script(struct zx_gl_LPostalAddress_s* x, struct zx_str* y);
void zx_gl_LPostalAddress_PUT_lang(struct zx_gl_LPostalAddress_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_LSt -------------------------- */
/* refby( zx_gl_CivilData_s ) */
#ifndef zx_gl_LSt_EXT
#define zx_gl_LSt_EXT
#endif

struct zx_gl_LSt_s* zx_DEC_gl_LSt(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_LSt_s* zx_NEW_gl_LSt(struct zx_ctx* c);
void zx_FREE_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_LSt_s* zx_DEEP_CLONE_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x, int dup_strs);
void zx_DUP_STRS_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x);
int zx_WALK_SO_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x);
int zx_LEN_WO_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x);
char* zx_ENC_SO_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x, char* p);
char* zx_ENC_WO_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_LSt(struct zx_ctx* c, struct zx_gl_LSt_s* x);

struct zx_gl_LSt_s {
  ZX_ELEM_EXT
  zx_gl_LSt_EXT
  struct zx_str* script;	/* {0,1} attribute xs:anyURI */
  struct zx_str* lang;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_LSt_GET_script(struct zx_gl_LSt_s* x);
struct zx_str* zx_gl_LSt_GET_lang(struct zx_gl_LSt_s* x);





void zx_gl_LSt_PUT_script(struct zx_gl_LSt_s* x, struct zx_str* y);
void zx_gl_LSt_PUT_lang(struct zx_gl_LSt_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_LineString -------------------------- */
/* refby( zx_gl_shape_s zx_gl_MultiLineString_s ) */
#ifndef zx_gl_LineString_EXT
#define zx_gl_LineString_EXT
#endif

struct zx_gl_LineString_s* zx_DEC_gl_LineString(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_LineString_s* zx_NEW_gl_LineString(struct zx_ctx* c);
void zx_FREE_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_LineString_s* zx_DEEP_CLONE_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x, int dup_strs);
void zx_DUP_STRS_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x);
int zx_WALK_SO_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x);
int zx_LEN_WO_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x);
char* zx_ENC_SO_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x, char* p);
char* zx_ENC_WO_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_LineString(struct zx_ctx* c, struct zx_gl_LineString_s* x);

struct zx_gl_LineString_s {
  ZX_ELEM_EXT
  zx_gl_LineString_EXT
  struct zx_gl_coord_s* coord;	/* {1,-1} nada */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_LineString_GET_gid(struct zx_gl_LineString_s* x);
struct zx_str* zx_gl_LineString_GET_srsName(struct zx_gl_LineString_s* x);

struct zx_gl_coord_s* zx_gl_LineString_GET_coord(struct zx_gl_LineString_s* x, int n);

int zx_gl_LineString_NUM_coord(struct zx_gl_LineString_s* x);

struct zx_gl_coord_s* zx_gl_LineString_POP_coord(struct zx_gl_LineString_s* x);

void zx_gl_LineString_PUSH_coord(struct zx_gl_LineString_s* x, struct zx_gl_coord_s* y);

void zx_gl_LineString_PUT_gid(struct zx_gl_LineString_s* x, struct zx_str* y);
void zx_gl_LineString_PUT_srsName(struct zx_gl_LineString_s* x, struct zx_str* y);

void zx_gl_LineString_PUT_coord(struct zx_gl_LineString_s* x, int n, struct zx_gl_coord_s* y);

void zx_gl_LineString_ADD_coord(struct zx_gl_LineString_s* x, int n, struct zx_gl_coord_s* z);

void zx_gl_LineString_DEL_coord(struct zx_gl_LineString_s* x, int n);

void zx_gl_LineString_REV_coord(struct zx_gl_LineString_s* x);

#endif
/* -------------------------- gl_LinearRing -------------------------- */
/* refby( zx_gl_outerBoundaryIs_s zx_gl_innerBoundaryIs_s ) */
#ifndef zx_gl_LinearRing_EXT
#define zx_gl_LinearRing_EXT
#endif

struct zx_gl_LinearRing_s* zx_DEC_gl_LinearRing(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_LinearRing_s* zx_NEW_gl_LinearRing(struct zx_ctx* c);
void zx_FREE_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_LinearRing_s* zx_DEEP_CLONE_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x, int dup_strs);
void zx_DUP_STRS_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x);
int zx_WALK_SO_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x);
int zx_LEN_WO_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x);
char* zx_ENC_SO_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x, char* p);
char* zx_ENC_WO_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_LinearRing(struct zx_ctx* c, struct zx_gl_LinearRing_s* x);

struct zx_gl_LinearRing_s {
  ZX_ELEM_EXT
  zx_gl_LinearRing_EXT
  struct zx_gl_coord_s* coord;	/* {3,unbounded} nada */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_LinearRing_GET_gid(struct zx_gl_LinearRing_s* x);
struct zx_str* zx_gl_LinearRing_GET_srsName(struct zx_gl_LinearRing_s* x);

struct zx_gl_coord_s* zx_gl_LinearRing_GET_coord(struct zx_gl_LinearRing_s* x, int n);

int zx_gl_LinearRing_NUM_coord(struct zx_gl_LinearRing_s* x);

struct zx_gl_coord_s* zx_gl_LinearRing_POP_coord(struct zx_gl_LinearRing_s* x);

void zx_gl_LinearRing_PUSH_coord(struct zx_gl_LinearRing_s* x, struct zx_gl_coord_s* y);

void zx_gl_LinearRing_PUT_gid(struct zx_gl_LinearRing_s* x, struct zx_str* y);
void zx_gl_LinearRing_PUT_srsName(struct zx_gl_LinearRing_s* x, struct zx_str* y);

void zx_gl_LinearRing_PUT_coord(struct zx_gl_LinearRing_s* x, int n, struct zx_gl_coord_s* y);

void zx_gl_LinearRing_ADD_coord(struct zx_gl_LinearRing_s* x, int n, struct zx_gl_coord_s* z);

void zx_gl_LinearRing_DEL_coord(struct zx_gl_LinearRing_s* x, int n);

void zx_gl_LinearRing_REV_coord(struct zx_gl_LinearRing_s* x);

#endif
/* -------------------------- gl_Modification -------------------------- */
/* refby( zx_gl_Modify_s ) */
#ifndef zx_gl_Modification_EXT
#define zx_gl_Modification_EXT
#endif

struct zx_gl_Modification_s* zx_DEC_gl_Modification(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Modification_s* zx_NEW_gl_Modification(struct zx_ctx* c);
void zx_FREE_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Modification_s* zx_DEEP_CLONE_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x, int dup_strs);
void zx_DUP_STRS_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x);
int zx_WALK_SO_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x);
int zx_LEN_WO_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x);
char* zx_ENC_SO_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x, char* p);
char* zx_ENC_WO_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Modification(struct zx_ctx* c, struct zx_gl_Modification_s* x);

struct zx_gl_Modification_s {
  ZX_ELEM_EXT
  zx_gl_Modification_EXT
  struct zx_elem_s* Select;	/* {0,1} SelectType */
  struct zx_gl_NewData_s* NewData;	/* {0,1}  */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemID;	/* {0,1} attribute xs:string */
  struct zx_str* notChangedSince;	/* {0,1} attribute xs:dateTime */
  struct zx_str* objectType;	/* {0,1} attribute xs:NCName */
  struct zx_str* overrideAllowed;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Modification_GET_id(struct zx_gl_Modification_s* x);
struct zx_str* zx_gl_Modification_GET_itemID(struct zx_gl_Modification_s* x);
struct zx_str* zx_gl_Modification_GET_notChangedSince(struct zx_gl_Modification_s* x);
struct zx_str* zx_gl_Modification_GET_objectType(struct zx_gl_Modification_s* x);
struct zx_str* zx_gl_Modification_GET_overrideAllowed(struct zx_gl_Modification_s* x);

struct zx_elem_s* zx_gl_Modification_GET_Select(struct zx_gl_Modification_s* x, int n);
struct zx_gl_NewData_s* zx_gl_Modification_GET_NewData(struct zx_gl_Modification_s* x, int n);

int zx_gl_Modification_NUM_Select(struct zx_gl_Modification_s* x);
int zx_gl_Modification_NUM_NewData(struct zx_gl_Modification_s* x);

struct zx_elem_s* zx_gl_Modification_POP_Select(struct zx_gl_Modification_s* x);
struct zx_gl_NewData_s* zx_gl_Modification_POP_NewData(struct zx_gl_Modification_s* x);

void zx_gl_Modification_PUSH_Select(struct zx_gl_Modification_s* x, struct zx_elem_s* y);
void zx_gl_Modification_PUSH_NewData(struct zx_gl_Modification_s* x, struct zx_gl_NewData_s* y);

void zx_gl_Modification_PUT_id(struct zx_gl_Modification_s* x, struct zx_str* y);
void zx_gl_Modification_PUT_itemID(struct zx_gl_Modification_s* x, struct zx_str* y);
void zx_gl_Modification_PUT_notChangedSince(struct zx_gl_Modification_s* x, struct zx_str* y);
void zx_gl_Modification_PUT_objectType(struct zx_gl_Modification_s* x, struct zx_str* y);
void zx_gl_Modification_PUT_overrideAllowed(struct zx_gl_Modification_s* x, struct zx_str* y);

void zx_gl_Modification_PUT_Select(struct zx_gl_Modification_s* x, int n, struct zx_elem_s* y);
void zx_gl_Modification_PUT_NewData(struct zx_gl_Modification_s* x, int n, struct zx_gl_NewData_s* y);

void zx_gl_Modification_ADD_Select(struct zx_gl_Modification_s* x, int n, struct zx_elem_s* z);
void zx_gl_Modification_ADD_NewData(struct zx_gl_Modification_s* x, int n, struct zx_gl_NewData_s* z);

void zx_gl_Modification_DEL_Select(struct zx_gl_Modification_s* x, int n);
void zx_gl_Modification_DEL_NewData(struct zx_gl_Modification_s* x, int n);

void zx_gl_Modification_REV_Select(struct zx_gl_Modification_s* x);
void zx_gl_Modification_REV_NewData(struct zx_gl_Modification_s* x);

#endif
/* -------------------------- gl_Modify -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_Modify_EXT
#define zx_gl_Modify_EXT
#endif

struct zx_gl_Modify_s* zx_DEC_gl_Modify(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Modify_s* zx_NEW_gl_Modify(struct zx_ctx* c);
void zx_FREE_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Modify_s* zx_DEEP_CLONE_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x, int dup_strs);
void zx_DUP_STRS_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x);
int zx_WALK_SO_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x);
int zx_LEN_WO_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x);
char* zx_ENC_SO_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x, char* p);
char* zx_ENC_WO_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Modify(struct zx_ctx* c, struct zx_gl_Modify_s* x);

struct zx_gl_Modify_s {
  ZX_ELEM_EXT
  zx_gl_Modify_EXT
  struct zx_gl_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_gl_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_gl_Subscription_s* Subscription;	/* {0,-1} nada */
  struct zx_gl_Modification_s* Modification;	/* {1,-1}  */
  struct zx_gl_ItemSelection_s* ItemSelection;	/* {0,-1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Modify_GET_id(struct zx_gl_Modify_s* x);

struct zx_gl_ResourceID_s* zx_gl_Modify_GET_ResourceID(struct zx_gl_Modify_s* x, int n);
struct zx_gl_EncryptedResourceID_s* zx_gl_Modify_GET_EncryptedResourceID(struct zx_gl_Modify_s* x, int n);
struct zx_gl_Subscription_s* zx_gl_Modify_GET_Subscription(struct zx_gl_Modify_s* x, int n);
struct zx_gl_Modification_s* zx_gl_Modify_GET_Modification(struct zx_gl_Modify_s* x, int n);
struct zx_gl_ItemSelection_s* zx_gl_Modify_GET_ItemSelection(struct zx_gl_Modify_s* x, int n);
struct zx_gl_Extension_s* zx_gl_Modify_GET_Extension(struct zx_gl_Modify_s* x, int n);

int zx_gl_Modify_NUM_ResourceID(struct zx_gl_Modify_s* x);
int zx_gl_Modify_NUM_EncryptedResourceID(struct zx_gl_Modify_s* x);
int zx_gl_Modify_NUM_Subscription(struct zx_gl_Modify_s* x);
int zx_gl_Modify_NUM_Modification(struct zx_gl_Modify_s* x);
int zx_gl_Modify_NUM_ItemSelection(struct zx_gl_Modify_s* x);
int zx_gl_Modify_NUM_Extension(struct zx_gl_Modify_s* x);

struct zx_gl_ResourceID_s* zx_gl_Modify_POP_ResourceID(struct zx_gl_Modify_s* x);
struct zx_gl_EncryptedResourceID_s* zx_gl_Modify_POP_EncryptedResourceID(struct zx_gl_Modify_s* x);
struct zx_gl_Subscription_s* zx_gl_Modify_POP_Subscription(struct zx_gl_Modify_s* x);
struct zx_gl_Modification_s* zx_gl_Modify_POP_Modification(struct zx_gl_Modify_s* x);
struct zx_gl_ItemSelection_s* zx_gl_Modify_POP_ItemSelection(struct zx_gl_Modify_s* x);
struct zx_gl_Extension_s* zx_gl_Modify_POP_Extension(struct zx_gl_Modify_s* x);

void zx_gl_Modify_PUSH_ResourceID(struct zx_gl_Modify_s* x, struct zx_gl_ResourceID_s* y);
void zx_gl_Modify_PUSH_EncryptedResourceID(struct zx_gl_Modify_s* x, struct zx_gl_EncryptedResourceID_s* y);
void zx_gl_Modify_PUSH_Subscription(struct zx_gl_Modify_s* x, struct zx_gl_Subscription_s* y);
void zx_gl_Modify_PUSH_Modification(struct zx_gl_Modify_s* x, struct zx_gl_Modification_s* y);
void zx_gl_Modify_PUSH_ItemSelection(struct zx_gl_Modify_s* x, struct zx_gl_ItemSelection_s* y);
void zx_gl_Modify_PUSH_Extension(struct zx_gl_Modify_s* x, struct zx_gl_Extension_s* y);

void zx_gl_Modify_PUT_id(struct zx_gl_Modify_s* x, struct zx_str* y);

void zx_gl_Modify_PUT_ResourceID(struct zx_gl_Modify_s* x, int n, struct zx_gl_ResourceID_s* y);
void zx_gl_Modify_PUT_EncryptedResourceID(struct zx_gl_Modify_s* x, int n, struct zx_gl_EncryptedResourceID_s* y);
void zx_gl_Modify_PUT_Subscription(struct zx_gl_Modify_s* x, int n, struct zx_gl_Subscription_s* y);
void zx_gl_Modify_PUT_Modification(struct zx_gl_Modify_s* x, int n, struct zx_gl_Modification_s* y);
void zx_gl_Modify_PUT_ItemSelection(struct zx_gl_Modify_s* x, int n, struct zx_gl_ItemSelection_s* y);
void zx_gl_Modify_PUT_Extension(struct zx_gl_Modify_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_Modify_ADD_ResourceID(struct zx_gl_Modify_s* x, int n, struct zx_gl_ResourceID_s* z);
void zx_gl_Modify_ADD_EncryptedResourceID(struct zx_gl_Modify_s* x, int n, struct zx_gl_EncryptedResourceID_s* z);
void zx_gl_Modify_ADD_Subscription(struct zx_gl_Modify_s* x, int n, struct zx_gl_Subscription_s* z);
void zx_gl_Modify_ADD_Modification(struct zx_gl_Modify_s* x, int n, struct zx_gl_Modification_s* z);
void zx_gl_Modify_ADD_ItemSelection(struct zx_gl_Modify_s* x, int n, struct zx_gl_ItemSelection_s* z);
void zx_gl_Modify_ADD_Extension(struct zx_gl_Modify_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_Modify_DEL_ResourceID(struct zx_gl_Modify_s* x, int n);
void zx_gl_Modify_DEL_EncryptedResourceID(struct zx_gl_Modify_s* x, int n);
void zx_gl_Modify_DEL_Subscription(struct zx_gl_Modify_s* x, int n);
void zx_gl_Modify_DEL_Modification(struct zx_gl_Modify_s* x, int n);
void zx_gl_Modify_DEL_ItemSelection(struct zx_gl_Modify_s* x, int n);
void zx_gl_Modify_DEL_Extension(struct zx_gl_Modify_s* x, int n);

void zx_gl_Modify_REV_ResourceID(struct zx_gl_Modify_s* x);
void zx_gl_Modify_REV_EncryptedResourceID(struct zx_gl_Modify_s* x);
void zx_gl_Modify_REV_Subscription(struct zx_gl_Modify_s* x);
void zx_gl_Modify_REV_Modification(struct zx_gl_Modify_s* x);
void zx_gl_Modify_REV_ItemSelection(struct zx_gl_Modify_s* x);
void zx_gl_Modify_REV_Extension(struct zx_gl_Modify_s* x);

#endif
/* -------------------------- gl_ModifyResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_ModifyResponse_EXT
#define zx_gl_ModifyResponse_EXT
#endif

struct zx_gl_ModifyResponse_s* zx_DEC_gl_ModifyResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_ModifyResponse_s* zx_NEW_gl_ModifyResponse(struct zx_ctx* c);
void zx_FREE_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_ModifyResponse_s* zx_DEEP_CLONE_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x, int dup_strs);
void zx_DUP_STRS_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x);
int zx_WALK_SO_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x);
int zx_LEN_WO_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x);
char* zx_ENC_SO_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x, char* p);
char* zx_ENC_WO_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_ModifyResponse(struct zx_ctx* c, struct zx_gl_ModifyResponse_s* x);

struct zx_gl_ModifyResponse_s {
  ZX_ELEM_EXT
  zx_gl_ModifyResponse_EXT
  struct zx_gl_Status_s* Status;	/* {1,1} nada */
  struct zx_gl_ItemData_s* ItemData;	/* {0,-1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_ModifyResponse_GET_id(struct zx_gl_ModifyResponse_s* x);
struct zx_str* zx_gl_ModifyResponse_GET_timeStamp(struct zx_gl_ModifyResponse_s* x);

struct zx_gl_Status_s* zx_gl_ModifyResponse_GET_Status(struct zx_gl_ModifyResponse_s* x, int n);
struct zx_gl_ItemData_s* zx_gl_ModifyResponse_GET_ItemData(struct zx_gl_ModifyResponse_s* x, int n);
struct zx_gl_Extension_s* zx_gl_ModifyResponse_GET_Extension(struct zx_gl_ModifyResponse_s* x, int n);

int zx_gl_ModifyResponse_NUM_Status(struct zx_gl_ModifyResponse_s* x);
int zx_gl_ModifyResponse_NUM_ItemData(struct zx_gl_ModifyResponse_s* x);
int zx_gl_ModifyResponse_NUM_Extension(struct zx_gl_ModifyResponse_s* x);

struct zx_gl_Status_s* zx_gl_ModifyResponse_POP_Status(struct zx_gl_ModifyResponse_s* x);
struct zx_gl_ItemData_s* zx_gl_ModifyResponse_POP_ItemData(struct zx_gl_ModifyResponse_s* x);
struct zx_gl_Extension_s* zx_gl_ModifyResponse_POP_Extension(struct zx_gl_ModifyResponse_s* x);

void zx_gl_ModifyResponse_PUSH_Status(struct zx_gl_ModifyResponse_s* x, struct zx_gl_Status_s* y);
void zx_gl_ModifyResponse_PUSH_ItemData(struct zx_gl_ModifyResponse_s* x, struct zx_gl_ItemData_s* y);
void zx_gl_ModifyResponse_PUSH_Extension(struct zx_gl_ModifyResponse_s* x, struct zx_gl_Extension_s* y);

void zx_gl_ModifyResponse_PUT_id(struct zx_gl_ModifyResponse_s* x, struct zx_str* y);
void zx_gl_ModifyResponse_PUT_timeStamp(struct zx_gl_ModifyResponse_s* x, struct zx_str* y);

void zx_gl_ModifyResponse_PUT_Status(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_Status_s* y);
void zx_gl_ModifyResponse_PUT_ItemData(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_ItemData_s* y);
void zx_gl_ModifyResponse_PUT_Extension(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_ModifyResponse_ADD_Status(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_Status_s* z);
void zx_gl_ModifyResponse_ADD_ItemData(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_ItemData_s* z);
void zx_gl_ModifyResponse_ADD_Extension(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_ModifyResponse_DEL_Status(struct zx_gl_ModifyResponse_s* x, int n);
void zx_gl_ModifyResponse_DEL_ItemData(struct zx_gl_ModifyResponse_s* x, int n);
void zx_gl_ModifyResponse_DEL_Extension(struct zx_gl_ModifyResponse_s* x, int n);

void zx_gl_ModifyResponse_REV_Status(struct zx_gl_ModifyResponse_s* x);
void zx_gl_ModifyResponse_REV_ItemData(struct zx_gl_ModifyResponse_s* x);
void zx_gl_ModifyResponse_REV_Extension(struct zx_gl_ModifyResponse_s* x);

#endif
/* -------------------------- gl_MultiLineString -------------------------- */
/* refby( zx_gl_shape_s ) */
#ifndef zx_gl_MultiLineString_EXT
#define zx_gl_MultiLineString_EXT
#endif

struct zx_gl_MultiLineString_s* zx_DEC_gl_MultiLineString(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_MultiLineString_s* zx_NEW_gl_MultiLineString(struct zx_ctx* c);
void zx_FREE_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_MultiLineString_s* zx_DEEP_CLONE_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x, int dup_strs);
void zx_DUP_STRS_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x);
int zx_WALK_SO_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x);
int zx_LEN_WO_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x);
char* zx_ENC_SO_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x, char* p);
char* zx_ENC_WO_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_MultiLineString(struct zx_ctx* c, struct zx_gl_MultiLineString_s* x);

struct zx_gl_MultiLineString_s {
  ZX_ELEM_EXT
  zx_gl_MultiLineString_EXT
  struct zx_gl_LineString_s* LineString;	/* {1,-1} nada */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_MultiLineString_GET_gid(struct zx_gl_MultiLineString_s* x);
struct zx_str* zx_gl_MultiLineString_GET_srsName(struct zx_gl_MultiLineString_s* x);

struct zx_gl_LineString_s* zx_gl_MultiLineString_GET_LineString(struct zx_gl_MultiLineString_s* x, int n);

int zx_gl_MultiLineString_NUM_LineString(struct zx_gl_MultiLineString_s* x);

struct zx_gl_LineString_s* zx_gl_MultiLineString_POP_LineString(struct zx_gl_MultiLineString_s* x);

void zx_gl_MultiLineString_PUSH_LineString(struct zx_gl_MultiLineString_s* x, struct zx_gl_LineString_s* y);

void zx_gl_MultiLineString_PUT_gid(struct zx_gl_MultiLineString_s* x, struct zx_str* y);
void zx_gl_MultiLineString_PUT_srsName(struct zx_gl_MultiLineString_s* x, struct zx_str* y);

void zx_gl_MultiLineString_PUT_LineString(struct zx_gl_MultiLineString_s* x, int n, struct zx_gl_LineString_s* y);

void zx_gl_MultiLineString_ADD_LineString(struct zx_gl_MultiLineString_s* x, int n, struct zx_gl_LineString_s* z);

void zx_gl_MultiLineString_DEL_LineString(struct zx_gl_MultiLineString_s* x, int n);

void zx_gl_MultiLineString_REV_LineString(struct zx_gl_MultiLineString_s* x);

#endif
/* -------------------------- gl_MultiPoint -------------------------- */
/* refby( zx_gl_shape_s ) */
#ifndef zx_gl_MultiPoint_EXT
#define zx_gl_MultiPoint_EXT
#endif

struct zx_gl_MultiPoint_s* zx_DEC_gl_MultiPoint(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_MultiPoint_s* zx_NEW_gl_MultiPoint(struct zx_ctx* c);
void zx_FREE_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_MultiPoint_s* zx_DEEP_CLONE_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x, int dup_strs);
void zx_DUP_STRS_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x);
int zx_WALK_SO_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x);
int zx_LEN_WO_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x);
char* zx_ENC_SO_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x, char* p);
char* zx_ENC_WO_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_MultiPoint(struct zx_ctx* c, struct zx_gl_MultiPoint_s* x);

struct zx_gl_MultiPoint_s {
  ZX_ELEM_EXT
  zx_gl_MultiPoint_EXT
  struct zx_gl_Point_s* Point;	/* {1,-1} nada */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_MultiPoint_GET_gid(struct zx_gl_MultiPoint_s* x);
struct zx_str* zx_gl_MultiPoint_GET_srsName(struct zx_gl_MultiPoint_s* x);

struct zx_gl_Point_s* zx_gl_MultiPoint_GET_Point(struct zx_gl_MultiPoint_s* x, int n);

int zx_gl_MultiPoint_NUM_Point(struct zx_gl_MultiPoint_s* x);

struct zx_gl_Point_s* zx_gl_MultiPoint_POP_Point(struct zx_gl_MultiPoint_s* x);

void zx_gl_MultiPoint_PUSH_Point(struct zx_gl_MultiPoint_s* x, struct zx_gl_Point_s* y);

void zx_gl_MultiPoint_PUT_gid(struct zx_gl_MultiPoint_s* x, struct zx_str* y);
void zx_gl_MultiPoint_PUT_srsName(struct zx_gl_MultiPoint_s* x, struct zx_str* y);

void zx_gl_MultiPoint_PUT_Point(struct zx_gl_MultiPoint_s* x, int n, struct zx_gl_Point_s* y);

void zx_gl_MultiPoint_ADD_Point(struct zx_gl_MultiPoint_s* x, int n, struct zx_gl_Point_s* z);

void zx_gl_MultiPoint_DEL_Point(struct zx_gl_MultiPoint_s* x, int n);

void zx_gl_MultiPoint_REV_Point(struct zx_gl_MultiPoint_s* x);

#endif
/* -------------------------- gl_MultiPolygon -------------------------- */
/* refby( zx_gl_shape_s ) */
#ifndef zx_gl_MultiPolygon_EXT
#define zx_gl_MultiPolygon_EXT
#endif

struct zx_gl_MultiPolygon_s* zx_DEC_gl_MultiPolygon(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_MultiPolygon_s* zx_NEW_gl_MultiPolygon(struct zx_ctx* c);
void zx_FREE_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_MultiPolygon_s* zx_DEEP_CLONE_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x, int dup_strs);
void zx_DUP_STRS_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x);
int zx_WALK_SO_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x);
int zx_LEN_WO_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x);
char* zx_ENC_SO_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x, char* p);
char* zx_ENC_WO_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_MultiPolygon(struct zx_ctx* c, struct zx_gl_MultiPolygon_s* x);

struct zx_gl_MultiPolygon_s {
  ZX_ELEM_EXT
  zx_gl_MultiPolygon_EXT
  struct zx_gl_Polygon_s* Polygon;	/* {0,1} nada */
  struct zx_gl_Box_s* Box;	/* {0,1} nada */
  struct zx_gl_CircularArea_s* CircularArea;	/* {0,1} nada */
  struct zx_gl_CircularArcArea_s* CircularArcArea;	/* {0,1} nada */
  struct zx_gl_EllipticalArea_s* EllipticalArea;	/* {0,1} nada */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_MultiPolygon_GET_gid(struct zx_gl_MultiPolygon_s* x);
struct zx_str* zx_gl_MultiPolygon_GET_srsName(struct zx_gl_MultiPolygon_s* x);

struct zx_gl_Polygon_s* zx_gl_MultiPolygon_GET_Polygon(struct zx_gl_MultiPolygon_s* x, int n);
struct zx_gl_Box_s* zx_gl_MultiPolygon_GET_Box(struct zx_gl_MultiPolygon_s* x, int n);
struct zx_gl_CircularArea_s* zx_gl_MultiPolygon_GET_CircularArea(struct zx_gl_MultiPolygon_s* x, int n);
struct zx_gl_CircularArcArea_s* zx_gl_MultiPolygon_GET_CircularArcArea(struct zx_gl_MultiPolygon_s* x, int n);
struct zx_gl_EllipticalArea_s* zx_gl_MultiPolygon_GET_EllipticalArea(struct zx_gl_MultiPolygon_s* x, int n);

int zx_gl_MultiPolygon_NUM_Polygon(struct zx_gl_MultiPolygon_s* x);
int zx_gl_MultiPolygon_NUM_Box(struct zx_gl_MultiPolygon_s* x);
int zx_gl_MultiPolygon_NUM_CircularArea(struct zx_gl_MultiPolygon_s* x);
int zx_gl_MultiPolygon_NUM_CircularArcArea(struct zx_gl_MultiPolygon_s* x);
int zx_gl_MultiPolygon_NUM_EllipticalArea(struct zx_gl_MultiPolygon_s* x);

struct zx_gl_Polygon_s* zx_gl_MultiPolygon_POP_Polygon(struct zx_gl_MultiPolygon_s* x);
struct zx_gl_Box_s* zx_gl_MultiPolygon_POP_Box(struct zx_gl_MultiPolygon_s* x);
struct zx_gl_CircularArea_s* zx_gl_MultiPolygon_POP_CircularArea(struct zx_gl_MultiPolygon_s* x);
struct zx_gl_CircularArcArea_s* zx_gl_MultiPolygon_POP_CircularArcArea(struct zx_gl_MultiPolygon_s* x);
struct zx_gl_EllipticalArea_s* zx_gl_MultiPolygon_POP_EllipticalArea(struct zx_gl_MultiPolygon_s* x);

void zx_gl_MultiPolygon_PUSH_Polygon(struct zx_gl_MultiPolygon_s* x, struct zx_gl_Polygon_s* y);
void zx_gl_MultiPolygon_PUSH_Box(struct zx_gl_MultiPolygon_s* x, struct zx_gl_Box_s* y);
void zx_gl_MultiPolygon_PUSH_CircularArea(struct zx_gl_MultiPolygon_s* x, struct zx_gl_CircularArea_s* y);
void zx_gl_MultiPolygon_PUSH_CircularArcArea(struct zx_gl_MultiPolygon_s* x, struct zx_gl_CircularArcArea_s* y);
void zx_gl_MultiPolygon_PUSH_EllipticalArea(struct zx_gl_MultiPolygon_s* x, struct zx_gl_EllipticalArea_s* y);

void zx_gl_MultiPolygon_PUT_gid(struct zx_gl_MultiPolygon_s* x, struct zx_str* y);
void zx_gl_MultiPolygon_PUT_srsName(struct zx_gl_MultiPolygon_s* x, struct zx_str* y);

void zx_gl_MultiPolygon_PUT_Polygon(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_Polygon_s* y);
void zx_gl_MultiPolygon_PUT_Box(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_Box_s* y);
void zx_gl_MultiPolygon_PUT_CircularArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_CircularArea_s* y);
void zx_gl_MultiPolygon_PUT_CircularArcArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_CircularArcArea_s* y);
void zx_gl_MultiPolygon_PUT_EllipticalArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_EllipticalArea_s* y);

void zx_gl_MultiPolygon_ADD_Polygon(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_Polygon_s* z);
void zx_gl_MultiPolygon_ADD_Box(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_Box_s* z);
void zx_gl_MultiPolygon_ADD_CircularArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_CircularArea_s* z);
void zx_gl_MultiPolygon_ADD_CircularArcArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_CircularArcArea_s* z);
void zx_gl_MultiPolygon_ADD_EllipticalArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_EllipticalArea_s* z);

void zx_gl_MultiPolygon_DEL_Polygon(struct zx_gl_MultiPolygon_s* x, int n);
void zx_gl_MultiPolygon_DEL_Box(struct zx_gl_MultiPolygon_s* x, int n);
void zx_gl_MultiPolygon_DEL_CircularArea(struct zx_gl_MultiPolygon_s* x, int n);
void zx_gl_MultiPolygon_DEL_CircularArcArea(struct zx_gl_MultiPolygon_s* x, int n);
void zx_gl_MultiPolygon_DEL_EllipticalArea(struct zx_gl_MultiPolygon_s* x, int n);

void zx_gl_MultiPolygon_REV_Polygon(struct zx_gl_MultiPolygon_s* x);
void zx_gl_MultiPolygon_REV_Box(struct zx_gl_MultiPolygon_s* x);
void zx_gl_MultiPolygon_REV_CircularArea(struct zx_gl_MultiPolygon_s* x);
void zx_gl_MultiPolygon_REV_CircularArcArea(struct zx_gl_MultiPolygon_s* x);
void zx_gl_MultiPolygon_REV_EllipticalArea(struct zx_gl_MultiPolygon_s* x);

#endif
/* -------------------------- gl_NewData -------------------------- */
/* refby( zx_gl_CreateItem_s zx_gl_Modification_s ) */
#ifndef zx_gl_NewData_EXT
#define zx_gl_NewData_EXT
#endif

struct zx_gl_NewData_s* zx_DEC_gl_NewData(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_NewData_s* zx_NEW_gl_NewData(struct zx_ctx* c);
void zx_FREE_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_NewData_s* zx_DEEP_CLONE_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x, int dup_strs);
void zx_DUP_STRS_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x);
int zx_WALK_SO_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x);
int zx_LEN_WO_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x);
char* zx_ENC_SO_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x, char* p);
char* zx_ENC_WO_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_NewData(struct zx_ctx* c, struct zx_gl_NewData_s* x);

struct zx_gl_NewData_s {
  ZX_ELEM_EXT
  zx_gl_NewData_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- gl_Notification -------------------------- */
/* refby( zx_gl_Notify_s ) */
#ifndef zx_gl_Notification_EXT
#define zx_gl_Notification_EXT
#endif

struct zx_gl_Notification_s* zx_DEC_gl_Notification(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Notification_s* zx_NEW_gl_Notification(struct zx_ctx* c);
void zx_FREE_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Notification_s* zx_DEEP_CLONE_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x, int dup_strs);
void zx_DUP_STRS_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x);
int zx_WALK_SO_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x);
int zx_LEN_WO_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x);
char* zx_ENC_SO_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x, char* p);
char* zx_ENC_WO_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Notification(struct zx_ctx* c, struct zx_gl_Notification_s* x);

struct zx_gl_Notification_s {
  ZX_ELEM_EXT
  zx_gl_Notification_EXT
  struct zx_gl_ItemData_s* ItemData;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* subscriptionID;	/* {1,1} attribute xs:string */
  struct zx_str* expires;	/* {0,1} attribute xs:dateTime */
  struct zx_str* endReason;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Notification_GET_id(struct zx_gl_Notification_s* x);
struct zx_str* zx_gl_Notification_GET_subscriptionID(struct zx_gl_Notification_s* x);
struct zx_str* zx_gl_Notification_GET_expires(struct zx_gl_Notification_s* x);
struct zx_str* zx_gl_Notification_GET_endReason(struct zx_gl_Notification_s* x);

struct zx_gl_ItemData_s* zx_gl_Notification_GET_ItemData(struct zx_gl_Notification_s* x, int n);

int zx_gl_Notification_NUM_ItemData(struct zx_gl_Notification_s* x);

struct zx_gl_ItemData_s* zx_gl_Notification_POP_ItemData(struct zx_gl_Notification_s* x);

void zx_gl_Notification_PUSH_ItemData(struct zx_gl_Notification_s* x, struct zx_gl_ItemData_s* y);

void zx_gl_Notification_PUT_id(struct zx_gl_Notification_s* x, struct zx_str* y);
void zx_gl_Notification_PUT_subscriptionID(struct zx_gl_Notification_s* x, struct zx_str* y);
void zx_gl_Notification_PUT_expires(struct zx_gl_Notification_s* x, struct zx_str* y);
void zx_gl_Notification_PUT_endReason(struct zx_gl_Notification_s* x, struct zx_str* y);

void zx_gl_Notification_PUT_ItemData(struct zx_gl_Notification_s* x, int n, struct zx_gl_ItemData_s* y);

void zx_gl_Notification_ADD_ItemData(struct zx_gl_Notification_s* x, int n, struct zx_gl_ItemData_s* z);

void zx_gl_Notification_DEL_ItemData(struct zx_gl_Notification_s* x, int n);

void zx_gl_Notification_REV_ItemData(struct zx_gl_Notification_s* x);

#endif
/* -------------------------- gl_Notify -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_Notify_EXT
#define zx_gl_Notify_EXT
#endif

struct zx_gl_Notify_s* zx_DEC_gl_Notify(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Notify_s* zx_NEW_gl_Notify(struct zx_ctx* c);
void zx_FREE_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Notify_s* zx_DEEP_CLONE_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x, int dup_strs);
void zx_DUP_STRS_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x);
int zx_WALK_SO_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x);
int zx_LEN_WO_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x);
char* zx_ENC_SO_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x, char* p);
char* zx_ENC_WO_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Notify(struct zx_ctx* c, struct zx_gl_Notify_s* x);

struct zx_gl_Notify_s {
  ZX_ELEM_EXT
  zx_gl_Notify_EXT
  struct zx_gl_Notification_s* Notification;	/* {0,-1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Notify_GET_id(struct zx_gl_Notify_s* x);
struct zx_str* zx_gl_Notify_GET_timeStamp(struct zx_gl_Notify_s* x);

struct zx_gl_Notification_s* zx_gl_Notify_GET_Notification(struct zx_gl_Notify_s* x, int n);
struct zx_gl_Extension_s* zx_gl_Notify_GET_Extension(struct zx_gl_Notify_s* x, int n);

int zx_gl_Notify_NUM_Notification(struct zx_gl_Notify_s* x);
int zx_gl_Notify_NUM_Extension(struct zx_gl_Notify_s* x);

struct zx_gl_Notification_s* zx_gl_Notify_POP_Notification(struct zx_gl_Notify_s* x);
struct zx_gl_Extension_s* zx_gl_Notify_POP_Extension(struct zx_gl_Notify_s* x);

void zx_gl_Notify_PUSH_Notification(struct zx_gl_Notify_s* x, struct zx_gl_Notification_s* y);
void zx_gl_Notify_PUSH_Extension(struct zx_gl_Notify_s* x, struct zx_gl_Extension_s* y);

void zx_gl_Notify_PUT_id(struct zx_gl_Notify_s* x, struct zx_str* y);
void zx_gl_Notify_PUT_timeStamp(struct zx_gl_Notify_s* x, struct zx_str* y);

void zx_gl_Notify_PUT_Notification(struct zx_gl_Notify_s* x, int n, struct zx_gl_Notification_s* y);
void zx_gl_Notify_PUT_Extension(struct zx_gl_Notify_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_Notify_ADD_Notification(struct zx_gl_Notify_s* x, int n, struct zx_gl_Notification_s* z);
void zx_gl_Notify_ADD_Extension(struct zx_gl_Notify_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_Notify_DEL_Notification(struct zx_gl_Notify_s* x, int n);
void zx_gl_Notify_DEL_Extension(struct zx_gl_Notify_s* x, int n);

void zx_gl_Notify_REV_Notification(struct zx_gl_Notify_s* x);
void zx_gl_Notify_REV_Extension(struct zx_gl_Notify_s* x);

#endif
/* -------------------------- gl_NotifyAdminTo -------------------------- */
/* refby( zx_gl_Subscription_s ) */
#ifndef zx_gl_NotifyAdminTo_EXT
#define zx_gl_NotifyAdminTo_EXT
#endif

struct zx_gl_NotifyAdminTo_s* zx_DEC_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_NotifyAdminTo_s* zx_NEW_gl_NotifyAdminTo(struct zx_ctx* c);
void zx_FREE_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_NotifyAdminTo_s* zx_DEEP_CLONE_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x, int dup_strs);
void zx_DUP_STRS_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x);
int zx_WALK_SO_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x);
int zx_LEN_WO_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x);
char* zx_ENC_SO_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x, char* p);
char* zx_ENC_WO_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_NotifyAdminTo(struct zx_ctx* c, struct zx_gl_NotifyAdminTo_s* x);

struct zx_gl_NotifyAdminTo_s {
  ZX_ELEM_EXT
  zx_gl_NotifyAdminTo_EXT
  struct zx_elem_s* SecurityMechID;	/* {0,-1} xs:anyURI */
  struct zx_gl_Credential_s* Credential;	/* {0,-1}  */
  struct zx_elem_s* Endpoint;	/* {0,1} xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_NotifyAdminTo_GET_id(struct zx_gl_NotifyAdminTo_s* x);

struct zx_elem_s* zx_gl_NotifyAdminTo_GET_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, int n);
struct zx_gl_Credential_s* zx_gl_NotifyAdminTo_GET_Credential(struct zx_gl_NotifyAdminTo_s* x, int n);
struct zx_elem_s* zx_gl_NotifyAdminTo_GET_Endpoint(struct zx_gl_NotifyAdminTo_s* x, int n);

int zx_gl_NotifyAdminTo_NUM_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x);
int zx_gl_NotifyAdminTo_NUM_Credential(struct zx_gl_NotifyAdminTo_s* x);
int zx_gl_NotifyAdminTo_NUM_Endpoint(struct zx_gl_NotifyAdminTo_s* x);

struct zx_elem_s* zx_gl_NotifyAdminTo_POP_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x);
struct zx_gl_Credential_s* zx_gl_NotifyAdminTo_POP_Credential(struct zx_gl_NotifyAdminTo_s* x);
struct zx_elem_s* zx_gl_NotifyAdminTo_POP_Endpoint(struct zx_gl_NotifyAdminTo_s* x);

void zx_gl_NotifyAdminTo_PUSH_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, struct zx_elem_s* y);
void zx_gl_NotifyAdminTo_PUSH_Credential(struct zx_gl_NotifyAdminTo_s* x, struct zx_gl_Credential_s* y);
void zx_gl_NotifyAdminTo_PUSH_Endpoint(struct zx_gl_NotifyAdminTo_s* x, struct zx_elem_s* y);

void zx_gl_NotifyAdminTo_PUT_id(struct zx_gl_NotifyAdminTo_s* x, struct zx_str* y);

void zx_gl_NotifyAdminTo_PUT_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_elem_s* y);
void zx_gl_NotifyAdminTo_PUT_Credential(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_gl_Credential_s* y);
void zx_gl_NotifyAdminTo_PUT_Endpoint(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_elem_s* y);

void zx_gl_NotifyAdminTo_ADD_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_elem_s* z);
void zx_gl_NotifyAdminTo_ADD_Credential(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_gl_Credential_s* z);
void zx_gl_NotifyAdminTo_ADD_Endpoint(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_elem_s* z);

void zx_gl_NotifyAdminTo_DEL_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, int n);
void zx_gl_NotifyAdminTo_DEL_Credential(struct zx_gl_NotifyAdminTo_s* x, int n);
void zx_gl_NotifyAdminTo_DEL_Endpoint(struct zx_gl_NotifyAdminTo_s* x, int n);

void zx_gl_NotifyAdminTo_REV_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x);
void zx_gl_NotifyAdminTo_REV_Credential(struct zx_gl_NotifyAdminTo_s* x);
void zx_gl_NotifyAdminTo_REV_Endpoint(struct zx_gl_NotifyAdminTo_s* x);

#endif
/* -------------------------- gl_NotifyResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_NotifyResponse_EXT
#define zx_gl_NotifyResponse_EXT
#endif

struct zx_gl_NotifyResponse_s* zx_DEC_gl_NotifyResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_NotifyResponse_s* zx_NEW_gl_NotifyResponse(struct zx_ctx* c);
void zx_FREE_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_NotifyResponse_s* zx_DEEP_CLONE_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x, int dup_strs);
void zx_DUP_STRS_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x);
int zx_WALK_SO_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x);
int zx_LEN_WO_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x);
char* zx_ENC_SO_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x, char* p);
char* zx_ENC_WO_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_NotifyResponse(struct zx_ctx* c, struct zx_gl_NotifyResponse_s* x);

struct zx_gl_NotifyResponse_s {
  ZX_ELEM_EXT
  zx_gl_NotifyResponse_EXT
  struct zx_gl_Status_s* Status;	/* {1,1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_NotifyResponse_GET_id(struct zx_gl_NotifyResponse_s* x);

struct zx_gl_Status_s* zx_gl_NotifyResponse_GET_Status(struct zx_gl_NotifyResponse_s* x, int n);
struct zx_gl_Extension_s* zx_gl_NotifyResponse_GET_Extension(struct zx_gl_NotifyResponse_s* x, int n);

int zx_gl_NotifyResponse_NUM_Status(struct zx_gl_NotifyResponse_s* x);
int zx_gl_NotifyResponse_NUM_Extension(struct zx_gl_NotifyResponse_s* x);

struct zx_gl_Status_s* zx_gl_NotifyResponse_POP_Status(struct zx_gl_NotifyResponse_s* x);
struct zx_gl_Extension_s* zx_gl_NotifyResponse_POP_Extension(struct zx_gl_NotifyResponse_s* x);

void zx_gl_NotifyResponse_PUSH_Status(struct zx_gl_NotifyResponse_s* x, struct zx_gl_Status_s* y);
void zx_gl_NotifyResponse_PUSH_Extension(struct zx_gl_NotifyResponse_s* x, struct zx_gl_Extension_s* y);

void zx_gl_NotifyResponse_PUT_id(struct zx_gl_NotifyResponse_s* x, struct zx_str* y);

void zx_gl_NotifyResponse_PUT_Status(struct zx_gl_NotifyResponse_s* x, int n, struct zx_gl_Status_s* y);
void zx_gl_NotifyResponse_PUT_Extension(struct zx_gl_NotifyResponse_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_NotifyResponse_ADD_Status(struct zx_gl_NotifyResponse_s* x, int n, struct zx_gl_Status_s* z);
void zx_gl_NotifyResponse_ADD_Extension(struct zx_gl_NotifyResponse_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_NotifyResponse_DEL_Status(struct zx_gl_NotifyResponse_s* x, int n);
void zx_gl_NotifyResponse_DEL_Extension(struct zx_gl_NotifyResponse_s* x, int n);

void zx_gl_NotifyResponse_REV_Status(struct zx_gl_NotifyResponse_s* x);
void zx_gl_NotifyResponse_REV_Extension(struct zx_gl_NotifyResponse_s* x);

#endif
/* -------------------------- gl_NotifyTo -------------------------- */
/* refby( zx_gl_Subscription_s ) */
#ifndef zx_gl_NotifyTo_EXT
#define zx_gl_NotifyTo_EXT
#endif

struct zx_gl_NotifyTo_s* zx_DEC_gl_NotifyTo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_NotifyTo_s* zx_NEW_gl_NotifyTo(struct zx_ctx* c);
void zx_FREE_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_NotifyTo_s* zx_DEEP_CLONE_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x, int dup_strs);
void zx_DUP_STRS_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x);
int zx_WALK_SO_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x);
int zx_LEN_WO_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x);
char* zx_ENC_SO_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x, char* p);
char* zx_ENC_WO_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_NotifyTo(struct zx_ctx* c, struct zx_gl_NotifyTo_s* x);

struct zx_gl_NotifyTo_s {
  ZX_ELEM_EXT
  zx_gl_NotifyTo_EXT
  struct zx_elem_s* SecurityMechID;	/* {0,-1} xs:anyURI */
  struct zx_gl_Credential_s* Credential;	/* {0,-1}  */
  struct zx_elem_s* Endpoint;	/* {0,1} xs:anyURI */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_NotifyTo_GET_id(struct zx_gl_NotifyTo_s* x);

struct zx_elem_s* zx_gl_NotifyTo_GET_SecurityMechID(struct zx_gl_NotifyTo_s* x, int n);
struct zx_gl_Credential_s* zx_gl_NotifyTo_GET_Credential(struct zx_gl_NotifyTo_s* x, int n);
struct zx_elem_s* zx_gl_NotifyTo_GET_Endpoint(struct zx_gl_NotifyTo_s* x, int n);

int zx_gl_NotifyTo_NUM_SecurityMechID(struct zx_gl_NotifyTo_s* x);
int zx_gl_NotifyTo_NUM_Credential(struct zx_gl_NotifyTo_s* x);
int zx_gl_NotifyTo_NUM_Endpoint(struct zx_gl_NotifyTo_s* x);

struct zx_elem_s* zx_gl_NotifyTo_POP_SecurityMechID(struct zx_gl_NotifyTo_s* x);
struct zx_gl_Credential_s* zx_gl_NotifyTo_POP_Credential(struct zx_gl_NotifyTo_s* x);
struct zx_elem_s* zx_gl_NotifyTo_POP_Endpoint(struct zx_gl_NotifyTo_s* x);

void zx_gl_NotifyTo_PUSH_SecurityMechID(struct zx_gl_NotifyTo_s* x, struct zx_elem_s* y);
void zx_gl_NotifyTo_PUSH_Credential(struct zx_gl_NotifyTo_s* x, struct zx_gl_Credential_s* y);
void zx_gl_NotifyTo_PUSH_Endpoint(struct zx_gl_NotifyTo_s* x, struct zx_elem_s* y);

void zx_gl_NotifyTo_PUT_id(struct zx_gl_NotifyTo_s* x, struct zx_str* y);

void zx_gl_NotifyTo_PUT_SecurityMechID(struct zx_gl_NotifyTo_s* x, int n, struct zx_elem_s* y);
void zx_gl_NotifyTo_PUT_Credential(struct zx_gl_NotifyTo_s* x, int n, struct zx_gl_Credential_s* y);
void zx_gl_NotifyTo_PUT_Endpoint(struct zx_gl_NotifyTo_s* x, int n, struct zx_elem_s* y);

void zx_gl_NotifyTo_ADD_SecurityMechID(struct zx_gl_NotifyTo_s* x, int n, struct zx_elem_s* z);
void zx_gl_NotifyTo_ADD_Credential(struct zx_gl_NotifyTo_s* x, int n, struct zx_gl_Credential_s* z);
void zx_gl_NotifyTo_ADD_Endpoint(struct zx_gl_NotifyTo_s* x, int n, struct zx_elem_s* z);

void zx_gl_NotifyTo_DEL_SecurityMechID(struct zx_gl_NotifyTo_s* x, int n);
void zx_gl_NotifyTo_DEL_Credential(struct zx_gl_NotifyTo_s* x, int n);
void zx_gl_NotifyTo_DEL_Endpoint(struct zx_gl_NotifyTo_s* x, int n);

void zx_gl_NotifyTo_REV_SecurityMechID(struct zx_gl_NotifyTo_s* x);
void zx_gl_NotifyTo_REV_Credential(struct zx_gl_NotifyTo_s* x);
void zx_gl_NotifyTo_REV_Endpoint(struct zx_gl_NotifyTo_s* x);

#endif
/* -------------------------- gl_Point -------------------------- */
/* refby( zx_gl_shape_s zx_gl_MultiPoint_s ) */
#ifndef zx_gl_Point_EXT
#define zx_gl_Point_EXT
#endif

struct zx_gl_Point_s* zx_DEC_gl_Point(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Point_s* zx_NEW_gl_Point(struct zx_ctx* c);
void zx_FREE_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Point_s* zx_DEEP_CLONE_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x, int dup_strs);
void zx_DUP_STRS_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x);
int zx_WALK_SO_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x);
int zx_LEN_WO_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x);
char* zx_ENC_SO_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x, char* p);
char* zx_ENC_WO_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Point(struct zx_ctx* c, struct zx_gl_Point_s* x);

struct zx_gl_Point_s {
  ZX_ELEM_EXT
  zx_gl_Point_EXT
  struct zx_gl_coord_s* coord;	/* {1,1} nada */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Point_GET_gid(struct zx_gl_Point_s* x);
struct zx_str* zx_gl_Point_GET_srsName(struct zx_gl_Point_s* x);

struct zx_gl_coord_s* zx_gl_Point_GET_coord(struct zx_gl_Point_s* x, int n);

int zx_gl_Point_NUM_coord(struct zx_gl_Point_s* x);

struct zx_gl_coord_s* zx_gl_Point_POP_coord(struct zx_gl_Point_s* x);

void zx_gl_Point_PUSH_coord(struct zx_gl_Point_s* x, struct zx_gl_coord_s* y);

void zx_gl_Point_PUT_gid(struct zx_gl_Point_s* x, struct zx_str* y);
void zx_gl_Point_PUT_srsName(struct zx_gl_Point_s* x, struct zx_str* y);

void zx_gl_Point_PUT_coord(struct zx_gl_Point_s* x, int n, struct zx_gl_coord_s* y);

void zx_gl_Point_ADD_coord(struct zx_gl_Point_s* x, int n, struct zx_gl_coord_s* z);

void zx_gl_Point_DEL_coord(struct zx_gl_Point_s* x, int n);

void zx_gl_Point_REV_coord(struct zx_gl_Point_s* x);

#endif
/* -------------------------- gl_Polygon -------------------------- */
/* refby( zx_gl_MultiPolygon_s zx_gl_shape_s ) */
#ifndef zx_gl_Polygon_EXT
#define zx_gl_Polygon_EXT
#endif

struct zx_gl_Polygon_s* zx_DEC_gl_Polygon(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Polygon_s* zx_NEW_gl_Polygon(struct zx_ctx* c);
void zx_FREE_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Polygon_s* zx_DEEP_CLONE_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x, int dup_strs);
void zx_DUP_STRS_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x);
int zx_WALK_SO_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x);
int zx_LEN_WO_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x);
char* zx_ENC_SO_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x, char* p);
char* zx_ENC_WO_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Polygon(struct zx_ctx* c, struct zx_gl_Polygon_s* x);

struct zx_gl_Polygon_s {
  ZX_ELEM_EXT
  zx_gl_Polygon_EXT
  struct zx_gl_outerBoundaryIs_s* outerBoundaryIs;	/* {1,1}  */
  struct zx_gl_innerBoundaryIs_s* innerBoundaryIs;	/* {0,-1}  */
  struct zx_str* gid;	/* {0,1} attribute xs:ID */
  struct zx_str* srsName;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Polygon_GET_gid(struct zx_gl_Polygon_s* x);
struct zx_str* zx_gl_Polygon_GET_srsName(struct zx_gl_Polygon_s* x);

struct zx_gl_outerBoundaryIs_s* zx_gl_Polygon_GET_outerBoundaryIs(struct zx_gl_Polygon_s* x, int n);
struct zx_gl_innerBoundaryIs_s* zx_gl_Polygon_GET_innerBoundaryIs(struct zx_gl_Polygon_s* x, int n);

int zx_gl_Polygon_NUM_outerBoundaryIs(struct zx_gl_Polygon_s* x);
int zx_gl_Polygon_NUM_innerBoundaryIs(struct zx_gl_Polygon_s* x);

struct zx_gl_outerBoundaryIs_s* zx_gl_Polygon_POP_outerBoundaryIs(struct zx_gl_Polygon_s* x);
struct zx_gl_innerBoundaryIs_s* zx_gl_Polygon_POP_innerBoundaryIs(struct zx_gl_Polygon_s* x);

void zx_gl_Polygon_PUSH_outerBoundaryIs(struct zx_gl_Polygon_s* x, struct zx_gl_outerBoundaryIs_s* y);
void zx_gl_Polygon_PUSH_innerBoundaryIs(struct zx_gl_Polygon_s* x, struct zx_gl_innerBoundaryIs_s* y);

void zx_gl_Polygon_PUT_gid(struct zx_gl_Polygon_s* x, struct zx_str* y);
void zx_gl_Polygon_PUT_srsName(struct zx_gl_Polygon_s* x, struct zx_str* y);

void zx_gl_Polygon_PUT_outerBoundaryIs(struct zx_gl_Polygon_s* x, int n, struct zx_gl_outerBoundaryIs_s* y);
void zx_gl_Polygon_PUT_innerBoundaryIs(struct zx_gl_Polygon_s* x, int n, struct zx_gl_innerBoundaryIs_s* y);

void zx_gl_Polygon_ADD_outerBoundaryIs(struct zx_gl_Polygon_s* x, int n, struct zx_gl_outerBoundaryIs_s* z);
void zx_gl_Polygon_ADD_innerBoundaryIs(struct zx_gl_Polygon_s* x, int n, struct zx_gl_innerBoundaryIs_s* z);

void zx_gl_Polygon_DEL_outerBoundaryIs(struct zx_gl_Polygon_s* x, int n);
void zx_gl_Polygon_DEL_innerBoundaryIs(struct zx_gl_Polygon_s* x, int n);

void zx_gl_Polygon_REV_outerBoundaryIs(struct zx_gl_Polygon_s* x);
void zx_gl_Polygon_REV_innerBoundaryIs(struct zx_gl_Polygon_s* x);

#endif
/* -------------------------- gl_Query -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_Query_EXT
#define zx_gl_Query_EXT
#endif

struct zx_gl_Query_s* zx_DEC_gl_Query(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Query_s* zx_NEW_gl_Query(struct zx_ctx* c);
void zx_FREE_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Query_s* zx_DEEP_CLONE_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x, int dup_strs);
void zx_DUP_STRS_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x);
int zx_WALK_SO_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x);
int zx_LEN_WO_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x);
char* zx_ENC_SO_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x, char* p);
char* zx_ENC_WO_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Query(struct zx_ctx* c, struct zx_gl_Query_s* x);

struct zx_gl_Query_s {
  ZX_ELEM_EXT
  zx_gl_Query_EXT
  struct zx_gl_ResourceID_s* ResourceID;	/* {0,1} nada */
  struct zx_gl_EncryptedResourceID_s* EncryptedResourceID;	/* {0,1} nada */
  struct zx_gl_Subscription_s* Subscription;	/* {0,-1} nada */
  struct zx_gl_QueryItem_s* QueryItem;	/* {0,-1}  */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Query_GET_id(struct zx_gl_Query_s* x);

struct zx_gl_ResourceID_s* zx_gl_Query_GET_ResourceID(struct zx_gl_Query_s* x, int n);
struct zx_gl_EncryptedResourceID_s* zx_gl_Query_GET_EncryptedResourceID(struct zx_gl_Query_s* x, int n);
struct zx_gl_Subscription_s* zx_gl_Query_GET_Subscription(struct zx_gl_Query_s* x, int n);
struct zx_gl_QueryItem_s* zx_gl_Query_GET_QueryItem(struct zx_gl_Query_s* x, int n);
struct zx_gl_Extension_s* zx_gl_Query_GET_Extension(struct zx_gl_Query_s* x, int n);

int zx_gl_Query_NUM_ResourceID(struct zx_gl_Query_s* x);
int zx_gl_Query_NUM_EncryptedResourceID(struct zx_gl_Query_s* x);
int zx_gl_Query_NUM_Subscription(struct zx_gl_Query_s* x);
int zx_gl_Query_NUM_QueryItem(struct zx_gl_Query_s* x);
int zx_gl_Query_NUM_Extension(struct zx_gl_Query_s* x);

struct zx_gl_ResourceID_s* zx_gl_Query_POP_ResourceID(struct zx_gl_Query_s* x);
struct zx_gl_EncryptedResourceID_s* zx_gl_Query_POP_EncryptedResourceID(struct zx_gl_Query_s* x);
struct zx_gl_Subscription_s* zx_gl_Query_POP_Subscription(struct zx_gl_Query_s* x);
struct zx_gl_QueryItem_s* zx_gl_Query_POP_QueryItem(struct zx_gl_Query_s* x);
struct zx_gl_Extension_s* zx_gl_Query_POP_Extension(struct zx_gl_Query_s* x);

void zx_gl_Query_PUSH_ResourceID(struct zx_gl_Query_s* x, struct zx_gl_ResourceID_s* y);
void zx_gl_Query_PUSH_EncryptedResourceID(struct zx_gl_Query_s* x, struct zx_gl_EncryptedResourceID_s* y);
void zx_gl_Query_PUSH_Subscription(struct zx_gl_Query_s* x, struct zx_gl_Subscription_s* y);
void zx_gl_Query_PUSH_QueryItem(struct zx_gl_Query_s* x, struct zx_gl_QueryItem_s* y);
void zx_gl_Query_PUSH_Extension(struct zx_gl_Query_s* x, struct zx_gl_Extension_s* y);

void zx_gl_Query_PUT_id(struct zx_gl_Query_s* x, struct zx_str* y);

void zx_gl_Query_PUT_ResourceID(struct zx_gl_Query_s* x, int n, struct zx_gl_ResourceID_s* y);
void zx_gl_Query_PUT_EncryptedResourceID(struct zx_gl_Query_s* x, int n, struct zx_gl_EncryptedResourceID_s* y);
void zx_gl_Query_PUT_Subscription(struct zx_gl_Query_s* x, int n, struct zx_gl_Subscription_s* y);
void zx_gl_Query_PUT_QueryItem(struct zx_gl_Query_s* x, int n, struct zx_gl_QueryItem_s* y);
void zx_gl_Query_PUT_Extension(struct zx_gl_Query_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_Query_ADD_ResourceID(struct zx_gl_Query_s* x, int n, struct zx_gl_ResourceID_s* z);
void zx_gl_Query_ADD_EncryptedResourceID(struct zx_gl_Query_s* x, int n, struct zx_gl_EncryptedResourceID_s* z);
void zx_gl_Query_ADD_Subscription(struct zx_gl_Query_s* x, int n, struct zx_gl_Subscription_s* z);
void zx_gl_Query_ADD_QueryItem(struct zx_gl_Query_s* x, int n, struct zx_gl_QueryItem_s* z);
void zx_gl_Query_ADD_Extension(struct zx_gl_Query_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_Query_DEL_ResourceID(struct zx_gl_Query_s* x, int n);
void zx_gl_Query_DEL_EncryptedResourceID(struct zx_gl_Query_s* x, int n);
void zx_gl_Query_DEL_Subscription(struct zx_gl_Query_s* x, int n);
void zx_gl_Query_DEL_QueryItem(struct zx_gl_Query_s* x, int n);
void zx_gl_Query_DEL_Extension(struct zx_gl_Query_s* x, int n);

void zx_gl_Query_REV_ResourceID(struct zx_gl_Query_s* x);
void zx_gl_Query_REV_EncryptedResourceID(struct zx_gl_Query_s* x);
void zx_gl_Query_REV_Subscription(struct zx_gl_Query_s* x);
void zx_gl_Query_REV_QueryItem(struct zx_gl_Query_s* x);
void zx_gl_Query_REV_Extension(struct zx_gl_Query_s* x);

#endif
/* -------------------------- gl_QueryItem -------------------------- */
/* refby( zx_gl_Query_s ) */
#ifndef zx_gl_QueryItem_EXT
#define zx_gl_QueryItem_EXT
#endif

struct zx_gl_QueryItem_s* zx_DEC_gl_QueryItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_QueryItem_s* zx_NEW_gl_QueryItem(struct zx_ctx* c);
void zx_FREE_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_QueryItem_s* zx_DEEP_CLONE_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x, int dup_strs);
void zx_DUP_STRS_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x);
int zx_WALK_SO_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x);
int zx_LEN_WO_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x);
char* zx_ENC_SO_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x, char* p);
char* zx_ENC_WO_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_QueryItem(struct zx_ctx* c, struct zx_gl_QueryItem_s* x);

struct zx_gl_QueryItem_s {
  ZX_ELEM_EXT
  zx_gl_QueryItem_EXT
  struct zx_gl_AreaComparison_s* AreaComparison;	/* {0,-1}  */
  struct zx_gl_eqop_s* eqop;	/* {0,1}  */
  struct zx_gl_geoinfo_s* geoinfo;	/* {0,1}  */
  struct zx_gl_loc_type_s* loc_type;	/* {0,1}  */
  struct zx_gl_prio_s* prio;	/* {0,1}  */
  struct zx_gl_Extension_s* Extension;	/* {0,1} nada */
  struct zx_str* count;	/* {0,1} attribute xs:nonNegativeInteger */
  struct zx_str* offset;	/* {0,1} attribute xs:integer */
  struct zx_str* setID;	/* {0,1} attribute xs:string */
  struct zx_str* setReq;	/* {0,1} attribute Static */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_QueryItem_GET_count(struct zx_gl_QueryItem_s* x);
struct zx_str* zx_gl_QueryItem_GET_offset(struct zx_gl_QueryItem_s* x);
struct zx_str* zx_gl_QueryItem_GET_setID(struct zx_gl_QueryItem_s* x);
struct zx_str* zx_gl_QueryItem_GET_setReq(struct zx_gl_QueryItem_s* x);

struct zx_gl_AreaComparison_s* zx_gl_QueryItem_GET_AreaComparison(struct zx_gl_QueryItem_s* x, int n);
struct zx_gl_eqop_s* zx_gl_QueryItem_GET_eqop(struct zx_gl_QueryItem_s* x, int n);
struct zx_gl_geoinfo_s* zx_gl_QueryItem_GET_geoinfo(struct zx_gl_QueryItem_s* x, int n);
struct zx_gl_loc_type_s* zx_gl_QueryItem_GET_loc_type(struct zx_gl_QueryItem_s* x, int n);
struct zx_gl_prio_s* zx_gl_QueryItem_GET_prio(struct zx_gl_QueryItem_s* x, int n);
struct zx_gl_Extension_s* zx_gl_QueryItem_GET_Extension(struct zx_gl_QueryItem_s* x, int n);

int zx_gl_QueryItem_NUM_AreaComparison(struct zx_gl_QueryItem_s* x);
int zx_gl_QueryItem_NUM_eqop(struct zx_gl_QueryItem_s* x);
int zx_gl_QueryItem_NUM_geoinfo(struct zx_gl_QueryItem_s* x);
int zx_gl_QueryItem_NUM_loc_type(struct zx_gl_QueryItem_s* x);
int zx_gl_QueryItem_NUM_prio(struct zx_gl_QueryItem_s* x);
int zx_gl_QueryItem_NUM_Extension(struct zx_gl_QueryItem_s* x);

struct zx_gl_AreaComparison_s* zx_gl_QueryItem_POP_AreaComparison(struct zx_gl_QueryItem_s* x);
struct zx_gl_eqop_s* zx_gl_QueryItem_POP_eqop(struct zx_gl_QueryItem_s* x);
struct zx_gl_geoinfo_s* zx_gl_QueryItem_POP_geoinfo(struct zx_gl_QueryItem_s* x);
struct zx_gl_loc_type_s* zx_gl_QueryItem_POP_loc_type(struct zx_gl_QueryItem_s* x);
struct zx_gl_prio_s* zx_gl_QueryItem_POP_prio(struct zx_gl_QueryItem_s* x);
struct zx_gl_Extension_s* zx_gl_QueryItem_POP_Extension(struct zx_gl_QueryItem_s* x);

void zx_gl_QueryItem_PUSH_AreaComparison(struct zx_gl_QueryItem_s* x, struct zx_gl_AreaComparison_s* y);
void zx_gl_QueryItem_PUSH_eqop(struct zx_gl_QueryItem_s* x, struct zx_gl_eqop_s* y);
void zx_gl_QueryItem_PUSH_geoinfo(struct zx_gl_QueryItem_s* x, struct zx_gl_geoinfo_s* y);
void zx_gl_QueryItem_PUSH_loc_type(struct zx_gl_QueryItem_s* x, struct zx_gl_loc_type_s* y);
void zx_gl_QueryItem_PUSH_prio(struct zx_gl_QueryItem_s* x, struct zx_gl_prio_s* y);
void zx_gl_QueryItem_PUSH_Extension(struct zx_gl_QueryItem_s* x, struct zx_gl_Extension_s* y);

void zx_gl_QueryItem_PUT_count(struct zx_gl_QueryItem_s* x, struct zx_str* y);
void zx_gl_QueryItem_PUT_offset(struct zx_gl_QueryItem_s* x, struct zx_str* y);
void zx_gl_QueryItem_PUT_setID(struct zx_gl_QueryItem_s* x, struct zx_str* y);
void zx_gl_QueryItem_PUT_setReq(struct zx_gl_QueryItem_s* x, struct zx_str* y);

void zx_gl_QueryItem_PUT_AreaComparison(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_AreaComparison_s* y);
void zx_gl_QueryItem_PUT_eqop(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_eqop_s* y);
void zx_gl_QueryItem_PUT_geoinfo(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_geoinfo_s* y);
void zx_gl_QueryItem_PUT_loc_type(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_loc_type_s* y);
void zx_gl_QueryItem_PUT_prio(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_prio_s* y);
void zx_gl_QueryItem_PUT_Extension(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_QueryItem_ADD_AreaComparison(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_AreaComparison_s* z);
void zx_gl_QueryItem_ADD_eqop(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_eqop_s* z);
void zx_gl_QueryItem_ADD_geoinfo(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_geoinfo_s* z);
void zx_gl_QueryItem_ADD_loc_type(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_loc_type_s* z);
void zx_gl_QueryItem_ADD_prio(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_prio_s* z);
void zx_gl_QueryItem_ADD_Extension(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_QueryItem_DEL_AreaComparison(struct zx_gl_QueryItem_s* x, int n);
void zx_gl_QueryItem_DEL_eqop(struct zx_gl_QueryItem_s* x, int n);
void zx_gl_QueryItem_DEL_geoinfo(struct zx_gl_QueryItem_s* x, int n);
void zx_gl_QueryItem_DEL_loc_type(struct zx_gl_QueryItem_s* x, int n);
void zx_gl_QueryItem_DEL_prio(struct zx_gl_QueryItem_s* x, int n);
void zx_gl_QueryItem_DEL_Extension(struct zx_gl_QueryItem_s* x, int n);

void zx_gl_QueryItem_REV_AreaComparison(struct zx_gl_QueryItem_s* x);
void zx_gl_QueryItem_REV_eqop(struct zx_gl_QueryItem_s* x);
void zx_gl_QueryItem_REV_geoinfo(struct zx_gl_QueryItem_s* x);
void zx_gl_QueryItem_REV_loc_type(struct zx_gl_QueryItem_s* x);
void zx_gl_QueryItem_REV_prio(struct zx_gl_QueryItem_s* x);
void zx_gl_QueryItem_REV_Extension(struct zx_gl_QueryItem_s* x);

#endif
/* -------------------------- gl_QueryResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_gl_QueryResponse_EXT
#define zx_gl_QueryResponse_EXT
#endif

struct zx_gl_QueryResponse_s* zx_DEC_gl_QueryResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_QueryResponse_s* zx_NEW_gl_QueryResponse(struct zx_ctx* c);
void zx_FREE_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_QueryResponse_s* zx_DEEP_CLONE_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x, int dup_strs);
void zx_DUP_STRS_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x);
int zx_WALK_SO_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x);
int zx_LEN_WO_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x);
char* zx_ENC_SO_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x, char* p);
char* zx_ENC_WO_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_QueryResponse(struct zx_ctx* c, struct zx_gl_QueryResponse_s* x);

struct zx_gl_QueryResponse_s {
  ZX_ELEM_EXT
  zx_gl_QueryResponse_EXT
  struct zx_gl_Status_s* Status;	/* {1,1} nada */
  struct zx_gl_Data_s* Data;	/* {0,-1}  */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* itemIDRef;	/* {0,1} attribute xs:string */
  struct zx_str* timeStamp;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_QueryResponse_GET_id(struct zx_gl_QueryResponse_s* x);
struct zx_str* zx_gl_QueryResponse_GET_itemIDRef(struct zx_gl_QueryResponse_s* x);
struct zx_str* zx_gl_QueryResponse_GET_timeStamp(struct zx_gl_QueryResponse_s* x);

struct zx_gl_Status_s* zx_gl_QueryResponse_GET_Status(struct zx_gl_QueryResponse_s* x, int n);
struct zx_gl_Data_s* zx_gl_QueryResponse_GET_Data(struct zx_gl_QueryResponse_s* x, int n);
struct zx_gl_Extension_s* zx_gl_QueryResponse_GET_Extension(struct zx_gl_QueryResponse_s* x, int n);

int zx_gl_QueryResponse_NUM_Status(struct zx_gl_QueryResponse_s* x);
int zx_gl_QueryResponse_NUM_Data(struct zx_gl_QueryResponse_s* x);
int zx_gl_QueryResponse_NUM_Extension(struct zx_gl_QueryResponse_s* x);

struct zx_gl_Status_s* zx_gl_QueryResponse_POP_Status(struct zx_gl_QueryResponse_s* x);
struct zx_gl_Data_s* zx_gl_QueryResponse_POP_Data(struct zx_gl_QueryResponse_s* x);
struct zx_gl_Extension_s* zx_gl_QueryResponse_POP_Extension(struct zx_gl_QueryResponse_s* x);

void zx_gl_QueryResponse_PUSH_Status(struct zx_gl_QueryResponse_s* x, struct zx_gl_Status_s* y);
void zx_gl_QueryResponse_PUSH_Data(struct zx_gl_QueryResponse_s* x, struct zx_gl_Data_s* y);
void zx_gl_QueryResponse_PUSH_Extension(struct zx_gl_QueryResponse_s* x, struct zx_gl_Extension_s* y);

void zx_gl_QueryResponse_PUT_id(struct zx_gl_QueryResponse_s* x, struct zx_str* y);
void zx_gl_QueryResponse_PUT_itemIDRef(struct zx_gl_QueryResponse_s* x, struct zx_str* y);
void zx_gl_QueryResponse_PUT_timeStamp(struct zx_gl_QueryResponse_s* x, struct zx_str* y);

void zx_gl_QueryResponse_PUT_Status(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Status_s* y);
void zx_gl_QueryResponse_PUT_Data(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Data_s* y);
void zx_gl_QueryResponse_PUT_Extension(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_QueryResponse_ADD_Status(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Status_s* z);
void zx_gl_QueryResponse_ADD_Data(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Data_s* z);
void zx_gl_QueryResponse_ADD_Extension(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_QueryResponse_DEL_Status(struct zx_gl_QueryResponse_s* x, int n);
void zx_gl_QueryResponse_DEL_Data(struct zx_gl_QueryResponse_s* x, int n);
void zx_gl_QueryResponse_DEL_Extension(struct zx_gl_QueryResponse_s* x, int n);

void zx_gl_QueryResponse_REV_Status(struct zx_gl_QueryResponse_s* x);
void zx_gl_QueryResponse_REV_Data(struct zx_gl_QueryResponse_s* x);
void zx_gl_QueryResponse_REV_Extension(struct zx_gl_QueryResponse_s* x);

#endif
/* -------------------------- gl_RefItem -------------------------- */
/* refby( zx_gl_Subscription_s ) */
#ifndef zx_gl_RefItem_EXT
#define zx_gl_RefItem_EXT
#endif

struct zx_gl_RefItem_s* zx_DEC_gl_RefItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_RefItem_s* zx_NEW_gl_RefItem(struct zx_ctx* c);
void zx_FREE_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_RefItem_s* zx_DEEP_CLONE_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x, int dup_strs);
void zx_DUP_STRS_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x);
int zx_WALK_SO_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x);
int zx_LEN_WO_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x);
char* zx_ENC_SO_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x, char* p);
char* zx_ENC_WO_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_RefItem(struct zx_ctx* c, struct zx_gl_RefItem_s* x);

struct zx_gl_RefItem_s {
  ZX_ELEM_EXT
  zx_gl_RefItem_EXT
  struct zx_str* subscriptionID;	/* {0,1} attribute xs:string */
  struct zx_str* ItemIDRef;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_RefItem_GET_subscriptionID(struct zx_gl_RefItem_s* x);
struct zx_str* zx_gl_RefItem_GET_ItemIDRef(struct zx_gl_RefItem_s* x);





void zx_gl_RefItem_PUT_subscriptionID(struct zx_gl_RefItem_s* x, struct zx_str* y);
void zx_gl_RefItem_PUT_ItemIDRef(struct zx_gl_RefItem_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_ResourceID -------------------------- */
/* refby( zx_gl_Modify_s zx_gl_Delete_s zx_gl_Create_s zx_gl_Query_s ) */
#ifndef zx_gl_ResourceID_EXT
#define zx_gl_ResourceID_EXT
#endif

struct zx_gl_ResourceID_s* zx_DEC_gl_ResourceID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_ResourceID_s* zx_NEW_gl_ResourceID(struct zx_ctx* c);
void zx_FREE_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_ResourceID_s* zx_DEEP_CLONE_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x, int dup_strs);
void zx_DUP_STRS_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x);
int zx_WALK_SO_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x);
int zx_LEN_WO_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x);
char* zx_ENC_SO_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x, char* p);
char* zx_ENC_WO_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_ResourceID(struct zx_ctx* c, struct zx_gl_ResourceID_s* x);

struct zx_gl_ResourceID_s {
  ZX_ELEM_EXT
  zx_gl_ResourceID_EXT
  struct zx_str* id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_ResourceID_GET_id(struct zx_gl_ResourceID_s* x);





void zx_gl_ResourceID_PUT_id(struct zx_gl_ResourceID_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_Status -------------------------- */
/* refby( zx_gl_QueryResponse_s zx_gl_CreateResponse_s zx_gl_Status_s zx_gl_NotifyResponse_s zx_gl_ModifyResponse_s zx_gl_DeleteResponse_s ) */
#ifndef zx_gl_Status_EXT
#define zx_gl_Status_EXT
#endif

struct zx_gl_Status_s* zx_DEC_gl_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Status_s* zx_NEW_gl_Status(struct zx_ctx* c);
void zx_FREE_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Status_s* zx_DEEP_CLONE_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x, int dup_strs);
void zx_DUP_STRS_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x);
int zx_WALK_SO_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x);
int zx_LEN_WO_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x);
char* zx_ENC_SO_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x, char* p);
char* zx_ENC_WO_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Status(struct zx_ctx* c, struct zx_gl_Status_s* x);

struct zx_gl_Status_s {
  ZX_ELEM_EXT
  zx_gl_Status_EXT
  struct zx_gl_Status_s* Status;	/* {0,-1} nada */
  struct zx_str* code;	/* {1,1} attribute xs:QName */
  struct zx_str* ref;	/* {0,1} attribute xs:string */
  struct zx_str* comment;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Status_GET_code(struct zx_gl_Status_s* x);
struct zx_str* zx_gl_Status_GET_ref(struct zx_gl_Status_s* x);
struct zx_str* zx_gl_Status_GET_comment(struct zx_gl_Status_s* x);

struct zx_gl_Status_s* zx_gl_Status_GET_Status(struct zx_gl_Status_s* x, int n);

int zx_gl_Status_NUM_Status(struct zx_gl_Status_s* x);

struct zx_gl_Status_s* zx_gl_Status_POP_Status(struct zx_gl_Status_s* x);

void zx_gl_Status_PUSH_Status(struct zx_gl_Status_s* x, struct zx_gl_Status_s* y);

void zx_gl_Status_PUT_code(struct zx_gl_Status_s* x, struct zx_str* y);
void zx_gl_Status_PUT_ref(struct zx_gl_Status_s* x, struct zx_str* y);
void zx_gl_Status_PUT_comment(struct zx_gl_Status_s* x, struct zx_str* y);

void zx_gl_Status_PUT_Status(struct zx_gl_Status_s* x, int n, struct zx_gl_Status_s* y);

void zx_gl_Status_ADD_Status(struct zx_gl_Status_s* x, int n, struct zx_gl_Status_s* z);

void zx_gl_Status_DEL_Status(struct zx_gl_Status_s* x, int n);

void zx_gl_Status_REV_Status(struct zx_gl_Status_s* x);

#endif
/* -------------------------- gl_Subscription -------------------------- */
/* refby( zx_gl_Modify_s zx_gl_Create_s zx_gl_Query_s ) */
#ifndef zx_gl_Subscription_EXT
#define zx_gl_Subscription_EXT
#endif

struct zx_gl_Subscription_s* zx_DEC_gl_Subscription(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Subscription_s* zx_NEW_gl_Subscription(struct zx_ctx* c);
void zx_FREE_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Subscription_s* zx_DEEP_CLONE_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x, int dup_strs);
void zx_DUP_STRS_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x);
int zx_WALK_SO_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x);
int zx_LEN_WO_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x);
char* zx_ENC_SO_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x, char* p);
char* zx_ENC_WO_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Subscription(struct zx_ctx* c, struct zx_gl_Subscription_s* x);

struct zx_gl_Subscription_s {
  ZX_ELEM_EXT
  zx_gl_Subscription_EXT
  struct zx_gl_ItemSelection_s* ItemSelection;	/* {0,-1} nada */
  struct zx_gl_RefItem_s* RefItem;	/* {0,-1}  */
  struct zx_gl_NotifyTo_s* NotifyTo;	/* {0,1}  */
  struct zx_gl_NotifyAdminTo_s* NotifyAdminTo;	/* {0,1}  */
  struct zx_elem_s* Aggregation;	/* {0,1} gl:AggregationType */
  struct zx_gl_Trigger_s* Trigger;	/* {0,1}  */
  struct zx_gl_Extension_s* Extension;	/* {0,-1} nada */
  struct zx_str* starts;	/* {0,1} attribute xs:dateTime */
  struct zx_str* expires;	/* {0,1} attribute xs:dateTime */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* subscriptionID;	/* {1,1} attribute xs:string */
  struct zx_str* includeData;	/* {0,1} attribute Yes */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_Subscription_GET_starts(struct zx_gl_Subscription_s* x);
struct zx_str* zx_gl_Subscription_GET_expires(struct zx_gl_Subscription_s* x);
struct zx_str* zx_gl_Subscription_GET_id(struct zx_gl_Subscription_s* x);
struct zx_str* zx_gl_Subscription_GET_subscriptionID(struct zx_gl_Subscription_s* x);
struct zx_str* zx_gl_Subscription_GET_includeData(struct zx_gl_Subscription_s* x);

struct zx_gl_ItemSelection_s* zx_gl_Subscription_GET_ItemSelection(struct zx_gl_Subscription_s* x, int n);
struct zx_gl_RefItem_s* zx_gl_Subscription_GET_RefItem(struct zx_gl_Subscription_s* x, int n);
struct zx_gl_NotifyTo_s* zx_gl_Subscription_GET_NotifyTo(struct zx_gl_Subscription_s* x, int n);
struct zx_gl_NotifyAdminTo_s* zx_gl_Subscription_GET_NotifyAdminTo(struct zx_gl_Subscription_s* x, int n);
struct zx_elem_s* zx_gl_Subscription_GET_Aggregation(struct zx_gl_Subscription_s* x, int n);
struct zx_gl_Trigger_s* zx_gl_Subscription_GET_Trigger(struct zx_gl_Subscription_s* x, int n);
struct zx_gl_Extension_s* zx_gl_Subscription_GET_Extension(struct zx_gl_Subscription_s* x, int n);

int zx_gl_Subscription_NUM_ItemSelection(struct zx_gl_Subscription_s* x);
int zx_gl_Subscription_NUM_RefItem(struct zx_gl_Subscription_s* x);
int zx_gl_Subscription_NUM_NotifyTo(struct zx_gl_Subscription_s* x);
int zx_gl_Subscription_NUM_NotifyAdminTo(struct zx_gl_Subscription_s* x);
int zx_gl_Subscription_NUM_Aggregation(struct zx_gl_Subscription_s* x);
int zx_gl_Subscription_NUM_Trigger(struct zx_gl_Subscription_s* x);
int zx_gl_Subscription_NUM_Extension(struct zx_gl_Subscription_s* x);

struct zx_gl_ItemSelection_s* zx_gl_Subscription_POP_ItemSelection(struct zx_gl_Subscription_s* x);
struct zx_gl_RefItem_s* zx_gl_Subscription_POP_RefItem(struct zx_gl_Subscription_s* x);
struct zx_gl_NotifyTo_s* zx_gl_Subscription_POP_NotifyTo(struct zx_gl_Subscription_s* x);
struct zx_gl_NotifyAdminTo_s* zx_gl_Subscription_POP_NotifyAdminTo(struct zx_gl_Subscription_s* x);
struct zx_elem_s* zx_gl_Subscription_POP_Aggregation(struct zx_gl_Subscription_s* x);
struct zx_gl_Trigger_s* zx_gl_Subscription_POP_Trigger(struct zx_gl_Subscription_s* x);
struct zx_gl_Extension_s* zx_gl_Subscription_POP_Extension(struct zx_gl_Subscription_s* x);

void zx_gl_Subscription_PUSH_ItemSelection(struct zx_gl_Subscription_s* x, struct zx_gl_ItemSelection_s* y);
void zx_gl_Subscription_PUSH_RefItem(struct zx_gl_Subscription_s* x, struct zx_gl_RefItem_s* y);
void zx_gl_Subscription_PUSH_NotifyTo(struct zx_gl_Subscription_s* x, struct zx_gl_NotifyTo_s* y);
void zx_gl_Subscription_PUSH_NotifyAdminTo(struct zx_gl_Subscription_s* x, struct zx_gl_NotifyAdminTo_s* y);
void zx_gl_Subscription_PUSH_Aggregation(struct zx_gl_Subscription_s* x, struct zx_elem_s* y);
void zx_gl_Subscription_PUSH_Trigger(struct zx_gl_Subscription_s* x, struct zx_gl_Trigger_s* y);
void zx_gl_Subscription_PUSH_Extension(struct zx_gl_Subscription_s* x, struct zx_gl_Extension_s* y);

void zx_gl_Subscription_PUT_starts(struct zx_gl_Subscription_s* x, struct zx_str* y);
void zx_gl_Subscription_PUT_expires(struct zx_gl_Subscription_s* x, struct zx_str* y);
void zx_gl_Subscription_PUT_id(struct zx_gl_Subscription_s* x, struct zx_str* y);
void zx_gl_Subscription_PUT_subscriptionID(struct zx_gl_Subscription_s* x, struct zx_str* y);
void zx_gl_Subscription_PUT_includeData(struct zx_gl_Subscription_s* x, struct zx_str* y);

void zx_gl_Subscription_PUT_ItemSelection(struct zx_gl_Subscription_s* x, int n, struct zx_gl_ItemSelection_s* y);
void zx_gl_Subscription_PUT_RefItem(struct zx_gl_Subscription_s* x, int n, struct zx_gl_RefItem_s* y);
void zx_gl_Subscription_PUT_NotifyTo(struct zx_gl_Subscription_s* x, int n, struct zx_gl_NotifyTo_s* y);
void zx_gl_Subscription_PUT_NotifyAdminTo(struct zx_gl_Subscription_s* x, int n, struct zx_gl_NotifyAdminTo_s* y);
void zx_gl_Subscription_PUT_Aggregation(struct zx_gl_Subscription_s* x, int n, struct zx_elem_s* y);
void zx_gl_Subscription_PUT_Trigger(struct zx_gl_Subscription_s* x, int n, struct zx_gl_Trigger_s* y);
void zx_gl_Subscription_PUT_Extension(struct zx_gl_Subscription_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_Subscription_ADD_ItemSelection(struct zx_gl_Subscription_s* x, int n, struct zx_gl_ItemSelection_s* z);
void zx_gl_Subscription_ADD_RefItem(struct zx_gl_Subscription_s* x, int n, struct zx_gl_RefItem_s* z);
void zx_gl_Subscription_ADD_NotifyTo(struct zx_gl_Subscription_s* x, int n, struct zx_gl_NotifyTo_s* z);
void zx_gl_Subscription_ADD_NotifyAdminTo(struct zx_gl_Subscription_s* x, int n, struct zx_gl_NotifyAdminTo_s* z);
void zx_gl_Subscription_ADD_Aggregation(struct zx_gl_Subscription_s* x, int n, struct zx_elem_s* z);
void zx_gl_Subscription_ADD_Trigger(struct zx_gl_Subscription_s* x, int n, struct zx_gl_Trigger_s* z);
void zx_gl_Subscription_ADD_Extension(struct zx_gl_Subscription_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_Subscription_DEL_ItemSelection(struct zx_gl_Subscription_s* x, int n);
void zx_gl_Subscription_DEL_RefItem(struct zx_gl_Subscription_s* x, int n);
void zx_gl_Subscription_DEL_NotifyTo(struct zx_gl_Subscription_s* x, int n);
void zx_gl_Subscription_DEL_NotifyAdminTo(struct zx_gl_Subscription_s* x, int n);
void zx_gl_Subscription_DEL_Aggregation(struct zx_gl_Subscription_s* x, int n);
void zx_gl_Subscription_DEL_Trigger(struct zx_gl_Subscription_s* x, int n);
void zx_gl_Subscription_DEL_Extension(struct zx_gl_Subscription_s* x, int n);

void zx_gl_Subscription_REV_ItemSelection(struct zx_gl_Subscription_s* x);
void zx_gl_Subscription_REV_RefItem(struct zx_gl_Subscription_s* x);
void zx_gl_Subscription_REV_NotifyTo(struct zx_gl_Subscription_s* x);
void zx_gl_Subscription_REV_NotifyAdminTo(struct zx_gl_Subscription_s* x);
void zx_gl_Subscription_REV_Aggregation(struct zx_gl_Subscription_s* x);
void zx_gl_Subscription_REV_Trigger(struct zx_gl_Subscription_s* x);
void zx_gl_Subscription_REV_Extension(struct zx_gl_Subscription_s* x);

#endif
/* -------------------------- gl_Trigger -------------------------- */
/* refby( zx_gl_Subscription_s ) */
#ifndef zx_gl_Trigger_EXT
#define zx_gl_Trigger_EXT
#endif

struct zx_gl_Trigger_s* zx_DEC_gl_Trigger(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_Trigger_s* zx_NEW_gl_Trigger(struct zx_ctx* c);
void zx_FREE_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_Trigger_s* zx_DEEP_CLONE_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x, int dup_strs);
void zx_DUP_STRS_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x);
int zx_WALK_SO_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x);
int zx_LEN_WO_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x);
char* zx_ENC_SO_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x, char* p);
char* zx_ENC_WO_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_Trigger(struct zx_ctx* c, struct zx_gl_Trigger_s* x);

struct zx_gl_Trigger_s {
  ZX_ELEM_EXT
  zx_gl_Trigger_EXT
  struct zx_elem_s* Granularity;	/* {0,1} xs:positiveInteger */
  struct zx_elem_s* Interval;	/* {0,1} xs:duration */
  struct zx_gl_ms_action_s* ms_action;	/* {0,1}  */
  struct zx_gl_ChangeArea_s* ChangeArea;	/* {0,-1}  */
  struct zx_gl_Extension_s* Extension;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_gl_Trigger_GET_Granularity(struct zx_gl_Trigger_s* x, int n);
struct zx_elem_s* zx_gl_Trigger_GET_Interval(struct zx_gl_Trigger_s* x, int n);
struct zx_gl_ms_action_s* zx_gl_Trigger_GET_ms_action(struct zx_gl_Trigger_s* x, int n);
struct zx_gl_ChangeArea_s* zx_gl_Trigger_GET_ChangeArea(struct zx_gl_Trigger_s* x, int n);
struct zx_gl_Extension_s* zx_gl_Trigger_GET_Extension(struct zx_gl_Trigger_s* x, int n);

int zx_gl_Trigger_NUM_Granularity(struct zx_gl_Trigger_s* x);
int zx_gl_Trigger_NUM_Interval(struct zx_gl_Trigger_s* x);
int zx_gl_Trigger_NUM_ms_action(struct zx_gl_Trigger_s* x);
int zx_gl_Trigger_NUM_ChangeArea(struct zx_gl_Trigger_s* x);
int zx_gl_Trigger_NUM_Extension(struct zx_gl_Trigger_s* x);

struct zx_elem_s* zx_gl_Trigger_POP_Granularity(struct zx_gl_Trigger_s* x);
struct zx_elem_s* zx_gl_Trigger_POP_Interval(struct zx_gl_Trigger_s* x);
struct zx_gl_ms_action_s* zx_gl_Trigger_POP_ms_action(struct zx_gl_Trigger_s* x);
struct zx_gl_ChangeArea_s* zx_gl_Trigger_POP_ChangeArea(struct zx_gl_Trigger_s* x);
struct zx_gl_Extension_s* zx_gl_Trigger_POP_Extension(struct zx_gl_Trigger_s* x);

void zx_gl_Trigger_PUSH_Granularity(struct zx_gl_Trigger_s* x, struct zx_elem_s* y);
void zx_gl_Trigger_PUSH_Interval(struct zx_gl_Trigger_s* x, struct zx_elem_s* y);
void zx_gl_Trigger_PUSH_ms_action(struct zx_gl_Trigger_s* x, struct zx_gl_ms_action_s* y);
void zx_gl_Trigger_PUSH_ChangeArea(struct zx_gl_Trigger_s* x, struct zx_gl_ChangeArea_s* y);
void zx_gl_Trigger_PUSH_Extension(struct zx_gl_Trigger_s* x, struct zx_gl_Extension_s* y);


void zx_gl_Trigger_PUT_Granularity(struct zx_gl_Trigger_s* x, int n, struct zx_elem_s* y);
void zx_gl_Trigger_PUT_Interval(struct zx_gl_Trigger_s* x, int n, struct zx_elem_s* y);
void zx_gl_Trigger_PUT_ms_action(struct zx_gl_Trigger_s* x, int n, struct zx_gl_ms_action_s* y);
void zx_gl_Trigger_PUT_ChangeArea(struct zx_gl_Trigger_s* x, int n, struct zx_gl_ChangeArea_s* y);
void zx_gl_Trigger_PUT_Extension(struct zx_gl_Trigger_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_Trigger_ADD_Granularity(struct zx_gl_Trigger_s* x, int n, struct zx_elem_s* z);
void zx_gl_Trigger_ADD_Interval(struct zx_gl_Trigger_s* x, int n, struct zx_elem_s* z);
void zx_gl_Trigger_ADD_ms_action(struct zx_gl_Trigger_s* x, int n, struct zx_gl_ms_action_s* z);
void zx_gl_Trigger_ADD_ChangeArea(struct zx_gl_Trigger_s* x, int n, struct zx_gl_ChangeArea_s* z);
void zx_gl_Trigger_ADD_Extension(struct zx_gl_Trigger_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_Trigger_DEL_Granularity(struct zx_gl_Trigger_s* x, int n);
void zx_gl_Trigger_DEL_Interval(struct zx_gl_Trigger_s* x, int n);
void zx_gl_Trigger_DEL_ms_action(struct zx_gl_Trigger_s* x, int n);
void zx_gl_Trigger_DEL_ChangeArea(struct zx_gl_Trigger_s* x, int n);
void zx_gl_Trigger_DEL_Extension(struct zx_gl_Trigger_s* x, int n);

void zx_gl_Trigger_REV_Granularity(struct zx_gl_Trigger_s* x);
void zx_gl_Trigger_REV_Interval(struct zx_gl_Trigger_s* x);
void zx_gl_Trigger_REV_ms_action(struct zx_gl_Trigger_s* x);
void zx_gl_Trigger_REV_ChangeArea(struct zx_gl_Trigger_s* x);
void zx_gl_Trigger_REV_Extension(struct zx_gl_Trigger_s* x);

#endif
/* -------------------------- gl_coord -------------------------- */
/* refby( zx_gl_LineString_s zx_gl_EllipticalArea_s zx_gl_CircularArcArea_s zx_gl_Box_s zx_gl_CircularArea_s zx_gl_Point_s zx_gl_LinearRing_s ) */
#ifndef zx_gl_coord_EXT
#define zx_gl_coord_EXT
#endif

struct zx_gl_coord_s* zx_DEC_gl_coord(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_coord_s* zx_NEW_gl_coord(struct zx_ctx* c);
void zx_FREE_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_coord_s* zx_DEEP_CLONE_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x, int dup_strs);
void zx_DUP_STRS_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x);
int zx_WALK_SO_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x);
int zx_LEN_WO_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x);
char* zx_ENC_SO_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x, char* p);
char* zx_ENC_WO_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_coord(struct zx_ctx* c, struct zx_gl_coord_s* x);

struct zx_gl_coord_s {
  ZX_ELEM_EXT
  zx_gl_coord_EXT
  struct zx_elem_s* X;	/* {1,1} xs:string */
  struct zx_elem_s* Y;	/* {0,1} xs:string */
  struct zx_elem_s* Z;	/* {0,1} xs:string */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_gl_coord_GET_X(struct zx_gl_coord_s* x, int n);
struct zx_elem_s* zx_gl_coord_GET_Y(struct zx_gl_coord_s* x, int n);
struct zx_elem_s* zx_gl_coord_GET_Z(struct zx_gl_coord_s* x, int n);

int zx_gl_coord_NUM_X(struct zx_gl_coord_s* x);
int zx_gl_coord_NUM_Y(struct zx_gl_coord_s* x);
int zx_gl_coord_NUM_Z(struct zx_gl_coord_s* x);

struct zx_elem_s* zx_gl_coord_POP_X(struct zx_gl_coord_s* x);
struct zx_elem_s* zx_gl_coord_POP_Y(struct zx_gl_coord_s* x);
struct zx_elem_s* zx_gl_coord_POP_Z(struct zx_gl_coord_s* x);

void zx_gl_coord_PUSH_X(struct zx_gl_coord_s* x, struct zx_elem_s* y);
void zx_gl_coord_PUSH_Y(struct zx_gl_coord_s* x, struct zx_elem_s* y);
void zx_gl_coord_PUSH_Z(struct zx_gl_coord_s* x, struct zx_elem_s* y);


void zx_gl_coord_PUT_X(struct zx_gl_coord_s* x, int n, struct zx_elem_s* y);
void zx_gl_coord_PUT_Y(struct zx_gl_coord_s* x, int n, struct zx_elem_s* y);
void zx_gl_coord_PUT_Z(struct zx_gl_coord_s* x, int n, struct zx_elem_s* y);

void zx_gl_coord_ADD_X(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z);
void zx_gl_coord_ADD_Y(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z);
void zx_gl_coord_ADD_Z(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z);

void zx_gl_coord_DEL_X(struct zx_gl_coord_s* x, int n);
void zx_gl_coord_DEL_Y(struct zx_gl_coord_s* x, int n);
void zx_gl_coord_DEL_Z(struct zx_gl_coord_s* x, int n);

void zx_gl_coord_REV_X(struct zx_gl_coord_s* x);
void zx_gl_coord_REV_Y(struct zx_gl_coord_s* x);
void zx_gl_coord_REV_Z(struct zx_gl_coord_s* x);

#endif
/* -------------------------- gl_eqop -------------------------- */
/* refby( zx_gl_QueryItem_s zx_gl_ItemSelection_s ) */
#ifndef zx_gl_eqop_EXT
#define zx_gl_eqop_EXT
#endif

struct zx_gl_eqop_s* zx_DEC_gl_eqop(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_eqop_s* zx_NEW_gl_eqop(struct zx_ctx* c);
void zx_FREE_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_eqop_s* zx_DEEP_CLONE_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x, int dup_strs);
void zx_DUP_STRS_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x);
int zx_WALK_SO_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x);
int zx_LEN_WO_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x);
char* zx_ENC_SO_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x, char* p);
char* zx_ENC_WO_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_eqop(struct zx_ctx* c, struct zx_gl_eqop_s* x);

struct zx_gl_eqop_s {
  ZX_ELEM_EXT
  zx_gl_eqop_EXT
  struct zx_gl_resp_req_s* resp_req;	/* {0,1}  */
  struct zx_elem_s* ll_acc;	/* {0,1} xs:float */
  struct zx_elem_s* hor_acc;	/* {0,1} xs:float */
  struct zx_elem_s* alt_acc;	/* {0,1} xs:float */
  struct zx_elem_s* max_loc_age;	/* {0,1} xs:integer */
  struct zx_gl_Extension_s* Extension;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_gl_resp_req_s* zx_gl_eqop_GET_resp_req(struct zx_gl_eqop_s* x, int n);
struct zx_elem_s* zx_gl_eqop_GET_ll_acc(struct zx_gl_eqop_s* x, int n);
struct zx_elem_s* zx_gl_eqop_GET_hor_acc(struct zx_gl_eqop_s* x, int n);
struct zx_elem_s* zx_gl_eqop_GET_alt_acc(struct zx_gl_eqop_s* x, int n);
struct zx_elem_s* zx_gl_eqop_GET_max_loc_age(struct zx_gl_eqop_s* x, int n);
struct zx_gl_Extension_s* zx_gl_eqop_GET_Extension(struct zx_gl_eqop_s* x, int n);

int zx_gl_eqop_NUM_resp_req(struct zx_gl_eqop_s* x);
int zx_gl_eqop_NUM_ll_acc(struct zx_gl_eqop_s* x);
int zx_gl_eqop_NUM_hor_acc(struct zx_gl_eqop_s* x);
int zx_gl_eqop_NUM_alt_acc(struct zx_gl_eqop_s* x);
int zx_gl_eqop_NUM_max_loc_age(struct zx_gl_eqop_s* x);
int zx_gl_eqop_NUM_Extension(struct zx_gl_eqop_s* x);

struct zx_gl_resp_req_s* zx_gl_eqop_POP_resp_req(struct zx_gl_eqop_s* x);
struct zx_elem_s* zx_gl_eqop_POP_ll_acc(struct zx_gl_eqop_s* x);
struct zx_elem_s* zx_gl_eqop_POP_hor_acc(struct zx_gl_eqop_s* x);
struct zx_elem_s* zx_gl_eqop_POP_alt_acc(struct zx_gl_eqop_s* x);
struct zx_elem_s* zx_gl_eqop_POP_max_loc_age(struct zx_gl_eqop_s* x);
struct zx_gl_Extension_s* zx_gl_eqop_POP_Extension(struct zx_gl_eqop_s* x);

void zx_gl_eqop_PUSH_resp_req(struct zx_gl_eqop_s* x, struct zx_gl_resp_req_s* y);
void zx_gl_eqop_PUSH_ll_acc(struct zx_gl_eqop_s* x, struct zx_elem_s* y);
void zx_gl_eqop_PUSH_hor_acc(struct zx_gl_eqop_s* x, struct zx_elem_s* y);
void zx_gl_eqop_PUSH_alt_acc(struct zx_gl_eqop_s* x, struct zx_elem_s* y);
void zx_gl_eqop_PUSH_max_loc_age(struct zx_gl_eqop_s* x, struct zx_elem_s* y);
void zx_gl_eqop_PUSH_Extension(struct zx_gl_eqop_s* x, struct zx_gl_Extension_s* y);


void zx_gl_eqop_PUT_resp_req(struct zx_gl_eqop_s* x, int n, struct zx_gl_resp_req_s* y);
void zx_gl_eqop_PUT_ll_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* y);
void zx_gl_eqop_PUT_hor_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* y);
void zx_gl_eqop_PUT_alt_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* y);
void zx_gl_eqop_PUT_max_loc_age(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* y);
void zx_gl_eqop_PUT_Extension(struct zx_gl_eqop_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_eqop_ADD_resp_req(struct zx_gl_eqop_s* x, int n, struct zx_gl_resp_req_s* z);
void zx_gl_eqop_ADD_ll_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z);
void zx_gl_eqop_ADD_hor_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z);
void zx_gl_eqop_ADD_alt_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z);
void zx_gl_eqop_ADD_max_loc_age(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z);
void zx_gl_eqop_ADD_Extension(struct zx_gl_eqop_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_eqop_DEL_resp_req(struct zx_gl_eqop_s* x, int n);
void zx_gl_eqop_DEL_ll_acc(struct zx_gl_eqop_s* x, int n);
void zx_gl_eqop_DEL_hor_acc(struct zx_gl_eqop_s* x, int n);
void zx_gl_eqop_DEL_alt_acc(struct zx_gl_eqop_s* x, int n);
void zx_gl_eqop_DEL_max_loc_age(struct zx_gl_eqop_s* x, int n);
void zx_gl_eqop_DEL_Extension(struct zx_gl_eqop_s* x, int n);

void zx_gl_eqop_REV_resp_req(struct zx_gl_eqop_s* x);
void zx_gl_eqop_REV_ll_acc(struct zx_gl_eqop_s* x);
void zx_gl_eqop_REV_hor_acc(struct zx_gl_eqop_s* x);
void zx_gl_eqop_REV_alt_acc(struct zx_gl_eqop_s* x);
void zx_gl_eqop_REV_max_loc_age(struct zx_gl_eqop_s* x);
void zx_gl_eqop_REV_Extension(struct zx_gl_eqop_s* x);

#endif
/* -------------------------- gl_esrd -------------------------- */
/* refby( ) */
#ifndef zx_gl_esrd_EXT
#define zx_gl_esrd_EXT
#endif

struct zx_gl_esrd_s* zx_DEC_gl_esrd(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_esrd_s* zx_NEW_gl_esrd(struct zx_ctx* c);
void zx_FREE_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_esrd_s* zx_DEEP_CLONE_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x, int dup_strs);
void zx_DUP_STRS_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x);
int zx_WALK_SO_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x);
int zx_LEN_WO_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x);
char* zx_ENC_SO_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x, char* p);
char* zx_ENC_WO_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_esrd(struct zx_ctx* c, struct zx_gl_esrd_s* x);

struct zx_gl_esrd_s {
  ZX_ELEM_EXT
  zx_gl_esrd_EXT
  struct zx_str* type;	/* {0,1} attribute hrxml:ExtendedAssociationTypeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_esrd_GET_type(struct zx_gl_esrd_s* x);





void zx_gl_esrd_PUT_type(struct zx_gl_esrd_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_esrk -------------------------- */
/* refby( ) */
#ifndef zx_gl_esrk_EXT
#define zx_gl_esrk_EXT
#endif

struct zx_gl_esrk_s* zx_DEC_gl_esrk(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_esrk_s* zx_NEW_gl_esrk(struct zx_ctx* c);
void zx_FREE_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_esrk_s* zx_DEEP_CLONE_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x, int dup_strs);
void zx_DUP_STRS_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x);
int zx_WALK_SO_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x);
int zx_LEN_WO_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x);
char* zx_ENC_SO_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x, char* p);
char* zx_ENC_WO_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_esrk(struct zx_ctx* c, struct zx_gl_esrk_s* x);

struct zx_gl_esrk_s {
  ZX_ELEM_EXT
  zx_gl_esrk_EXT
  struct zx_str* type;	/* {0,1} attribute hrxml:ExtendedAssociationTypeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_esrk_GET_type(struct zx_gl_esrk_s* x);





void zx_gl_esrk_PUT_type(struct zx_gl_esrk_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_geoinfo -------------------------- */
/* refby( zx_gl_QueryItem_s zx_gl_ItemSelection_s ) */
#ifndef zx_gl_geoinfo_EXT
#define zx_gl_geoinfo_EXT
#endif

struct zx_gl_geoinfo_s* zx_DEC_gl_geoinfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_geoinfo_s* zx_NEW_gl_geoinfo(struct zx_ctx* c);
void zx_FREE_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_geoinfo_s* zx_DEEP_CLONE_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x, int dup_strs);
void zx_DUP_STRS_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x);
int zx_WALK_SO_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x);
int zx_LEN_WO_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x);
char* zx_ENC_SO_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x, char* p);
char* zx_ENC_WO_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_geoinfo(struct zx_ctx* c, struct zx_gl_geoinfo_s* x);

struct zx_gl_geoinfo_s {
  ZX_ELEM_EXT
  zx_gl_geoinfo_EXT
  struct zx_gl_CoordinateReferenceSystem_s* CoordinateReferenceSystem;	/* {0,1}  */
  struct zx_gl_CivilData_s* CivilData;	/* {0,1} nada */
  struct zx_gl_shape_s* shape;	/* {0,1} nada */
  struct zx_elem_s* speed;	/* {0,1} xs:float */
  struct zx_elem_s* alt;	/* {0,1} xs:float */
  struct zx_elem_s* direction;	/* {0,1} xs:float */
  struct zx_elem_s* Heading;	/* {0,1} xs:float */
  struct zx_gl_Extension_s* Extension;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_gl_CoordinateReferenceSystem_s* zx_gl_geoinfo_GET_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, int n);
struct zx_gl_CivilData_s* zx_gl_geoinfo_GET_CivilData(struct zx_gl_geoinfo_s* x, int n);
struct zx_gl_shape_s* zx_gl_geoinfo_GET_shape(struct zx_gl_geoinfo_s* x, int n);
struct zx_elem_s* zx_gl_geoinfo_GET_speed(struct zx_gl_geoinfo_s* x, int n);
struct zx_elem_s* zx_gl_geoinfo_GET_alt(struct zx_gl_geoinfo_s* x, int n);
struct zx_elem_s* zx_gl_geoinfo_GET_direction(struct zx_gl_geoinfo_s* x, int n);
struct zx_elem_s* zx_gl_geoinfo_GET_Heading(struct zx_gl_geoinfo_s* x, int n);
struct zx_gl_Extension_s* zx_gl_geoinfo_GET_Extension(struct zx_gl_geoinfo_s* x, int n);

int zx_gl_geoinfo_NUM_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x);
int zx_gl_geoinfo_NUM_CivilData(struct zx_gl_geoinfo_s* x);
int zx_gl_geoinfo_NUM_shape(struct zx_gl_geoinfo_s* x);
int zx_gl_geoinfo_NUM_speed(struct zx_gl_geoinfo_s* x);
int zx_gl_geoinfo_NUM_alt(struct zx_gl_geoinfo_s* x);
int zx_gl_geoinfo_NUM_direction(struct zx_gl_geoinfo_s* x);
int zx_gl_geoinfo_NUM_Heading(struct zx_gl_geoinfo_s* x);
int zx_gl_geoinfo_NUM_Extension(struct zx_gl_geoinfo_s* x);

struct zx_gl_CoordinateReferenceSystem_s* zx_gl_geoinfo_POP_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x);
struct zx_gl_CivilData_s* zx_gl_geoinfo_POP_CivilData(struct zx_gl_geoinfo_s* x);
struct zx_gl_shape_s* zx_gl_geoinfo_POP_shape(struct zx_gl_geoinfo_s* x);
struct zx_elem_s* zx_gl_geoinfo_POP_speed(struct zx_gl_geoinfo_s* x);
struct zx_elem_s* zx_gl_geoinfo_POP_alt(struct zx_gl_geoinfo_s* x);
struct zx_elem_s* zx_gl_geoinfo_POP_direction(struct zx_gl_geoinfo_s* x);
struct zx_elem_s* zx_gl_geoinfo_POP_Heading(struct zx_gl_geoinfo_s* x);
struct zx_gl_Extension_s* zx_gl_geoinfo_POP_Extension(struct zx_gl_geoinfo_s* x);

void zx_gl_geoinfo_PUSH_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, struct zx_gl_CoordinateReferenceSystem_s* y);
void zx_gl_geoinfo_PUSH_CivilData(struct zx_gl_geoinfo_s* x, struct zx_gl_CivilData_s* y);
void zx_gl_geoinfo_PUSH_shape(struct zx_gl_geoinfo_s* x, struct zx_gl_shape_s* y);
void zx_gl_geoinfo_PUSH_speed(struct zx_gl_geoinfo_s* x, struct zx_elem_s* y);
void zx_gl_geoinfo_PUSH_alt(struct zx_gl_geoinfo_s* x, struct zx_elem_s* y);
void zx_gl_geoinfo_PUSH_direction(struct zx_gl_geoinfo_s* x, struct zx_elem_s* y);
void zx_gl_geoinfo_PUSH_Heading(struct zx_gl_geoinfo_s* x, struct zx_elem_s* y);
void zx_gl_geoinfo_PUSH_Extension(struct zx_gl_geoinfo_s* x, struct zx_gl_Extension_s* y);


void zx_gl_geoinfo_PUT_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_CoordinateReferenceSystem_s* y);
void zx_gl_geoinfo_PUT_CivilData(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_CivilData_s* y);
void zx_gl_geoinfo_PUT_shape(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_shape_s* y);
void zx_gl_geoinfo_PUT_speed(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* y);
void zx_gl_geoinfo_PUT_alt(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* y);
void zx_gl_geoinfo_PUT_direction(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* y);
void zx_gl_geoinfo_PUT_Heading(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* y);
void zx_gl_geoinfo_PUT_Extension(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_geoinfo_ADD_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_CoordinateReferenceSystem_s* z);
void zx_gl_geoinfo_ADD_CivilData(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_CivilData_s* z);
void zx_gl_geoinfo_ADD_shape(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_shape_s* z);
void zx_gl_geoinfo_ADD_speed(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z);
void zx_gl_geoinfo_ADD_alt(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z);
void zx_gl_geoinfo_ADD_direction(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z);
void zx_gl_geoinfo_ADD_Heading(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z);
void zx_gl_geoinfo_ADD_Extension(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_geoinfo_DEL_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, int n);
void zx_gl_geoinfo_DEL_CivilData(struct zx_gl_geoinfo_s* x, int n);
void zx_gl_geoinfo_DEL_shape(struct zx_gl_geoinfo_s* x, int n);
void zx_gl_geoinfo_DEL_speed(struct zx_gl_geoinfo_s* x, int n);
void zx_gl_geoinfo_DEL_alt(struct zx_gl_geoinfo_s* x, int n);
void zx_gl_geoinfo_DEL_direction(struct zx_gl_geoinfo_s* x, int n);
void zx_gl_geoinfo_DEL_Heading(struct zx_gl_geoinfo_s* x, int n);
void zx_gl_geoinfo_DEL_Extension(struct zx_gl_geoinfo_s* x, int n);

void zx_gl_geoinfo_REV_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x);
void zx_gl_geoinfo_REV_CivilData(struct zx_gl_geoinfo_s* x);
void zx_gl_geoinfo_REV_shape(struct zx_gl_geoinfo_s* x);
void zx_gl_geoinfo_REV_speed(struct zx_gl_geoinfo_s* x);
void zx_gl_geoinfo_REV_alt(struct zx_gl_geoinfo_s* x);
void zx_gl_geoinfo_REV_direction(struct zx_gl_geoinfo_s* x);
void zx_gl_geoinfo_REV_Heading(struct zx_gl_geoinfo_s* x);
void zx_gl_geoinfo_REV_Extension(struct zx_gl_geoinfo_s* x);

#endif
/* -------------------------- gl_innerBoundaryIs -------------------------- */
/* refby( zx_gl_Polygon_s ) */
#ifndef zx_gl_innerBoundaryIs_EXT
#define zx_gl_innerBoundaryIs_EXT
#endif

struct zx_gl_innerBoundaryIs_s* zx_DEC_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_innerBoundaryIs_s* zx_NEW_gl_innerBoundaryIs(struct zx_ctx* c);
void zx_FREE_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_innerBoundaryIs_s* zx_DEEP_CLONE_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x, int dup_strs);
void zx_DUP_STRS_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x);
int zx_WALK_SO_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x);
int zx_LEN_WO_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x);
char* zx_ENC_SO_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x, char* p);
char* zx_ENC_WO_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_innerBoundaryIs(struct zx_ctx* c, struct zx_gl_innerBoundaryIs_s* x);

struct zx_gl_innerBoundaryIs_s {
  ZX_ELEM_EXT
  zx_gl_innerBoundaryIs_EXT
  struct zx_gl_LinearRing_s* LinearRing;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_gl_LinearRing_s* zx_gl_innerBoundaryIs_GET_LinearRing(struct zx_gl_innerBoundaryIs_s* x, int n);

int zx_gl_innerBoundaryIs_NUM_LinearRing(struct zx_gl_innerBoundaryIs_s* x);

struct zx_gl_LinearRing_s* zx_gl_innerBoundaryIs_POP_LinearRing(struct zx_gl_innerBoundaryIs_s* x);

void zx_gl_innerBoundaryIs_PUSH_LinearRing(struct zx_gl_innerBoundaryIs_s* x, struct zx_gl_LinearRing_s* y);


void zx_gl_innerBoundaryIs_PUT_LinearRing(struct zx_gl_innerBoundaryIs_s* x, int n, struct zx_gl_LinearRing_s* y);

void zx_gl_innerBoundaryIs_ADD_LinearRing(struct zx_gl_innerBoundaryIs_s* x, int n, struct zx_gl_LinearRing_s* z);

void zx_gl_innerBoundaryIs_DEL_LinearRing(struct zx_gl_innerBoundaryIs_s* x, int n);

void zx_gl_innerBoundaryIs_REV_LinearRing(struct zx_gl_innerBoundaryIs_s* x);

#endif
/* -------------------------- gl_loc_type -------------------------- */
/* refby( zx_gl_QueryItem_s zx_gl_ItemSelection_s ) */
#ifndef zx_gl_loc_type_EXT
#define zx_gl_loc_type_EXT
#endif

struct zx_gl_loc_type_s* zx_DEC_gl_loc_type(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_loc_type_s* zx_NEW_gl_loc_type(struct zx_ctx* c);
void zx_FREE_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_loc_type_s* zx_DEEP_CLONE_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x, int dup_strs);
void zx_DUP_STRS_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x);
int zx_WALK_SO_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x);
int zx_LEN_WO_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x);
char* zx_ENC_SO_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x, char* p);
char* zx_ENC_WO_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_loc_type(struct zx_ctx* c, struct zx_gl_loc_type_s* x);

struct zx_gl_loc_type_s {
  ZX_ELEM_EXT
  zx_gl_loc_type_EXT
  struct zx_str* type;	/* {0,1} attribute hrxml:ExtendedAssociationTypeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_loc_type_GET_type(struct zx_gl_loc_type_s* x);





void zx_gl_loc_type_PUT_type(struct zx_gl_loc_type_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_ms_action -------------------------- */
/* refby( zx_gl_Trigger_s ) */
#ifndef zx_gl_ms_action_EXT
#define zx_gl_ms_action_EXT
#endif

struct zx_gl_ms_action_s* zx_DEC_gl_ms_action(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_ms_action_s* zx_NEW_gl_ms_action(struct zx_ctx* c);
void zx_FREE_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_ms_action_s* zx_DEEP_CLONE_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x, int dup_strs);
void zx_DUP_STRS_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x);
int zx_WALK_SO_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x);
int zx_LEN_WO_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x);
char* zx_ENC_SO_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x, char* p);
char* zx_ENC_WO_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_ms_action(struct zx_ctx* c, struct zx_gl_ms_action_s* x);

struct zx_gl_ms_action_s {
  ZX_ELEM_EXT
  zx_gl_ms_action_EXT
  struct zx_str* type;	/* {1,1} attribute hrxml:ExtendedAssociationTypeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_ms_action_GET_type(struct zx_gl_ms_action_s* x);





void zx_gl_ms_action_PUT_type(struct zx_gl_ms_action_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_outerBoundaryIs -------------------------- */
/* refby( zx_gl_Polygon_s ) */
#ifndef zx_gl_outerBoundaryIs_EXT
#define zx_gl_outerBoundaryIs_EXT
#endif

struct zx_gl_outerBoundaryIs_s* zx_DEC_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_outerBoundaryIs_s* zx_NEW_gl_outerBoundaryIs(struct zx_ctx* c);
void zx_FREE_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_outerBoundaryIs_s* zx_DEEP_CLONE_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x, int dup_strs);
void zx_DUP_STRS_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x);
int zx_WALK_SO_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x);
int zx_LEN_WO_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x);
char* zx_ENC_SO_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x, char* p);
char* zx_ENC_WO_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_outerBoundaryIs(struct zx_ctx* c, struct zx_gl_outerBoundaryIs_s* x);

struct zx_gl_outerBoundaryIs_s {
  ZX_ELEM_EXT
  zx_gl_outerBoundaryIs_EXT
  struct zx_gl_LinearRing_s* LinearRing;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_gl_LinearRing_s* zx_gl_outerBoundaryIs_GET_LinearRing(struct zx_gl_outerBoundaryIs_s* x, int n);

int zx_gl_outerBoundaryIs_NUM_LinearRing(struct zx_gl_outerBoundaryIs_s* x);

struct zx_gl_LinearRing_s* zx_gl_outerBoundaryIs_POP_LinearRing(struct zx_gl_outerBoundaryIs_s* x);

void zx_gl_outerBoundaryIs_PUSH_LinearRing(struct zx_gl_outerBoundaryIs_s* x, struct zx_gl_LinearRing_s* y);


void zx_gl_outerBoundaryIs_PUT_LinearRing(struct zx_gl_outerBoundaryIs_s* x, int n, struct zx_gl_LinearRing_s* y);

void zx_gl_outerBoundaryIs_ADD_LinearRing(struct zx_gl_outerBoundaryIs_s* x, int n, struct zx_gl_LinearRing_s* z);

void zx_gl_outerBoundaryIs_DEL_LinearRing(struct zx_gl_outerBoundaryIs_s* x, int n);

void zx_gl_outerBoundaryIs_REV_LinearRing(struct zx_gl_outerBoundaryIs_s* x);

#endif
/* -------------------------- gl_pd -------------------------- */
/* refby( ) */
#ifndef zx_gl_pd_EXT
#define zx_gl_pd_EXT
#endif

struct zx_gl_pd_s* zx_DEC_gl_pd(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_pd_s* zx_NEW_gl_pd(struct zx_ctx* c);
void zx_FREE_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_pd_s* zx_DEEP_CLONE_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x, int dup_strs);
void zx_DUP_STRS_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x);
int zx_WALK_SO_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x);
int zx_LEN_WO_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x);
char* zx_ENC_SO_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x, char* p);
char* zx_ENC_WO_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_pd(struct zx_ctx* c, struct zx_gl_pd_s* x);

struct zx_gl_pd_s {
  ZX_ELEM_EXT
  zx_gl_pd_EXT
  struct zx_elem_s* time;	/* {0,1} xs:dateTime */
  struct zx_gl_CivilData_s* CivilData;	/* {0,1} nada */
  struct zx_gl_shape_s* shape;	/* {0,1} nada */
  struct zx_elem_s* alt;	/* {1,1} xs:float */
  struct zx_elem_s* alt_acc;	/* {0,1} xs:float */
  struct zx_elem_s* speed;	/* {0,1} xs:float */
  struct zx_elem_s* direction;	/* {0,1} xs:float */
  struct zx_elem_s* Heading;	/* {0,1} xs:float */
  struct zx_elem_s* lev_conf;	/* {0,1} xs:float */
  struct zx_gl_Extension_s* Extension;	/* {0,1} nada */
  struct zx_str* ACC;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_pd_GET_ACC(struct zx_gl_pd_s* x);

struct zx_elem_s* zx_gl_pd_GET_time(struct zx_gl_pd_s* x, int n);
struct zx_gl_CivilData_s* zx_gl_pd_GET_CivilData(struct zx_gl_pd_s* x, int n);
struct zx_gl_shape_s* zx_gl_pd_GET_shape(struct zx_gl_pd_s* x, int n);
struct zx_elem_s* zx_gl_pd_GET_alt(struct zx_gl_pd_s* x, int n);
struct zx_elem_s* zx_gl_pd_GET_alt_acc(struct zx_gl_pd_s* x, int n);
struct zx_elem_s* zx_gl_pd_GET_speed(struct zx_gl_pd_s* x, int n);
struct zx_elem_s* zx_gl_pd_GET_direction(struct zx_gl_pd_s* x, int n);
struct zx_elem_s* zx_gl_pd_GET_Heading(struct zx_gl_pd_s* x, int n);
struct zx_elem_s* zx_gl_pd_GET_lev_conf(struct zx_gl_pd_s* x, int n);
struct zx_gl_Extension_s* zx_gl_pd_GET_Extension(struct zx_gl_pd_s* x, int n);

int zx_gl_pd_NUM_time(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_CivilData(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_shape(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_alt(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_alt_acc(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_speed(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_direction(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_Heading(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_lev_conf(struct zx_gl_pd_s* x);
int zx_gl_pd_NUM_Extension(struct zx_gl_pd_s* x);

struct zx_elem_s* zx_gl_pd_POP_time(struct zx_gl_pd_s* x);
struct zx_gl_CivilData_s* zx_gl_pd_POP_CivilData(struct zx_gl_pd_s* x);
struct zx_gl_shape_s* zx_gl_pd_POP_shape(struct zx_gl_pd_s* x);
struct zx_elem_s* zx_gl_pd_POP_alt(struct zx_gl_pd_s* x);
struct zx_elem_s* zx_gl_pd_POP_alt_acc(struct zx_gl_pd_s* x);
struct zx_elem_s* zx_gl_pd_POP_speed(struct zx_gl_pd_s* x);
struct zx_elem_s* zx_gl_pd_POP_direction(struct zx_gl_pd_s* x);
struct zx_elem_s* zx_gl_pd_POP_Heading(struct zx_gl_pd_s* x);
struct zx_elem_s* zx_gl_pd_POP_lev_conf(struct zx_gl_pd_s* x);
struct zx_gl_Extension_s* zx_gl_pd_POP_Extension(struct zx_gl_pd_s* x);

void zx_gl_pd_PUSH_time(struct zx_gl_pd_s* x, struct zx_elem_s* y);
void zx_gl_pd_PUSH_CivilData(struct zx_gl_pd_s* x, struct zx_gl_CivilData_s* y);
void zx_gl_pd_PUSH_shape(struct zx_gl_pd_s* x, struct zx_gl_shape_s* y);
void zx_gl_pd_PUSH_alt(struct zx_gl_pd_s* x, struct zx_elem_s* y);
void zx_gl_pd_PUSH_alt_acc(struct zx_gl_pd_s* x, struct zx_elem_s* y);
void zx_gl_pd_PUSH_speed(struct zx_gl_pd_s* x, struct zx_elem_s* y);
void zx_gl_pd_PUSH_direction(struct zx_gl_pd_s* x, struct zx_elem_s* y);
void zx_gl_pd_PUSH_Heading(struct zx_gl_pd_s* x, struct zx_elem_s* y);
void zx_gl_pd_PUSH_lev_conf(struct zx_gl_pd_s* x, struct zx_elem_s* y);
void zx_gl_pd_PUSH_Extension(struct zx_gl_pd_s* x, struct zx_gl_Extension_s* y);

void zx_gl_pd_PUT_ACC(struct zx_gl_pd_s* x, struct zx_str* y);

void zx_gl_pd_PUT_time(struct zx_gl_pd_s* x, int n, struct zx_elem_s* y);
void zx_gl_pd_PUT_CivilData(struct zx_gl_pd_s* x, int n, struct zx_gl_CivilData_s* y);
void zx_gl_pd_PUT_shape(struct zx_gl_pd_s* x, int n, struct zx_gl_shape_s* y);
void zx_gl_pd_PUT_alt(struct zx_gl_pd_s* x, int n, struct zx_elem_s* y);
void zx_gl_pd_PUT_alt_acc(struct zx_gl_pd_s* x, int n, struct zx_elem_s* y);
void zx_gl_pd_PUT_speed(struct zx_gl_pd_s* x, int n, struct zx_elem_s* y);
void zx_gl_pd_PUT_direction(struct zx_gl_pd_s* x, int n, struct zx_elem_s* y);
void zx_gl_pd_PUT_Heading(struct zx_gl_pd_s* x, int n, struct zx_elem_s* y);
void zx_gl_pd_PUT_lev_conf(struct zx_gl_pd_s* x, int n, struct zx_elem_s* y);
void zx_gl_pd_PUT_Extension(struct zx_gl_pd_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_pd_ADD_time(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z);
void zx_gl_pd_ADD_CivilData(struct zx_gl_pd_s* x, int n, struct zx_gl_CivilData_s* z);
void zx_gl_pd_ADD_shape(struct zx_gl_pd_s* x, int n, struct zx_gl_shape_s* z);
void zx_gl_pd_ADD_alt(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z);
void zx_gl_pd_ADD_alt_acc(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z);
void zx_gl_pd_ADD_speed(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z);
void zx_gl_pd_ADD_direction(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z);
void zx_gl_pd_ADD_Heading(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z);
void zx_gl_pd_ADD_lev_conf(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z);
void zx_gl_pd_ADD_Extension(struct zx_gl_pd_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_pd_DEL_time(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_CivilData(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_shape(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_alt(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_alt_acc(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_speed(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_direction(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_Heading(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_lev_conf(struct zx_gl_pd_s* x, int n);
void zx_gl_pd_DEL_Extension(struct zx_gl_pd_s* x, int n);

void zx_gl_pd_REV_time(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_CivilData(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_shape(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_alt(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_alt_acc(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_speed(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_direction(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_Heading(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_lev_conf(struct zx_gl_pd_s* x);
void zx_gl_pd_REV_Extension(struct zx_gl_pd_s* x);

#endif
/* -------------------------- gl_prio -------------------------- */
/* refby( zx_gl_QueryItem_s zx_gl_ItemSelection_s ) */
#ifndef zx_gl_prio_EXT
#define zx_gl_prio_EXT
#endif

struct zx_gl_prio_s* zx_DEC_gl_prio(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_prio_s* zx_NEW_gl_prio(struct zx_ctx* c);
void zx_FREE_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_prio_s* zx_DEEP_CLONE_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x, int dup_strs);
void zx_DUP_STRS_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x);
int zx_WALK_SO_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x);
int zx_LEN_WO_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x);
char* zx_ENC_SO_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x, char* p);
char* zx_ENC_WO_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_prio(struct zx_ctx* c, struct zx_gl_prio_s* x);

struct zx_gl_prio_s {
  ZX_ELEM_EXT
  zx_gl_prio_EXT
  struct zx_str* type;	/* {0,1} attribute hrxml:ExtendedAssociationTypeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_prio_GET_type(struct zx_gl_prio_s* x);





void zx_gl_prio_PUT_type(struct zx_gl_prio_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_resp_req -------------------------- */
/* refby( zx_gl_eqop_s ) */
#ifndef zx_gl_resp_req_EXT
#define zx_gl_resp_req_EXT
#endif

struct zx_gl_resp_req_s* zx_DEC_gl_resp_req(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_resp_req_s* zx_NEW_gl_resp_req(struct zx_ctx* c);
void zx_FREE_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_resp_req_s* zx_DEEP_CLONE_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x, int dup_strs);
void zx_DUP_STRS_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x);
int zx_WALK_SO_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x);
int zx_LEN_WO_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x);
char* zx_ENC_SO_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x, char* p);
char* zx_ENC_WO_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_resp_req(struct zx_ctx* c, struct zx_gl_resp_req_s* x);

struct zx_gl_resp_req_s {
  ZX_ELEM_EXT
  zx_gl_resp_req_EXT
  struct zx_str* type;	/* {0,1} attribute hrxml:ExtendedAssociationTypeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_gl_resp_req_GET_type(struct zx_gl_resp_req_s* x);





void zx_gl_resp_req_PUT_type(struct zx_gl_resp_req_s* x, struct zx_str* y);





#endif
/* -------------------------- gl_shape -------------------------- */
/* refby( zx_gl_AreaComparison_s zx_gl_GeometryCollection_s zx_gl_geoinfo_s zx_gl_pd_s zx_gl_ChangeArea_s ) */
#ifndef zx_gl_shape_EXT
#define zx_gl_shape_EXT
#endif

struct zx_gl_shape_s* zx_DEC_gl_shape(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_gl_shape_s* zx_NEW_gl_shape(struct zx_ctx* c);
void zx_FREE_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_gl_shape_s* zx_DEEP_CLONE_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x, int dup_strs);
void zx_DUP_STRS_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x);
int zx_WALK_SO_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x);
int zx_LEN_WO_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x);
char* zx_ENC_SO_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x, char* p);
char* zx_ENC_WO_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x);
struct zx_str* zx_EASY_ENC_WO_gl_shape(struct zx_ctx* c, struct zx_gl_shape_s* x);

struct zx_gl_shape_s {
  ZX_ELEM_EXT
  zx_gl_shape_EXT
  struct zx_gl_Point_s* Point;	/* {0,1} nada */
  struct zx_gl_LineString_s* LineString;	/* {0,1} nada */
  struct zx_gl_Polygon_s* Polygon;	/* {0,1} nada */
  struct zx_gl_Box_s* Box;	/* {0,1} nada */
  struct zx_gl_CircularArea_s* CircularArea;	/* {0,1} nada */
  struct zx_gl_CircularArcArea_s* CircularArcArea;	/* {0,1} nada */
  struct zx_gl_EllipticalArea_s* EllipticalArea;	/* {0,1} nada */
  struct zx_gl_GeometryCollection_s* GeometryCollection;	/* {0,1} nada */
  struct zx_gl_MultiLineString_s* MultiLineString;	/* {0,1} nada */
  struct zx_gl_MultiPoint_s* MultiPoint;	/* {0,1} nada */
  struct zx_gl_MultiPolygon_s* MultiPolygon;	/* {0,1} nada */
  struct zx_gl_Extension_s* Extension;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_gl_Point_s* zx_gl_shape_GET_Point(struct zx_gl_shape_s* x, int n);
struct zx_gl_LineString_s* zx_gl_shape_GET_LineString(struct zx_gl_shape_s* x, int n);
struct zx_gl_Polygon_s* zx_gl_shape_GET_Polygon(struct zx_gl_shape_s* x, int n);
struct zx_gl_Box_s* zx_gl_shape_GET_Box(struct zx_gl_shape_s* x, int n);
struct zx_gl_CircularArea_s* zx_gl_shape_GET_CircularArea(struct zx_gl_shape_s* x, int n);
struct zx_gl_CircularArcArea_s* zx_gl_shape_GET_CircularArcArea(struct zx_gl_shape_s* x, int n);
struct zx_gl_EllipticalArea_s* zx_gl_shape_GET_EllipticalArea(struct zx_gl_shape_s* x, int n);
struct zx_gl_GeometryCollection_s* zx_gl_shape_GET_GeometryCollection(struct zx_gl_shape_s* x, int n);
struct zx_gl_MultiLineString_s* zx_gl_shape_GET_MultiLineString(struct zx_gl_shape_s* x, int n);
struct zx_gl_MultiPoint_s* zx_gl_shape_GET_MultiPoint(struct zx_gl_shape_s* x, int n);
struct zx_gl_MultiPolygon_s* zx_gl_shape_GET_MultiPolygon(struct zx_gl_shape_s* x, int n);
struct zx_gl_Extension_s* zx_gl_shape_GET_Extension(struct zx_gl_shape_s* x, int n);

int zx_gl_shape_NUM_Point(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_LineString(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_Polygon(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_Box(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_CircularArea(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_CircularArcArea(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_EllipticalArea(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_GeometryCollection(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_MultiLineString(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_MultiPoint(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_MultiPolygon(struct zx_gl_shape_s* x);
int zx_gl_shape_NUM_Extension(struct zx_gl_shape_s* x);

struct zx_gl_Point_s* zx_gl_shape_POP_Point(struct zx_gl_shape_s* x);
struct zx_gl_LineString_s* zx_gl_shape_POP_LineString(struct zx_gl_shape_s* x);
struct zx_gl_Polygon_s* zx_gl_shape_POP_Polygon(struct zx_gl_shape_s* x);
struct zx_gl_Box_s* zx_gl_shape_POP_Box(struct zx_gl_shape_s* x);
struct zx_gl_CircularArea_s* zx_gl_shape_POP_CircularArea(struct zx_gl_shape_s* x);
struct zx_gl_CircularArcArea_s* zx_gl_shape_POP_CircularArcArea(struct zx_gl_shape_s* x);
struct zx_gl_EllipticalArea_s* zx_gl_shape_POP_EllipticalArea(struct zx_gl_shape_s* x);
struct zx_gl_GeometryCollection_s* zx_gl_shape_POP_GeometryCollection(struct zx_gl_shape_s* x);
struct zx_gl_MultiLineString_s* zx_gl_shape_POP_MultiLineString(struct zx_gl_shape_s* x);
struct zx_gl_MultiPoint_s* zx_gl_shape_POP_MultiPoint(struct zx_gl_shape_s* x);
struct zx_gl_MultiPolygon_s* zx_gl_shape_POP_MultiPolygon(struct zx_gl_shape_s* x);
struct zx_gl_Extension_s* zx_gl_shape_POP_Extension(struct zx_gl_shape_s* x);

void zx_gl_shape_PUSH_Point(struct zx_gl_shape_s* x, struct zx_gl_Point_s* y);
void zx_gl_shape_PUSH_LineString(struct zx_gl_shape_s* x, struct zx_gl_LineString_s* y);
void zx_gl_shape_PUSH_Polygon(struct zx_gl_shape_s* x, struct zx_gl_Polygon_s* y);
void zx_gl_shape_PUSH_Box(struct zx_gl_shape_s* x, struct zx_gl_Box_s* y);
void zx_gl_shape_PUSH_CircularArea(struct zx_gl_shape_s* x, struct zx_gl_CircularArea_s* y);
void zx_gl_shape_PUSH_CircularArcArea(struct zx_gl_shape_s* x, struct zx_gl_CircularArcArea_s* y);
void zx_gl_shape_PUSH_EllipticalArea(struct zx_gl_shape_s* x, struct zx_gl_EllipticalArea_s* y);
void zx_gl_shape_PUSH_GeometryCollection(struct zx_gl_shape_s* x, struct zx_gl_GeometryCollection_s* y);
void zx_gl_shape_PUSH_MultiLineString(struct zx_gl_shape_s* x, struct zx_gl_MultiLineString_s* y);
void zx_gl_shape_PUSH_MultiPoint(struct zx_gl_shape_s* x, struct zx_gl_MultiPoint_s* y);
void zx_gl_shape_PUSH_MultiPolygon(struct zx_gl_shape_s* x, struct zx_gl_MultiPolygon_s* y);
void zx_gl_shape_PUSH_Extension(struct zx_gl_shape_s* x, struct zx_gl_Extension_s* y);


void zx_gl_shape_PUT_Point(struct zx_gl_shape_s* x, int n, struct zx_gl_Point_s* y);
void zx_gl_shape_PUT_LineString(struct zx_gl_shape_s* x, int n, struct zx_gl_LineString_s* y);
void zx_gl_shape_PUT_Polygon(struct zx_gl_shape_s* x, int n, struct zx_gl_Polygon_s* y);
void zx_gl_shape_PUT_Box(struct zx_gl_shape_s* x, int n, struct zx_gl_Box_s* y);
void zx_gl_shape_PUT_CircularArea(struct zx_gl_shape_s* x, int n, struct zx_gl_CircularArea_s* y);
void zx_gl_shape_PUT_CircularArcArea(struct zx_gl_shape_s* x, int n, struct zx_gl_CircularArcArea_s* y);
void zx_gl_shape_PUT_EllipticalArea(struct zx_gl_shape_s* x, int n, struct zx_gl_EllipticalArea_s* y);
void zx_gl_shape_PUT_GeometryCollection(struct zx_gl_shape_s* x, int n, struct zx_gl_GeometryCollection_s* y);
void zx_gl_shape_PUT_MultiLineString(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiLineString_s* y);
void zx_gl_shape_PUT_MultiPoint(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiPoint_s* y);
void zx_gl_shape_PUT_MultiPolygon(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiPolygon_s* y);
void zx_gl_shape_PUT_Extension(struct zx_gl_shape_s* x, int n, struct zx_gl_Extension_s* y);

void zx_gl_shape_ADD_Point(struct zx_gl_shape_s* x, int n, struct zx_gl_Point_s* z);
void zx_gl_shape_ADD_LineString(struct zx_gl_shape_s* x, int n, struct zx_gl_LineString_s* z);
void zx_gl_shape_ADD_Polygon(struct zx_gl_shape_s* x, int n, struct zx_gl_Polygon_s* z);
void zx_gl_shape_ADD_Box(struct zx_gl_shape_s* x, int n, struct zx_gl_Box_s* z);
void zx_gl_shape_ADD_CircularArea(struct zx_gl_shape_s* x, int n, struct zx_gl_CircularArea_s* z);
void zx_gl_shape_ADD_CircularArcArea(struct zx_gl_shape_s* x, int n, struct zx_gl_CircularArcArea_s* z);
void zx_gl_shape_ADD_EllipticalArea(struct zx_gl_shape_s* x, int n, struct zx_gl_EllipticalArea_s* z);
void zx_gl_shape_ADD_GeometryCollection(struct zx_gl_shape_s* x, int n, struct zx_gl_GeometryCollection_s* z);
void zx_gl_shape_ADD_MultiLineString(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiLineString_s* z);
void zx_gl_shape_ADD_MultiPoint(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiPoint_s* z);
void zx_gl_shape_ADD_MultiPolygon(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiPolygon_s* z);
void zx_gl_shape_ADD_Extension(struct zx_gl_shape_s* x, int n, struct zx_gl_Extension_s* z);

void zx_gl_shape_DEL_Point(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_LineString(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_Polygon(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_Box(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_CircularArea(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_CircularArcArea(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_EllipticalArea(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_GeometryCollection(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_MultiLineString(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_MultiPoint(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_MultiPolygon(struct zx_gl_shape_s* x, int n);
void zx_gl_shape_DEL_Extension(struct zx_gl_shape_s* x, int n);

void zx_gl_shape_REV_Point(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_LineString(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_Polygon(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_Box(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_CircularArea(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_CircularArcArea(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_EllipticalArea(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_GeometryCollection(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_MultiLineString(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_MultiPoint(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_MultiPolygon(struct zx_gl_shape_s* x);
void zx_gl_shape_REV_Extension(struct zx_gl_shape_s* x);

#endif

#endif
