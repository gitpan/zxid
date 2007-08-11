/* c/zx-wsp-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-wsp-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_All_NUM_Policy) */

int zx_wsp_All_NUM_Policy(struct zx_wsp_All_s* x)
{
  struct zx_wsp_Policy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Policy; y; ++n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_All_GET_Policy) */

struct zx_wsp_Policy_s* zx_wsp_All_GET_Policy(struct zx_wsp_All_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  for (y = x->Policy; n>=0 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_All_POP_Policy) */

struct zx_wsp_Policy_s* zx_wsp_All_POP_Policy(struct zx_wsp_All_s* x)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  y = x->Policy;
  if (y)
    x->Policy = (struct zx_wsp_Policy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_All_PUSH_Policy) */

void zx_wsp_All_PUSH_Policy(struct zx_wsp_All_s* x, struct zx_wsp_Policy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Policy->gg.g;
  x->Policy = z;
}

/* FUNC(zx_wsp_All_REV_Policy) */

void zx_wsp_All_REV_Policy(struct zx_wsp_All_s* x)
{
  struct zx_wsp_Policy_s* nxt;
  struct zx_wsp_Policy_s* y;
  if (!x) return;
  y = x->Policy;
  if (!y) return;
  x->Policy = 0;
  while (y) {
    nxt = (struct zx_wsp_Policy_s*)y->gg.g.n;
    y->gg.g.n = &x->Policy->gg.g;
    x->Policy = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_All_PUT_Policy) */

void zx_wsp_All_PUT_Policy(struct zx_wsp_All_s* x, int n, struct zx_wsp_Policy_s* z)
{
  struct zx_wsp_Policy_s* y;
  if (!x || !z) return;
  y = x->Policy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Policy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_All_ADD_Policy) */

void zx_wsp_All_ADD_Policy(struct zx_wsp_All_s* x, int n, struct zx_wsp_Policy_s* z)
{
  struct zx_wsp_Policy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Policy->gg.g;
    x->Policy = z;
    return;
  case -1:
    y = x->Policy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_All_DEL_Policy) */

void zx_wsp_All_DEL_Policy(struct zx_wsp_All_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Policy = (struct zx_wsp_Policy_s*)x->Policy->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_Policy_s*)x->Policy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_All_NUM_All) */

int zx_wsp_All_NUM_All(struct zx_wsp_All_s* x)
{
  struct zx_wsp_All_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->All; y; ++n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_All_GET_All) */

struct zx_wsp_All_s* zx_wsp_All_GET_All(struct zx_wsp_All_s* x, int n)
{
  struct zx_wsp_All_s* y;
  if (!x) return 0;
  for (y = x->All; n>=0 && y; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_All_POP_All) */

struct zx_wsp_All_s* zx_wsp_All_POP_All(struct zx_wsp_All_s* x)
{
  struct zx_wsp_All_s* y;
  if (!x) return 0;
  y = x->All;
  if (y)
    x->All = (struct zx_wsp_All_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_All_PUSH_All) */

void zx_wsp_All_PUSH_All(struct zx_wsp_All_s* x, struct zx_wsp_All_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->All->gg.g;
  x->All = z;
}

/* FUNC(zx_wsp_All_REV_All) */

void zx_wsp_All_REV_All(struct zx_wsp_All_s* x)
{
  struct zx_wsp_All_s* nxt;
  struct zx_wsp_All_s* y;
  if (!x) return;
  y = x->All;
  if (!y) return;
  x->All = 0;
  while (y) {
    nxt = (struct zx_wsp_All_s*)y->gg.g.n;
    y->gg.g.n = &x->All->gg.g;
    x->All = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_All_PUT_All) */

void zx_wsp_All_PUT_All(struct zx_wsp_All_s* x, int n, struct zx_wsp_All_s* z)
{
  struct zx_wsp_All_s* y;
  if (!x || !z) return;
  y = x->All;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->All = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_All_ADD_All) */

void zx_wsp_All_ADD_All(struct zx_wsp_All_s* x, int n, struct zx_wsp_All_s* z)
{
  struct zx_wsp_All_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->All->gg.g;
    x->All = z;
    return;
  case -1:
    y = x->All;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->All; n > 1 && y; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_All_DEL_All) */

void zx_wsp_All_DEL_All(struct zx_wsp_All_s* x, int n)
{
  struct zx_wsp_All_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->All = (struct zx_wsp_All_s*)x->All->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_All_s*)x->All;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->All; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_All_NUM_ExactlyOne) */

int zx_wsp_All_NUM_ExactlyOne(struct zx_wsp_All_s* x)
{
  struct zx_wsp_ExactlyOne_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ExactlyOne; y; ++n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_All_GET_ExactlyOne) */

struct zx_wsp_ExactlyOne_s* zx_wsp_All_GET_ExactlyOne(struct zx_wsp_All_s* x, int n)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return 0;
  for (y = x->ExactlyOne; n>=0 && y; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_All_POP_ExactlyOne) */

struct zx_wsp_ExactlyOne_s* zx_wsp_All_POP_ExactlyOne(struct zx_wsp_All_s* x)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return 0;
  y = x->ExactlyOne;
  if (y)
    x->ExactlyOne = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_All_PUSH_ExactlyOne) */

void zx_wsp_All_PUSH_ExactlyOne(struct zx_wsp_All_s* x, struct zx_wsp_ExactlyOne_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ExactlyOne->gg.g;
  x->ExactlyOne = z;
}

/* FUNC(zx_wsp_All_REV_ExactlyOne) */

void zx_wsp_All_REV_ExactlyOne(struct zx_wsp_All_s* x)
{
  struct zx_wsp_ExactlyOne_s* nxt;
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return;
  y = x->ExactlyOne;
  if (!y) return;
  x->ExactlyOne = 0;
  while (y) {
    nxt = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n;
    y->gg.g.n = &x->ExactlyOne->gg.g;
    x->ExactlyOne = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_All_PUT_ExactlyOne) */

void zx_wsp_All_PUT_ExactlyOne(struct zx_wsp_All_s* x, int n, struct zx_wsp_ExactlyOne_s* z)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x || !z) return;
  y = x->ExactlyOne;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ExactlyOne = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_All_ADD_ExactlyOne) */

void zx_wsp_All_ADD_ExactlyOne(struct zx_wsp_All_s* x, int n, struct zx_wsp_ExactlyOne_s* z)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ExactlyOne->gg.g;
    x->ExactlyOne = z;
    return;
  case -1:
    y = x->ExactlyOne;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ExactlyOne; n > 1 && y; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_All_DEL_ExactlyOne) */

void zx_wsp_All_DEL_ExactlyOne(struct zx_wsp_All_s* x, int n)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ExactlyOne = (struct zx_wsp_ExactlyOne_s*)x->ExactlyOne->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_ExactlyOne_s*)x->ExactlyOne;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ExactlyOne; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_All_NUM_PolicyReference) */

int zx_wsp_All_NUM_PolicyReference(struct zx_wsp_All_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyReference; y; ++n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_All_GET_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wsp_All_GET_PolicyReference(struct zx_wsp_All_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  for (y = x->PolicyReference; n>=0 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_All_POP_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wsp_All_POP_PolicyReference(struct zx_wsp_All_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  y = x->PolicyReference;
  if (y)
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_All_PUSH_PolicyReference) */

void zx_wsp_All_PUSH_PolicyReference(struct zx_wsp_All_s* x, struct zx_wsp_PolicyReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyReference->gg.g;
  x->PolicyReference = z;
}

/* FUNC(zx_wsp_All_REV_PolicyReference) */

void zx_wsp_All_REV_PolicyReference(struct zx_wsp_All_s* x)
{
  struct zx_wsp_PolicyReference_s* nxt;
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return;
  y = x->PolicyReference;
  if (!y) return;
  x->PolicyReference = 0;
  while (y) {
    nxt = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicyReference->gg.g;
    x->PolicyReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_All_PUT_PolicyReference) */

void zx_wsp_All_PUT_PolicyReference(struct zx_wsp_All_s* x, int n, struct zx_wsp_PolicyReference_s* z)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x || !z) return;
  y = x->PolicyReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicyReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_All_ADD_PolicyReference) */

void zx_wsp_All_ADD_PolicyReference(struct zx_wsp_All_s* x, int n, struct zx_wsp_PolicyReference_s* z)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicyReference->gg.g;
    x->PolicyReference = z;
    return;
  case -1:
    y = x->PolicyReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyReference; n > 1 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_All_DEL_PolicyReference) */

void zx_wsp_All_DEL_PolicyReference(struct zx_wsp_All_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)x->PolicyReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_PolicyReference_s*)x->PolicyReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif













#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_ExactlyOne_NUM_Policy) */

int zx_wsp_ExactlyOne_NUM_Policy(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_Policy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Policy; y; ++n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_ExactlyOne_GET_Policy) */

struct zx_wsp_Policy_s* zx_wsp_ExactlyOne_GET_Policy(struct zx_wsp_ExactlyOne_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  for (y = x->Policy; n>=0 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_ExactlyOne_POP_Policy) */

struct zx_wsp_Policy_s* zx_wsp_ExactlyOne_POP_Policy(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  y = x->Policy;
  if (y)
    x->Policy = (struct zx_wsp_Policy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_ExactlyOne_PUSH_Policy) */

void zx_wsp_ExactlyOne_PUSH_Policy(struct zx_wsp_ExactlyOne_s* x, struct zx_wsp_Policy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Policy->gg.g;
  x->Policy = z;
}

/* FUNC(zx_wsp_ExactlyOne_REV_Policy) */

void zx_wsp_ExactlyOne_REV_Policy(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_Policy_s* nxt;
  struct zx_wsp_Policy_s* y;
  if (!x) return;
  y = x->Policy;
  if (!y) return;
  x->Policy = 0;
  while (y) {
    nxt = (struct zx_wsp_Policy_s*)y->gg.g.n;
    y->gg.g.n = &x->Policy->gg.g;
    x->Policy = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_ExactlyOne_PUT_Policy) */

void zx_wsp_ExactlyOne_PUT_Policy(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_Policy_s* z)
{
  struct zx_wsp_Policy_s* y;
  if (!x || !z) return;
  y = x->Policy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Policy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_ExactlyOne_ADD_Policy) */

void zx_wsp_ExactlyOne_ADD_Policy(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_Policy_s* z)
{
  struct zx_wsp_Policy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Policy->gg.g;
    x->Policy = z;
    return;
  case -1:
    y = x->Policy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_ExactlyOne_DEL_Policy) */

void zx_wsp_ExactlyOne_DEL_Policy(struct zx_wsp_ExactlyOne_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Policy = (struct zx_wsp_Policy_s*)x->Policy->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_Policy_s*)x->Policy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_ExactlyOne_NUM_All) */

int zx_wsp_ExactlyOne_NUM_All(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_All_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->All; y; ++n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_ExactlyOne_GET_All) */

struct zx_wsp_All_s* zx_wsp_ExactlyOne_GET_All(struct zx_wsp_ExactlyOne_s* x, int n)
{
  struct zx_wsp_All_s* y;
  if (!x) return 0;
  for (y = x->All; n>=0 && y; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_ExactlyOne_POP_All) */

struct zx_wsp_All_s* zx_wsp_ExactlyOne_POP_All(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_All_s* y;
  if (!x) return 0;
  y = x->All;
  if (y)
    x->All = (struct zx_wsp_All_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_ExactlyOne_PUSH_All) */

void zx_wsp_ExactlyOne_PUSH_All(struct zx_wsp_ExactlyOne_s* x, struct zx_wsp_All_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->All->gg.g;
  x->All = z;
}

/* FUNC(zx_wsp_ExactlyOne_REV_All) */

void zx_wsp_ExactlyOne_REV_All(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_All_s* nxt;
  struct zx_wsp_All_s* y;
  if (!x) return;
  y = x->All;
  if (!y) return;
  x->All = 0;
  while (y) {
    nxt = (struct zx_wsp_All_s*)y->gg.g.n;
    y->gg.g.n = &x->All->gg.g;
    x->All = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_ExactlyOne_PUT_All) */

void zx_wsp_ExactlyOne_PUT_All(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_All_s* z)
{
  struct zx_wsp_All_s* y;
  if (!x || !z) return;
  y = x->All;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->All = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_ExactlyOne_ADD_All) */

void zx_wsp_ExactlyOne_ADD_All(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_All_s* z)
{
  struct zx_wsp_All_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->All->gg.g;
    x->All = z;
    return;
  case -1:
    y = x->All;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->All; n > 1 && y; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_ExactlyOne_DEL_All) */

void zx_wsp_ExactlyOne_DEL_All(struct zx_wsp_ExactlyOne_s* x, int n)
{
  struct zx_wsp_All_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->All = (struct zx_wsp_All_s*)x->All->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_All_s*)x->All;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->All; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_ExactlyOne_NUM_ExactlyOne) */

int zx_wsp_ExactlyOne_NUM_ExactlyOne(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_ExactlyOne_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ExactlyOne; y; ++n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_ExactlyOne_GET_ExactlyOne) */

struct zx_wsp_ExactlyOne_s* zx_wsp_ExactlyOne_GET_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, int n)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return 0;
  for (y = x->ExactlyOne; n>=0 && y; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_ExactlyOne_POP_ExactlyOne) */

struct zx_wsp_ExactlyOne_s* zx_wsp_ExactlyOne_POP_ExactlyOne(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return 0;
  y = x->ExactlyOne;
  if (y)
    x->ExactlyOne = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_ExactlyOne_PUSH_ExactlyOne) */

void zx_wsp_ExactlyOne_PUSH_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, struct zx_wsp_ExactlyOne_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ExactlyOne->gg.g;
  x->ExactlyOne = z;
}

/* FUNC(zx_wsp_ExactlyOne_REV_ExactlyOne) */

void zx_wsp_ExactlyOne_REV_ExactlyOne(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_ExactlyOne_s* nxt;
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return;
  y = x->ExactlyOne;
  if (!y) return;
  x->ExactlyOne = 0;
  while (y) {
    nxt = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n;
    y->gg.g.n = &x->ExactlyOne->gg.g;
    x->ExactlyOne = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_ExactlyOne_PUT_ExactlyOne) */

void zx_wsp_ExactlyOne_PUT_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_ExactlyOne_s* z)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x || !z) return;
  y = x->ExactlyOne;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ExactlyOne = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_ExactlyOne_ADD_ExactlyOne) */

void zx_wsp_ExactlyOne_ADD_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_ExactlyOne_s* z)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ExactlyOne->gg.g;
    x->ExactlyOne = z;
    return;
  case -1:
    y = x->ExactlyOne;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ExactlyOne; n > 1 && y; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_ExactlyOne_DEL_ExactlyOne) */

void zx_wsp_ExactlyOne_DEL_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, int n)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ExactlyOne = (struct zx_wsp_ExactlyOne_s*)x->ExactlyOne->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_ExactlyOne_s*)x->ExactlyOne;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ExactlyOne; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_ExactlyOne_NUM_PolicyReference) */

int zx_wsp_ExactlyOne_NUM_PolicyReference(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyReference; y; ++n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_ExactlyOne_GET_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wsp_ExactlyOne_GET_PolicyReference(struct zx_wsp_ExactlyOne_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  for (y = x->PolicyReference; n>=0 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_ExactlyOne_POP_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wsp_ExactlyOne_POP_PolicyReference(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  y = x->PolicyReference;
  if (y)
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_ExactlyOne_PUSH_PolicyReference) */

void zx_wsp_ExactlyOne_PUSH_PolicyReference(struct zx_wsp_ExactlyOne_s* x, struct zx_wsp_PolicyReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyReference->gg.g;
  x->PolicyReference = z;
}

/* FUNC(zx_wsp_ExactlyOne_REV_PolicyReference) */

void zx_wsp_ExactlyOne_REV_PolicyReference(struct zx_wsp_ExactlyOne_s* x)
{
  struct zx_wsp_PolicyReference_s* nxt;
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return;
  y = x->PolicyReference;
  if (!y) return;
  x->PolicyReference = 0;
  while (y) {
    nxt = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicyReference->gg.g;
    x->PolicyReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_ExactlyOne_PUT_PolicyReference) */

void zx_wsp_ExactlyOne_PUT_PolicyReference(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_PolicyReference_s* z)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x || !z) return;
  y = x->PolicyReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicyReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_ExactlyOne_ADD_PolicyReference) */

void zx_wsp_ExactlyOne_ADD_PolicyReference(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_PolicyReference_s* z)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicyReference->gg.g;
    x->PolicyReference = z;
    return;
  case -1:
    y = x->PolicyReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyReference; n > 1 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_ExactlyOne_DEL_PolicyReference) */

void zx_wsp_ExactlyOne_DEL_PolicyReference(struct zx_wsp_ExactlyOne_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)x->PolicyReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_PolicyReference_s*)x->PolicyReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_Policy_NUM_Policy) */

int zx_wsp_Policy_NUM_Policy(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_Policy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Policy; y; ++n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_Policy_GET_Policy) */

struct zx_wsp_Policy_s* zx_wsp_Policy_GET_Policy(struct zx_wsp_Policy_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  for (y = x->Policy; n>=0 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_Policy_POP_Policy) */

struct zx_wsp_Policy_s* zx_wsp_Policy_POP_Policy(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  y = x->Policy;
  if (y)
    x->Policy = (struct zx_wsp_Policy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_Policy_PUSH_Policy) */

void zx_wsp_Policy_PUSH_Policy(struct zx_wsp_Policy_s* x, struct zx_wsp_Policy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Policy->gg.g;
  x->Policy = z;
}

/* FUNC(zx_wsp_Policy_REV_Policy) */

void zx_wsp_Policy_REV_Policy(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_Policy_s* nxt;
  struct zx_wsp_Policy_s* y;
  if (!x) return;
  y = x->Policy;
  if (!y) return;
  x->Policy = 0;
  while (y) {
    nxt = (struct zx_wsp_Policy_s*)y->gg.g.n;
    y->gg.g.n = &x->Policy->gg.g;
    x->Policy = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_Policy_PUT_Policy) */

void zx_wsp_Policy_PUT_Policy(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_Policy_s* z)
{
  struct zx_wsp_Policy_s* y;
  if (!x || !z) return;
  y = x->Policy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Policy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_Policy_ADD_Policy) */

void zx_wsp_Policy_ADD_Policy(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_Policy_s* z)
{
  struct zx_wsp_Policy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Policy->gg.g;
    x->Policy = z;
    return;
  case -1:
    y = x->Policy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_Policy_DEL_Policy) */

void zx_wsp_Policy_DEL_Policy(struct zx_wsp_Policy_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Policy = (struct zx_wsp_Policy_s*)x->Policy->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_Policy_s*)x->Policy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_Policy_NUM_All) */

int zx_wsp_Policy_NUM_All(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_All_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->All; y; ++n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_Policy_GET_All) */

struct zx_wsp_All_s* zx_wsp_Policy_GET_All(struct zx_wsp_Policy_s* x, int n)
{
  struct zx_wsp_All_s* y;
  if (!x) return 0;
  for (y = x->All; n>=0 && y; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_Policy_POP_All) */

struct zx_wsp_All_s* zx_wsp_Policy_POP_All(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_All_s* y;
  if (!x) return 0;
  y = x->All;
  if (y)
    x->All = (struct zx_wsp_All_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_Policy_PUSH_All) */

void zx_wsp_Policy_PUSH_All(struct zx_wsp_Policy_s* x, struct zx_wsp_All_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->All->gg.g;
  x->All = z;
}

/* FUNC(zx_wsp_Policy_REV_All) */

void zx_wsp_Policy_REV_All(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_All_s* nxt;
  struct zx_wsp_All_s* y;
  if (!x) return;
  y = x->All;
  if (!y) return;
  x->All = 0;
  while (y) {
    nxt = (struct zx_wsp_All_s*)y->gg.g.n;
    y->gg.g.n = &x->All->gg.g;
    x->All = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_Policy_PUT_All) */

void zx_wsp_Policy_PUT_All(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_All_s* z)
{
  struct zx_wsp_All_s* y;
  if (!x || !z) return;
  y = x->All;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->All = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_Policy_ADD_All) */

void zx_wsp_Policy_ADD_All(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_All_s* z)
{
  struct zx_wsp_All_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->All->gg.g;
    x->All = z;
    return;
  case -1:
    y = x->All;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->All; n > 1 && y; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_Policy_DEL_All) */

void zx_wsp_Policy_DEL_All(struct zx_wsp_Policy_s* x, int n)
{
  struct zx_wsp_All_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->All = (struct zx_wsp_All_s*)x->All->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_All_s*)x->All;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->All; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_All_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_Policy_NUM_ExactlyOne) */

int zx_wsp_Policy_NUM_ExactlyOne(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_ExactlyOne_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ExactlyOne; y; ++n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_Policy_GET_ExactlyOne) */

struct zx_wsp_ExactlyOne_s* zx_wsp_Policy_GET_ExactlyOne(struct zx_wsp_Policy_s* x, int n)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return 0;
  for (y = x->ExactlyOne; n>=0 && y; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_Policy_POP_ExactlyOne) */

struct zx_wsp_ExactlyOne_s* zx_wsp_Policy_POP_ExactlyOne(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return 0;
  y = x->ExactlyOne;
  if (y)
    x->ExactlyOne = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_Policy_PUSH_ExactlyOne) */

void zx_wsp_Policy_PUSH_ExactlyOne(struct zx_wsp_Policy_s* x, struct zx_wsp_ExactlyOne_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ExactlyOne->gg.g;
  x->ExactlyOne = z;
}

/* FUNC(zx_wsp_Policy_REV_ExactlyOne) */

void zx_wsp_Policy_REV_ExactlyOne(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_ExactlyOne_s* nxt;
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return;
  y = x->ExactlyOne;
  if (!y) return;
  x->ExactlyOne = 0;
  while (y) {
    nxt = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n;
    y->gg.g.n = &x->ExactlyOne->gg.g;
    x->ExactlyOne = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_Policy_PUT_ExactlyOne) */

void zx_wsp_Policy_PUT_ExactlyOne(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_ExactlyOne_s* z)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x || !z) return;
  y = x->ExactlyOne;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ExactlyOne = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_Policy_ADD_ExactlyOne) */

void zx_wsp_Policy_ADD_ExactlyOne(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_ExactlyOne_s* z)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ExactlyOne->gg.g;
    x->ExactlyOne = z;
    return;
  case -1:
    y = x->ExactlyOne;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ExactlyOne; n > 1 && y; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_Policy_DEL_ExactlyOne) */

void zx_wsp_Policy_DEL_ExactlyOne(struct zx_wsp_Policy_s* x, int n)
{
  struct zx_wsp_ExactlyOne_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ExactlyOne = (struct zx_wsp_ExactlyOne_s*)x->ExactlyOne->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_ExactlyOne_s*)x->ExactlyOne;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ExactlyOne; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_ExactlyOne_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_Policy_NUM_PolicyReference) */

int zx_wsp_Policy_NUM_PolicyReference(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyReference; y; ++n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_Policy_GET_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wsp_Policy_GET_PolicyReference(struct zx_wsp_Policy_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  for (y = x->PolicyReference; n>=0 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_Policy_POP_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wsp_Policy_POP_PolicyReference(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  y = x->PolicyReference;
  if (y)
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_Policy_PUSH_PolicyReference) */

void zx_wsp_Policy_PUSH_PolicyReference(struct zx_wsp_Policy_s* x, struct zx_wsp_PolicyReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyReference->gg.g;
  x->PolicyReference = z;
}

/* FUNC(zx_wsp_Policy_REV_PolicyReference) */

void zx_wsp_Policy_REV_PolicyReference(struct zx_wsp_Policy_s* x)
{
  struct zx_wsp_PolicyReference_s* nxt;
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return;
  y = x->PolicyReference;
  if (!y) return;
  x->PolicyReference = 0;
  while (y) {
    nxt = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicyReference->gg.g;
    x->PolicyReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_Policy_PUT_PolicyReference) */

void zx_wsp_Policy_PUT_PolicyReference(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_PolicyReference_s* z)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x || !z) return;
  y = x->PolicyReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicyReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_Policy_ADD_PolicyReference) */

void zx_wsp_Policy_ADD_PolicyReference(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_PolicyReference_s* z)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicyReference->gg.g;
    x->PolicyReference = z;
    return;
  case -1:
    y = x->PolicyReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyReference; n > 1 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_Policy_DEL_PolicyReference) */

void zx_wsp_Policy_DEL_PolicyReference(struct zx_wsp_Policy_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)x->PolicyReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_PolicyReference_s*)x->PolicyReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_wsp_Policy_GET_Name) */
struct zx_str* zx_wsp_Policy_GET_Name(struct zx_wsp_Policy_s* x) { return x->Name; }
/* FUNC(zx_wsp_Policy_PUT_Name) */
void zx_wsp_Policy_PUT_Name(struct zx_wsp_Policy_s* x, struct zx_str* y) { x->Name = y; }
/* FUNC(zx_wsp_Policy_GET_Id) */
struct zx_str* zx_wsp_Policy_GET_Id(struct zx_wsp_Policy_s* x) { return x->Id; }
/* FUNC(zx_wsp_Policy_PUT_Id) */
void zx_wsp_Policy_PUT_Id(struct zx_wsp_Policy_s* x, struct zx_str* y) { x->Id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_PolicyAttachment_NUM_AppliesTo) */

int zx_wsp_PolicyAttachment_NUM_AppliesTo(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_AppliesTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AppliesTo; y; ++n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_PolicyAttachment_GET_AppliesTo) */

struct zx_wsp_AppliesTo_s* zx_wsp_PolicyAttachment_GET_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, int n)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x) return 0;
  for (y = x->AppliesTo; n>=0 && y; --n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_PolicyAttachment_POP_AppliesTo) */

struct zx_wsp_AppliesTo_s* zx_wsp_PolicyAttachment_POP_AppliesTo(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x) return 0;
  y = x->AppliesTo;
  if (y)
    x->AppliesTo = (struct zx_wsp_AppliesTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_PolicyAttachment_PUSH_AppliesTo) */

void zx_wsp_PolicyAttachment_PUSH_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, struct zx_wsp_AppliesTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AppliesTo->gg.g;
  x->AppliesTo = z;
}

/* FUNC(zx_wsp_PolicyAttachment_REV_AppliesTo) */

void zx_wsp_PolicyAttachment_REV_AppliesTo(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_AppliesTo_s* nxt;
  struct zx_wsp_AppliesTo_s* y;
  if (!x) return;
  y = x->AppliesTo;
  if (!y) return;
  x->AppliesTo = 0;
  while (y) {
    nxt = (struct zx_wsp_AppliesTo_s*)y->gg.g.n;
    y->gg.g.n = &x->AppliesTo->gg.g;
    x->AppliesTo = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_PolicyAttachment_PUT_AppliesTo) */

void zx_wsp_PolicyAttachment_PUT_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_AppliesTo_s* z)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x || !z) return;
  y = x->AppliesTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AppliesTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_PolicyAttachment_ADD_AppliesTo) */

void zx_wsp_PolicyAttachment_ADD_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_AppliesTo_s* z)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AppliesTo->gg.g;
    x->AppliesTo = z;
    return;
  case -1:
    y = x->AppliesTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AppliesTo; n > 1 && y; --n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_PolicyAttachment_DEL_AppliesTo) */

void zx_wsp_PolicyAttachment_DEL_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, int n)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AppliesTo = (struct zx_wsp_AppliesTo_s*)x->AppliesTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_AppliesTo_s*)x->AppliesTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AppliesTo; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_PolicyAttachment_NUM_Policy) */

int zx_wsp_PolicyAttachment_NUM_Policy(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_Policy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Policy; y; ++n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_PolicyAttachment_GET_Policy) */

struct zx_wsp_Policy_s* zx_wsp_PolicyAttachment_GET_Policy(struct zx_wsp_PolicyAttachment_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  for (y = x->Policy; n>=0 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_PolicyAttachment_POP_Policy) */

struct zx_wsp_Policy_s* zx_wsp_PolicyAttachment_POP_Policy(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  y = x->Policy;
  if (y)
    x->Policy = (struct zx_wsp_Policy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_PolicyAttachment_PUSH_Policy) */

void zx_wsp_PolicyAttachment_PUSH_Policy(struct zx_wsp_PolicyAttachment_s* x, struct zx_wsp_Policy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Policy->gg.g;
  x->Policy = z;
}

/* FUNC(zx_wsp_PolicyAttachment_REV_Policy) */

void zx_wsp_PolicyAttachment_REV_Policy(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_Policy_s* nxt;
  struct zx_wsp_Policy_s* y;
  if (!x) return;
  y = x->Policy;
  if (!y) return;
  x->Policy = 0;
  while (y) {
    nxt = (struct zx_wsp_Policy_s*)y->gg.g.n;
    y->gg.g.n = &x->Policy->gg.g;
    x->Policy = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_PolicyAttachment_PUT_Policy) */

void zx_wsp_PolicyAttachment_PUT_Policy(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_Policy_s* z)
{
  struct zx_wsp_Policy_s* y;
  if (!x || !z) return;
  y = x->Policy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Policy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_PolicyAttachment_ADD_Policy) */

void zx_wsp_PolicyAttachment_ADD_Policy(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_Policy_s* z)
{
  struct zx_wsp_Policy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Policy->gg.g;
    x->Policy = z;
    return;
  case -1:
    y = x->Policy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_PolicyAttachment_DEL_Policy) */

void zx_wsp_PolicyAttachment_DEL_Policy(struct zx_wsp_PolicyAttachment_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Policy = (struct zx_wsp_Policy_s*)x->Policy->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_Policy_s*)x->Policy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wsp_PolicyAttachment_NUM_PolicyReference) */

int zx_wsp_PolicyAttachment_NUM_PolicyReference(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyReference; y; ++n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsp_PolicyAttachment_GET_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wsp_PolicyAttachment_GET_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  for (y = x->PolicyReference; n>=0 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsp_PolicyAttachment_POP_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wsp_PolicyAttachment_POP_PolicyReference(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  y = x->PolicyReference;
  if (y)
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsp_PolicyAttachment_PUSH_PolicyReference) */

void zx_wsp_PolicyAttachment_PUSH_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, struct zx_wsp_PolicyReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyReference->gg.g;
  x->PolicyReference = z;
}

/* FUNC(zx_wsp_PolicyAttachment_REV_PolicyReference) */

void zx_wsp_PolicyAttachment_REV_PolicyReference(struct zx_wsp_PolicyAttachment_s* x)
{
  struct zx_wsp_PolicyReference_s* nxt;
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return;
  y = x->PolicyReference;
  if (!y) return;
  x->PolicyReference = 0;
  while (y) {
    nxt = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicyReference->gg.g;
    x->PolicyReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wsp_PolicyAttachment_PUT_PolicyReference) */

void zx_wsp_PolicyAttachment_PUT_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_PolicyReference_s* z)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x || !z) return;
  y = x->PolicyReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicyReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsp_PolicyAttachment_ADD_PolicyReference) */

void zx_wsp_PolicyAttachment_ADD_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_PolicyReference_s* z)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicyReference->gg.g;
    x->PolicyReference = z;
    return;
  case -1:
    y = x->PolicyReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyReference; n > 1 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsp_PolicyAttachment_DEL_PolicyReference) */

void zx_wsp_PolicyAttachment_DEL_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)x->PolicyReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsp_PolicyReference_s*)x->PolicyReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_wsp_PolicyReference_GET_URI) */
struct zx_str* zx_wsp_PolicyReference_GET_URI(struct zx_wsp_PolicyReference_s* x) { return x->URI; }
/* FUNC(zx_wsp_PolicyReference_PUT_URI) */
void zx_wsp_PolicyReference_PUT_URI(struct zx_wsp_PolicyReference_s* x, struct zx_str* y) { x->URI = y; }
/* FUNC(zx_wsp_PolicyReference_GET_Digest) */
struct zx_str* zx_wsp_PolicyReference_GET_Digest(struct zx_wsp_PolicyReference_s* x) { return x->Digest; }
/* FUNC(zx_wsp_PolicyReference_PUT_Digest) */
void zx_wsp_PolicyReference_PUT_Digest(struct zx_wsp_PolicyReference_s* x, struct zx_str* y) { x->Digest = y; }
/* FUNC(zx_wsp_PolicyReference_GET_DigestAlgorithm) */
struct zx_str* zx_wsp_PolicyReference_GET_DigestAlgorithm(struct zx_wsp_PolicyReference_s* x) { return x->DigestAlgorithm; }
/* FUNC(zx_wsp_PolicyReference_PUT_DigestAlgorithm) */
void zx_wsp_PolicyReference_PUT_DigestAlgorithm(struct zx_wsp_PolicyReference_s* x, struct zx_str* y) { x->DigestAlgorithm = y; }





/* EOF -- c/zx-wsp-getput.c */
