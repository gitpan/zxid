/* c/zx-e-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-e-data.h"



/* FUNC(zx_e_Body_NUM_Query) */

int zx_e_Body_NUM_Query(struct zx_e_Body_s* x)
{
  struct zx_di_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Query; y; ++n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Query) */

struct zx_di_Query_s* zx_e_Body_GET_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_di_Query_s* y;
  if (!x) return 0;
  for (y = x->Query; n>=0 && y; --n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Query) */

struct zx_di_Query_s* zx_e_Body_POP_Query(struct zx_e_Body_s* x)
{
  struct zx_di_Query_s* y;
  if (!x) return 0;
  y = x->Query;
  if (y)
    x->Query = (struct zx_di_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Query) */

void zx_e_Body_PUSH_Query(struct zx_e_Body_s* x, struct zx_di_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Query->gg.g;
  x->Query = z;
}

/* FUNC(zx_e_Body_REV_Query) */

void zx_e_Body_REV_Query(struct zx_e_Body_s* x)
{
  struct zx_di_Query_s* nxt;
  struct zx_di_Query_s* y;
  if (!x) return;
  y = x->Query;
  if (!y) return;
  x->Query = 0;
  while (y) {
    nxt = (struct zx_di_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->Query->gg.g;
    x->Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Query) */

void zx_e_Body_PUT_Query(struct zx_e_Body_s* x, int n, struct zx_di_Query_s* z)
{
  struct zx_di_Query_s* y;
  if (!x || !z) return;
  y = x->Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Query) */

void zx_e_Body_ADD_Query(struct zx_e_Body_s* x, int n, struct zx_di_Query_s* z)
{
  struct zx_di_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Query->gg.g;
    x->Query = z;
    return;
  case -1:
    y = x->Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Query; n > 1 && y; --n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Query) */

void zx_e_Body_DEL_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_di_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Query = (struct zx_di_Query_s*)x->Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_Query_s*)x->Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Query; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Body_NUM_QueryResponse) */

int zx_e_Body_NUM_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryResponse; y; ++n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_QueryResponse) */

struct zx_di_QueryResponse_s* zx_e_Body_GET_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->QueryResponse; n>=0 && y; --n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_QueryResponse) */

struct zx_di_QueryResponse_s* zx_e_Body_POP_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_QueryResponse_s* y;
  if (!x) return 0;
  y = x->QueryResponse;
  if (y)
    x->QueryResponse = (struct zx_di_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_QueryResponse) */

void zx_e_Body_PUSH_QueryResponse(struct zx_e_Body_s* x, struct zx_di_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryResponse->gg.g;
  x->QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_QueryResponse) */

void zx_e_Body_REV_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_QueryResponse_s* nxt;
  struct zx_di_QueryResponse_s* y;
  if (!x) return;
  y = x->QueryResponse;
  if (!y) return;
  x->QueryResponse = 0;
  while (y) {
    nxt = (struct zx_di_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryResponse->gg.g;
    x->QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_QueryResponse) */

void zx_e_Body_PUT_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_QueryResponse_s* z)
{
  struct zx_di_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_QueryResponse) */

void zx_e_Body_ADD_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_QueryResponse_s* z)
{
  struct zx_di_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryResponse->gg.g;
    x->QueryResponse = z;
    return;
  case -1:
    y = x->QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryResponse; n > 1 && y; --n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_QueryResponse) */

void zx_e_Body_DEL_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryResponse = (struct zx_di_QueryResponse_s*)x->QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_QueryResponse_s*)x->QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Body_NUM_di12_Query) */

int zx_e_Body_NUM_di12_Query(struct zx_e_Body_s* x)
{
  struct zx_di12_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->di12_Query; y; ++n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_di12_Query) */

struct zx_di12_Query_s* zx_e_Body_GET_di12_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_Query_s* y;
  if (!x) return 0;
  for (y = x->di12_Query; n>=0 && y; --n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_di12_Query) */

struct zx_di12_Query_s* zx_e_Body_POP_di12_Query(struct zx_e_Body_s* x)
{
  struct zx_di12_Query_s* y;
  if (!x) return 0;
  y = x->di12_Query;
  if (y)
    x->di12_Query = (struct zx_di12_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_di12_Query) */

void zx_e_Body_PUSH_di12_Query(struct zx_e_Body_s* x, struct zx_di12_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->di12_Query->gg.g;
  x->di12_Query = z;
}

/* FUNC(zx_e_Body_REV_di12_Query) */

void zx_e_Body_REV_di12_Query(struct zx_e_Body_s* x)
{
  struct zx_di12_Query_s* nxt;
  struct zx_di12_Query_s* y;
  if (!x) return;
  y = x->di12_Query;
  if (!y) return;
  x->di12_Query = 0;
  while (y) {
    nxt = (struct zx_di12_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->di12_Query->gg.g;
    x->di12_Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_di12_Query) */

void zx_e_Body_PUT_di12_Query(struct zx_e_Body_s* x, int n, struct zx_di12_Query_s* z)
{
  struct zx_di12_Query_s* y;
  if (!x || !z) return;
  y = x->di12_Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->di12_Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_di12_Query) */

void zx_e_Body_ADD_di12_Query(struct zx_e_Body_s* x, int n, struct zx_di12_Query_s* z)
{
  struct zx_di12_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->di12_Query->gg.g;
    x->di12_Query = z;
    return;
  case -1:
    y = x->di12_Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_Query; n > 1 && y; --n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_di12_Query) */

void zx_e_Body_DEL_di12_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->di12_Query = (struct zx_di12_Query_s*)x->di12_Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Query_s*)x->di12_Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_Query; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Body_NUM_di12_QueryResponse) */

int zx_e_Body_NUM_di12_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->di12_QueryResponse; y; ++n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_di12_QueryResponse) */

struct zx_di12_QueryResponse_s* zx_e_Body_GET_di12_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->di12_QueryResponse; n>=0 && y; --n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_di12_QueryResponse) */

struct zx_di12_QueryResponse_s* zx_e_Body_POP_di12_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x) return 0;
  y = x->di12_QueryResponse;
  if (y)
    x->di12_QueryResponse = (struct zx_di12_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_di12_QueryResponse) */

void zx_e_Body_PUSH_di12_QueryResponse(struct zx_e_Body_s* x, struct zx_di12_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->di12_QueryResponse->gg.g;
  x->di12_QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_di12_QueryResponse) */

void zx_e_Body_REV_di12_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_QueryResponse_s* nxt;
  struct zx_di12_QueryResponse_s* y;
  if (!x) return;
  y = x->di12_QueryResponse;
  if (!y) return;
  x->di12_QueryResponse = 0;
  while (y) {
    nxt = (struct zx_di12_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->di12_QueryResponse->gg.g;
    x->di12_QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_di12_QueryResponse) */

void zx_e_Body_PUT_di12_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di12_QueryResponse_s* z)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->di12_QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->di12_QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_di12_QueryResponse) */

void zx_e_Body_ADD_di12_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di12_QueryResponse_s* z)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->di12_QueryResponse->gg.g;
    x->di12_QueryResponse = z;
    return;
  case -1:
    y = x->di12_QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_QueryResponse; n > 1 && y; --n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_di12_QueryResponse) */

void zx_e_Body_DEL_di12_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->di12_QueryResponse = (struct zx_di12_QueryResponse_s*)x->di12_QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_QueryResponse_s*)x->di12_QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Body_NUM_Modify) */

int zx_e_Body_NUM_Modify(struct zx_e_Body_s* x)
{
  struct zx_di12_Modify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Modify; y; ++n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Modify) */

struct zx_di12_Modify_s* zx_e_Body_GET_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_Modify_s* y;
  if (!x) return 0;
  for (y = x->Modify; n>=0 && y; --n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Modify) */

struct zx_di12_Modify_s* zx_e_Body_POP_Modify(struct zx_e_Body_s* x)
{
  struct zx_di12_Modify_s* y;
  if (!x) return 0;
  y = x->Modify;
  if (y)
    x->Modify = (struct zx_di12_Modify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Modify) */

void zx_e_Body_PUSH_Modify(struct zx_e_Body_s* x, struct zx_di12_Modify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Modify->gg.g;
  x->Modify = z;
}

/* FUNC(zx_e_Body_REV_Modify) */

void zx_e_Body_REV_Modify(struct zx_e_Body_s* x)
{
  struct zx_di12_Modify_s* nxt;
  struct zx_di12_Modify_s* y;
  if (!x) return;
  y = x->Modify;
  if (!y) return;
  x->Modify = 0;
  while (y) {
    nxt = (struct zx_di12_Modify_s*)y->gg.g.n;
    y->gg.g.n = &x->Modify->gg.g;
    x->Modify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Modify) */

void zx_e_Body_PUT_Modify(struct zx_e_Body_s* x, int n, struct zx_di12_Modify_s* z)
{
  struct zx_di12_Modify_s* y;
  if (!x || !z) return;
  y = x->Modify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Modify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Modify) */

void zx_e_Body_ADD_Modify(struct zx_e_Body_s* x, int n, struct zx_di12_Modify_s* z)
{
  struct zx_di12_Modify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Modify->gg.g;
    x->Modify = z;
    return;
  case -1:
    y = x->Modify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modify; n > 1 && y; --n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Modify) */

void zx_e_Body_DEL_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_Modify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Modify = (struct zx_di12_Modify_s*)x->Modify->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Modify_s*)x->Modify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modify; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Body_NUM_ModifyResponse) */

int zx_e_Body_NUM_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_ModifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ModifyResponse; y; ++n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ModifyResponse) */

struct zx_di12_ModifyResponse_s* zx_e_Body_GET_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x) return 0;
  for (y = x->ModifyResponse; n>=0 && y; --n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ModifyResponse) */

struct zx_di12_ModifyResponse_s* zx_e_Body_POP_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x) return 0;
  y = x->ModifyResponse;
  if (y)
    x->ModifyResponse = (struct zx_di12_ModifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ModifyResponse) */

void zx_e_Body_PUSH_ModifyResponse(struct zx_e_Body_s* x, struct zx_di12_ModifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ModifyResponse->gg.g;
  x->ModifyResponse = z;
}

/* FUNC(zx_e_Body_REV_ModifyResponse) */

void zx_e_Body_REV_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_ModifyResponse_s* nxt;
  struct zx_di12_ModifyResponse_s* y;
  if (!x) return;
  y = x->ModifyResponse;
  if (!y) return;
  x->ModifyResponse = 0;
  while (y) {
    nxt = (struct zx_di12_ModifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ModifyResponse->gg.g;
    x->ModifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ModifyResponse) */

void zx_e_Body_PUT_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_di12_ModifyResponse_s* z)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x || !z) return;
  y = x->ModifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ModifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ModifyResponse) */

void zx_e_Body_ADD_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_di12_ModifyResponse_s* z)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ModifyResponse->gg.g;
    x->ModifyResponse = z;
    return;
  case -1:
    y = x->ModifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ModifyResponse; n > 1 && y; --n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ModifyResponse) */

void zx_e_Body_DEL_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ModifyResponse = (struct zx_di12_ModifyResponse_s*)x->ModifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ModifyResponse_s*)x->ModifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ModifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Body_NUM_Fault) */

int zx_e_Body_NUM_Fault(struct zx_e_Body_s* x)
{
  struct zx_e_Fault_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Fault; y; ++n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Fault) */

struct zx_e_Fault_s* zx_e_Body_GET_Fault(struct zx_e_Body_s* x, int n)
{
  struct zx_e_Fault_s* y;
  if (!x) return 0;
  for (y = x->Fault; n>=0 && y; --n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Fault) */

struct zx_e_Fault_s* zx_e_Body_POP_Fault(struct zx_e_Body_s* x)
{
  struct zx_e_Fault_s* y;
  if (!x) return 0;
  y = x->Fault;
  if (y)
    x->Fault = (struct zx_e_Fault_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Fault) */

void zx_e_Body_PUSH_Fault(struct zx_e_Body_s* x, struct zx_e_Fault_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Fault->gg.g;
  x->Fault = z;
}

/* FUNC(zx_e_Body_REV_Fault) */

void zx_e_Body_REV_Fault(struct zx_e_Body_s* x)
{
  struct zx_e_Fault_s* nxt;
  struct zx_e_Fault_s* y;
  if (!x) return;
  y = x->Fault;
  if (!y) return;
  x->Fault = 0;
  while (y) {
    nxt = (struct zx_e_Fault_s*)y->gg.g.n;
    y->gg.g.n = &x->Fault->gg.g;
    x->Fault = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Fault) */

void zx_e_Body_PUT_Fault(struct zx_e_Body_s* x, int n, struct zx_e_Fault_s* z)
{
  struct zx_e_Fault_s* y;
  if (!x || !z) return;
  y = x->Fault;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Fault = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Fault) */

void zx_e_Body_ADD_Fault(struct zx_e_Body_s* x, int n, struct zx_e_Fault_s* z)
{
  struct zx_e_Fault_s* y;
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
    for (; y->gg.g.n; y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y; --n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Fault) */

void zx_e_Body_DEL_Fault(struct zx_e_Body_s* x, int n)
{
  struct zx_e_Fault_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Fault = (struct zx_e_Fault_s*)x->Fault->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Fault_s*)x->Fault;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_e_Envelope_NUM_Header) */

int zx_e_Envelope_NUM_Header(struct zx_e_Envelope_s* x)
{
  struct zx_e_Header_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Header; y; ++n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Envelope_GET_Header) */

struct zx_e_Header_s* zx_e_Envelope_GET_Header(struct zx_e_Envelope_s* x, int n)
{
  struct zx_e_Header_s* y;
  if (!x) return 0;
  for (y = x->Header; n>=0 && y; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Envelope_POP_Header) */

struct zx_e_Header_s* zx_e_Envelope_POP_Header(struct zx_e_Envelope_s* x)
{
  struct zx_e_Header_s* y;
  if (!x) return 0;
  y = x->Header;
  if (y)
    x->Header = (struct zx_e_Header_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Envelope_PUSH_Header) */

void zx_e_Envelope_PUSH_Header(struct zx_e_Envelope_s* x, struct zx_e_Header_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Header->gg.g;
  x->Header = z;
}

/* FUNC(zx_e_Envelope_REV_Header) */

void zx_e_Envelope_REV_Header(struct zx_e_Envelope_s* x)
{
  struct zx_e_Header_s* nxt;
  struct zx_e_Header_s* y;
  if (!x) return;
  y = x->Header;
  if (!y) return;
  x->Header = 0;
  while (y) {
    nxt = (struct zx_e_Header_s*)y->gg.g.n;
    y->gg.g.n = &x->Header->gg.g;
    x->Header = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Envelope_PUT_Header) */

void zx_e_Envelope_PUT_Header(struct zx_e_Envelope_s* x, int n, struct zx_e_Header_s* z)
{
  struct zx_e_Header_s* y;
  if (!x || !z) return;
  y = x->Header;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Header = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Envelope_ADD_Header) */

void zx_e_Envelope_ADD_Header(struct zx_e_Envelope_s* x, int n, struct zx_e_Header_s* z)
{
  struct zx_e_Header_s* y;
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
    for (; y->gg.g.n; y = (struct zx_e_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Envelope_DEL_Header) */

void zx_e_Envelope_DEL_Header(struct zx_e_Envelope_s* x, int n)
{
  struct zx_e_Header_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Header = (struct zx_e_Header_s*)x->Header->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Header_s*)x->Header;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Envelope_NUM_Body) */

int zx_e_Envelope_NUM_Body(struct zx_e_Envelope_s* x)
{
  struct zx_e_Body_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Body; y; ++n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Envelope_GET_Body) */

struct zx_e_Body_s* zx_e_Envelope_GET_Body(struct zx_e_Envelope_s* x, int n)
{
  struct zx_e_Body_s* y;
  if (!x) return 0;
  for (y = x->Body; n>=0 && y; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Envelope_POP_Body) */

struct zx_e_Body_s* zx_e_Envelope_POP_Body(struct zx_e_Envelope_s* x)
{
  struct zx_e_Body_s* y;
  if (!x) return 0;
  y = x->Body;
  if (y)
    x->Body = (struct zx_e_Body_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Envelope_PUSH_Body) */

void zx_e_Envelope_PUSH_Body(struct zx_e_Envelope_s* x, struct zx_e_Body_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Body->gg.g;
  x->Body = z;
}

/* FUNC(zx_e_Envelope_REV_Body) */

void zx_e_Envelope_REV_Body(struct zx_e_Envelope_s* x)
{
  struct zx_e_Body_s* nxt;
  struct zx_e_Body_s* y;
  if (!x) return;
  y = x->Body;
  if (!y) return;
  x->Body = 0;
  while (y) {
    nxt = (struct zx_e_Body_s*)y->gg.g.n;
    y->gg.g.n = &x->Body->gg.g;
    x->Body = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Envelope_PUT_Body) */

void zx_e_Envelope_PUT_Body(struct zx_e_Envelope_s* x, int n, struct zx_e_Body_s* z)
{
  struct zx_e_Body_s* y;
  if (!x || !z) return;
  y = x->Body;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Body = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Envelope_ADD_Body) */

void zx_e_Envelope_ADD_Body(struct zx_e_Envelope_s* x, int n, struct zx_e_Body_s* z)
{
  struct zx_e_Body_s* y;
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
    for (; y->gg.g.n; y = (struct zx_e_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Envelope_DEL_Body) */

void zx_e_Envelope_DEL_Body(struct zx_e_Envelope_s* x, int n)
{
  struct zx_e_Body_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Body = (struct zx_e_Body_s*)x->Body->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Body_s*)x->Body;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_e_Fault_NUM_faultcode) */

int zx_e_Fault_NUM_faultcode(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultcode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_e_Fault_GET_faultcode) */

struct zx_elem_s* zx_e_Fault_GET_faultcode(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultcode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_e_Fault_POP_faultcode) */

struct zx_elem_s* zx_e_Fault_POP_faultcode(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultcode;
  if (y)
    x->faultcode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_e_Fault_PUSH_faultcode) */

void zx_e_Fault_PUSH_faultcode(struct zx_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultcode->g;
  x->faultcode = z;
}

/* FUNC(zx_e_Fault_REV_faultcode) */

void zx_e_Fault_REV_faultcode(struct zx_e_Fault_s* x)
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

/* FUNC(zx_e_Fault_PUT_faultcode) */

void zx_e_Fault_PUT_faultcode(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_e_Fault_ADD_faultcode) */

void zx_e_Fault_ADD_faultcode(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_e_Fault_DEL_faultcode) */

void zx_e_Fault_DEL_faultcode(struct zx_e_Fault_s* x, int n)
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



/* FUNC(zx_e_Fault_NUM_faultstring) */

int zx_e_Fault_NUM_faultstring(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultstring; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_e_Fault_GET_faultstring) */

struct zx_elem_s* zx_e_Fault_GET_faultstring(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultstring; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_e_Fault_POP_faultstring) */

struct zx_elem_s* zx_e_Fault_POP_faultstring(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultstring;
  if (y)
    x->faultstring = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_e_Fault_PUSH_faultstring) */

void zx_e_Fault_PUSH_faultstring(struct zx_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultstring->g;
  x->faultstring = z;
}

/* FUNC(zx_e_Fault_REV_faultstring) */

void zx_e_Fault_REV_faultstring(struct zx_e_Fault_s* x)
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

/* FUNC(zx_e_Fault_PUT_faultstring) */

void zx_e_Fault_PUT_faultstring(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_e_Fault_ADD_faultstring) */

void zx_e_Fault_ADD_faultstring(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_e_Fault_DEL_faultstring) */

void zx_e_Fault_DEL_faultstring(struct zx_e_Fault_s* x, int n)
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



/* FUNC(zx_e_Fault_NUM_faultactor) */

int zx_e_Fault_NUM_faultactor(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultactor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_e_Fault_GET_faultactor) */

struct zx_elem_s* zx_e_Fault_GET_faultactor(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultactor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_e_Fault_POP_faultactor) */

struct zx_elem_s* zx_e_Fault_POP_faultactor(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultactor;
  if (y)
    x->faultactor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_e_Fault_PUSH_faultactor) */

void zx_e_Fault_PUSH_faultactor(struct zx_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultactor->g;
  x->faultactor = z;
}

/* FUNC(zx_e_Fault_REV_faultactor) */

void zx_e_Fault_REV_faultactor(struct zx_e_Fault_s* x)
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

/* FUNC(zx_e_Fault_PUT_faultactor) */

void zx_e_Fault_PUT_faultactor(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_e_Fault_ADD_faultactor) */

void zx_e_Fault_ADD_faultactor(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_e_Fault_DEL_faultactor) */

void zx_e_Fault_DEL_faultactor(struct zx_e_Fault_s* x, int n)
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



/* FUNC(zx_e_Fault_NUM_detail) */

int zx_e_Fault_NUM_detail(struct zx_e_Fault_s* x)
{
  struct zx_e_detail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->detail; y; ++n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Fault_GET_detail) */

struct zx_e_detail_s* zx_e_Fault_GET_detail(struct zx_e_Fault_s* x, int n)
{
  struct zx_e_detail_s* y;
  if (!x) return 0;
  for (y = x->detail; n>=0 && y; --n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Fault_POP_detail) */

struct zx_e_detail_s* zx_e_Fault_POP_detail(struct zx_e_Fault_s* x)
{
  struct zx_e_detail_s* y;
  if (!x) return 0;
  y = x->detail;
  if (y)
    x->detail = (struct zx_e_detail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Fault_PUSH_detail) */

void zx_e_Fault_PUSH_detail(struct zx_e_Fault_s* x, struct zx_e_detail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->detail->gg.g;
  x->detail = z;
}

/* FUNC(zx_e_Fault_REV_detail) */

void zx_e_Fault_REV_detail(struct zx_e_Fault_s* x)
{
  struct zx_e_detail_s* nxt;
  struct zx_e_detail_s* y;
  if (!x) return;
  y = x->detail;
  if (!y) return;
  x->detail = 0;
  while (y) {
    nxt = (struct zx_e_detail_s*)y->gg.g.n;
    y->gg.g.n = &x->detail->gg.g;
    x->detail = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Fault_PUT_detail) */

void zx_e_Fault_PUT_detail(struct zx_e_Fault_s* x, int n, struct zx_e_detail_s* z)
{
  struct zx_e_detail_s* y;
  if (!x || !z) return;
  y = x->detail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->detail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Fault_ADD_detail) */

void zx_e_Fault_ADD_detail(struct zx_e_Fault_s* x, int n, struct zx_e_detail_s* z)
{
  struct zx_e_detail_s* y;
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
    for (; y->gg.g.n; y = (struct zx_e_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y; --n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Fault_DEL_detail) */

void zx_e_Fault_DEL_detail(struct zx_e_Fault_s* x, int n)
{
  struct zx_e_detail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->detail = (struct zx_e_detail_s*)x->detail->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_detail_s*)x->detail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y->gg.g.n; --n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_e_Header_NUM_MessageID) */

int zx_e_Header_NUM_MessageID(struct zx_e_Header_s* x)
{
  struct zx_a_MessageID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_MessageID) */

struct zx_a_MessageID_s* zx_e_Header_GET_MessageID(struct zx_e_Header_s* x, int n)
{
  struct zx_a_MessageID_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_MessageID) */

struct zx_a_MessageID_s* zx_e_Header_POP_MessageID(struct zx_e_Header_s* x)
{
  struct zx_a_MessageID_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_a_MessageID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_MessageID) */

void zx_e_Header_PUSH_MessageID(struct zx_e_Header_s* x, struct zx_a_MessageID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageID->gg.g;
  x->MessageID = z;
}

/* FUNC(zx_e_Header_REV_MessageID) */

void zx_e_Header_REV_MessageID(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_MessageID) */

void zx_e_Header_PUT_MessageID(struct zx_e_Header_s* x, int n, struct zx_a_MessageID_s* z)
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

/* FUNC(zx_e_Header_ADD_MessageID) */

void zx_e_Header_ADD_MessageID(struct zx_e_Header_s* x, int n, struct zx_a_MessageID_s* z)
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

/* FUNC(zx_e_Header_DEL_MessageID) */

void zx_e_Header_DEL_MessageID(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_RelatesTo) */

int zx_e_Header_NUM_RelatesTo(struct zx_e_Header_s* x)
{
  struct zx_a_RelatesTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RelatesTo; y; ++n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_RelatesTo) */

struct zx_a_RelatesTo_s* zx_e_Header_GET_RelatesTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_RelatesTo_s* y;
  if (!x) return 0;
  for (y = x->RelatesTo; n>=0 && y; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_RelatesTo) */

struct zx_a_RelatesTo_s* zx_e_Header_POP_RelatesTo(struct zx_e_Header_s* x)
{
  struct zx_a_RelatesTo_s* y;
  if (!x) return 0;
  y = x->RelatesTo;
  if (y)
    x->RelatesTo = (struct zx_a_RelatesTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_RelatesTo) */

void zx_e_Header_PUSH_RelatesTo(struct zx_e_Header_s* x, struct zx_a_RelatesTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RelatesTo->gg.g;
  x->RelatesTo = z;
}

/* FUNC(zx_e_Header_REV_RelatesTo) */

void zx_e_Header_REV_RelatesTo(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_RelatesTo) */

void zx_e_Header_PUT_RelatesTo(struct zx_e_Header_s* x, int n, struct zx_a_RelatesTo_s* z)
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

/* FUNC(zx_e_Header_ADD_RelatesTo) */

void zx_e_Header_ADD_RelatesTo(struct zx_e_Header_s* x, int n, struct zx_a_RelatesTo_s* z)
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

/* FUNC(zx_e_Header_DEL_RelatesTo) */

void zx_e_Header_DEL_RelatesTo(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_ReplyTo) */

int zx_e_Header_NUM_ReplyTo(struct zx_e_Header_s* x)
{
  struct zx_a_ReplyTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyTo; y; ++n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ReplyTo) */

struct zx_a_ReplyTo_s* zx_e_Header_GET_ReplyTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_ReplyTo_s* y;
  if (!x) return 0;
  for (y = x->ReplyTo; n>=0 && y; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ReplyTo) */

struct zx_a_ReplyTo_s* zx_e_Header_POP_ReplyTo(struct zx_e_Header_s* x)
{
  struct zx_a_ReplyTo_s* y;
  if (!x) return 0;
  y = x->ReplyTo;
  if (y)
    x->ReplyTo = (struct zx_a_ReplyTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ReplyTo) */

void zx_e_Header_PUSH_ReplyTo(struct zx_e_Header_s* x, struct zx_a_ReplyTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReplyTo->gg.g;
  x->ReplyTo = z;
}

/* FUNC(zx_e_Header_REV_ReplyTo) */

void zx_e_Header_REV_ReplyTo(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_ReplyTo) */

void zx_e_Header_PUT_ReplyTo(struct zx_e_Header_s* x, int n, struct zx_a_ReplyTo_s* z)
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

/* FUNC(zx_e_Header_ADD_ReplyTo) */

void zx_e_Header_ADD_ReplyTo(struct zx_e_Header_s* x, int n, struct zx_a_ReplyTo_s* z)
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

/* FUNC(zx_e_Header_DEL_ReplyTo) */

void zx_e_Header_DEL_ReplyTo(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_From) */

int zx_e_Header_NUM_From(struct zx_e_Header_s* x)
{
  struct zx_a_From_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->From; y; ++n, y = (struct zx_a_From_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_From) */

struct zx_a_From_s* zx_e_Header_GET_From(struct zx_e_Header_s* x, int n)
{
  struct zx_a_From_s* y;
  if (!x) return 0;
  for (y = x->From; n>=0 && y; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_From) */

struct zx_a_From_s* zx_e_Header_POP_From(struct zx_e_Header_s* x)
{
  struct zx_a_From_s* y;
  if (!x) return 0;
  y = x->From;
  if (y)
    x->From = (struct zx_a_From_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_From) */

void zx_e_Header_PUSH_From(struct zx_e_Header_s* x, struct zx_a_From_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->From->gg.g;
  x->From = z;
}

/* FUNC(zx_e_Header_REV_From) */

void zx_e_Header_REV_From(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_From) */

void zx_e_Header_PUT_From(struct zx_e_Header_s* x, int n, struct zx_a_From_s* z)
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

/* FUNC(zx_e_Header_ADD_From) */

void zx_e_Header_ADD_From(struct zx_e_Header_s* x, int n, struct zx_a_From_s* z)
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

/* FUNC(zx_e_Header_DEL_From) */

void zx_e_Header_DEL_From(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_FaultTo) */

int zx_e_Header_NUM_FaultTo(struct zx_e_Header_s* x)
{
  struct zx_a_FaultTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FaultTo; y; ++n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_FaultTo) */

struct zx_a_FaultTo_s* zx_e_Header_GET_FaultTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_FaultTo_s* y;
  if (!x) return 0;
  for (y = x->FaultTo; n>=0 && y; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_FaultTo) */

struct zx_a_FaultTo_s* zx_e_Header_POP_FaultTo(struct zx_e_Header_s* x)
{
  struct zx_a_FaultTo_s* y;
  if (!x) return 0;
  y = x->FaultTo;
  if (y)
    x->FaultTo = (struct zx_a_FaultTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_FaultTo) */

void zx_e_Header_PUSH_FaultTo(struct zx_e_Header_s* x, struct zx_a_FaultTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FaultTo->gg.g;
  x->FaultTo = z;
}

/* FUNC(zx_e_Header_REV_FaultTo) */

void zx_e_Header_REV_FaultTo(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_FaultTo) */

void zx_e_Header_PUT_FaultTo(struct zx_e_Header_s* x, int n, struct zx_a_FaultTo_s* z)
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

/* FUNC(zx_e_Header_ADD_FaultTo) */

void zx_e_Header_ADD_FaultTo(struct zx_e_Header_s* x, int n, struct zx_a_FaultTo_s* z)
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

/* FUNC(zx_e_Header_DEL_FaultTo) */

void zx_e_Header_DEL_FaultTo(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_To) */

int zx_e_Header_NUM_To(struct zx_e_Header_s* x)
{
  struct zx_a_To_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->To; y; ++n, y = (struct zx_a_To_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_To) */

struct zx_a_To_s* zx_e_Header_GET_To(struct zx_e_Header_s* x, int n)
{
  struct zx_a_To_s* y;
  if (!x) return 0;
  for (y = x->To; n>=0 && y; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_To) */

struct zx_a_To_s* zx_e_Header_POP_To(struct zx_e_Header_s* x)
{
  struct zx_a_To_s* y;
  if (!x) return 0;
  y = x->To;
  if (y)
    x->To = (struct zx_a_To_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_To) */

void zx_e_Header_PUSH_To(struct zx_e_Header_s* x, struct zx_a_To_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->To->gg.g;
  x->To = z;
}

/* FUNC(zx_e_Header_REV_To) */

void zx_e_Header_REV_To(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_To) */

void zx_e_Header_PUT_To(struct zx_e_Header_s* x, int n, struct zx_a_To_s* z)
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

/* FUNC(zx_e_Header_ADD_To) */

void zx_e_Header_ADD_To(struct zx_e_Header_s* x, int n, struct zx_a_To_s* z)
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

/* FUNC(zx_e_Header_DEL_To) */

void zx_e_Header_DEL_To(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_Action) */

int zx_e_Header_NUM_Action(struct zx_e_Header_s* x)
{
  struct zx_a_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Action) */

struct zx_a_Action_s* zx_e_Header_GET_Action(struct zx_e_Header_s* x, int n)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Action) */

struct zx_a_Action_s* zx_e_Header_POP_Action(struct zx_e_Header_s* x)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_a_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Action) */

void zx_e_Header_PUSH_Action(struct zx_e_Header_s* x, struct zx_a_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_e_Header_REV_Action) */

void zx_e_Header_REV_Action(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_Action) */

void zx_e_Header_PUT_Action(struct zx_e_Header_s* x, int n, struct zx_a_Action_s* z)
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

/* FUNC(zx_e_Header_ADD_Action) */

void zx_e_Header_ADD_Action(struct zx_e_Header_s* x, int n, struct zx_a_Action_s* z)
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

/* FUNC(zx_e_Header_DEL_Action) */

void zx_e_Header_DEL_Action(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_Framework) */

int zx_e_Header_NUM_Framework(struct zx_e_Header_s* x)
{
  struct zx_sbf_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Framework) */

struct zx_sbf_Framework_s* zx_e_Header_GET_Framework(struct zx_e_Header_s* x, int n)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Framework) */

struct zx_sbf_Framework_s* zx_e_Header_POP_Framework(struct zx_e_Header_s* x)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zx_sbf_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Framework) */

void zx_e_Header_PUSH_Framework(struct zx_e_Header_s* x, struct zx_sbf_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zx_e_Header_REV_Framework) */

void zx_e_Header_REV_Framework(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_Framework) */

void zx_e_Header_PUT_Framework(struct zx_e_Header_s* x, int n, struct zx_sbf_Framework_s* z)
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

/* FUNC(zx_e_Header_ADD_Framework) */

void zx_e_Header_ADD_Framework(struct zx_e_Header_s* x, int n, struct zx_sbf_Framework_s* z)
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

/* FUNC(zx_e_Header_DEL_Framework) */

void zx_e_Header_DEL_Framework(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_b_Framework) */

int zx_e_Header_NUM_b_Framework(struct zx_e_Header_s* x)
{
  struct zx_b_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b_Framework; y; ++n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_b_Framework) */

struct zx_b_Framework_s* zx_e_Header_GET_b_Framework(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Framework_s* y;
  if (!x) return 0;
  for (y = x->b_Framework; n>=0 && y; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_b_Framework) */

struct zx_b_Framework_s* zx_e_Header_POP_b_Framework(struct zx_e_Header_s* x)
{
  struct zx_b_Framework_s* y;
  if (!x) return 0;
  y = x->b_Framework;
  if (y)
    x->b_Framework = (struct zx_b_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_b_Framework) */

void zx_e_Header_PUSH_b_Framework(struct zx_e_Header_s* x, struct zx_b_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b_Framework->gg.g;
  x->b_Framework = z;
}

/* FUNC(zx_e_Header_REV_b_Framework) */

void zx_e_Header_REV_b_Framework(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_b_Framework) */

void zx_e_Header_PUT_b_Framework(struct zx_e_Header_s* x, int n, struct zx_b_Framework_s* z)
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

/* FUNC(zx_e_Header_ADD_b_Framework) */

void zx_e_Header_ADD_b_Framework(struct zx_e_Header_s* x, int n, struct zx_b_Framework_s* z)
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

/* FUNC(zx_e_Header_DEL_b_Framework) */

void zx_e_Header_DEL_b_Framework(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_Sender) */

int zx_e_Header_NUM_Sender(struct zx_e_Header_s* x)
{
  struct zx_b_Sender_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sender; y; ++n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Sender) */

struct zx_b_Sender_s* zx_e_Header_GET_Sender(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Sender_s* y;
  if (!x) return 0;
  for (y = x->Sender; n>=0 && y; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Sender) */

struct zx_b_Sender_s* zx_e_Header_POP_Sender(struct zx_e_Header_s* x)
{
  struct zx_b_Sender_s* y;
  if (!x) return 0;
  y = x->Sender;
  if (y)
    x->Sender = (struct zx_b_Sender_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Sender) */

void zx_e_Header_PUSH_Sender(struct zx_e_Header_s* x, struct zx_b_Sender_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Sender->gg.g;
  x->Sender = z;
}

/* FUNC(zx_e_Header_REV_Sender) */

void zx_e_Header_REV_Sender(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_Sender) */

void zx_e_Header_PUT_Sender(struct zx_e_Header_s* x, int n, struct zx_b_Sender_s* z)
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

/* FUNC(zx_e_Header_ADD_Sender) */

void zx_e_Header_ADD_Sender(struct zx_e_Header_s* x, int n, struct zx_b_Sender_s* z)
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

/* FUNC(zx_e_Header_DEL_Sender) */

void zx_e_Header_DEL_Sender(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_TargetIdentity) */

int zx_e_Header_NUM_TargetIdentity(struct zx_e_Header_s* x)
{
  struct zx_b_TargetIdentity_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TargetIdentity; y; ++n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_TargetIdentity) */

struct zx_b_TargetIdentity_s* zx_e_Header_GET_TargetIdentity(struct zx_e_Header_s* x, int n)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x) return 0;
  for (y = x->TargetIdentity; n>=0 && y; --n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_TargetIdentity) */

struct zx_b_TargetIdentity_s* zx_e_Header_POP_TargetIdentity(struct zx_e_Header_s* x)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x) return 0;
  y = x->TargetIdentity;
  if (y)
    x->TargetIdentity = (struct zx_b_TargetIdentity_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_TargetIdentity) */

void zx_e_Header_PUSH_TargetIdentity(struct zx_e_Header_s* x, struct zx_b_TargetIdentity_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TargetIdentity->gg.g;
  x->TargetIdentity = z;
}

/* FUNC(zx_e_Header_REV_TargetIdentity) */

void zx_e_Header_REV_TargetIdentity(struct zx_e_Header_s* x)
{
  struct zx_b_TargetIdentity_s* nxt;
  struct zx_b_TargetIdentity_s* y;
  if (!x) return;
  y = x->TargetIdentity;
  if (!y) return;
  x->TargetIdentity = 0;
  while (y) {
    nxt = (struct zx_b_TargetIdentity_s*)y->gg.g.n;
    y->gg.g.n = &x->TargetIdentity->gg.g;
    x->TargetIdentity = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_TargetIdentity) */

void zx_e_Header_PUT_TargetIdentity(struct zx_e_Header_s* x, int n, struct zx_b_TargetIdentity_s* z)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x || !z) return;
  y = x->TargetIdentity;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TargetIdentity = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_TargetIdentity) */

void zx_e_Header_ADD_TargetIdentity(struct zx_e_Header_s* x, int n, struct zx_b_TargetIdentity_s* z)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TargetIdentity->gg.g;
    x->TargetIdentity = z;
    return;
  case -1:
    y = x->TargetIdentity;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TargetIdentity; n > 1 && y; --n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_TargetIdentity) */

void zx_e_Header_DEL_TargetIdentity(struct zx_e_Header_s* x, int n)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TargetIdentity = (struct zx_b_TargetIdentity_s*)x->TargetIdentity->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_TargetIdentity_s*)x->TargetIdentity;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TargetIdentity; n > 1 && y->gg.g.n; --n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Header_NUM_CredentialsContext) */

int zx_e_Header_NUM_CredentialsContext(struct zx_e_Header_s* x)
{
  struct zx_b_CredentialsContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CredentialsContext; y; ++n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_CredentialsContext) */

struct zx_b_CredentialsContext_s* zx_e_Header_GET_CredentialsContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x) return 0;
  for (y = x->CredentialsContext; n>=0 && y; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_CredentialsContext) */

struct zx_b_CredentialsContext_s* zx_e_Header_POP_CredentialsContext(struct zx_e_Header_s* x)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x) return 0;
  y = x->CredentialsContext;
  if (y)
    x->CredentialsContext = (struct zx_b_CredentialsContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_CredentialsContext) */

void zx_e_Header_PUSH_CredentialsContext(struct zx_e_Header_s* x, struct zx_b_CredentialsContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CredentialsContext->gg.g;
  x->CredentialsContext = z;
}

/* FUNC(zx_e_Header_REV_CredentialsContext) */

void zx_e_Header_REV_CredentialsContext(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_CredentialsContext) */

void zx_e_Header_PUT_CredentialsContext(struct zx_e_Header_s* x, int n, struct zx_b_CredentialsContext_s* z)
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

/* FUNC(zx_e_Header_ADD_CredentialsContext) */

void zx_e_Header_ADD_CredentialsContext(struct zx_e_Header_s* x, int n, struct zx_b_CredentialsContext_s* z)
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

/* FUNC(zx_e_Header_DEL_CredentialsContext) */

void zx_e_Header_DEL_CredentialsContext(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_EndpointUpdate) */

int zx_e_Header_NUM_EndpointUpdate(struct zx_e_Header_s* x)
{
  struct zx_b_EndpointUpdate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointUpdate; y; ++n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_EndpointUpdate) */

struct zx_b_EndpointUpdate_s* zx_e_Header_GET_EndpointUpdate(struct zx_e_Header_s* x, int n)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return 0;
  for (y = x->EndpointUpdate; n>=0 && y; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_EndpointUpdate) */

struct zx_b_EndpointUpdate_s* zx_e_Header_POP_EndpointUpdate(struct zx_e_Header_s* x)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return 0;
  y = x->EndpointUpdate;
  if (y)
    x->EndpointUpdate = (struct zx_b_EndpointUpdate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_EndpointUpdate) */

void zx_e_Header_PUSH_EndpointUpdate(struct zx_e_Header_s* x, struct zx_b_EndpointUpdate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointUpdate->gg.g;
  x->EndpointUpdate = z;
}

/* FUNC(zx_e_Header_REV_EndpointUpdate) */

void zx_e_Header_REV_EndpointUpdate(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_EndpointUpdate) */

void zx_e_Header_PUT_EndpointUpdate(struct zx_e_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z)
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

/* FUNC(zx_e_Header_ADD_EndpointUpdate) */

void zx_e_Header_ADD_EndpointUpdate(struct zx_e_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z)
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

/* FUNC(zx_e_Header_DEL_EndpointUpdate) */

void zx_e_Header_DEL_EndpointUpdate(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_Timeout) */

int zx_e_Header_NUM_Timeout(struct zx_e_Header_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Timeout; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Timeout) */

struct zx_elem_s* zx_e_Header_GET_Timeout(struct zx_e_Header_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Timeout; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Timeout) */

struct zx_elem_s* zx_e_Header_POP_Timeout(struct zx_e_Header_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Timeout;
  if (y)
    x->Timeout = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Timeout) */

void zx_e_Header_PUSH_Timeout(struct zx_e_Header_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Timeout->g;
  x->Timeout = z;
}

/* FUNC(zx_e_Header_REV_Timeout) */

void zx_e_Header_REV_Timeout(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_Timeout) */

void zx_e_Header_PUT_Timeout(struct zx_e_Header_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_e_Header_ADD_Timeout) */

void zx_e_Header_ADD_Timeout(struct zx_e_Header_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_e_Header_DEL_Timeout) */

void zx_e_Header_DEL_Timeout(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_ProcessingContext) */

int zx_e_Header_NUM_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b_ProcessingContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProcessingContext; y; ++n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ProcessingContext) */

struct zx_b_ProcessingContext_s* zx_e_Header_GET_ProcessingContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x) return 0;
  for (y = x->ProcessingContext; n>=0 && y; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ProcessingContext) */

struct zx_b_ProcessingContext_s* zx_e_Header_POP_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x) return 0;
  y = x->ProcessingContext;
  if (y)
    x->ProcessingContext = (struct zx_b_ProcessingContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ProcessingContext) */

void zx_e_Header_PUSH_ProcessingContext(struct zx_e_Header_s* x, struct zx_b_ProcessingContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProcessingContext->gg.g;
  x->ProcessingContext = z;
}

/* FUNC(zx_e_Header_REV_ProcessingContext) */

void zx_e_Header_REV_ProcessingContext(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_ProcessingContext) */

void zx_e_Header_PUT_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b_ProcessingContext_s* z)
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

/* FUNC(zx_e_Header_ADD_ProcessingContext) */

void zx_e_Header_ADD_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b_ProcessingContext_s* z)
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

/* FUNC(zx_e_Header_DEL_ProcessingContext) */

void zx_e_Header_DEL_ProcessingContext(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_Consent) */

int zx_e_Header_NUM_Consent(struct zx_e_Header_s* x)
{
  struct zx_b_Consent_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Consent; y; ++n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Consent) */

struct zx_b_Consent_s* zx_e_Header_GET_Consent(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Consent_s* y;
  if (!x) return 0;
  for (y = x->Consent; n>=0 && y; --n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Consent) */

struct zx_b_Consent_s* zx_e_Header_POP_Consent(struct zx_e_Header_s* x)
{
  struct zx_b_Consent_s* y;
  if (!x) return 0;
  y = x->Consent;
  if (y)
    x->Consent = (struct zx_b_Consent_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Consent) */

void zx_e_Header_PUSH_Consent(struct zx_e_Header_s* x, struct zx_b_Consent_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Consent->gg.g;
  x->Consent = z;
}

/* FUNC(zx_e_Header_REV_Consent) */

void zx_e_Header_REV_Consent(struct zx_e_Header_s* x)
{
  struct zx_b_Consent_s* nxt;
  struct zx_b_Consent_s* y;
  if (!x) return;
  y = x->Consent;
  if (!y) return;
  x->Consent = 0;
  while (y) {
    nxt = (struct zx_b_Consent_s*)y->gg.g.n;
    y->gg.g.n = &x->Consent->gg.g;
    x->Consent = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Consent) */

void zx_e_Header_PUT_Consent(struct zx_e_Header_s* x, int n, struct zx_b_Consent_s* z)
{
  struct zx_b_Consent_s* y;
  if (!x || !z) return;
  y = x->Consent;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Consent = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Consent) */

void zx_e_Header_ADD_Consent(struct zx_e_Header_s* x, int n, struct zx_b_Consent_s* z)
{
  struct zx_b_Consent_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Consent->gg.g;
    x->Consent = z;
    return;
  case -1:
    y = x->Consent;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Consent; n > 1 && y; --n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Consent) */

void zx_e_Header_DEL_Consent(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Consent_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Consent = (struct zx_b_Consent_s*)x->Consent->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_Consent_s*)x->Consent;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Consent; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Header_NUM_UsageDirective) */

int zx_e_Header_NUM_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b_UsageDirective_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UsageDirective; y; ++n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_UsageDirective) */

struct zx_b_UsageDirective_s* zx_e_Header_GET_UsageDirective(struct zx_e_Header_s* x, int n)
{
  struct zx_b_UsageDirective_s* y;
  if (!x) return 0;
  for (y = x->UsageDirective; n>=0 && y; --n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_UsageDirective) */

struct zx_b_UsageDirective_s* zx_e_Header_POP_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b_UsageDirective_s* y;
  if (!x) return 0;
  y = x->UsageDirective;
  if (y)
    x->UsageDirective = (struct zx_b_UsageDirective_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_UsageDirective) */

void zx_e_Header_PUSH_UsageDirective(struct zx_e_Header_s* x, struct zx_b_UsageDirective_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UsageDirective->gg.g;
  x->UsageDirective = z;
}

/* FUNC(zx_e_Header_REV_UsageDirective) */

void zx_e_Header_REV_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b_UsageDirective_s* nxt;
  struct zx_b_UsageDirective_s* y;
  if (!x) return;
  y = x->UsageDirective;
  if (!y) return;
  x->UsageDirective = 0;
  while (y) {
    nxt = (struct zx_b_UsageDirective_s*)y->gg.g.n;
    y->gg.g.n = &x->UsageDirective->gg.g;
    x->UsageDirective = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_UsageDirective) */

void zx_e_Header_PUT_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b_UsageDirective_s* z)
{
  struct zx_b_UsageDirective_s* y;
  if (!x || !z) return;
  y = x->UsageDirective;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UsageDirective = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_UsageDirective) */

void zx_e_Header_ADD_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b_UsageDirective_s* z)
{
  struct zx_b_UsageDirective_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UsageDirective->gg.g;
    x->UsageDirective = z;
    return;
  case -1:
    y = x->UsageDirective;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UsageDirective; n > 1 && y; --n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_UsageDirective) */

void zx_e_Header_DEL_UsageDirective(struct zx_e_Header_s* x, int n)
{
  struct zx_b_UsageDirective_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UsageDirective = (struct zx_b_UsageDirective_s*)x->UsageDirective->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_UsageDirective_s*)x->UsageDirective;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UsageDirective; n > 1 && y->gg.g.n; --n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Header_NUM_ApplicationEPR) */

int zx_e_Header_NUM_ApplicationEPR(struct zx_e_Header_s* x)
{
  struct zx_b_ApplicationEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicationEPR; y; ++n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ApplicationEPR) */

struct zx_b_ApplicationEPR_s* zx_e_Header_GET_ApplicationEPR(struct zx_e_Header_s* x, int n)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return 0;
  for (y = x->ApplicationEPR; n>=0 && y; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ApplicationEPR) */

struct zx_b_ApplicationEPR_s* zx_e_Header_POP_ApplicationEPR(struct zx_e_Header_s* x)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return 0;
  y = x->ApplicationEPR;
  if (y)
    x->ApplicationEPR = (struct zx_b_ApplicationEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ApplicationEPR) */

void zx_e_Header_PUSH_ApplicationEPR(struct zx_e_Header_s* x, struct zx_b_ApplicationEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ApplicationEPR->gg.g;
  x->ApplicationEPR = z;
}

/* FUNC(zx_e_Header_REV_ApplicationEPR) */

void zx_e_Header_REV_ApplicationEPR(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_ApplicationEPR) */

void zx_e_Header_PUT_ApplicationEPR(struct zx_e_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z)
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

/* FUNC(zx_e_Header_ADD_ApplicationEPR) */

void zx_e_Header_ADD_ApplicationEPR(struct zx_e_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z)
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

/* FUNC(zx_e_Header_DEL_ApplicationEPR) */

void zx_e_Header_DEL_ApplicationEPR(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_UserInteraction) */

int zx_e_Header_NUM_UserInteraction(struct zx_e_Header_s* x)
{
  struct zx_b_UserInteraction_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UserInteraction; y; ++n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_UserInteraction) */

struct zx_b_UserInteraction_s* zx_e_Header_GET_UserInteraction(struct zx_e_Header_s* x, int n)
{
  struct zx_b_UserInteraction_s* y;
  if (!x) return 0;
  for (y = x->UserInteraction; n>=0 && y; --n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_UserInteraction) */

struct zx_b_UserInteraction_s* zx_e_Header_POP_UserInteraction(struct zx_e_Header_s* x)
{
  struct zx_b_UserInteraction_s* y;
  if (!x) return 0;
  y = x->UserInteraction;
  if (y)
    x->UserInteraction = (struct zx_b_UserInteraction_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_UserInteraction) */

void zx_e_Header_PUSH_UserInteraction(struct zx_e_Header_s* x, struct zx_b_UserInteraction_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UserInteraction->gg.g;
  x->UserInteraction = z;
}

/* FUNC(zx_e_Header_REV_UserInteraction) */

void zx_e_Header_REV_UserInteraction(struct zx_e_Header_s* x)
{
  struct zx_b_UserInteraction_s* nxt;
  struct zx_b_UserInteraction_s* y;
  if (!x) return;
  y = x->UserInteraction;
  if (!y) return;
  x->UserInteraction = 0;
  while (y) {
    nxt = (struct zx_b_UserInteraction_s*)y->gg.g.n;
    y->gg.g.n = &x->UserInteraction->gg.g;
    x->UserInteraction = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_UserInteraction) */

void zx_e_Header_PUT_UserInteraction(struct zx_e_Header_s* x, int n, struct zx_b_UserInteraction_s* z)
{
  struct zx_b_UserInteraction_s* y;
  if (!x || !z) return;
  y = x->UserInteraction;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UserInteraction = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_UserInteraction) */

void zx_e_Header_ADD_UserInteraction(struct zx_e_Header_s* x, int n, struct zx_b_UserInteraction_s* z)
{
  struct zx_b_UserInteraction_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UserInteraction->gg.g;
    x->UserInteraction = z;
    return;
  case -1:
    y = x->UserInteraction;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UserInteraction; n > 1 && y; --n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_UserInteraction) */

void zx_e_Header_DEL_UserInteraction(struct zx_e_Header_s* x, int n)
{
  struct zx_b_UserInteraction_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UserInteraction = (struct zx_b_UserInteraction_s*)x->UserInteraction->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_UserInteraction_s*)x->UserInteraction;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UserInteraction; n > 1 && y->gg.g.n; --n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Header_NUM_RedirectRequest) */

int zx_e_Header_NUM_RedirectRequest(struct zx_e_Header_s* x)
{
  struct zx_b_RedirectRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RedirectRequest; y; ++n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_RedirectRequest) */

struct zx_b_RedirectRequest_s* zx_e_Header_GET_RedirectRequest(struct zx_e_Header_s* x, int n)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x) return 0;
  for (y = x->RedirectRequest; n>=0 && y; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_RedirectRequest) */

struct zx_b_RedirectRequest_s* zx_e_Header_POP_RedirectRequest(struct zx_e_Header_s* x)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x) return 0;
  y = x->RedirectRequest;
  if (y)
    x->RedirectRequest = (struct zx_b_RedirectRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_RedirectRequest) */

void zx_e_Header_PUSH_RedirectRequest(struct zx_e_Header_s* x, struct zx_b_RedirectRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RedirectRequest->gg.g;
  x->RedirectRequest = z;
}

/* FUNC(zx_e_Header_REV_RedirectRequest) */

void zx_e_Header_REV_RedirectRequest(struct zx_e_Header_s* x)
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

/* FUNC(zx_e_Header_PUT_RedirectRequest) */

void zx_e_Header_PUT_RedirectRequest(struct zx_e_Header_s* x, int n, struct zx_b_RedirectRequest_s* z)
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

/* FUNC(zx_e_Header_ADD_RedirectRequest) */

void zx_e_Header_ADD_RedirectRequest(struct zx_e_Header_s* x, int n, struct zx_b_RedirectRequest_s* z)
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

/* FUNC(zx_e_Header_DEL_RedirectRequest) */

void zx_e_Header_DEL_RedirectRequest(struct zx_e_Header_s* x, int n)
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



/* FUNC(zx_e_Header_NUM_Correlation) */

int zx_e_Header_NUM_Correlation(struct zx_e_Header_s* x)
{
  struct zx_b12_Correlation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Correlation; y; ++n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Correlation) */

struct zx_b12_Correlation_s* zx_e_Header_GET_Correlation(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Correlation_s* y;
  if (!x) return 0;
  for (y = x->Correlation; n>=0 && y; --n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Correlation) */

struct zx_b12_Correlation_s* zx_e_Header_POP_Correlation(struct zx_e_Header_s* x)
{
  struct zx_b12_Correlation_s* y;
  if (!x) return 0;
  y = x->Correlation;
  if (y)
    x->Correlation = (struct zx_b12_Correlation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Correlation) */

void zx_e_Header_PUSH_Correlation(struct zx_e_Header_s* x, struct zx_b12_Correlation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Correlation->gg.g;
  x->Correlation = z;
}

/* FUNC(zx_e_Header_REV_Correlation) */

void zx_e_Header_REV_Correlation(struct zx_e_Header_s* x)
{
  struct zx_b12_Correlation_s* nxt;
  struct zx_b12_Correlation_s* y;
  if (!x) return;
  y = x->Correlation;
  if (!y) return;
  x->Correlation = 0;
  while (y) {
    nxt = (struct zx_b12_Correlation_s*)y->gg.g.n;
    y->gg.g.n = &x->Correlation->gg.g;
    x->Correlation = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Correlation) */

void zx_e_Header_PUT_Correlation(struct zx_e_Header_s* x, int n, struct zx_b12_Correlation_s* z)
{
  struct zx_b12_Correlation_s* y;
  if (!x || !z) return;
  y = x->Correlation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Correlation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Correlation) */

void zx_e_Header_ADD_Correlation(struct zx_e_Header_s* x, int n, struct zx_b12_Correlation_s* z)
{
  struct zx_b12_Correlation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Correlation->gg.g;
    x->Correlation = z;
    return;
  case -1:
    y = x->Correlation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Correlation; n > 1 && y; --n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Correlation) */

void zx_e_Header_DEL_Correlation(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Correlation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Correlation = (struct zx_b12_Correlation_s*)x->Correlation->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_Correlation_s*)x->Correlation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Correlation; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Header_NUM_Provider) */

int zx_e_Header_NUM_Provider(struct zx_e_Header_s* x)
{
  struct zx_b12_Provider_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Provider; y; ++n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Provider) */

struct zx_b12_Provider_s* zx_e_Header_GET_Provider(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Provider_s* y;
  if (!x) return 0;
  for (y = x->Provider; n>=0 && y; --n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Provider) */

struct zx_b12_Provider_s* zx_e_Header_POP_Provider(struct zx_e_Header_s* x)
{
  struct zx_b12_Provider_s* y;
  if (!x) return 0;
  y = x->Provider;
  if (y)
    x->Provider = (struct zx_b12_Provider_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Provider) */

void zx_e_Header_PUSH_Provider(struct zx_e_Header_s* x, struct zx_b12_Provider_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Provider->gg.g;
  x->Provider = z;
}

/* FUNC(zx_e_Header_REV_Provider) */

void zx_e_Header_REV_Provider(struct zx_e_Header_s* x)
{
  struct zx_b12_Provider_s* nxt;
  struct zx_b12_Provider_s* y;
  if (!x) return;
  y = x->Provider;
  if (!y) return;
  x->Provider = 0;
  while (y) {
    nxt = (struct zx_b12_Provider_s*)y->gg.g.n;
    y->gg.g.n = &x->Provider->gg.g;
    x->Provider = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Provider) */

void zx_e_Header_PUT_Provider(struct zx_e_Header_s* x, int n, struct zx_b12_Provider_s* z)
{
  struct zx_b12_Provider_s* y;
  if (!x || !z) return;
  y = x->Provider;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Provider = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Provider) */

void zx_e_Header_ADD_Provider(struct zx_e_Header_s* x, int n, struct zx_b12_Provider_s* z)
{
  struct zx_b12_Provider_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Provider->gg.g;
    x->Provider = z;
    return;
  case -1:
    y = x->Provider;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Provider; n > 1 && y; --n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Provider) */

void zx_e_Header_DEL_Provider(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Provider_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Provider = (struct zx_b12_Provider_s*)x->Provider->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_Provider_s*)x->Provider;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Provider; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Header_NUM_b12_ProcessingContext) */

int zx_e_Header_NUM_b12_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b12_ProcessingContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_ProcessingContext; y; ++n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_b12_ProcessingContext) */

struct zx_b12_ProcessingContext_s* zx_e_Header_GET_b12_ProcessingContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x) return 0;
  for (y = x->b12_ProcessingContext; n>=0 && y; --n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_b12_ProcessingContext) */

struct zx_b12_ProcessingContext_s* zx_e_Header_POP_b12_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x) return 0;
  y = x->b12_ProcessingContext;
  if (y)
    x->b12_ProcessingContext = (struct zx_b12_ProcessingContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_b12_ProcessingContext) */

void zx_e_Header_PUSH_b12_ProcessingContext(struct zx_e_Header_s* x, struct zx_b12_ProcessingContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_ProcessingContext->gg.g;
  x->b12_ProcessingContext = z;
}

/* FUNC(zx_e_Header_REV_b12_ProcessingContext) */

void zx_e_Header_REV_b12_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b12_ProcessingContext_s* nxt;
  struct zx_b12_ProcessingContext_s* y;
  if (!x) return;
  y = x->b12_ProcessingContext;
  if (!y) return;
  x->b12_ProcessingContext = 0;
  while (y) {
    nxt = (struct zx_b12_ProcessingContext_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_ProcessingContext->gg.g;
    x->b12_ProcessingContext = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_b12_ProcessingContext) */

void zx_e_Header_PUT_b12_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b12_ProcessingContext_s* z)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x || !z) return;
  y = x->b12_ProcessingContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_ProcessingContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_b12_ProcessingContext) */

void zx_e_Header_ADD_b12_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b12_ProcessingContext_s* z)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->b12_ProcessingContext->gg.g;
    x->b12_ProcessingContext = z;
    return;
  case -1:
    y = x->b12_ProcessingContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_ProcessingContext; n > 1 && y; --n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_b12_ProcessingContext) */

void zx_e_Header_DEL_b12_ProcessingContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_ProcessingContext = (struct zx_b12_ProcessingContext_s*)x->b12_ProcessingContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_ProcessingContext_s*)x->b12_ProcessingContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_ProcessingContext; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Header_NUM_b12_Consent) */

int zx_e_Header_NUM_b12_Consent(struct zx_e_Header_s* x)
{
  struct zx_b12_Consent_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_Consent; y; ++n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_b12_Consent) */

struct zx_b12_Consent_s* zx_e_Header_GET_b12_Consent(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Consent_s* y;
  if (!x) return 0;
  for (y = x->b12_Consent; n>=0 && y; --n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_b12_Consent) */

struct zx_b12_Consent_s* zx_e_Header_POP_b12_Consent(struct zx_e_Header_s* x)
{
  struct zx_b12_Consent_s* y;
  if (!x) return 0;
  y = x->b12_Consent;
  if (y)
    x->b12_Consent = (struct zx_b12_Consent_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_b12_Consent) */

void zx_e_Header_PUSH_b12_Consent(struct zx_e_Header_s* x, struct zx_b12_Consent_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_Consent->gg.g;
  x->b12_Consent = z;
}

/* FUNC(zx_e_Header_REV_b12_Consent) */

void zx_e_Header_REV_b12_Consent(struct zx_e_Header_s* x)
{
  struct zx_b12_Consent_s* nxt;
  struct zx_b12_Consent_s* y;
  if (!x) return;
  y = x->b12_Consent;
  if (!y) return;
  x->b12_Consent = 0;
  while (y) {
    nxt = (struct zx_b12_Consent_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_Consent->gg.g;
    x->b12_Consent = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_b12_Consent) */

void zx_e_Header_PUT_b12_Consent(struct zx_e_Header_s* x, int n, struct zx_b12_Consent_s* z)
{
  struct zx_b12_Consent_s* y;
  if (!x || !z) return;
  y = x->b12_Consent;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_Consent = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_b12_Consent) */

void zx_e_Header_ADD_b12_Consent(struct zx_e_Header_s* x, int n, struct zx_b12_Consent_s* z)
{
  struct zx_b12_Consent_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->b12_Consent->gg.g;
    x->b12_Consent = z;
    return;
  case -1:
    y = x->b12_Consent;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_Consent; n > 1 && y; --n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_b12_Consent) */

void zx_e_Header_DEL_b12_Consent(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Consent_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_Consent = (struct zx_b12_Consent_s*)x->b12_Consent->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_Consent_s*)x->b12_Consent;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_Consent; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_e_Header_NUM_b12_UsageDirective) */

int zx_e_Header_NUM_b12_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b12_UsageDirective_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_UsageDirective; y; ++n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_b12_UsageDirective) */

struct zx_b12_UsageDirective_s* zx_e_Header_GET_b12_UsageDirective(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x) return 0;
  for (y = x->b12_UsageDirective; n>=0 && y; --n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_b12_UsageDirective) */

struct zx_b12_UsageDirective_s* zx_e_Header_POP_b12_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x) return 0;
  y = x->b12_UsageDirective;
  if (y)
    x->b12_UsageDirective = (struct zx_b12_UsageDirective_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_b12_UsageDirective) */

void zx_e_Header_PUSH_b12_UsageDirective(struct zx_e_Header_s* x, struct zx_b12_UsageDirective_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_UsageDirective->gg.g;
  x->b12_UsageDirective = z;
}

/* FUNC(zx_e_Header_REV_b12_UsageDirective) */

void zx_e_Header_REV_b12_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b12_UsageDirective_s* nxt;
  struct zx_b12_UsageDirective_s* y;
  if (!x) return;
  y = x->b12_UsageDirective;
  if (!y) return;
  x->b12_UsageDirective = 0;
  while (y) {
    nxt = (struct zx_b12_UsageDirective_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_UsageDirective->gg.g;
    x->b12_UsageDirective = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_b12_UsageDirective) */

void zx_e_Header_PUT_b12_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b12_UsageDirective_s* z)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x || !z) return;
  y = x->b12_UsageDirective;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_UsageDirective = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_b12_UsageDirective) */

void zx_e_Header_ADD_b12_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b12_UsageDirective_s* z)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->b12_UsageDirective->gg.g;
    x->b12_UsageDirective = z;
    return;
  case -1:
    y = x->b12_UsageDirective;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_UsageDirective; n > 1 && y; --n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_b12_UsageDirective) */

void zx_e_Header_DEL_b12_UsageDirective(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_UsageDirective = (struct zx_b12_UsageDirective_s*)x->b12_UsageDirective->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_UsageDirective_s*)x->b12_UsageDirective;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_UsageDirective; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}











/* EOF -- c/zx-e-getput.c */
