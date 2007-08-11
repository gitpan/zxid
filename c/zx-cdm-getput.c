/* c/zx-cdm-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** getput-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: getput-templ.c,v 1.7 2007/03/28 20:31:54 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** Edit with care! xsd2sg.pl applies various substitutions to this file.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-cdm-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_HOME) */

int zx_cdm_ADR_NUM_HOME(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->HOME; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_HOME) */

struct zx_elem_s* zx_cdm_ADR_GET_HOME(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->HOME; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_HOME) */

struct zx_elem_s* zx_cdm_ADR_POP_HOME(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->HOME;
  if (y)
    x->HOME = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_HOME) */

void zx_cdm_ADR_PUSH_HOME(struct zx_cdm_ADR_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->HOME->g;
  x->HOME = z;
}

/* FUNC(zx_cdm_ADR_REV_HOME) */

void zx_cdm_ADR_REV_HOME(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->HOME;
  if (!y) return;
  x->HOME = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->HOME->g;
    x->HOME = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_HOME) */

void zx_cdm_ADR_PUT_HOME(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->HOME;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->HOME = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_HOME) */

void zx_cdm_ADR_ADD_HOME(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->HOME->g;
    x->HOME = z;
    return;
  case -1:
    y = x->HOME;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HOME; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_ADR_DEL_HOME) */

void zx_cdm_ADR_DEL_HOME(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->HOME = (struct zx_elem_s*)x->HOME->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->HOME;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HOME; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_WORK) */

int zx_cdm_ADR_NUM_WORK(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->WORK; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_WORK) */

struct zx_elem_s* zx_cdm_ADR_GET_WORK(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->WORK; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_WORK) */

struct zx_elem_s* zx_cdm_ADR_POP_WORK(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->WORK;
  if (y)
    x->WORK = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_WORK) */

void zx_cdm_ADR_PUSH_WORK(struct zx_cdm_ADR_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->WORK->g;
  x->WORK = z;
}

/* FUNC(zx_cdm_ADR_REV_WORK) */

void zx_cdm_ADR_REV_WORK(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->WORK;
  if (!y) return;
  x->WORK = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->WORK->g;
    x->WORK = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_WORK) */

void zx_cdm_ADR_PUT_WORK(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->WORK;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->WORK = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_WORK) */

void zx_cdm_ADR_ADD_WORK(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->WORK->g;
    x->WORK = z;
    return;
  case -1:
    y = x->WORK;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WORK; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_ADR_DEL_WORK) */

void zx_cdm_ADR_DEL_WORK(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->WORK = (struct zx_elem_s*)x->WORK->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->WORK;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WORK; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_POSTAL) */

int zx_cdm_ADR_NUM_POSTAL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->POSTAL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_POSTAL) */

struct zx_elem_s* zx_cdm_ADR_GET_POSTAL(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->POSTAL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_POSTAL) */

struct zx_elem_s* zx_cdm_ADR_POP_POSTAL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->POSTAL;
  if (y)
    x->POSTAL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_POSTAL) */

void zx_cdm_ADR_PUSH_POSTAL(struct zx_cdm_ADR_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->POSTAL->g;
  x->POSTAL = z;
}

/* FUNC(zx_cdm_ADR_REV_POSTAL) */

void zx_cdm_ADR_REV_POSTAL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->POSTAL;
  if (!y) return;
  x->POSTAL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->POSTAL->g;
    x->POSTAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_POSTAL) */

void zx_cdm_ADR_PUT_POSTAL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->POSTAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->POSTAL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_POSTAL) */

void zx_cdm_ADR_ADD_POSTAL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->POSTAL->g;
    x->POSTAL = z;
    return;
  case -1:
    y = x->POSTAL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->POSTAL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_ADR_DEL_POSTAL) */

void zx_cdm_ADR_DEL_POSTAL(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->POSTAL = (struct zx_elem_s*)x->POSTAL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->POSTAL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->POSTAL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_PARCEL) */

int zx_cdm_ADR_NUM_PARCEL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PARCEL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_PARCEL) */

struct zx_elem_s* zx_cdm_ADR_GET_PARCEL(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PARCEL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_PARCEL) */

struct zx_elem_s* zx_cdm_ADR_POP_PARCEL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PARCEL;
  if (y)
    x->PARCEL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_PARCEL) */

void zx_cdm_ADR_PUSH_PARCEL(struct zx_cdm_ADR_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PARCEL->g;
  x->PARCEL = z;
}

/* FUNC(zx_cdm_ADR_REV_PARCEL) */

void zx_cdm_ADR_REV_PARCEL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PARCEL;
  if (!y) return;
  x->PARCEL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PARCEL->g;
    x->PARCEL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_PARCEL) */

void zx_cdm_ADR_PUT_PARCEL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PARCEL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PARCEL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_PARCEL) */

void zx_cdm_ADR_ADD_PARCEL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PARCEL->g;
    x->PARCEL = z;
    return;
  case -1:
    y = x->PARCEL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PARCEL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_ADR_DEL_PARCEL) */

void zx_cdm_ADR_DEL_PARCEL(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PARCEL = (struct zx_elem_s*)x->PARCEL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PARCEL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PARCEL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_DOM) */

int zx_cdm_ADR_NUM_DOM(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DOM; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_DOM) */

struct zx_elem_s* zx_cdm_ADR_GET_DOM(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DOM; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_DOM) */

struct zx_elem_s* zx_cdm_ADR_POP_DOM(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DOM;
  if (y)
    x->DOM = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_DOM) */

void zx_cdm_ADR_PUSH_DOM(struct zx_cdm_ADR_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DOM->g;
  x->DOM = z;
}

/* FUNC(zx_cdm_ADR_REV_DOM) */

void zx_cdm_ADR_REV_DOM(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DOM;
  if (!y) return;
  x->DOM = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DOM->g;
    x->DOM = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_DOM) */

void zx_cdm_ADR_PUT_DOM(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DOM;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DOM = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_DOM) */

void zx_cdm_ADR_ADD_DOM(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DOM->g;
    x->DOM = z;
    return;
  case -1:
    y = x->DOM;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DOM; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_ADR_DEL_DOM) */

void zx_cdm_ADR_DEL_DOM(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DOM = (struct zx_elem_s*)x->DOM->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DOM;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DOM; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_INTL) */

int zx_cdm_ADR_NUM_INTL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->INTL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_INTL) */

struct zx_elem_s* zx_cdm_ADR_GET_INTL(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->INTL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_INTL) */

struct zx_elem_s* zx_cdm_ADR_POP_INTL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->INTL;
  if (y)
    x->INTL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_INTL) */

void zx_cdm_ADR_PUSH_INTL(struct zx_cdm_ADR_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->INTL->g;
  x->INTL = z;
}

/* FUNC(zx_cdm_ADR_REV_INTL) */

void zx_cdm_ADR_REV_INTL(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->INTL;
  if (!y) return;
  x->INTL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->INTL->g;
    x->INTL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_INTL) */

void zx_cdm_ADR_PUT_INTL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->INTL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->INTL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_INTL) */

void zx_cdm_ADR_ADD_INTL(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->INTL->g;
    x->INTL = z;
    return;
  case -1:
    y = x->INTL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->INTL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_ADR_DEL_INTL) */

void zx_cdm_ADR_DEL_INTL(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->INTL = (struct zx_elem_s*)x->INTL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->INTL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->INTL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_PREF) */

int zx_cdm_ADR_NUM_PREF(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_PREF) */

struct zx_elem_s* zx_cdm_ADR_GET_PREF(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PREF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_PREF) */

struct zx_elem_s* zx_cdm_ADR_POP_PREF(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PREF;
  if (y)
    x->PREF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_PREF) */

void zx_cdm_ADR_PUSH_PREF(struct zx_cdm_ADR_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PREF->g;
  x->PREF = z;
}

/* FUNC(zx_cdm_ADR_REV_PREF) */

void zx_cdm_ADR_REV_PREF(struct zx_cdm_ADR_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PREF;
  if (!y) return;
  x->PREF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PREF->g;
    x->PREF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_PREF) */

void zx_cdm_ADR_PUT_PREF(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PREF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PREF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_PREF) */

void zx_cdm_ADR_ADD_PREF(struct zx_cdm_ADR_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PREF->g;
    x->PREF = z;
    return;
  case -1:
    y = x->PREF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_ADR_DEL_PREF) */

void zx_cdm_ADR_DEL_PREF(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREF = (struct zx_elem_s*)x->PREF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PREF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_POBOX) */

int zx_cdm_ADR_NUM_POBOX(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_POBOX_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->POBOX; y; ++n, y = (struct zx_cdm_POBOX_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_POBOX) */

struct zx_cdm_POBOX_s* zx_cdm_ADR_GET_POBOX(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_POBOX_s* y;
  if (!x) return 0;
  for (y = x->POBOX; n>=0 && y; --n, y = (struct zx_cdm_POBOX_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_POBOX) */

struct zx_cdm_POBOX_s* zx_cdm_ADR_POP_POBOX(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_POBOX_s* y;
  if (!x) return 0;
  y = x->POBOX;
  if (y)
    x->POBOX = (struct zx_cdm_POBOX_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_POBOX) */

void zx_cdm_ADR_PUSH_POBOX(struct zx_cdm_ADR_s* x, struct zx_cdm_POBOX_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->POBOX->gg.g;
  x->POBOX = z;
}

/* FUNC(zx_cdm_ADR_REV_POBOX) */

void zx_cdm_ADR_REV_POBOX(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_POBOX_s* nxt;
  struct zx_cdm_POBOX_s* y;
  if (!x) return;
  y = x->POBOX;
  if (!y) return;
  x->POBOX = 0;
  while (y) {
    nxt = (struct zx_cdm_POBOX_s*)y->gg.g.n;
    y->gg.g.n = &x->POBOX->gg.g;
    x->POBOX = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_POBOX) */

void zx_cdm_ADR_PUT_POBOX(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_POBOX_s* z)
{
  struct zx_cdm_POBOX_s* y;
  if (!x || !z) return;
  y = x->POBOX;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->POBOX = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_POBOX_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_POBOX) */

void zx_cdm_ADR_ADD_POBOX(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_POBOX_s* z)
{
  struct zx_cdm_POBOX_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->POBOX->gg.g;
    x->POBOX = z;
    return;
  case -1:
    y = x->POBOX;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_POBOX_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->POBOX; n > 1 && y; --n, y = (struct zx_cdm_POBOX_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ADR_DEL_POBOX) */

void zx_cdm_ADR_DEL_POBOX(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_POBOX_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->POBOX = (struct zx_cdm_POBOX_s*)x->POBOX->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_POBOX_s*)x->POBOX;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_POBOX_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->POBOX; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_POBOX_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_EXTADR) */

int zx_cdm_ADR_NUM_EXTADR(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_EXTADR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EXTADR; y; ++n, y = (struct zx_cdm_EXTADR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_EXTADR) */

struct zx_cdm_EXTADR_s* zx_cdm_ADR_GET_EXTADR(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_EXTADR_s* y;
  if (!x) return 0;
  for (y = x->EXTADR; n>=0 && y; --n, y = (struct zx_cdm_EXTADR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_EXTADR) */

struct zx_cdm_EXTADR_s* zx_cdm_ADR_POP_EXTADR(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_EXTADR_s* y;
  if (!x) return 0;
  y = x->EXTADR;
  if (y)
    x->EXTADR = (struct zx_cdm_EXTADR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_EXTADR) */

void zx_cdm_ADR_PUSH_EXTADR(struct zx_cdm_ADR_s* x, struct zx_cdm_EXTADR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EXTADR->gg.g;
  x->EXTADR = z;
}

/* FUNC(zx_cdm_ADR_REV_EXTADR) */

void zx_cdm_ADR_REV_EXTADR(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_EXTADR_s* nxt;
  struct zx_cdm_EXTADR_s* y;
  if (!x) return;
  y = x->EXTADR;
  if (!y) return;
  x->EXTADR = 0;
  while (y) {
    nxt = (struct zx_cdm_EXTADR_s*)y->gg.g.n;
    y->gg.g.n = &x->EXTADR->gg.g;
    x->EXTADR = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_EXTADR) */

void zx_cdm_ADR_PUT_EXTADR(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_EXTADR_s* z)
{
  struct zx_cdm_EXTADR_s* y;
  if (!x || !z) return;
  y = x->EXTADR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EXTADR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTADR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_EXTADR) */

void zx_cdm_ADR_ADD_EXTADR(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_EXTADR_s* z)
{
  struct zx_cdm_EXTADR_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EXTADR->gg.g;
    x->EXTADR = z;
    return;
  case -1:
    y = x->EXTADR;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTADR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTADR; n > 1 && y; --n, y = (struct zx_cdm_EXTADR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ADR_DEL_EXTADR) */

void zx_cdm_ADR_DEL_EXTADR(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_EXTADR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EXTADR = (struct zx_cdm_EXTADR_s*)x->EXTADR->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_EXTADR_s*)x->EXTADR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTADR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTADR; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTADR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_STREET) */

int zx_cdm_ADR_NUM_STREET(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_STREET_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->STREET; y; ++n, y = (struct zx_cdm_STREET_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_STREET) */

struct zx_cdm_STREET_s* zx_cdm_ADR_GET_STREET(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_STREET_s* y;
  if (!x) return 0;
  for (y = x->STREET; n>=0 && y; --n, y = (struct zx_cdm_STREET_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_STREET) */

struct zx_cdm_STREET_s* zx_cdm_ADR_POP_STREET(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_STREET_s* y;
  if (!x) return 0;
  y = x->STREET;
  if (y)
    x->STREET = (struct zx_cdm_STREET_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_STREET) */

void zx_cdm_ADR_PUSH_STREET(struct zx_cdm_ADR_s* x, struct zx_cdm_STREET_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->STREET->gg.g;
  x->STREET = z;
}

/* FUNC(zx_cdm_ADR_REV_STREET) */

void zx_cdm_ADR_REV_STREET(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_STREET_s* nxt;
  struct zx_cdm_STREET_s* y;
  if (!x) return;
  y = x->STREET;
  if (!y) return;
  x->STREET = 0;
  while (y) {
    nxt = (struct zx_cdm_STREET_s*)y->gg.g.n;
    y->gg.g.n = &x->STREET->gg.g;
    x->STREET = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_STREET) */

void zx_cdm_ADR_PUT_STREET(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_STREET_s* z)
{
  struct zx_cdm_STREET_s* y;
  if (!x || !z) return;
  y = x->STREET;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->STREET = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_STREET_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_STREET) */

void zx_cdm_ADR_ADD_STREET(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_STREET_s* z)
{
  struct zx_cdm_STREET_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->STREET->gg.g;
    x->STREET = z;
    return;
  case -1:
    y = x->STREET;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_STREET_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->STREET; n > 1 && y; --n, y = (struct zx_cdm_STREET_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ADR_DEL_STREET) */

void zx_cdm_ADR_DEL_STREET(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_STREET_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->STREET = (struct zx_cdm_STREET_s*)x->STREET->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_STREET_s*)x->STREET;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_STREET_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->STREET; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_STREET_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_LOCALITY) */

int zx_cdm_ADR_NUM_LOCALITY(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_LOCALITY_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LOCALITY; y; ++n, y = (struct zx_cdm_LOCALITY_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_LOCALITY) */

struct zx_cdm_LOCALITY_s* zx_cdm_ADR_GET_LOCALITY(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_LOCALITY_s* y;
  if (!x) return 0;
  for (y = x->LOCALITY; n>=0 && y; --n, y = (struct zx_cdm_LOCALITY_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_LOCALITY) */

struct zx_cdm_LOCALITY_s* zx_cdm_ADR_POP_LOCALITY(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_LOCALITY_s* y;
  if (!x) return 0;
  y = x->LOCALITY;
  if (y)
    x->LOCALITY = (struct zx_cdm_LOCALITY_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_LOCALITY) */

void zx_cdm_ADR_PUSH_LOCALITY(struct zx_cdm_ADR_s* x, struct zx_cdm_LOCALITY_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LOCALITY->gg.g;
  x->LOCALITY = z;
}

/* FUNC(zx_cdm_ADR_REV_LOCALITY) */

void zx_cdm_ADR_REV_LOCALITY(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_LOCALITY_s* nxt;
  struct zx_cdm_LOCALITY_s* y;
  if (!x) return;
  y = x->LOCALITY;
  if (!y) return;
  x->LOCALITY = 0;
  while (y) {
    nxt = (struct zx_cdm_LOCALITY_s*)y->gg.g.n;
    y->gg.g.n = &x->LOCALITY->gg.g;
    x->LOCALITY = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_LOCALITY) */

void zx_cdm_ADR_PUT_LOCALITY(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_LOCALITY_s* z)
{
  struct zx_cdm_LOCALITY_s* y;
  if (!x || !z) return;
  y = x->LOCALITY;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LOCALITY = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LOCALITY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_LOCALITY) */

void zx_cdm_ADR_ADD_LOCALITY(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_LOCALITY_s* z)
{
  struct zx_cdm_LOCALITY_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LOCALITY->gg.g;
    x->LOCALITY = z;
    return;
  case -1:
    y = x->LOCALITY;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_LOCALITY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LOCALITY; n > 1 && y; --n, y = (struct zx_cdm_LOCALITY_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ADR_DEL_LOCALITY) */

void zx_cdm_ADR_DEL_LOCALITY(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_LOCALITY_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LOCALITY = (struct zx_cdm_LOCALITY_s*)x->LOCALITY->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_LOCALITY_s*)x->LOCALITY;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_LOCALITY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LOCALITY; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LOCALITY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_REGION) */

int zx_cdm_ADR_NUM_REGION(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_REGION_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->REGION; y; ++n, y = (struct zx_cdm_REGION_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_REGION) */

struct zx_cdm_REGION_s* zx_cdm_ADR_GET_REGION(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_REGION_s* y;
  if (!x) return 0;
  for (y = x->REGION; n>=0 && y; --n, y = (struct zx_cdm_REGION_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_REGION) */

struct zx_cdm_REGION_s* zx_cdm_ADR_POP_REGION(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_REGION_s* y;
  if (!x) return 0;
  y = x->REGION;
  if (y)
    x->REGION = (struct zx_cdm_REGION_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_REGION) */

void zx_cdm_ADR_PUSH_REGION(struct zx_cdm_ADR_s* x, struct zx_cdm_REGION_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->REGION->gg.g;
  x->REGION = z;
}

/* FUNC(zx_cdm_ADR_REV_REGION) */

void zx_cdm_ADR_REV_REGION(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_REGION_s* nxt;
  struct zx_cdm_REGION_s* y;
  if (!x) return;
  y = x->REGION;
  if (!y) return;
  x->REGION = 0;
  while (y) {
    nxt = (struct zx_cdm_REGION_s*)y->gg.g.n;
    y->gg.g.n = &x->REGION->gg.g;
    x->REGION = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_REGION) */

void zx_cdm_ADR_PUT_REGION(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_REGION_s* z)
{
  struct zx_cdm_REGION_s* y;
  if (!x || !z) return;
  y = x->REGION;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->REGION = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_REGION_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_REGION) */

void zx_cdm_ADR_ADD_REGION(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_REGION_s* z)
{
  struct zx_cdm_REGION_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->REGION->gg.g;
    x->REGION = z;
    return;
  case -1:
    y = x->REGION;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_REGION_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->REGION; n > 1 && y; --n, y = (struct zx_cdm_REGION_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ADR_DEL_REGION) */

void zx_cdm_ADR_DEL_REGION(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_REGION_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->REGION = (struct zx_cdm_REGION_s*)x->REGION->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_REGION_s*)x->REGION;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_REGION_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->REGION; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_REGION_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_PCODE) */

int zx_cdm_ADR_NUM_PCODE(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_PCODE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PCODE; y; ++n, y = (struct zx_cdm_PCODE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_PCODE) */

struct zx_cdm_PCODE_s* zx_cdm_ADR_GET_PCODE(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_PCODE_s* y;
  if (!x) return 0;
  for (y = x->PCODE; n>=0 && y; --n, y = (struct zx_cdm_PCODE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_PCODE) */

struct zx_cdm_PCODE_s* zx_cdm_ADR_POP_PCODE(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_PCODE_s* y;
  if (!x) return 0;
  y = x->PCODE;
  if (y)
    x->PCODE = (struct zx_cdm_PCODE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_PCODE) */

void zx_cdm_ADR_PUSH_PCODE(struct zx_cdm_ADR_s* x, struct zx_cdm_PCODE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PCODE->gg.g;
  x->PCODE = z;
}

/* FUNC(zx_cdm_ADR_REV_PCODE) */

void zx_cdm_ADR_REV_PCODE(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_PCODE_s* nxt;
  struct zx_cdm_PCODE_s* y;
  if (!x) return;
  y = x->PCODE;
  if (!y) return;
  x->PCODE = 0;
  while (y) {
    nxt = (struct zx_cdm_PCODE_s*)y->gg.g.n;
    y->gg.g.n = &x->PCODE->gg.g;
    x->PCODE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_PCODE) */

void zx_cdm_ADR_PUT_PCODE(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_PCODE_s* z)
{
  struct zx_cdm_PCODE_s* y;
  if (!x || !z) return;
  y = x->PCODE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PCODE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PCODE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_PCODE) */

void zx_cdm_ADR_ADD_PCODE(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_PCODE_s* z)
{
  struct zx_cdm_PCODE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PCODE->gg.g;
    x->PCODE = z;
    return;
  case -1:
    y = x->PCODE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_PCODE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PCODE; n > 1 && y; --n, y = (struct zx_cdm_PCODE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ADR_DEL_PCODE) */

void zx_cdm_ADR_DEL_PCODE(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_PCODE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PCODE = (struct zx_cdm_PCODE_s*)x->PCODE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_PCODE_s*)x->PCODE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_PCODE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PCODE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PCODE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ADR_NUM_CTRY) */

int zx_cdm_ADR_NUM_CTRY(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_CTRY_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CTRY; y; ++n, y = (struct zx_cdm_CTRY_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ADR_GET_CTRY) */

struct zx_cdm_CTRY_s* zx_cdm_ADR_GET_CTRY(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_CTRY_s* y;
  if (!x) return 0;
  for (y = x->CTRY; n>=0 && y; --n, y = (struct zx_cdm_CTRY_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ADR_POP_CTRY) */

struct zx_cdm_CTRY_s* zx_cdm_ADR_POP_CTRY(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_CTRY_s* y;
  if (!x) return 0;
  y = x->CTRY;
  if (y)
    x->CTRY = (struct zx_cdm_CTRY_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ADR_PUSH_CTRY) */

void zx_cdm_ADR_PUSH_CTRY(struct zx_cdm_ADR_s* x, struct zx_cdm_CTRY_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CTRY->gg.g;
  x->CTRY = z;
}

/* FUNC(zx_cdm_ADR_REV_CTRY) */

void zx_cdm_ADR_REV_CTRY(struct zx_cdm_ADR_s* x)
{
  struct zx_cdm_CTRY_s* nxt;
  struct zx_cdm_CTRY_s* y;
  if (!x) return;
  y = x->CTRY;
  if (!y) return;
  x->CTRY = 0;
  while (y) {
    nxt = (struct zx_cdm_CTRY_s*)y->gg.g.n;
    y->gg.g.n = &x->CTRY->gg.g;
    x->CTRY = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ADR_PUT_CTRY) */

void zx_cdm_ADR_PUT_CTRY(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_CTRY_s* z)
{
  struct zx_cdm_CTRY_s* y;
  if (!x || !z) return;
  y = x->CTRY;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CTRY = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CTRY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ADR_ADD_CTRY) */

void zx_cdm_ADR_ADD_CTRY(struct zx_cdm_ADR_s* x, int n, struct zx_cdm_CTRY_s* z)
{
  struct zx_cdm_CTRY_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CTRY->gg.g;
    x->CTRY = z;
    return;
  case -1:
    y = x->CTRY;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_CTRY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CTRY; n > 1 && y; --n, y = (struct zx_cdm_CTRY_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ADR_DEL_CTRY) */

void zx_cdm_ADR_DEL_CTRY(struct zx_cdm_ADR_s* x, int n)
{
  struct zx_cdm_CTRY_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CTRY = (struct zx_cdm_CTRY_s*)x->CTRY->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_CTRY_s*)x->CTRY;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_CTRY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CTRY; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CTRY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_ADR_GET_id) */
struct zx_str* zx_cdm_ADR_GET_id(struct zx_cdm_ADR_s* x) { return x->id; }
/* FUNC(zx_cdm_ADR_PUT_id) */
void zx_cdm_ADR_PUT_id(struct zx_cdm_ADR_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_ADR_GET_modificationTime) */
struct zx_str* zx_cdm_ADR_GET_modificationTime(struct zx_cdm_ADR_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_ADR_PUT_modificationTime) */
void zx_cdm_ADR_PUT_modificationTime(struct zx_cdm_ADR_s* x, struct zx_str* y) { x->modificationTime = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_AGENT_NUM_vCard) */

int zx_cdm_AGENT_NUM_vCard(struct zx_cdm_AGENT_s* x)
{
  struct zx_cdm_vCard_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->vCard; y; ++n, y = (struct zx_cdm_vCard_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_AGENT_GET_vCard) */

struct zx_cdm_vCard_s* zx_cdm_AGENT_GET_vCard(struct zx_cdm_AGENT_s* x, int n)
{
  struct zx_cdm_vCard_s* y;
  if (!x) return 0;
  for (y = x->vCard; n>=0 && y; --n, y = (struct zx_cdm_vCard_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_AGENT_POP_vCard) */

struct zx_cdm_vCard_s* zx_cdm_AGENT_POP_vCard(struct zx_cdm_AGENT_s* x)
{
  struct zx_cdm_vCard_s* y;
  if (!x) return 0;
  y = x->vCard;
  if (y)
    x->vCard = (struct zx_cdm_vCard_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_AGENT_PUSH_vCard) */

void zx_cdm_AGENT_PUSH_vCard(struct zx_cdm_AGENT_s* x, struct zx_cdm_vCard_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->vCard->gg.g;
  x->vCard = z;
}

/* FUNC(zx_cdm_AGENT_REV_vCard) */

void zx_cdm_AGENT_REV_vCard(struct zx_cdm_AGENT_s* x)
{
  struct zx_cdm_vCard_s* nxt;
  struct zx_cdm_vCard_s* y;
  if (!x) return;
  y = x->vCard;
  if (!y) return;
  x->vCard = 0;
  while (y) {
    nxt = (struct zx_cdm_vCard_s*)y->gg.g.n;
    y->gg.g.n = &x->vCard->gg.g;
    x->vCard = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_AGENT_PUT_vCard) */

void zx_cdm_AGENT_PUT_vCard(struct zx_cdm_AGENT_s* x, int n, struct zx_cdm_vCard_s* z)
{
  struct zx_cdm_vCard_s* y;
  if (!x || !z) return;
  y = x->vCard;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->vCard = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_vCard_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_AGENT_ADD_vCard) */

void zx_cdm_AGENT_ADD_vCard(struct zx_cdm_AGENT_s* x, int n, struct zx_cdm_vCard_s* z)
{
  struct zx_cdm_vCard_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->vCard->gg.g;
    x->vCard = z;
    return;
  case -1:
    y = x->vCard;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_vCard_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->vCard; n > 1 && y; --n, y = (struct zx_cdm_vCard_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_AGENT_DEL_vCard) */

void zx_cdm_AGENT_DEL_vCard(struct zx_cdm_AGENT_s* x, int n)
{
  struct zx_cdm_vCard_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->vCard = (struct zx_cdm_vCard_s*)x->vCard->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_vCard_s*)x->vCard;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_vCard_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->vCard; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_vCard_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_AGENT_NUM_EXTVAL) */

int zx_cdm_AGENT_NUM_EXTVAL(struct zx_cdm_AGENT_s* x)
{
  struct zx_cdm_EXTVAL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EXTVAL; y; ++n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_AGENT_GET_EXTVAL) */

struct zx_cdm_EXTVAL_s* zx_cdm_AGENT_GET_EXTVAL(struct zx_cdm_AGENT_s* x, int n)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return 0;
  for (y = x->EXTVAL; n>=0 && y; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_AGENT_POP_EXTVAL) */

struct zx_cdm_EXTVAL_s* zx_cdm_AGENT_POP_EXTVAL(struct zx_cdm_AGENT_s* x)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return 0;
  y = x->EXTVAL;
  if (y)
    x->EXTVAL = (struct zx_cdm_EXTVAL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_AGENT_PUSH_EXTVAL) */

void zx_cdm_AGENT_PUSH_EXTVAL(struct zx_cdm_AGENT_s* x, struct zx_cdm_EXTVAL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EXTVAL->gg.g;
  x->EXTVAL = z;
}

/* FUNC(zx_cdm_AGENT_REV_EXTVAL) */

void zx_cdm_AGENT_REV_EXTVAL(struct zx_cdm_AGENT_s* x)
{
  struct zx_cdm_EXTVAL_s* nxt;
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return;
  y = x->EXTVAL;
  if (!y) return;
  x->EXTVAL = 0;
  while (y) {
    nxt = (struct zx_cdm_EXTVAL_s*)y->gg.g.n;
    y->gg.g.n = &x->EXTVAL->gg.g;
    x->EXTVAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_AGENT_PUT_EXTVAL) */

void zx_cdm_AGENT_PUT_EXTVAL(struct zx_cdm_AGENT_s* x, int n, struct zx_cdm_EXTVAL_s* z)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x || !z) return;
  y = x->EXTVAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EXTVAL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_AGENT_ADD_EXTVAL) */

void zx_cdm_AGENT_ADD_EXTVAL(struct zx_cdm_AGENT_s* x, int n, struct zx_cdm_EXTVAL_s* z)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EXTVAL->gg.g;
    x->EXTVAL = z;
    return;
  case -1:
    y = x->EXTVAL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTVAL; n > 1 && y; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_AGENT_DEL_EXTVAL) */

void zx_cdm_AGENT_DEL_EXTVAL(struct zx_cdm_AGENT_s* x, int n)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EXTVAL = (struct zx_cdm_EXTVAL_s*)x->EXTVAL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_EXTVAL_s*)x->EXTVAL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTVAL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_AGENT_GET_id) */
struct zx_str* zx_cdm_AGENT_GET_id(struct zx_cdm_AGENT_s* x) { return x->id; }
/* FUNC(zx_cdm_AGENT_PUT_id) */
void zx_cdm_AGENT_PUT_id(struct zx_cdm_AGENT_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_AGENT_GET_modificationTime) */
struct zx_str* zx_cdm_AGENT_GET_modificationTime(struct zx_cdm_AGENT_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_AGENT_PUT_modificationTime) */
void zx_cdm_AGENT_PUT_modificationTime(struct zx_cdm_AGENT_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_BDAY_GET_id) */
struct zx_str* zx_cdm_BDAY_GET_id(struct zx_cdm_BDAY_s* x) { return x->id; }
/* FUNC(zx_cdm_BDAY_PUT_id) */
void zx_cdm_BDAY_PUT_id(struct zx_cdm_BDAY_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_BDAY_GET_modificationTime) */
struct zx_str* zx_cdm_BDAY_GET_modificationTime(struct zx_cdm_BDAY_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_BDAY_PUT_modificationTime) */
void zx_cdm_BDAY_PUT_modificationTime(struct zx_cdm_BDAY_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_BDAY_GET_ACC) */
struct zx_str* zx_cdm_BDAY_GET_ACC(struct zx_cdm_BDAY_s* x) { return x->ACC; }
/* FUNC(zx_cdm_BDAY_PUT_ACC) */
void zx_cdm_BDAY_PUT_ACC(struct zx_cdm_BDAY_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_BDAY_GET_ACCTime) */
struct zx_str* zx_cdm_BDAY_GET_ACCTime(struct zx_cdm_BDAY_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_BDAY_PUT_ACCTime) */
void zx_cdm_BDAY_PUT_ACCTime(struct zx_cdm_BDAY_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_BDAY_GET_modifier) */
struct zx_str* zx_cdm_BDAY_GET_modifier(struct zx_cdm_BDAY_s* x) { return x->modifier; }
/* FUNC(zx_cdm_BDAY_PUT_modifier) */
void zx_cdm_BDAY_PUT_modifier(struct zx_cdm_BDAY_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_BINVAL_GET_id) */
struct zx_str* zx_cdm_BINVAL_GET_id(struct zx_cdm_BINVAL_s* x) { return x->id; }
/* FUNC(zx_cdm_BINVAL_PUT_id) */
void zx_cdm_BINVAL_PUT_id(struct zx_cdm_BINVAL_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_BINVAL_GET_modificationTime) */
struct zx_str* zx_cdm_BINVAL_GET_modificationTime(struct zx_cdm_BINVAL_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_BINVAL_PUT_modificationTime) */
void zx_cdm_BINVAL_PUT_modificationTime(struct zx_cdm_BINVAL_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_BINVAL_GET_ACC) */
struct zx_str* zx_cdm_BINVAL_GET_ACC(struct zx_cdm_BINVAL_s* x) { return x->ACC; }
/* FUNC(zx_cdm_BINVAL_PUT_ACC) */
void zx_cdm_BINVAL_PUT_ACC(struct zx_cdm_BINVAL_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_BINVAL_GET_ACCTime) */
struct zx_str* zx_cdm_BINVAL_GET_ACCTime(struct zx_cdm_BINVAL_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_BINVAL_PUT_ACCTime) */
void zx_cdm_BINVAL_PUT_ACCTime(struct zx_cdm_BINVAL_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_BINVAL_GET_modifier) */
struct zx_str* zx_cdm_BINVAL_GET_modifier(struct zx_cdm_BINVAL_s* x) { return x->modifier; }
/* FUNC(zx_cdm_BINVAL_PUT_modifier) */
void zx_cdm_BINVAL_PUT_modifier(struct zx_cdm_BINVAL_s* x, struct zx_str* y) { x->modifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CALADRURI_NUM_PREF) */

int zx_cdm_CALADRURI_NUM_PREF(struct zx_cdm_CALADRURI_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_CALADRURI_GET_PREF) */

struct zx_elem_s* zx_cdm_CALADRURI_GET_PREF(struct zx_cdm_CALADRURI_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PREF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_CALADRURI_POP_PREF) */

struct zx_elem_s* zx_cdm_CALADRURI_POP_PREF(struct zx_cdm_CALADRURI_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PREF;
  if (y)
    x->PREF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_CALADRURI_PUSH_PREF) */

void zx_cdm_CALADRURI_PUSH_PREF(struct zx_cdm_CALADRURI_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PREF->g;
  x->PREF = z;
}

/* FUNC(zx_cdm_CALADRURI_REV_PREF) */

void zx_cdm_CALADRURI_REV_PREF(struct zx_cdm_CALADRURI_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PREF;
  if (!y) return;
  x->PREF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PREF->g;
    x->PREF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CALADRURI_PUT_PREF) */

void zx_cdm_CALADRURI_PUT_PREF(struct zx_cdm_CALADRURI_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PREF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PREF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_CALADRURI_ADD_PREF) */

void zx_cdm_CALADRURI_ADD_PREF(struct zx_cdm_CALADRURI_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PREF->g;
    x->PREF = z;
    return;
  case -1:
    y = x->PREF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_CALADRURI_DEL_PREF) */

void zx_cdm_CALADRURI_DEL_PREF(struct zx_cdm_CALADRURI_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREF = (struct zx_elem_s*)x->PREF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PREF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CALADRURI_NUM_URI) */

int zx_cdm_CALADRURI_NUM_URI(struct zx_cdm_CALADRURI_s* x)
{
  struct zx_cdm_URI_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->URI; y; ++n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_CALADRURI_GET_URI) */

struct zx_cdm_URI_s* zx_cdm_CALADRURI_GET_URI(struct zx_cdm_CALADRURI_s* x, int n)
{
  struct zx_cdm_URI_s* y;
  if (!x) return 0;
  for (y = x->URI; n>=0 && y; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_CALADRURI_POP_URI) */

struct zx_cdm_URI_s* zx_cdm_CALADRURI_POP_URI(struct zx_cdm_CALADRURI_s* x)
{
  struct zx_cdm_URI_s* y;
  if (!x) return 0;
  y = x->URI;
  if (y)
    x->URI = (struct zx_cdm_URI_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_CALADRURI_PUSH_URI) */

void zx_cdm_CALADRURI_PUSH_URI(struct zx_cdm_CALADRURI_s* x, struct zx_cdm_URI_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->URI->gg.g;
  x->URI = z;
}

/* FUNC(zx_cdm_CALADRURI_REV_URI) */

void zx_cdm_CALADRURI_REV_URI(struct zx_cdm_CALADRURI_s* x)
{
  struct zx_cdm_URI_s* nxt;
  struct zx_cdm_URI_s* y;
  if (!x) return;
  y = x->URI;
  if (!y) return;
  x->URI = 0;
  while (y) {
    nxt = (struct zx_cdm_URI_s*)y->gg.g.n;
    y->gg.g.n = &x->URI->gg.g;
    x->URI = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CALADRURI_PUT_URI) */

void zx_cdm_CALADRURI_PUT_URI(struct zx_cdm_CALADRURI_s* x, int n, struct zx_cdm_URI_s* z)
{
  struct zx_cdm_URI_s* y;
  if (!x || !z) return;
  y = x->URI;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->URI = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_CALADRURI_ADD_URI) */

void zx_cdm_CALADRURI_ADD_URI(struct zx_cdm_CALADRURI_s* x, int n, struct zx_cdm_URI_s* z)
{
  struct zx_cdm_URI_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->URI->gg.g;
    x->URI = z;
    return;
  case -1:
    y = x->URI;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URI; n > 1 && y; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_CALADRURI_DEL_URI) */

void zx_cdm_CALADRURI_DEL_URI(struct zx_cdm_CALADRURI_s* x, int n)
{
  struct zx_cdm_URI_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->URI = (struct zx_cdm_URI_s*)x->URI->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_URI_s*)x->URI;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URI; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_CALADRURI_GET_id) */
struct zx_str* zx_cdm_CALADRURI_GET_id(struct zx_cdm_CALADRURI_s* x) { return x->id; }
/* FUNC(zx_cdm_CALADRURI_PUT_id) */
void zx_cdm_CALADRURI_PUT_id(struct zx_cdm_CALADRURI_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_CALADRURI_GET_modificationTime) */
struct zx_str* zx_cdm_CALADRURI_GET_modificationTime(struct zx_cdm_CALADRURI_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_CALADRURI_PUT_modificationTime) */
void zx_cdm_CALADRURI_PUT_modificationTime(struct zx_cdm_CALADRURI_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_CALADRURI_GET_ACC) */
struct zx_str* zx_cdm_CALADRURI_GET_ACC(struct zx_cdm_CALADRURI_s* x) { return x->ACC; }
/* FUNC(zx_cdm_CALADRURI_PUT_ACC) */
void zx_cdm_CALADRURI_PUT_ACC(struct zx_cdm_CALADRURI_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_CALADRURI_GET_ACCTime) */
struct zx_str* zx_cdm_CALADRURI_GET_ACCTime(struct zx_cdm_CALADRURI_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_CALADRURI_PUT_ACCTime) */
void zx_cdm_CALADRURI_PUT_ACCTime(struct zx_cdm_CALADRURI_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_CALADRURI_GET_modifier) */
struct zx_str* zx_cdm_CALADRURI_GET_modifier(struct zx_cdm_CALADRURI_s* x) { return x->modifier; }
/* FUNC(zx_cdm_CALADRURI_PUT_modifier) */
void zx_cdm_CALADRURI_PUT_modifier(struct zx_cdm_CALADRURI_s* x, struct zx_str* y) { x->modifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CALURI_NUM_PREF) */

int zx_cdm_CALURI_NUM_PREF(struct zx_cdm_CALURI_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_CALURI_GET_PREF) */

struct zx_elem_s* zx_cdm_CALURI_GET_PREF(struct zx_cdm_CALURI_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PREF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_CALURI_POP_PREF) */

struct zx_elem_s* zx_cdm_CALURI_POP_PREF(struct zx_cdm_CALURI_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PREF;
  if (y)
    x->PREF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_CALURI_PUSH_PREF) */

void zx_cdm_CALURI_PUSH_PREF(struct zx_cdm_CALURI_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PREF->g;
  x->PREF = z;
}

/* FUNC(zx_cdm_CALURI_REV_PREF) */

void zx_cdm_CALURI_REV_PREF(struct zx_cdm_CALURI_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PREF;
  if (!y) return;
  x->PREF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PREF->g;
    x->PREF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CALURI_PUT_PREF) */

void zx_cdm_CALURI_PUT_PREF(struct zx_cdm_CALURI_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PREF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PREF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_CALURI_ADD_PREF) */

void zx_cdm_CALURI_ADD_PREF(struct zx_cdm_CALURI_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PREF->g;
    x->PREF = z;
    return;
  case -1:
    y = x->PREF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_CALURI_DEL_PREF) */

void zx_cdm_CALURI_DEL_PREF(struct zx_cdm_CALURI_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREF = (struct zx_elem_s*)x->PREF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PREF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CALURI_NUM_URI) */

int zx_cdm_CALURI_NUM_URI(struct zx_cdm_CALURI_s* x)
{
  struct zx_cdm_URI_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->URI; y; ++n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_CALURI_GET_URI) */

struct zx_cdm_URI_s* zx_cdm_CALURI_GET_URI(struct zx_cdm_CALURI_s* x, int n)
{
  struct zx_cdm_URI_s* y;
  if (!x) return 0;
  for (y = x->URI; n>=0 && y; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_CALURI_POP_URI) */

struct zx_cdm_URI_s* zx_cdm_CALURI_POP_URI(struct zx_cdm_CALURI_s* x)
{
  struct zx_cdm_URI_s* y;
  if (!x) return 0;
  y = x->URI;
  if (y)
    x->URI = (struct zx_cdm_URI_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_CALURI_PUSH_URI) */

void zx_cdm_CALURI_PUSH_URI(struct zx_cdm_CALURI_s* x, struct zx_cdm_URI_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->URI->gg.g;
  x->URI = z;
}

/* FUNC(zx_cdm_CALURI_REV_URI) */

void zx_cdm_CALURI_REV_URI(struct zx_cdm_CALURI_s* x)
{
  struct zx_cdm_URI_s* nxt;
  struct zx_cdm_URI_s* y;
  if (!x) return;
  y = x->URI;
  if (!y) return;
  x->URI = 0;
  while (y) {
    nxt = (struct zx_cdm_URI_s*)y->gg.g.n;
    y->gg.g.n = &x->URI->gg.g;
    x->URI = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CALURI_PUT_URI) */

void zx_cdm_CALURI_PUT_URI(struct zx_cdm_CALURI_s* x, int n, struct zx_cdm_URI_s* z)
{
  struct zx_cdm_URI_s* y;
  if (!x || !z) return;
  y = x->URI;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->URI = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_CALURI_ADD_URI) */

void zx_cdm_CALURI_ADD_URI(struct zx_cdm_CALURI_s* x, int n, struct zx_cdm_URI_s* z)
{
  struct zx_cdm_URI_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->URI->gg.g;
    x->URI = z;
    return;
  case -1:
    y = x->URI;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URI; n > 1 && y; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_CALURI_DEL_URI) */

void zx_cdm_CALURI_DEL_URI(struct zx_cdm_CALURI_s* x, int n)
{
  struct zx_cdm_URI_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->URI = (struct zx_cdm_URI_s*)x->URI->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_URI_s*)x->URI;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URI; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_CALURI_GET_id) */
struct zx_str* zx_cdm_CALURI_GET_id(struct zx_cdm_CALURI_s* x) { return x->id; }
/* FUNC(zx_cdm_CALURI_PUT_id) */
void zx_cdm_CALURI_PUT_id(struct zx_cdm_CALURI_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_CALURI_GET_modificationTime) */
struct zx_str* zx_cdm_CALURI_GET_modificationTime(struct zx_cdm_CALURI_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_CALURI_PUT_modificationTime) */
void zx_cdm_CALURI_PUT_modificationTime(struct zx_cdm_CALURI_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_CALURI_GET_ACC) */
struct zx_str* zx_cdm_CALURI_GET_ACC(struct zx_cdm_CALURI_s* x) { return x->ACC; }
/* FUNC(zx_cdm_CALURI_PUT_ACC) */
void zx_cdm_CALURI_PUT_ACC(struct zx_cdm_CALURI_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_CALURI_GET_ACCTime) */
struct zx_str* zx_cdm_CALURI_GET_ACCTime(struct zx_cdm_CALURI_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_CALURI_PUT_ACCTime) */
void zx_cdm_CALURI_PUT_ACCTime(struct zx_cdm_CALURI_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_CALURI_GET_modifier) */
struct zx_str* zx_cdm_CALURI_GET_modifier(struct zx_cdm_CALURI_s* x) { return x->modifier; }
/* FUNC(zx_cdm_CALURI_PUT_modifier) */
void zx_cdm_CALURI_PUT_modifier(struct zx_cdm_CALURI_s* x, struct zx_str* y) { x->modifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CAPURI_NUM_PREF) */

int zx_cdm_CAPURI_NUM_PREF(struct zx_cdm_CAPURI_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_CAPURI_GET_PREF) */

struct zx_elem_s* zx_cdm_CAPURI_GET_PREF(struct zx_cdm_CAPURI_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PREF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_CAPURI_POP_PREF) */

struct zx_elem_s* zx_cdm_CAPURI_POP_PREF(struct zx_cdm_CAPURI_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PREF;
  if (y)
    x->PREF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_CAPURI_PUSH_PREF) */

void zx_cdm_CAPURI_PUSH_PREF(struct zx_cdm_CAPURI_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PREF->g;
  x->PREF = z;
}

/* FUNC(zx_cdm_CAPURI_REV_PREF) */

void zx_cdm_CAPURI_REV_PREF(struct zx_cdm_CAPURI_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PREF;
  if (!y) return;
  x->PREF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PREF->g;
    x->PREF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CAPURI_PUT_PREF) */

void zx_cdm_CAPURI_PUT_PREF(struct zx_cdm_CAPURI_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PREF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PREF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_CAPURI_ADD_PREF) */

void zx_cdm_CAPURI_ADD_PREF(struct zx_cdm_CAPURI_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PREF->g;
    x->PREF = z;
    return;
  case -1:
    y = x->PREF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_CAPURI_DEL_PREF) */

void zx_cdm_CAPURI_DEL_PREF(struct zx_cdm_CAPURI_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREF = (struct zx_elem_s*)x->PREF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PREF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CAPURI_NUM_URI) */

int zx_cdm_CAPURI_NUM_URI(struct zx_cdm_CAPURI_s* x)
{
  struct zx_cdm_URI_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->URI; y; ++n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_CAPURI_GET_URI) */

struct zx_cdm_URI_s* zx_cdm_CAPURI_GET_URI(struct zx_cdm_CAPURI_s* x, int n)
{
  struct zx_cdm_URI_s* y;
  if (!x) return 0;
  for (y = x->URI; n>=0 && y; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_CAPURI_POP_URI) */

struct zx_cdm_URI_s* zx_cdm_CAPURI_POP_URI(struct zx_cdm_CAPURI_s* x)
{
  struct zx_cdm_URI_s* y;
  if (!x) return 0;
  y = x->URI;
  if (y)
    x->URI = (struct zx_cdm_URI_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_CAPURI_PUSH_URI) */

void zx_cdm_CAPURI_PUSH_URI(struct zx_cdm_CAPURI_s* x, struct zx_cdm_URI_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->URI->gg.g;
  x->URI = z;
}

/* FUNC(zx_cdm_CAPURI_REV_URI) */

void zx_cdm_CAPURI_REV_URI(struct zx_cdm_CAPURI_s* x)
{
  struct zx_cdm_URI_s* nxt;
  struct zx_cdm_URI_s* y;
  if (!x) return;
  y = x->URI;
  if (!y) return;
  x->URI = 0;
  while (y) {
    nxt = (struct zx_cdm_URI_s*)y->gg.g.n;
    y->gg.g.n = &x->URI->gg.g;
    x->URI = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CAPURI_PUT_URI) */

void zx_cdm_CAPURI_PUT_URI(struct zx_cdm_CAPURI_s* x, int n, struct zx_cdm_URI_s* z)
{
  struct zx_cdm_URI_s* y;
  if (!x || !z) return;
  y = x->URI;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->URI = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_CAPURI_ADD_URI) */

void zx_cdm_CAPURI_ADD_URI(struct zx_cdm_CAPURI_s* x, int n, struct zx_cdm_URI_s* z)
{
  struct zx_cdm_URI_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->URI->gg.g;
    x->URI = z;
    return;
  case -1:
    y = x->URI;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URI; n > 1 && y; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_CAPURI_DEL_URI) */

void zx_cdm_CAPURI_DEL_URI(struct zx_cdm_CAPURI_s* x, int n)
{
  struct zx_cdm_URI_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->URI = (struct zx_cdm_URI_s*)x->URI->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_URI_s*)x->URI;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URI; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_CAPURI_GET_id) */
struct zx_str* zx_cdm_CAPURI_GET_id(struct zx_cdm_CAPURI_s* x) { return x->id; }
/* FUNC(zx_cdm_CAPURI_PUT_id) */
void zx_cdm_CAPURI_PUT_id(struct zx_cdm_CAPURI_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_CAPURI_GET_modificationTime) */
struct zx_str* zx_cdm_CAPURI_GET_modificationTime(struct zx_cdm_CAPURI_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_CAPURI_PUT_modificationTime) */
void zx_cdm_CAPURI_PUT_modificationTime(struct zx_cdm_CAPURI_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_CAPURI_GET_ACC) */
struct zx_str* zx_cdm_CAPURI_GET_ACC(struct zx_cdm_CAPURI_s* x) { return x->ACC; }
/* FUNC(zx_cdm_CAPURI_PUT_ACC) */
void zx_cdm_CAPURI_PUT_ACC(struct zx_cdm_CAPURI_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_CAPURI_GET_ACCTime) */
struct zx_str* zx_cdm_CAPURI_GET_ACCTime(struct zx_cdm_CAPURI_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_CAPURI_PUT_ACCTime) */
void zx_cdm_CAPURI_PUT_ACCTime(struct zx_cdm_CAPURI_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_CAPURI_GET_modifier) */
struct zx_str* zx_cdm_CAPURI_GET_modifier(struct zx_cdm_CAPURI_s* x) { return x->modifier; }
/* FUNC(zx_cdm_CAPURI_PUT_modifier) */
void zx_cdm_CAPURI_PUT_modifier(struct zx_cdm_CAPURI_s* x, struct zx_str* y) { x->modifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CATEGORIES_NUM_KEYWORD) */

int zx_cdm_CATEGORIES_NUM_KEYWORD(struct zx_cdm_CATEGORIES_s* x)
{
  struct zx_cdm_KEYWORD_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KEYWORD; y; ++n, y = (struct zx_cdm_KEYWORD_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_CATEGORIES_GET_KEYWORD) */

struct zx_cdm_KEYWORD_s* zx_cdm_CATEGORIES_GET_KEYWORD(struct zx_cdm_CATEGORIES_s* x, int n)
{
  struct zx_cdm_KEYWORD_s* y;
  if (!x) return 0;
  for (y = x->KEYWORD; n>=0 && y; --n, y = (struct zx_cdm_KEYWORD_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_CATEGORIES_POP_KEYWORD) */

struct zx_cdm_KEYWORD_s* zx_cdm_CATEGORIES_POP_KEYWORD(struct zx_cdm_CATEGORIES_s* x)
{
  struct zx_cdm_KEYWORD_s* y;
  if (!x) return 0;
  y = x->KEYWORD;
  if (y)
    x->KEYWORD = (struct zx_cdm_KEYWORD_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_CATEGORIES_PUSH_KEYWORD) */

void zx_cdm_CATEGORIES_PUSH_KEYWORD(struct zx_cdm_CATEGORIES_s* x, struct zx_cdm_KEYWORD_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KEYWORD->gg.g;
  x->KEYWORD = z;
}

/* FUNC(zx_cdm_CATEGORIES_REV_KEYWORD) */

void zx_cdm_CATEGORIES_REV_KEYWORD(struct zx_cdm_CATEGORIES_s* x)
{
  struct zx_cdm_KEYWORD_s* nxt;
  struct zx_cdm_KEYWORD_s* y;
  if (!x) return;
  y = x->KEYWORD;
  if (!y) return;
  x->KEYWORD = 0;
  while (y) {
    nxt = (struct zx_cdm_KEYWORD_s*)y->gg.g.n;
    y->gg.g.n = &x->KEYWORD->gg.g;
    x->KEYWORD = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CATEGORIES_PUT_KEYWORD) */

void zx_cdm_CATEGORIES_PUT_KEYWORD(struct zx_cdm_CATEGORIES_s* x, int n, struct zx_cdm_KEYWORD_s* z)
{
  struct zx_cdm_KEYWORD_s* y;
  if (!x || !z) return;
  y = x->KEYWORD;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KEYWORD = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_KEYWORD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_CATEGORIES_ADD_KEYWORD) */

void zx_cdm_CATEGORIES_ADD_KEYWORD(struct zx_cdm_CATEGORIES_s* x, int n, struct zx_cdm_KEYWORD_s* z)
{
  struct zx_cdm_KEYWORD_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KEYWORD->gg.g;
    x->KEYWORD = z;
    return;
  case -1:
    y = x->KEYWORD;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_KEYWORD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KEYWORD; n > 1 && y; --n, y = (struct zx_cdm_KEYWORD_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_CATEGORIES_DEL_KEYWORD) */

void zx_cdm_CATEGORIES_DEL_KEYWORD(struct zx_cdm_CATEGORIES_s* x, int n)
{
  struct zx_cdm_KEYWORD_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KEYWORD = (struct zx_cdm_KEYWORD_s*)x->KEYWORD->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_KEYWORD_s*)x->KEYWORD;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_KEYWORD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KEYWORD; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_KEYWORD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_CATEGORIES_GET_id) */
struct zx_str* zx_cdm_CATEGORIES_GET_id(struct zx_cdm_CATEGORIES_s* x) { return x->id; }
/* FUNC(zx_cdm_CATEGORIES_PUT_id) */
void zx_cdm_CATEGORIES_PUT_id(struct zx_cdm_CATEGORIES_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_CATEGORIES_GET_modificationTime) */
struct zx_str* zx_cdm_CATEGORIES_GET_modificationTime(struct zx_cdm_CATEGORIES_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_CATEGORIES_PUT_modificationTime) */
void zx_cdm_CATEGORIES_PUT_modificationTime(struct zx_cdm_CATEGORIES_s* x, struct zx_str* y) { x->modificationTime = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CLASS_NUM_PUBLIC) */

int zx_cdm_CLASS_NUM_PUBLIC(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PUBLIC; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_CLASS_GET_PUBLIC) */

struct zx_elem_s* zx_cdm_CLASS_GET_PUBLIC(struct zx_cdm_CLASS_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PUBLIC; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_CLASS_POP_PUBLIC) */

struct zx_elem_s* zx_cdm_CLASS_POP_PUBLIC(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PUBLIC;
  if (y)
    x->PUBLIC = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_CLASS_PUSH_PUBLIC) */

void zx_cdm_CLASS_PUSH_PUBLIC(struct zx_cdm_CLASS_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PUBLIC->g;
  x->PUBLIC = z;
}

/* FUNC(zx_cdm_CLASS_REV_PUBLIC) */

void zx_cdm_CLASS_REV_PUBLIC(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PUBLIC;
  if (!y) return;
  x->PUBLIC = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PUBLIC->g;
    x->PUBLIC = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CLASS_PUT_PUBLIC) */

void zx_cdm_CLASS_PUT_PUBLIC(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PUBLIC;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PUBLIC = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_CLASS_ADD_PUBLIC) */

void zx_cdm_CLASS_ADD_PUBLIC(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PUBLIC->g;
    x->PUBLIC = z;
    return;
  case -1:
    y = x->PUBLIC;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PUBLIC; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_CLASS_DEL_PUBLIC) */

void zx_cdm_CLASS_DEL_PUBLIC(struct zx_cdm_CLASS_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PUBLIC = (struct zx_elem_s*)x->PUBLIC->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PUBLIC;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PUBLIC; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CLASS_NUM_PRIVATE) */

int zx_cdm_CLASS_NUM_PRIVATE(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PRIVATE; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_CLASS_GET_PRIVATE) */

struct zx_elem_s* zx_cdm_CLASS_GET_PRIVATE(struct zx_cdm_CLASS_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PRIVATE; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_CLASS_POP_PRIVATE) */

struct zx_elem_s* zx_cdm_CLASS_POP_PRIVATE(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PRIVATE;
  if (y)
    x->PRIVATE = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_CLASS_PUSH_PRIVATE) */

void zx_cdm_CLASS_PUSH_PRIVATE(struct zx_cdm_CLASS_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PRIVATE->g;
  x->PRIVATE = z;
}

/* FUNC(zx_cdm_CLASS_REV_PRIVATE) */

void zx_cdm_CLASS_REV_PRIVATE(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PRIVATE;
  if (!y) return;
  x->PRIVATE = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PRIVATE->g;
    x->PRIVATE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CLASS_PUT_PRIVATE) */

void zx_cdm_CLASS_PUT_PRIVATE(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PRIVATE;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PRIVATE = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_CLASS_ADD_PRIVATE) */

void zx_cdm_CLASS_ADD_PRIVATE(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PRIVATE->g;
    x->PRIVATE = z;
    return;
  case -1:
    y = x->PRIVATE;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PRIVATE; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_CLASS_DEL_PRIVATE) */

void zx_cdm_CLASS_DEL_PRIVATE(struct zx_cdm_CLASS_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PRIVATE = (struct zx_elem_s*)x->PRIVATE->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PRIVATE;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PRIVATE; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_CLASS_NUM_CONFIDENTIAL) */

int zx_cdm_CLASS_NUM_CONFIDENTIAL(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CONFIDENTIAL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_CLASS_GET_CONFIDENTIAL) */

struct zx_elem_s* zx_cdm_CLASS_GET_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CONFIDENTIAL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_CLASS_POP_CONFIDENTIAL) */

struct zx_elem_s* zx_cdm_CLASS_POP_CONFIDENTIAL(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CONFIDENTIAL;
  if (y)
    x->CONFIDENTIAL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_CLASS_PUSH_CONFIDENTIAL) */

void zx_cdm_CLASS_PUSH_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CONFIDENTIAL->g;
  x->CONFIDENTIAL = z;
}

/* FUNC(zx_cdm_CLASS_REV_CONFIDENTIAL) */

void zx_cdm_CLASS_REV_CONFIDENTIAL(struct zx_cdm_CLASS_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CONFIDENTIAL;
  if (!y) return;
  x->CONFIDENTIAL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CONFIDENTIAL->g;
    x->CONFIDENTIAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_CLASS_PUT_CONFIDENTIAL) */

void zx_cdm_CLASS_PUT_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CONFIDENTIAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CONFIDENTIAL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_CLASS_ADD_CONFIDENTIAL) */

void zx_cdm_CLASS_ADD_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CONFIDENTIAL->g;
    x->CONFIDENTIAL = z;
    return;
  case -1:
    y = x->CONFIDENTIAL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CONFIDENTIAL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_CLASS_DEL_CONFIDENTIAL) */

void zx_cdm_CLASS_DEL_CONFIDENTIAL(struct zx_cdm_CLASS_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CONFIDENTIAL = (struct zx_elem_s*)x->CONFIDENTIAL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CONFIDENTIAL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CONFIDENTIAL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_cdm_CLASS_GET_id) */
struct zx_str* zx_cdm_CLASS_GET_id(struct zx_cdm_CLASS_s* x) { return x->id; }
/* FUNC(zx_cdm_CLASS_PUT_id) */
void zx_cdm_CLASS_PUT_id(struct zx_cdm_CLASS_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_CLASS_GET_modificationTime) */
struct zx_str* zx_cdm_CLASS_GET_modificationTime(struct zx_cdm_CLASS_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_CLASS_PUT_modificationTime) */
void zx_cdm_CLASS_PUT_modificationTime(struct zx_cdm_CLASS_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_CLASS_GET_ACC) */
struct zx_str* zx_cdm_CLASS_GET_ACC(struct zx_cdm_CLASS_s* x) { return x->ACC; }
/* FUNC(zx_cdm_CLASS_PUT_ACC) */
void zx_cdm_CLASS_PUT_ACC(struct zx_cdm_CLASS_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_CLASS_GET_ACCTime) */
struct zx_str* zx_cdm_CLASS_GET_ACCTime(struct zx_cdm_CLASS_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_CLASS_PUT_ACCTime) */
void zx_cdm_CLASS_PUT_ACCTime(struct zx_cdm_CLASS_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_CLASS_GET_modifier) */
struct zx_str* zx_cdm_CLASS_GET_modifier(struct zx_cdm_CLASS_s* x) { return x->modifier; }
/* FUNC(zx_cdm_CLASS_PUT_modifier) */
void zx_cdm_CLASS_PUT_modifier(struct zx_cdm_CLASS_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_CRED_GET_id) */
struct zx_str* zx_cdm_CRED_GET_id(struct zx_cdm_CRED_s* x) { return x->id; }
/* FUNC(zx_cdm_CRED_PUT_id) */
void zx_cdm_CRED_PUT_id(struct zx_cdm_CRED_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_CRED_GET_modificationTime) */
struct zx_str* zx_cdm_CRED_GET_modificationTime(struct zx_cdm_CRED_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_CRED_PUT_modificationTime) */
void zx_cdm_CRED_PUT_modificationTime(struct zx_cdm_CRED_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_CRED_GET_ACC) */
struct zx_str* zx_cdm_CRED_GET_ACC(struct zx_cdm_CRED_s* x) { return x->ACC; }
/* FUNC(zx_cdm_CRED_PUT_ACC) */
void zx_cdm_CRED_PUT_ACC(struct zx_cdm_CRED_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_CRED_GET_ACCTime) */
struct zx_str* zx_cdm_CRED_GET_ACCTime(struct zx_cdm_CRED_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_CRED_PUT_ACCTime) */
void zx_cdm_CRED_PUT_ACCTime(struct zx_cdm_CRED_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_CRED_GET_modifier) */
struct zx_str* zx_cdm_CRED_GET_modifier(struct zx_cdm_CRED_s* x) { return x->modifier; }
/* FUNC(zx_cdm_CRED_PUT_modifier) */
void zx_cdm_CRED_PUT_modifier(struct zx_cdm_CRED_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_CTRY_GET_group) */
struct zx_str* zx_cdm_CTRY_GET_group(struct zx_cdm_CTRY_s* x) { return x->group; }
/* FUNC(zx_cdm_CTRY_PUT_group) */
void zx_cdm_CTRY_PUT_group(struct zx_cdm_CTRY_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_DESC_GET_group) */
struct zx_str* zx_cdm_DESC_GET_group(struct zx_cdm_DESC_s* x) { return x->group; }
/* FUNC(zx_cdm_DESC_PUT_group) */
void zx_cdm_DESC_PUT_group(struct zx_cdm_DESC_s* x, struct zx_str* y) { x->group = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_EMAIL_NUM_HOME) */

int zx_cdm_EMAIL_NUM_HOME(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->HOME; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_EMAIL_GET_HOME) */

struct zx_elem_s* zx_cdm_EMAIL_GET_HOME(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->HOME; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_EMAIL_POP_HOME) */

struct zx_elem_s* zx_cdm_EMAIL_POP_HOME(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->HOME;
  if (y)
    x->HOME = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_EMAIL_PUSH_HOME) */

void zx_cdm_EMAIL_PUSH_HOME(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->HOME->g;
  x->HOME = z;
}

/* FUNC(zx_cdm_EMAIL_REV_HOME) */

void zx_cdm_EMAIL_REV_HOME(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->HOME;
  if (!y) return;
  x->HOME = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->HOME->g;
    x->HOME = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_EMAIL_PUT_HOME) */

void zx_cdm_EMAIL_PUT_HOME(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->HOME;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->HOME = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_EMAIL_ADD_HOME) */

void zx_cdm_EMAIL_ADD_HOME(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->HOME->g;
    x->HOME = z;
    return;
  case -1:
    y = x->HOME;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HOME; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_EMAIL_DEL_HOME) */

void zx_cdm_EMAIL_DEL_HOME(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->HOME = (struct zx_elem_s*)x->HOME->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->HOME;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HOME; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_EMAIL_NUM_WORK) */

int zx_cdm_EMAIL_NUM_WORK(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->WORK; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_EMAIL_GET_WORK) */

struct zx_elem_s* zx_cdm_EMAIL_GET_WORK(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->WORK; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_EMAIL_POP_WORK) */

struct zx_elem_s* zx_cdm_EMAIL_POP_WORK(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->WORK;
  if (y)
    x->WORK = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_EMAIL_PUSH_WORK) */

void zx_cdm_EMAIL_PUSH_WORK(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->WORK->g;
  x->WORK = z;
}

/* FUNC(zx_cdm_EMAIL_REV_WORK) */

void zx_cdm_EMAIL_REV_WORK(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->WORK;
  if (!y) return;
  x->WORK = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->WORK->g;
    x->WORK = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_EMAIL_PUT_WORK) */

void zx_cdm_EMAIL_PUT_WORK(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->WORK;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->WORK = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_EMAIL_ADD_WORK) */

void zx_cdm_EMAIL_ADD_WORK(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->WORK->g;
    x->WORK = z;
    return;
  case -1:
    y = x->WORK;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WORK; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_EMAIL_DEL_WORK) */

void zx_cdm_EMAIL_DEL_WORK(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->WORK = (struct zx_elem_s*)x->WORK->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->WORK;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WORK; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_EMAIL_NUM_INTERNET) */

int zx_cdm_EMAIL_NUM_INTERNET(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->INTERNET; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_EMAIL_GET_INTERNET) */

struct zx_elem_s* zx_cdm_EMAIL_GET_INTERNET(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->INTERNET; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_EMAIL_POP_INTERNET) */

struct zx_elem_s* zx_cdm_EMAIL_POP_INTERNET(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->INTERNET;
  if (y)
    x->INTERNET = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_EMAIL_PUSH_INTERNET) */

void zx_cdm_EMAIL_PUSH_INTERNET(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->INTERNET->g;
  x->INTERNET = z;
}

/* FUNC(zx_cdm_EMAIL_REV_INTERNET) */

void zx_cdm_EMAIL_REV_INTERNET(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->INTERNET;
  if (!y) return;
  x->INTERNET = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->INTERNET->g;
    x->INTERNET = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_EMAIL_PUT_INTERNET) */

void zx_cdm_EMAIL_PUT_INTERNET(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->INTERNET;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->INTERNET = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_EMAIL_ADD_INTERNET) */

void zx_cdm_EMAIL_ADD_INTERNET(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->INTERNET->g;
    x->INTERNET = z;
    return;
  case -1:
    y = x->INTERNET;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->INTERNET; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_EMAIL_DEL_INTERNET) */

void zx_cdm_EMAIL_DEL_INTERNET(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->INTERNET = (struct zx_elem_s*)x->INTERNET->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->INTERNET;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->INTERNET; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_EMAIL_NUM_PREF) */

int zx_cdm_EMAIL_NUM_PREF(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_EMAIL_GET_PREF) */

struct zx_elem_s* zx_cdm_EMAIL_GET_PREF(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PREF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_EMAIL_POP_PREF) */

struct zx_elem_s* zx_cdm_EMAIL_POP_PREF(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PREF;
  if (y)
    x->PREF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_EMAIL_PUSH_PREF) */

void zx_cdm_EMAIL_PUSH_PREF(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PREF->g;
  x->PREF = z;
}

/* FUNC(zx_cdm_EMAIL_REV_PREF) */

void zx_cdm_EMAIL_REV_PREF(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PREF;
  if (!y) return;
  x->PREF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PREF->g;
    x->PREF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_EMAIL_PUT_PREF) */

void zx_cdm_EMAIL_PUT_PREF(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PREF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PREF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_EMAIL_ADD_PREF) */

void zx_cdm_EMAIL_ADD_PREF(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PREF->g;
    x->PREF = z;
    return;
  case -1:
    y = x->PREF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_EMAIL_DEL_PREF) */

void zx_cdm_EMAIL_DEL_PREF(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREF = (struct zx_elem_s*)x->PREF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PREF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_EMAIL_NUM_X400) */

int zx_cdm_EMAIL_NUM_X400(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X400; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_EMAIL_GET_X400) */

struct zx_elem_s* zx_cdm_EMAIL_GET_X400(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X400; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_EMAIL_POP_X400) */

struct zx_elem_s* zx_cdm_EMAIL_POP_X400(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X400;
  if (y)
    x->X400 = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_EMAIL_PUSH_X400) */

void zx_cdm_EMAIL_PUSH_X400(struct zx_cdm_EMAIL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X400->g;
  x->X400 = z;
}

/* FUNC(zx_cdm_EMAIL_REV_X400) */

void zx_cdm_EMAIL_REV_X400(struct zx_cdm_EMAIL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X400;
  if (!y) return;
  x->X400 = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X400->g;
    x->X400 = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_EMAIL_PUT_X400) */

void zx_cdm_EMAIL_PUT_X400(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X400;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X400 = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_EMAIL_ADD_X400) */

void zx_cdm_EMAIL_ADD_X400(struct zx_cdm_EMAIL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X400->g;
    x->X400 = z;
    return;
  case -1:
    y = x->X400;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X400; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_EMAIL_DEL_X400) */

void zx_cdm_EMAIL_DEL_X400(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X400 = (struct zx_elem_s*)x->X400->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X400;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X400; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_EMAIL_NUM_USERID) */

int zx_cdm_EMAIL_NUM_USERID(struct zx_cdm_EMAIL_s* x)
{
  struct zx_cdm_USERID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->USERID; y; ++n, y = (struct zx_cdm_USERID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_EMAIL_GET_USERID) */

struct zx_cdm_USERID_s* zx_cdm_EMAIL_GET_USERID(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_cdm_USERID_s* y;
  if (!x) return 0;
  for (y = x->USERID; n>=0 && y; --n, y = (struct zx_cdm_USERID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_EMAIL_POP_USERID) */

struct zx_cdm_USERID_s* zx_cdm_EMAIL_POP_USERID(struct zx_cdm_EMAIL_s* x)
{
  struct zx_cdm_USERID_s* y;
  if (!x) return 0;
  y = x->USERID;
  if (y)
    x->USERID = (struct zx_cdm_USERID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_EMAIL_PUSH_USERID) */

void zx_cdm_EMAIL_PUSH_USERID(struct zx_cdm_EMAIL_s* x, struct zx_cdm_USERID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->USERID->gg.g;
  x->USERID = z;
}

/* FUNC(zx_cdm_EMAIL_REV_USERID) */

void zx_cdm_EMAIL_REV_USERID(struct zx_cdm_EMAIL_s* x)
{
  struct zx_cdm_USERID_s* nxt;
  struct zx_cdm_USERID_s* y;
  if (!x) return;
  y = x->USERID;
  if (!y) return;
  x->USERID = 0;
  while (y) {
    nxt = (struct zx_cdm_USERID_s*)y->gg.g.n;
    y->gg.g.n = &x->USERID->gg.g;
    x->USERID = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_EMAIL_PUT_USERID) */

void zx_cdm_EMAIL_PUT_USERID(struct zx_cdm_EMAIL_s* x, int n, struct zx_cdm_USERID_s* z)
{
  struct zx_cdm_USERID_s* y;
  if (!x || !z) return;
  y = x->USERID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->USERID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_USERID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_EMAIL_ADD_USERID) */

void zx_cdm_EMAIL_ADD_USERID(struct zx_cdm_EMAIL_s* x, int n, struct zx_cdm_USERID_s* z)
{
  struct zx_cdm_USERID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->USERID->gg.g;
    x->USERID = z;
    return;
  case -1:
    y = x->USERID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_USERID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->USERID; n > 1 && y; --n, y = (struct zx_cdm_USERID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_EMAIL_DEL_USERID) */

void zx_cdm_EMAIL_DEL_USERID(struct zx_cdm_EMAIL_s* x, int n)
{
  struct zx_cdm_USERID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->USERID = (struct zx_cdm_USERID_s*)x->USERID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_USERID_s*)x->USERID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_USERID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->USERID; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_USERID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_EMAIL_GET_id) */
struct zx_str* zx_cdm_EMAIL_GET_id(struct zx_cdm_EMAIL_s* x) { return x->id; }
/* FUNC(zx_cdm_EMAIL_PUT_id) */
void zx_cdm_EMAIL_PUT_id(struct zx_cdm_EMAIL_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_EMAIL_GET_modificationTime) */
struct zx_str* zx_cdm_EMAIL_GET_modificationTime(struct zx_cdm_EMAIL_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_EMAIL_PUT_modificationTime) */
void zx_cdm_EMAIL_PUT_modificationTime(struct zx_cdm_EMAIL_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_EXTADR_GET_group) */
struct zx_str* zx_cdm_EXTADR_GET_group(struct zx_cdm_EXTADR_s* x) { return x->group; }
/* FUNC(zx_cdm_EXTADR_PUT_group) */
void zx_cdm_EXTADR_PUT_group(struct zx_cdm_EXTADR_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_EXTVAL_GET_id) */
struct zx_str* zx_cdm_EXTVAL_GET_id(struct zx_cdm_EXTVAL_s* x) { return x->id; }
/* FUNC(zx_cdm_EXTVAL_PUT_id) */
void zx_cdm_EXTVAL_PUT_id(struct zx_cdm_EXTVAL_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_EXTVAL_GET_modificationTime) */
struct zx_str* zx_cdm_EXTVAL_GET_modificationTime(struct zx_cdm_EXTVAL_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_EXTVAL_PUT_modificationTime) */
void zx_cdm_EXTVAL_PUT_modificationTime(struct zx_cdm_EXTVAL_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_EXTVAL_GET_ACC) */
struct zx_str* zx_cdm_EXTVAL_GET_ACC(struct zx_cdm_EXTVAL_s* x) { return x->ACC; }
/* FUNC(zx_cdm_EXTVAL_PUT_ACC) */
void zx_cdm_EXTVAL_PUT_ACC(struct zx_cdm_EXTVAL_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_EXTVAL_GET_ACCTime) */
struct zx_str* zx_cdm_EXTVAL_GET_ACCTime(struct zx_cdm_EXTVAL_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_EXTVAL_PUT_ACCTime) */
void zx_cdm_EXTVAL_PUT_ACCTime(struct zx_cdm_EXTVAL_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_EXTVAL_GET_modifier) */
struct zx_str* zx_cdm_EXTVAL_GET_modifier(struct zx_cdm_EXTVAL_s* x) { return x->modifier; }
/* FUNC(zx_cdm_EXTVAL_PUT_modifier) */
void zx_cdm_EXTVAL_PUT_modifier(struct zx_cdm_EXTVAL_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_FAMILY_GET_group) */
struct zx_str* zx_cdm_FAMILY_GET_group(struct zx_cdm_FAMILY_s* x) { return x->group; }
/* FUNC(zx_cdm_FAMILY_PUT_group) */
void zx_cdm_FAMILY_PUT_group(struct zx_cdm_FAMILY_s* x, struct zx_str* y) { x->group = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_FBURL_NUM_PREF) */

int zx_cdm_FBURL_NUM_PREF(struct zx_cdm_FBURL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_FBURL_GET_PREF) */

struct zx_elem_s* zx_cdm_FBURL_GET_PREF(struct zx_cdm_FBURL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PREF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_FBURL_POP_PREF) */

struct zx_elem_s* zx_cdm_FBURL_POP_PREF(struct zx_cdm_FBURL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PREF;
  if (y)
    x->PREF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_FBURL_PUSH_PREF) */

void zx_cdm_FBURL_PUSH_PREF(struct zx_cdm_FBURL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PREF->g;
  x->PREF = z;
}

/* FUNC(zx_cdm_FBURL_REV_PREF) */

void zx_cdm_FBURL_REV_PREF(struct zx_cdm_FBURL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PREF;
  if (!y) return;
  x->PREF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PREF->g;
    x->PREF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_FBURL_PUT_PREF) */

void zx_cdm_FBURL_PUT_PREF(struct zx_cdm_FBURL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PREF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PREF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_FBURL_ADD_PREF) */

void zx_cdm_FBURL_ADD_PREF(struct zx_cdm_FBURL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PREF->g;
    x->PREF = z;
    return;
  case -1:
    y = x->PREF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_FBURL_DEL_PREF) */

void zx_cdm_FBURL_DEL_PREF(struct zx_cdm_FBURL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREF = (struct zx_elem_s*)x->PREF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PREF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_FBURL_NUM_URI) */

int zx_cdm_FBURL_NUM_URI(struct zx_cdm_FBURL_s* x)
{
  struct zx_cdm_URI_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->URI; y; ++n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_FBURL_GET_URI) */

struct zx_cdm_URI_s* zx_cdm_FBURL_GET_URI(struct zx_cdm_FBURL_s* x, int n)
{
  struct zx_cdm_URI_s* y;
  if (!x) return 0;
  for (y = x->URI; n>=0 && y; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_FBURL_POP_URI) */

struct zx_cdm_URI_s* zx_cdm_FBURL_POP_URI(struct zx_cdm_FBURL_s* x)
{
  struct zx_cdm_URI_s* y;
  if (!x) return 0;
  y = x->URI;
  if (y)
    x->URI = (struct zx_cdm_URI_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_FBURL_PUSH_URI) */

void zx_cdm_FBURL_PUSH_URI(struct zx_cdm_FBURL_s* x, struct zx_cdm_URI_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->URI->gg.g;
  x->URI = z;
}

/* FUNC(zx_cdm_FBURL_REV_URI) */

void zx_cdm_FBURL_REV_URI(struct zx_cdm_FBURL_s* x)
{
  struct zx_cdm_URI_s* nxt;
  struct zx_cdm_URI_s* y;
  if (!x) return;
  y = x->URI;
  if (!y) return;
  x->URI = 0;
  while (y) {
    nxt = (struct zx_cdm_URI_s*)y->gg.g.n;
    y->gg.g.n = &x->URI->gg.g;
    x->URI = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_FBURL_PUT_URI) */

void zx_cdm_FBURL_PUT_URI(struct zx_cdm_FBURL_s* x, int n, struct zx_cdm_URI_s* z)
{
  struct zx_cdm_URI_s* y;
  if (!x || !z) return;
  y = x->URI;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->URI = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_FBURL_ADD_URI) */

void zx_cdm_FBURL_ADD_URI(struct zx_cdm_FBURL_s* x, int n, struct zx_cdm_URI_s* z)
{
  struct zx_cdm_URI_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->URI->gg.g;
    x->URI = z;
    return;
  case -1:
    y = x->URI;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URI; n > 1 && y; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_FBURL_DEL_URI) */

void zx_cdm_FBURL_DEL_URI(struct zx_cdm_FBURL_s* x, int n)
{
  struct zx_cdm_URI_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->URI = (struct zx_cdm_URI_s*)x->URI->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_URI_s*)x->URI;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URI; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_FBURL_GET_id) */
struct zx_str* zx_cdm_FBURL_GET_id(struct zx_cdm_FBURL_s* x) { return x->id; }
/* FUNC(zx_cdm_FBURL_PUT_id) */
void zx_cdm_FBURL_PUT_id(struct zx_cdm_FBURL_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_FBURL_GET_modificationTime) */
struct zx_str* zx_cdm_FBURL_GET_modificationTime(struct zx_cdm_FBURL_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_FBURL_PUT_modificationTime) */
void zx_cdm_FBURL_PUT_modificationTime(struct zx_cdm_FBURL_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_FBURL_GET_ACC) */
struct zx_str* zx_cdm_FBURL_GET_ACC(struct zx_cdm_FBURL_s* x) { return x->ACC; }
/* FUNC(zx_cdm_FBURL_PUT_ACC) */
void zx_cdm_FBURL_PUT_ACC(struct zx_cdm_FBURL_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_FBURL_GET_ACCTime) */
struct zx_str* zx_cdm_FBURL_GET_ACCTime(struct zx_cdm_FBURL_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_FBURL_PUT_ACCTime) */
void zx_cdm_FBURL_PUT_ACCTime(struct zx_cdm_FBURL_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_FBURL_GET_modifier) */
struct zx_str* zx_cdm_FBURL_GET_modifier(struct zx_cdm_FBURL_s* x) { return x->modifier; }
/* FUNC(zx_cdm_FBURL_PUT_modifier) */
void zx_cdm_FBURL_PUT_modifier(struct zx_cdm_FBURL_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_FN_GET_group) */
struct zx_str* zx_cdm_FN_GET_group(struct zx_cdm_FN_s* x) { return x->group; }
/* FUNC(zx_cdm_FN_PUT_group) */
void zx_cdm_FN_PUT_group(struct zx_cdm_FN_s* x, struct zx_str* y) { x->group = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_GEO_NUM_LAT) */

int zx_cdm_GEO_NUM_LAT(struct zx_cdm_GEO_s* x)
{
  struct zx_cdm_LAT_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LAT; y; ++n, y = (struct zx_cdm_LAT_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_GEO_GET_LAT) */

struct zx_cdm_LAT_s* zx_cdm_GEO_GET_LAT(struct zx_cdm_GEO_s* x, int n)
{
  struct zx_cdm_LAT_s* y;
  if (!x) return 0;
  for (y = x->LAT; n>=0 && y; --n, y = (struct zx_cdm_LAT_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_GEO_POP_LAT) */

struct zx_cdm_LAT_s* zx_cdm_GEO_POP_LAT(struct zx_cdm_GEO_s* x)
{
  struct zx_cdm_LAT_s* y;
  if (!x) return 0;
  y = x->LAT;
  if (y)
    x->LAT = (struct zx_cdm_LAT_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_GEO_PUSH_LAT) */

void zx_cdm_GEO_PUSH_LAT(struct zx_cdm_GEO_s* x, struct zx_cdm_LAT_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LAT->gg.g;
  x->LAT = z;
}

/* FUNC(zx_cdm_GEO_REV_LAT) */

void zx_cdm_GEO_REV_LAT(struct zx_cdm_GEO_s* x)
{
  struct zx_cdm_LAT_s* nxt;
  struct zx_cdm_LAT_s* y;
  if (!x) return;
  y = x->LAT;
  if (!y) return;
  x->LAT = 0;
  while (y) {
    nxt = (struct zx_cdm_LAT_s*)y->gg.g.n;
    y->gg.g.n = &x->LAT->gg.g;
    x->LAT = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_GEO_PUT_LAT) */

void zx_cdm_GEO_PUT_LAT(struct zx_cdm_GEO_s* x, int n, struct zx_cdm_LAT_s* z)
{
  struct zx_cdm_LAT_s* y;
  if (!x || !z) return;
  y = x->LAT;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LAT = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LAT_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_GEO_ADD_LAT) */

void zx_cdm_GEO_ADD_LAT(struct zx_cdm_GEO_s* x, int n, struct zx_cdm_LAT_s* z)
{
  struct zx_cdm_LAT_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LAT->gg.g;
    x->LAT = z;
    return;
  case -1:
    y = x->LAT;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_LAT_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LAT; n > 1 && y; --n, y = (struct zx_cdm_LAT_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_GEO_DEL_LAT) */

void zx_cdm_GEO_DEL_LAT(struct zx_cdm_GEO_s* x, int n)
{
  struct zx_cdm_LAT_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LAT = (struct zx_cdm_LAT_s*)x->LAT->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_LAT_s*)x->LAT;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_LAT_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LAT; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LAT_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_GEO_NUM_LON) */

int zx_cdm_GEO_NUM_LON(struct zx_cdm_GEO_s* x)
{
  struct zx_cdm_LON_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LON; y; ++n, y = (struct zx_cdm_LON_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_GEO_GET_LON) */

struct zx_cdm_LON_s* zx_cdm_GEO_GET_LON(struct zx_cdm_GEO_s* x, int n)
{
  struct zx_cdm_LON_s* y;
  if (!x) return 0;
  for (y = x->LON; n>=0 && y; --n, y = (struct zx_cdm_LON_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_GEO_POP_LON) */

struct zx_cdm_LON_s* zx_cdm_GEO_POP_LON(struct zx_cdm_GEO_s* x)
{
  struct zx_cdm_LON_s* y;
  if (!x) return 0;
  y = x->LON;
  if (y)
    x->LON = (struct zx_cdm_LON_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_GEO_PUSH_LON) */

void zx_cdm_GEO_PUSH_LON(struct zx_cdm_GEO_s* x, struct zx_cdm_LON_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LON->gg.g;
  x->LON = z;
}

/* FUNC(zx_cdm_GEO_REV_LON) */

void zx_cdm_GEO_REV_LON(struct zx_cdm_GEO_s* x)
{
  struct zx_cdm_LON_s* nxt;
  struct zx_cdm_LON_s* y;
  if (!x) return;
  y = x->LON;
  if (!y) return;
  x->LON = 0;
  while (y) {
    nxt = (struct zx_cdm_LON_s*)y->gg.g.n;
    y->gg.g.n = &x->LON->gg.g;
    x->LON = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_GEO_PUT_LON) */

void zx_cdm_GEO_PUT_LON(struct zx_cdm_GEO_s* x, int n, struct zx_cdm_LON_s* z)
{
  struct zx_cdm_LON_s* y;
  if (!x || !z) return;
  y = x->LON;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LON = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LON_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_GEO_ADD_LON) */

void zx_cdm_GEO_ADD_LON(struct zx_cdm_GEO_s* x, int n, struct zx_cdm_LON_s* z)
{
  struct zx_cdm_LON_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LON->gg.g;
    x->LON = z;
    return;
  case -1:
    y = x->LON;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_LON_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LON; n > 1 && y; --n, y = (struct zx_cdm_LON_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_GEO_DEL_LON) */

void zx_cdm_GEO_DEL_LON(struct zx_cdm_GEO_s* x, int n)
{
  struct zx_cdm_LON_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LON = (struct zx_cdm_LON_s*)x->LON->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_LON_s*)x->LON;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_LON_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LON; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LON_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_GEO_GET_id) */
struct zx_str* zx_cdm_GEO_GET_id(struct zx_cdm_GEO_s* x) { return x->id; }
/* FUNC(zx_cdm_GEO_PUT_id) */
void zx_cdm_GEO_PUT_id(struct zx_cdm_GEO_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_GEO_GET_modificationTime) */
struct zx_str* zx_cdm_GEO_GET_modificationTime(struct zx_cdm_GEO_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_GEO_PUT_modificationTime) */
void zx_cdm_GEO_PUT_modificationTime(struct zx_cdm_GEO_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_GIVEN_GET_group) */
struct zx_str* zx_cdm_GIVEN_GET_group(struct zx_cdm_GIVEN_s* x) { return x->group; }
/* FUNC(zx_cdm_GIVEN_PUT_group) */
void zx_cdm_GIVEN_PUT_group(struct zx_cdm_GIVEN_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_JABBERID_GET_id) */
struct zx_str* zx_cdm_JABBERID_GET_id(struct zx_cdm_JABBERID_s* x) { return x->id; }
/* FUNC(zx_cdm_JABBERID_PUT_id) */
void zx_cdm_JABBERID_PUT_id(struct zx_cdm_JABBERID_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_JABBERID_GET_modificationTime) */
struct zx_str* zx_cdm_JABBERID_GET_modificationTime(struct zx_cdm_JABBERID_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_JABBERID_PUT_modificationTime) */
void zx_cdm_JABBERID_PUT_modificationTime(struct zx_cdm_JABBERID_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_JABBERID_GET_ACC) */
struct zx_str* zx_cdm_JABBERID_GET_ACC(struct zx_cdm_JABBERID_s* x) { return x->ACC; }
/* FUNC(zx_cdm_JABBERID_PUT_ACC) */
void zx_cdm_JABBERID_PUT_ACC(struct zx_cdm_JABBERID_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_JABBERID_GET_ACCTime) */
struct zx_str* zx_cdm_JABBERID_GET_ACCTime(struct zx_cdm_JABBERID_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_JABBERID_PUT_ACCTime) */
void zx_cdm_JABBERID_PUT_ACCTime(struct zx_cdm_JABBERID_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_JABBERID_GET_modifier) */
struct zx_str* zx_cdm_JABBERID_GET_modifier(struct zx_cdm_JABBERID_s* x) { return x->modifier; }
/* FUNC(zx_cdm_JABBERID_PUT_modifier) */
void zx_cdm_JABBERID_PUT_modifier(struct zx_cdm_JABBERID_s* x, struct zx_str* y) { x->modifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_KEY_NUM_TYPE) */

int zx_cdm_KEY_NUM_TYPE(struct zx_cdm_KEY_s* x)
{
  struct zx_cdm_TYPE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TYPE; y; ++n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_KEY_GET_TYPE) */

struct zx_cdm_TYPE_s* zx_cdm_KEY_GET_TYPE(struct zx_cdm_KEY_s* x, int n)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return 0;
  for (y = x->TYPE; n>=0 && y; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_KEY_POP_TYPE) */

struct zx_cdm_TYPE_s* zx_cdm_KEY_POP_TYPE(struct zx_cdm_KEY_s* x)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return 0;
  y = x->TYPE;
  if (y)
    x->TYPE = (struct zx_cdm_TYPE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_KEY_PUSH_TYPE) */

void zx_cdm_KEY_PUSH_TYPE(struct zx_cdm_KEY_s* x, struct zx_cdm_TYPE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TYPE->gg.g;
  x->TYPE = z;
}

/* FUNC(zx_cdm_KEY_REV_TYPE) */

void zx_cdm_KEY_REV_TYPE(struct zx_cdm_KEY_s* x)
{
  struct zx_cdm_TYPE_s* nxt;
  struct zx_cdm_TYPE_s* y;
  if (!x) return;
  y = x->TYPE;
  if (!y) return;
  x->TYPE = 0;
  while (y) {
    nxt = (struct zx_cdm_TYPE_s*)y->gg.g.n;
    y->gg.g.n = &x->TYPE->gg.g;
    x->TYPE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_KEY_PUT_TYPE) */

void zx_cdm_KEY_PUT_TYPE(struct zx_cdm_KEY_s* x, int n, struct zx_cdm_TYPE_s* z)
{
  struct zx_cdm_TYPE_s* y;
  if (!x || !z) return;
  y = x->TYPE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TYPE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_KEY_ADD_TYPE) */

void zx_cdm_KEY_ADD_TYPE(struct zx_cdm_KEY_s* x, int n, struct zx_cdm_TYPE_s* z)
{
  struct zx_cdm_TYPE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TYPE->gg.g;
    x->TYPE = z;
    return;
  case -1:
    y = x->TYPE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TYPE; n > 1 && y; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_KEY_DEL_TYPE) */

void zx_cdm_KEY_DEL_TYPE(struct zx_cdm_KEY_s* x, int n)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TYPE = (struct zx_cdm_TYPE_s*)x->TYPE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_TYPE_s*)x->TYPE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TYPE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_KEY_NUM_CRED) */

int zx_cdm_KEY_NUM_CRED(struct zx_cdm_KEY_s* x)
{
  struct zx_cdm_CRED_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CRED; y; ++n, y = (struct zx_cdm_CRED_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_KEY_GET_CRED) */

struct zx_cdm_CRED_s* zx_cdm_KEY_GET_CRED(struct zx_cdm_KEY_s* x, int n)
{
  struct zx_cdm_CRED_s* y;
  if (!x) return 0;
  for (y = x->CRED; n>=0 && y; --n, y = (struct zx_cdm_CRED_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_KEY_POP_CRED) */

struct zx_cdm_CRED_s* zx_cdm_KEY_POP_CRED(struct zx_cdm_KEY_s* x)
{
  struct zx_cdm_CRED_s* y;
  if (!x) return 0;
  y = x->CRED;
  if (y)
    x->CRED = (struct zx_cdm_CRED_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_KEY_PUSH_CRED) */

void zx_cdm_KEY_PUSH_CRED(struct zx_cdm_KEY_s* x, struct zx_cdm_CRED_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CRED->gg.g;
  x->CRED = z;
}

/* FUNC(zx_cdm_KEY_REV_CRED) */

void zx_cdm_KEY_REV_CRED(struct zx_cdm_KEY_s* x)
{
  struct zx_cdm_CRED_s* nxt;
  struct zx_cdm_CRED_s* y;
  if (!x) return;
  y = x->CRED;
  if (!y) return;
  x->CRED = 0;
  while (y) {
    nxt = (struct zx_cdm_CRED_s*)y->gg.g.n;
    y->gg.g.n = &x->CRED->gg.g;
    x->CRED = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_KEY_PUT_CRED) */

void zx_cdm_KEY_PUT_CRED(struct zx_cdm_KEY_s* x, int n, struct zx_cdm_CRED_s* z)
{
  struct zx_cdm_CRED_s* y;
  if (!x || !z) return;
  y = x->CRED;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CRED = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CRED_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_KEY_ADD_CRED) */

void zx_cdm_KEY_ADD_CRED(struct zx_cdm_KEY_s* x, int n, struct zx_cdm_CRED_s* z)
{
  struct zx_cdm_CRED_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CRED->gg.g;
    x->CRED = z;
    return;
  case -1:
    y = x->CRED;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_CRED_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CRED; n > 1 && y; --n, y = (struct zx_cdm_CRED_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_KEY_DEL_CRED) */

void zx_cdm_KEY_DEL_CRED(struct zx_cdm_KEY_s* x, int n)
{
  struct zx_cdm_CRED_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CRED = (struct zx_cdm_CRED_s*)x->CRED->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_CRED_s*)x->CRED;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_CRED_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CRED; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CRED_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_cdm_KEYWORD_GET_id) */
struct zx_str* zx_cdm_KEYWORD_GET_id(struct zx_cdm_KEYWORD_s* x) { return x->id; }
/* FUNC(zx_cdm_KEYWORD_PUT_id) */
void zx_cdm_KEYWORD_PUT_id(struct zx_cdm_KEYWORD_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_KEYWORD_GET_modificationTime) */
struct zx_str* zx_cdm_KEYWORD_GET_modificationTime(struct zx_cdm_KEYWORD_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_KEYWORD_PUT_modificationTime) */
void zx_cdm_KEYWORD_PUT_modificationTime(struct zx_cdm_KEYWORD_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_KEYWORD_GET_ACC) */
struct zx_str* zx_cdm_KEYWORD_GET_ACC(struct zx_cdm_KEYWORD_s* x) { return x->ACC; }
/* FUNC(zx_cdm_KEYWORD_PUT_ACC) */
void zx_cdm_KEYWORD_PUT_ACC(struct zx_cdm_KEYWORD_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_KEYWORD_GET_ACCTime) */
struct zx_str* zx_cdm_KEYWORD_GET_ACCTime(struct zx_cdm_KEYWORD_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_KEYWORD_PUT_ACCTime) */
void zx_cdm_KEYWORD_PUT_ACCTime(struct zx_cdm_KEYWORD_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_KEYWORD_GET_modifier) */
struct zx_str* zx_cdm_KEYWORD_GET_modifier(struct zx_cdm_KEYWORD_s* x) { return x->modifier; }
/* FUNC(zx_cdm_KEYWORD_PUT_modifier) */
void zx_cdm_KEYWORD_PUT_modifier(struct zx_cdm_KEYWORD_s* x, struct zx_str* y) { x->modifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LABEL_NUM_HOME) */

int zx_cdm_LABEL_NUM_HOME(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->HOME; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_LABEL_GET_HOME) */

struct zx_elem_s* zx_cdm_LABEL_GET_HOME(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->HOME; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_LABEL_POP_HOME) */

struct zx_elem_s* zx_cdm_LABEL_POP_HOME(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->HOME;
  if (y)
    x->HOME = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_LABEL_PUSH_HOME) */

void zx_cdm_LABEL_PUSH_HOME(struct zx_cdm_LABEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->HOME->g;
  x->HOME = z;
}

/* FUNC(zx_cdm_LABEL_REV_HOME) */

void zx_cdm_LABEL_REV_HOME(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->HOME;
  if (!y) return;
  x->HOME = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->HOME->g;
    x->HOME = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LABEL_PUT_HOME) */

void zx_cdm_LABEL_PUT_HOME(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->HOME;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->HOME = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_LABEL_ADD_HOME) */

void zx_cdm_LABEL_ADD_HOME(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->HOME->g;
    x->HOME = z;
    return;
  case -1:
    y = x->HOME;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HOME; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_LABEL_DEL_HOME) */

void zx_cdm_LABEL_DEL_HOME(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->HOME = (struct zx_elem_s*)x->HOME->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->HOME;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HOME; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LABEL_NUM_WORK) */

int zx_cdm_LABEL_NUM_WORK(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->WORK; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_LABEL_GET_WORK) */

struct zx_elem_s* zx_cdm_LABEL_GET_WORK(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->WORK; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_LABEL_POP_WORK) */

struct zx_elem_s* zx_cdm_LABEL_POP_WORK(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->WORK;
  if (y)
    x->WORK = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_LABEL_PUSH_WORK) */

void zx_cdm_LABEL_PUSH_WORK(struct zx_cdm_LABEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->WORK->g;
  x->WORK = z;
}

/* FUNC(zx_cdm_LABEL_REV_WORK) */

void zx_cdm_LABEL_REV_WORK(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->WORK;
  if (!y) return;
  x->WORK = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->WORK->g;
    x->WORK = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LABEL_PUT_WORK) */

void zx_cdm_LABEL_PUT_WORK(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->WORK;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->WORK = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_LABEL_ADD_WORK) */

void zx_cdm_LABEL_ADD_WORK(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->WORK->g;
    x->WORK = z;
    return;
  case -1:
    y = x->WORK;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WORK; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_LABEL_DEL_WORK) */

void zx_cdm_LABEL_DEL_WORK(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->WORK = (struct zx_elem_s*)x->WORK->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->WORK;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WORK; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LABEL_NUM_POSTAL) */

int zx_cdm_LABEL_NUM_POSTAL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->POSTAL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_LABEL_GET_POSTAL) */

struct zx_elem_s* zx_cdm_LABEL_GET_POSTAL(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->POSTAL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_LABEL_POP_POSTAL) */

struct zx_elem_s* zx_cdm_LABEL_POP_POSTAL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->POSTAL;
  if (y)
    x->POSTAL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_LABEL_PUSH_POSTAL) */

void zx_cdm_LABEL_PUSH_POSTAL(struct zx_cdm_LABEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->POSTAL->g;
  x->POSTAL = z;
}

/* FUNC(zx_cdm_LABEL_REV_POSTAL) */

void zx_cdm_LABEL_REV_POSTAL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->POSTAL;
  if (!y) return;
  x->POSTAL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->POSTAL->g;
    x->POSTAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LABEL_PUT_POSTAL) */

void zx_cdm_LABEL_PUT_POSTAL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->POSTAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->POSTAL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_LABEL_ADD_POSTAL) */

void zx_cdm_LABEL_ADD_POSTAL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->POSTAL->g;
    x->POSTAL = z;
    return;
  case -1:
    y = x->POSTAL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->POSTAL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_LABEL_DEL_POSTAL) */

void zx_cdm_LABEL_DEL_POSTAL(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->POSTAL = (struct zx_elem_s*)x->POSTAL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->POSTAL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->POSTAL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LABEL_NUM_PARCEL) */

int zx_cdm_LABEL_NUM_PARCEL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PARCEL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_LABEL_GET_PARCEL) */

struct zx_elem_s* zx_cdm_LABEL_GET_PARCEL(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PARCEL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_LABEL_POP_PARCEL) */

struct zx_elem_s* zx_cdm_LABEL_POP_PARCEL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PARCEL;
  if (y)
    x->PARCEL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_LABEL_PUSH_PARCEL) */

void zx_cdm_LABEL_PUSH_PARCEL(struct zx_cdm_LABEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PARCEL->g;
  x->PARCEL = z;
}

/* FUNC(zx_cdm_LABEL_REV_PARCEL) */

void zx_cdm_LABEL_REV_PARCEL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PARCEL;
  if (!y) return;
  x->PARCEL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PARCEL->g;
    x->PARCEL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LABEL_PUT_PARCEL) */

void zx_cdm_LABEL_PUT_PARCEL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PARCEL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PARCEL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_LABEL_ADD_PARCEL) */

void zx_cdm_LABEL_ADD_PARCEL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PARCEL->g;
    x->PARCEL = z;
    return;
  case -1:
    y = x->PARCEL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PARCEL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_LABEL_DEL_PARCEL) */

void zx_cdm_LABEL_DEL_PARCEL(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PARCEL = (struct zx_elem_s*)x->PARCEL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PARCEL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PARCEL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LABEL_NUM_DOM) */

int zx_cdm_LABEL_NUM_DOM(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DOM; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_LABEL_GET_DOM) */

struct zx_elem_s* zx_cdm_LABEL_GET_DOM(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DOM; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_LABEL_POP_DOM) */

struct zx_elem_s* zx_cdm_LABEL_POP_DOM(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DOM;
  if (y)
    x->DOM = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_LABEL_PUSH_DOM) */

void zx_cdm_LABEL_PUSH_DOM(struct zx_cdm_LABEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DOM->g;
  x->DOM = z;
}

/* FUNC(zx_cdm_LABEL_REV_DOM) */

void zx_cdm_LABEL_REV_DOM(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DOM;
  if (!y) return;
  x->DOM = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DOM->g;
    x->DOM = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LABEL_PUT_DOM) */

void zx_cdm_LABEL_PUT_DOM(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DOM;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DOM = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_LABEL_ADD_DOM) */

void zx_cdm_LABEL_ADD_DOM(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DOM->g;
    x->DOM = z;
    return;
  case -1:
    y = x->DOM;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DOM; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_LABEL_DEL_DOM) */

void zx_cdm_LABEL_DEL_DOM(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DOM = (struct zx_elem_s*)x->DOM->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DOM;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DOM; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LABEL_NUM_INTL) */

int zx_cdm_LABEL_NUM_INTL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->INTL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_LABEL_GET_INTL) */

struct zx_elem_s* zx_cdm_LABEL_GET_INTL(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->INTL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_LABEL_POP_INTL) */

struct zx_elem_s* zx_cdm_LABEL_POP_INTL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->INTL;
  if (y)
    x->INTL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_LABEL_PUSH_INTL) */

void zx_cdm_LABEL_PUSH_INTL(struct zx_cdm_LABEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->INTL->g;
  x->INTL = z;
}

/* FUNC(zx_cdm_LABEL_REV_INTL) */

void zx_cdm_LABEL_REV_INTL(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->INTL;
  if (!y) return;
  x->INTL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->INTL->g;
    x->INTL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LABEL_PUT_INTL) */

void zx_cdm_LABEL_PUT_INTL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->INTL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->INTL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_LABEL_ADD_INTL) */

void zx_cdm_LABEL_ADD_INTL(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->INTL->g;
    x->INTL = z;
    return;
  case -1:
    y = x->INTL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->INTL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_LABEL_DEL_INTL) */

void zx_cdm_LABEL_DEL_INTL(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->INTL = (struct zx_elem_s*)x->INTL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->INTL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->INTL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LABEL_NUM_PREF) */

int zx_cdm_LABEL_NUM_PREF(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_LABEL_GET_PREF) */

struct zx_elem_s* zx_cdm_LABEL_GET_PREF(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PREF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_LABEL_POP_PREF) */

struct zx_elem_s* zx_cdm_LABEL_POP_PREF(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PREF;
  if (y)
    x->PREF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_LABEL_PUSH_PREF) */

void zx_cdm_LABEL_PUSH_PREF(struct zx_cdm_LABEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PREF->g;
  x->PREF = z;
}

/* FUNC(zx_cdm_LABEL_REV_PREF) */

void zx_cdm_LABEL_REV_PREF(struct zx_cdm_LABEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PREF;
  if (!y) return;
  x->PREF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PREF->g;
    x->PREF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LABEL_PUT_PREF) */

void zx_cdm_LABEL_PUT_PREF(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PREF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PREF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_LABEL_ADD_PREF) */

void zx_cdm_LABEL_ADD_PREF(struct zx_cdm_LABEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PREF->g;
    x->PREF = z;
    return;
  case -1:
    y = x->PREF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_LABEL_DEL_PREF) */

void zx_cdm_LABEL_DEL_PREF(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREF = (struct zx_elem_s*)x->PREF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PREF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LABEL_NUM_LINE) */

int zx_cdm_LABEL_NUM_LINE(struct zx_cdm_LABEL_s* x)
{
  struct zx_cdm_LINE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LINE; y; ++n, y = (struct zx_cdm_LINE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_LABEL_GET_LINE) */

struct zx_cdm_LINE_s* zx_cdm_LABEL_GET_LINE(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_cdm_LINE_s* y;
  if (!x) return 0;
  for (y = x->LINE; n>=0 && y; --n, y = (struct zx_cdm_LINE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_LABEL_POP_LINE) */

struct zx_cdm_LINE_s* zx_cdm_LABEL_POP_LINE(struct zx_cdm_LABEL_s* x)
{
  struct zx_cdm_LINE_s* y;
  if (!x) return 0;
  y = x->LINE;
  if (y)
    x->LINE = (struct zx_cdm_LINE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_LABEL_PUSH_LINE) */

void zx_cdm_LABEL_PUSH_LINE(struct zx_cdm_LABEL_s* x, struct zx_cdm_LINE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LINE->gg.g;
  x->LINE = z;
}

/* FUNC(zx_cdm_LABEL_REV_LINE) */

void zx_cdm_LABEL_REV_LINE(struct zx_cdm_LABEL_s* x)
{
  struct zx_cdm_LINE_s* nxt;
  struct zx_cdm_LINE_s* y;
  if (!x) return;
  y = x->LINE;
  if (!y) return;
  x->LINE = 0;
  while (y) {
    nxt = (struct zx_cdm_LINE_s*)y->gg.g.n;
    y->gg.g.n = &x->LINE->gg.g;
    x->LINE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LABEL_PUT_LINE) */

void zx_cdm_LABEL_PUT_LINE(struct zx_cdm_LABEL_s* x, int n, struct zx_cdm_LINE_s* z)
{
  struct zx_cdm_LINE_s* y;
  if (!x || !z) return;
  y = x->LINE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LINE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LINE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_LABEL_ADD_LINE) */

void zx_cdm_LABEL_ADD_LINE(struct zx_cdm_LABEL_s* x, int n, struct zx_cdm_LINE_s* z)
{
  struct zx_cdm_LINE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LINE->gg.g;
    x->LINE = z;
    return;
  case -1:
    y = x->LINE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_LINE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LINE; n > 1 && y; --n, y = (struct zx_cdm_LINE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_LABEL_DEL_LINE) */

void zx_cdm_LABEL_DEL_LINE(struct zx_cdm_LABEL_s* x, int n)
{
  struct zx_cdm_LINE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LINE = (struct zx_cdm_LINE_s*)x->LINE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_LINE_s*)x->LINE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_LINE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LINE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LINE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_LABEL_GET_id) */
struct zx_str* zx_cdm_LABEL_GET_id(struct zx_cdm_LABEL_s* x) { return x->id; }
/* FUNC(zx_cdm_LABEL_PUT_id) */
void zx_cdm_LABEL_PUT_id(struct zx_cdm_LABEL_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_LABEL_GET_modificationTime) */
struct zx_str* zx_cdm_LABEL_GET_modificationTime(struct zx_cdm_LABEL_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_LABEL_PUT_modificationTime) */
void zx_cdm_LABEL_PUT_modificationTime(struct zx_cdm_LABEL_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_LAT_GET_id) */
struct zx_str* zx_cdm_LAT_GET_id(struct zx_cdm_LAT_s* x) { return x->id; }
/* FUNC(zx_cdm_LAT_PUT_id) */
void zx_cdm_LAT_PUT_id(struct zx_cdm_LAT_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_LAT_GET_modificationTime) */
struct zx_str* zx_cdm_LAT_GET_modificationTime(struct zx_cdm_LAT_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_LAT_PUT_modificationTime) */
void zx_cdm_LAT_PUT_modificationTime(struct zx_cdm_LAT_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_LAT_GET_ACC) */
struct zx_str* zx_cdm_LAT_GET_ACC(struct zx_cdm_LAT_s* x) { return x->ACC; }
/* FUNC(zx_cdm_LAT_PUT_ACC) */
void zx_cdm_LAT_PUT_ACC(struct zx_cdm_LAT_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_LAT_GET_ACCTime) */
struct zx_str* zx_cdm_LAT_GET_ACCTime(struct zx_cdm_LAT_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_LAT_PUT_ACCTime) */
void zx_cdm_LAT_PUT_ACCTime(struct zx_cdm_LAT_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_LAT_GET_modifier) */
struct zx_str* zx_cdm_LAT_GET_modifier(struct zx_cdm_LAT_s* x) { return x->modifier; }
/* FUNC(zx_cdm_LAT_PUT_modifier) */
void zx_cdm_LAT_PUT_modifier(struct zx_cdm_LAT_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_LINE_GET_group) */
struct zx_str* zx_cdm_LINE_GET_group(struct zx_cdm_LINE_s* x) { return x->group; }
/* FUNC(zx_cdm_LINE_PUT_group) */
void zx_cdm_LINE_PUT_group(struct zx_cdm_LINE_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_LISTMEMBER_GET_id) */
struct zx_str* zx_cdm_LISTMEMBER_GET_id(struct zx_cdm_LISTMEMBER_s* x) { return x->id; }
/* FUNC(zx_cdm_LISTMEMBER_PUT_id) */
void zx_cdm_LISTMEMBER_PUT_id(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_LISTMEMBER_GET_modificationTime) */
struct zx_str* zx_cdm_LISTMEMBER_GET_modificationTime(struct zx_cdm_LISTMEMBER_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_LISTMEMBER_PUT_modificationTime) */
void zx_cdm_LISTMEMBER_PUT_modificationTime(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_LISTMEMBER_GET_ACC) */
struct zx_str* zx_cdm_LISTMEMBER_GET_ACC(struct zx_cdm_LISTMEMBER_s* x) { return x->ACC; }
/* FUNC(zx_cdm_LISTMEMBER_PUT_ACC) */
void zx_cdm_LISTMEMBER_PUT_ACC(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_LISTMEMBER_GET_ACCTime) */
struct zx_str* zx_cdm_LISTMEMBER_GET_ACCTime(struct zx_cdm_LISTMEMBER_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_LISTMEMBER_PUT_ACCTime) */
void zx_cdm_LISTMEMBER_PUT_ACCTime(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_LISTMEMBER_GET_modifier) */
struct zx_str* zx_cdm_LISTMEMBER_GET_modifier(struct zx_cdm_LISTMEMBER_s* x) { return x->modifier; }
/* FUNC(zx_cdm_LISTMEMBER_PUT_modifier) */
void zx_cdm_LISTMEMBER_PUT_modifier(struct zx_cdm_LISTMEMBER_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_LOCALITY_GET_group) */
struct zx_str* zx_cdm_LOCALITY_GET_group(struct zx_cdm_LOCALITY_s* x) { return x->group; }
/* FUNC(zx_cdm_LOCALITY_PUT_group) */
void zx_cdm_LOCALITY_PUT_group(struct zx_cdm_LOCALITY_s* x, struct zx_str* y) { x->group = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LOGO_NUM_TYPE) */

int zx_cdm_LOGO_NUM_TYPE(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_TYPE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TYPE; y; ++n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_LOGO_GET_TYPE) */

struct zx_cdm_TYPE_s* zx_cdm_LOGO_GET_TYPE(struct zx_cdm_LOGO_s* x, int n)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return 0;
  for (y = x->TYPE; n>=0 && y; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_LOGO_POP_TYPE) */

struct zx_cdm_TYPE_s* zx_cdm_LOGO_POP_TYPE(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return 0;
  y = x->TYPE;
  if (y)
    x->TYPE = (struct zx_cdm_TYPE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_LOGO_PUSH_TYPE) */

void zx_cdm_LOGO_PUSH_TYPE(struct zx_cdm_LOGO_s* x, struct zx_cdm_TYPE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TYPE->gg.g;
  x->TYPE = z;
}

/* FUNC(zx_cdm_LOGO_REV_TYPE) */

void zx_cdm_LOGO_REV_TYPE(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_TYPE_s* nxt;
  struct zx_cdm_TYPE_s* y;
  if (!x) return;
  y = x->TYPE;
  if (!y) return;
  x->TYPE = 0;
  while (y) {
    nxt = (struct zx_cdm_TYPE_s*)y->gg.g.n;
    y->gg.g.n = &x->TYPE->gg.g;
    x->TYPE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LOGO_PUT_TYPE) */

void zx_cdm_LOGO_PUT_TYPE(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_TYPE_s* z)
{
  struct zx_cdm_TYPE_s* y;
  if (!x || !z) return;
  y = x->TYPE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TYPE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_LOGO_ADD_TYPE) */

void zx_cdm_LOGO_ADD_TYPE(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_TYPE_s* z)
{
  struct zx_cdm_TYPE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TYPE->gg.g;
    x->TYPE = z;
    return;
  case -1:
    y = x->TYPE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TYPE; n > 1 && y; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_LOGO_DEL_TYPE) */

void zx_cdm_LOGO_DEL_TYPE(struct zx_cdm_LOGO_s* x, int n)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TYPE = (struct zx_cdm_TYPE_s*)x->TYPE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_TYPE_s*)x->TYPE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TYPE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LOGO_NUM_BINVAL) */

int zx_cdm_LOGO_NUM_BINVAL(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_BINVAL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BINVAL; y; ++n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_LOGO_GET_BINVAL) */

struct zx_cdm_BINVAL_s* zx_cdm_LOGO_GET_BINVAL(struct zx_cdm_LOGO_s* x, int n)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return 0;
  for (y = x->BINVAL; n>=0 && y; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_LOGO_POP_BINVAL) */

struct zx_cdm_BINVAL_s* zx_cdm_LOGO_POP_BINVAL(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return 0;
  y = x->BINVAL;
  if (y)
    x->BINVAL = (struct zx_cdm_BINVAL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_LOGO_PUSH_BINVAL) */

void zx_cdm_LOGO_PUSH_BINVAL(struct zx_cdm_LOGO_s* x, struct zx_cdm_BINVAL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BINVAL->gg.g;
  x->BINVAL = z;
}

/* FUNC(zx_cdm_LOGO_REV_BINVAL) */

void zx_cdm_LOGO_REV_BINVAL(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_BINVAL_s* nxt;
  struct zx_cdm_BINVAL_s* y;
  if (!x) return;
  y = x->BINVAL;
  if (!y) return;
  x->BINVAL = 0;
  while (y) {
    nxt = (struct zx_cdm_BINVAL_s*)y->gg.g.n;
    y->gg.g.n = &x->BINVAL->gg.g;
    x->BINVAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LOGO_PUT_BINVAL) */

void zx_cdm_LOGO_PUT_BINVAL(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_BINVAL_s* z)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x || !z) return;
  y = x->BINVAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BINVAL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_LOGO_ADD_BINVAL) */

void zx_cdm_LOGO_ADD_BINVAL(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_BINVAL_s* z)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BINVAL->gg.g;
    x->BINVAL = z;
    return;
  case -1:
    y = x->BINVAL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BINVAL; n > 1 && y; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_LOGO_DEL_BINVAL) */

void zx_cdm_LOGO_DEL_BINVAL(struct zx_cdm_LOGO_s* x, int n)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BINVAL = (struct zx_cdm_BINVAL_s*)x->BINVAL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_BINVAL_s*)x->BINVAL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BINVAL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_LOGO_NUM_EXTVAL) */

int zx_cdm_LOGO_NUM_EXTVAL(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_EXTVAL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EXTVAL; y; ++n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_LOGO_GET_EXTVAL) */

struct zx_cdm_EXTVAL_s* zx_cdm_LOGO_GET_EXTVAL(struct zx_cdm_LOGO_s* x, int n)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return 0;
  for (y = x->EXTVAL; n>=0 && y; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_LOGO_POP_EXTVAL) */

struct zx_cdm_EXTVAL_s* zx_cdm_LOGO_POP_EXTVAL(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return 0;
  y = x->EXTVAL;
  if (y)
    x->EXTVAL = (struct zx_cdm_EXTVAL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_LOGO_PUSH_EXTVAL) */

void zx_cdm_LOGO_PUSH_EXTVAL(struct zx_cdm_LOGO_s* x, struct zx_cdm_EXTVAL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EXTVAL->gg.g;
  x->EXTVAL = z;
}

/* FUNC(zx_cdm_LOGO_REV_EXTVAL) */

void zx_cdm_LOGO_REV_EXTVAL(struct zx_cdm_LOGO_s* x)
{
  struct zx_cdm_EXTVAL_s* nxt;
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return;
  y = x->EXTVAL;
  if (!y) return;
  x->EXTVAL = 0;
  while (y) {
    nxt = (struct zx_cdm_EXTVAL_s*)y->gg.g.n;
    y->gg.g.n = &x->EXTVAL->gg.g;
    x->EXTVAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_LOGO_PUT_EXTVAL) */

void zx_cdm_LOGO_PUT_EXTVAL(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_EXTVAL_s* z)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x || !z) return;
  y = x->EXTVAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EXTVAL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_LOGO_ADD_EXTVAL) */

void zx_cdm_LOGO_ADD_EXTVAL(struct zx_cdm_LOGO_s* x, int n, struct zx_cdm_EXTVAL_s* z)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EXTVAL->gg.g;
    x->EXTVAL = z;
    return;
  case -1:
    y = x->EXTVAL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTVAL; n > 1 && y; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_LOGO_DEL_EXTVAL) */

void zx_cdm_LOGO_DEL_EXTVAL(struct zx_cdm_LOGO_s* x, int n)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EXTVAL = (struct zx_cdm_EXTVAL_s*)x->EXTVAL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_EXTVAL_s*)x->EXTVAL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTVAL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_LOGO_GET_id) */
struct zx_str* zx_cdm_LOGO_GET_id(struct zx_cdm_LOGO_s* x) { return x->id; }
/* FUNC(zx_cdm_LOGO_PUT_id) */
void zx_cdm_LOGO_PUT_id(struct zx_cdm_LOGO_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_LOGO_GET_modificationTime) */
struct zx_str* zx_cdm_LOGO_GET_modificationTime(struct zx_cdm_LOGO_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_LOGO_PUT_modificationTime) */
void zx_cdm_LOGO_PUT_modificationTime(struct zx_cdm_LOGO_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_LON_GET_id) */
struct zx_str* zx_cdm_LON_GET_id(struct zx_cdm_LON_s* x) { return x->id; }
/* FUNC(zx_cdm_LON_PUT_id) */
void zx_cdm_LON_PUT_id(struct zx_cdm_LON_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_LON_GET_modificationTime) */
struct zx_str* zx_cdm_LON_GET_modificationTime(struct zx_cdm_LON_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_LON_PUT_modificationTime) */
void zx_cdm_LON_PUT_modificationTime(struct zx_cdm_LON_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_LON_GET_ACC) */
struct zx_str* zx_cdm_LON_GET_ACC(struct zx_cdm_LON_s* x) { return x->ACC; }
/* FUNC(zx_cdm_LON_PUT_ACC) */
void zx_cdm_LON_PUT_ACC(struct zx_cdm_LON_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_LON_GET_ACCTime) */
struct zx_str* zx_cdm_LON_GET_ACCTime(struct zx_cdm_LON_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_LON_PUT_ACCTime) */
void zx_cdm_LON_PUT_ACCTime(struct zx_cdm_LON_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_LON_GET_modifier) */
struct zx_str* zx_cdm_LON_GET_modifier(struct zx_cdm_LON_s* x) { return x->modifier; }
/* FUNC(zx_cdm_LON_PUT_modifier) */
void zx_cdm_LON_PUT_modifier(struct zx_cdm_LON_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_MAILER_GET_id) */
struct zx_str* zx_cdm_MAILER_GET_id(struct zx_cdm_MAILER_s* x) { return x->id; }
/* FUNC(zx_cdm_MAILER_PUT_id) */
void zx_cdm_MAILER_PUT_id(struct zx_cdm_MAILER_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_MAILER_GET_modificationTime) */
struct zx_str* zx_cdm_MAILER_GET_modificationTime(struct zx_cdm_MAILER_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_MAILER_PUT_modificationTime) */
void zx_cdm_MAILER_PUT_modificationTime(struct zx_cdm_MAILER_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_MAILER_GET_ACC) */
struct zx_str* zx_cdm_MAILER_GET_ACC(struct zx_cdm_MAILER_s* x) { return x->ACC; }
/* FUNC(zx_cdm_MAILER_PUT_ACC) */
void zx_cdm_MAILER_PUT_ACC(struct zx_cdm_MAILER_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_MAILER_GET_ACCTime) */
struct zx_str* zx_cdm_MAILER_GET_ACCTime(struct zx_cdm_MAILER_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_MAILER_PUT_ACCTime) */
void zx_cdm_MAILER_PUT_ACCTime(struct zx_cdm_MAILER_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_MAILER_GET_modifier) */
struct zx_str* zx_cdm_MAILER_GET_modifier(struct zx_cdm_MAILER_s* x) { return x->modifier; }
/* FUNC(zx_cdm_MAILER_PUT_modifier) */
void zx_cdm_MAILER_PUT_modifier(struct zx_cdm_MAILER_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_MIDDLE_GET_group) */
struct zx_str* zx_cdm_MIDDLE_GET_group(struct zx_cdm_MIDDLE_s* x) { return x->group; }
/* FUNC(zx_cdm_MIDDLE_PUT_group) */
void zx_cdm_MIDDLE_PUT_group(struct zx_cdm_MIDDLE_s* x, struct zx_str* y) { x->group = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_N_NUM_FAMILY) */

int zx_cdm_N_NUM_FAMILY(struct zx_cdm_N_s* x)
{
  struct zx_cdm_FAMILY_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FAMILY; y; ++n, y = (struct zx_cdm_FAMILY_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_N_GET_FAMILY) */

struct zx_cdm_FAMILY_s* zx_cdm_N_GET_FAMILY(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_FAMILY_s* y;
  if (!x) return 0;
  for (y = x->FAMILY; n>=0 && y; --n, y = (struct zx_cdm_FAMILY_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_N_POP_FAMILY) */

struct zx_cdm_FAMILY_s* zx_cdm_N_POP_FAMILY(struct zx_cdm_N_s* x)
{
  struct zx_cdm_FAMILY_s* y;
  if (!x) return 0;
  y = x->FAMILY;
  if (y)
    x->FAMILY = (struct zx_cdm_FAMILY_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_N_PUSH_FAMILY) */

void zx_cdm_N_PUSH_FAMILY(struct zx_cdm_N_s* x, struct zx_cdm_FAMILY_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FAMILY->gg.g;
  x->FAMILY = z;
}

/* FUNC(zx_cdm_N_REV_FAMILY) */

void zx_cdm_N_REV_FAMILY(struct zx_cdm_N_s* x)
{
  struct zx_cdm_FAMILY_s* nxt;
  struct zx_cdm_FAMILY_s* y;
  if (!x) return;
  y = x->FAMILY;
  if (!y) return;
  x->FAMILY = 0;
  while (y) {
    nxt = (struct zx_cdm_FAMILY_s*)y->gg.g.n;
    y->gg.g.n = &x->FAMILY->gg.g;
    x->FAMILY = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_N_PUT_FAMILY) */

void zx_cdm_N_PUT_FAMILY(struct zx_cdm_N_s* x, int n, struct zx_cdm_FAMILY_s* z)
{
  struct zx_cdm_FAMILY_s* y;
  if (!x || !z) return;
  y = x->FAMILY;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FAMILY = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_FAMILY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_N_ADD_FAMILY) */

void zx_cdm_N_ADD_FAMILY(struct zx_cdm_N_s* x, int n, struct zx_cdm_FAMILY_s* z)
{
  struct zx_cdm_FAMILY_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->FAMILY->gg.g;
    x->FAMILY = z;
    return;
  case -1:
    y = x->FAMILY;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_FAMILY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FAMILY; n > 1 && y; --n, y = (struct zx_cdm_FAMILY_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_N_DEL_FAMILY) */

void zx_cdm_N_DEL_FAMILY(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_FAMILY_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FAMILY = (struct zx_cdm_FAMILY_s*)x->FAMILY->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_FAMILY_s*)x->FAMILY;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_FAMILY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FAMILY; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_FAMILY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_N_NUM_GIVEN) */

int zx_cdm_N_NUM_GIVEN(struct zx_cdm_N_s* x)
{
  struct zx_cdm_GIVEN_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GIVEN; y; ++n, y = (struct zx_cdm_GIVEN_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_N_GET_GIVEN) */

struct zx_cdm_GIVEN_s* zx_cdm_N_GET_GIVEN(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_GIVEN_s* y;
  if (!x) return 0;
  for (y = x->GIVEN; n>=0 && y; --n, y = (struct zx_cdm_GIVEN_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_N_POP_GIVEN) */

struct zx_cdm_GIVEN_s* zx_cdm_N_POP_GIVEN(struct zx_cdm_N_s* x)
{
  struct zx_cdm_GIVEN_s* y;
  if (!x) return 0;
  y = x->GIVEN;
  if (y)
    x->GIVEN = (struct zx_cdm_GIVEN_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_N_PUSH_GIVEN) */

void zx_cdm_N_PUSH_GIVEN(struct zx_cdm_N_s* x, struct zx_cdm_GIVEN_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GIVEN->gg.g;
  x->GIVEN = z;
}

/* FUNC(zx_cdm_N_REV_GIVEN) */

void zx_cdm_N_REV_GIVEN(struct zx_cdm_N_s* x)
{
  struct zx_cdm_GIVEN_s* nxt;
  struct zx_cdm_GIVEN_s* y;
  if (!x) return;
  y = x->GIVEN;
  if (!y) return;
  x->GIVEN = 0;
  while (y) {
    nxt = (struct zx_cdm_GIVEN_s*)y->gg.g.n;
    y->gg.g.n = &x->GIVEN->gg.g;
    x->GIVEN = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_N_PUT_GIVEN) */

void zx_cdm_N_PUT_GIVEN(struct zx_cdm_N_s* x, int n, struct zx_cdm_GIVEN_s* z)
{
  struct zx_cdm_GIVEN_s* y;
  if (!x || !z) return;
  y = x->GIVEN;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GIVEN = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_GIVEN_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_N_ADD_GIVEN) */

void zx_cdm_N_ADD_GIVEN(struct zx_cdm_N_s* x, int n, struct zx_cdm_GIVEN_s* z)
{
  struct zx_cdm_GIVEN_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GIVEN->gg.g;
    x->GIVEN = z;
    return;
  case -1:
    y = x->GIVEN;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_GIVEN_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GIVEN; n > 1 && y; --n, y = (struct zx_cdm_GIVEN_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_N_DEL_GIVEN) */

void zx_cdm_N_DEL_GIVEN(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_GIVEN_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GIVEN = (struct zx_cdm_GIVEN_s*)x->GIVEN->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_GIVEN_s*)x->GIVEN;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_GIVEN_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GIVEN; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_GIVEN_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_N_NUM_MIDDLE) */

int zx_cdm_N_NUM_MIDDLE(struct zx_cdm_N_s* x)
{
  struct zx_cdm_MIDDLE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MIDDLE; y; ++n, y = (struct zx_cdm_MIDDLE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_N_GET_MIDDLE) */

struct zx_cdm_MIDDLE_s* zx_cdm_N_GET_MIDDLE(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_MIDDLE_s* y;
  if (!x) return 0;
  for (y = x->MIDDLE; n>=0 && y; --n, y = (struct zx_cdm_MIDDLE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_N_POP_MIDDLE) */

struct zx_cdm_MIDDLE_s* zx_cdm_N_POP_MIDDLE(struct zx_cdm_N_s* x)
{
  struct zx_cdm_MIDDLE_s* y;
  if (!x) return 0;
  y = x->MIDDLE;
  if (y)
    x->MIDDLE = (struct zx_cdm_MIDDLE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_N_PUSH_MIDDLE) */

void zx_cdm_N_PUSH_MIDDLE(struct zx_cdm_N_s* x, struct zx_cdm_MIDDLE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MIDDLE->gg.g;
  x->MIDDLE = z;
}

/* FUNC(zx_cdm_N_REV_MIDDLE) */

void zx_cdm_N_REV_MIDDLE(struct zx_cdm_N_s* x)
{
  struct zx_cdm_MIDDLE_s* nxt;
  struct zx_cdm_MIDDLE_s* y;
  if (!x) return;
  y = x->MIDDLE;
  if (!y) return;
  x->MIDDLE = 0;
  while (y) {
    nxt = (struct zx_cdm_MIDDLE_s*)y->gg.g.n;
    y->gg.g.n = &x->MIDDLE->gg.g;
    x->MIDDLE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_N_PUT_MIDDLE) */

void zx_cdm_N_PUT_MIDDLE(struct zx_cdm_N_s* x, int n, struct zx_cdm_MIDDLE_s* z)
{
  struct zx_cdm_MIDDLE_s* y;
  if (!x || !z) return;
  y = x->MIDDLE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MIDDLE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_MIDDLE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_N_ADD_MIDDLE) */

void zx_cdm_N_ADD_MIDDLE(struct zx_cdm_N_s* x, int n, struct zx_cdm_MIDDLE_s* z)
{
  struct zx_cdm_MIDDLE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MIDDLE->gg.g;
    x->MIDDLE = z;
    return;
  case -1:
    y = x->MIDDLE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_MIDDLE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MIDDLE; n > 1 && y; --n, y = (struct zx_cdm_MIDDLE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_N_DEL_MIDDLE) */

void zx_cdm_N_DEL_MIDDLE(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_MIDDLE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MIDDLE = (struct zx_cdm_MIDDLE_s*)x->MIDDLE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_MIDDLE_s*)x->MIDDLE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_MIDDLE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MIDDLE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_MIDDLE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_N_NUM_PREFIX) */

int zx_cdm_N_NUM_PREFIX(struct zx_cdm_N_s* x)
{
  struct zx_cdm_PREFIX_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREFIX; y; ++n, y = (struct zx_cdm_PREFIX_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_N_GET_PREFIX) */

struct zx_cdm_PREFIX_s* zx_cdm_N_GET_PREFIX(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_PREFIX_s* y;
  if (!x) return 0;
  for (y = x->PREFIX; n>=0 && y; --n, y = (struct zx_cdm_PREFIX_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_N_POP_PREFIX) */

struct zx_cdm_PREFIX_s* zx_cdm_N_POP_PREFIX(struct zx_cdm_N_s* x)
{
  struct zx_cdm_PREFIX_s* y;
  if (!x) return 0;
  y = x->PREFIX;
  if (y)
    x->PREFIX = (struct zx_cdm_PREFIX_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_N_PUSH_PREFIX) */

void zx_cdm_N_PUSH_PREFIX(struct zx_cdm_N_s* x, struct zx_cdm_PREFIX_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PREFIX->gg.g;
  x->PREFIX = z;
}

/* FUNC(zx_cdm_N_REV_PREFIX) */

void zx_cdm_N_REV_PREFIX(struct zx_cdm_N_s* x)
{
  struct zx_cdm_PREFIX_s* nxt;
  struct zx_cdm_PREFIX_s* y;
  if (!x) return;
  y = x->PREFIX;
  if (!y) return;
  x->PREFIX = 0;
  while (y) {
    nxt = (struct zx_cdm_PREFIX_s*)y->gg.g.n;
    y->gg.g.n = &x->PREFIX->gg.g;
    x->PREFIX = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_N_PUT_PREFIX) */

void zx_cdm_N_PUT_PREFIX(struct zx_cdm_N_s* x, int n, struct zx_cdm_PREFIX_s* z)
{
  struct zx_cdm_PREFIX_s* y;
  if (!x || !z) return;
  y = x->PREFIX;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PREFIX = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PREFIX_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_N_ADD_PREFIX) */

void zx_cdm_N_ADD_PREFIX(struct zx_cdm_N_s* x, int n, struct zx_cdm_PREFIX_s* z)
{
  struct zx_cdm_PREFIX_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PREFIX->gg.g;
    x->PREFIX = z;
    return;
  case -1:
    y = x->PREFIX;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_PREFIX_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PREFIX; n > 1 && y; --n, y = (struct zx_cdm_PREFIX_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_N_DEL_PREFIX) */

void zx_cdm_N_DEL_PREFIX(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_PREFIX_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREFIX = (struct zx_cdm_PREFIX_s*)x->PREFIX->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_PREFIX_s*)x->PREFIX;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_PREFIX_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PREFIX; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PREFIX_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_N_NUM_SUFFIX) */

int zx_cdm_N_NUM_SUFFIX(struct zx_cdm_N_s* x)
{
  struct zx_cdm_SUFFIX_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SUFFIX; y; ++n, y = (struct zx_cdm_SUFFIX_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_N_GET_SUFFIX) */

struct zx_cdm_SUFFIX_s* zx_cdm_N_GET_SUFFIX(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_SUFFIX_s* y;
  if (!x) return 0;
  for (y = x->SUFFIX; n>=0 && y; --n, y = (struct zx_cdm_SUFFIX_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_N_POP_SUFFIX) */

struct zx_cdm_SUFFIX_s* zx_cdm_N_POP_SUFFIX(struct zx_cdm_N_s* x)
{
  struct zx_cdm_SUFFIX_s* y;
  if (!x) return 0;
  y = x->SUFFIX;
  if (y)
    x->SUFFIX = (struct zx_cdm_SUFFIX_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_N_PUSH_SUFFIX) */

void zx_cdm_N_PUSH_SUFFIX(struct zx_cdm_N_s* x, struct zx_cdm_SUFFIX_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SUFFIX->gg.g;
  x->SUFFIX = z;
}

/* FUNC(zx_cdm_N_REV_SUFFIX) */

void zx_cdm_N_REV_SUFFIX(struct zx_cdm_N_s* x)
{
  struct zx_cdm_SUFFIX_s* nxt;
  struct zx_cdm_SUFFIX_s* y;
  if (!x) return;
  y = x->SUFFIX;
  if (!y) return;
  x->SUFFIX = 0;
  while (y) {
    nxt = (struct zx_cdm_SUFFIX_s*)y->gg.g.n;
    y->gg.g.n = &x->SUFFIX->gg.g;
    x->SUFFIX = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_N_PUT_SUFFIX) */

void zx_cdm_N_PUT_SUFFIX(struct zx_cdm_N_s* x, int n, struct zx_cdm_SUFFIX_s* z)
{
  struct zx_cdm_SUFFIX_s* y;
  if (!x || !z) return;
  y = x->SUFFIX;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SUFFIX = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_SUFFIX_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_N_ADD_SUFFIX) */

void zx_cdm_N_ADD_SUFFIX(struct zx_cdm_N_s* x, int n, struct zx_cdm_SUFFIX_s* z)
{
  struct zx_cdm_SUFFIX_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SUFFIX->gg.g;
    x->SUFFIX = z;
    return;
  case -1:
    y = x->SUFFIX;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_SUFFIX_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SUFFIX; n > 1 && y; --n, y = (struct zx_cdm_SUFFIX_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_N_DEL_SUFFIX) */

void zx_cdm_N_DEL_SUFFIX(struct zx_cdm_N_s* x, int n)
{
  struct zx_cdm_SUFFIX_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SUFFIX = (struct zx_cdm_SUFFIX_s*)x->SUFFIX->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_SUFFIX_s*)x->SUFFIX;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_SUFFIX_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SUFFIX; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_SUFFIX_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_N_GET_id) */
struct zx_str* zx_cdm_N_GET_id(struct zx_cdm_N_s* x) { return x->id; }
/* FUNC(zx_cdm_N_PUT_id) */
void zx_cdm_N_PUT_id(struct zx_cdm_N_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_N_GET_modificationTime) */
struct zx_str* zx_cdm_N_GET_modificationTime(struct zx_cdm_N_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_N_PUT_modificationTime) */
void zx_cdm_N_PUT_modificationTime(struct zx_cdm_N_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_NICKNAME_GET_group) */
struct zx_str* zx_cdm_NICKNAME_GET_group(struct zx_cdm_NICKNAME_s* x) { return x->group; }
/* FUNC(zx_cdm_NICKNAME_PUT_group) */
void zx_cdm_NICKNAME_PUT_group(struct zx_cdm_NICKNAME_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_NOTE_GET_group) */
struct zx_str* zx_cdm_NOTE_GET_group(struct zx_cdm_NOTE_s* x) { return x->group; }
/* FUNC(zx_cdm_NOTE_PUT_group) */
void zx_cdm_NOTE_PUT_group(struct zx_cdm_NOTE_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_NUMBER_GET_id) */
struct zx_str* zx_cdm_NUMBER_GET_id(struct zx_cdm_NUMBER_s* x) { return x->id; }
/* FUNC(zx_cdm_NUMBER_PUT_id) */
void zx_cdm_NUMBER_PUT_id(struct zx_cdm_NUMBER_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_NUMBER_GET_modificationTime) */
struct zx_str* zx_cdm_NUMBER_GET_modificationTime(struct zx_cdm_NUMBER_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_NUMBER_PUT_modificationTime) */
void zx_cdm_NUMBER_PUT_modificationTime(struct zx_cdm_NUMBER_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_NUMBER_GET_ACC) */
struct zx_str* zx_cdm_NUMBER_GET_ACC(struct zx_cdm_NUMBER_s* x) { return x->ACC; }
/* FUNC(zx_cdm_NUMBER_PUT_ACC) */
void zx_cdm_NUMBER_PUT_ACC(struct zx_cdm_NUMBER_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_NUMBER_GET_ACCTime) */
struct zx_str* zx_cdm_NUMBER_GET_ACCTime(struct zx_cdm_NUMBER_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_NUMBER_PUT_ACCTime) */
void zx_cdm_NUMBER_PUT_ACCTime(struct zx_cdm_NUMBER_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_NUMBER_GET_modifier) */
struct zx_str* zx_cdm_NUMBER_GET_modifier(struct zx_cdm_NUMBER_s* x) { return x->modifier; }
/* FUNC(zx_cdm_NUMBER_PUT_modifier) */
void zx_cdm_NUMBER_PUT_modifier(struct zx_cdm_NUMBER_s* x, struct zx_str* y) { x->modifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ORG_NUM_ORGNAME) */

int zx_cdm_ORG_NUM_ORGNAME(struct zx_cdm_ORG_s* x)
{
  struct zx_cdm_ORGNAME_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ORGNAME; y; ++n, y = (struct zx_cdm_ORGNAME_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ORG_GET_ORGNAME) */

struct zx_cdm_ORGNAME_s* zx_cdm_ORG_GET_ORGNAME(struct zx_cdm_ORG_s* x, int n)
{
  struct zx_cdm_ORGNAME_s* y;
  if (!x) return 0;
  for (y = x->ORGNAME; n>=0 && y; --n, y = (struct zx_cdm_ORGNAME_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ORG_POP_ORGNAME) */

struct zx_cdm_ORGNAME_s* zx_cdm_ORG_POP_ORGNAME(struct zx_cdm_ORG_s* x)
{
  struct zx_cdm_ORGNAME_s* y;
  if (!x) return 0;
  y = x->ORGNAME;
  if (y)
    x->ORGNAME = (struct zx_cdm_ORGNAME_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ORG_PUSH_ORGNAME) */

void zx_cdm_ORG_PUSH_ORGNAME(struct zx_cdm_ORG_s* x, struct zx_cdm_ORGNAME_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ORGNAME->gg.g;
  x->ORGNAME = z;
}

/* FUNC(zx_cdm_ORG_REV_ORGNAME) */

void zx_cdm_ORG_REV_ORGNAME(struct zx_cdm_ORG_s* x)
{
  struct zx_cdm_ORGNAME_s* nxt;
  struct zx_cdm_ORGNAME_s* y;
  if (!x) return;
  y = x->ORGNAME;
  if (!y) return;
  x->ORGNAME = 0;
  while (y) {
    nxt = (struct zx_cdm_ORGNAME_s*)y->gg.g.n;
    y->gg.g.n = &x->ORGNAME->gg.g;
    x->ORGNAME = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ORG_PUT_ORGNAME) */

void zx_cdm_ORG_PUT_ORGNAME(struct zx_cdm_ORG_s* x, int n, struct zx_cdm_ORGNAME_s* z)
{
  struct zx_cdm_ORGNAME_s* y;
  if (!x || !z) return;
  y = x->ORGNAME;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ORGNAME = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ORGNAME_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ORG_ADD_ORGNAME) */

void zx_cdm_ORG_ADD_ORGNAME(struct zx_cdm_ORG_s* x, int n, struct zx_cdm_ORGNAME_s* z)
{
  struct zx_cdm_ORGNAME_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ORGNAME->gg.g;
    x->ORGNAME = z;
    return;
  case -1:
    y = x->ORGNAME;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_ORGNAME_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ORGNAME; n > 1 && y; --n, y = (struct zx_cdm_ORGNAME_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ORG_DEL_ORGNAME) */

void zx_cdm_ORG_DEL_ORGNAME(struct zx_cdm_ORG_s* x, int n)
{
  struct zx_cdm_ORGNAME_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ORGNAME = (struct zx_cdm_ORGNAME_s*)x->ORGNAME->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_ORGNAME_s*)x->ORGNAME;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_ORGNAME_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ORGNAME; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ORGNAME_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_ORG_NUM_ORGUNIT) */

int zx_cdm_ORG_NUM_ORGUNIT(struct zx_cdm_ORG_s* x)
{
  struct zx_cdm_ORGUNIT_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ORGUNIT; y; ++n, y = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_ORG_GET_ORGUNIT) */

struct zx_cdm_ORGUNIT_s* zx_cdm_ORG_GET_ORGUNIT(struct zx_cdm_ORG_s* x, int n)
{
  struct zx_cdm_ORGUNIT_s* y;
  if (!x) return 0;
  for (y = x->ORGUNIT; n>=0 && y; --n, y = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_ORG_POP_ORGUNIT) */

struct zx_cdm_ORGUNIT_s* zx_cdm_ORG_POP_ORGUNIT(struct zx_cdm_ORG_s* x)
{
  struct zx_cdm_ORGUNIT_s* y;
  if (!x) return 0;
  y = x->ORGUNIT;
  if (y)
    x->ORGUNIT = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_ORG_PUSH_ORGUNIT) */

void zx_cdm_ORG_PUSH_ORGUNIT(struct zx_cdm_ORG_s* x, struct zx_cdm_ORGUNIT_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ORGUNIT->gg.g;
  x->ORGUNIT = z;
}

/* FUNC(zx_cdm_ORG_REV_ORGUNIT) */

void zx_cdm_ORG_REV_ORGUNIT(struct zx_cdm_ORG_s* x)
{
  struct zx_cdm_ORGUNIT_s* nxt;
  struct zx_cdm_ORGUNIT_s* y;
  if (!x) return;
  y = x->ORGUNIT;
  if (!y) return;
  x->ORGUNIT = 0;
  while (y) {
    nxt = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n;
    y->gg.g.n = &x->ORGUNIT->gg.g;
    x->ORGUNIT = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_ORG_PUT_ORGUNIT) */

void zx_cdm_ORG_PUT_ORGUNIT(struct zx_cdm_ORG_s* x, int n, struct zx_cdm_ORGUNIT_s* z)
{
  struct zx_cdm_ORGUNIT_s* y;
  if (!x || !z) return;
  y = x->ORGUNIT;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ORGUNIT = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_ORG_ADD_ORGUNIT) */

void zx_cdm_ORG_ADD_ORGUNIT(struct zx_cdm_ORG_s* x, int n, struct zx_cdm_ORGUNIT_s* z)
{
  struct zx_cdm_ORGUNIT_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ORGUNIT->gg.g;
    x->ORGUNIT = z;
    return;
  case -1:
    y = x->ORGUNIT;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ORGUNIT; n > 1 && y; --n, y = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_ORG_DEL_ORGUNIT) */

void zx_cdm_ORG_DEL_ORGUNIT(struct zx_cdm_ORG_s* x, int n)
{
  struct zx_cdm_ORGUNIT_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ORGUNIT = (struct zx_cdm_ORGUNIT_s*)x->ORGUNIT->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_ORGUNIT_s*)x->ORGUNIT;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ORGUNIT; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ORGUNIT_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_ORG_GET_id) */
struct zx_str* zx_cdm_ORG_GET_id(struct zx_cdm_ORG_s* x) { return x->id; }
/* FUNC(zx_cdm_ORG_PUT_id) */
void zx_cdm_ORG_PUT_id(struct zx_cdm_ORG_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_ORG_GET_modificationTime) */
struct zx_str* zx_cdm_ORG_GET_modificationTime(struct zx_cdm_ORG_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_ORG_PUT_modificationTime) */
void zx_cdm_ORG_PUT_modificationTime(struct zx_cdm_ORG_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_ORGNAME_GET_group) */
struct zx_str* zx_cdm_ORGNAME_GET_group(struct zx_cdm_ORGNAME_s* x) { return x->group; }
/* FUNC(zx_cdm_ORGNAME_PUT_group) */
void zx_cdm_ORGNAME_PUT_group(struct zx_cdm_ORGNAME_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_ORGUNIT_GET_group) */
struct zx_str* zx_cdm_ORGUNIT_GET_group(struct zx_cdm_ORGUNIT_s* x) { return x->group; }
/* FUNC(zx_cdm_ORGUNIT_PUT_group) */
void zx_cdm_ORGUNIT_PUT_group(struct zx_cdm_ORGUNIT_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_PCODE_GET_group) */
struct zx_str* zx_cdm_PCODE_GET_group(struct zx_cdm_PCODE_s* x) { return x->group; }
/* FUNC(zx_cdm_PCODE_PUT_group) */
void zx_cdm_PCODE_PUT_group(struct zx_cdm_PCODE_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_PHONETIC_GET_group) */
struct zx_str* zx_cdm_PHONETIC_GET_group(struct zx_cdm_PHONETIC_s* x) { return x->group; }
/* FUNC(zx_cdm_PHONETIC_PUT_group) */
void zx_cdm_PHONETIC_PUT_group(struct zx_cdm_PHONETIC_s* x, struct zx_str* y) { x->group = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_PHOTO_NUM_TYPE) */

int zx_cdm_PHOTO_NUM_TYPE(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_TYPE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TYPE; y; ++n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_PHOTO_GET_TYPE) */

struct zx_cdm_TYPE_s* zx_cdm_PHOTO_GET_TYPE(struct zx_cdm_PHOTO_s* x, int n)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return 0;
  for (y = x->TYPE; n>=0 && y; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_PHOTO_POP_TYPE) */

struct zx_cdm_TYPE_s* zx_cdm_PHOTO_POP_TYPE(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return 0;
  y = x->TYPE;
  if (y)
    x->TYPE = (struct zx_cdm_TYPE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_PHOTO_PUSH_TYPE) */

void zx_cdm_PHOTO_PUSH_TYPE(struct zx_cdm_PHOTO_s* x, struct zx_cdm_TYPE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TYPE->gg.g;
  x->TYPE = z;
}

/* FUNC(zx_cdm_PHOTO_REV_TYPE) */

void zx_cdm_PHOTO_REV_TYPE(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_TYPE_s* nxt;
  struct zx_cdm_TYPE_s* y;
  if (!x) return;
  y = x->TYPE;
  if (!y) return;
  x->TYPE = 0;
  while (y) {
    nxt = (struct zx_cdm_TYPE_s*)y->gg.g.n;
    y->gg.g.n = &x->TYPE->gg.g;
    x->TYPE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_PHOTO_PUT_TYPE) */

void zx_cdm_PHOTO_PUT_TYPE(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_TYPE_s* z)
{
  struct zx_cdm_TYPE_s* y;
  if (!x || !z) return;
  y = x->TYPE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TYPE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_PHOTO_ADD_TYPE) */

void zx_cdm_PHOTO_ADD_TYPE(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_TYPE_s* z)
{
  struct zx_cdm_TYPE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TYPE->gg.g;
    x->TYPE = z;
    return;
  case -1:
    y = x->TYPE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TYPE; n > 1 && y; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_PHOTO_DEL_TYPE) */

void zx_cdm_PHOTO_DEL_TYPE(struct zx_cdm_PHOTO_s* x, int n)
{
  struct zx_cdm_TYPE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TYPE = (struct zx_cdm_TYPE_s*)x->TYPE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_TYPE_s*)x->TYPE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TYPE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TYPE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_PHOTO_NUM_BINVAL) */

int zx_cdm_PHOTO_NUM_BINVAL(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_BINVAL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BINVAL; y; ++n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_PHOTO_GET_BINVAL) */

struct zx_cdm_BINVAL_s* zx_cdm_PHOTO_GET_BINVAL(struct zx_cdm_PHOTO_s* x, int n)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return 0;
  for (y = x->BINVAL; n>=0 && y; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_PHOTO_POP_BINVAL) */

struct zx_cdm_BINVAL_s* zx_cdm_PHOTO_POP_BINVAL(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return 0;
  y = x->BINVAL;
  if (y)
    x->BINVAL = (struct zx_cdm_BINVAL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_PHOTO_PUSH_BINVAL) */

void zx_cdm_PHOTO_PUSH_BINVAL(struct zx_cdm_PHOTO_s* x, struct zx_cdm_BINVAL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BINVAL->gg.g;
  x->BINVAL = z;
}

/* FUNC(zx_cdm_PHOTO_REV_BINVAL) */

void zx_cdm_PHOTO_REV_BINVAL(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_BINVAL_s* nxt;
  struct zx_cdm_BINVAL_s* y;
  if (!x) return;
  y = x->BINVAL;
  if (!y) return;
  x->BINVAL = 0;
  while (y) {
    nxt = (struct zx_cdm_BINVAL_s*)y->gg.g.n;
    y->gg.g.n = &x->BINVAL->gg.g;
    x->BINVAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_PHOTO_PUT_BINVAL) */

void zx_cdm_PHOTO_PUT_BINVAL(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_BINVAL_s* z)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x || !z) return;
  y = x->BINVAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BINVAL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_PHOTO_ADD_BINVAL) */

void zx_cdm_PHOTO_ADD_BINVAL(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_BINVAL_s* z)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BINVAL->gg.g;
    x->BINVAL = z;
    return;
  case -1:
    y = x->BINVAL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BINVAL; n > 1 && y; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_PHOTO_DEL_BINVAL) */

void zx_cdm_PHOTO_DEL_BINVAL(struct zx_cdm_PHOTO_s* x, int n)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BINVAL = (struct zx_cdm_BINVAL_s*)x->BINVAL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_BINVAL_s*)x->BINVAL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BINVAL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_PHOTO_NUM_EXTVAL) */

int zx_cdm_PHOTO_NUM_EXTVAL(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_EXTVAL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EXTVAL; y; ++n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_PHOTO_GET_EXTVAL) */

struct zx_cdm_EXTVAL_s* zx_cdm_PHOTO_GET_EXTVAL(struct zx_cdm_PHOTO_s* x, int n)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return 0;
  for (y = x->EXTVAL; n>=0 && y; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_PHOTO_POP_EXTVAL) */

struct zx_cdm_EXTVAL_s* zx_cdm_PHOTO_POP_EXTVAL(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return 0;
  y = x->EXTVAL;
  if (y)
    x->EXTVAL = (struct zx_cdm_EXTVAL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_PHOTO_PUSH_EXTVAL) */

void zx_cdm_PHOTO_PUSH_EXTVAL(struct zx_cdm_PHOTO_s* x, struct zx_cdm_EXTVAL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EXTVAL->gg.g;
  x->EXTVAL = z;
}

/* FUNC(zx_cdm_PHOTO_REV_EXTVAL) */

void zx_cdm_PHOTO_REV_EXTVAL(struct zx_cdm_PHOTO_s* x)
{
  struct zx_cdm_EXTVAL_s* nxt;
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return;
  y = x->EXTVAL;
  if (!y) return;
  x->EXTVAL = 0;
  while (y) {
    nxt = (struct zx_cdm_EXTVAL_s*)y->gg.g.n;
    y->gg.g.n = &x->EXTVAL->gg.g;
    x->EXTVAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_PHOTO_PUT_EXTVAL) */

void zx_cdm_PHOTO_PUT_EXTVAL(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_EXTVAL_s* z)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x || !z) return;
  y = x->EXTVAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EXTVAL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_PHOTO_ADD_EXTVAL) */

void zx_cdm_PHOTO_ADD_EXTVAL(struct zx_cdm_PHOTO_s* x, int n, struct zx_cdm_EXTVAL_s* z)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EXTVAL->gg.g;
    x->EXTVAL = z;
    return;
  case -1:
    y = x->EXTVAL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTVAL; n > 1 && y; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_PHOTO_DEL_EXTVAL) */

void zx_cdm_PHOTO_DEL_EXTVAL(struct zx_cdm_PHOTO_s* x, int n)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EXTVAL = (struct zx_cdm_EXTVAL_s*)x->EXTVAL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_EXTVAL_s*)x->EXTVAL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTVAL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_PHOTO_GET_id) */
struct zx_str* zx_cdm_PHOTO_GET_id(struct zx_cdm_PHOTO_s* x) { return x->id; }
/* FUNC(zx_cdm_PHOTO_PUT_id) */
void zx_cdm_PHOTO_PUT_id(struct zx_cdm_PHOTO_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_PHOTO_GET_modificationTime) */
struct zx_str* zx_cdm_PHOTO_GET_modificationTime(struct zx_cdm_PHOTO_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_PHOTO_PUT_modificationTime) */
void zx_cdm_PHOTO_PUT_modificationTime(struct zx_cdm_PHOTO_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_PHYSICALACCESS_GET_group) */
struct zx_str* zx_cdm_PHYSICALACCESS_GET_group(struct zx_cdm_PHYSICALACCESS_s* x) { return x->group; }
/* FUNC(zx_cdm_PHYSICALACCESS_PUT_group) */
void zx_cdm_PHYSICALACCESS_PUT_group(struct zx_cdm_PHYSICALACCESS_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_POBOX_GET_group) */
struct zx_str* zx_cdm_POBOX_GET_group(struct zx_cdm_POBOX_s* x) { return x->group; }
/* FUNC(zx_cdm_POBOX_PUT_group) */
void zx_cdm_POBOX_PUT_group(struct zx_cdm_POBOX_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_PREFIX_GET_group) */
struct zx_str* zx_cdm_PREFIX_GET_group(struct zx_cdm_PREFIX_s* x) { return x->group; }
/* FUNC(zx_cdm_PREFIX_PUT_group) */
void zx_cdm_PREFIX_PUT_group(struct zx_cdm_PREFIX_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_PRODID_GET_id) */
struct zx_str* zx_cdm_PRODID_GET_id(struct zx_cdm_PRODID_s* x) { return x->id; }
/* FUNC(zx_cdm_PRODID_PUT_id) */
void zx_cdm_PRODID_PUT_id(struct zx_cdm_PRODID_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_PRODID_GET_modificationTime) */
struct zx_str* zx_cdm_PRODID_GET_modificationTime(struct zx_cdm_PRODID_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_PRODID_PUT_modificationTime) */
void zx_cdm_PRODID_PUT_modificationTime(struct zx_cdm_PRODID_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_PRODID_GET_ACC) */
struct zx_str* zx_cdm_PRODID_GET_ACC(struct zx_cdm_PRODID_s* x) { return x->ACC; }
/* FUNC(zx_cdm_PRODID_PUT_ACC) */
void zx_cdm_PRODID_PUT_ACC(struct zx_cdm_PRODID_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_PRODID_GET_ACCTime) */
struct zx_str* zx_cdm_PRODID_GET_ACCTime(struct zx_cdm_PRODID_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_PRODID_PUT_ACCTime) */
void zx_cdm_PRODID_PUT_ACCTime(struct zx_cdm_PRODID_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_PRODID_GET_modifier) */
struct zx_str* zx_cdm_PRODID_GET_modifier(struct zx_cdm_PRODID_s* x) { return x->modifier; }
/* FUNC(zx_cdm_PRODID_PUT_modifier) */
void zx_cdm_PRODID_PUT_modifier(struct zx_cdm_PRODID_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_REGION_GET_group) */
struct zx_str* zx_cdm_REGION_GET_group(struct zx_cdm_REGION_s* x) { return x->group; }
/* FUNC(zx_cdm_REGION_PUT_group) */
void zx_cdm_REGION_PUT_group(struct zx_cdm_REGION_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_REV_GET_id) */
struct zx_str* zx_cdm_REV_GET_id(struct zx_cdm_REV_s* x) { return x->id; }
/* FUNC(zx_cdm_REV_PUT_id) */
void zx_cdm_REV_PUT_id(struct zx_cdm_REV_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_REV_GET_modificationTime) */
struct zx_str* zx_cdm_REV_GET_modificationTime(struct zx_cdm_REV_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_REV_PUT_modificationTime) */
void zx_cdm_REV_PUT_modificationTime(struct zx_cdm_REV_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_REV_GET_ACC) */
struct zx_str* zx_cdm_REV_GET_ACC(struct zx_cdm_REV_s* x) { return x->ACC; }
/* FUNC(zx_cdm_REV_PUT_ACC) */
void zx_cdm_REV_PUT_ACC(struct zx_cdm_REV_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_REV_GET_ACCTime) */
struct zx_str* zx_cdm_REV_GET_ACCTime(struct zx_cdm_REV_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_REV_PUT_ACCTime) */
void zx_cdm_REV_PUT_ACCTime(struct zx_cdm_REV_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_REV_GET_modifier) */
struct zx_str* zx_cdm_REV_GET_modifier(struct zx_cdm_REV_s* x) { return x->modifier; }
/* FUNC(zx_cdm_REV_PUT_modifier) */
void zx_cdm_REV_PUT_modifier(struct zx_cdm_REV_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_ROLE_GET_group) */
struct zx_str* zx_cdm_ROLE_GET_group(struct zx_cdm_ROLE_s* x) { return x->group; }
/* FUNC(zx_cdm_ROLE_PUT_group) */
void zx_cdm_ROLE_PUT_group(struct zx_cdm_ROLE_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_SORT_STRING_GET_group) */
struct zx_str* zx_cdm_SORT_STRING_GET_group(struct zx_cdm_SORT_STRING_s* x) { return x->group; }
/* FUNC(zx_cdm_SORT_STRING_PUT_group) */
void zx_cdm_SORT_STRING_PUT_group(struct zx_cdm_SORT_STRING_s* x, struct zx_str* y) { x->group = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_SOUND_NUM_PHONETIC) */

int zx_cdm_SOUND_NUM_PHONETIC(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_PHONETIC_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PHONETIC; y; ++n, y = (struct zx_cdm_PHONETIC_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_SOUND_GET_PHONETIC) */

struct zx_cdm_PHONETIC_s* zx_cdm_SOUND_GET_PHONETIC(struct zx_cdm_SOUND_s* x, int n)
{
  struct zx_cdm_PHONETIC_s* y;
  if (!x) return 0;
  for (y = x->PHONETIC; n>=0 && y; --n, y = (struct zx_cdm_PHONETIC_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_SOUND_POP_PHONETIC) */

struct zx_cdm_PHONETIC_s* zx_cdm_SOUND_POP_PHONETIC(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_PHONETIC_s* y;
  if (!x) return 0;
  y = x->PHONETIC;
  if (y)
    x->PHONETIC = (struct zx_cdm_PHONETIC_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_SOUND_PUSH_PHONETIC) */

void zx_cdm_SOUND_PUSH_PHONETIC(struct zx_cdm_SOUND_s* x, struct zx_cdm_PHONETIC_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PHONETIC->gg.g;
  x->PHONETIC = z;
}

/* FUNC(zx_cdm_SOUND_REV_PHONETIC) */

void zx_cdm_SOUND_REV_PHONETIC(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_PHONETIC_s* nxt;
  struct zx_cdm_PHONETIC_s* y;
  if (!x) return;
  y = x->PHONETIC;
  if (!y) return;
  x->PHONETIC = 0;
  while (y) {
    nxt = (struct zx_cdm_PHONETIC_s*)y->gg.g.n;
    y->gg.g.n = &x->PHONETIC->gg.g;
    x->PHONETIC = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_SOUND_PUT_PHONETIC) */

void zx_cdm_SOUND_PUT_PHONETIC(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_PHONETIC_s* z)
{
  struct zx_cdm_PHONETIC_s* y;
  if (!x || !z) return;
  y = x->PHONETIC;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PHONETIC = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PHONETIC_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_SOUND_ADD_PHONETIC) */

void zx_cdm_SOUND_ADD_PHONETIC(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_PHONETIC_s* z)
{
  struct zx_cdm_PHONETIC_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PHONETIC->gg.g;
    x->PHONETIC = z;
    return;
  case -1:
    y = x->PHONETIC;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_PHONETIC_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PHONETIC; n > 1 && y; --n, y = (struct zx_cdm_PHONETIC_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_SOUND_DEL_PHONETIC) */

void zx_cdm_SOUND_DEL_PHONETIC(struct zx_cdm_SOUND_s* x, int n)
{
  struct zx_cdm_PHONETIC_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PHONETIC = (struct zx_cdm_PHONETIC_s*)x->PHONETIC->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_PHONETIC_s*)x->PHONETIC;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_PHONETIC_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PHONETIC; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PHONETIC_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_SOUND_NUM_BINVAL) */

int zx_cdm_SOUND_NUM_BINVAL(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_BINVAL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BINVAL; y; ++n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_SOUND_GET_BINVAL) */

struct zx_cdm_BINVAL_s* zx_cdm_SOUND_GET_BINVAL(struct zx_cdm_SOUND_s* x, int n)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return 0;
  for (y = x->BINVAL; n>=0 && y; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_SOUND_POP_BINVAL) */

struct zx_cdm_BINVAL_s* zx_cdm_SOUND_POP_BINVAL(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return 0;
  y = x->BINVAL;
  if (y)
    x->BINVAL = (struct zx_cdm_BINVAL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_SOUND_PUSH_BINVAL) */

void zx_cdm_SOUND_PUSH_BINVAL(struct zx_cdm_SOUND_s* x, struct zx_cdm_BINVAL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BINVAL->gg.g;
  x->BINVAL = z;
}

/* FUNC(zx_cdm_SOUND_REV_BINVAL) */

void zx_cdm_SOUND_REV_BINVAL(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_BINVAL_s* nxt;
  struct zx_cdm_BINVAL_s* y;
  if (!x) return;
  y = x->BINVAL;
  if (!y) return;
  x->BINVAL = 0;
  while (y) {
    nxt = (struct zx_cdm_BINVAL_s*)y->gg.g.n;
    y->gg.g.n = &x->BINVAL->gg.g;
    x->BINVAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_SOUND_PUT_BINVAL) */

void zx_cdm_SOUND_PUT_BINVAL(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_BINVAL_s* z)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x || !z) return;
  y = x->BINVAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BINVAL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_SOUND_ADD_BINVAL) */

void zx_cdm_SOUND_ADD_BINVAL(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_BINVAL_s* z)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BINVAL->gg.g;
    x->BINVAL = z;
    return;
  case -1:
    y = x->BINVAL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BINVAL; n > 1 && y; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_SOUND_DEL_BINVAL) */

void zx_cdm_SOUND_DEL_BINVAL(struct zx_cdm_SOUND_s* x, int n)
{
  struct zx_cdm_BINVAL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BINVAL = (struct zx_cdm_BINVAL_s*)x->BINVAL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_BINVAL_s*)x->BINVAL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BINVAL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_BINVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_SOUND_NUM_EXTVAL) */

int zx_cdm_SOUND_NUM_EXTVAL(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_EXTVAL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EXTVAL; y; ++n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_SOUND_GET_EXTVAL) */

struct zx_cdm_EXTVAL_s* zx_cdm_SOUND_GET_EXTVAL(struct zx_cdm_SOUND_s* x, int n)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return 0;
  for (y = x->EXTVAL; n>=0 && y; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_SOUND_POP_EXTVAL) */

struct zx_cdm_EXTVAL_s* zx_cdm_SOUND_POP_EXTVAL(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return 0;
  y = x->EXTVAL;
  if (y)
    x->EXTVAL = (struct zx_cdm_EXTVAL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_SOUND_PUSH_EXTVAL) */

void zx_cdm_SOUND_PUSH_EXTVAL(struct zx_cdm_SOUND_s* x, struct zx_cdm_EXTVAL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EXTVAL->gg.g;
  x->EXTVAL = z;
}

/* FUNC(zx_cdm_SOUND_REV_EXTVAL) */

void zx_cdm_SOUND_REV_EXTVAL(struct zx_cdm_SOUND_s* x)
{
  struct zx_cdm_EXTVAL_s* nxt;
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return;
  y = x->EXTVAL;
  if (!y) return;
  x->EXTVAL = 0;
  while (y) {
    nxt = (struct zx_cdm_EXTVAL_s*)y->gg.g.n;
    y->gg.g.n = &x->EXTVAL->gg.g;
    x->EXTVAL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_SOUND_PUT_EXTVAL) */

void zx_cdm_SOUND_PUT_EXTVAL(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_EXTVAL_s* z)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x || !z) return;
  y = x->EXTVAL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EXTVAL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_SOUND_ADD_EXTVAL) */

void zx_cdm_SOUND_ADD_EXTVAL(struct zx_cdm_SOUND_s* x, int n, struct zx_cdm_EXTVAL_s* z)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EXTVAL->gg.g;
    x->EXTVAL = z;
    return;
  case -1:
    y = x->EXTVAL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTVAL; n > 1 && y; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_SOUND_DEL_EXTVAL) */

void zx_cdm_SOUND_DEL_EXTVAL(struct zx_cdm_SOUND_s* x, int n)
{
  struct zx_cdm_EXTVAL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EXTVAL = (struct zx_cdm_EXTVAL_s*)x->EXTVAL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_EXTVAL_s*)x->EXTVAL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EXTVAL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EXTVAL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_SOUND_GET_id) */
struct zx_str* zx_cdm_SOUND_GET_id(struct zx_cdm_SOUND_s* x) { return x->id; }
/* FUNC(zx_cdm_SOUND_PUT_id) */
void zx_cdm_SOUND_PUT_id(struct zx_cdm_SOUND_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_SOUND_GET_modificationTime) */
struct zx_str* zx_cdm_SOUND_GET_modificationTime(struct zx_cdm_SOUND_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_SOUND_PUT_modificationTime) */
void zx_cdm_SOUND_PUT_modificationTime(struct zx_cdm_SOUND_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_STREET_GET_group) */
struct zx_str* zx_cdm_STREET_GET_group(struct zx_cdm_STREET_s* x) { return x->group; }
/* FUNC(zx_cdm_STREET_PUT_group) */
void zx_cdm_STREET_PUT_group(struct zx_cdm_STREET_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_SUFFIX_GET_group) */
struct zx_str* zx_cdm_SUFFIX_GET_group(struct zx_cdm_SUFFIX_s* x) { return x->group; }
/* FUNC(zx_cdm_SUFFIX_PUT_group) */
void zx_cdm_SUFFIX_PUT_group(struct zx_cdm_SUFFIX_s* x, struct zx_str* y) { x->group = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_HOME) */

int zx_cdm_TEL_NUM_HOME(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->HOME; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_HOME) */

struct zx_elem_s* zx_cdm_TEL_GET_HOME(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->HOME; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_HOME) */

struct zx_elem_s* zx_cdm_TEL_POP_HOME(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->HOME;
  if (y)
    x->HOME = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_HOME) */

void zx_cdm_TEL_PUSH_HOME(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->HOME->g;
  x->HOME = z;
}

/* FUNC(zx_cdm_TEL_REV_HOME) */

void zx_cdm_TEL_REV_HOME(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->HOME;
  if (!y) return;
  x->HOME = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->HOME->g;
    x->HOME = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_HOME) */

void zx_cdm_TEL_PUT_HOME(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->HOME;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->HOME = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_HOME) */

void zx_cdm_TEL_ADD_HOME(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->HOME->g;
    x->HOME = z;
    return;
  case -1:
    y = x->HOME;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HOME; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_HOME) */

void zx_cdm_TEL_DEL_HOME(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->HOME = (struct zx_elem_s*)x->HOME->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->HOME;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HOME; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_WORK) */

int zx_cdm_TEL_NUM_WORK(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->WORK; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_WORK) */

struct zx_elem_s* zx_cdm_TEL_GET_WORK(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->WORK; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_WORK) */

struct zx_elem_s* zx_cdm_TEL_POP_WORK(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->WORK;
  if (y)
    x->WORK = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_WORK) */

void zx_cdm_TEL_PUSH_WORK(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->WORK->g;
  x->WORK = z;
}

/* FUNC(zx_cdm_TEL_REV_WORK) */

void zx_cdm_TEL_REV_WORK(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->WORK;
  if (!y) return;
  x->WORK = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->WORK->g;
    x->WORK = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_WORK) */

void zx_cdm_TEL_PUT_WORK(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->WORK;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->WORK = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_WORK) */

void zx_cdm_TEL_ADD_WORK(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->WORK->g;
    x->WORK = z;
    return;
  case -1:
    y = x->WORK;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WORK; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_WORK) */

void zx_cdm_TEL_DEL_WORK(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->WORK = (struct zx_elem_s*)x->WORK->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->WORK;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WORK; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_VOICE) */

int zx_cdm_TEL_NUM_VOICE(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VOICE; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_VOICE) */

struct zx_elem_s* zx_cdm_TEL_GET_VOICE(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VOICE; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_VOICE) */

struct zx_elem_s* zx_cdm_TEL_POP_VOICE(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VOICE;
  if (y)
    x->VOICE = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_VOICE) */

void zx_cdm_TEL_PUSH_VOICE(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VOICE->g;
  x->VOICE = z;
}

/* FUNC(zx_cdm_TEL_REV_VOICE) */

void zx_cdm_TEL_REV_VOICE(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VOICE;
  if (!y) return;
  x->VOICE = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VOICE->g;
    x->VOICE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_VOICE) */

void zx_cdm_TEL_PUT_VOICE(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VOICE;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VOICE = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_VOICE) */

void zx_cdm_TEL_ADD_VOICE(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VOICE->g;
    x->VOICE = z;
    return;
  case -1:
    y = x->VOICE;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VOICE; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_VOICE) */

void zx_cdm_TEL_DEL_VOICE(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VOICE = (struct zx_elem_s*)x->VOICE->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VOICE;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VOICE; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_FAX) */

int zx_cdm_TEL_NUM_FAX(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FAX; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_FAX) */

struct zx_elem_s* zx_cdm_TEL_GET_FAX(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->FAX; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_FAX) */

struct zx_elem_s* zx_cdm_TEL_POP_FAX(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->FAX;
  if (y)
    x->FAX = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_FAX) */

void zx_cdm_TEL_PUSH_FAX(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->FAX->g;
  x->FAX = z;
}

/* FUNC(zx_cdm_TEL_REV_FAX) */

void zx_cdm_TEL_REV_FAX(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->FAX;
  if (!y) return;
  x->FAX = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->FAX->g;
    x->FAX = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_FAX) */

void zx_cdm_TEL_PUT_FAX(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->FAX;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->FAX = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_FAX) */

void zx_cdm_TEL_ADD_FAX(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->FAX->g;
    x->FAX = z;
    return;
  case -1:
    y = x->FAX;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FAX; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_FAX) */

void zx_cdm_TEL_DEL_FAX(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FAX = (struct zx_elem_s*)x->FAX->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->FAX;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FAX; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_PAGER) */

int zx_cdm_TEL_NUM_PAGER(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PAGER; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_PAGER) */

struct zx_elem_s* zx_cdm_TEL_GET_PAGER(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PAGER; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_PAGER) */

struct zx_elem_s* zx_cdm_TEL_POP_PAGER(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PAGER;
  if (y)
    x->PAGER = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_PAGER) */

void zx_cdm_TEL_PUSH_PAGER(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PAGER->g;
  x->PAGER = z;
}

/* FUNC(zx_cdm_TEL_REV_PAGER) */

void zx_cdm_TEL_REV_PAGER(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PAGER;
  if (!y) return;
  x->PAGER = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PAGER->g;
    x->PAGER = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_PAGER) */

void zx_cdm_TEL_PUT_PAGER(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PAGER;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PAGER = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_PAGER) */

void zx_cdm_TEL_ADD_PAGER(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PAGER->g;
    x->PAGER = z;
    return;
  case -1:
    y = x->PAGER;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PAGER; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_PAGER) */

void zx_cdm_TEL_DEL_PAGER(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PAGER = (struct zx_elem_s*)x->PAGER->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PAGER;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PAGER; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_MSG) */

int zx_cdm_TEL_NUM_MSG(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MSG; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_MSG) */

struct zx_elem_s* zx_cdm_TEL_GET_MSG(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MSG; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_MSG) */

struct zx_elem_s* zx_cdm_TEL_POP_MSG(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MSG;
  if (y)
    x->MSG = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_MSG) */

void zx_cdm_TEL_PUSH_MSG(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MSG->g;
  x->MSG = z;
}

/* FUNC(zx_cdm_TEL_REV_MSG) */

void zx_cdm_TEL_REV_MSG(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MSG;
  if (!y) return;
  x->MSG = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MSG->g;
    x->MSG = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_MSG) */

void zx_cdm_TEL_PUT_MSG(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MSG;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MSG = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_MSG) */

void zx_cdm_TEL_ADD_MSG(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MSG->g;
    x->MSG = z;
    return;
  case -1:
    y = x->MSG;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MSG; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_MSG) */

void zx_cdm_TEL_DEL_MSG(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MSG = (struct zx_elem_s*)x->MSG->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MSG;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MSG; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_CELL) */

int zx_cdm_TEL_NUM_CELL(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CELL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_CELL) */

struct zx_elem_s* zx_cdm_TEL_GET_CELL(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CELL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_CELL) */

struct zx_elem_s* zx_cdm_TEL_POP_CELL(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CELL;
  if (y)
    x->CELL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_CELL) */

void zx_cdm_TEL_PUSH_CELL(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CELL->g;
  x->CELL = z;
}

/* FUNC(zx_cdm_TEL_REV_CELL) */

void zx_cdm_TEL_REV_CELL(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CELL;
  if (!y) return;
  x->CELL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CELL->g;
    x->CELL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_CELL) */

void zx_cdm_TEL_PUT_CELL(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CELL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CELL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_CELL) */

void zx_cdm_TEL_ADD_CELL(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CELL->g;
    x->CELL = z;
    return;
  case -1:
    y = x->CELL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CELL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_CELL) */

void zx_cdm_TEL_DEL_CELL(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CELL = (struct zx_elem_s*)x->CELL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CELL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CELL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_VIDEO) */

int zx_cdm_TEL_NUM_VIDEO(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VIDEO; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_VIDEO) */

struct zx_elem_s* zx_cdm_TEL_GET_VIDEO(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VIDEO; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_VIDEO) */

struct zx_elem_s* zx_cdm_TEL_POP_VIDEO(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VIDEO;
  if (y)
    x->VIDEO = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_VIDEO) */

void zx_cdm_TEL_PUSH_VIDEO(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VIDEO->g;
  x->VIDEO = z;
}

/* FUNC(zx_cdm_TEL_REV_VIDEO) */

void zx_cdm_TEL_REV_VIDEO(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VIDEO;
  if (!y) return;
  x->VIDEO = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VIDEO->g;
    x->VIDEO = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_VIDEO) */

void zx_cdm_TEL_PUT_VIDEO(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VIDEO;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VIDEO = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_VIDEO) */

void zx_cdm_TEL_ADD_VIDEO(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VIDEO->g;
    x->VIDEO = z;
    return;
  case -1:
    y = x->VIDEO;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VIDEO; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_VIDEO) */

void zx_cdm_TEL_DEL_VIDEO(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VIDEO = (struct zx_elem_s*)x->VIDEO->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VIDEO;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VIDEO; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_BBS) */

int zx_cdm_TEL_NUM_BBS(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BBS; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_BBS) */

struct zx_elem_s* zx_cdm_TEL_GET_BBS(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->BBS; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_BBS) */

struct zx_elem_s* zx_cdm_TEL_POP_BBS(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->BBS;
  if (y)
    x->BBS = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_BBS) */

void zx_cdm_TEL_PUSH_BBS(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->BBS->g;
  x->BBS = z;
}

/* FUNC(zx_cdm_TEL_REV_BBS) */

void zx_cdm_TEL_REV_BBS(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->BBS;
  if (!y) return;
  x->BBS = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->BBS->g;
    x->BBS = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_BBS) */

void zx_cdm_TEL_PUT_BBS(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->BBS;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->BBS = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_BBS) */

void zx_cdm_TEL_ADD_BBS(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->BBS->g;
    x->BBS = z;
    return;
  case -1:
    y = x->BBS;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->BBS; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_BBS) */

void zx_cdm_TEL_DEL_BBS(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BBS = (struct zx_elem_s*)x->BBS->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->BBS;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->BBS; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_MODEM) */

int zx_cdm_TEL_NUM_MODEM(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MODEM; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_MODEM) */

struct zx_elem_s* zx_cdm_TEL_GET_MODEM(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MODEM; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_MODEM) */

struct zx_elem_s* zx_cdm_TEL_POP_MODEM(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MODEM;
  if (y)
    x->MODEM = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_MODEM) */

void zx_cdm_TEL_PUSH_MODEM(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MODEM->g;
  x->MODEM = z;
}

/* FUNC(zx_cdm_TEL_REV_MODEM) */

void zx_cdm_TEL_REV_MODEM(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MODEM;
  if (!y) return;
  x->MODEM = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MODEM->g;
    x->MODEM = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_MODEM) */

void zx_cdm_TEL_PUT_MODEM(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MODEM;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MODEM = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_MODEM) */

void zx_cdm_TEL_ADD_MODEM(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MODEM->g;
    x->MODEM = z;
    return;
  case -1:
    y = x->MODEM;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MODEM; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_MODEM) */

void zx_cdm_TEL_DEL_MODEM(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MODEM = (struct zx_elem_s*)x->MODEM->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MODEM;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MODEM; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_ISDN) */

int zx_cdm_TEL_NUM_ISDN(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ISDN; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_ISDN) */

struct zx_elem_s* zx_cdm_TEL_GET_ISDN(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ISDN; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_ISDN) */

struct zx_elem_s* zx_cdm_TEL_POP_ISDN(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ISDN;
  if (y)
    x->ISDN = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_ISDN) */

void zx_cdm_TEL_PUSH_ISDN(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ISDN->g;
  x->ISDN = z;
}

/* FUNC(zx_cdm_TEL_REV_ISDN) */

void zx_cdm_TEL_REV_ISDN(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ISDN;
  if (!y) return;
  x->ISDN = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ISDN->g;
    x->ISDN = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_ISDN) */

void zx_cdm_TEL_PUT_ISDN(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ISDN;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ISDN = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_ISDN) */

void zx_cdm_TEL_ADD_ISDN(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ISDN->g;
    x->ISDN = z;
    return;
  case -1:
    y = x->ISDN;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ISDN; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_ISDN) */

void zx_cdm_TEL_DEL_ISDN(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ISDN = (struct zx_elem_s*)x->ISDN->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ISDN;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ISDN; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_PCS) */

int zx_cdm_TEL_NUM_PCS(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PCS; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_PCS) */

struct zx_elem_s* zx_cdm_TEL_GET_PCS(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PCS; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_PCS) */

struct zx_elem_s* zx_cdm_TEL_POP_PCS(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PCS;
  if (y)
    x->PCS = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_PCS) */

void zx_cdm_TEL_PUSH_PCS(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PCS->g;
  x->PCS = z;
}

/* FUNC(zx_cdm_TEL_REV_PCS) */

void zx_cdm_TEL_REV_PCS(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PCS;
  if (!y) return;
  x->PCS = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PCS->g;
    x->PCS = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_PCS) */

void zx_cdm_TEL_PUT_PCS(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PCS;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PCS = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_PCS) */

void zx_cdm_TEL_ADD_PCS(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PCS->g;
    x->PCS = z;
    return;
  case -1:
    y = x->PCS;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PCS; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_PCS) */

void zx_cdm_TEL_DEL_PCS(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PCS = (struct zx_elem_s*)x->PCS->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PCS;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PCS; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_PREF) */

int zx_cdm_TEL_NUM_PREF(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PREF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_PREF) */

struct zx_elem_s* zx_cdm_TEL_GET_PREF(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PREF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_PREF) */

struct zx_elem_s* zx_cdm_TEL_POP_PREF(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PREF;
  if (y)
    x->PREF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_PREF) */

void zx_cdm_TEL_PUSH_PREF(struct zx_cdm_TEL_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PREF->g;
  x->PREF = z;
}

/* FUNC(zx_cdm_TEL_REV_PREF) */

void zx_cdm_TEL_REV_PREF(struct zx_cdm_TEL_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PREF;
  if (!y) return;
  x->PREF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PREF->g;
    x->PREF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_PREF) */

void zx_cdm_TEL_PUT_PREF(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PREF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PREF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_PREF) */

void zx_cdm_TEL_ADD_PREF(struct zx_cdm_TEL_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PREF->g;
    x->PREF = z;
    return;
  case -1:
    y = x->PREF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_TEL_DEL_PREF) */

void zx_cdm_TEL_DEL_PREF(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PREF = (struct zx_elem_s*)x->PREF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PREF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PREF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_TEL_NUM_NUMBER) */

int zx_cdm_TEL_NUM_NUMBER(struct zx_cdm_TEL_s* x)
{
  struct zx_cdm_NUMBER_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NUMBER; y; ++n, y = (struct zx_cdm_NUMBER_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_TEL_GET_NUMBER) */

struct zx_cdm_NUMBER_s* zx_cdm_TEL_GET_NUMBER(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_cdm_NUMBER_s* y;
  if (!x) return 0;
  for (y = x->NUMBER; n>=0 && y; --n, y = (struct zx_cdm_NUMBER_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_TEL_POP_NUMBER) */

struct zx_cdm_NUMBER_s* zx_cdm_TEL_POP_NUMBER(struct zx_cdm_TEL_s* x)
{
  struct zx_cdm_NUMBER_s* y;
  if (!x) return 0;
  y = x->NUMBER;
  if (y)
    x->NUMBER = (struct zx_cdm_NUMBER_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_TEL_PUSH_NUMBER) */

void zx_cdm_TEL_PUSH_NUMBER(struct zx_cdm_TEL_s* x, struct zx_cdm_NUMBER_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NUMBER->gg.g;
  x->NUMBER = z;
}

/* FUNC(zx_cdm_TEL_REV_NUMBER) */

void zx_cdm_TEL_REV_NUMBER(struct zx_cdm_TEL_s* x)
{
  struct zx_cdm_NUMBER_s* nxt;
  struct zx_cdm_NUMBER_s* y;
  if (!x) return;
  y = x->NUMBER;
  if (!y) return;
  x->NUMBER = 0;
  while (y) {
    nxt = (struct zx_cdm_NUMBER_s*)y->gg.g.n;
    y->gg.g.n = &x->NUMBER->gg.g;
    x->NUMBER = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_TEL_PUT_NUMBER) */

void zx_cdm_TEL_PUT_NUMBER(struct zx_cdm_TEL_s* x, int n, struct zx_cdm_NUMBER_s* z)
{
  struct zx_cdm_NUMBER_s* y;
  if (!x || !z) return;
  y = x->NUMBER;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NUMBER = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_NUMBER_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_TEL_ADD_NUMBER) */

void zx_cdm_TEL_ADD_NUMBER(struct zx_cdm_TEL_s* x, int n, struct zx_cdm_NUMBER_s* z)
{
  struct zx_cdm_NUMBER_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NUMBER->gg.g;
    x->NUMBER = z;
    return;
  case -1:
    y = x->NUMBER;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_NUMBER_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NUMBER; n > 1 && y; --n, y = (struct zx_cdm_NUMBER_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_TEL_DEL_NUMBER) */

void zx_cdm_TEL_DEL_NUMBER(struct zx_cdm_TEL_s* x, int n)
{
  struct zx_cdm_NUMBER_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NUMBER = (struct zx_cdm_NUMBER_s*)x->NUMBER->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_NUMBER_s*)x->NUMBER;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_NUMBER_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NUMBER; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_NUMBER_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_TEL_GET_id) */
struct zx_str* zx_cdm_TEL_GET_id(struct zx_cdm_TEL_s* x) { return x->id; }
/* FUNC(zx_cdm_TEL_PUT_id) */
void zx_cdm_TEL_PUT_id(struct zx_cdm_TEL_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_TEL_GET_modificationTime) */
struct zx_str* zx_cdm_TEL_GET_modificationTime(struct zx_cdm_TEL_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_TEL_PUT_modificationTime) */
void zx_cdm_TEL_PUT_modificationTime(struct zx_cdm_TEL_s* x, struct zx_str* y) { x->modificationTime = y; }





/* FUNC(zx_cdm_TITLE_GET_group) */
struct zx_str* zx_cdm_TITLE_GET_group(struct zx_cdm_TITLE_s* x) { return x->group; }
/* FUNC(zx_cdm_TITLE_PUT_group) */
void zx_cdm_TITLE_PUT_group(struct zx_cdm_TITLE_s* x, struct zx_str* y) { x->group = y; }





/* FUNC(zx_cdm_TYPE_GET_id) */
struct zx_str* zx_cdm_TYPE_GET_id(struct zx_cdm_TYPE_s* x) { return x->id; }
/* FUNC(zx_cdm_TYPE_PUT_id) */
void zx_cdm_TYPE_PUT_id(struct zx_cdm_TYPE_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_TYPE_GET_modificationTime) */
struct zx_str* zx_cdm_TYPE_GET_modificationTime(struct zx_cdm_TYPE_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_TYPE_PUT_modificationTime) */
void zx_cdm_TYPE_PUT_modificationTime(struct zx_cdm_TYPE_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_TYPE_GET_ACC) */
struct zx_str* zx_cdm_TYPE_GET_ACC(struct zx_cdm_TYPE_s* x) { return x->ACC; }
/* FUNC(zx_cdm_TYPE_PUT_ACC) */
void zx_cdm_TYPE_PUT_ACC(struct zx_cdm_TYPE_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_TYPE_GET_ACCTime) */
struct zx_str* zx_cdm_TYPE_GET_ACCTime(struct zx_cdm_TYPE_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_TYPE_PUT_ACCTime) */
void zx_cdm_TYPE_PUT_ACCTime(struct zx_cdm_TYPE_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_TYPE_GET_modifier) */
struct zx_str* zx_cdm_TYPE_GET_modifier(struct zx_cdm_TYPE_s* x) { return x->modifier; }
/* FUNC(zx_cdm_TYPE_PUT_modifier) */
void zx_cdm_TYPE_PUT_modifier(struct zx_cdm_TYPE_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_TZ_GET_id) */
struct zx_str* zx_cdm_TZ_GET_id(struct zx_cdm_TZ_s* x) { return x->id; }
/* FUNC(zx_cdm_TZ_PUT_id) */
void zx_cdm_TZ_PUT_id(struct zx_cdm_TZ_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_TZ_GET_modificationTime) */
struct zx_str* zx_cdm_TZ_GET_modificationTime(struct zx_cdm_TZ_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_TZ_PUT_modificationTime) */
void zx_cdm_TZ_PUT_modificationTime(struct zx_cdm_TZ_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_TZ_GET_ACC) */
struct zx_str* zx_cdm_TZ_GET_ACC(struct zx_cdm_TZ_s* x) { return x->ACC; }
/* FUNC(zx_cdm_TZ_PUT_ACC) */
void zx_cdm_TZ_PUT_ACC(struct zx_cdm_TZ_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_TZ_GET_ACCTime) */
struct zx_str* zx_cdm_TZ_GET_ACCTime(struct zx_cdm_TZ_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_TZ_PUT_ACCTime) */
void zx_cdm_TZ_PUT_ACCTime(struct zx_cdm_TZ_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_TZ_GET_modifier) */
struct zx_str* zx_cdm_TZ_GET_modifier(struct zx_cdm_TZ_s* x) { return x->modifier; }
/* FUNC(zx_cdm_TZ_PUT_modifier) */
void zx_cdm_TZ_PUT_modifier(struct zx_cdm_TZ_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_UID_GET_id) */
struct zx_str* zx_cdm_UID_GET_id(struct zx_cdm_UID_s* x) { return x->id; }
/* FUNC(zx_cdm_UID_PUT_id) */
void zx_cdm_UID_PUT_id(struct zx_cdm_UID_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_UID_GET_modificationTime) */
struct zx_str* zx_cdm_UID_GET_modificationTime(struct zx_cdm_UID_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_UID_PUT_modificationTime) */
void zx_cdm_UID_PUT_modificationTime(struct zx_cdm_UID_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_UID_GET_ACC) */
struct zx_str* zx_cdm_UID_GET_ACC(struct zx_cdm_UID_s* x) { return x->ACC; }
/* FUNC(zx_cdm_UID_PUT_ACC) */
void zx_cdm_UID_PUT_ACC(struct zx_cdm_UID_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_UID_GET_ACCTime) */
struct zx_str* zx_cdm_UID_GET_ACCTime(struct zx_cdm_UID_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_UID_PUT_ACCTime) */
void zx_cdm_UID_PUT_ACCTime(struct zx_cdm_UID_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_UID_GET_modifier) */
struct zx_str* zx_cdm_UID_GET_modifier(struct zx_cdm_UID_s* x) { return x->modifier; }
/* FUNC(zx_cdm_UID_PUT_modifier) */
void zx_cdm_UID_PUT_modifier(struct zx_cdm_UID_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_URI_GET_id) */
struct zx_str* zx_cdm_URI_GET_id(struct zx_cdm_URI_s* x) { return x->id; }
/* FUNC(zx_cdm_URI_PUT_id) */
void zx_cdm_URI_PUT_id(struct zx_cdm_URI_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_URI_GET_modificationTime) */
struct zx_str* zx_cdm_URI_GET_modificationTime(struct zx_cdm_URI_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_URI_PUT_modificationTime) */
void zx_cdm_URI_PUT_modificationTime(struct zx_cdm_URI_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_URI_GET_ACC) */
struct zx_str* zx_cdm_URI_GET_ACC(struct zx_cdm_URI_s* x) { return x->ACC; }
/* FUNC(zx_cdm_URI_PUT_ACC) */
void zx_cdm_URI_PUT_ACC(struct zx_cdm_URI_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_URI_GET_ACCTime) */
struct zx_str* zx_cdm_URI_GET_ACCTime(struct zx_cdm_URI_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_URI_PUT_ACCTime) */
void zx_cdm_URI_PUT_ACCTime(struct zx_cdm_URI_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_URI_GET_modifier) */
struct zx_str* zx_cdm_URI_GET_modifier(struct zx_cdm_URI_s* x) { return x->modifier; }
/* FUNC(zx_cdm_URI_PUT_modifier) */
void zx_cdm_URI_PUT_modifier(struct zx_cdm_URI_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_URL_GET_id) */
struct zx_str* zx_cdm_URL_GET_id(struct zx_cdm_URL_s* x) { return x->id; }
/* FUNC(zx_cdm_URL_PUT_id) */
void zx_cdm_URL_PUT_id(struct zx_cdm_URL_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_URL_GET_modificationTime) */
struct zx_str* zx_cdm_URL_GET_modificationTime(struct zx_cdm_URL_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_URL_PUT_modificationTime) */
void zx_cdm_URL_PUT_modificationTime(struct zx_cdm_URL_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_URL_GET_ACC) */
struct zx_str* zx_cdm_URL_GET_ACC(struct zx_cdm_URL_s* x) { return x->ACC; }
/* FUNC(zx_cdm_URL_PUT_ACC) */
void zx_cdm_URL_PUT_ACC(struct zx_cdm_URL_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_URL_GET_ACCTime) */
struct zx_str* zx_cdm_URL_GET_ACCTime(struct zx_cdm_URL_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_URL_PUT_ACCTime) */
void zx_cdm_URL_PUT_ACCTime(struct zx_cdm_URL_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_URL_GET_modifier) */
struct zx_str* zx_cdm_URL_GET_modifier(struct zx_cdm_URL_s* x) { return x->modifier; }
/* FUNC(zx_cdm_URL_PUT_modifier) */
void zx_cdm_URL_PUT_modifier(struct zx_cdm_URL_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_USERID_GET_id) */
struct zx_str* zx_cdm_USERID_GET_id(struct zx_cdm_USERID_s* x) { return x->id; }
/* FUNC(zx_cdm_USERID_PUT_id) */
void zx_cdm_USERID_PUT_id(struct zx_cdm_USERID_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_USERID_GET_modificationTime) */
struct zx_str* zx_cdm_USERID_GET_modificationTime(struct zx_cdm_USERID_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_USERID_PUT_modificationTime) */
void zx_cdm_USERID_PUT_modificationTime(struct zx_cdm_USERID_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_USERID_GET_ACC) */
struct zx_str* zx_cdm_USERID_GET_ACC(struct zx_cdm_USERID_s* x) { return x->ACC; }
/* FUNC(zx_cdm_USERID_PUT_ACC) */
void zx_cdm_USERID_PUT_ACC(struct zx_cdm_USERID_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_USERID_GET_ACCTime) */
struct zx_str* zx_cdm_USERID_GET_ACCTime(struct zx_cdm_USERID_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_USERID_PUT_ACCTime) */
void zx_cdm_USERID_PUT_ACCTime(struct zx_cdm_USERID_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_USERID_GET_modifier) */
struct zx_str* zx_cdm_USERID_GET_modifier(struct zx_cdm_USERID_s* x) { return x->modifier; }
/* FUNC(zx_cdm_USERID_PUT_modifier) */
void zx_cdm_USERID_PUT_modifier(struct zx_cdm_USERID_s* x, struct zx_str* y) { x->modifier = y; }





/* FUNC(zx_cdm_VERSION_GET_id) */
struct zx_str* zx_cdm_VERSION_GET_id(struct zx_cdm_VERSION_s* x) { return x->id; }
/* FUNC(zx_cdm_VERSION_PUT_id) */
void zx_cdm_VERSION_PUT_id(struct zx_cdm_VERSION_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_VERSION_GET_modificationTime) */
struct zx_str* zx_cdm_VERSION_GET_modificationTime(struct zx_cdm_VERSION_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_VERSION_PUT_modificationTime) */
void zx_cdm_VERSION_PUT_modificationTime(struct zx_cdm_VERSION_s* x, struct zx_str* y) { x->modificationTime = y; }
/* FUNC(zx_cdm_VERSION_GET_ACC) */
struct zx_str* zx_cdm_VERSION_GET_ACC(struct zx_cdm_VERSION_s* x) { return x->ACC; }
/* FUNC(zx_cdm_VERSION_PUT_ACC) */
void zx_cdm_VERSION_PUT_ACC(struct zx_cdm_VERSION_s* x, struct zx_str* y) { x->ACC = y; }
/* FUNC(zx_cdm_VERSION_GET_ACCTime) */
struct zx_str* zx_cdm_VERSION_GET_ACCTime(struct zx_cdm_VERSION_s* x) { return x->ACCTime; }
/* FUNC(zx_cdm_VERSION_PUT_ACCTime) */
void zx_cdm_VERSION_PUT_ACCTime(struct zx_cdm_VERSION_s* x, struct zx_str* y) { x->ACCTime = y; }
/* FUNC(zx_cdm_VERSION_GET_modifier) */
struct zx_str* zx_cdm_VERSION_GET_modifier(struct zx_cdm_VERSION_s* x) { return x->modifier; }
/* FUNC(zx_cdm_VERSION_PUT_modifier) */
void zx_cdm_VERSION_PUT_modifier(struct zx_cdm_VERSION_s* x, struct zx_str* y) { x->modifier = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_VERSION_is_Perl_MakeMaker_gobbled) */

int zx_cdm_vCard_NUM_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_VERSION_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VERSION_is_Perl_MakeMaker_gobbled; y; ++n, y = (struct zx_cdm_VERSION_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_VERSION_is_Perl_MakeMaker_gobbled) */

struct zx_cdm_VERSION_s* zx_cdm_vCard_GET_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_VERSION_s* y;
  if (!x) return 0;
  for (y = x->VERSION_is_Perl_MakeMaker_gobbled; n>=0 && y; --n, y = (struct zx_cdm_VERSION_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_VERSION_is_Perl_MakeMaker_gobbled) */

struct zx_cdm_VERSION_s* zx_cdm_vCard_POP_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_VERSION_s* y;
  if (!x) return 0;
  y = x->VERSION_is_Perl_MakeMaker_gobbled;
  if (y)
    x->VERSION_is_Perl_MakeMaker_gobbled = (struct zx_cdm_VERSION_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_VERSION_is_Perl_MakeMaker_gobbled) */

void zx_cdm_vCard_PUSH_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, struct zx_cdm_VERSION_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->VERSION_is_Perl_MakeMaker_gobbled->gg.g;
  x->VERSION_is_Perl_MakeMaker_gobbled = z;
}

/* FUNC(zx_cdm_vCard_REV_VERSION_is_Perl_MakeMaker_gobbled) */

void zx_cdm_vCard_REV_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_VERSION_s* nxt;
  struct zx_cdm_VERSION_s* y;
  if (!x) return;
  y = x->VERSION_is_Perl_MakeMaker_gobbled;
  if (!y) return;
  x->VERSION_is_Perl_MakeMaker_gobbled = 0;
  while (y) {
    nxt = (struct zx_cdm_VERSION_s*)y->gg.g.n;
    y->gg.g.n = &x->VERSION_is_Perl_MakeMaker_gobbled->gg.g;
    x->VERSION_is_Perl_MakeMaker_gobbled = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_VERSION_is_Perl_MakeMaker_gobbled) */

void zx_cdm_vCard_PUT_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_VERSION_s* z)
{
  struct zx_cdm_VERSION_s* y;
  if (!x || !z) return;
  y = x->VERSION_is_Perl_MakeMaker_gobbled;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->VERSION_is_Perl_MakeMaker_gobbled = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_VERSION_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_VERSION_is_Perl_MakeMaker_gobbled) */

void zx_cdm_vCard_ADD_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_VERSION_s* z)
{
  struct zx_cdm_VERSION_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->VERSION_is_Perl_MakeMaker_gobbled->gg.g;
    x->VERSION_is_Perl_MakeMaker_gobbled = z;
    return;
  case -1:
    y = x->VERSION_is_Perl_MakeMaker_gobbled;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_VERSION_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->VERSION_is_Perl_MakeMaker_gobbled; n > 1 && y; --n, y = (struct zx_cdm_VERSION_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_VERSION_is_Perl_MakeMaker_gobbled) */

void zx_cdm_vCard_DEL_VERSION_is_Perl_MakeMaker_gobbled(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_VERSION_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VERSION_is_Perl_MakeMaker_gobbled = (struct zx_cdm_VERSION_s*)x->VERSION_is_Perl_MakeMaker_gobbled->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_VERSION_s*)x->VERSION_is_Perl_MakeMaker_gobbled;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_VERSION_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->VERSION_is_Perl_MakeMaker_gobbled; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_VERSION_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_CARDID) */

int zx_cdm_vCard_NUM_CARDID(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CARDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_CARDID) */

struct zx_elem_s* zx_cdm_vCard_GET_CARDID(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CARDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_CARDID) */

struct zx_elem_s* zx_cdm_vCard_POP_CARDID(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CARDID;
  if (y)
    x->CARDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_CARDID) */

void zx_cdm_vCard_PUSH_CARDID(struct zx_cdm_vCard_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CARDID->g;
  x->CARDID = z;
}

/* FUNC(zx_cdm_vCard_REV_CARDID) */

void zx_cdm_vCard_REV_CARDID(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CARDID;
  if (!y) return;
  x->CARDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CARDID->g;
    x->CARDID = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_CARDID) */

void zx_cdm_vCard_PUT_CARDID(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CARDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CARDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_CARDID) */

void zx_cdm_vCard_ADD_CARDID(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CARDID->g;
    x->CARDID = z;
    return;
  case -1:
    y = x->CARDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CARDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_vCard_DEL_CARDID) */

void zx_cdm_vCard_DEL_CARDID(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CARDID = (struct zx_elem_s*)x->CARDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CARDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CARDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_DISTRIBUTIONLIST) */

int zx_cdm_vCard_NUM_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DISTRIBUTIONLIST; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_DISTRIBUTIONLIST) */

struct zx_elem_s* zx_cdm_vCard_GET_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DISTRIBUTIONLIST; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_DISTRIBUTIONLIST) */

struct zx_elem_s* zx_cdm_vCard_POP_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DISTRIBUTIONLIST;
  if (y)
    x->DISTRIBUTIONLIST = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_DISTRIBUTIONLIST) */

void zx_cdm_vCard_PUSH_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DISTRIBUTIONLIST->g;
  x->DISTRIBUTIONLIST = z;
}

/* FUNC(zx_cdm_vCard_REV_DISTRIBUTIONLIST) */

void zx_cdm_vCard_REV_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DISTRIBUTIONLIST;
  if (!y) return;
  x->DISTRIBUTIONLIST = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DISTRIBUTIONLIST->g;
    x->DISTRIBUTIONLIST = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_DISTRIBUTIONLIST) */

void zx_cdm_vCard_PUT_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DISTRIBUTIONLIST;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DISTRIBUTIONLIST = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_DISTRIBUTIONLIST) */

void zx_cdm_vCard_ADD_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DISTRIBUTIONLIST->g;
    x->DISTRIBUTIONLIST = z;
    return;
  case -1:
    y = x->DISTRIBUTIONLIST;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DISTRIBUTIONLIST; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_vCard_DEL_DISTRIBUTIONLIST) */

void zx_cdm_vCard_DEL_DISTRIBUTIONLIST(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DISTRIBUTIONLIST = (struct zx_elem_s*)x->DISTRIBUTIONLIST->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DISTRIBUTIONLIST;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DISTRIBUTIONLIST; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_SELF) */

int zx_cdm_vCard_NUM_SELF(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SELF; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_SELF) */

struct zx_elem_s* zx_cdm_vCard_GET_SELF(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SELF; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_SELF) */

struct zx_elem_s* zx_cdm_vCard_POP_SELF(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SELF;
  if (y)
    x->SELF = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_SELF) */

void zx_cdm_vCard_PUSH_SELF(struct zx_cdm_vCard_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SELF->g;
  x->SELF = z;
}

/* FUNC(zx_cdm_vCard_REV_SELF) */

void zx_cdm_vCard_REV_SELF(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SELF;
  if (!y) return;
  x->SELF = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SELF->g;
    x->SELF = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_SELF) */

void zx_cdm_vCard_PUT_SELF(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SELF;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SELF = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_SELF) */

void zx_cdm_vCard_ADD_SELF(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SELF->g;
    x->SELF = z;
    return;
  case -1:
    y = x->SELF;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SELF; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_vCard_DEL_SELF) */

void zx_cdm_vCard_DEL_SELF(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SELF = (struct zx_elem_s*)x->SELF->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SELF;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SELF; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_FAVORITE) */

int zx_cdm_vCard_NUM_FAVORITE(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FAVORITE; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_FAVORITE) */

struct zx_elem_s* zx_cdm_vCard_GET_FAVORITE(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->FAVORITE; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_FAVORITE) */

struct zx_elem_s* zx_cdm_vCard_POP_FAVORITE(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->FAVORITE;
  if (y)
    x->FAVORITE = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_FAVORITE) */

void zx_cdm_vCard_PUSH_FAVORITE(struct zx_cdm_vCard_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->FAVORITE->g;
  x->FAVORITE = z;
}

/* FUNC(zx_cdm_vCard_REV_FAVORITE) */

void zx_cdm_vCard_REV_FAVORITE(struct zx_cdm_vCard_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->FAVORITE;
  if (!y) return;
  x->FAVORITE = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->FAVORITE->g;
    x->FAVORITE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_FAVORITE) */

void zx_cdm_vCard_PUT_FAVORITE(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->FAVORITE;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->FAVORITE = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_FAVORITE) */

void zx_cdm_vCard_ADD_FAVORITE(struct zx_cdm_vCard_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->FAVORITE->g;
    x->FAVORITE = z;
    return;
  case -1:
    y = x->FAVORITE;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FAVORITE; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_cdm_vCard_DEL_FAVORITE) */

void zx_cdm_vCard_DEL_FAVORITE(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FAVORITE = (struct zx_elem_s*)x->FAVORITE->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->FAVORITE;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->FAVORITE; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_FN) */

int zx_cdm_vCard_NUM_FN(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_FN_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FN; y; ++n, y = (struct zx_cdm_FN_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_FN) */

struct zx_cdm_FN_s* zx_cdm_vCard_GET_FN(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_FN_s* y;
  if (!x) return 0;
  for (y = x->FN; n>=0 && y; --n, y = (struct zx_cdm_FN_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_FN) */

struct zx_cdm_FN_s* zx_cdm_vCard_POP_FN(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_FN_s* y;
  if (!x) return 0;
  y = x->FN;
  if (y)
    x->FN = (struct zx_cdm_FN_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_FN) */

void zx_cdm_vCard_PUSH_FN(struct zx_cdm_vCard_s* x, struct zx_cdm_FN_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FN->gg.g;
  x->FN = z;
}

/* FUNC(zx_cdm_vCard_REV_FN) */

void zx_cdm_vCard_REV_FN(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_FN_s* nxt;
  struct zx_cdm_FN_s* y;
  if (!x) return;
  y = x->FN;
  if (!y) return;
  x->FN = 0;
  while (y) {
    nxt = (struct zx_cdm_FN_s*)y->gg.g.n;
    y->gg.g.n = &x->FN->gg.g;
    x->FN = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_FN) */

void zx_cdm_vCard_PUT_FN(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_FN_s* z)
{
  struct zx_cdm_FN_s* y;
  if (!x || !z) return;
  y = x->FN;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FN = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_FN_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_FN) */

void zx_cdm_vCard_ADD_FN(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_FN_s* z)
{
  struct zx_cdm_FN_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->FN->gg.g;
    x->FN = z;
    return;
  case -1:
    y = x->FN;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_FN_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FN; n > 1 && y; --n, y = (struct zx_cdm_FN_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_FN) */

void zx_cdm_vCard_DEL_FN(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_FN_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FN = (struct zx_cdm_FN_s*)x->FN->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_FN_s*)x->FN;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_FN_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FN; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_FN_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_N) */

int zx_cdm_vCard_NUM_N(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_N_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->N; y; ++n, y = (struct zx_cdm_N_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_N) */

struct zx_cdm_N_s* zx_cdm_vCard_GET_N(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_N_s* y;
  if (!x) return 0;
  for (y = x->N; n>=0 && y; --n, y = (struct zx_cdm_N_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_N) */

struct zx_cdm_N_s* zx_cdm_vCard_POP_N(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_N_s* y;
  if (!x) return 0;
  y = x->N;
  if (y)
    x->N = (struct zx_cdm_N_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_N) */

void zx_cdm_vCard_PUSH_N(struct zx_cdm_vCard_s* x, struct zx_cdm_N_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->N->gg.g;
  x->N = z;
}

/* FUNC(zx_cdm_vCard_REV_N) */

void zx_cdm_vCard_REV_N(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_N_s* nxt;
  struct zx_cdm_N_s* y;
  if (!x) return;
  y = x->N;
  if (!y) return;
  x->N = 0;
  while (y) {
    nxt = (struct zx_cdm_N_s*)y->gg.g.n;
    y->gg.g.n = &x->N->gg.g;
    x->N = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_N) */

void zx_cdm_vCard_PUT_N(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_N_s* z)
{
  struct zx_cdm_N_s* y;
  if (!x || !z) return;
  y = x->N;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->N = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_N_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_N) */

void zx_cdm_vCard_ADD_N(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_N_s* z)
{
  struct zx_cdm_N_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->N->gg.g;
    x->N = z;
    return;
  case -1:
    y = x->N;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_N_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->N; n > 1 && y; --n, y = (struct zx_cdm_N_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_N) */

void zx_cdm_vCard_DEL_N(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_N_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->N = (struct zx_cdm_N_s*)x->N->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_N_s*)x->N;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_N_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->N; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_N_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_LISTMEMBER) */

int zx_cdm_vCard_NUM_LISTMEMBER(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LISTMEMBER_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LISTMEMBER; y; ++n, y = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_LISTMEMBER) */

struct zx_cdm_LISTMEMBER_s* zx_cdm_vCard_GET_LISTMEMBER(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_LISTMEMBER_s* y;
  if (!x) return 0;
  for (y = x->LISTMEMBER; n>=0 && y; --n, y = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_LISTMEMBER) */

struct zx_cdm_LISTMEMBER_s* zx_cdm_vCard_POP_LISTMEMBER(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LISTMEMBER_s* y;
  if (!x) return 0;
  y = x->LISTMEMBER;
  if (y)
    x->LISTMEMBER = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_LISTMEMBER) */

void zx_cdm_vCard_PUSH_LISTMEMBER(struct zx_cdm_vCard_s* x, struct zx_cdm_LISTMEMBER_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LISTMEMBER->gg.g;
  x->LISTMEMBER = z;
}

/* FUNC(zx_cdm_vCard_REV_LISTMEMBER) */

void zx_cdm_vCard_REV_LISTMEMBER(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LISTMEMBER_s* nxt;
  struct zx_cdm_LISTMEMBER_s* y;
  if (!x) return;
  y = x->LISTMEMBER;
  if (!y) return;
  x->LISTMEMBER = 0;
  while (y) {
    nxt = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n;
    y->gg.g.n = &x->LISTMEMBER->gg.g;
    x->LISTMEMBER = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_LISTMEMBER) */

void zx_cdm_vCard_PUT_LISTMEMBER(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LISTMEMBER_s* z)
{
  struct zx_cdm_LISTMEMBER_s* y;
  if (!x || !z) return;
  y = x->LISTMEMBER;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LISTMEMBER = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_LISTMEMBER) */

void zx_cdm_vCard_ADD_LISTMEMBER(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LISTMEMBER_s* z)
{
  struct zx_cdm_LISTMEMBER_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LISTMEMBER->gg.g;
    x->LISTMEMBER = z;
    return;
  case -1:
    y = x->LISTMEMBER;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LISTMEMBER; n > 1 && y; --n, y = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_LISTMEMBER) */

void zx_cdm_vCard_DEL_LISTMEMBER(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_LISTMEMBER_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LISTMEMBER = (struct zx_cdm_LISTMEMBER_s*)x->LISTMEMBER->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_LISTMEMBER_s*)x->LISTMEMBER;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LISTMEMBER; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LISTMEMBER_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_NICKNAME) */

int zx_cdm_vCard_NUM_NICKNAME(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_NICKNAME_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NICKNAME; y; ++n, y = (struct zx_cdm_NICKNAME_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_NICKNAME) */

struct zx_cdm_NICKNAME_s* zx_cdm_vCard_GET_NICKNAME(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_NICKNAME_s* y;
  if (!x) return 0;
  for (y = x->NICKNAME; n>=0 && y; --n, y = (struct zx_cdm_NICKNAME_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_NICKNAME) */

struct zx_cdm_NICKNAME_s* zx_cdm_vCard_POP_NICKNAME(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_NICKNAME_s* y;
  if (!x) return 0;
  y = x->NICKNAME;
  if (y)
    x->NICKNAME = (struct zx_cdm_NICKNAME_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_NICKNAME) */

void zx_cdm_vCard_PUSH_NICKNAME(struct zx_cdm_vCard_s* x, struct zx_cdm_NICKNAME_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NICKNAME->gg.g;
  x->NICKNAME = z;
}

/* FUNC(zx_cdm_vCard_REV_NICKNAME) */

void zx_cdm_vCard_REV_NICKNAME(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_NICKNAME_s* nxt;
  struct zx_cdm_NICKNAME_s* y;
  if (!x) return;
  y = x->NICKNAME;
  if (!y) return;
  x->NICKNAME = 0;
  while (y) {
    nxt = (struct zx_cdm_NICKNAME_s*)y->gg.g.n;
    y->gg.g.n = &x->NICKNAME->gg.g;
    x->NICKNAME = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_NICKNAME) */

void zx_cdm_vCard_PUT_NICKNAME(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_NICKNAME_s* z)
{
  struct zx_cdm_NICKNAME_s* y;
  if (!x || !z) return;
  y = x->NICKNAME;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NICKNAME = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_NICKNAME_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_NICKNAME) */

void zx_cdm_vCard_ADD_NICKNAME(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_NICKNAME_s* z)
{
  struct zx_cdm_NICKNAME_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NICKNAME->gg.g;
    x->NICKNAME = z;
    return;
  case -1:
    y = x->NICKNAME;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_NICKNAME_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NICKNAME; n > 1 && y; --n, y = (struct zx_cdm_NICKNAME_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_NICKNAME) */

void zx_cdm_vCard_DEL_NICKNAME(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_NICKNAME_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NICKNAME = (struct zx_cdm_NICKNAME_s*)x->NICKNAME->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_NICKNAME_s*)x->NICKNAME;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_NICKNAME_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NICKNAME; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_NICKNAME_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_PHOTO) */

int zx_cdm_vCard_NUM_PHOTO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PHOTO_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PHOTO; y; ++n, y = (struct zx_cdm_PHOTO_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_PHOTO) */

struct zx_cdm_PHOTO_s* zx_cdm_vCard_GET_PHOTO(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_PHOTO_s* y;
  if (!x) return 0;
  for (y = x->PHOTO; n>=0 && y; --n, y = (struct zx_cdm_PHOTO_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_PHOTO) */

struct zx_cdm_PHOTO_s* zx_cdm_vCard_POP_PHOTO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PHOTO_s* y;
  if (!x) return 0;
  y = x->PHOTO;
  if (y)
    x->PHOTO = (struct zx_cdm_PHOTO_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_PHOTO) */

void zx_cdm_vCard_PUSH_PHOTO(struct zx_cdm_vCard_s* x, struct zx_cdm_PHOTO_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PHOTO->gg.g;
  x->PHOTO = z;
}

/* FUNC(zx_cdm_vCard_REV_PHOTO) */

void zx_cdm_vCard_REV_PHOTO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PHOTO_s* nxt;
  struct zx_cdm_PHOTO_s* y;
  if (!x) return;
  y = x->PHOTO;
  if (!y) return;
  x->PHOTO = 0;
  while (y) {
    nxt = (struct zx_cdm_PHOTO_s*)y->gg.g.n;
    y->gg.g.n = &x->PHOTO->gg.g;
    x->PHOTO = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_PHOTO) */

void zx_cdm_vCard_PUT_PHOTO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PHOTO_s* z)
{
  struct zx_cdm_PHOTO_s* y;
  if (!x || !z) return;
  y = x->PHOTO;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PHOTO = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PHOTO_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_PHOTO) */

void zx_cdm_vCard_ADD_PHOTO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PHOTO_s* z)
{
  struct zx_cdm_PHOTO_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PHOTO->gg.g;
    x->PHOTO = z;
    return;
  case -1:
    y = x->PHOTO;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_PHOTO_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PHOTO; n > 1 && y; --n, y = (struct zx_cdm_PHOTO_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_PHOTO) */

void zx_cdm_vCard_DEL_PHOTO(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_PHOTO_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PHOTO = (struct zx_cdm_PHOTO_s*)x->PHOTO->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_PHOTO_s*)x->PHOTO;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_PHOTO_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PHOTO; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PHOTO_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_BDAY) */

int zx_cdm_vCard_NUM_BDAY(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_BDAY_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BDAY; y; ++n, y = (struct zx_cdm_BDAY_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_BDAY) */

struct zx_cdm_BDAY_s* zx_cdm_vCard_GET_BDAY(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_BDAY_s* y;
  if (!x) return 0;
  for (y = x->BDAY; n>=0 && y; --n, y = (struct zx_cdm_BDAY_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_BDAY) */

struct zx_cdm_BDAY_s* zx_cdm_vCard_POP_BDAY(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_BDAY_s* y;
  if (!x) return 0;
  y = x->BDAY;
  if (y)
    x->BDAY = (struct zx_cdm_BDAY_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_BDAY) */

void zx_cdm_vCard_PUSH_BDAY(struct zx_cdm_vCard_s* x, struct zx_cdm_BDAY_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BDAY->gg.g;
  x->BDAY = z;
}

/* FUNC(zx_cdm_vCard_REV_BDAY) */

void zx_cdm_vCard_REV_BDAY(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_BDAY_s* nxt;
  struct zx_cdm_BDAY_s* y;
  if (!x) return;
  y = x->BDAY;
  if (!y) return;
  x->BDAY = 0;
  while (y) {
    nxt = (struct zx_cdm_BDAY_s*)y->gg.g.n;
    y->gg.g.n = &x->BDAY->gg.g;
    x->BDAY = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_BDAY) */

void zx_cdm_vCard_PUT_BDAY(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_BDAY_s* z)
{
  struct zx_cdm_BDAY_s* y;
  if (!x || !z) return;
  y = x->BDAY;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BDAY = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_BDAY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_BDAY) */

void zx_cdm_vCard_ADD_BDAY(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_BDAY_s* z)
{
  struct zx_cdm_BDAY_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BDAY->gg.g;
    x->BDAY = z;
    return;
  case -1:
    y = x->BDAY;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_BDAY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BDAY; n > 1 && y; --n, y = (struct zx_cdm_BDAY_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_BDAY) */

void zx_cdm_vCard_DEL_BDAY(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_BDAY_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BDAY = (struct zx_cdm_BDAY_s*)x->BDAY->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_BDAY_s*)x->BDAY;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_BDAY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BDAY; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_BDAY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_ADR) */

int zx_cdm_vCard_NUM_ADR(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ADR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ADR; y; ++n, y = (struct zx_cdm_ADR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_ADR) */

struct zx_cdm_ADR_s* zx_cdm_vCard_GET_ADR(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_ADR_s* y;
  if (!x) return 0;
  for (y = x->ADR; n>=0 && y; --n, y = (struct zx_cdm_ADR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_ADR) */

struct zx_cdm_ADR_s* zx_cdm_vCard_POP_ADR(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ADR_s* y;
  if (!x) return 0;
  y = x->ADR;
  if (y)
    x->ADR = (struct zx_cdm_ADR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_ADR) */

void zx_cdm_vCard_PUSH_ADR(struct zx_cdm_vCard_s* x, struct zx_cdm_ADR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ADR->gg.g;
  x->ADR = z;
}

/* FUNC(zx_cdm_vCard_REV_ADR) */

void zx_cdm_vCard_REV_ADR(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ADR_s* nxt;
  struct zx_cdm_ADR_s* y;
  if (!x) return;
  y = x->ADR;
  if (!y) return;
  x->ADR = 0;
  while (y) {
    nxt = (struct zx_cdm_ADR_s*)y->gg.g.n;
    y->gg.g.n = &x->ADR->gg.g;
    x->ADR = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_ADR) */

void zx_cdm_vCard_PUT_ADR(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ADR_s* z)
{
  struct zx_cdm_ADR_s* y;
  if (!x || !z) return;
  y = x->ADR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ADR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ADR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_ADR) */

void zx_cdm_vCard_ADD_ADR(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ADR_s* z)
{
  struct zx_cdm_ADR_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ADR->gg.g;
    x->ADR = z;
    return;
  case -1:
    y = x->ADR;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_ADR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ADR; n > 1 && y; --n, y = (struct zx_cdm_ADR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_ADR) */

void zx_cdm_vCard_DEL_ADR(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_ADR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ADR = (struct zx_cdm_ADR_s*)x->ADR->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_ADR_s*)x->ADR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_ADR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ADR; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ADR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_LABEL) */

int zx_cdm_vCard_NUM_LABEL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LABEL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LABEL; y; ++n, y = (struct zx_cdm_LABEL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_LABEL) */

struct zx_cdm_LABEL_s* zx_cdm_vCard_GET_LABEL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_LABEL_s* y;
  if (!x) return 0;
  for (y = x->LABEL; n>=0 && y; --n, y = (struct zx_cdm_LABEL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_LABEL) */

struct zx_cdm_LABEL_s* zx_cdm_vCard_POP_LABEL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LABEL_s* y;
  if (!x) return 0;
  y = x->LABEL;
  if (y)
    x->LABEL = (struct zx_cdm_LABEL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_LABEL) */

void zx_cdm_vCard_PUSH_LABEL(struct zx_cdm_vCard_s* x, struct zx_cdm_LABEL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LABEL->gg.g;
  x->LABEL = z;
}

/* FUNC(zx_cdm_vCard_REV_LABEL) */

void zx_cdm_vCard_REV_LABEL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LABEL_s* nxt;
  struct zx_cdm_LABEL_s* y;
  if (!x) return;
  y = x->LABEL;
  if (!y) return;
  x->LABEL = 0;
  while (y) {
    nxt = (struct zx_cdm_LABEL_s*)y->gg.g.n;
    y->gg.g.n = &x->LABEL->gg.g;
    x->LABEL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_LABEL) */

void zx_cdm_vCard_PUT_LABEL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LABEL_s* z)
{
  struct zx_cdm_LABEL_s* y;
  if (!x || !z) return;
  y = x->LABEL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LABEL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LABEL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_LABEL) */

void zx_cdm_vCard_ADD_LABEL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LABEL_s* z)
{
  struct zx_cdm_LABEL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LABEL->gg.g;
    x->LABEL = z;
    return;
  case -1:
    y = x->LABEL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_LABEL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LABEL; n > 1 && y; --n, y = (struct zx_cdm_LABEL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_LABEL) */

void zx_cdm_vCard_DEL_LABEL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_LABEL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LABEL = (struct zx_cdm_LABEL_s*)x->LABEL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_LABEL_s*)x->LABEL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_LABEL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LABEL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LABEL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_TEL) */

int zx_cdm_vCard_NUM_TEL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TEL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TEL; y; ++n, y = (struct zx_cdm_TEL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_TEL) */

struct zx_cdm_TEL_s* zx_cdm_vCard_GET_TEL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_TEL_s* y;
  if (!x) return 0;
  for (y = x->TEL; n>=0 && y; --n, y = (struct zx_cdm_TEL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_TEL) */

struct zx_cdm_TEL_s* zx_cdm_vCard_POP_TEL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TEL_s* y;
  if (!x) return 0;
  y = x->TEL;
  if (y)
    x->TEL = (struct zx_cdm_TEL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_TEL) */

void zx_cdm_vCard_PUSH_TEL(struct zx_cdm_vCard_s* x, struct zx_cdm_TEL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TEL->gg.g;
  x->TEL = z;
}

/* FUNC(zx_cdm_vCard_REV_TEL) */

void zx_cdm_vCard_REV_TEL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TEL_s* nxt;
  struct zx_cdm_TEL_s* y;
  if (!x) return;
  y = x->TEL;
  if (!y) return;
  x->TEL = 0;
  while (y) {
    nxt = (struct zx_cdm_TEL_s*)y->gg.g.n;
    y->gg.g.n = &x->TEL->gg.g;
    x->TEL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_TEL) */

void zx_cdm_vCard_PUT_TEL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TEL_s* z)
{
  struct zx_cdm_TEL_s* y;
  if (!x || !z) return;
  y = x->TEL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TEL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TEL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_TEL) */

void zx_cdm_vCard_ADD_TEL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TEL_s* z)
{
  struct zx_cdm_TEL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TEL->gg.g;
    x->TEL = z;
    return;
  case -1:
    y = x->TEL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_TEL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TEL; n > 1 && y; --n, y = (struct zx_cdm_TEL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_TEL) */

void zx_cdm_vCard_DEL_TEL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_TEL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TEL = (struct zx_cdm_TEL_s*)x->TEL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_TEL_s*)x->TEL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_TEL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TEL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TEL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_EMAIL) */

int zx_cdm_vCard_NUM_EMAIL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_EMAIL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EMAIL; y; ++n, y = (struct zx_cdm_EMAIL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_EMAIL) */

struct zx_cdm_EMAIL_s* zx_cdm_vCard_GET_EMAIL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_EMAIL_s* y;
  if (!x) return 0;
  for (y = x->EMAIL; n>=0 && y; --n, y = (struct zx_cdm_EMAIL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_EMAIL) */

struct zx_cdm_EMAIL_s* zx_cdm_vCard_POP_EMAIL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_EMAIL_s* y;
  if (!x) return 0;
  y = x->EMAIL;
  if (y)
    x->EMAIL = (struct zx_cdm_EMAIL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_EMAIL) */

void zx_cdm_vCard_PUSH_EMAIL(struct zx_cdm_vCard_s* x, struct zx_cdm_EMAIL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EMAIL->gg.g;
  x->EMAIL = z;
}

/* FUNC(zx_cdm_vCard_REV_EMAIL) */

void zx_cdm_vCard_REV_EMAIL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_EMAIL_s* nxt;
  struct zx_cdm_EMAIL_s* y;
  if (!x) return;
  y = x->EMAIL;
  if (!y) return;
  x->EMAIL = 0;
  while (y) {
    nxt = (struct zx_cdm_EMAIL_s*)y->gg.g.n;
    y->gg.g.n = &x->EMAIL->gg.g;
    x->EMAIL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_EMAIL) */

void zx_cdm_vCard_PUT_EMAIL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_EMAIL_s* z)
{
  struct zx_cdm_EMAIL_s* y;
  if (!x || !z) return;
  y = x->EMAIL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EMAIL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EMAIL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_EMAIL) */

void zx_cdm_vCard_ADD_EMAIL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_EMAIL_s* z)
{
  struct zx_cdm_EMAIL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EMAIL->gg.g;
    x->EMAIL = z;
    return;
  case -1:
    y = x->EMAIL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_EMAIL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EMAIL; n > 1 && y; --n, y = (struct zx_cdm_EMAIL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_EMAIL) */

void zx_cdm_vCard_DEL_EMAIL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_EMAIL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EMAIL = (struct zx_cdm_EMAIL_s*)x->EMAIL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_EMAIL_s*)x->EMAIL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_EMAIL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EMAIL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_EMAIL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_JABBERID) */

int zx_cdm_vCard_NUM_JABBERID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_JABBERID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->JABBERID; y; ++n, y = (struct zx_cdm_JABBERID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_JABBERID) */

struct zx_cdm_JABBERID_s* zx_cdm_vCard_GET_JABBERID(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_JABBERID_s* y;
  if (!x) return 0;
  for (y = x->JABBERID; n>=0 && y; --n, y = (struct zx_cdm_JABBERID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_JABBERID) */

struct zx_cdm_JABBERID_s* zx_cdm_vCard_POP_JABBERID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_JABBERID_s* y;
  if (!x) return 0;
  y = x->JABBERID;
  if (y)
    x->JABBERID = (struct zx_cdm_JABBERID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_JABBERID) */

void zx_cdm_vCard_PUSH_JABBERID(struct zx_cdm_vCard_s* x, struct zx_cdm_JABBERID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->JABBERID->gg.g;
  x->JABBERID = z;
}

/* FUNC(zx_cdm_vCard_REV_JABBERID) */

void zx_cdm_vCard_REV_JABBERID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_JABBERID_s* nxt;
  struct zx_cdm_JABBERID_s* y;
  if (!x) return;
  y = x->JABBERID;
  if (!y) return;
  x->JABBERID = 0;
  while (y) {
    nxt = (struct zx_cdm_JABBERID_s*)y->gg.g.n;
    y->gg.g.n = &x->JABBERID->gg.g;
    x->JABBERID = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_JABBERID) */

void zx_cdm_vCard_PUT_JABBERID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_JABBERID_s* z)
{
  struct zx_cdm_JABBERID_s* y;
  if (!x || !z) return;
  y = x->JABBERID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->JABBERID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_JABBERID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_JABBERID) */

void zx_cdm_vCard_ADD_JABBERID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_JABBERID_s* z)
{
  struct zx_cdm_JABBERID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->JABBERID->gg.g;
    x->JABBERID = z;
    return;
  case -1:
    y = x->JABBERID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_JABBERID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->JABBERID; n > 1 && y; --n, y = (struct zx_cdm_JABBERID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_JABBERID) */

void zx_cdm_vCard_DEL_JABBERID(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_JABBERID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->JABBERID = (struct zx_cdm_JABBERID_s*)x->JABBERID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_JABBERID_s*)x->JABBERID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_JABBERID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->JABBERID; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_JABBERID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_MAILER) */

int zx_cdm_vCard_NUM_MAILER(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_MAILER_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MAILER; y; ++n, y = (struct zx_cdm_MAILER_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_MAILER) */

struct zx_cdm_MAILER_s* zx_cdm_vCard_GET_MAILER(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_MAILER_s* y;
  if (!x) return 0;
  for (y = x->MAILER; n>=0 && y; --n, y = (struct zx_cdm_MAILER_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_MAILER) */

struct zx_cdm_MAILER_s* zx_cdm_vCard_POP_MAILER(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_MAILER_s* y;
  if (!x) return 0;
  y = x->MAILER;
  if (y)
    x->MAILER = (struct zx_cdm_MAILER_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_MAILER) */

void zx_cdm_vCard_PUSH_MAILER(struct zx_cdm_vCard_s* x, struct zx_cdm_MAILER_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MAILER->gg.g;
  x->MAILER = z;
}

/* FUNC(zx_cdm_vCard_REV_MAILER) */

void zx_cdm_vCard_REV_MAILER(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_MAILER_s* nxt;
  struct zx_cdm_MAILER_s* y;
  if (!x) return;
  y = x->MAILER;
  if (!y) return;
  x->MAILER = 0;
  while (y) {
    nxt = (struct zx_cdm_MAILER_s*)y->gg.g.n;
    y->gg.g.n = &x->MAILER->gg.g;
    x->MAILER = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_MAILER) */

void zx_cdm_vCard_PUT_MAILER(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_MAILER_s* z)
{
  struct zx_cdm_MAILER_s* y;
  if (!x || !z) return;
  y = x->MAILER;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MAILER = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_MAILER_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_MAILER) */

void zx_cdm_vCard_ADD_MAILER(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_MAILER_s* z)
{
  struct zx_cdm_MAILER_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MAILER->gg.g;
    x->MAILER = z;
    return;
  case -1:
    y = x->MAILER;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_MAILER_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MAILER; n > 1 && y; --n, y = (struct zx_cdm_MAILER_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_MAILER) */

void zx_cdm_vCard_DEL_MAILER(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_MAILER_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MAILER = (struct zx_cdm_MAILER_s*)x->MAILER->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_MAILER_s*)x->MAILER;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_MAILER_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MAILER; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_MAILER_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_TZ) */

int zx_cdm_vCard_NUM_TZ(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TZ_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TZ; y; ++n, y = (struct zx_cdm_TZ_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_TZ) */

struct zx_cdm_TZ_s* zx_cdm_vCard_GET_TZ(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_TZ_s* y;
  if (!x) return 0;
  for (y = x->TZ; n>=0 && y; --n, y = (struct zx_cdm_TZ_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_TZ) */

struct zx_cdm_TZ_s* zx_cdm_vCard_POP_TZ(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TZ_s* y;
  if (!x) return 0;
  y = x->TZ;
  if (y)
    x->TZ = (struct zx_cdm_TZ_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_TZ) */

void zx_cdm_vCard_PUSH_TZ(struct zx_cdm_vCard_s* x, struct zx_cdm_TZ_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TZ->gg.g;
  x->TZ = z;
}

/* FUNC(zx_cdm_vCard_REV_TZ) */

void zx_cdm_vCard_REV_TZ(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TZ_s* nxt;
  struct zx_cdm_TZ_s* y;
  if (!x) return;
  y = x->TZ;
  if (!y) return;
  x->TZ = 0;
  while (y) {
    nxt = (struct zx_cdm_TZ_s*)y->gg.g.n;
    y->gg.g.n = &x->TZ->gg.g;
    x->TZ = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_TZ) */

void zx_cdm_vCard_PUT_TZ(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TZ_s* z)
{
  struct zx_cdm_TZ_s* y;
  if (!x || !z) return;
  y = x->TZ;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TZ = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TZ_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_TZ) */

void zx_cdm_vCard_ADD_TZ(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TZ_s* z)
{
  struct zx_cdm_TZ_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TZ->gg.g;
    x->TZ = z;
    return;
  case -1:
    y = x->TZ;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_TZ_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TZ; n > 1 && y; --n, y = (struct zx_cdm_TZ_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_TZ) */

void zx_cdm_vCard_DEL_TZ(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_TZ_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TZ = (struct zx_cdm_TZ_s*)x->TZ->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_TZ_s*)x->TZ;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_TZ_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TZ; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TZ_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_GEO) */

int zx_cdm_vCard_NUM_GEO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_GEO_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GEO; y; ++n, y = (struct zx_cdm_GEO_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_GEO) */

struct zx_cdm_GEO_s* zx_cdm_vCard_GET_GEO(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_GEO_s* y;
  if (!x) return 0;
  for (y = x->GEO; n>=0 && y; --n, y = (struct zx_cdm_GEO_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_GEO) */

struct zx_cdm_GEO_s* zx_cdm_vCard_POP_GEO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_GEO_s* y;
  if (!x) return 0;
  y = x->GEO;
  if (y)
    x->GEO = (struct zx_cdm_GEO_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_GEO) */

void zx_cdm_vCard_PUSH_GEO(struct zx_cdm_vCard_s* x, struct zx_cdm_GEO_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GEO->gg.g;
  x->GEO = z;
}

/* FUNC(zx_cdm_vCard_REV_GEO) */

void zx_cdm_vCard_REV_GEO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_GEO_s* nxt;
  struct zx_cdm_GEO_s* y;
  if (!x) return;
  y = x->GEO;
  if (!y) return;
  x->GEO = 0;
  while (y) {
    nxt = (struct zx_cdm_GEO_s*)y->gg.g.n;
    y->gg.g.n = &x->GEO->gg.g;
    x->GEO = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_GEO) */

void zx_cdm_vCard_PUT_GEO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_GEO_s* z)
{
  struct zx_cdm_GEO_s* y;
  if (!x || !z) return;
  y = x->GEO;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GEO = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_GEO_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_GEO) */

void zx_cdm_vCard_ADD_GEO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_GEO_s* z)
{
  struct zx_cdm_GEO_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GEO->gg.g;
    x->GEO = z;
    return;
  case -1:
    y = x->GEO;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_GEO_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GEO; n > 1 && y; --n, y = (struct zx_cdm_GEO_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_GEO) */

void zx_cdm_vCard_DEL_GEO(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_GEO_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GEO = (struct zx_cdm_GEO_s*)x->GEO->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_GEO_s*)x->GEO;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_GEO_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GEO; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_GEO_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_TITLE) */

int zx_cdm_vCard_NUM_TITLE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TITLE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TITLE; y; ++n, y = (struct zx_cdm_TITLE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_TITLE) */

struct zx_cdm_TITLE_s* zx_cdm_vCard_GET_TITLE(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_TITLE_s* y;
  if (!x) return 0;
  for (y = x->TITLE; n>=0 && y; --n, y = (struct zx_cdm_TITLE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_TITLE) */

struct zx_cdm_TITLE_s* zx_cdm_vCard_POP_TITLE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TITLE_s* y;
  if (!x) return 0;
  y = x->TITLE;
  if (y)
    x->TITLE = (struct zx_cdm_TITLE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_TITLE) */

void zx_cdm_vCard_PUSH_TITLE(struct zx_cdm_vCard_s* x, struct zx_cdm_TITLE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TITLE->gg.g;
  x->TITLE = z;
}

/* FUNC(zx_cdm_vCard_REV_TITLE) */

void zx_cdm_vCard_REV_TITLE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_TITLE_s* nxt;
  struct zx_cdm_TITLE_s* y;
  if (!x) return;
  y = x->TITLE;
  if (!y) return;
  x->TITLE = 0;
  while (y) {
    nxt = (struct zx_cdm_TITLE_s*)y->gg.g.n;
    y->gg.g.n = &x->TITLE->gg.g;
    x->TITLE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_TITLE) */

void zx_cdm_vCard_PUT_TITLE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TITLE_s* z)
{
  struct zx_cdm_TITLE_s* y;
  if (!x || !z) return;
  y = x->TITLE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TITLE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TITLE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_TITLE) */

void zx_cdm_vCard_ADD_TITLE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_TITLE_s* z)
{
  struct zx_cdm_TITLE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TITLE->gg.g;
    x->TITLE = z;
    return;
  case -1:
    y = x->TITLE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_TITLE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TITLE; n > 1 && y; --n, y = (struct zx_cdm_TITLE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_TITLE) */

void zx_cdm_vCard_DEL_TITLE(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_TITLE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TITLE = (struct zx_cdm_TITLE_s*)x->TITLE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_TITLE_s*)x->TITLE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_TITLE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TITLE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_TITLE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_ROLE) */

int zx_cdm_vCard_NUM_ROLE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ROLE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ROLE; y; ++n, y = (struct zx_cdm_ROLE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_ROLE) */

struct zx_cdm_ROLE_s* zx_cdm_vCard_GET_ROLE(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_ROLE_s* y;
  if (!x) return 0;
  for (y = x->ROLE; n>=0 && y; --n, y = (struct zx_cdm_ROLE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_ROLE) */

struct zx_cdm_ROLE_s* zx_cdm_vCard_POP_ROLE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ROLE_s* y;
  if (!x) return 0;
  y = x->ROLE;
  if (y)
    x->ROLE = (struct zx_cdm_ROLE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_ROLE) */

void zx_cdm_vCard_PUSH_ROLE(struct zx_cdm_vCard_s* x, struct zx_cdm_ROLE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ROLE->gg.g;
  x->ROLE = z;
}

/* FUNC(zx_cdm_vCard_REV_ROLE) */

void zx_cdm_vCard_REV_ROLE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ROLE_s* nxt;
  struct zx_cdm_ROLE_s* y;
  if (!x) return;
  y = x->ROLE;
  if (!y) return;
  x->ROLE = 0;
  while (y) {
    nxt = (struct zx_cdm_ROLE_s*)y->gg.g.n;
    y->gg.g.n = &x->ROLE->gg.g;
    x->ROLE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_ROLE) */

void zx_cdm_vCard_PUT_ROLE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ROLE_s* z)
{
  struct zx_cdm_ROLE_s* y;
  if (!x || !z) return;
  y = x->ROLE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ROLE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ROLE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_ROLE) */

void zx_cdm_vCard_ADD_ROLE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ROLE_s* z)
{
  struct zx_cdm_ROLE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ROLE->gg.g;
    x->ROLE = z;
    return;
  case -1:
    y = x->ROLE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_ROLE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ROLE; n > 1 && y; --n, y = (struct zx_cdm_ROLE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_ROLE) */

void zx_cdm_vCard_DEL_ROLE(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_ROLE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ROLE = (struct zx_cdm_ROLE_s*)x->ROLE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_ROLE_s*)x->ROLE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_ROLE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ROLE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ROLE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_LOGO) */

int zx_cdm_vCard_NUM_LOGO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LOGO_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LOGO; y; ++n, y = (struct zx_cdm_LOGO_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_LOGO) */

struct zx_cdm_LOGO_s* zx_cdm_vCard_GET_LOGO(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_LOGO_s* y;
  if (!x) return 0;
  for (y = x->LOGO; n>=0 && y; --n, y = (struct zx_cdm_LOGO_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_LOGO) */

struct zx_cdm_LOGO_s* zx_cdm_vCard_POP_LOGO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LOGO_s* y;
  if (!x) return 0;
  y = x->LOGO;
  if (y)
    x->LOGO = (struct zx_cdm_LOGO_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_LOGO) */

void zx_cdm_vCard_PUSH_LOGO(struct zx_cdm_vCard_s* x, struct zx_cdm_LOGO_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LOGO->gg.g;
  x->LOGO = z;
}

/* FUNC(zx_cdm_vCard_REV_LOGO) */

void zx_cdm_vCard_REV_LOGO(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_LOGO_s* nxt;
  struct zx_cdm_LOGO_s* y;
  if (!x) return;
  y = x->LOGO;
  if (!y) return;
  x->LOGO = 0;
  while (y) {
    nxt = (struct zx_cdm_LOGO_s*)y->gg.g.n;
    y->gg.g.n = &x->LOGO->gg.g;
    x->LOGO = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_LOGO) */

void zx_cdm_vCard_PUT_LOGO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LOGO_s* z)
{
  struct zx_cdm_LOGO_s* y;
  if (!x || !z) return;
  y = x->LOGO;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LOGO = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LOGO_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_LOGO) */

void zx_cdm_vCard_ADD_LOGO(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_LOGO_s* z)
{
  struct zx_cdm_LOGO_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LOGO->gg.g;
    x->LOGO = z;
    return;
  case -1:
    y = x->LOGO;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_LOGO_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LOGO; n > 1 && y; --n, y = (struct zx_cdm_LOGO_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_LOGO) */

void zx_cdm_vCard_DEL_LOGO(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_LOGO_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LOGO = (struct zx_cdm_LOGO_s*)x->LOGO->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_LOGO_s*)x->LOGO;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_LOGO_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LOGO; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_LOGO_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_AGENT) */

int zx_cdm_vCard_NUM_AGENT(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_AGENT_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AGENT; y; ++n, y = (struct zx_cdm_AGENT_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_AGENT) */

struct zx_cdm_AGENT_s* zx_cdm_vCard_GET_AGENT(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_AGENT_s* y;
  if (!x) return 0;
  for (y = x->AGENT; n>=0 && y; --n, y = (struct zx_cdm_AGENT_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_AGENT) */

struct zx_cdm_AGENT_s* zx_cdm_vCard_POP_AGENT(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_AGENT_s* y;
  if (!x) return 0;
  y = x->AGENT;
  if (y)
    x->AGENT = (struct zx_cdm_AGENT_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_AGENT) */

void zx_cdm_vCard_PUSH_AGENT(struct zx_cdm_vCard_s* x, struct zx_cdm_AGENT_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AGENT->gg.g;
  x->AGENT = z;
}

/* FUNC(zx_cdm_vCard_REV_AGENT) */

void zx_cdm_vCard_REV_AGENT(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_AGENT_s* nxt;
  struct zx_cdm_AGENT_s* y;
  if (!x) return;
  y = x->AGENT;
  if (!y) return;
  x->AGENT = 0;
  while (y) {
    nxt = (struct zx_cdm_AGENT_s*)y->gg.g.n;
    y->gg.g.n = &x->AGENT->gg.g;
    x->AGENT = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_AGENT) */

void zx_cdm_vCard_PUT_AGENT(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_AGENT_s* z)
{
  struct zx_cdm_AGENT_s* y;
  if (!x || !z) return;
  y = x->AGENT;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AGENT = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_AGENT_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_AGENT) */

void zx_cdm_vCard_ADD_AGENT(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_AGENT_s* z)
{
  struct zx_cdm_AGENT_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AGENT->gg.g;
    x->AGENT = z;
    return;
  case -1:
    y = x->AGENT;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_AGENT_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AGENT; n > 1 && y; --n, y = (struct zx_cdm_AGENT_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_AGENT) */

void zx_cdm_vCard_DEL_AGENT(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_AGENT_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AGENT = (struct zx_cdm_AGENT_s*)x->AGENT->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_AGENT_s*)x->AGENT;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_AGENT_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AGENT; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_AGENT_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_ORG) */

int zx_cdm_vCard_NUM_ORG(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ORG_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ORG; y; ++n, y = (struct zx_cdm_ORG_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_ORG) */

struct zx_cdm_ORG_s* zx_cdm_vCard_GET_ORG(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_ORG_s* y;
  if (!x) return 0;
  for (y = x->ORG; n>=0 && y; --n, y = (struct zx_cdm_ORG_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_ORG) */

struct zx_cdm_ORG_s* zx_cdm_vCard_POP_ORG(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ORG_s* y;
  if (!x) return 0;
  y = x->ORG;
  if (y)
    x->ORG = (struct zx_cdm_ORG_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_ORG) */

void zx_cdm_vCard_PUSH_ORG(struct zx_cdm_vCard_s* x, struct zx_cdm_ORG_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ORG->gg.g;
  x->ORG = z;
}

/* FUNC(zx_cdm_vCard_REV_ORG) */

void zx_cdm_vCard_REV_ORG(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_ORG_s* nxt;
  struct zx_cdm_ORG_s* y;
  if (!x) return;
  y = x->ORG;
  if (!y) return;
  x->ORG = 0;
  while (y) {
    nxt = (struct zx_cdm_ORG_s*)y->gg.g.n;
    y->gg.g.n = &x->ORG->gg.g;
    x->ORG = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_ORG) */

void zx_cdm_vCard_PUT_ORG(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ORG_s* z)
{
  struct zx_cdm_ORG_s* y;
  if (!x || !z) return;
  y = x->ORG;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ORG = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ORG_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_ORG) */

void zx_cdm_vCard_ADD_ORG(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_ORG_s* z)
{
  struct zx_cdm_ORG_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ORG->gg.g;
    x->ORG = z;
    return;
  case -1:
    y = x->ORG;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_ORG_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ORG; n > 1 && y; --n, y = (struct zx_cdm_ORG_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_ORG) */

void zx_cdm_vCard_DEL_ORG(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_ORG_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ORG = (struct zx_cdm_ORG_s*)x->ORG->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_ORG_s*)x->ORG;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_ORG_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ORG; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_ORG_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_CATEGORIES) */

int zx_cdm_vCard_NUM_CATEGORIES(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CATEGORIES_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CATEGORIES; y; ++n, y = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_CATEGORIES) */

struct zx_cdm_CATEGORIES_s* zx_cdm_vCard_GET_CATEGORIES(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CATEGORIES_s* y;
  if (!x) return 0;
  for (y = x->CATEGORIES; n>=0 && y; --n, y = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_CATEGORIES) */

struct zx_cdm_CATEGORIES_s* zx_cdm_vCard_POP_CATEGORIES(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CATEGORIES_s* y;
  if (!x) return 0;
  y = x->CATEGORIES;
  if (y)
    x->CATEGORIES = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_CATEGORIES) */

void zx_cdm_vCard_PUSH_CATEGORIES(struct zx_cdm_vCard_s* x, struct zx_cdm_CATEGORIES_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CATEGORIES->gg.g;
  x->CATEGORIES = z;
}

/* FUNC(zx_cdm_vCard_REV_CATEGORIES) */

void zx_cdm_vCard_REV_CATEGORIES(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CATEGORIES_s* nxt;
  struct zx_cdm_CATEGORIES_s* y;
  if (!x) return;
  y = x->CATEGORIES;
  if (!y) return;
  x->CATEGORIES = 0;
  while (y) {
    nxt = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n;
    y->gg.g.n = &x->CATEGORIES->gg.g;
    x->CATEGORIES = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_CATEGORIES) */

void zx_cdm_vCard_PUT_CATEGORIES(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CATEGORIES_s* z)
{
  struct zx_cdm_CATEGORIES_s* y;
  if (!x || !z) return;
  y = x->CATEGORIES;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CATEGORIES = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_CATEGORIES) */

void zx_cdm_vCard_ADD_CATEGORIES(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CATEGORIES_s* z)
{
  struct zx_cdm_CATEGORIES_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CATEGORIES->gg.g;
    x->CATEGORIES = z;
    return;
  case -1:
    y = x->CATEGORIES;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CATEGORIES; n > 1 && y; --n, y = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_CATEGORIES) */

void zx_cdm_vCard_DEL_CATEGORIES(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CATEGORIES_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CATEGORIES = (struct zx_cdm_CATEGORIES_s*)x->CATEGORIES->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_CATEGORIES_s*)x->CATEGORIES;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CATEGORIES; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CATEGORIES_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_NOTE) */

int zx_cdm_vCard_NUM_NOTE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_NOTE_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NOTE; y; ++n, y = (struct zx_cdm_NOTE_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_NOTE) */

struct zx_cdm_NOTE_s* zx_cdm_vCard_GET_NOTE(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_NOTE_s* y;
  if (!x) return 0;
  for (y = x->NOTE; n>=0 && y; --n, y = (struct zx_cdm_NOTE_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_NOTE) */

struct zx_cdm_NOTE_s* zx_cdm_vCard_POP_NOTE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_NOTE_s* y;
  if (!x) return 0;
  y = x->NOTE;
  if (y)
    x->NOTE = (struct zx_cdm_NOTE_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_NOTE) */

void zx_cdm_vCard_PUSH_NOTE(struct zx_cdm_vCard_s* x, struct zx_cdm_NOTE_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NOTE->gg.g;
  x->NOTE = z;
}

/* FUNC(zx_cdm_vCard_REV_NOTE) */

void zx_cdm_vCard_REV_NOTE(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_NOTE_s* nxt;
  struct zx_cdm_NOTE_s* y;
  if (!x) return;
  y = x->NOTE;
  if (!y) return;
  x->NOTE = 0;
  while (y) {
    nxt = (struct zx_cdm_NOTE_s*)y->gg.g.n;
    y->gg.g.n = &x->NOTE->gg.g;
    x->NOTE = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_NOTE) */

void zx_cdm_vCard_PUT_NOTE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_NOTE_s* z)
{
  struct zx_cdm_NOTE_s* y;
  if (!x || !z) return;
  y = x->NOTE;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NOTE = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_NOTE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_NOTE) */

void zx_cdm_vCard_ADD_NOTE(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_NOTE_s* z)
{
  struct zx_cdm_NOTE_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NOTE->gg.g;
    x->NOTE = z;
    return;
  case -1:
    y = x->NOTE;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_NOTE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NOTE; n > 1 && y; --n, y = (struct zx_cdm_NOTE_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_NOTE) */

void zx_cdm_vCard_DEL_NOTE(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_NOTE_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NOTE = (struct zx_cdm_NOTE_s*)x->NOTE->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_NOTE_s*)x->NOTE;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_NOTE_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NOTE; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_NOTE_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_PRODID) */

int zx_cdm_vCard_NUM_PRODID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PRODID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PRODID; y; ++n, y = (struct zx_cdm_PRODID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_PRODID) */

struct zx_cdm_PRODID_s* zx_cdm_vCard_GET_PRODID(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_PRODID_s* y;
  if (!x) return 0;
  for (y = x->PRODID; n>=0 && y; --n, y = (struct zx_cdm_PRODID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_PRODID) */

struct zx_cdm_PRODID_s* zx_cdm_vCard_POP_PRODID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PRODID_s* y;
  if (!x) return 0;
  y = x->PRODID;
  if (y)
    x->PRODID = (struct zx_cdm_PRODID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_PRODID) */

void zx_cdm_vCard_PUSH_PRODID(struct zx_cdm_vCard_s* x, struct zx_cdm_PRODID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PRODID->gg.g;
  x->PRODID = z;
}

/* FUNC(zx_cdm_vCard_REV_PRODID) */

void zx_cdm_vCard_REV_PRODID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PRODID_s* nxt;
  struct zx_cdm_PRODID_s* y;
  if (!x) return;
  y = x->PRODID;
  if (!y) return;
  x->PRODID = 0;
  while (y) {
    nxt = (struct zx_cdm_PRODID_s*)y->gg.g.n;
    y->gg.g.n = &x->PRODID->gg.g;
    x->PRODID = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_PRODID) */

void zx_cdm_vCard_PUT_PRODID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PRODID_s* z)
{
  struct zx_cdm_PRODID_s* y;
  if (!x || !z) return;
  y = x->PRODID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PRODID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PRODID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_PRODID) */

void zx_cdm_vCard_ADD_PRODID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PRODID_s* z)
{
  struct zx_cdm_PRODID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PRODID->gg.g;
    x->PRODID = z;
    return;
  case -1:
    y = x->PRODID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_PRODID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PRODID; n > 1 && y; --n, y = (struct zx_cdm_PRODID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_PRODID) */

void zx_cdm_vCard_DEL_PRODID(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_PRODID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PRODID = (struct zx_cdm_PRODID_s*)x->PRODID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_PRODID_s*)x->PRODID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_PRODID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PRODID; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PRODID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_REV) */

int zx_cdm_vCard_NUM_REV(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_REV_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->REV; y; ++n, y = (struct zx_cdm_REV_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_REV) */

struct zx_cdm_REV_s* zx_cdm_vCard_GET_REV(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_REV_s* y;
  if (!x) return 0;
  for (y = x->REV; n>=0 && y; --n, y = (struct zx_cdm_REV_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_REV) */

struct zx_cdm_REV_s* zx_cdm_vCard_POP_REV(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_REV_s* y;
  if (!x) return 0;
  y = x->REV;
  if (y)
    x->REV = (struct zx_cdm_REV_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_REV) */

void zx_cdm_vCard_PUSH_REV(struct zx_cdm_vCard_s* x, struct zx_cdm_REV_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->REV->gg.g;
  x->REV = z;
}

/* FUNC(zx_cdm_vCard_REV_REV) */

void zx_cdm_vCard_REV_REV(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_REV_s* nxt;
  struct zx_cdm_REV_s* y;
  if (!x) return;
  y = x->REV;
  if (!y) return;
  x->REV = 0;
  while (y) {
    nxt = (struct zx_cdm_REV_s*)y->gg.g.n;
    y->gg.g.n = &x->REV->gg.g;
    x->REV = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_REV) */

void zx_cdm_vCard_PUT_REV(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_REV_s* z)
{
  struct zx_cdm_REV_s* y;
  if (!x || !z) return;
  y = x->REV;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->REV = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_REV_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_REV) */

void zx_cdm_vCard_ADD_REV(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_REV_s* z)
{
  struct zx_cdm_REV_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->REV->gg.g;
    x->REV = z;
    return;
  case -1:
    y = x->REV;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_REV_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->REV; n > 1 && y; --n, y = (struct zx_cdm_REV_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_REV) */

void zx_cdm_vCard_DEL_REV(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_REV_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->REV = (struct zx_cdm_REV_s*)x->REV->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_REV_s*)x->REV;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_REV_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->REV; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_REV_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_SORT_STRING) */

int zx_cdm_vCard_NUM_SORT_STRING(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_SORT_STRING_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SORT_STRING; y; ++n, y = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_SORT_STRING) */

struct zx_cdm_SORT_STRING_s* zx_cdm_vCard_GET_SORT_STRING(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_SORT_STRING_s* y;
  if (!x) return 0;
  for (y = x->SORT_STRING; n>=0 && y; --n, y = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_SORT_STRING) */

struct zx_cdm_SORT_STRING_s* zx_cdm_vCard_POP_SORT_STRING(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_SORT_STRING_s* y;
  if (!x) return 0;
  y = x->SORT_STRING;
  if (y)
    x->SORT_STRING = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_SORT_STRING) */

void zx_cdm_vCard_PUSH_SORT_STRING(struct zx_cdm_vCard_s* x, struct zx_cdm_SORT_STRING_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SORT_STRING->gg.g;
  x->SORT_STRING = z;
}

/* FUNC(zx_cdm_vCard_REV_SORT_STRING) */

void zx_cdm_vCard_REV_SORT_STRING(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_SORT_STRING_s* nxt;
  struct zx_cdm_SORT_STRING_s* y;
  if (!x) return;
  y = x->SORT_STRING;
  if (!y) return;
  x->SORT_STRING = 0;
  while (y) {
    nxt = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n;
    y->gg.g.n = &x->SORT_STRING->gg.g;
    x->SORT_STRING = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_SORT_STRING) */

void zx_cdm_vCard_PUT_SORT_STRING(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_SORT_STRING_s* z)
{
  struct zx_cdm_SORT_STRING_s* y;
  if (!x || !z) return;
  y = x->SORT_STRING;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SORT_STRING = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_SORT_STRING) */

void zx_cdm_vCard_ADD_SORT_STRING(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_SORT_STRING_s* z)
{
  struct zx_cdm_SORT_STRING_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SORT_STRING->gg.g;
    x->SORT_STRING = z;
    return;
  case -1:
    y = x->SORT_STRING;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SORT_STRING; n > 1 && y; --n, y = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_SORT_STRING) */

void zx_cdm_vCard_DEL_SORT_STRING(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_SORT_STRING_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SORT_STRING = (struct zx_cdm_SORT_STRING_s*)x->SORT_STRING->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_SORT_STRING_s*)x->SORT_STRING;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SORT_STRING; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_SORT_STRING_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_SOUND) */

int zx_cdm_vCard_NUM_SOUND(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_SOUND_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SOUND; y; ++n, y = (struct zx_cdm_SOUND_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_SOUND) */

struct zx_cdm_SOUND_s* zx_cdm_vCard_GET_SOUND(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_SOUND_s* y;
  if (!x) return 0;
  for (y = x->SOUND; n>=0 && y; --n, y = (struct zx_cdm_SOUND_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_SOUND) */

struct zx_cdm_SOUND_s* zx_cdm_vCard_POP_SOUND(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_SOUND_s* y;
  if (!x) return 0;
  y = x->SOUND;
  if (y)
    x->SOUND = (struct zx_cdm_SOUND_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_SOUND) */

void zx_cdm_vCard_PUSH_SOUND(struct zx_cdm_vCard_s* x, struct zx_cdm_SOUND_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SOUND->gg.g;
  x->SOUND = z;
}

/* FUNC(zx_cdm_vCard_REV_SOUND) */

void zx_cdm_vCard_REV_SOUND(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_SOUND_s* nxt;
  struct zx_cdm_SOUND_s* y;
  if (!x) return;
  y = x->SOUND;
  if (!y) return;
  x->SOUND = 0;
  while (y) {
    nxt = (struct zx_cdm_SOUND_s*)y->gg.g.n;
    y->gg.g.n = &x->SOUND->gg.g;
    x->SOUND = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_SOUND) */

void zx_cdm_vCard_PUT_SOUND(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_SOUND_s* z)
{
  struct zx_cdm_SOUND_s* y;
  if (!x || !z) return;
  y = x->SOUND;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SOUND = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_SOUND_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_SOUND) */

void zx_cdm_vCard_ADD_SOUND(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_SOUND_s* z)
{
  struct zx_cdm_SOUND_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SOUND->gg.g;
    x->SOUND = z;
    return;
  case -1:
    y = x->SOUND;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_SOUND_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SOUND; n > 1 && y; --n, y = (struct zx_cdm_SOUND_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_SOUND) */

void zx_cdm_vCard_DEL_SOUND(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_SOUND_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SOUND = (struct zx_cdm_SOUND_s*)x->SOUND->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_SOUND_s*)x->SOUND;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_SOUND_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SOUND; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_SOUND_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_UID) */

int zx_cdm_vCard_NUM_UID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_UID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UID; y; ++n, y = (struct zx_cdm_UID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_UID) */

struct zx_cdm_UID_s* zx_cdm_vCard_GET_UID(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_UID_s* y;
  if (!x) return 0;
  for (y = x->UID; n>=0 && y; --n, y = (struct zx_cdm_UID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_UID) */

struct zx_cdm_UID_s* zx_cdm_vCard_POP_UID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_UID_s* y;
  if (!x) return 0;
  y = x->UID;
  if (y)
    x->UID = (struct zx_cdm_UID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_UID) */

void zx_cdm_vCard_PUSH_UID(struct zx_cdm_vCard_s* x, struct zx_cdm_UID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UID->gg.g;
  x->UID = z;
}

/* FUNC(zx_cdm_vCard_REV_UID) */

void zx_cdm_vCard_REV_UID(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_UID_s* nxt;
  struct zx_cdm_UID_s* y;
  if (!x) return;
  y = x->UID;
  if (!y) return;
  x->UID = 0;
  while (y) {
    nxt = (struct zx_cdm_UID_s*)y->gg.g.n;
    y->gg.g.n = &x->UID->gg.g;
    x->UID = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_UID) */

void zx_cdm_vCard_PUT_UID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_UID_s* z)
{
  struct zx_cdm_UID_s* y;
  if (!x || !z) return;
  y = x->UID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_UID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_UID) */

void zx_cdm_vCard_ADD_UID(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_UID_s* z)
{
  struct zx_cdm_UID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UID->gg.g;
    x->UID = z;
    return;
  case -1:
    y = x->UID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_UID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UID; n > 1 && y; --n, y = (struct zx_cdm_UID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_UID) */

void zx_cdm_vCard_DEL_UID(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_UID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UID = (struct zx_cdm_UID_s*)x->UID->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_UID_s*)x->UID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_UID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UID; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_UID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_URL) */

int zx_cdm_vCard_NUM_URL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_URL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->URL; y; ++n, y = (struct zx_cdm_URL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_URL) */

struct zx_cdm_URL_s* zx_cdm_vCard_GET_URL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_URL_s* y;
  if (!x) return 0;
  for (y = x->URL; n>=0 && y; --n, y = (struct zx_cdm_URL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_URL) */

struct zx_cdm_URL_s* zx_cdm_vCard_POP_URL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_URL_s* y;
  if (!x) return 0;
  y = x->URL;
  if (y)
    x->URL = (struct zx_cdm_URL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_URL) */

void zx_cdm_vCard_PUSH_URL(struct zx_cdm_vCard_s* x, struct zx_cdm_URL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->URL->gg.g;
  x->URL = z;
}

/* FUNC(zx_cdm_vCard_REV_URL) */

void zx_cdm_vCard_REV_URL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_URL_s* nxt;
  struct zx_cdm_URL_s* y;
  if (!x) return;
  y = x->URL;
  if (!y) return;
  x->URL = 0;
  while (y) {
    nxt = (struct zx_cdm_URL_s*)y->gg.g.n;
    y->gg.g.n = &x->URL->gg.g;
    x->URL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_URL) */

void zx_cdm_vCard_PUT_URL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_URL_s* z)
{
  struct zx_cdm_URL_s* y;
  if (!x || !z) return;
  y = x->URL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->URL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_URL) */

void zx_cdm_vCard_ADD_URL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_URL_s* z)
{
  struct zx_cdm_URL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->URL->gg.g;
    x->URL = z;
    return;
  case -1:
    y = x->URL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_URL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URL; n > 1 && y; --n, y = (struct zx_cdm_URL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_URL) */

void zx_cdm_vCard_DEL_URL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_URL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->URL = (struct zx_cdm_URL_s*)x->URL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_URL_s*)x->URL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_URL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->URL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_URL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_CLASS) */

int zx_cdm_vCard_NUM_CLASS(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CLASS_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CLASS; y; ++n, y = (struct zx_cdm_CLASS_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_CLASS) */

struct zx_cdm_CLASS_s* zx_cdm_vCard_GET_CLASS(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CLASS_s* y;
  if (!x) return 0;
  for (y = x->CLASS; n>=0 && y; --n, y = (struct zx_cdm_CLASS_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_CLASS) */

struct zx_cdm_CLASS_s* zx_cdm_vCard_POP_CLASS(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CLASS_s* y;
  if (!x) return 0;
  y = x->CLASS;
  if (y)
    x->CLASS = (struct zx_cdm_CLASS_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_CLASS) */

void zx_cdm_vCard_PUSH_CLASS(struct zx_cdm_vCard_s* x, struct zx_cdm_CLASS_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CLASS->gg.g;
  x->CLASS = z;
}

/* FUNC(zx_cdm_vCard_REV_CLASS) */

void zx_cdm_vCard_REV_CLASS(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CLASS_s* nxt;
  struct zx_cdm_CLASS_s* y;
  if (!x) return;
  y = x->CLASS;
  if (!y) return;
  x->CLASS = 0;
  while (y) {
    nxt = (struct zx_cdm_CLASS_s*)y->gg.g.n;
    y->gg.g.n = &x->CLASS->gg.g;
    x->CLASS = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_CLASS) */

void zx_cdm_vCard_PUT_CLASS(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CLASS_s* z)
{
  struct zx_cdm_CLASS_s* y;
  if (!x || !z) return;
  y = x->CLASS;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CLASS = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CLASS_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_CLASS) */

void zx_cdm_vCard_ADD_CLASS(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CLASS_s* z)
{
  struct zx_cdm_CLASS_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CLASS->gg.g;
    x->CLASS = z;
    return;
  case -1:
    y = x->CLASS;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_CLASS_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CLASS; n > 1 && y; --n, y = (struct zx_cdm_CLASS_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_CLASS) */

void zx_cdm_vCard_DEL_CLASS(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CLASS_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CLASS = (struct zx_cdm_CLASS_s*)x->CLASS->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_CLASS_s*)x->CLASS;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_CLASS_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CLASS; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CLASS_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_KEY) */

int zx_cdm_vCard_NUM_KEY(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_KEY_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KEY; y; ++n, y = (struct zx_cdm_KEY_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_KEY) */

struct zx_cdm_KEY_s* zx_cdm_vCard_GET_KEY(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_KEY_s* y;
  if (!x) return 0;
  for (y = x->KEY; n>=0 && y; --n, y = (struct zx_cdm_KEY_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_KEY) */

struct zx_cdm_KEY_s* zx_cdm_vCard_POP_KEY(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_KEY_s* y;
  if (!x) return 0;
  y = x->KEY;
  if (y)
    x->KEY = (struct zx_cdm_KEY_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_KEY) */

void zx_cdm_vCard_PUSH_KEY(struct zx_cdm_vCard_s* x, struct zx_cdm_KEY_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KEY->gg.g;
  x->KEY = z;
}

/* FUNC(zx_cdm_vCard_REV_KEY) */

void zx_cdm_vCard_REV_KEY(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_KEY_s* nxt;
  struct zx_cdm_KEY_s* y;
  if (!x) return;
  y = x->KEY;
  if (!y) return;
  x->KEY = 0;
  while (y) {
    nxt = (struct zx_cdm_KEY_s*)y->gg.g.n;
    y->gg.g.n = &x->KEY->gg.g;
    x->KEY = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_KEY) */

void zx_cdm_vCard_PUT_KEY(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_KEY_s* z)
{
  struct zx_cdm_KEY_s* y;
  if (!x || !z) return;
  y = x->KEY;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KEY = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_KEY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_KEY) */

void zx_cdm_vCard_ADD_KEY(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_KEY_s* z)
{
  struct zx_cdm_KEY_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KEY->gg.g;
    x->KEY = z;
    return;
  case -1:
    y = x->KEY;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_KEY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KEY; n > 1 && y; --n, y = (struct zx_cdm_KEY_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_KEY) */

void zx_cdm_vCard_DEL_KEY(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_KEY_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KEY = (struct zx_cdm_KEY_s*)x->KEY->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_KEY_s*)x->KEY;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_KEY_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KEY; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_KEY_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_DESC) */

int zx_cdm_vCard_NUM_DESC(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_DESC_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DESC; y; ++n, y = (struct zx_cdm_DESC_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_DESC) */

struct zx_cdm_DESC_s* zx_cdm_vCard_GET_DESC(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_DESC_s* y;
  if (!x) return 0;
  for (y = x->DESC; n>=0 && y; --n, y = (struct zx_cdm_DESC_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_DESC) */

struct zx_cdm_DESC_s* zx_cdm_vCard_POP_DESC(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_DESC_s* y;
  if (!x) return 0;
  y = x->DESC;
  if (y)
    x->DESC = (struct zx_cdm_DESC_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_DESC) */

void zx_cdm_vCard_PUSH_DESC(struct zx_cdm_vCard_s* x, struct zx_cdm_DESC_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DESC->gg.g;
  x->DESC = z;
}

/* FUNC(zx_cdm_vCard_REV_DESC) */

void zx_cdm_vCard_REV_DESC(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_DESC_s* nxt;
  struct zx_cdm_DESC_s* y;
  if (!x) return;
  y = x->DESC;
  if (!y) return;
  x->DESC = 0;
  while (y) {
    nxt = (struct zx_cdm_DESC_s*)y->gg.g.n;
    y->gg.g.n = &x->DESC->gg.g;
    x->DESC = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_DESC) */

void zx_cdm_vCard_PUT_DESC(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_DESC_s* z)
{
  struct zx_cdm_DESC_s* y;
  if (!x || !z) return;
  y = x->DESC;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DESC = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_DESC_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_DESC) */

void zx_cdm_vCard_ADD_DESC(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_DESC_s* z)
{
  struct zx_cdm_DESC_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DESC->gg.g;
    x->DESC = z;
    return;
  case -1:
    y = x->DESC;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_DESC_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DESC; n > 1 && y; --n, y = (struct zx_cdm_DESC_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_DESC) */

void zx_cdm_vCard_DEL_DESC(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_DESC_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DESC = (struct zx_cdm_DESC_s*)x->DESC->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_DESC_s*)x->DESC;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_DESC_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DESC; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_DESC_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_PHYSICALACCESS) */

int zx_cdm_vCard_NUM_PHYSICALACCESS(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PHYSICALACCESS_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PHYSICALACCESS; y; ++n, y = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_PHYSICALACCESS) */

struct zx_cdm_PHYSICALACCESS_s* zx_cdm_vCard_GET_PHYSICALACCESS(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_PHYSICALACCESS_s* y;
  if (!x) return 0;
  for (y = x->PHYSICALACCESS; n>=0 && y; --n, y = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_PHYSICALACCESS) */

struct zx_cdm_PHYSICALACCESS_s* zx_cdm_vCard_POP_PHYSICALACCESS(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PHYSICALACCESS_s* y;
  if (!x) return 0;
  y = x->PHYSICALACCESS;
  if (y)
    x->PHYSICALACCESS = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_PHYSICALACCESS) */

void zx_cdm_vCard_PUSH_PHYSICALACCESS(struct zx_cdm_vCard_s* x, struct zx_cdm_PHYSICALACCESS_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PHYSICALACCESS->gg.g;
  x->PHYSICALACCESS = z;
}

/* FUNC(zx_cdm_vCard_REV_PHYSICALACCESS) */

void zx_cdm_vCard_REV_PHYSICALACCESS(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_PHYSICALACCESS_s* nxt;
  struct zx_cdm_PHYSICALACCESS_s* y;
  if (!x) return;
  y = x->PHYSICALACCESS;
  if (!y) return;
  x->PHYSICALACCESS = 0;
  while (y) {
    nxt = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n;
    y->gg.g.n = &x->PHYSICALACCESS->gg.g;
    x->PHYSICALACCESS = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_PHYSICALACCESS) */

void zx_cdm_vCard_PUT_PHYSICALACCESS(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PHYSICALACCESS_s* z)
{
  struct zx_cdm_PHYSICALACCESS_s* y;
  if (!x || !z) return;
  y = x->PHYSICALACCESS;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PHYSICALACCESS = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_PHYSICALACCESS) */

void zx_cdm_vCard_ADD_PHYSICALACCESS(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_PHYSICALACCESS_s* z)
{
  struct zx_cdm_PHYSICALACCESS_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PHYSICALACCESS->gg.g;
    x->PHYSICALACCESS = z;
    return;
  case -1:
    y = x->PHYSICALACCESS;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PHYSICALACCESS; n > 1 && y; --n, y = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_PHYSICALACCESS) */

void zx_cdm_vCard_DEL_PHYSICALACCESS(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_PHYSICALACCESS_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PHYSICALACCESS = (struct zx_cdm_PHYSICALACCESS_s*)x->PHYSICALACCESS->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_PHYSICALACCESS_s*)x->PHYSICALACCESS;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PHYSICALACCESS; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_PHYSICALACCESS_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_CALURI) */

int zx_cdm_vCard_NUM_CALURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CALURI_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CALURI; y; ++n, y = (struct zx_cdm_CALURI_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_CALURI) */

struct zx_cdm_CALURI_s* zx_cdm_vCard_GET_CALURI(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CALURI_s* y;
  if (!x) return 0;
  for (y = x->CALURI; n>=0 && y; --n, y = (struct zx_cdm_CALURI_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_CALURI) */

struct zx_cdm_CALURI_s* zx_cdm_vCard_POP_CALURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CALURI_s* y;
  if (!x) return 0;
  y = x->CALURI;
  if (y)
    x->CALURI = (struct zx_cdm_CALURI_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_CALURI) */

void zx_cdm_vCard_PUSH_CALURI(struct zx_cdm_vCard_s* x, struct zx_cdm_CALURI_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CALURI->gg.g;
  x->CALURI = z;
}

/* FUNC(zx_cdm_vCard_REV_CALURI) */

void zx_cdm_vCard_REV_CALURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CALURI_s* nxt;
  struct zx_cdm_CALURI_s* y;
  if (!x) return;
  y = x->CALURI;
  if (!y) return;
  x->CALURI = 0;
  while (y) {
    nxt = (struct zx_cdm_CALURI_s*)y->gg.g.n;
    y->gg.g.n = &x->CALURI->gg.g;
    x->CALURI = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_CALURI) */

void zx_cdm_vCard_PUT_CALURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CALURI_s* z)
{
  struct zx_cdm_CALURI_s* y;
  if (!x || !z) return;
  y = x->CALURI;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CALURI = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CALURI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_CALURI) */

void zx_cdm_vCard_ADD_CALURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CALURI_s* z)
{
  struct zx_cdm_CALURI_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CALURI->gg.g;
    x->CALURI = z;
    return;
  case -1:
    y = x->CALURI;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_CALURI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CALURI; n > 1 && y; --n, y = (struct zx_cdm_CALURI_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_CALURI) */

void zx_cdm_vCard_DEL_CALURI(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CALURI_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CALURI = (struct zx_cdm_CALURI_s*)x->CALURI->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_CALURI_s*)x->CALURI;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_CALURI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CALURI; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CALURI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_CAPURI) */

int zx_cdm_vCard_NUM_CAPURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CAPURI_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CAPURI; y; ++n, y = (struct zx_cdm_CAPURI_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_CAPURI) */

struct zx_cdm_CAPURI_s* zx_cdm_vCard_GET_CAPURI(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CAPURI_s* y;
  if (!x) return 0;
  for (y = x->CAPURI; n>=0 && y; --n, y = (struct zx_cdm_CAPURI_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_CAPURI) */

struct zx_cdm_CAPURI_s* zx_cdm_vCard_POP_CAPURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CAPURI_s* y;
  if (!x) return 0;
  y = x->CAPURI;
  if (y)
    x->CAPURI = (struct zx_cdm_CAPURI_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_CAPURI) */

void zx_cdm_vCard_PUSH_CAPURI(struct zx_cdm_vCard_s* x, struct zx_cdm_CAPURI_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CAPURI->gg.g;
  x->CAPURI = z;
}

/* FUNC(zx_cdm_vCard_REV_CAPURI) */

void zx_cdm_vCard_REV_CAPURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CAPURI_s* nxt;
  struct zx_cdm_CAPURI_s* y;
  if (!x) return;
  y = x->CAPURI;
  if (!y) return;
  x->CAPURI = 0;
  while (y) {
    nxt = (struct zx_cdm_CAPURI_s*)y->gg.g.n;
    y->gg.g.n = &x->CAPURI->gg.g;
    x->CAPURI = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_CAPURI) */

void zx_cdm_vCard_PUT_CAPURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CAPURI_s* z)
{
  struct zx_cdm_CAPURI_s* y;
  if (!x || !z) return;
  y = x->CAPURI;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CAPURI = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CAPURI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_CAPURI) */

void zx_cdm_vCard_ADD_CAPURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CAPURI_s* z)
{
  struct zx_cdm_CAPURI_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CAPURI->gg.g;
    x->CAPURI = z;
    return;
  case -1:
    y = x->CAPURI;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_CAPURI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CAPURI; n > 1 && y; --n, y = (struct zx_cdm_CAPURI_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_CAPURI) */

void zx_cdm_vCard_DEL_CAPURI(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CAPURI_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CAPURI = (struct zx_cdm_CAPURI_s*)x->CAPURI->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_CAPURI_s*)x->CAPURI;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_CAPURI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CAPURI; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CAPURI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_CALADRURI) */

int zx_cdm_vCard_NUM_CALADRURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CALADRURI_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CALADRURI; y; ++n, y = (struct zx_cdm_CALADRURI_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_CALADRURI) */

struct zx_cdm_CALADRURI_s* zx_cdm_vCard_GET_CALADRURI(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CALADRURI_s* y;
  if (!x) return 0;
  for (y = x->CALADRURI; n>=0 && y; --n, y = (struct zx_cdm_CALADRURI_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_CALADRURI) */

struct zx_cdm_CALADRURI_s* zx_cdm_vCard_POP_CALADRURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CALADRURI_s* y;
  if (!x) return 0;
  y = x->CALADRURI;
  if (y)
    x->CALADRURI = (struct zx_cdm_CALADRURI_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_CALADRURI) */

void zx_cdm_vCard_PUSH_CALADRURI(struct zx_cdm_vCard_s* x, struct zx_cdm_CALADRURI_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CALADRURI->gg.g;
  x->CALADRURI = z;
}

/* FUNC(zx_cdm_vCard_REV_CALADRURI) */

void zx_cdm_vCard_REV_CALADRURI(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_CALADRURI_s* nxt;
  struct zx_cdm_CALADRURI_s* y;
  if (!x) return;
  y = x->CALADRURI;
  if (!y) return;
  x->CALADRURI = 0;
  while (y) {
    nxt = (struct zx_cdm_CALADRURI_s*)y->gg.g.n;
    y->gg.g.n = &x->CALADRURI->gg.g;
    x->CALADRURI = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_CALADRURI) */

void zx_cdm_vCard_PUT_CALADRURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CALADRURI_s* z)
{
  struct zx_cdm_CALADRURI_s* y;
  if (!x || !z) return;
  y = x->CALADRURI;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CALADRURI = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CALADRURI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_CALADRURI) */

void zx_cdm_vCard_ADD_CALADRURI(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_CALADRURI_s* z)
{
  struct zx_cdm_CALADRURI_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CALADRURI->gg.g;
    x->CALADRURI = z;
    return;
  case -1:
    y = x->CALADRURI;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_CALADRURI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CALADRURI; n > 1 && y; --n, y = (struct zx_cdm_CALADRURI_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_CALADRURI) */

void zx_cdm_vCard_DEL_CALADRURI(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_CALADRURI_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CALADRURI = (struct zx_cdm_CALADRURI_s*)x->CALADRURI->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_CALADRURI_s*)x->CALADRURI;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_CALADRURI_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CALADRURI; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_CALADRURI_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_FBURL) */

int zx_cdm_vCard_NUM_FBURL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_FBURL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FBURL; y; ++n, y = (struct zx_cdm_FBURL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_FBURL) */

struct zx_cdm_FBURL_s* zx_cdm_vCard_GET_FBURL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_FBURL_s* y;
  if (!x) return 0;
  for (y = x->FBURL; n>=0 && y; --n, y = (struct zx_cdm_FBURL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_FBURL) */

struct zx_cdm_FBURL_s* zx_cdm_vCard_POP_FBURL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_FBURL_s* y;
  if (!x) return 0;
  y = x->FBURL;
  if (y)
    x->FBURL = (struct zx_cdm_FBURL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_FBURL) */

void zx_cdm_vCard_PUSH_FBURL(struct zx_cdm_vCard_s* x, struct zx_cdm_FBURL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FBURL->gg.g;
  x->FBURL = z;
}

/* FUNC(zx_cdm_vCard_REV_FBURL) */

void zx_cdm_vCard_REV_FBURL(struct zx_cdm_vCard_s* x)
{
  struct zx_cdm_FBURL_s* nxt;
  struct zx_cdm_FBURL_s* y;
  if (!x) return;
  y = x->FBURL;
  if (!y) return;
  x->FBURL = 0;
  while (y) {
    nxt = (struct zx_cdm_FBURL_s*)y->gg.g.n;
    y->gg.g.n = &x->FBURL->gg.g;
    x->FBURL = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_FBURL) */

void zx_cdm_vCard_PUT_FBURL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_FBURL_s* z)
{
  struct zx_cdm_FBURL_s* y;
  if (!x || !z) return;
  y = x->FBURL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FBURL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_FBURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_FBURL) */

void zx_cdm_vCard_ADD_FBURL(struct zx_cdm_vCard_s* x, int n, struct zx_cdm_FBURL_s* z)
{
  struct zx_cdm_FBURL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->FBURL->gg.g;
    x->FBURL = z;
    return;
  case -1:
    y = x->FBURL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cdm_FBURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FBURL; n > 1 && y; --n, y = (struct zx_cdm_FBURL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_FBURL) */

void zx_cdm_vCard_DEL_FBURL(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cdm_FBURL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FBURL = (struct zx_cdm_FBURL_s*)x->FBURL->gg.g.n;
    return;
  case -1:
    y = (struct zx_cdm_FBURL_s*)x->FBURL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cdm_FBURL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FBURL; n > 1 && y->gg.g.n; --n, y = (struct zx_cdm_FBURL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_cdm_vCard_NUM_Extension) */

int zx_cdm_vCard_NUM_Extension(struct zx_cdm_vCard_s* x)
{
  struct zx_cb_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_cdm_vCard_GET_Extension) */

struct zx_cb_Extension_s* zx_cdm_vCard_GET_Extension(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_cdm_vCard_POP_Extension) */

struct zx_cb_Extension_s* zx_cdm_vCard_POP_Extension(struct zx_cdm_vCard_s* x)
{
  struct zx_cb_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_cb_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_cdm_vCard_PUSH_Extension) */

void zx_cdm_vCard_PUSH_Extension(struct zx_cdm_vCard_s* x, struct zx_cb_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_cdm_vCard_REV_Extension) */

void zx_cdm_vCard_REV_Extension(struct zx_cdm_vCard_s* x)
{
  struct zx_cb_Extension_s* nxt;
  struct zx_cb_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_cb_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_cdm_vCard_PUT_Extension) */

void zx_cdm_vCard_PUT_Extension(struct zx_cdm_vCard_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_cdm_vCard_ADD_Extension) */

void zx_cdm_vCard_ADD_Extension(struct zx_cdm_vCard_s* x, int n, struct zx_cb_Extension_s* z)
{
  struct zx_cb_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_cdm_vCard_DEL_Extension) */

void zx_cdm_vCard_DEL_Extension(struct zx_cdm_vCard_s* x, int n)
{
  struct zx_cb_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_cb_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_cdm_vCard_GET_id) */
struct zx_str* zx_cdm_vCard_GET_id(struct zx_cdm_vCard_s* x) { return x->id; }
/* FUNC(zx_cdm_vCard_PUT_id) */
void zx_cdm_vCard_PUT_id(struct zx_cdm_vCard_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_cdm_vCard_GET_modificationTime) */
struct zx_str* zx_cdm_vCard_GET_modificationTime(struct zx_cdm_vCard_s* x) { return x->modificationTime; }
/* FUNC(zx_cdm_vCard_PUT_modificationTime) */
void zx_cdm_vCard_PUT_modificationTime(struct zx_cdm_vCard_s* x, struct zx_str* y) { x->modificationTime = y; }





/* EOF -- c/zx-cdm-getput.c */
