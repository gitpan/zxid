/* c/zx-dise-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** getput-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** Id: getput-templ.c,v 1.5 2006/08/28 05:23:23 sampo Exp $
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
#include "c/zx-dise-data.h"



/* FUNC(zx_dise_Body_NUM_SvcMDAssociationAdd) */

int zx_dise_Body_NUM_SvcMDAssociationAdd(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAdd; y; ++n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDAssociationAdd) */

struct zx_di_SvcMDAssociationAdd_s* zx_dise_Body_GET_SvcMDAssociationAdd(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAdd; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDAssociationAdd) */

struct zx_di_SvcMDAssociationAdd_s* zx_dise_Body_POP_SvcMDAssociationAdd(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationAdd;
  if (y)
    x->SvcMDAssociationAdd = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDAssociationAdd) */

void zx_dise_Body_PUSH_SvcMDAssociationAdd(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationAdd_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationAdd->gg.g;
  x->SvcMDAssociationAdd = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDAssociationAdd) */

void zx_dise_Body_REV_SvcMDAssociationAdd(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationAdd_s* nxt;
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x) return;
  y = x->SvcMDAssociationAdd;
  if (!y) return;
  x->SvcMDAssociationAdd = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationAdd->gg.g;
    x->SvcMDAssociationAdd = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDAssociationAdd) */

void zx_dise_Body_PUT_SvcMDAssociationAdd(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationAdd_s* z)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationAdd;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationAdd = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDAssociationAdd) */

void zx_dise_Body_ADD_SvcMDAssociationAdd(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationAdd_s* z)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationAdd->gg.g;
    x->SvcMDAssociationAdd = z;
    return;
  case -1:
    y = x->SvcMDAssociationAdd;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAdd; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDAssociationAdd) */

void zx_dise_Body_DEL_SvcMDAssociationAdd(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationAdd = (struct zx_di_SvcMDAssociationAdd_s*)x->SvcMDAssociationAdd->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationAdd_s*)x->SvcMDAssociationAdd;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAdd; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDAssociationAddResponse) */

int zx_dise_Body_NUM_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAddResponse; y; ++n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDAssociationAddResponse) */

struct zx_di_SvcMDAssociationAddResponse_s* zx_dise_Body_GET_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAddResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDAssociationAddResponse) */

struct zx_di_SvcMDAssociationAddResponse_s* zx_dise_Body_POP_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationAddResponse;
  if (y)
    x->SvcMDAssociationAddResponse = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDAssociationAddResponse) */

void zx_dise_Body_PUSH_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationAddResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationAddResponse->gg.g;
  x->SvcMDAssociationAddResponse = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDAssociationAddResponse) */

void zx_dise_Body_REV_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationAddResponse_s* nxt;
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationAddResponse;
  if (!y) return;
  x->SvcMDAssociationAddResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationAddResponse->gg.g;
    x->SvcMDAssociationAddResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDAssociationAddResponse) */

void zx_dise_Body_PUT_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationAddResponse_s* z)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationAddResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationAddResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDAssociationAddResponse) */

void zx_dise_Body_ADD_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationAddResponse_s* z)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationAddResponse->gg.g;
    x->SvcMDAssociationAddResponse = z;
    return;
  case -1:
    y = x->SvcMDAssociationAddResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAddResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDAssociationAddResponse) */

void zx_dise_Body_DEL_SvcMDAssociationAddResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationAddResponse = (struct zx_di_SvcMDAssociationAddResponse_s*)x->SvcMDAssociationAddResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationAddResponse_s*)x->SvcMDAssociationAddResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAddResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDAssociationDelete) */

int zx_dise_Body_NUM_SvcMDAssociationDelete(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDelete; y; ++n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDAssociationDelete) */

struct zx_di_SvcMDAssociationDelete_s* zx_dise_Body_GET_SvcMDAssociationDelete(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDelete; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDAssociationDelete) */

struct zx_di_SvcMDAssociationDelete_s* zx_dise_Body_POP_SvcMDAssociationDelete(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationDelete;
  if (y)
    x->SvcMDAssociationDelete = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDAssociationDelete) */

void zx_dise_Body_PUSH_SvcMDAssociationDelete(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationDelete->gg.g;
  x->SvcMDAssociationDelete = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDAssociationDelete) */

void zx_dise_Body_REV_SvcMDAssociationDelete(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationDelete_s* nxt;
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x) return;
  y = x->SvcMDAssociationDelete;
  if (!y) return;
  x->SvcMDAssociationDelete = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationDelete->gg.g;
    x->SvcMDAssociationDelete = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDAssociationDelete) */

void zx_dise_Body_PUT_SvcMDAssociationDelete(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationDelete_s* z)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDAssociationDelete) */

void zx_dise_Body_ADD_SvcMDAssociationDelete(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationDelete_s* z)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationDelete->gg.g;
    x->SvcMDAssociationDelete = z;
    return;
  case -1:
    y = x->SvcMDAssociationDelete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDelete; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDAssociationDelete) */

void zx_dise_Body_DEL_SvcMDAssociationDelete(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationDelete = (struct zx_di_SvcMDAssociationDelete_s*)x->SvcMDAssociationDelete->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationDelete_s*)x->SvcMDAssociationDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDelete; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDAssociationDeleteResponse) */

int zx_dise_Body_NUM_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDeleteResponse; y; ++n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDAssociationDeleteResponse) */

struct zx_di_SvcMDAssociationDeleteResponse_s* zx_dise_Body_GET_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDeleteResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDAssociationDeleteResponse) */

struct zx_di_SvcMDAssociationDeleteResponse_s* zx_dise_Body_POP_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationDeleteResponse;
  if (y)
    x->SvcMDAssociationDeleteResponse = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDAssociationDeleteResponse) */

void zx_dise_Body_PUSH_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
  x->SvcMDAssociationDeleteResponse = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDAssociationDeleteResponse) */

void zx_dise_Body_REV_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* nxt;
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationDeleteResponse;
  if (!y) return;
  x->SvcMDAssociationDeleteResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
    x->SvcMDAssociationDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDAssociationDeleteResponse) */

void zx_dise_Body_PUT_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationDeleteResponse_s* z)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDAssociationDeleteResponse) */

void zx_dise_Body_ADD_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationDeleteResponse_s* z)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
    x->SvcMDAssociationDeleteResponse = z;
    return;
  case -1:
    y = x->SvcMDAssociationDeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDeleteResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDAssociationDeleteResponse) */

void zx_dise_Body_DEL_SvcMDAssociationDeleteResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationDeleteResponse = (struct zx_di_SvcMDAssociationDeleteResponse_s*)x->SvcMDAssociationDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)x->SvcMDAssociationDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDAssociationQuery) */

int zx_dise_Body_NUM_SvcMDAssociationQuery(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQuery; y; ++n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDAssociationQuery) */

struct zx_di_SvcMDAssociationQuery_s* zx_dise_Body_GET_SvcMDAssociationQuery(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQuery; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDAssociationQuery) */

struct zx_di_SvcMDAssociationQuery_s* zx_dise_Body_POP_SvcMDAssociationQuery(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationQuery;
  if (y)
    x->SvcMDAssociationQuery = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDAssociationQuery) */

void zx_dise_Body_PUSH_SvcMDAssociationQuery(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationQuery->gg.g;
  x->SvcMDAssociationQuery = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDAssociationQuery) */

void zx_dise_Body_REV_SvcMDAssociationQuery(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationQuery_s* nxt;
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x) return;
  y = x->SvcMDAssociationQuery;
  if (!y) return;
  x->SvcMDAssociationQuery = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationQuery->gg.g;
    x->SvcMDAssociationQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDAssociationQuery) */

void zx_dise_Body_PUT_SvcMDAssociationQuery(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationQuery_s* z)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDAssociationQuery) */

void zx_dise_Body_ADD_SvcMDAssociationQuery(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationQuery_s* z)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationQuery->gg.g;
    x->SvcMDAssociationQuery = z;
    return;
  case -1:
    y = x->SvcMDAssociationQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQuery; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDAssociationQuery) */

void zx_dise_Body_DEL_SvcMDAssociationQuery(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationQuery = (struct zx_di_SvcMDAssociationQuery_s*)x->SvcMDAssociationQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationQuery_s*)x->SvcMDAssociationQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDAssociationQueryResponse) */

int zx_dise_Body_NUM_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQueryResponse; y; ++n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDAssociationQueryResponse) */

struct zx_di_SvcMDAssociationQueryResponse_s* zx_dise_Body_GET_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQueryResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDAssociationQueryResponse) */

struct zx_di_SvcMDAssociationQueryResponse_s* zx_dise_Body_POP_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationQueryResponse;
  if (y)
    x->SvcMDAssociationQueryResponse = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDAssociationQueryResponse) */

void zx_dise_Body_PUSH_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDAssociationQueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationQueryResponse->gg.g;
  x->SvcMDAssociationQueryResponse = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDAssociationQueryResponse) */

void zx_dise_Body_REV_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* nxt;
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationQueryResponse;
  if (!y) return;
  x->SvcMDAssociationQueryResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationQueryResponse->gg.g;
    x->SvcMDAssociationQueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDAssociationQueryResponse) */

void zx_dise_Body_PUT_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationQueryResponse_s* z)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationQueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationQueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDAssociationQueryResponse) */

void zx_dise_Body_ADD_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDAssociationQueryResponse_s* z)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationQueryResponse->gg.g;
    x->SvcMDAssociationQueryResponse = z;
    return;
  case -1:
    y = x->SvcMDAssociationQueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQueryResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDAssociationQueryResponse) */

void zx_dise_Body_DEL_SvcMDAssociationQueryResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationQueryResponse = (struct zx_di_SvcMDAssociationQueryResponse_s*)x->SvcMDAssociationQueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationQueryResponse_s*)x->SvcMDAssociationQueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDRegister) */

int zx_dise_Body_NUM_SvcMDRegister(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDRegister_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDRegister; y; ++n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDRegister) */

struct zx_di_SvcMDRegister_s* zx_dise_Body_GET_SvcMDRegister(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x) return 0;
  for (y = x->SvcMDRegister; n>=0 && y; --n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDRegister) */

struct zx_di_SvcMDRegister_s* zx_dise_Body_POP_SvcMDRegister(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x) return 0;
  y = x->SvcMDRegister;
  if (y)
    x->SvcMDRegister = (struct zx_di_SvcMDRegister_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDRegister) */

void zx_dise_Body_PUSH_SvcMDRegister(struct zx_dise_Body_s* x, struct zx_di_SvcMDRegister_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDRegister->gg.g;
  x->SvcMDRegister = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDRegister) */

void zx_dise_Body_REV_SvcMDRegister(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDRegister_s* nxt;
  struct zx_di_SvcMDRegister_s* y;
  if (!x) return;
  y = x->SvcMDRegister;
  if (!y) return;
  x->SvcMDRegister = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDRegister_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDRegister->gg.g;
    x->SvcMDRegister = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDRegister) */

void zx_dise_Body_PUT_SvcMDRegister(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDRegister_s* z)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x || !z) return;
  y = x->SvcMDRegister;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDRegister = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDRegister) */

void zx_dise_Body_ADD_SvcMDRegister(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDRegister_s* z)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDRegister->gg.g;
    x->SvcMDRegister = z;
    return;
  case -1:
    y = x->SvcMDRegister;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegister; n > 1 && y; --n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDRegister) */

void zx_dise_Body_DEL_SvcMDRegister(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDRegister = (struct zx_di_SvcMDRegister_s*)x->SvcMDRegister->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDRegister_s*)x->SvcMDRegister;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegister; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDRegisterResponse) */

int zx_dise_Body_NUM_SvcMDRegisterResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDRegisterResponse; y; ++n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDRegisterResponse) */

struct zx_di_SvcMDRegisterResponse_s* zx_dise_Body_GET_SvcMDRegisterResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDRegisterResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDRegisterResponse) */

struct zx_di_SvcMDRegisterResponse_s* zx_dise_Body_POP_SvcMDRegisterResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDRegisterResponse;
  if (y)
    x->SvcMDRegisterResponse = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDRegisterResponse) */

void zx_dise_Body_PUSH_SvcMDRegisterResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDRegisterResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDRegisterResponse->gg.g;
  x->SvcMDRegisterResponse = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDRegisterResponse) */

void zx_dise_Body_REV_SvcMDRegisterResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDRegisterResponse_s* nxt;
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x) return;
  y = x->SvcMDRegisterResponse;
  if (!y) return;
  x->SvcMDRegisterResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDRegisterResponse->gg.g;
    x->SvcMDRegisterResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDRegisterResponse) */

void zx_dise_Body_PUT_SvcMDRegisterResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDRegisterResponse_s* z)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDRegisterResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDRegisterResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDRegisterResponse) */

void zx_dise_Body_ADD_SvcMDRegisterResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDRegisterResponse_s* z)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDRegisterResponse->gg.g;
    x->SvcMDRegisterResponse = z;
    return;
  case -1:
    y = x->SvcMDRegisterResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegisterResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDRegisterResponse) */

void zx_dise_Body_DEL_SvcMDRegisterResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDRegisterResponse = (struct zx_di_SvcMDRegisterResponse_s*)x->SvcMDRegisterResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDRegisterResponse_s*)x->SvcMDRegisterResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegisterResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDDelete) */

int zx_dise_Body_NUM_SvcMDDelete(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDDelete; y; ++n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDDelete) */

struct zx_di_SvcMDDelete_s* zx_dise_Body_GET_SvcMDDelete(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x) return 0;
  for (y = x->SvcMDDelete; n>=0 && y; --n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDDelete) */

struct zx_di_SvcMDDelete_s* zx_dise_Body_POP_SvcMDDelete(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x) return 0;
  y = x->SvcMDDelete;
  if (y)
    x->SvcMDDelete = (struct zx_di_SvcMDDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDDelete) */

void zx_dise_Body_PUSH_SvcMDDelete(struct zx_dise_Body_s* x, struct zx_di_SvcMDDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDDelete->gg.g;
  x->SvcMDDelete = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDDelete) */

void zx_dise_Body_REV_SvcMDDelete(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDDelete_s* nxt;
  struct zx_di_SvcMDDelete_s* y;
  if (!x) return;
  y = x->SvcMDDelete;
  if (!y) return;
  x->SvcMDDelete = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDDelete->gg.g;
    x->SvcMDDelete = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDDelete) */

void zx_dise_Body_PUT_SvcMDDelete(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDDelete_s* z)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x || !z) return;
  y = x->SvcMDDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDDelete) */

void zx_dise_Body_ADD_SvcMDDelete(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDDelete_s* z)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDDelete->gg.g;
    x->SvcMDDelete = z;
    return;
  case -1:
    y = x->SvcMDDelete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDelete; n > 1 && y; --n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDDelete) */

void zx_dise_Body_DEL_SvcMDDelete(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDDelete = (struct zx_di_SvcMDDelete_s*)x->SvcMDDelete->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDDelete_s*)x->SvcMDDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDelete; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDDeleteResponse) */

int zx_dise_Body_NUM_SvcMDDeleteResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDDeleteResponse; y; ++n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDDeleteResponse) */

struct zx_di_SvcMDDeleteResponse_s* zx_dise_Body_GET_SvcMDDeleteResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDDeleteResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDDeleteResponse) */

struct zx_di_SvcMDDeleteResponse_s* zx_dise_Body_POP_SvcMDDeleteResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDDeleteResponse;
  if (y)
    x->SvcMDDeleteResponse = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDDeleteResponse) */

void zx_dise_Body_PUSH_SvcMDDeleteResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDDeleteResponse->gg.g;
  x->SvcMDDeleteResponse = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDDeleteResponse) */

void zx_dise_Body_REV_SvcMDDeleteResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDDeleteResponse_s* nxt;
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x) return;
  y = x->SvcMDDeleteResponse;
  if (!y) return;
  x->SvcMDDeleteResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDDeleteResponse->gg.g;
    x->SvcMDDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDDeleteResponse) */

void zx_dise_Body_PUT_SvcMDDeleteResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDDeleteResponse_s* z)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDDeleteResponse) */

void zx_dise_Body_ADD_SvcMDDeleteResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDDeleteResponse_s* z)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDDeleteResponse->gg.g;
    x->SvcMDDeleteResponse = z;
    return;
  case -1:
    y = x->SvcMDDeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDeleteResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDDeleteResponse) */

void zx_dise_Body_DEL_SvcMDDeleteResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDDeleteResponse = (struct zx_di_SvcMDDeleteResponse_s*)x->SvcMDDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDDeleteResponse_s*)x->SvcMDDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDQuery) */

int zx_dise_Body_NUM_SvcMDQuery(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDQuery; y; ++n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDQuery) */

struct zx_di_SvcMDQuery_s* zx_dise_Body_GET_SvcMDQuery(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x) return 0;
  for (y = x->SvcMDQuery; n>=0 && y; --n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDQuery) */

struct zx_di_SvcMDQuery_s* zx_dise_Body_POP_SvcMDQuery(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x) return 0;
  y = x->SvcMDQuery;
  if (y)
    x->SvcMDQuery = (struct zx_di_SvcMDQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDQuery) */

void zx_dise_Body_PUSH_SvcMDQuery(struct zx_dise_Body_s* x, struct zx_di_SvcMDQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDQuery->gg.g;
  x->SvcMDQuery = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDQuery) */

void zx_dise_Body_REV_SvcMDQuery(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDQuery_s* nxt;
  struct zx_di_SvcMDQuery_s* y;
  if (!x) return;
  y = x->SvcMDQuery;
  if (!y) return;
  x->SvcMDQuery = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDQuery->gg.g;
    x->SvcMDQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDQuery) */

void zx_dise_Body_PUT_SvcMDQuery(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDQuery_s* z)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x || !z) return;
  y = x->SvcMDQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDQuery) */

void zx_dise_Body_ADD_SvcMDQuery(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDQuery_s* z)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDQuery->gg.g;
    x->SvcMDQuery = z;
    return;
  case -1:
    y = x->SvcMDQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQuery; n > 1 && y; --n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDQuery) */

void zx_dise_Body_DEL_SvcMDQuery(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDQuery = (struct zx_di_SvcMDQuery_s*)x->SvcMDQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDQuery_s*)x->SvcMDQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDQueryResponse) */

int zx_dise_Body_NUM_SvcMDQueryResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDQueryResponse; y; ++n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDQueryResponse) */

struct zx_di_SvcMDQueryResponse_s* zx_dise_Body_GET_SvcMDQueryResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDQueryResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDQueryResponse) */

struct zx_di_SvcMDQueryResponse_s* zx_dise_Body_POP_SvcMDQueryResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDQueryResponse;
  if (y)
    x->SvcMDQueryResponse = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDQueryResponse) */

void zx_dise_Body_PUSH_SvcMDQueryResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDQueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDQueryResponse->gg.g;
  x->SvcMDQueryResponse = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDQueryResponse) */

void zx_dise_Body_REV_SvcMDQueryResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDQueryResponse_s* nxt;
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x) return;
  y = x->SvcMDQueryResponse;
  if (!y) return;
  x->SvcMDQueryResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDQueryResponse->gg.g;
    x->SvcMDQueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDQueryResponse) */

void zx_dise_Body_PUT_SvcMDQueryResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDQueryResponse_s* z)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDQueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDQueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDQueryResponse) */

void zx_dise_Body_ADD_SvcMDQueryResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDQueryResponse_s* z)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDQueryResponse->gg.g;
    x->SvcMDQueryResponse = z;
    return;
  case -1:
    y = x->SvcMDQueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQueryResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDQueryResponse) */

void zx_dise_Body_DEL_SvcMDQueryResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDQueryResponse = (struct zx_di_SvcMDQueryResponse_s*)x->SvcMDQueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDQueryResponse_s*)x->SvcMDQueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDReplace) */

int zx_dise_Body_NUM_SvcMDReplace(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDReplace_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDReplace; y; ++n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDReplace) */

struct zx_di_SvcMDReplace_s* zx_dise_Body_GET_SvcMDReplace(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x) return 0;
  for (y = x->SvcMDReplace; n>=0 && y; --n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDReplace) */

struct zx_di_SvcMDReplace_s* zx_dise_Body_POP_SvcMDReplace(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x) return 0;
  y = x->SvcMDReplace;
  if (y)
    x->SvcMDReplace = (struct zx_di_SvcMDReplace_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDReplace) */

void zx_dise_Body_PUSH_SvcMDReplace(struct zx_dise_Body_s* x, struct zx_di_SvcMDReplace_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDReplace->gg.g;
  x->SvcMDReplace = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDReplace) */

void zx_dise_Body_REV_SvcMDReplace(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDReplace_s* nxt;
  struct zx_di_SvcMDReplace_s* y;
  if (!x) return;
  y = x->SvcMDReplace;
  if (!y) return;
  x->SvcMDReplace = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDReplace_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDReplace->gg.g;
    x->SvcMDReplace = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDReplace) */

void zx_dise_Body_PUT_SvcMDReplace(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDReplace_s* z)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x || !z) return;
  y = x->SvcMDReplace;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDReplace = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDReplace) */

void zx_dise_Body_ADD_SvcMDReplace(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDReplace_s* z)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDReplace->gg.g;
    x->SvcMDReplace = z;
    return;
  case -1:
    y = x->SvcMDReplace;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplace; n > 1 && y; --n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDReplace) */

void zx_dise_Body_DEL_SvcMDReplace(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDReplace = (struct zx_di_SvcMDReplace_s*)x->SvcMDReplace->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDReplace_s*)x->SvcMDReplace;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplace; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_SvcMDReplaceResponse) */

int zx_dise_Body_NUM_SvcMDReplaceResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDReplaceResponse; y; ++n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_SvcMDReplaceResponse) */

struct zx_di_SvcMDReplaceResponse_s* zx_dise_Body_GET_SvcMDReplaceResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDReplaceResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_SvcMDReplaceResponse) */

struct zx_di_SvcMDReplaceResponse_s* zx_dise_Body_POP_SvcMDReplaceResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDReplaceResponse;
  if (y)
    x->SvcMDReplaceResponse = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_SvcMDReplaceResponse) */

void zx_dise_Body_PUSH_SvcMDReplaceResponse(struct zx_dise_Body_s* x, struct zx_di_SvcMDReplaceResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDReplaceResponse->gg.g;
  x->SvcMDReplaceResponse = z;
}

/* FUNC(zx_dise_Body_REV_SvcMDReplaceResponse) */

void zx_dise_Body_REV_SvcMDReplaceResponse(struct zx_dise_Body_s* x)
{
  struct zx_di_SvcMDReplaceResponse_s* nxt;
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x) return;
  y = x->SvcMDReplaceResponse;
  if (!y) return;
  x->SvcMDReplaceResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDReplaceResponse->gg.g;
    x->SvcMDReplaceResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_SvcMDReplaceResponse) */

void zx_dise_Body_PUT_SvcMDReplaceResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDReplaceResponse_s* z)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDReplaceResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDReplaceResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_SvcMDReplaceResponse) */

void zx_dise_Body_ADD_SvcMDReplaceResponse(struct zx_dise_Body_s* x, int n, struct zx_di_SvcMDReplaceResponse_s* z)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDReplaceResponse->gg.g;
    x->SvcMDReplaceResponse = z;
    return;
  case -1:
    y = x->SvcMDReplaceResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplaceResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_SvcMDReplaceResponse) */

void zx_dise_Body_DEL_SvcMDReplaceResponse(struct zx_dise_Body_s* x, int n)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDReplaceResponse = (struct zx_di_SvcMDReplaceResponse_s*)x->SvcMDReplaceResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDReplaceResponse_s*)x->SvcMDReplaceResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplaceResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Body_NUM_Fault) */

int zx_dise_Body_NUM_Fault(struct zx_dise_Body_s* x)
{
  struct zx_dise_Fault_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Fault; y; ++n, y = (struct zx_dise_Fault_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Body_GET_Fault) */

struct zx_dise_Fault_s* zx_dise_Body_GET_Fault(struct zx_dise_Body_s* x, int n)
{
  struct zx_dise_Fault_s* y;
  if (!x) return 0;
  for (y = x->Fault; n>=0 && y; --n, y = (struct zx_dise_Fault_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Body_POP_Fault) */

struct zx_dise_Fault_s* zx_dise_Body_POP_Fault(struct zx_dise_Body_s* x)
{
  struct zx_dise_Fault_s* y;
  if (!x) return 0;
  y = x->Fault;
  if (y)
    x->Fault = (struct zx_dise_Fault_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Body_PUSH_Fault) */

void zx_dise_Body_PUSH_Fault(struct zx_dise_Body_s* x, struct zx_dise_Fault_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Fault->gg.g;
  x->Fault = z;
}

/* FUNC(zx_dise_Body_REV_Fault) */

void zx_dise_Body_REV_Fault(struct zx_dise_Body_s* x)
{
  struct zx_dise_Fault_s* nxt;
  struct zx_dise_Fault_s* y;
  if (!x) return;
  y = x->Fault;
  if (!y) return;
  x->Fault = 0;
  while (y) {
    nxt = (struct zx_dise_Fault_s*)y->gg.g.n;
    y->gg.g.n = &x->Fault->gg.g;
    x->Fault = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Body_PUT_Fault) */

void zx_dise_Body_PUT_Fault(struct zx_dise_Body_s* x, int n, struct zx_dise_Fault_s* z)
{
  struct zx_dise_Fault_s* y;
  if (!x || !z) return;
  y = x->Fault;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Fault = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dise_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Body_ADD_Fault) */

void zx_dise_Body_ADD_Fault(struct zx_dise_Body_s* x, int n, struct zx_dise_Fault_s* z)
{
  struct zx_dise_Fault_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Fault->gg.g;
    x->Fault = z;
    return;
  case -1:
    y = x->Fault;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dise_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y; --n, y = (struct zx_dise_Fault_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Body_DEL_Fault) */

void zx_dise_Body_DEL_Fault(struct zx_dise_Body_s* x, int n)
{
  struct zx_dise_Fault_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Fault = (struct zx_dise_Fault_s*)x->Fault->gg.g.n;
    return;
  case -1:
    y = (struct zx_dise_Fault_s*)x->Fault;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dise_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y->gg.g.n; --n, y = (struct zx_dise_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_dise_Envelope_NUM_Header) */

int zx_dise_Envelope_NUM_Header(struct zx_dise_Envelope_s* x)
{
  struct zx_dise_Header_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Header; y; ++n, y = (struct zx_dise_Header_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Envelope_GET_Header) */

struct zx_dise_Header_s* zx_dise_Envelope_GET_Header(struct zx_dise_Envelope_s* x, int n)
{
  struct zx_dise_Header_s* y;
  if (!x) return 0;
  for (y = x->Header; n>=0 && y; --n, y = (struct zx_dise_Header_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Envelope_POP_Header) */

struct zx_dise_Header_s* zx_dise_Envelope_POP_Header(struct zx_dise_Envelope_s* x)
{
  struct zx_dise_Header_s* y;
  if (!x) return 0;
  y = x->Header;
  if (y)
    x->Header = (struct zx_dise_Header_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Envelope_PUSH_Header) */

void zx_dise_Envelope_PUSH_Header(struct zx_dise_Envelope_s* x, struct zx_dise_Header_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Header->gg.g;
  x->Header = z;
}

/* FUNC(zx_dise_Envelope_REV_Header) */

void zx_dise_Envelope_REV_Header(struct zx_dise_Envelope_s* x)
{
  struct zx_dise_Header_s* nxt;
  struct zx_dise_Header_s* y;
  if (!x) return;
  y = x->Header;
  if (!y) return;
  x->Header = 0;
  while (y) {
    nxt = (struct zx_dise_Header_s*)y->gg.g.n;
    y->gg.g.n = &x->Header->gg.g;
    x->Header = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Envelope_PUT_Header) */

void zx_dise_Envelope_PUT_Header(struct zx_dise_Envelope_s* x, int n, struct zx_dise_Header_s* z)
{
  struct zx_dise_Header_s* y;
  if (!x || !z) return;
  y = x->Header;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Header = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dise_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Envelope_ADD_Header) */

void zx_dise_Envelope_ADD_Header(struct zx_dise_Envelope_s* x, int n, struct zx_dise_Header_s* z)
{
  struct zx_dise_Header_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Header->gg.g;
    x->Header = z;
    return;
  case -1:
    y = x->Header;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dise_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y; --n, y = (struct zx_dise_Header_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Envelope_DEL_Header) */

void zx_dise_Envelope_DEL_Header(struct zx_dise_Envelope_s* x, int n)
{
  struct zx_dise_Header_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Header = (struct zx_dise_Header_s*)x->Header->gg.g.n;
    return;
  case -1:
    y = (struct zx_dise_Header_s*)x->Header;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dise_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y->gg.g.n; --n, y = (struct zx_dise_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Envelope_NUM_Body) */

int zx_dise_Envelope_NUM_Body(struct zx_dise_Envelope_s* x)
{
  struct zx_dise_Body_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Body; y; ++n, y = (struct zx_dise_Body_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Envelope_GET_Body) */

struct zx_dise_Body_s* zx_dise_Envelope_GET_Body(struct zx_dise_Envelope_s* x, int n)
{
  struct zx_dise_Body_s* y;
  if (!x) return 0;
  for (y = x->Body; n>=0 && y; --n, y = (struct zx_dise_Body_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Envelope_POP_Body) */

struct zx_dise_Body_s* zx_dise_Envelope_POP_Body(struct zx_dise_Envelope_s* x)
{
  struct zx_dise_Body_s* y;
  if (!x) return 0;
  y = x->Body;
  if (y)
    x->Body = (struct zx_dise_Body_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Envelope_PUSH_Body) */

void zx_dise_Envelope_PUSH_Body(struct zx_dise_Envelope_s* x, struct zx_dise_Body_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Body->gg.g;
  x->Body = z;
}

/* FUNC(zx_dise_Envelope_REV_Body) */

void zx_dise_Envelope_REV_Body(struct zx_dise_Envelope_s* x)
{
  struct zx_dise_Body_s* nxt;
  struct zx_dise_Body_s* y;
  if (!x) return;
  y = x->Body;
  if (!y) return;
  x->Body = 0;
  while (y) {
    nxt = (struct zx_dise_Body_s*)y->gg.g.n;
    y->gg.g.n = &x->Body->gg.g;
    x->Body = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Envelope_PUT_Body) */

void zx_dise_Envelope_PUT_Body(struct zx_dise_Envelope_s* x, int n, struct zx_dise_Body_s* z)
{
  struct zx_dise_Body_s* y;
  if (!x || !z) return;
  y = x->Body;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Body = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dise_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Envelope_ADD_Body) */

void zx_dise_Envelope_ADD_Body(struct zx_dise_Envelope_s* x, int n, struct zx_dise_Body_s* z)
{
  struct zx_dise_Body_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Body->gg.g;
    x->Body = z;
    return;
  case -1:
    y = x->Body;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dise_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y; --n, y = (struct zx_dise_Body_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Envelope_DEL_Body) */

void zx_dise_Envelope_DEL_Body(struct zx_dise_Envelope_s* x, int n)
{
  struct zx_dise_Body_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Body = (struct zx_dise_Body_s*)x->Body->gg.g.n;
    return;
  case -1:
    y = (struct zx_dise_Body_s*)x->Body;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dise_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y->gg.g.n; --n, y = (struct zx_dise_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_dise_Fault_NUM_faultcode) */

int zx_dise_Fault_NUM_faultcode(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultcode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_dise_Fault_GET_faultcode) */

struct zx_elem_s* zx_dise_Fault_GET_faultcode(struct zx_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultcode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_dise_Fault_POP_faultcode) */

struct zx_elem_s* zx_dise_Fault_POP_faultcode(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultcode;
  if (y)
    x->faultcode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_dise_Fault_PUSH_faultcode) */

void zx_dise_Fault_PUSH_faultcode(struct zx_dise_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultcode->g;
  x->faultcode = z;
}

/* FUNC(zx_dise_Fault_REV_faultcode) */

void zx_dise_Fault_REV_faultcode(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->faultcode;
  if (!y) return;
  x->faultcode = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->faultcode->g;
    x->faultcode = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Fault_PUT_faultcode) */

void zx_dise_Fault_PUT_faultcode(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->faultcode;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->faultcode = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_dise_Fault_ADD_faultcode) */

void zx_dise_Fault_ADD_faultcode(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->faultcode->g;
    x->faultcode = z;
    return;
  case -1:
    y = x->faultcode;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultcode; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_dise_Fault_DEL_faultcode) */

void zx_dise_Fault_DEL_faultcode(struct zx_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->faultcode = (struct zx_elem_s*)x->faultcode->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->faultcode;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultcode; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_dise_Fault_NUM_faultstring) */

int zx_dise_Fault_NUM_faultstring(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultstring; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_dise_Fault_GET_faultstring) */

struct zx_elem_s* zx_dise_Fault_GET_faultstring(struct zx_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultstring; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_dise_Fault_POP_faultstring) */

struct zx_elem_s* zx_dise_Fault_POP_faultstring(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultstring;
  if (y)
    x->faultstring = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_dise_Fault_PUSH_faultstring) */

void zx_dise_Fault_PUSH_faultstring(struct zx_dise_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultstring->g;
  x->faultstring = z;
}

/* FUNC(zx_dise_Fault_REV_faultstring) */

void zx_dise_Fault_REV_faultstring(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->faultstring;
  if (!y) return;
  x->faultstring = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->faultstring->g;
    x->faultstring = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Fault_PUT_faultstring) */

void zx_dise_Fault_PUT_faultstring(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->faultstring;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->faultstring = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_dise_Fault_ADD_faultstring) */

void zx_dise_Fault_ADD_faultstring(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->faultstring->g;
    x->faultstring = z;
    return;
  case -1:
    y = x->faultstring;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultstring; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_dise_Fault_DEL_faultstring) */

void zx_dise_Fault_DEL_faultstring(struct zx_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->faultstring = (struct zx_elem_s*)x->faultstring->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->faultstring;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultstring; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_dise_Fault_NUM_faultactor) */

int zx_dise_Fault_NUM_faultactor(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultactor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_dise_Fault_GET_faultactor) */

struct zx_elem_s* zx_dise_Fault_GET_faultactor(struct zx_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultactor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_dise_Fault_POP_faultactor) */

struct zx_elem_s* zx_dise_Fault_POP_faultactor(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultactor;
  if (y)
    x->faultactor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_dise_Fault_PUSH_faultactor) */

void zx_dise_Fault_PUSH_faultactor(struct zx_dise_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultactor->g;
  x->faultactor = z;
}

/* FUNC(zx_dise_Fault_REV_faultactor) */

void zx_dise_Fault_REV_faultactor(struct zx_dise_Fault_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->faultactor;
  if (!y) return;
  x->faultactor = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->faultactor->g;
    x->faultactor = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Fault_PUT_faultactor) */

void zx_dise_Fault_PUT_faultactor(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->faultactor;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->faultactor = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_dise_Fault_ADD_faultactor) */

void zx_dise_Fault_ADD_faultactor(struct zx_dise_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->faultactor->g;
    x->faultactor = z;
    return;
  case -1:
    y = x->faultactor;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultactor; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_dise_Fault_DEL_faultactor) */

void zx_dise_Fault_DEL_faultactor(struct zx_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->faultactor = (struct zx_elem_s*)x->faultactor->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->faultactor;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultactor; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_dise_Fault_NUM_detail) */

int zx_dise_Fault_NUM_detail(struct zx_dise_Fault_s* x)
{
  struct zx_dise_detail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->detail; y; ++n, y = (struct zx_dise_detail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Fault_GET_detail) */

struct zx_dise_detail_s* zx_dise_Fault_GET_detail(struct zx_dise_Fault_s* x, int n)
{
  struct zx_dise_detail_s* y;
  if (!x) return 0;
  for (y = x->detail; n>=0 && y; --n, y = (struct zx_dise_detail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Fault_POP_detail) */

struct zx_dise_detail_s* zx_dise_Fault_POP_detail(struct zx_dise_Fault_s* x)
{
  struct zx_dise_detail_s* y;
  if (!x) return 0;
  y = x->detail;
  if (y)
    x->detail = (struct zx_dise_detail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Fault_PUSH_detail) */

void zx_dise_Fault_PUSH_detail(struct zx_dise_Fault_s* x, struct zx_dise_detail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->detail->gg.g;
  x->detail = z;
}

/* FUNC(zx_dise_Fault_REV_detail) */

void zx_dise_Fault_REV_detail(struct zx_dise_Fault_s* x)
{
  struct zx_dise_detail_s* nxt;
  struct zx_dise_detail_s* y;
  if (!x) return;
  y = x->detail;
  if (!y) return;
  x->detail = 0;
  while (y) {
    nxt = (struct zx_dise_detail_s*)y->gg.g.n;
    y->gg.g.n = &x->detail->gg.g;
    x->detail = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Fault_PUT_detail) */

void zx_dise_Fault_PUT_detail(struct zx_dise_Fault_s* x, int n, struct zx_dise_detail_s* z)
{
  struct zx_dise_detail_s* y;
  if (!x || !z) return;
  y = x->detail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->detail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dise_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Fault_ADD_detail) */

void zx_dise_Fault_ADD_detail(struct zx_dise_Fault_s* x, int n, struct zx_dise_detail_s* z)
{
  struct zx_dise_detail_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->detail->gg.g;
    x->detail = z;
    return;
  case -1:
    y = x->detail;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dise_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y; --n, y = (struct zx_dise_detail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Fault_DEL_detail) */

void zx_dise_Fault_DEL_detail(struct zx_dise_Fault_s* x, int n)
{
  struct zx_dise_detail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->detail = (struct zx_dise_detail_s*)x->detail->gg.g.n;
    return;
  case -1:
    y = (struct zx_dise_detail_s*)x->detail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dise_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y->gg.g.n; --n, y = (struct zx_dise_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_dise_Header_NUM_MessageID) */

int zx_dise_Header_NUM_MessageID(struct zx_dise_Header_s* x)
{
  struct zx_a_MessageID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_MessageID) */

struct zx_a_MessageID_s* zx_dise_Header_GET_MessageID(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_MessageID_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_MessageID) */

struct zx_a_MessageID_s* zx_dise_Header_POP_MessageID(struct zx_dise_Header_s* x)
{
  struct zx_a_MessageID_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_a_MessageID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_MessageID) */

void zx_dise_Header_PUSH_MessageID(struct zx_dise_Header_s* x, struct zx_a_MessageID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageID->gg.g;
  x->MessageID = z;
}

/* FUNC(zx_dise_Header_REV_MessageID) */

void zx_dise_Header_REV_MessageID(struct zx_dise_Header_s* x)
{
  struct zx_a_MessageID_s* nxt;
  struct zx_a_MessageID_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_a_MessageID_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageID->gg.g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_MessageID) */

void zx_dise_Header_PUT_MessageID(struct zx_dise_Header_s* x, int n, struct zx_a_MessageID_s* z)
{
  struct zx_a_MessageID_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_MessageID) */

void zx_dise_Header_ADD_MessageID(struct zx_dise_Header_s* x, int n, struct zx_a_MessageID_s* z)
{
  struct zx_a_MessageID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MessageID->gg.g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_MessageID) */

void zx_dise_Header_DEL_MessageID(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_MessageID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_a_MessageID_s*)x->MessageID->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_MessageID_s*)x->MessageID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->gg.g.n; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_RelatesTo) */

int zx_dise_Header_NUM_RelatesTo(struct zx_dise_Header_s* x)
{
  struct zx_a_RelatesTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RelatesTo; y; ++n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_RelatesTo) */

struct zx_a_RelatesTo_s* zx_dise_Header_GET_RelatesTo(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_RelatesTo_s* y;
  if (!x) return 0;
  for (y = x->RelatesTo; n>=0 && y; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_RelatesTo) */

struct zx_a_RelatesTo_s* zx_dise_Header_POP_RelatesTo(struct zx_dise_Header_s* x)
{
  struct zx_a_RelatesTo_s* y;
  if (!x) return 0;
  y = x->RelatesTo;
  if (y)
    x->RelatesTo = (struct zx_a_RelatesTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_RelatesTo) */

void zx_dise_Header_PUSH_RelatesTo(struct zx_dise_Header_s* x, struct zx_a_RelatesTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RelatesTo->gg.g;
  x->RelatesTo = z;
}

/* FUNC(zx_dise_Header_REV_RelatesTo) */

void zx_dise_Header_REV_RelatesTo(struct zx_dise_Header_s* x)
{
  struct zx_a_RelatesTo_s* nxt;
  struct zx_a_RelatesTo_s* y;
  if (!x) return;
  y = x->RelatesTo;
  if (!y) return;
  x->RelatesTo = 0;
  while (y) {
    nxt = (struct zx_a_RelatesTo_s*)y->gg.g.n;
    y->gg.g.n = &x->RelatesTo->gg.g;
    x->RelatesTo = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_RelatesTo) */

void zx_dise_Header_PUT_RelatesTo(struct zx_dise_Header_s* x, int n, struct zx_a_RelatesTo_s* z)
{
  struct zx_a_RelatesTo_s* y;
  if (!x || !z) return;
  y = x->RelatesTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RelatesTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_RelatesTo) */

void zx_dise_Header_ADD_RelatesTo(struct zx_dise_Header_s* x, int n, struct zx_a_RelatesTo_s* z)
{
  struct zx_a_RelatesTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RelatesTo->gg.g;
    x->RelatesTo = z;
    return;
  case -1:
    y = x->RelatesTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelatesTo; n > 1 && y; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_RelatesTo) */

void zx_dise_Header_DEL_RelatesTo(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_RelatesTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RelatesTo = (struct zx_a_RelatesTo_s*)x->RelatesTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_RelatesTo_s*)x->RelatesTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelatesTo; n > 1 && y->gg.g.n; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_ReplyTo) */

int zx_dise_Header_NUM_ReplyTo(struct zx_dise_Header_s* x)
{
  struct zx_a_ReplyTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyTo; y; ++n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_ReplyTo) */

struct zx_a_ReplyTo_s* zx_dise_Header_GET_ReplyTo(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_ReplyTo_s* y;
  if (!x) return 0;
  for (y = x->ReplyTo; n>=0 && y; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_ReplyTo) */

struct zx_a_ReplyTo_s* zx_dise_Header_POP_ReplyTo(struct zx_dise_Header_s* x)
{
  struct zx_a_ReplyTo_s* y;
  if (!x) return 0;
  y = x->ReplyTo;
  if (y)
    x->ReplyTo = (struct zx_a_ReplyTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_ReplyTo) */

void zx_dise_Header_PUSH_ReplyTo(struct zx_dise_Header_s* x, struct zx_a_ReplyTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReplyTo->gg.g;
  x->ReplyTo = z;
}

/* FUNC(zx_dise_Header_REV_ReplyTo) */

void zx_dise_Header_REV_ReplyTo(struct zx_dise_Header_s* x)
{
  struct zx_a_ReplyTo_s* nxt;
  struct zx_a_ReplyTo_s* y;
  if (!x) return;
  y = x->ReplyTo;
  if (!y) return;
  x->ReplyTo = 0;
  while (y) {
    nxt = (struct zx_a_ReplyTo_s*)y->gg.g.n;
    y->gg.g.n = &x->ReplyTo->gg.g;
    x->ReplyTo = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_ReplyTo) */

void zx_dise_Header_PUT_ReplyTo(struct zx_dise_Header_s* x, int n, struct zx_a_ReplyTo_s* z)
{
  struct zx_a_ReplyTo_s* y;
  if (!x || !z) return;
  y = x->ReplyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReplyTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_ReplyTo) */

void zx_dise_Header_ADD_ReplyTo(struct zx_dise_Header_s* x, int n, struct zx_a_ReplyTo_s* z)
{
  struct zx_a_ReplyTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReplyTo->gg.g;
    x->ReplyTo = z;
    return;
  case -1:
    y = x->ReplyTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyTo; n > 1 && y; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_ReplyTo) */

void zx_dise_Header_DEL_ReplyTo(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_ReplyTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyTo = (struct zx_a_ReplyTo_s*)x->ReplyTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_ReplyTo_s*)x->ReplyTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyTo; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_From) */

int zx_dise_Header_NUM_From(struct zx_dise_Header_s* x)
{
  struct zx_a_From_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->From; y; ++n, y = (struct zx_a_From_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_From) */

struct zx_a_From_s* zx_dise_Header_GET_From(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_From_s* y;
  if (!x) return 0;
  for (y = x->From; n>=0 && y; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_From) */

struct zx_a_From_s* zx_dise_Header_POP_From(struct zx_dise_Header_s* x)
{
  struct zx_a_From_s* y;
  if (!x) return 0;
  y = x->From;
  if (y)
    x->From = (struct zx_a_From_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_From) */

void zx_dise_Header_PUSH_From(struct zx_dise_Header_s* x, struct zx_a_From_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->From->gg.g;
  x->From = z;
}

/* FUNC(zx_dise_Header_REV_From) */

void zx_dise_Header_REV_From(struct zx_dise_Header_s* x)
{
  struct zx_a_From_s* nxt;
  struct zx_a_From_s* y;
  if (!x) return;
  y = x->From;
  if (!y) return;
  x->From = 0;
  while (y) {
    nxt = (struct zx_a_From_s*)y->gg.g.n;
    y->gg.g.n = &x->From->gg.g;
    x->From = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_From) */

void zx_dise_Header_PUT_From(struct zx_dise_Header_s* x, int n, struct zx_a_From_s* z)
{
  struct zx_a_From_s* y;
  if (!x || !z) return;
  y = x->From;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->From = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_From) */

void zx_dise_Header_ADD_From(struct zx_dise_Header_s* x, int n, struct zx_a_From_s* z)
{
  struct zx_a_From_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->From->gg.g;
    x->From = z;
    return;
  case -1:
    y = x->From;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_From_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->From; n > 1 && y; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_From) */

void zx_dise_Header_DEL_From(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_From_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->From = (struct zx_a_From_s*)x->From->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_From_s*)x->From;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_From_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->From; n > 1 && y->gg.g.n; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_FaultTo) */

int zx_dise_Header_NUM_FaultTo(struct zx_dise_Header_s* x)
{
  struct zx_a_FaultTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FaultTo; y; ++n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_FaultTo) */

struct zx_a_FaultTo_s* zx_dise_Header_GET_FaultTo(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_FaultTo_s* y;
  if (!x) return 0;
  for (y = x->FaultTo; n>=0 && y; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_FaultTo) */

struct zx_a_FaultTo_s* zx_dise_Header_POP_FaultTo(struct zx_dise_Header_s* x)
{
  struct zx_a_FaultTo_s* y;
  if (!x) return 0;
  y = x->FaultTo;
  if (y)
    x->FaultTo = (struct zx_a_FaultTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_FaultTo) */

void zx_dise_Header_PUSH_FaultTo(struct zx_dise_Header_s* x, struct zx_a_FaultTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FaultTo->gg.g;
  x->FaultTo = z;
}

/* FUNC(zx_dise_Header_REV_FaultTo) */

void zx_dise_Header_REV_FaultTo(struct zx_dise_Header_s* x)
{
  struct zx_a_FaultTo_s* nxt;
  struct zx_a_FaultTo_s* y;
  if (!x) return;
  y = x->FaultTo;
  if (!y) return;
  x->FaultTo = 0;
  while (y) {
    nxt = (struct zx_a_FaultTo_s*)y->gg.g.n;
    y->gg.g.n = &x->FaultTo->gg.g;
    x->FaultTo = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_FaultTo) */

void zx_dise_Header_PUT_FaultTo(struct zx_dise_Header_s* x, int n, struct zx_a_FaultTo_s* z)
{
  struct zx_a_FaultTo_s* y;
  if (!x || !z) return;
  y = x->FaultTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FaultTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_FaultTo) */

void zx_dise_Header_ADD_FaultTo(struct zx_dise_Header_s* x, int n, struct zx_a_FaultTo_s* z)
{
  struct zx_a_FaultTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->FaultTo->gg.g;
    x->FaultTo = z;
    return;
  case -1:
    y = x->FaultTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FaultTo; n > 1 && y; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_FaultTo) */

void zx_dise_Header_DEL_FaultTo(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_FaultTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FaultTo = (struct zx_a_FaultTo_s*)x->FaultTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_FaultTo_s*)x->FaultTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FaultTo; n > 1 && y->gg.g.n; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_To) */

int zx_dise_Header_NUM_To(struct zx_dise_Header_s* x)
{
  struct zx_a_To_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->To; y; ++n, y = (struct zx_a_To_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_To) */

struct zx_a_To_s* zx_dise_Header_GET_To(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_To_s* y;
  if (!x) return 0;
  for (y = x->To; n>=0 && y; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_To) */

struct zx_a_To_s* zx_dise_Header_POP_To(struct zx_dise_Header_s* x)
{
  struct zx_a_To_s* y;
  if (!x) return 0;
  y = x->To;
  if (y)
    x->To = (struct zx_a_To_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_To) */

void zx_dise_Header_PUSH_To(struct zx_dise_Header_s* x, struct zx_a_To_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->To->gg.g;
  x->To = z;
}

/* FUNC(zx_dise_Header_REV_To) */

void zx_dise_Header_REV_To(struct zx_dise_Header_s* x)
{
  struct zx_a_To_s* nxt;
  struct zx_a_To_s* y;
  if (!x) return;
  y = x->To;
  if (!y) return;
  x->To = 0;
  while (y) {
    nxt = (struct zx_a_To_s*)y->gg.g.n;
    y->gg.g.n = &x->To->gg.g;
    x->To = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_To) */

void zx_dise_Header_PUT_To(struct zx_dise_Header_s* x, int n, struct zx_a_To_s* z)
{
  struct zx_a_To_s* y;
  if (!x || !z) return;
  y = x->To;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->To = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_To) */

void zx_dise_Header_ADD_To(struct zx_dise_Header_s* x, int n, struct zx_a_To_s* z)
{
  struct zx_a_To_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->To->gg.g;
    x->To = z;
    return;
  case -1:
    y = x->To;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_To) */

void zx_dise_Header_DEL_To(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_To_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->To = (struct zx_a_To_s*)x->To->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_To_s*)x->To;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y->gg.g.n; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_Action) */

int zx_dise_Header_NUM_Action(struct zx_dise_Header_s* x)
{
  struct zx_a_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_Action) */

struct zx_a_Action_s* zx_dise_Header_GET_Action(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_Action) */

struct zx_a_Action_s* zx_dise_Header_POP_Action(struct zx_dise_Header_s* x)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_a_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_Action) */

void zx_dise_Header_PUSH_Action(struct zx_dise_Header_s* x, struct zx_a_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_dise_Header_REV_Action) */

void zx_dise_Header_REV_Action(struct zx_dise_Header_s* x)
{
  struct zx_a_Action_s* nxt;
  struct zx_a_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_a_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_Action) */

void zx_dise_Header_PUT_Action(struct zx_dise_Header_s* x, int n, struct zx_a_Action_s* z)
{
  struct zx_a_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_Action) */

void zx_dise_Header_ADD_Action(struct zx_dise_Header_s* x, int n, struct zx_a_Action_s* z)
{
  struct zx_a_Action_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Action->gg.g;
    x->Action = z;
    return;
  case -1:
    y = x->Action;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_Action) */

void zx_dise_Header_DEL_Action(struct zx_dise_Header_s* x, int n)
{
  struct zx_a_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_a_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_Framework) */

int zx_dise_Header_NUM_Framework(struct zx_dise_Header_s* x)
{
  struct zx_sbf_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_Framework) */

struct zx_sbf_Framework_s* zx_dise_Header_GET_Framework(struct zx_dise_Header_s* x, int n)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_Framework) */

struct zx_sbf_Framework_s* zx_dise_Header_POP_Framework(struct zx_dise_Header_s* x)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zx_sbf_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_Framework) */

void zx_dise_Header_PUSH_Framework(struct zx_dise_Header_s* x, struct zx_sbf_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zx_dise_Header_REV_Framework) */

void zx_dise_Header_REV_Framework(struct zx_dise_Header_s* x)
{
  struct zx_sbf_Framework_s* nxt;
  struct zx_sbf_Framework_s* y;
  if (!x) return;
  y = x->Framework;
  if (!y) return;
  x->Framework = 0;
  while (y) {
    nxt = (struct zx_sbf_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->Framework->gg.g;
    x->Framework = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_Framework) */

void zx_dise_Header_PUT_Framework(struct zx_dise_Header_s* x, int n, struct zx_sbf_Framework_s* z)
{
  struct zx_sbf_Framework_s* y;
  if (!x || !z) return;
  y = x->Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_Framework) */

void zx_dise_Header_ADD_Framework(struct zx_dise_Header_s* x, int n, struct zx_sbf_Framework_s* z)
{
  struct zx_sbf_Framework_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Framework->gg.g;
    x->Framework = z;
    return;
  case -1:
    y = x->Framework;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_Framework) */

void zx_dise_Header_DEL_Framework(struct zx_dise_Header_s* x, int n)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Framework = (struct zx_sbf_Framework_s*)x->Framework->gg.g.n;
    return;
  case -1:
    y = (struct zx_sbf_Framework_s*)x->Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y->gg.g.n; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_b_Framework) */

int zx_dise_Header_NUM_b_Framework(struct zx_dise_Header_s* x)
{
  struct zx_b_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b_Framework; y; ++n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_b_Framework) */

struct zx_b_Framework_s* zx_dise_Header_GET_b_Framework(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_Framework_s* y;
  if (!x) return 0;
  for (y = x->b_Framework; n>=0 && y; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_b_Framework) */

struct zx_b_Framework_s* zx_dise_Header_POP_b_Framework(struct zx_dise_Header_s* x)
{
  struct zx_b_Framework_s* y;
  if (!x) return 0;
  y = x->b_Framework;
  if (y)
    x->b_Framework = (struct zx_b_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_b_Framework) */

void zx_dise_Header_PUSH_b_Framework(struct zx_dise_Header_s* x, struct zx_b_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b_Framework->gg.g;
  x->b_Framework = z;
}

/* FUNC(zx_dise_Header_REV_b_Framework) */

void zx_dise_Header_REV_b_Framework(struct zx_dise_Header_s* x)
{
  struct zx_b_Framework_s* nxt;
  struct zx_b_Framework_s* y;
  if (!x) return;
  y = x->b_Framework;
  if (!y) return;
  x->b_Framework = 0;
  while (y) {
    nxt = (struct zx_b_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->b_Framework->gg.g;
    x->b_Framework = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_b_Framework) */

void zx_dise_Header_PUT_b_Framework(struct zx_dise_Header_s* x, int n, struct zx_b_Framework_s* z)
{
  struct zx_b_Framework_s* y;
  if (!x || !z) return;
  y = x->b_Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b_Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_b_Framework) */

void zx_dise_Header_ADD_b_Framework(struct zx_dise_Header_s* x, int n, struct zx_b_Framework_s* z)
{
  struct zx_b_Framework_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->b_Framework->gg.g;
    x->b_Framework = z;
    return;
  case -1:
    y = x->b_Framework;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b_Framework; n > 1 && y; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_b_Framework) */

void zx_dise_Header_DEL_b_Framework(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b_Framework = (struct zx_b_Framework_s*)x->b_Framework->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_Framework_s*)x->b_Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b_Framework; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_Sender) */

int zx_dise_Header_NUM_Sender(struct zx_dise_Header_s* x)
{
  struct zx_b_Sender_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sender; y; ++n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_Sender) */

struct zx_b_Sender_s* zx_dise_Header_GET_Sender(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_Sender_s* y;
  if (!x) return 0;
  for (y = x->Sender; n>=0 && y; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_Sender) */

struct zx_b_Sender_s* zx_dise_Header_POP_Sender(struct zx_dise_Header_s* x)
{
  struct zx_b_Sender_s* y;
  if (!x) return 0;
  y = x->Sender;
  if (y)
    x->Sender = (struct zx_b_Sender_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_Sender) */

void zx_dise_Header_PUSH_Sender(struct zx_dise_Header_s* x, struct zx_b_Sender_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Sender->gg.g;
  x->Sender = z;
}

/* FUNC(zx_dise_Header_REV_Sender) */

void zx_dise_Header_REV_Sender(struct zx_dise_Header_s* x)
{
  struct zx_b_Sender_s* nxt;
  struct zx_b_Sender_s* y;
  if (!x) return;
  y = x->Sender;
  if (!y) return;
  x->Sender = 0;
  while (y) {
    nxt = (struct zx_b_Sender_s*)y->gg.g.n;
    y->gg.g.n = &x->Sender->gg.g;
    x->Sender = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_Sender) */

void zx_dise_Header_PUT_Sender(struct zx_dise_Header_s* x, int n, struct zx_b_Sender_s* z)
{
  struct zx_b_Sender_s* y;
  if (!x || !z) return;
  y = x->Sender;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Sender = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_Sender) */

void zx_dise_Header_ADD_Sender(struct zx_dise_Header_s* x, int n, struct zx_b_Sender_s* z)
{
  struct zx_b_Sender_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Sender->gg.g;
    x->Sender = z;
    return;
  case -1:
    y = x->Sender;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_Sender) */

void zx_dise_Header_DEL_Sender(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_Sender_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sender = (struct zx_b_Sender_s*)x->Sender->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_Sender_s*)x->Sender;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_CredentialsContext) */

int zx_dise_Header_NUM_CredentialsContext(struct zx_dise_Header_s* x)
{
  struct zx_b_CredentialsContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CredentialsContext; y; ++n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_CredentialsContext) */

struct zx_b_CredentialsContext_s* zx_dise_Header_GET_CredentialsContext(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x) return 0;
  for (y = x->CredentialsContext; n>=0 && y; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_CredentialsContext) */

struct zx_b_CredentialsContext_s* zx_dise_Header_POP_CredentialsContext(struct zx_dise_Header_s* x)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x) return 0;
  y = x->CredentialsContext;
  if (y)
    x->CredentialsContext = (struct zx_b_CredentialsContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_CredentialsContext) */

void zx_dise_Header_PUSH_CredentialsContext(struct zx_dise_Header_s* x, struct zx_b_CredentialsContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CredentialsContext->gg.g;
  x->CredentialsContext = z;
}

/* FUNC(zx_dise_Header_REV_CredentialsContext) */

void zx_dise_Header_REV_CredentialsContext(struct zx_dise_Header_s* x)
{
  struct zx_b_CredentialsContext_s* nxt;
  struct zx_b_CredentialsContext_s* y;
  if (!x) return;
  y = x->CredentialsContext;
  if (!y) return;
  x->CredentialsContext = 0;
  while (y) {
    nxt = (struct zx_b_CredentialsContext_s*)y->gg.g.n;
    y->gg.g.n = &x->CredentialsContext->gg.g;
    x->CredentialsContext = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_CredentialsContext) */

void zx_dise_Header_PUT_CredentialsContext(struct zx_dise_Header_s* x, int n, struct zx_b_CredentialsContext_s* z)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x || !z) return;
  y = x->CredentialsContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CredentialsContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_CredentialsContext) */

void zx_dise_Header_ADD_CredentialsContext(struct zx_dise_Header_s* x, int n, struct zx_b_CredentialsContext_s* z)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CredentialsContext->gg.g;
    x->CredentialsContext = z;
    return;
  case -1:
    y = x->CredentialsContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CredentialsContext; n > 1 && y; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_CredentialsContext) */

void zx_dise_Header_DEL_CredentialsContext(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CredentialsContext = (struct zx_b_CredentialsContext_s*)x->CredentialsContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_CredentialsContext_s*)x->CredentialsContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CredentialsContext; n > 1 && y->gg.g.n; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_EndpointUpdate) */

int zx_dise_Header_NUM_EndpointUpdate(struct zx_dise_Header_s* x)
{
  struct zx_b_EndpointUpdate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointUpdate; y; ++n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_EndpointUpdate) */

struct zx_b_EndpointUpdate_s* zx_dise_Header_GET_EndpointUpdate(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return 0;
  for (y = x->EndpointUpdate; n>=0 && y; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_EndpointUpdate) */

struct zx_b_EndpointUpdate_s* zx_dise_Header_POP_EndpointUpdate(struct zx_dise_Header_s* x)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return 0;
  y = x->EndpointUpdate;
  if (y)
    x->EndpointUpdate = (struct zx_b_EndpointUpdate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_EndpointUpdate) */

void zx_dise_Header_PUSH_EndpointUpdate(struct zx_dise_Header_s* x, struct zx_b_EndpointUpdate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointUpdate->gg.g;
  x->EndpointUpdate = z;
}

/* FUNC(zx_dise_Header_REV_EndpointUpdate) */

void zx_dise_Header_REV_EndpointUpdate(struct zx_dise_Header_s* x)
{
  struct zx_b_EndpointUpdate_s* nxt;
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return;
  y = x->EndpointUpdate;
  if (!y) return;
  x->EndpointUpdate = 0;
  while (y) {
    nxt = (struct zx_b_EndpointUpdate_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointUpdate->gg.g;
    x->EndpointUpdate = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_EndpointUpdate) */

void zx_dise_Header_PUT_EndpointUpdate(struct zx_dise_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x || !z) return;
  y = x->EndpointUpdate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointUpdate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_EndpointUpdate) */

void zx_dise_Header_ADD_EndpointUpdate(struct zx_dise_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointUpdate->gg.g;
    x->EndpointUpdate = z;
    return;
  case -1:
    y = x->EndpointUpdate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointUpdate; n > 1 && y; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_EndpointUpdate) */

void zx_dise_Header_DEL_EndpointUpdate(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointUpdate = (struct zx_b_EndpointUpdate_s*)x->EndpointUpdate->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_EndpointUpdate_s*)x->EndpointUpdate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointUpdate; n > 1 && y->gg.g.n; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_Timeout) */

int zx_dise_Header_NUM_Timeout(struct zx_dise_Header_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Timeout; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_Timeout) */

struct zx_elem_s* zx_dise_Header_GET_Timeout(struct zx_dise_Header_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Timeout; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_Timeout) */

struct zx_elem_s* zx_dise_Header_POP_Timeout(struct zx_dise_Header_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Timeout;
  if (y)
    x->Timeout = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_Timeout) */

void zx_dise_Header_PUSH_Timeout(struct zx_dise_Header_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Timeout->g;
  x->Timeout = z;
}

/* FUNC(zx_dise_Header_REV_Timeout) */

void zx_dise_Header_REV_Timeout(struct zx_dise_Header_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Timeout;
  if (!y) return;
  x->Timeout = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Timeout->g;
    x->Timeout = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_Timeout) */

void zx_dise_Header_PUT_Timeout(struct zx_dise_Header_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Timeout;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Timeout = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_dise_Header_ADD_Timeout) */

void zx_dise_Header_ADD_Timeout(struct zx_dise_Header_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Timeout->g;
    x->Timeout = z;
    return;
  case -1:
    y = x->Timeout;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Timeout; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_dise_Header_DEL_Timeout) */

void zx_dise_Header_DEL_Timeout(struct zx_dise_Header_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Timeout = (struct zx_elem_s*)x->Timeout->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Timeout;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Timeout; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_dise_Header_NUM_ProcessingContext) */

int zx_dise_Header_NUM_ProcessingContext(struct zx_dise_Header_s* x)
{
  struct zx_b_ProcessingContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProcessingContext; y; ++n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_ProcessingContext) */

struct zx_b_ProcessingContext_s* zx_dise_Header_GET_ProcessingContext(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x) return 0;
  for (y = x->ProcessingContext; n>=0 && y; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_ProcessingContext) */

struct zx_b_ProcessingContext_s* zx_dise_Header_POP_ProcessingContext(struct zx_dise_Header_s* x)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x) return 0;
  y = x->ProcessingContext;
  if (y)
    x->ProcessingContext = (struct zx_b_ProcessingContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_ProcessingContext) */

void zx_dise_Header_PUSH_ProcessingContext(struct zx_dise_Header_s* x, struct zx_b_ProcessingContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProcessingContext->gg.g;
  x->ProcessingContext = z;
}

/* FUNC(zx_dise_Header_REV_ProcessingContext) */

void zx_dise_Header_REV_ProcessingContext(struct zx_dise_Header_s* x)
{
  struct zx_b_ProcessingContext_s* nxt;
  struct zx_b_ProcessingContext_s* y;
  if (!x) return;
  y = x->ProcessingContext;
  if (!y) return;
  x->ProcessingContext = 0;
  while (y) {
    nxt = (struct zx_b_ProcessingContext_s*)y->gg.g.n;
    y->gg.g.n = &x->ProcessingContext->gg.g;
    x->ProcessingContext = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_ProcessingContext) */

void zx_dise_Header_PUT_ProcessingContext(struct zx_dise_Header_s* x, int n, struct zx_b_ProcessingContext_s* z)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x || !z) return;
  y = x->ProcessingContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProcessingContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_ProcessingContext) */

void zx_dise_Header_ADD_ProcessingContext(struct zx_dise_Header_s* x, int n, struct zx_b_ProcessingContext_s* z)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProcessingContext->gg.g;
    x->ProcessingContext = z;
    return;
  case -1:
    y = x->ProcessingContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProcessingContext; n > 1 && y; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_ProcessingContext) */

void zx_dise_Header_DEL_ProcessingContext(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProcessingContext = (struct zx_b_ProcessingContext_s*)x->ProcessingContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_ProcessingContext_s*)x->ProcessingContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProcessingContext; n > 1 && y->gg.g.n; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_ApplicationEPR) */

int zx_dise_Header_NUM_ApplicationEPR(struct zx_dise_Header_s* x)
{
  struct zx_b_ApplicationEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicationEPR; y; ++n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_ApplicationEPR) */

struct zx_b_ApplicationEPR_s* zx_dise_Header_GET_ApplicationEPR(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return 0;
  for (y = x->ApplicationEPR; n>=0 && y; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_ApplicationEPR) */

struct zx_b_ApplicationEPR_s* zx_dise_Header_POP_ApplicationEPR(struct zx_dise_Header_s* x)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return 0;
  y = x->ApplicationEPR;
  if (y)
    x->ApplicationEPR = (struct zx_b_ApplicationEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_ApplicationEPR) */

void zx_dise_Header_PUSH_ApplicationEPR(struct zx_dise_Header_s* x, struct zx_b_ApplicationEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ApplicationEPR->gg.g;
  x->ApplicationEPR = z;
}

/* FUNC(zx_dise_Header_REV_ApplicationEPR) */

void zx_dise_Header_REV_ApplicationEPR(struct zx_dise_Header_s* x)
{
  struct zx_b_ApplicationEPR_s* nxt;
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return;
  y = x->ApplicationEPR;
  if (!y) return;
  x->ApplicationEPR = 0;
  while (y) {
    nxt = (struct zx_b_ApplicationEPR_s*)y->gg.g.n;
    y->gg.g.n = &x->ApplicationEPR->gg.g;
    x->ApplicationEPR = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_ApplicationEPR) */

void zx_dise_Header_PUT_ApplicationEPR(struct zx_dise_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x || !z) return;
  y = x->ApplicationEPR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ApplicationEPR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_ApplicationEPR) */

void zx_dise_Header_ADD_ApplicationEPR(struct zx_dise_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ApplicationEPR->gg.g;
    x->ApplicationEPR = z;
    return;
  case -1:
    y = x->ApplicationEPR;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ApplicationEPR; n > 1 && y; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_ApplicationEPR) */

void zx_dise_Header_DEL_ApplicationEPR(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicationEPR = (struct zx_b_ApplicationEPR_s*)x->ApplicationEPR->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_ApplicationEPR_s*)x->ApplicationEPR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ApplicationEPR; n > 1 && y->gg.g.n; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_dise_Header_NUM_RedirectRequest) */

int zx_dise_Header_NUM_RedirectRequest(struct zx_dise_Header_s* x)
{
  struct zx_b_RedirectRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RedirectRequest; y; ++n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_dise_Header_GET_RedirectRequest) */

struct zx_b_RedirectRequest_s* zx_dise_Header_GET_RedirectRequest(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x) return 0;
  for (y = x->RedirectRequest; n>=0 && y; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_dise_Header_POP_RedirectRequest) */

struct zx_b_RedirectRequest_s* zx_dise_Header_POP_RedirectRequest(struct zx_dise_Header_s* x)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x) return 0;
  y = x->RedirectRequest;
  if (y)
    x->RedirectRequest = (struct zx_b_RedirectRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_dise_Header_PUSH_RedirectRequest) */

void zx_dise_Header_PUSH_RedirectRequest(struct zx_dise_Header_s* x, struct zx_b_RedirectRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RedirectRequest->gg.g;
  x->RedirectRequest = z;
}

/* FUNC(zx_dise_Header_REV_RedirectRequest) */

void zx_dise_Header_REV_RedirectRequest(struct zx_dise_Header_s* x)
{
  struct zx_b_RedirectRequest_s* nxt;
  struct zx_b_RedirectRequest_s* y;
  if (!x) return;
  y = x->RedirectRequest;
  if (!y) return;
  x->RedirectRequest = 0;
  while (y) {
    nxt = (struct zx_b_RedirectRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RedirectRequest->gg.g;
    x->RedirectRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_dise_Header_PUT_RedirectRequest) */

void zx_dise_Header_PUT_RedirectRequest(struct zx_dise_Header_s* x, int n, struct zx_b_RedirectRequest_s* z)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x || !z) return;
  y = x->RedirectRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RedirectRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_dise_Header_ADD_RedirectRequest) */

void zx_dise_Header_ADD_RedirectRequest(struct zx_dise_Header_s* x, int n, struct zx_b_RedirectRequest_s* z)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RedirectRequest->gg.g;
    x->RedirectRequest = z;
    return;
  case -1:
    y = x->RedirectRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RedirectRequest; n > 1 && y; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_dise_Header_DEL_RedirectRequest) */

void zx_dise_Header_DEL_RedirectRequest(struct zx_dise_Header_s* x, int n)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RedirectRequest = (struct zx_b_RedirectRequest_s*)x->RedirectRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_RedirectRequest_s*)x->RedirectRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RedirectRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}











/* EOF -- c/zx-dise-getput.c */
