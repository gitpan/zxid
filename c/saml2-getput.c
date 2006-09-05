/* c/saml2-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id: saml2-getput.c,v 1.19 2006/09/05 05:09:39 sampo Exp $ */
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
#include "c/saml2-const.h"
#include "c/saml2-data.h"

/* FUNC(zx_ds_CanonicalizationMethod_GET_Algorithm) */
struct zx_str_s* zx_ds_CanonicalizationMethod_GET_Algorithm(struct zx_ds_CanonicalizationMethod_s* x) { return x->Algorithm; }
/* FUNC(zx_ds_CanonicalizationMethod_PUT_Algorithm) */
void zx_ds_CanonicalizationMethod_PUT_Algorithm(struct zx_ds_CanonicalizationMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zx_ds_DSAKeyValue_NUM_P) */

int zx_ds_DSAKeyValue_NUM_P(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->P; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_DSAKeyValue_GET_P) */

struct zx_elem_s* zx_ds_DSAKeyValue_GET_P(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->P; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_POP_P) */

struct zx_elem_s* zx_ds_DSAKeyValue_POP_P(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->P;
  if (y)
    x->P = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_PUSH_P) */

void zx_ds_DSAKeyValue_PUSH_P(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->P->g;
  x->P = z;
}

/* FUNC(zx_ds_DSAKeyValue_REV_P) */

void zx_ds_DSAKeyValue_REV_P(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->P;
  if (!y) return;
  x->P = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->P->g;
    x->P = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_DSAKeyValue_PUT_P) */

void zx_ds_DSAKeyValue_PUT_P(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->P;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->P = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_DSAKeyValue_ADD_P) */

void zx_ds_DSAKeyValue_ADD_P(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->P->g;
    x->P = z;
    return;
  case -1:
    y = x->P;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->P; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_DSAKeyValue_DEL_P) */

void zx_ds_DSAKeyValue_DEL_P(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->P = (struct zx_elem_s*)x->P->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->P;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->P; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_DSAKeyValue_NUM_Q) */

int zx_ds_DSAKeyValue_NUM_Q(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Q; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_DSAKeyValue_GET_Q) */

struct zx_elem_s* zx_ds_DSAKeyValue_GET_Q(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Q; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_POP_Q) */

struct zx_elem_s* zx_ds_DSAKeyValue_POP_Q(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Q;
  if (y)
    x->Q = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_PUSH_Q) */

void zx_ds_DSAKeyValue_PUSH_Q(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Q->g;
  x->Q = z;
}

/* FUNC(zx_ds_DSAKeyValue_REV_Q) */

void zx_ds_DSAKeyValue_REV_Q(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Q;
  if (!y) return;
  x->Q = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Q->g;
    x->Q = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_DSAKeyValue_PUT_Q) */

void zx_ds_DSAKeyValue_PUT_Q(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Q;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Q = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_DSAKeyValue_ADD_Q) */

void zx_ds_DSAKeyValue_ADD_Q(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Q->g;
    x->Q = z;
    return;
  case -1:
    y = x->Q;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Q; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_DSAKeyValue_DEL_Q) */

void zx_ds_DSAKeyValue_DEL_Q(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Q = (struct zx_elem_s*)x->Q->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Q;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Q; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_DSAKeyValue_NUM_G) */

int zx_ds_DSAKeyValue_NUM_G(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->G; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_DSAKeyValue_GET_G) */

struct zx_elem_s* zx_ds_DSAKeyValue_GET_G(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->G; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_POP_G) */

struct zx_elem_s* zx_ds_DSAKeyValue_POP_G(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->G;
  if (y)
    x->G = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_PUSH_G) */

void zx_ds_DSAKeyValue_PUSH_G(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->G->g;
  x->G = z;
}

/* FUNC(zx_ds_DSAKeyValue_REV_G) */

void zx_ds_DSAKeyValue_REV_G(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->G;
  if (!y) return;
  x->G = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->G->g;
    x->G = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_DSAKeyValue_PUT_G) */

void zx_ds_DSAKeyValue_PUT_G(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->G;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->G = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_DSAKeyValue_ADD_G) */

void zx_ds_DSAKeyValue_ADD_G(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->G->g;
    x->G = z;
    return;
  case -1:
    y = x->G;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->G; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_DSAKeyValue_DEL_G) */

void zx_ds_DSAKeyValue_DEL_G(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->G = (struct zx_elem_s*)x->G->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->G;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->G; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_DSAKeyValue_NUM_Y) */

int zx_ds_DSAKeyValue_NUM_Y(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Y; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_DSAKeyValue_GET_Y) */

struct zx_elem_s* zx_ds_DSAKeyValue_GET_Y(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Y; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_POP_Y) */

struct zx_elem_s* zx_ds_DSAKeyValue_POP_Y(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Y;
  if (y)
    x->Y = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_PUSH_Y) */

void zx_ds_DSAKeyValue_PUSH_Y(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Y->g;
  x->Y = z;
}

/* FUNC(zx_ds_DSAKeyValue_REV_Y) */

void zx_ds_DSAKeyValue_REV_Y(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Y;
  if (!y) return;
  x->Y = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Y->g;
    x->Y = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_DSAKeyValue_PUT_Y) */

void zx_ds_DSAKeyValue_PUT_Y(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Y;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Y = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_DSAKeyValue_ADD_Y) */

void zx_ds_DSAKeyValue_ADD_Y(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Y->g;
    x->Y = z;
    return;
  case -1:
    y = x->Y;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Y; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_DSAKeyValue_DEL_Y) */

void zx_ds_DSAKeyValue_DEL_Y(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Y = (struct zx_elem_s*)x->Y->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Y;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Y; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_DSAKeyValue_NUM_J) */

int zx_ds_DSAKeyValue_NUM_J(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->J; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_DSAKeyValue_GET_J) */

struct zx_elem_s* zx_ds_DSAKeyValue_GET_J(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->J; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_POP_J) */

struct zx_elem_s* zx_ds_DSAKeyValue_POP_J(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->J;
  if (y)
    x->J = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_PUSH_J) */

void zx_ds_DSAKeyValue_PUSH_J(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->J->g;
  x->J = z;
}

/* FUNC(zx_ds_DSAKeyValue_REV_J) */

void zx_ds_DSAKeyValue_REV_J(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->J;
  if (!y) return;
  x->J = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->J->g;
    x->J = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_DSAKeyValue_PUT_J) */

void zx_ds_DSAKeyValue_PUT_J(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->J;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->J = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_DSAKeyValue_ADD_J) */

void zx_ds_DSAKeyValue_ADD_J(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->J->g;
    x->J = z;
    return;
  case -1:
    y = x->J;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->J; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_DSAKeyValue_DEL_J) */

void zx_ds_DSAKeyValue_DEL_J(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->J = (struct zx_elem_s*)x->J->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->J;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->J; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_DSAKeyValue_NUM_Seed) */

int zx_ds_DSAKeyValue_NUM_Seed(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Seed; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_DSAKeyValue_GET_Seed) */

struct zx_elem_s* zx_ds_DSAKeyValue_GET_Seed(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Seed; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_POP_Seed) */

struct zx_elem_s* zx_ds_DSAKeyValue_POP_Seed(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Seed;
  if (y)
    x->Seed = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_PUSH_Seed) */

void zx_ds_DSAKeyValue_PUSH_Seed(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Seed->g;
  x->Seed = z;
}

/* FUNC(zx_ds_DSAKeyValue_REV_Seed) */

void zx_ds_DSAKeyValue_REV_Seed(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Seed;
  if (!y) return;
  x->Seed = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Seed->g;
    x->Seed = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_DSAKeyValue_PUT_Seed) */

void zx_ds_DSAKeyValue_PUT_Seed(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Seed;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Seed = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_DSAKeyValue_ADD_Seed) */

void zx_ds_DSAKeyValue_ADD_Seed(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Seed->g;
    x->Seed = z;
    return;
  case -1:
    y = x->Seed;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Seed; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_DSAKeyValue_DEL_Seed) */

void zx_ds_DSAKeyValue_DEL_Seed(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Seed = (struct zx_elem_s*)x->Seed->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Seed;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Seed; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_DSAKeyValue_NUM_PgenCounter) */

int zx_ds_DSAKeyValue_NUM_PgenCounter(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PgenCounter; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_DSAKeyValue_GET_PgenCounter) */

struct zx_elem_s* zx_ds_DSAKeyValue_GET_PgenCounter(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PgenCounter; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_POP_PgenCounter) */

struct zx_elem_s* zx_ds_DSAKeyValue_POP_PgenCounter(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PgenCounter;
  if (y)
    x->PgenCounter = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_DSAKeyValue_PUSH_PgenCounter) */

void zx_ds_DSAKeyValue_PUSH_PgenCounter(struct zx_ds_DSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PgenCounter->g;
  x->PgenCounter = z;
}

/* FUNC(zx_ds_DSAKeyValue_REV_PgenCounter) */

void zx_ds_DSAKeyValue_REV_PgenCounter(struct zx_ds_DSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PgenCounter;
  if (!y) return;
  x->PgenCounter = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PgenCounter->g;
    x->PgenCounter = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_DSAKeyValue_PUT_PgenCounter) */

void zx_ds_DSAKeyValue_PUT_PgenCounter(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PgenCounter;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PgenCounter = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_DSAKeyValue_ADD_PgenCounter) */

void zx_ds_DSAKeyValue_ADD_PgenCounter(struct zx_ds_DSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PgenCounter->g;
    x->PgenCounter = z;
    return;
  case -1:
    y = x->PgenCounter;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PgenCounter; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_DSAKeyValue_DEL_PgenCounter) */

void zx_ds_DSAKeyValue_DEL_PgenCounter(struct zx_ds_DSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PgenCounter = (struct zx_elem_s*)x->PgenCounter->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PgenCounter;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PgenCounter; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}






/* FUNC(zx_ds_DigestMethod_GET_Algorithm) */
struct zx_str_s* zx_ds_DigestMethod_GET_Algorithm(struct zx_ds_DigestMethod_s* x) { return x->Algorithm; }
/* FUNC(zx_ds_DigestMethod_PUT_Algorithm) */
void zx_ds_DigestMethod_PUT_Algorithm(struct zx_ds_DigestMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zx_ds_KeyInfo_NUM_KeyName) */

int zx_ds_KeyInfo_NUM_KeyName(struct zx_ds_KeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyInfo_GET_KeyName) */

struct zx_elem_s* zx_ds_KeyInfo_GET_KeyName(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyInfo_POP_KeyName) */

struct zx_elem_s* zx_ds_KeyInfo_POP_KeyName(struct zx_ds_KeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyName;
  if (y)
    x->KeyName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_KeyInfo_PUSH_KeyName) */

void zx_ds_KeyInfo_PUSH_KeyName(struct zx_ds_KeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyName->g;
  x->KeyName = z;
}

/* FUNC(zx_ds_KeyInfo_REV_KeyName) */

void zx_ds_KeyInfo_REV_KeyName(struct zx_ds_KeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyName;
  if (!y) return;
  x->KeyName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyName->g;
    x->KeyName = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyInfo_PUT_KeyName) */

void zx_ds_KeyInfo_PUT_KeyName(struct zx_ds_KeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_KeyInfo_ADD_KeyName) */

void zx_ds_KeyInfo_ADD_KeyName(struct zx_ds_KeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyName->g;
    x->KeyName = z;
    return;
  case -1:
    y = x->KeyName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_KeyInfo_DEL_KeyName) */

void zx_ds_KeyInfo_DEL_KeyName(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyName = (struct zx_elem_s*)x->KeyName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_KeyInfo_NUM_KeyValue) */

int zx_ds_KeyInfo_NUM_KeyValue(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyValue; y; ++n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyInfo_GET_KeyValue) */

struct zx_ds_KeyValue_s* zx_ds_KeyInfo_GET_KeyValue(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return 0;
  for (y = x->KeyValue; n>=0 && y; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyInfo_POP_KeyValue) */

struct zx_ds_KeyValue_s* zx_ds_KeyInfo_POP_KeyValue(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return 0;
  y = x->KeyValue;
  if (y)
    x->KeyValue = (struct zx_ds_KeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_KeyInfo_PUSH_KeyValue) */

void zx_ds_KeyInfo_PUSH_KeyValue(struct zx_ds_KeyInfo_s* x, struct zx_ds_KeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyValue->gg.g;
  x->KeyValue = z;
}

/* FUNC(zx_ds_KeyInfo_REV_KeyValue) */

void zx_ds_KeyInfo_REV_KeyValue(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* nxt;
  struct zx_ds_KeyValue_s* y;
  if (!x) return;
  y = x->KeyValue;
  if (!y) return;
  x->KeyValue = 0;
  while (y) {
    nxt = (struct zx_ds_KeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyInfo_PUT_KeyValue) */

void zx_ds_KeyInfo_PUT_KeyValue(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z)
{
  struct zx_ds_KeyValue_s* y;
  if (!x || !z) return;
  y = x->KeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_KeyInfo_ADD_KeyValue) */

void zx_ds_KeyInfo_ADD_KeyValue(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z)
{
  struct zx_ds_KeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = z;
    return;
  case -1:
    y = x->KeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_KeyInfo_DEL_KeyValue) */

void zx_ds_KeyInfo_DEL_KeyValue(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyValue = (struct zx_ds_KeyValue_s*)x->KeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_KeyValue_s*)x->KeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_KeyInfo_NUM_RetrievalMethod) */

int zx_ds_KeyInfo_NUM_RetrievalMethod(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RetrievalMethod; y; ++n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyInfo_GET_RetrievalMethod) */

struct zx_ds_RetrievalMethod_s* zx_ds_KeyInfo_GET_RetrievalMethod(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  for (y = x->RetrievalMethod; n>=0 && y; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyInfo_POP_RetrievalMethod) */

struct zx_ds_RetrievalMethod_s* zx_ds_KeyInfo_POP_RetrievalMethod(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  y = x->RetrievalMethod;
  if (y)
    x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_KeyInfo_PUSH_RetrievalMethod) */

void zx_ds_KeyInfo_PUSH_RetrievalMethod(struct zx_ds_KeyInfo_s* x, struct zx_ds_RetrievalMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RetrievalMethod->gg.g;
  x->RetrievalMethod = z;
}

/* FUNC(zx_ds_KeyInfo_REV_RetrievalMethod) */

void zx_ds_KeyInfo_REV_RetrievalMethod(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* nxt;
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return;
  y = x->RetrievalMethod;
  if (!y) return;
  x->RetrievalMethod = 0;
  while (y) {
    nxt = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyInfo_PUT_RetrievalMethod) */

void zx_ds_KeyInfo_PUT_RetrievalMethod(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  y = x->RetrievalMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RetrievalMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_KeyInfo_ADD_RetrievalMethod) */

void zx_ds_KeyInfo_ADD_RetrievalMethod(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = z;
    return;
  case -1:
    y = x->RetrievalMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_KeyInfo_DEL_RetrievalMethod) */

void zx_ds_KeyInfo_DEL_RetrievalMethod(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)x->RetrievalMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_RetrievalMethod_s*)x->RetrievalMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_KeyInfo_NUM_X509Data) */

int zx_ds_KeyInfo_NUM_X509Data(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_X509Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509Data; y; ++n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyInfo_GET_X509Data) */

struct zx_ds_X509Data_s* zx_ds_KeyInfo_GET_X509Data(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return 0;
  for (y = x->X509Data; n>=0 && y; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyInfo_POP_X509Data) */

struct zx_ds_X509Data_s* zx_ds_KeyInfo_POP_X509Data(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return 0;
  y = x->X509Data;
  if (y)
    x->X509Data = (struct zx_ds_X509Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_KeyInfo_PUSH_X509Data) */

void zx_ds_KeyInfo_PUSH_X509Data(struct zx_ds_KeyInfo_s* x, struct zx_ds_X509Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->X509Data->gg.g;
  x->X509Data = z;
}

/* FUNC(zx_ds_KeyInfo_REV_X509Data) */

void zx_ds_KeyInfo_REV_X509Data(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_X509Data_s* nxt;
  struct zx_ds_X509Data_s* y;
  if (!x) return;
  y = x->X509Data;
  if (!y) return;
  x->X509Data = 0;
  while (y) {
    nxt = (struct zx_ds_X509Data_s*)y->gg.g.n;
    y->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyInfo_PUT_X509Data) */

void zx_ds_KeyInfo_PUT_X509Data(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_X509Data_s* z)
{
  struct zx_ds_X509Data_s* y;
  if (!x || !z) return;
  y = x->X509Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->X509Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_KeyInfo_ADD_X509Data) */

void zx_ds_KeyInfo_ADD_X509Data(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_X509Data_s* z)
{
  struct zx_ds_X509Data_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = z;
    return;
  case -1:
    y = x->X509Data;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_KeyInfo_DEL_X509Data) */

void zx_ds_KeyInfo_DEL_X509Data(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509Data = (struct zx_ds_X509Data_s*)x->X509Data->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_X509Data_s*)x->X509Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_KeyInfo_NUM_PGPData) */

int zx_ds_KeyInfo_NUM_PGPData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_PGPData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPData; y; ++n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyInfo_GET_PGPData) */

struct zx_ds_PGPData_s* zx_ds_KeyInfo_GET_PGPData(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return 0;
  for (y = x->PGPData; n>=0 && y; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyInfo_POP_PGPData) */

struct zx_ds_PGPData_s* zx_ds_KeyInfo_POP_PGPData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return 0;
  y = x->PGPData;
  if (y)
    x->PGPData = (struct zx_ds_PGPData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_KeyInfo_PUSH_PGPData) */

void zx_ds_KeyInfo_PUSH_PGPData(struct zx_ds_KeyInfo_s* x, struct zx_ds_PGPData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PGPData->gg.g;
  x->PGPData = z;
}

/* FUNC(zx_ds_KeyInfo_REV_PGPData) */

void zx_ds_KeyInfo_REV_PGPData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_PGPData_s* nxt;
  struct zx_ds_PGPData_s* y;
  if (!x) return;
  y = x->PGPData;
  if (!y) return;
  x->PGPData = 0;
  while (y) {
    nxt = (struct zx_ds_PGPData_s*)y->gg.g.n;
    y->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyInfo_PUT_PGPData) */

void zx_ds_KeyInfo_PUT_PGPData(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_PGPData_s* z)
{
  struct zx_ds_PGPData_s* y;
  if (!x || !z) return;
  y = x->PGPData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PGPData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_KeyInfo_ADD_PGPData) */

void zx_ds_KeyInfo_ADD_PGPData(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_PGPData_s* z)
{
  struct zx_ds_PGPData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = z;
    return;
  case -1:
    y = x->PGPData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_KeyInfo_DEL_PGPData) */

void zx_ds_KeyInfo_DEL_PGPData(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPData = (struct zx_ds_PGPData_s*)x->PGPData->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_PGPData_s*)x->PGPData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_KeyInfo_NUM_SPKIData) */

int zx_ds_KeyInfo_NUM_SPKIData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPKIData; y; ++n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyInfo_GET_SPKIData) */

struct zx_ds_SPKIData_s* zx_ds_KeyInfo_GET_SPKIData(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return 0;
  for (y = x->SPKIData; n>=0 && y; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyInfo_POP_SPKIData) */

struct zx_ds_SPKIData_s* zx_ds_KeyInfo_POP_SPKIData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return 0;
  y = x->SPKIData;
  if (y)
    x->SPKIData = (struct zx_ds_SPKIData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_KeyInfo_PUSH_SPKIData) */

void zx_ds_KeyInfo_PUSH_SPKIData(struct zx_ds_KeyInfo_s* x, struct zx_ds_SPKIData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPKIData->gg.g;
  x->SPKIData = z;
}

/* FUNC(zx_ds_KeyInfo_REV_SPKIData) */

void zx_ds_KeyInfo_REV_SPKIData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* nxt;
  struct zx_ds_SPKIData_s* y;
  if (!x) return;
  y = x->SPKIData;
  if (!y) return;
  x->SPKIData = 0;
  while (y) {
    nxt = (struct zx_ds_SPKIData_s*)y->gg.g.n;
    y->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyInfo_PUT_SPKIData) */

void zx_ds_KeyInfo_PUT_SPKIData(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z)
{
  struct zx_ds_SPKIData_s* y;
  if (!x || !z) return;
  y = x->SPKIData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPKIData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_KeyInfo_ADD_SPKIData) */

void zx_ds_KeyInfo_ADD_SPKIData(struct zx_ds_KeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z)
{
  struct zx_ds_SPKIData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = z;
    return;
  case -1:
    y = x->SPKIData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_KeyInfo_DEL_SPKIData) */

void zx_ds_KeyInfo_DEL_SPKIData(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPKIData = (struct zx_ds_SPKIData_s*)x->SPKIData->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_SPKIData_s*)x->SPKIData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_KeyInfo_NUM_MgmtData) */

int zx_ds_KeyInfo_NUM_MgmtData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MgmtData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyInfo_GET_MgmtData) */

struct zx_elem_s* zx_ds_KeyInfo_GET_MgmtData(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MgmtData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyInfo_POP_MgmtData) */

struct zx_elem_s* zx_ds_KeyInfo_POP_MgmtData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MgmtData;
  if (y)
    x->MgmtData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_KeyInfo_PUSH_MgmtData) */

void zx_ds_KeyInfo_PUSH_MgmtData(struct zx_ds_KeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MgmtData->g;
  x->MgmtData = z;
}

/* FUNC(zx_ds_KeyInfo_REV_MgmtData) */

void zx_ds_KeyInfo_REV_MgmtData(struct zx_ds_KeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MgmtData;
  if (!y) return;
  x->MgmtData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MgmtData->g;
    x->MgmtData = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyInfo_PUT_MgmtData) */

void zx_ds_KeyInfo_PUT_MgmtData(struct zx_ds_KeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MgmtData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MgmtData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_KeyInfo_ADD_MgmtData) */

void zx_ds_KeyInfo_ADD_MgmtData(struct zx_ds_KeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MgmtData->g;
    x->MgmtData = z;
    return;
  case -1:
    y = x->MgmtData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_KeyInfo_DEL_MgmtData) */

void zx_ds_KeyInfo_DEL_MgmtData(struct zx_ds_KeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MgmtData = (struct zx_elem_s*)x->MgmtData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MgmtData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_ds_KeyInfo_GET_Id) */
struct zx_str_s* zx_ds_KeyInfo_GET_Id(struct zx_ds_KeyInfo_s* x) { return x->Id; }
/* FUNC(zx_ds_KeyInfo_PUT_Id) */
void zx_ds_KeyInfo_PUT_Id(struct zx_ds_KeyInfo_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zx_ds_KeyValue_NUM_DSAKeyValue) */

int zx_ds_KeyValue_NUM_DSAKeyValue(struct zx_ds_KeyValue_s* x)
{
  struct zx_ds_DSAKeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DSAKeyValue; y; ++n, y = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyValue_GET_DSAKeyValue) */

struct zx_ds_DSAKeyValue_s* zx_ds_KeyValue_GET_DSAKeyValue(struct zx_ds_KeyValue_s* x, int n)
{
  struct zx_ds_DSAKeyValue_s* y;
  if (!x) return 0;
  for (y = x->DSAKeyValue; n>=0 && y; --n, y = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyValue_POP_DSAKeyValue) */

struct zx_ds_DSAKeyValue_s* zx_ds_KeyValue_POP_DSAKeyValue(struct zx_ds_KeyValue_s* x)
{
  struct zx_ds_DSAKeyValue_s* y;
  if (!x) return 0;
  y = x->DSAKeyValue;
  if (y)
    x->DSAKeyValue = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_KeyValue_PUSH_DSAKeyValue) */

void zx_ds_KeyValue_PUSH_DSAKeyValue(struct zx_ds_KeyValue_s* x, struct zx_ds_DSAKeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DSAKeyValue->gg.g;
  x->DSAKeyValue = z;
}

/* FUNC(zx_ds_KeyValue_REV_DSAKeyValue) */

void zx_ds_KeyValue_REV_DSAKeyValue(struct zx_ds_KeyValue_s* x)
{
  struct zx_ds_DSAKeyValue_s* nxt;
  struct zx_ds_DSAKeyValue_s* y;
  if (!x) return;
  y = x->DSAKeyValue;
  if (!y) return;
  x->DSAKeyValue = 0;
  while (y) {
    nxt = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->DSAKeyValue->gg.g;
    x->DSAKeyValue = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyValue_PUT_DSAKeyValue) */

void zx_ds_KeyValue_PUT_DSAKeyValue(struct zx_ds_KeyValue_s* x, int n, struct zx_ds_DSAKeyValue_s* z)
{
  struct zx_ds_DSAKeyValue_s* y;
  if (!x || !z) return;
  y = x->DSAKeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DSAKeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_KeyValue_ADD_DSAKeyValue) */

void zx_ds_KeyValue_ADD_DSAKeyValue(struct zx_ds_KeyValue_s* x, int n, struct zx_ds_DSAKeyValue_s* z)
{
  struct zx_ds_DSAKeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DSAKeyValue->gg.g;
    x->DSAKeyValue = z;
    return;
  case -1:
    y = x->DSAKeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DSAKeyValue; n > 1 && y; --n, y = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_KeyValue_DEL_DSAKeyValue) */

void zx_ds_KeyValue_DEL_DSAKeyValue(struct zx_ds_KeyValue_s* x, int n)
{
  struct zx_ds_DSAKeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DSAKeyValue = (struct zx_ds_DSAKeyValue_s*)x->DSAKeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_DSAKeyValue_s*)x->DSAKeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DSAKeyValue; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_DSAKeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_KeyValue_NUM_RSAKeyValue) */

int zx_ds_KeyValue_NUM_RSAKeyValue(struct zx_ds_KeyValue_s* x)
{
  struct zx_ds_RSAKeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RSAKeyValue; y; ++n, y = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_KeyValue_GET_RSAKeyValue) */

struct zx_ds_RSAKeyValue_s* zx_ds_KeyValue_GET_RSAKeyValue(struct zx_ds_KeyValue_s* x, int n)
{
  struct zx_ds_RSAKeyValue_s* y;
  if (!x) return 0;
  for (y = x->RSAKeyValue; n>=0 && y; --n, y = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_KeyValue_POP_RSAKeyValue) */

struct zx_ds_RSAKeyValue_s* zx_ds_KeyValue_POP_RSAKeyValue(struct zx_ds_KeyValue_s* x)
{
  struct zx_ds_RSAKeyValue_s* y;
  if (!x) return 0;
  y = x->RSAKeyValue;
  if (y)
    x->RSAKeyValue = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_KeyValue_PUSH_RSAKeyValue) */

void zx_ds_KeyValue_PUSH_RSAKeyValue(struct zx_ds_KeyValue_s* x, struct zx_ds_RSAKeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RSAKeyValue->gg.g;
  x->RSAKeyValue = z;
}

/* FUNC(zx_ds_KeyValue_REV_RSAKeyValue) */

void zx_ds_KeyValue_REV_RSAKeyValue(struct zx_ds_KeyValue_s* x)
{
  struct zx_ds_RSAKeyValue_s* nxt;
  struct zx_ds_RSAKeyValue_s* y;
  if (!x) return;
  y = x->RSAKeyValue;
  if (!y) return;
  x->RSAKeyValue = 0;
  while (y) {
    nxt = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->RSAKeyValue->gg.g;
    x->RSAKeyValue = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_KeyValue_PUT_RSAKeyValue) */

void zx_ds_KeyValue_PUT_RSAKeyValue(struct zx_ds_KeyValue_s* x, int n, struct zx_ds_RSAKeyValue_s* z)
{
  struct zx_ds_RSAKeyValue_s* y;
  if (!x || !z) return;
  y = x->RSAKeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RSAKeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_KeyValue_ADD_RSAKeyValue) */

void zx_ds_KeyValue_ADD_RSAKeyValue(struct zx_ds_KeyValue_s* x, int n, struct zx_ds_RSAKeyValue_s* z)
{
  struct zx_ds_RSAKeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RSAKeyValue->gg.g;
    x->RSAKeyValue = z;
    return;
  case -1:
    y = x->RSAKeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RSAKeyValue; n > 1 && y; --n, y = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_KeyValue_DEL_RSAKeyValue) */

void zx_ds_KeyValue_DEL_RSAKeyValue(struct zx_ds_KeyValue_s* x, int n)
{
  struct zx_ds_RSAKeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RSAKeyValue = (struct zx_ds_RSAKeyValue_s*)x->RSAKeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_RSAKeyValue_s*)x->RSAKeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RSAKeyValue; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_RSAKeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_ds_Manifest_NUM_Reference) */

int zx_ds_Manifest_NUM_Reference(struct zx_ds_Manifest_s* x)
{
  struct zx_ds_Reference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Reference; y; ++n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_Manifest_GET_Reference) */

struct zx_ds_Reference_s* zx_ds_Manifest_GET_Reference(struct zx_ds_Manifest_s* x, int n)
{
  struct zx_ds_Reference_s* y;
  if (!x) return 0;
  for (y = x->Reference; n>=0 && y; --n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_Manifest_POP_Reference) */

struct zx_ds_Reference_s* zx_ds_Manifest_POP_Reference(struct zx_ds_Manifest_s* x)
{
  struct zx_ds_Reference_s* y;
  if (!x) return 0;
  y = x->Reference;
  if (y)
    x->Reference = (struct zx_ds_Reference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_Manifest_PUSH_Reference) */

void zx_ds_Manifest_PUSH_Reference(struct zx_ds_Manifest_s* x, struct zx_ds_Reference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Reference->gg.g;
  x->Reference = z;
}

/* FUNC(zx_ds_Manifest_REV_Reference) */

void zx_ds_Manifest_REV_Reference(struct zx_ds_Manifest_s* x)
{
  struct zx_ds_Reference_s* nxt;
  struct zx_ds_Reference_s* y;
  if (!x) return;
  y = x->Reference;
  if (!y) return;
  x->Reference = 0;
  while (y) {
    nxt = (struct zx_ds_Reference_s*)y->gg.g.n;
    y->gg.g.n = &x->Reference->gg.g;
    x->Reference = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Manifest_PUT_Reference) */

void zx_ds_Manifest_PUT_Reference(struct zx_ds_Manifest_s* x, int n, struct zx_ds_Reference_s* z)
{
  struct zx_ds_Reference_s* y;
  if (!x || !z) return;
  y = x->Reference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Reference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_Manifest_ADD_Reference) */

void zx_ds_Manifest_ADD_Reference(struct zx_ds_Manifest_s* x, int n, struct zx_ds_Reference_s* z)
{
  struct zx_ds_Reference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Reference->gg.g;
    x->Reference = z;
    return;
  case -1:
    y = x->Reference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Reference; n > 1 && y; --n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_Manifest_DEL_Reference) */

void zx_ds_Manifest_DEL_Reference(struct zx_ds_Manifest_s* x, int n)
{
  struct zx_ds_Reference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Reference = (struct zx_ds_Reference_s*)x->Reference->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Reference_s*)x->Reference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Reference; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_ds_Manifest_GET_Id) */
struct zx_str_s* zx_ds_Manifest_GET_Id(struct zx_ds_Manifest_s* x) { return x->Id; }
/* FUNC(zx_ds_Manifest_PUT_Id) */
void zx_ds_Manifest_PUT_Id(struct zx_ds_Manifest_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zx_ds_Object_GET_Id) */
struct zx_str_s* zx_ds_Object_GET_Id(struct zx_ds_Object_s* x) { return x->Id; }
/* FUNC(zx_ds_Object_PUT_Id) */
void zx_ds_Object_PUT_Id(struct zx_ds_Object_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zx_ds_Object_GET_MimeType) */
struct zx_str_s* zx_ds_Object_GET_MimeType(struct zx_ds_Object_s* x) { return x->MimeType; }
/* FUNC(zx_ds_Object_PUT_MimeType) */
void zx_ds_Object_PUT_MimeType(struct zx_ds_Object_s* x, struct zx_str_s* y) { x->MimeType = y; }
/* FUNC(zx_ds_Object_GET_Encoding) */
struct zx_str_s* zx_ds_Object_GET_Encoding(struct zx_ds_Object_s* x) { return x->Encoding; }
/* FUNC(zx_ds_Object_PUT_Encoding) */
void zx_ds_Object_PUT_Encoding(struct zx_ds_Object_s* x, struct zx_str_s* y) { x->Encoding = y; }







/* FUNC(zx_ds_PGPData_NUM_PGPKeyID) */

int zx_ds_PGPData_NUM_PGPKeyID(struct zx_ds_PGPData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPKeyID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_PGPData_GET_PGPKeyID) */

struct zx_elem_s* zx_ds_PGPData_GET_PGPKeyID(struct zx_ds_PGPData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PGPKeyID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_PGPData_POP_PGPKeyID) */

struct zx_elem_s* zx_ds_PGPData_POP_PGPKeyID(struct zx_ds_PGPData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PGPKeyID;
  if (y)
    x->PGPKeyID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_PGPData_PUSH_PGPKeyID) */

void zx_ds_PGPData_PUSH_PGPKeyID(struct zx_ds_PGPData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PGPKeyID->g;
  x->PGPKeyID = z;
}

/* FUNC(zx_ds_PGPData_REV_PGPKeyID) */

void zx_ds_PGPData_REV_PGPKeyID(struct zx_ds_PGPData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PGPKeyID;
  if (!y) return;
  x->PGPKeyID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PGPKeyID->g;
    x->PGPKeyID = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_PGPData_PUT_PGPKeyID) */

void zx_ds_PGPData_PUT_PGPKeyID(struct zx_ds_PGPData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PGPKeyID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PGPKeyID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_PGPData_ADD_PGPKeyID) */

void zx_ds_PGPData_ADD_PGPKeyID(struct zx_ds_PGPData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PGPKeyID->g;
    x->PGPKeyID = z;
    return;
  case -1:
    y = x->PGPKeyID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PGPKeyID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_PGPData_DEL_PGPKeyID) */

void zx_ds_PGPData_DEL_PGPKeyID(struct zx_ds_PGPData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPKeyID = (struct zx_elem_s*)x->PGPKeyID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PGPKeyID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PGPKeyID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_PGPData_NUM_PGPKeyPacket) */

int zx_ds_PGPData_NUM_PGPKeyPacket(struct zx_ds_PGPData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPKeyPacket; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_PGPData_GET_PGPKeyPacket) */

struct zx_elem_s* zx_ds_PGPData_GET_PGPKeyPacket(struct zx_ds_PGPData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PGPKeyPacket; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_PGPData_POP_PGPKeyPacket) */

struct zx_elem_s* zx_ds_PGPData_POP_PGPKeyPacket(struct zx_ds_PGPData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PGPKeyPacket;
  if (y)
    x->PGPKeyPacket = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_PGPData_PUSH_PGPKeyPacket) */

void zx_ds_PGPData_PUSH_PGPKeyPacket(struct zx_ds_PGPData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PGPKeyPacket->g;
  x->PGPKeyPacket = z;
}

/* FUNC(zx_ds_PGPData_REV_PGPKeyPacket) */

void zx_ds_PGPData_REV_PGPKeyPacket(struct zx_ds_PGPData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PGPKeyPacket;
  if (!y) return;
  x->PGPKeyPacket = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PGPKeyPacket->g;
    x->PGPKeyPacket = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_PGPData_PUT_PGPKeyPacket) */

void zx_ds_PGPData_PUT_PGPKeyPacket(struct zx_ds_PGPData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PGPKeyPacket;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PGPKeyPacket = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_PGPData_ADD_PGPKeyPacket) */

void zx_ds_PGPData_ADD_PGPKeyPacket(struct zx_ds_PGPData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PGPKeyPacket->g;
    x->PGPKeyPacket = z;
    return;
  case -1:
    y = x->PGPKeyPacket;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PGPKeyPacket; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_PGPData_DEL_PGPKeyPacket) */

void zx_ds_PGPData_DEL_PGPKeyPacket(struct zx_ds_PGPData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPKeyPacket = (struct zx_elem_s*)x->PGPKeyPacket->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PGPKeyPacket;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PGPKeyPacket; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_ds_RSAKeyValue_NUM_Modulus) */

int zx_ds_RSAKeyValue_NUM_Modulus(struct zx_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Modulus; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_RSAKeyValue_GET_Modulus) */

struct zx_elem_s* zx_ds_RSAKeyValue_GET_Modulus(struct zx_ds_RSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Modulus; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_RSAKeyValue_POP_Modulus) */

struct zx_elem_s* zx_ds_RSAKeyValue_POP_Modulus(struct zx_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Modulus;
  if (y)
    x->Modulus = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_RSAKeyValue_PUSH_Modulus) */

void zx_ds_RSAKeyValue_PUSH_Modulus(struct zx_ds_RSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Modulus->g;
  x->Modulus = z;
}

/* FUNC(zx_ds_RSAKeyValue_REV_Modulus) */

void zx_ds_RSAKeyValue_REV_Modulus(struct zx_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Modulus;
  if (!y) return;
  x->Modulus = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Modulus->g;
    x->Modulus = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_RSAKeyValue_PUT_Modulus) */

void zx_ds_RSAKeyValue_PUT_Modulus(struct zx_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Modulus;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Modulus = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_RSAKeyValue_ADD_Modulus) */

void zx_ds_RSAKeyValue_ADD_Modulus(struct zx_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Modulus->g;
    x->Modulus = z;
    return;
  case -1:
    y = x->Modulus;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Modulus; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_RSAKeyValue_DEL_Modulus) */

void zx_ds_RSAKeyValue_DEL_Modulus(struct zx_ds_RSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Modulus = (struct zx_elem_s*)x->Modulus->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Modulus;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Modulus; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_RSAKeyValue_NUM_Exponent) */

int zx_ds_RSAKeyValue_NUM_Exponent(struct zx_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Exponent; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_RSAKeyValue_GET_Exponent) */

struct zx_elem_s* zx_ds_RSAKeyValue_GET_Exponent(struct zx_ds_RSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Exponent; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_RSAKeyValue_POP_Exponent) */

struct zx_elem_s* zx_ds_RSAKeyValue_POP_Exponent(struct zx_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Exponent;
  if (y)
    x->Exponent = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_RSAKeyValue_PUSH_Exponent) */

void zx_ds_RSAKeyValue_PUSH_Exponent(struct zx_ds_RSAKeyValue_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Exponent->g;
  x->Exponent = z;
}

/* FUNC(zx_ds_RSAKeyValue_REV_Exponent) */

void zx_ds_RSAKeyValue_REV_Exponent(struct zx_ds_RSAKeyValue_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Exponent;
  if (!y) return;
  x->Exponent = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Exponent->g;
    x->Exponent = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_RSAKeyValue_PUT_Exponent) */

void zx_ds_RSAKeyValue_PUT_Exponent(struct zx_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Exponent;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Exponent = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_RSAKeyValue_ADD_Exponent) */

void zx_ds_RSAKeyValue_ADD_Exponent(struct zx_ds_RSAKeyValue_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Exponent->g;
    x->Exponent = z;
    return;
  case -1:
    y = x->Exponent;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Exponent; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_RSAKeyValue_DEL_Exponent) */

void zx_ds_RSAKeyValue_DEL_Exponent(struct zx_ds_RSAKeyValue_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Exponent = (struct zx_elem_s*)x->Exponent->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Exponent;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Exponent; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_ds_Reference_NUM_Transforms) */

int zx_ds_Reference_NUM_Transforms(struct zx_ds_Reference_s* x)
{
  struct zx_ds_Transforms_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transforms; y; ++n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_Reference_GET_Transforms) */

struct zx_ds_Transforms_s* zx_ds_Reference_GET_Transforms(struct zx_ds_Reference_s* x, int n)
{
  struct zx_ds_Transforms_s* y;
  if (!x) return 0;
  for (y = x->Transforms; n>=0 && y; --n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_Reference_POP_Transforms) */

struct zx_ds_Transforms_s* zx_ds_Reference_POP_Transforms(struct zx_ds_Reference_s* x)
{
  struct zx_ds_Transforms_s* y;
  if (!x) return 0;
  y = x->Transforms;
  if (y)
    x->Transforms = (struct zx_ds_Transforms_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_Reference_PUSH_Transforms) */

void zx_ds_Reference_PUSH_Transforms(struct zx_ds_Reference_s* x, struct zx_ds_Transforms_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transforms->gg.g;
  x->Transforms = z;
}

/* FUNC(zx_ds_Reference_REV_Transforms) */

void zx_ds_Reference_REV_Transforms(struct zx_ds_Reference_s* x)
{
  struct zx_ds_Transforms_s* nxt;
  struct zx_ds_Transforms_s* y;
  if (!x) return;
  y = x->Transforms;
  if (!y) return;
  x->Transforms = 0;
  while (y) {
    nxt = (struct zx_ds_Transforms_s*)y->gg.g.n;
    y->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Reference_PUT_Transforms) */

void zx_ds_Reference_PUT_Transforms(struct zx_ds_Reference_s* x, int n, struct zx_ds_Transforms_s* z)
{
  struct zx_ds_Transforms_s* y;
  if (!x || !z) return;
  y = x->Transforms;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transforms = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_Reference_ADD_Transforms) */

void zx_ds_Reference_ADD_Transforms(struct zx_ds_Reference_s* x, int n, struct zx_ds_Transforms_s* z)
{
  struct zx_ds_Transforms_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = z;
    return;
  case -1:
    y = x->Transforms;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y; --n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_Reference_DEL_Transforms) */

void zx_ds_Reference_DEL_Transforms(struct zx_ds_Reference_s* x, int n)
{
  struct zx_ds_Transforms_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transforms = (struct zx_ds_Transforms_s*)x->Transforms->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Transforms_s*)x->Transforms;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_Reference_NUM_DigestMethod) */

int zx_ds_Reference_NUM_DigestMethod(struct zx_ds_Reference_s* x)
{
  struct zx_ds_DigestMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DigestMethod; y; ++n, y = (struct zx_ds_DigestMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_Reference_GET_DigestMethod) */

struct zx_ds_DigestMethod_s* zx_ds_Reference_GET_DigestMethod(struct zx_ds_Reference_s* x, int n)
{
  struct zx_ds_DigestMethod_s* y;
  if (!x) return 0;
  for (y = x->DigestMethod; n>=0 && y; --n, y = (struct zx_ds_DigestMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_Reference_POP_DigestMethod) */

struct zx_ds_DigestMethod_s* zx_ds_Reference_POP_DigestMethod(struct zx_ds_Reference_s* x)
{
  struct zx_ds_DigestMethod_s* y;
  if (!x) return 0;
  y = x->DigestMethod;
  if (y)
    x->DigestMethod = (struct zx_ds_DigestMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_Reference_PUSH_DigestMethod) */

void zx_ds_Reference_PUSH_DigestMethod(struct zx_ds_Reference_s* x, struct zx_ds_DigestMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DigestMethod->gg.g;
  x->DigestMethod = z;
}

/* FUNC(zx_ds_Reference_REV_DigestMethod) */

void zx_ds_Reference_REV_DigestMethod(struct zx_ds_Reference_s* x)
{
  struct zx_ds_DigestMethod_s* nxt;
  struct zx_ds_DigestMethod_s* y;
  if (!x) return;
  y = x->DigestMethod;
  if (!y) return;
  x->DigestMethod = 0;
  while (y) {
    nxt = (struct zx_ds_DigestMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->DigestMethod->gg.g;
    x->DigestMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Reference_PUT_DigestMethod) */

void zx_ds_Reference_PUT_DigestMethod(struct zx_ds_Reference_s* x, int n, struct zx_ds_DigestMethod_s* z)
{
  struct zx_ds_DigestMethod_s* y;
  if (!x || !z) return;
  y = x->DigestMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DigestMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_DigestMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_Reference_ADD_DigestMethod) */

void zx_ds_Reference_ADD_DigestMethod(struct zx_ds_Reference_s* x, int n, struct zx_ds_DigestMethod_s* z)
{
  struct zx_ds_DigestMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DigestMethod->gg.g;
    x->DigestMethod = z;
    return;
  case -1:
    y = x->DigestMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_DigestMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DigestMethod; n > 1 && y; --n, y = (struct zx_ds_DigestMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_Reference_DEL_DigestMethod) */

void zx_ds_Reference_DEL_DigestMethod(struct zx_ds_Reference_s* x, int n)
{
  struct zx_ds_DigestMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DigestMethod = (struct zx_ds_DigestMethod_s*)x->DigestMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_DigestMethod_s*)x->DigestMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_DigestMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DigestMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_DigestMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_Reference_NUM_DigestValue) */

int zx_ds_Reference_NUM_DigestValue(struct zx_ds_Reference_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DigestValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_Reference_GET_DigestValue) */

struct zx_elem_s* zx_ds_Reference_GET_DigestValue(struct zx_ds_Reference_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DigestValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_Reference_POP_DigestValue) */

struct zx_elem_s* zx_ds_Reference_POP_DigestValue(struct zx_ds_Reference_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DigestValue;
  if (y)
    x->DigestValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_Reference_PUSH_DigestValue) */

void zx_ds_Reference_PUSH_DigestValue(struct zx_ds_Reference_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DigestValue->g;
  x->DigestValue = z;
}

/* FUNC(zx_ds_Reference_REV_DigestValue) */

void zx_ds_Reference_REV_DigestValue(struct zx_ds_Reference_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DigestValue;
  if (!y) return;
  x->DigestValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DigestValue->g;
    x->DigestValue = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Reference_PUT_DigestValue) */

void zx_ds_Reference_PUT_DigestValue(struct zx_ds_Reference_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DigestValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DigestValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_Reference_ADD_DigestValue) */

void zx_ds_Reference_ADD_DigestValue(struct zx_ds_Reference_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DigestValue->g;
    x->DigestValue = z;
    return;
  case -1:
    y = x->DigestValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DigestValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_Reference_DEL_DigestValue) */

void zx_ds_Reference_DEL_DigestValue(struct zx_ds_Reference_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DigestValue = (struct zx_elem_s*)x->DigestValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DigestValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DigestValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_ds_Reference_GET_Id) */
struct zx_str_s* zx_ds_Reference_GET_Id(struct zx_ds_Reference_s* x) { return x->Id; }
/* FUNC(zx_ds_Reference_PUT_Id) */
void zx_ds_Reference_PUT_Id(struct zx_ds_Reference_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zx_ds_Reference_GET_URI) */
struct zx_str_s* zx_ds_Reference_GET_URI(struct zx_ds_Reference_s* x) { return x->URI; }
/* FUNC(zx_ds_Reference_PUT_URI) */
void zx_ds_Reference_PUT_URI(struct zx_ds_Reference_s* x, struct zx_str_s* y) { x->URI = y; }
/* FUNC(zx_ds_Reference_GET_Type) */
struct zx_str_s* zx_ds_Reference_GET_Type(struct zx_ds_Reference_s* x) { return x->Type; }
/* FUNC(zx_ds_Reference_PUT_Type) */
void zx_ds_Reference_PUT_Type(struct zx_ds_Reference_s* x, struct zx_str_s* y) { x->Type = y; }







/* FUNC(zx_ds_RetrievalMethod_NUM_Transforms) */

int zx_ds_RetrievalMethod_NUM_Transforms(struct zx_ds_RetrievalMethod_s* x)
{
  struct zx_ds_Transforms_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transforms; y; ++n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_RetrievalMethod_GET_Transforms) */

struct zx_ds_Transforms_s* zx_ds_RetrievalMethod_GET_Transforms(struct zx_ds_RetrievalMethod_s* x, int n)
{
  struct zx_ds_Transforms_s* y;
  if (!x) return 0;
  for (y = x->Transforms; n>=0 && y; --n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_RetrievalMethod_POP_Transforms) */

struct zx_ds_Transforms_s* zx_ds_RetrievalMethod_POP_Transforms(struct zx_ds_RetrievalMethod_s* x)
{
  struct zx_ds_Transforms_s* y;
  if (!x) return 0;
  y = x->Transforms;
  if (y)
    x->Transforms = (struct zx_ds_Transforms_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_RetrievalMethod_PUSH_Transforms) */

void zx_ds_RetrievalMethod_PUSH_Transforms(struct zx_ds_RetrievalMethod_s* x, struct zx_ds_Transforms_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transforms->gg.g;
  x->Transforms = z;
}

/* FUNC(zx_ds_RetrievalMethod_REV_Transforms) */

void zx_ds_RetrievalMethod_REV_Transforms(struct zx_ds_RetrievalMethod_s* x)
{
  struct zx_ds_Transforms_s* nxt;
  struct zx_ds_Transforms_s* y;
  if (!x) return;
  y = x->Transforms;
  if (!y) return;
  x->Transforms = 0;
  while (y) {
    nxt = (struct zx_ds_Transforms_s*)y->gg.g.n;
    y->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_RetrievalMethod_PUT_Transforms) */

void zx_ds_RetrievalMethod_PUT_Transforms(struct zx_ds_RetrievalMethod_s* x, int n, struct zx_ds_Transforms_s* z)
{
  struct zx_ds_Transforms_s* y;
  if (!x || !z) return;
  y = x->Transforms;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transforms = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_RetrievalMethod_ADD_Transforms) */

void zx_ds_RetrievalMethod_ADD_Transforms(struct zx_ds_RetrievalMethod_s* x, int n, struct zx_ds_Transforms_s* z)
{
  struct zx_ds_Transforms_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = z;
    return;
  case -1:
    y = x->Transforms;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y; --n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_RetrievalMethod_DEL_Transforms) */

void zx_ds_RetrievalMethod_DEL_Transforms(struct zx_ds_RetrievalMethod_s* x, int n)
{
  struct zx_ds_Transforms_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transforms = (struct zx_ds_Transforms_s*)x->Transforms->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Transforms_s*)x->Transforms;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_ds_RetrievalMethod_GET_URI) */
struct zx_str_s* zx_ds_RetrievalMethod_GET_URI(struct zx_ds_RetrievalMethod_s* x) { return x->URI; }
/* FUNC(zx_ds_RetrievalMethod_PUT_URI) */
void zx_ds_RetrievalMethod_PUT_URI(struct zx_ds_RetrievalMethod_s* x, struct zx_str_s* y) { x->URI = y; }
/* FUNC(zx_ds_RetrievalMethod_GET_Type) */
struct zx_str_s* zx_ds_RetrievalMethod_GET_Type(struct zx_ds_RetrievalMethod_s* x) { return x->Type; }
/* FUNC(zx_ds_RetrievalMethod_PUT_Type) */
void zx_ds_RetrievalMethod_PUT_Type(struct zx_ds_RetrievalMethod_s* x, struct zx_str_s* y) { x->Type = y; }







/* FUNC(zx_ds_SPKIData_NUM_SPKISexp) */

int zx_ds_SPKIData_NUM_SPKISexp(struct zx_ds_SPKIData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPKISexp; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_SPKIData_GET_SPKISexp) */

struct zx_elem_s* zx_ds_SPKIData_GET_SPKISexp(struct zx_ds_SPKIData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SPKISexp; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_SPKIData_POP_SPKISexp) */

struct zx_elem_s* zx_ds_SPKIData_POP_SPKISexp(struct zx_ds_SPKIData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SPKISexp;
  if (y)
    x->SPKISexp = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_SPKIData_PUSH_SPKISexp) */

void zx_ds_SPKIData_PUSH_SPKISexp(struct zx_ds_SPKIData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SPKISexp->g;
  x->SPKISexp = z;
}

/* FUNC(zx_ds_SPKIData_REV_SPKISexp) */

void zx_ds_SPKIData_REV_SPKISexp(struct zx_ds_SPKIData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SPKISexp;
  if (!y) return;
  x->SPKISexp = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SPKISexp->g;
    x->SPKISexp = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_SPKIData_PUT_SPKISexp) */

void zx_ds_SPKIData_PUT_SPKISexp(struct zx_ds_SPKIData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SPKISexp;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SPKISexp = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_SPKIData_ADD_SPKISexp) */

void zx_ds_SPKIData_ADD_SPKISexp(struct zx_ds_SPKIData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SPKISexp->g;
    x->SPKISexp = z;
    return;
  case -1:
    y = x->SPKISexp;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SPKISexp; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_SPKIData_DEL_SPKISexp) */

void zx_ds_SPKIData_DEL_SPKISexp(struct zx_ds_SPKIData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPKISexp = (struct zx_elem_s*)x->SPKISexp->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SPKISexp;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SPKISexp; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_ds_Signature_NUM_SignedInfo) */

int zx_ds_Signature_NUM_SignedInfo(struct zx_ds_Signature_s* x)
{
  struct zx_ds_SignedInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignedInfo; y; ++n, y = (struct zx_ds_SignedInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_Signature_GET_SignedInfo) */

struct zx_ds_SignedInfo_s* zx_ds_Signature_GET_SignedInfo(struct zx_ds_Signature_s* x, int n)
{
  struct zx_ds_SignedInfo_s* y;
  if (!x) return 0;
  for (y = x->SignedInfo; n>=0 && y; --n, y = (struct zx_ds_SignedInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_Signature_POP_SignedInfo) */

struct zx_ds_SignedInfo_s* zx_ds_Signature_POP_SignedInfo(struct zx_ds_Signature_s* x)
{
  struct zx_ds_SignedInfo_s* y;
  if (!x) return 0;
  y = x->SignedInfo;
  if (y)
    x->SignedInfo = (struct zx_ds_SignedInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_Signature_PUSH_SignedInfo) */

void zx_ds_Signature_PUSH_SignedInfo(struct zx_ds_Signature_s* x, struct zx_ds_SignedInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SignedInfo->gg.g;
  x->SignedInfo = z;
}

/* FUNC(zx_ds_Signature_REV_SignedInfo) */

void zx_ds_Signature_REV_SignedInfo(struct zx_ds_Signature_s* x)
{
  struct zx_ds_SignedInfo_s* nxt;
  struct zx_ds_SignedInfo_s* y;
  if (!x) return;
  y = x->SignedInfo;
  if (!y) return;
  x->SignedInfo = 0;
  while (y) {
    nxt = (struct zx_ds_SignedInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->SignedInfo->gg.g;
    x->SignedInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Signature_PUT_SignedInfo) */

void zx_ds_Signature_PUT_SignedInfo(struct zx_ds_Signature_s* x, int n, struct zx_ds_SignedInfo_s* z)
{
  struct zx_ds_SignedInfo_s* y;
  if (!x || !z) return;
  y = x->SignedInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SignedInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SignedInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_Signature_ADD_SignedInfo) */

void zx_ds_Signature_ADD_SignedInfo(struct zx_ds_Signature_s* x, int n, struct zx_ds_SignedInfo_s* z)
{
  struct zx_ds_SignedInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SignedInfo->gg.g;
    x->SignedInfo = z;
    return;
  case -1:
    y = x->SignedInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_SignedInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignedInfo; n > 1 && y; --n, y = (struct zx_ds_SignedInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_Signature_DEL_SignedInfo) */

void zx_ds_Signature_DEL_SignedInfo(struct zx_ds_Signature_s* x, int n)
{
  struct zx_ds_SignedInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignedInfo = (struct zx_ds_SignedInfo_s*)x->SignedInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_SignedInfo_s*)x->SignedInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_SignedInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignedInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SignedInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_Signature_NUM_SignatureValue) */

int zx_ds_Signature_NUM_SignatureValue(struct zx_ds_Signature_s* x)
{
  struct zx_ds_SignatureValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignatureValue; y; ++n, y = (struct zx_ds_SignatureValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_Signature_GET_SignatureValue) */

struct zx_ds_SignatureValue_s* zx_ds_Signature_GET_SignatureValue(struct zx_ds_Signature_s* x, int n)
{
  struct zx_ds_SignatureValue_s* y;
  if (!x) return 0;
  for (y = x->SignatureValue; n>=0 && y; --n, y = (struct zx_ds_SignatureValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_Signature_POP_SignatureValue) */

struct zx_ds_SignatureValue_s* zx_ds_Signature_POP_SignatureValue(struct zx_ds_Signature_s* x)
{
  struct zx_ds_SignatureValue_s* y;
  if (!x) return 0;
  y = x->SignatureValue;
  if (y)
    x->SignatureValue = (struct zx_ds_SignatureValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_Signature_PUSH_SignatureValue) */

void zx_ds_Signature_PUSH_SignatureValue(struct zx_ds_Signature_s* x, struct zx_ds_SignatureValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SignatureValue->gg.g;
  x->SignatureValue = z;
}

/* FUNC(zx_ds_Signature_REV_SignatureValue) */

void zx_ds_Signature_REV_SignatureValue(struct zx_ds_Signature_s* x)
{
  struct zx_ds_SignatureValue_s* nxt;
  struct zx_ds_SignatureValue_s* y;
  if (!x) return;
  y = x->SignatureValue;
  if (!y) return;
  x->SignatureValue = 0;
  while (y) {
    nxt = (struct zx_ds_SignatureValue_s*)y->gg.g.n;
    y->gg.g.n = &x->SignatureValue->gg.g;
    x->SignatureValue = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Signature_PUT_SignatureValue) */

void zx_ds_Signature_PUT_SignatureValue(struct zx_ds_Signature_s* x, int n, struct zx_ds_SignatureValue_s* z)
{
  struct zx_ds_SignatureValue_s* y;
  if (!x || !z) return;
  y = x->SignatureValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SignatureValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SignatureValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_Signature_ADD_SignatureValue) */

void zx_ds_Signature_ADD_SignatureValue(struct zx_ds_Signature_s* x, int n, struct zx_ds_SignatureValue_s* z)
{
  struct zx_ds_SignatureValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SignatureValue->gg.g;
    x->SignatureValue = z;
    return;
  case -1:
    y = x->SignatureValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_SignatureValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureValue; n > 1 && y; --n, y = (struct zx_ds_SignatureValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_Signature_DEL_SignatureValue) */

void zx_ds_Signature_DEL_SignatureValue(struct zx_ds_Signature_s* x, int n)
{
  struct zx_ds_SignatureValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignatureValue = (struct zx_ds_SignatureValue_s*)x->SignatureValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_SignatureValue_s*)x->SignatureValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_SignatureValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureValue; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SignatureValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_Signature_NUM_KeyInfo) */

int zx_ds_Signature_NUM_KeyInfo(struct zx_ds_Signature_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_Signature_GET_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_ds_Signature_GET_KeyInfo(struct zx_ds_Signature_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_Signature_POP_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_ds_Signature_POP_KeyInfo(struct zx_ds_Signature_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_Signature_PUSH_KeyInfo) */

void zx_ds_Signature_PUSH_KeyInfo(struct zx_ds_Signature_s* x, struct zx_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zx_ds_Signature_REV_KeyInfo) */

void zx_ds_Signature_REV_KeyInfo(struct zx_ds_Signature_s* x)
{
  struct zx_ds_KeyInfo_s* nxt;
  struct zx_ds_KeyInfo_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Signature_PUT_KeyInfo) */

void zx_ds_Signature_PUT_KeyInfo(struct zx_ds_Signature_s* x, int n, struct zx_ds_KeyInfo_s* z)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_Signature_ADD_KeyInfo) */

void zx_ds_Signature_ADD_KeyInfo(struct zx_ds_Signature_s* x, int n, struct zx_ds_KeyInfo_s* z)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_Signature_DEL_KeyInfo) */

void zx_ds_Signature_DEL_KeyInfo(struct zx_ds_Signature_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)x->KeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_KeyInfo_s*)x->KeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_Signature_NUM_Object) */

int zx_ds_Signature_NUM_Object(struct zx_ds_Signature_s* x)
{
  struct zx_ds_Object_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Object; y; ++n, y = (struct zx_ds_Object_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_Signature_GET_Object) */

struct zx_ds_Object_s* zx_ds_Signature_GET_Object(struct zx_ds_Signature_s* x, int n)
{
  struct zx_ds_Object_s* y;
  if (!x) return 0;
  for (y = x->Object; n>=0 && y; --n, y = (struct zx_ds_Object_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_Signature_POP_Object) */

struct zx_ds_Object_s* zx_ds_Signature_POP_Object(struct zx_ds_Signature_s* x)
{
  struct zx_ds_Object_s* y;
  if (!x) return 0;
  y = x->Object;
  if (y)
    x->Object = (struct zx_ds_Object_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_Signature_PUSH_Object) */

void zx_ds_Signature_PUSH_Object(struct zx_ds_Signature_s* x, struct zx_ds_Object_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Object->gg.g;
  x->Object = z;
}

/* FUNC(zx_ds_Signature_REV_Object) */

void zx_ds_Signature_REV_Object(struct zx_ds_Signature_s* x)
{
  struct zx_ds_Object_s* nxt;
  struct zx_ds_Object_s* y;
  if (!x) return;
  y = x->Object;
  if (!y) return;
  x->Object = 0;
  while (y) {
    nxt = (struct zx_ds_Object_s*)y->gg.g.n;
    y->gg.g.n = &x->Object->gg.g;
    x->Object = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Signature_PUT_Object) */

void zx_ds_Signature_PUT_Object(struct zx_ds_Signature_s* x, int n, struct zx_ds_Object_s* z)
{
  struct zx_ds_Object_s* y;
  if (!x || !z) return;
  y = x->Object;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Object = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Object_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_Signature_ADD_Object) */

void zx_ds_Signature_ADD_Object(struct zx_ds_Signature_s* x, int n, struct zx_ds_Object_s* z)
{
  struct zx_ds_Object_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Object->gg.g;
    x->Object = z;
    return;
  case -1:
    y = x->Object;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Object_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Object; n > 1 && y; --n, y = (struct zx_ds_Object_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_Signature_DEL_Object) */

void zx_ds_Signature_DEL_Object(struct zx_ds_Signature_s* x, int n)
{
  struct zx_ds_Object_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Object = (struct zx_ds_Object_s*)x->Object->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Object_s*)x->Object;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Object_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Object; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Object_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_ds_Signature_GET_Id) */
struct zx_str_s* zx_ds_Signature_GET_Id(struct zx_ds_Signature_s* x) { return x->Id; }
/* FUNC(zx_ds_Signature_PUT_Id) */
void zx_ds_Signature_PUT_Id(struct zx_ds_Signature_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zx_ds_SignatureMethod_NUM_HMACOutputLength) */

int zx_ds_SignatureMethod_NUM_HMACOutputLength(struct zx_ds_SignatureMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->HMACOutputLength; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_SignatureMethod_GET_HMACOutputLength) */

struct zx_elem_s* zx_ds_SignatureMethod_GET_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->HMACOutputLength; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_SignatureMethod_POP_HMACOutputLength) */

struct zx_elem_s* zx_ds_SignatureMethod_POP_HMACOutputLength(struct zx_ds_SignatureMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->HMACOutputLength;
  if (y)
    x->HMACOutputLength = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_SignatureMethod_PUSH_HMACOutputLength) */

void zx_ds_SignatureMethod_PUSH_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->HMACOutputLength->g;
  x->HMACOutputLength = z;
}

/* FUNC(zx_ds_SignatureMethod_REV_HMACOutputLength) */

void zx_ds_SignatureMethod_REV_HMACOutputLength(struct zx_ds_SignatureMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->HMACOutputLength;
  if (!y) return;
  x->HMACOutputLength = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->HMACOutputLength->g;
    x->HMACOutputLength = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_SignatureMethod_PUT_HMACOutputLength) */

void zx_ds_SignatureMethod_PUT_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->HMACOutputLength;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->HMACOutputLength = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_SignatureMethod_ADD_HMACOutputLength) */

void zx_ds_SignatureMethod_ADD_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->HMACOutputLength->g;
    x->HMACOutputLength = z;
    return;
  case -1:
    y = x->HMACOutputLength;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HMACOutputLength; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_SignatureMethod_DEL_HMACOutputLength) */

void zx_ds_SignatureMethod_DEL_HMACOutputLength(struct zx_ds_SignatureMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->HMACOutputLength = (struct zx_elem_s*)x->HMACOutputLength->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->HMACOutputLength;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->HMACOutputLength; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_ds_SignatureMethod_GET_Algorithm) */
struct zx_str_s* zx_ds_SignatureMethod_GET_Algorithm(struct zx_ds_SignatureMethod_s* x) { return x->Algorithm; }
/* FUNC(zx_ds_SignatureMethod_PUT_Algorithm) */
void zx_ds_SignatureMethod_PUT_Algorithm(struct zx_ds_SignatureMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zx_ds_SignatureProperties_NUM_SignatureProperty) */

int zx_ds_SignatureProperties_NUM_SignatureProperty(struct zx_ds_SignatureProperties_s* x)
{
  struct zx_ds_SignatureProperty_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignatureProperty; y; ++n, y = (struct zx_ds_SignatureProperty_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_SignatureProperties_GET_SignatureProperty) */

struct zx_ds_SignatureProperty_s* zx_ds_SignatureProperties_GET_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n)
{
  struct zx_ds_SignatureProperty_s* y;
  if (!x) return 0;
  for (y = x->SignatureProperty; n>=0 && y; --n, y = (struct zx_ds_SignatureProperty_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_SignatureProperties_POP_SignatureProperty) */

struct zx_ds_SignatureProperty_s* zx_ds_SignatureProperties_POP_SignatureProperty(struct zx_ds_SignatureProperties_s* x)
{
  struct zx_ds_SignatureProperty_s* y;
  if (!x) return 0;
  y = x->SignatureProperty;
  if (y)
    x->SignatureProperty = (struct zx_ds_SignatureProperty_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_SignatureProperties_PUSH_SignatureProperty) */

void zx_ds_SignatureProperties_PUSH_SignatureProperty(struct zx_ds_SignatureProperties_s* x, struct zx_ds_SignatureProperty_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SignatureProperty->gg.g;
  x->SignatureProperty = z;
}

/* FUNC(zx_ds_SignatureProperties_REV_SignatureProperty) */

void zx_ds_SignatureProperties_REV_SignatureProperty(struct zx_ds_SignatureProperties_s* x)
{
  struct zx_ds_SignatureProperty_s* nxt;
  struct zx_ds_SignatureProperty_s* y;
  if (!x) return;
  y = x->SignatureProperty;
  if (!y) return;
  x->SignatureProperty = 0;
  while (y) {
    nxt = (struct zx_ds_SignatureProperty_s*)y->gg.g.n;
    y->gg.g.n = &x->SignatureProperty->gg.g;
    x->SignatureProperty = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_SignatureProperties_PUT_SignatureProperty) */

void zx_ds_SignatureProperties_PUT_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n, struct zx_ds_SignatureProperty_s* z)
{
  struct zx_ds_SignatureProperty_s* y;
  if (!x || !z) return;
  y = x->SignatureProperty;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SignatureProperty = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SignatureProperty_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_SignatureProperties_ADD_SignatureProperty) */

void zx_ds_SignatureProperties_ADD_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n, struct zx_ds_SignatureProperty_s* z)
{
  struct zx_ds_SignatureProperty_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SignatureProperty->gg.g;
    x->SignatureProperty = z;
    return;
  case -1:
    y = x->SignatureProperty;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_SignatureProperty_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureProperty; n > 1 && y; --n, y = (struct zx_ds_SignatureProperty_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_SignatureProperties_DEL_SignatureProperty) */

void zx_ds_SignatureProperties_DEL_SignatureProperty(struct zx_ds_SignatureProperties_s* x, int n)
{
  struct zx_ds_SignatureProperty_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignatureProperty = (struct zx_ds_SignatureProperty_s*)x->SignatureProperty->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_SignatureProperty_s*)x->SignatureProperty;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_SignatureProperty_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureProperty; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SignatureProperty_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_ds_SignatureProperties_GET_Id) */
struct zx_str_s* zx_ds_SignatureProperties_GET_Id(struct zx_ds_SignatureProperties_s* x) { return x->Id; }
/* FUNC(zx_ds_SignatureProperties_PUT_Id) */
void zx_ds_SignatureProperties_PUT_Id(struct zx_ds_SignatureProperties_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zx_ds_SignatureProperty_GET_Target) */
struct zx_str_s* zx_ds_SignatureProperty_GET_Target(struct zx_ds_SignatureProperty_s* x) { return x->Target; }
/* FUNC(zx_ds_SignatureProperty_PUT_Target) */
void zx_ds_SignatureProperty_PUT_Target(struct zx_ds_SignatureProperty_s* x, struct zx_str_s* y) { x->Target = y; }
/* FUNC(zx_ds_SignatureProperty_GET_Id) */
struct zx_str_s* zx_ds_SignatureProperty_GET_Id(struct zx_ds_SignatureProperty_s* x) { return x->Id; }
/* FUNC(zx_ds_SignatureProperty_PUT_Id) */
void zx_ds_SignatureProperty_PUT_Id(struct zx_ds_SignatureProperty_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zx_ds_SignatureValue_GET_Id) */
struct zx_str_s* zx_ds_SignatureValue_GET_Id(struct zx_ds_SignatureValue_s* x) { return x->Id; }
/* FUNC(zx_ds_SignatureValue_PUT_Id) */
void zx_ds_SignatureValue_PUT_Id(struct zx_ds_SignatureValue_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zx_ds_SignedInfo_NUM_CanonicalizationMethod) */

int zx_ds_SignedInfo_NUM_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_CanonicalizationMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CanonicalizationMethod; y; ++n, y = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_SignedInfo_GET_CanonicalizationMethod) */

struct zx_ds_CanonicalizationMethod_s* zx_ds_SignedInfo_GET_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, int n)
{
  struct zx_ds_CanonicalizationMethod_s* y;
  if (!x) return 0;
  for (y = x->CanonicalizationMethod; n>=0 && y; --n, y = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_SignedInfo_POP_CanonicalizationMethod) */

struct zx_ds_CanonicalizationMethod_s* zx_ds_SignedInfo_POP_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_CanonicalizationMethod_s* y;
  if (!x) return 0;
  y = x->CanonicalizationMethod;
  if (y)
    x->CanonicalizationMethod = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_SignedInfo_PUSH_CanonicalizationMethod) */

void zx_ds_SignedInfo_PUSH_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, struct zx_ds_CanonicalizationMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CanonicalizationMethod->gg.g;
  x->CanonicalizationMethod = z;
}

/* FUNC(zx_ds_SignedInfo_REV_CanonicalizationMethod) */

void zx_ds_SignedInfo_REV_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_CanonicalizationMethod_s* nxt;
  struct zx_ds_CanonicalizationMethod_s* y;
  if (!x) return;
  y = x->CanonicalizationMethod;
  if (!y) return;
  x->CanonicalizationMethod = 0;
  while (y) {
    nxt = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->CanonicalizationMethod->gg.g;
    x->CanonicalizationMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_SignedInfo_PUT_CanonicalizationMethod) */

void zx_ds_SignedInfo_PUT_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_CanonicalizationMethod_s* z)
{
  struct zx_ds_CanonicalizationMethod_s* y;
  if (!x || !z) return;
  y = x->CanonicalizationMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CanonicalizationMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_SignedInfo_ADD_CanonicalizationMethod) */

void zx_ds_SignedInfo_ADD_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_CanonicalizationMethod_s* z)
{
  struct zx_ds_CanonicalizationMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CanonicalizationMethod->gg.g;
    x->CanonicalizationMethod = z;
    return;
  case -1:
    y = x->CanonicalizationMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CanonicalizationMethod; n > 1 && y; --n, y = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_SignedInfo_DEL_CanonicalizationMethod) */

void zx_ds_SignedInfo_DEL_CanonicalizationMethod(struct zx_ds_SignedInfo_s* x, int n)
{
  struct zx_ds_CanonicalizationMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CanonicalizationMethod = (struct zx_ds_CanonicalizationMethod_s*)x->CanonicalizationMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_CanonicalizationMethod_s*)x->CanonicalizationMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CanonicalizationMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_CanonicalizationMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_SignedInfo_NUM_SignatureMethod) */

int zx_ds_SignedInfo_NUM_SignatureMethod(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_SignatureMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignatureMethod; y; ++n, y = (struct zx_ds_SignatureMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_SignedInfo_GET_SignatureMethod) */

struct zx_ds_SignatureMethod_s* zx_ds_SignedInfo_GET_SignatureMethod(struct zx_ds_SignedInfo_s* x, int n)
{
  struct zx_ds_SignatureMethod_s* y;
  if (!x) return 0;
  for (y = x->SignatureMethod; n>=0 && y; --n, y = (struct zx_ds_SignatureMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_SignedInfo_POP_SignatureMethod) */

struct zx_ds_SignatureMethod_s* zx_ds_SignedInfo_POP_SignatureMethod(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_SignatureMethod_s* y;
  if (!x) return 0;
  y = x->SignatureMethod;
  if (y)
    x->SignatureMethod = (struct zx_ds_SignatureMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_SignedInfo_PUSH_SignatureMethod) */

void zx_ds_SignedInfo_PUSH_SignatureMethod(struct zx_ds_SignedInfo_s* x, struct zx_ds_SignatureMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SignatureMethod->gg.g;
  x->SignatureMethod = z;
}

/* FUNC(zx_ds_SignedInfo_REV_SignatureMethod) */

void zx_ds_SignedInfo_REV_SignatureMethod(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_SignatureMethod_s* nxt;
  struct zx_ds_SignatureMethod_s* y;
  if (!x) return;
  y = x->SignatureMethod;
  if (!y) return;
  x->SignatureMethod = 0;
  while (y) {
    nxt = (struct zx_ds_SignatureMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->SignatureMethod->gg.g;
    x->SignatureMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_SignedInfo_PUT_SignatureMethod) */

void zx_ds_SignedInfo_PUT_SignatureMethod(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_SignatureMethod_s* z)
{
  struct zx_ds_SignatureMethod_s* y;
  if (!x || !z) return;
  y = x->SignatureMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SignatureMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SignatureMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_SignedInfo_ADD_SignatureMethod) */

void zx_ds_SignedInfo_ADD_SignatureMethod(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_SignatureMethod_s* z)
{
  struct zx_ds_SignatureMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SignatureMethod->gg.g;
    x->SignatureMethod = z;
    return;
  case -1:
    y = x->SignatureMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_SignatureMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureMethod; n > 1 && y; --n, y = (struct zx_ds_SignatureMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_SignedInfo_DEL_SignatureMethod) */

void zx_ds_SignedInfo_DEL_SignatureMethod(struct zx_ds_SignedInfo_s* x, int n)
{
  struct zx_ds_SignatureMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignatureMethod = (struct zx_ds_SignatureMethod_s*)x->SignatureMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_SignatureMethod_s*)x->SignatureMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_SignatureMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SignatureMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SignatureMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_SignedInfo_NUM_Reference) */

int zx_ds_SignedInfo_NUM_Reference(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_Reference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Reference; y; ++n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_SignedInfo_GET_Reference) */

struct zx_ds_Reference_s* zx_ds_SignedInfo_GET_Reference(struct zx_ds_SignedInfo_s* x, int n)
{
  struct zx_ds_Reference_s* y;
  if (!x) return 0;
  for (y = x->Reference; n>=0 && y; --n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_SignedInfo_POP_Reference) */

struct zx_ds_Reference_s* zx_ds_SignedInfo_POP_Reference(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_Reference_s* y;
  if (!x) return 0;
  y = x->Reference;
  if (y)
    x->Reference = (struct zx_ds_Reference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_SignedInfo_PUSH_Reference) */

void zx_ds_SignedInfo_PUSH_Reference(struct zx_ds_SignedInfo_s* x, struct zx_ds_Reference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Reference->gg.g;
  x->Reference = z;
}

/* FUNC(zx_ds_SignedInfo_REV_Reference) */

void zx_ds_SignedInfo_REV_Reference(struct zx_ds_SignedInfo_s* x)
{
  struct zx_ds_Reference_s* nxt;
  struct zx_ds_Reference_s* y;
  if (!x) return;
  y = x->Reference;
  if (!y) return;
  x->Reference = 0;
  while (y) {
    nxt = (struct zx_ds_Reference_s*)y->gg.g.n;
    y->gg.g.n = &x->Reference->gg.g;
    x->Reference = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_SignedInfo_PUT_Reference) */

void zx_ds_SignedInfo_PUT_Reference(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_Reference_s* z)
{
  struct zx_ds_Reference_s* y;
  if (!x || !z) return;
  y = x->Reference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Reference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_SignedInfo_ADD_Reference) */

void zx_ds_SignedInfo_ADD_Reference(struct zx_ds_SignedInfo_s* x, int n, struct zx_ds_Reference_s* z)
{
  struct zx_ds_Reference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Reference->gg.g;
    x->Reference = z;
    return;
  case -1:
    y = x->Reference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Reference; n > 1 && y; --n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_SignedInfo_DEL_Reference) */

void zx_ds_SignedInfo_DEL_Reference(struct zx_ds_SignedInfo_s* x, int n)
{
  struct zx_ds_Reference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Reference = (struct zx_ds_Reference_s*)x->Reference->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Reference_s*)x->Reference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Reference; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Reference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_ds_SignedInfo_GET_Id) */
struct zx_str_s* zx_ds_SignedInfo_GET_Id(struct zx_ds_SignedInfo_s* x) { return x->Id; }
/* FUNC(zx_ds_SignedInfo_PUT_Id) */
void zx_ds_SignedInfo_PUT_Id(struct zx_ds_SignedInfo_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zx_ds_Transform_NUM_XPath) */

int zx_ds_Transform_NUM_XPath(struct zx_ds_Transform_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->XPath; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_Transform_GET_XPath) */

struct zx_elem_s* zx_ds_Transform_GET_XPath(struct zx_ds_Transform_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->XPath; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_Transform_POP_XPath) */

struct zx_elem_s* zx_ds_Transform_POP_XPath(struct zx_ds_Transform_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->XPath;
  if (y)
    x->XPath = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_Transform_PUSH_XPath) */

void zx_ds_Transform_PUSH_XPath(struct zx_ds_Transform_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->XPath->g;
  x->XPath = z;
}

/* FUNC(zx_ds_Transform_REV_XPath) */

void zx_ds_Transform_REV_XPath(struct zx_ds_Transform_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->XPath;
  if (!y) return;
  x->XPath = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->XPath->g;
    x->XPath = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Transform_PUT_XPath) */

void zx_ds_Transform_PUT_XPath(struct zx_ds_Transform_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->XPath;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->XPath = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_Transform_ADD_XPath) */

void zx_ds_Transform_ADD_XPath(struct zx_ds_Transform_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->XPath->g;
    x->XPath = z;
    return;
  case -1:
    y = x->XPath;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->XPath; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_Transform_DEL_XPath) */

void zx_ds_Transform_DEL_XPath(struct zx_ds_Transform_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->XPath = (struct zx_elem_s*)x->XPath->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->XPath;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->XPath; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_ds_Transform_GET_Algorithm) */
struct zx_str_s* zx_ds_Transform_GET_Algorithm(struct zx_ds_Transform_s* x) { return x->Algorithm; }
/* FUNC(zx_ds_Transform_PUT_Algorithm) */
void zx_ds_Transform_PUT_Algorithm(struct zx_ds_Transform_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zx_ds_Transforms_NUM_Transform) */

int zx_ds_Transforms_NUM_Transform(struct zx_ds_Transforms_s* x)
{
  struct zx_ds_Transform_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transform; y; ++n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_Transforms_GET_Transform) */

struct zx_ds_Transform_s* zx_ds_Transforms_GET_Transform(struct zx_ds_Transforms_s* x, int n)
{
  struct zx_ds_Transform_s* y;
  if (!x) return 0;
  for (y = x->Transform; n>=0 && y; --n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_Transforms_POP_Transform) */

struct zx_ds_Transform_s* zx_ds_Transforms_POP_Transform(struct zx_ds_Transforms_s* x)
{
  struct zx_ds_Transform_s* y;
  if (!x) return 0;
  y = x->Transform;
  if (y)
    x->Transform = (struct zx_ds_Transform_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_Transforms_PUSH_Transform) */

void zx_ds_Transforms_PUSH_Transform(struct zx_ds_Transforms_s* x, struct zx_ds_Transform_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transform->gg.g;
  x->Transform = z;
}

/* FUNC(zx_ds_Transforms_REV_Transform) */

void zx_ds_Transforms_REV_Transform(struct zx_ds_Transforms_s* x)
{
  struct zx_ds_Transform_s* nxt;
  struct zx_ds_Transform_s* y;
  if (!x) return;
  y = x->Transform;
  if (!y) return;
  x->Transform = 0;
  while (y) {
    nxt = (struct zx_ds_Transform_s*)y->gg.g.n;
    y->gg.g.n = &x->Transform->gg.g;
    x->Transform = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_Transforms_PUT_Transform) */

void zx_ds_Transforms_PUT_Transform(struct zx_ds_Transforms_s* x, int n, struct zx_ds_Transform_s* z)
{
  struct zx_ds_Transform_s* y;
  if (!x || !z) return;
  y = x->Transform;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transform = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_Transforms_ADD_Transform) */

void zx_ds_Transforms_ADD_Transform(struct zx_ds_Transforms_s* x, int n, struct zx_ds_Transform_s* z)
{
  struct zx_ds_Transform_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transform->gg.g;
    x->Transform = z;
    return;
  case -1:
    y = x->Transform;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transform; n > 1 && y; --n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_Transforms_DEL_Transform) */

void zx_ds_Transforms_DEL_Transform(struct zx_ds_Transforms_s* x, int n)
{
  struct zx_ds_Transform_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transform = (struct zx_ds_Transform_s*)x->Transform->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Transform_s*)x->Transform;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transform; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_ds_X509Data_NUM_X509IssuerSerial) */

int zx_ds_X509Data_NUM_X509IssuerSerial(struct zx_ds_X509Data_s* x)
{
  struct zx_ds_X509IssuerSerial_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509IssuerSerial; y; ++n, y = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_ds_X509Data_GET_X509IssuerSerial) */

struct zx_ds_X509IssuerSerial_s* zx_ds_X509Data_GET_X509IssuerSerial(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_ds_X509IssuerSerial_s* y;
  if (!x) return 0;
  for (y = x->X509IssuerSerial; n>=0 && y; --n, y = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_ds_X509Data_POP_X509IssuerSerial) */

struct zx_ds_X509IssuerSerial_s* zx_ds_X509Data_POP_X509IssuerSerial(struct zx_ds_X509Data_s* x)
{
  struct zx_ds_X509IssuerSerial_s* y;
  if (!x) return 0;
  y = x->X509IssuerSerial;
  if (y)
    x->X509IssuerSerial = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_ds_X509Data_PUSH_X509IssuerSerial) */

void zx_ds_X509Data_PUSH_X509IssuerSerial(struct zx_ds_X509Data_s* x, struct zx_ds_X509IssuerSerial_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->X509IssuerSerial->gg.g;
  x->X509IssuerSerial = z;
}

/* FUNC(zx_ds_X509Data_REV_X509IssuerSerial) */

void zx_ds_X509Data_REV_X509IssuerSerial(struct zx_ds_X509Data_s* x)
{
  struct zx_ds_X509IssuerSerial_s* nxt;
  struct zx_ds_X509IssuerSerial_s* y;
  if (!x) return;
  y = x->X509IssuerSerial;
  if (!y) return;
  x->X509IssuerSerial = 0;
  while (y) {
    nxt = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n;
    y->gg.g.n = &x->X509IssuerSerial->gg.g;
    x->X509IssuerSerial = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_X509Data_PUT_X509IssuerSerial) */

void zx_ds_X509Data_PUT_X509IssuerSerial(struct zx_ds_X509Data_s* x, int n, struct zx_ds_X509IssuerSerial_s* z)
{
  struct zx_ds_X509IssuerSerial_s* y;
  if (!x || !z) return;
  y = x->X509IssuerSerial;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->X509IssuerSerial = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_ds_X509Data_ADD_X509IssuerSerial) */

void zx_ds_X509Data_ADD_X509IssuerSerial(struct zx_ds_X509Data_s* x, int n, struct zx_ds_X509IssuerSerial_s* z)
{
  struct zx_ds_X509IssuerSerial_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->X509IssuerSerial->gg.g;
    x->X509IssuerSerial = z;
    return;
  case -1:
    y = x->X509IssuerSerial;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509IssuerSerial; n > 1 && y; --n, y = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_ds_X509Data_DEL_X509IssuerSerial) */

void zx_ds_X509Data_DEL_X509IssuerSerial(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_ds_X509IssuerSerial_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509IssuerSerial = (struct zx_ds_X509IssuerSerial_s*)x->X509IssuerSerial->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_X509IssuerSerial_s*)x->X509IssuerSerial;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509IssuerSerial; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_X509IssuerSerial_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_ds_X509Data_NUM_X509SKI) */

int zx_ds_X509Data_NUM_X509SKI(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509SKI; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_X509Data_GET_X509SKI) */

struct zx_elem_s* zx_ds_X509Data_GET_X509SKI(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509SKI; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_X509Data_POP_X509SKI) */

struct zx_elem_s* zx_ds_X509Data_POP_X509SKI(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509SKI;
  if (y)
    x->X509SKI = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_X509Data_PUSH_X509SKI) */

void zx_ds_X509Data_PUSH_X509SKI(struct zx_ds_X509Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509SKI->g;
  x->X509SKI = z;
}

/* FUNC(zx_ds_X509Data_REV_X509SKI) */

void zx_ds_X509Data_REV_X509SKI(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509SKI;
  if (!y) return;
  x->X509SKI = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509SKI->g;
    x->X509SKI = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_X509Data_PUT_X509SKI) */

void zx_ds_X509Data_PUT_X509SKI(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509SKI;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509SKI = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_X509Data_ADD_X509SKI) */

void zx_ds_X509Data_ADD_X509SKI(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509SKI->g;
    x->X509SKI = z;
    return;
  case -1:
    y = x->X509SKI;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SKI; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_X509Data_DEL_X509SKI) */

void zx_ds_X509Data_DEL_X509SKI(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509SKI = (struct zx_elem_s*)x->X509SKI->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509SKI;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SKI; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_X509Data_NUM_X509SubjectName) */

int zx_ds_X509Data_NUM_X509SubjectName(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509SubjectName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_X509Data_GET_X509SubjectName) */

struct zx_elem_s* zx_ds_X509Data_GET_X509SubjectName(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509SubjectName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_X509Data_POP_X509SubjectName) */

struct zx_elem_s* zx_ds_X509Data_POP_X509SubjectName(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509SubjectName;
  if (y)
    x->X509SubjectName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_X509Data_PUSH_X509SubjectName) */

void zx_ds_X509Data_PUSH_X509SubjectName(struct zx_ds_X509Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509SubjectName->g;
  x->X509SubjectName = z;
}

/* FUNC(zx_ds_X509Data_REV_X509SubjectName) */

void zx_ds_X509Data_REV_X509SubjectName(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509SubjectName;
  if (!y) return;
  x->X509SubjectName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509SubjectName->g;
    x->X509SubjectName = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_X509Data_PUT_X509SubjectName) */

void zx_ds_X509Data_PUT_X509SubjectName(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509SubjectName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509SubjectName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_X509Data_ADD_X509SubjectName) */

void zx_ds_X509Data_ADD_X509SubjectName(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509SubjectName->g;
    x->X509SubjectName = z;
    return;
  case -1:
    y = x->X509SubjectName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SubjectName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_X509Data_DEL_X509SubjectName) */

void zx_ds_X509Data_DEL_X509SubjectName(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509SubjectName = (struct zx_elem_s*)x->X509SubjectName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509SubjectName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SubjectName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_X509Data_NUM_X509Certificate) */

int zx_ds_X509Data_NUM_X509Certificate(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509Certificate; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_X509Data_GET_X509Certificate) */

struct zx_elem_s* zx_ds_X509Data_GET_X509Certificate(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509Certificate; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_X509Data_POP_X509Certificate) */

struct zx_elem_s* zx_ds_X509Data_POP_X509Certificate(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509Certificate;
  if (y)
    x->X509Certificate = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_X509Data_PUSH_X509Certificate) */

void zx_ds_X509Data_PUSH_X509Certificate(struct zx_ds_X509Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509Certificate->g;
  x->X509Certificate = z;
}

/* FUNC(zx_ds_X509Data_REV_X509Certificate) */

void zx_ds_X509Data_REV_X509Certificate(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509Certificate;
  if (!y) return;
  x->X509Certificate = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509Certificate->g;
    x->X509Certificate = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_X509Data_PUT_X509Certificate) */

void zx_ds_X509Data_PUT_X509Certificate(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509Certificate;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509Certificate = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_X509Data_ADD_X509Certificate) */

void zx_ds_X509Data_ADD_X509Certificate(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509Certificate->g;
    x->X509Certificate = z;
    return;
  case -1:
    y = x->X509Certificate;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509Certificate; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_X509Data_DEL_X509Certificate) */

void zx_ds_X509Data_DEL_X509Certificate(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509Certificate = (struct zx_elem_s*)x->X509Certificate->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509Certificate;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509Certificate; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_X509Data_NUM_X509CRL) */

int zx_ds_X509Data_NUM_X509CRL(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509CRL; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_X509Data_GET_X509CRL) */

struct zx_elem_s* zx_ds_X509Data_GET_X509CRL(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509CRL; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_X509Data_POP_X509CRL) */

struct zx_elem_s* zx_ds_X509Data_POP_X509CRL(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509CRL;
  if (y)
    x->X509CRL = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_X509Data_PUSH_X509CRL) */

void zx_ds_X509Data_PUSH_X509CRL(struct zx_ds_X509Data_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509CRL->g;
  x->X509CRL = z;
}

/* FUNC(zx_ds_X509Data_REV_X509CRL) */

void zx_ds_X509Data_REV_X509CRL(struct zx_ds_X509Data_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509CRL;
  if (!y) return;
  x->X509CRL = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509CRL->g;
    x->X509CRL = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_X509Data_PUT_X509CRL) */

void zx_ds_X509Data_PUT_X509CRL(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509CRL;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509CRL = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_X509Data_ADD_X509CRL) */

void zx_ds_X509Data_ADD_X509CRL(struct zx_ds_X509Data_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509CRL->g;
    x->X509CRL = z;
    return;
  case -1:
    y = x->X509CRL;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509CRL; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_X509Data_DEL_X509CRL) */

void zx_ds_X509Data_DEL_X509CRL(struct zx_ds_X509Data_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509CRL = (struct zx_elem_s*)x->X509CRL->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509CRL;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509CRL; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_ds_X509IssuerSerial_NUM_X509IssuerName) */

int zx_ds_X509IssuerSerial_NUM_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509IssuerName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_X509IssuerSerial_GET_X509IssuerName) */

struct zx_elem_s* zx_ds_X509IssuerSerial_GET_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509IssuerName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_X509IssuerSerial_POP_X509IssuerName) */

struct zx_elem_s* zx_ds_X509IssuerSerial_POP_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509IssuerName;
  if (y)
    x->X509IssuerName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_X509IssuerSerial_PUSH_X509IssuerName) */

void zx_ds_X509IssuerSerial_PUSH_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509IssuerName->g;
  x->X509IssuerName = z;
}

/* FUNC(zx_ds_X509IssuerSerial_REV_X509IssuerName) */

void zx_ds_X509IssuerSerial_REV_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509IssuerName;
  if (!y) return;
  x->X509IssuerName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509IssuerName->g;
    x->X509IssuerName = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_X509IssuerSerial_PUT_X509IssuerName) */

void zx_ds_X509IssuerSerial_PUT_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509IssuerName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509IssuerName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_X509IssuerSerial_ADD_X509IssuerName) */

void zx_ds_X509IssuerSerial_ADD_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509IssuerName->g;
    x->X509IssuerName = z;
    return;
  case -1:
    y = x->X509IssuerName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509IssuerName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_X509IssuerSerial_DEL_X509IssuerName) */

void zx_ds_X509IssuerSerial_DEL_X509IssuerName(struct zx_ds_X509IssuerSerial_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509IssuerName = (struct zx_elem_s*)x->X509IssuerName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509IssuerName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509IssuerName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_ds_X509IssuerSerial_NUM_X509SerialNumber) */

int zx_ds_X509IssuerSerial_NUM_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509SerialNumber; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_ds_X509IssuerSerial_GET_X509SerialNumber) */

struct zx_elem_s* zx_ds_X509IssuerSerial_GET_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X509SerialNumber; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_ds_X509IssuerSerial_POP_X509SerialNumber) */

struct zx_elem_s* zx_ds_X509IssuerSerial_POP_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X509SerialNumber;
  if (y)
    x->X509SerialNumber = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_ds_X509IssuerSerial_PUSH_X509SerialNumber) */

void zx_ds_X509IssuerSerial_PUSH_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X509SerialNumber->g;
  x->X509SerialNumber = z;
}

/* FUNC(zx_ds_X509IssuerSerial_REV_X509SerialNumber) */

void zx_ds_X509IssuerSerial_REV_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X509SerialNumber;
  if (!y) return;
  x->X509SerialNumber = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X509SerialNumber->g;
    x->X509SerialNumber = y;
    y = nxt;
  }
}

/* FUNC(zx_ds_X509IssuerSerial_PUT_X509SerialNumber) */

void zx_ds_X509IssuerSerial_PUT_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X509SerialNumber;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X509SerialNumber = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_ds_X509IssuerSerial_ADD_X509SerialNumber) */

void zx_ds_X509IssuerSerial_ADD_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X509SerialNumber->g;
    x->X509SerialNumber = z;
    return;
  case -1:
    y = x->X509SerialNumber;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SerialNumber; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_ds_X509IssuerSerial_DEL_X509SerialNumber) */

void zx_ds_X509IssuerSerial_DEL_X509SerialNumber(struct zx_ds_X509IssuerSerial_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509SerialNumber = (struct zx_elem_s*)x->X509SerialNumber->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X509SerialNumber;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X509SerialNumber; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}






/* FUNC(zx_sa_Action_GET_Namespace) */
struct zx_str_s* zx_sa_Action_GET_Namespace(struct zx_sa_Action_s* x) { return x->Namespace; }
/* FUNC(zx_sa_Action_PUT_Namespace) */
void zx_sa_Action_PUT_Namespace(struct zx_sa_Action_s* x, struct zx_str_s* y) { x->Namespace = y; }







/* FUNC(zx_sa_Advice_NUM_AssertionIDRef) */

int zx_sa_Advice_NUM_AssertionIDRef(struct zx_sa_Advice_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_Advice_GET_AssertionIDRef) */

struct zx_elem_s* zx_sa_Advice_GET_AssertionIDRef(struct zx_sa_Advice_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_Advice_POP_AssertionIDRef) */

struct zx_elem_s* zx_sa_Advice_POP_AssertionIDRef(struct zx_sa_Advice_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDRef;
  if (y)
    x->AssertionIDRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_Advice_PUSH_AssertionIDRef) */

void zx_sa_Advice_PUSH_AssertionIDRef(struct zx_sa_Advice_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDRef->g;
  x->AssertionIDRef = z;
}

/* FUNC(zx_sa_Advice_REV_AssertionIDRef) */

void zx_sa_Advice_REV_AssertionIDRef(struct zx_sa_Advice_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionIDRef;
  if (!y) return;
  x->AssertionIDRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Advice_PUT_AssertionIDRef) */

void zx_sa_Advice_PUT_AssertionIDRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionIDRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_Advice_ADD_AssertionIDRef) */

void zx_sa_Advice_ADD_AssertionIDRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = z;
    return;
  case -1:
    y = x->AssertionIDRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_Advice_DEL_AssertionIDRef) */

void zx_sa_Advice_DEL_AssertionIDRef(struct zx_sa_Advice_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRef = (struct zx_elem_s*)x->AssertionIDRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionIDRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_Advice_NUM_AssertionURIRef) */

int zx_sa_Advice_NUM_AssertionURIRef(struct zx_sa_Advice_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionURIRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_Advice_GET_AssertionURIRef) */

struct zx_elem_s* zx_sa_Advice_GET_AssertionURIRef(struct zx_sa_Advice_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionURIRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_Advice_POP_AssertionURIRef) */

struct zx_elem_s* zx_sa_Advice_POP_AssertionURIRef(struct zx_sa_Advice_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionURIRef;
  if (y)
    x->AssertionURIRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_Advice_PUSH_AssertionURIRef) */

void zx_sa_Advice_PUSH_AssertionURIRef(struct zx_sa_Advice_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionURIRef->g;
  x->AssertionURIRef = z;
}

/* FUNC(zx_sa_Advice_REV_AssertionURIRef) */

void zx_sa_Advice_REV_AssertionURIRef(struct zx_sa_Advice_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionURIRef;
  if (!y) return;
  x->AssertionURIRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionURIRef->g;
    x->AssertionURIRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Advice_PUT_AssertionURIRef) */

void zx_sa_Advice_PUT_AssertionURIRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionURIRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionURIRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_Advice_ADD_AssertionURIRef) */

void zx_sa_Advice_ADD_AssertionURIRef(struct zx_sa_Advice_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionURIRef->g;
    x->AssertionURIRef = z;
    return;
  case -1:
    y = x->AssertionURIRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionURIRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_Advice_DEL_AssertionURIRef) */

void zx_sa_Advice_DEL_AssertionURIRef(struct zx_sa_Advice_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionURIRef = (struct zx_elem_s*)x->AssertionURIRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionURIRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionURIRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_Advice_NUM_Assertion) */

int zx_sa_Advice_NUM_Assertion(struct zx_sa_Advice_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Advice_GET_Assertion) */

struct zx_sa_Assertion_s* zx_sa_Advice_GET_Assertion(struct zx_sa_Advice_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Advice_POP_Assertion) */

struct zx_sa_Assertion_s* zx_sa_Advice_POP_Assertion(struct zx_sa_Advice_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Advice_PUSH_Assertion) */

void zx_sa_Advice_PUSH_Assertion(struct zx_sa_Advice_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_sa_Advice_REV_Assertion) */

void zx_sa_Advice_REV_Assertion(struct zx_sa_Advice_s* x)
{
  struct zx_sa_Assertion_s* nxt;
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zx_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Advice_PUT_Assertion) */

void zx_sa_Advice_PUT_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Advice_ADD_Assertion) */

void zx_sa_Advice_ADD_Assertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = z;
    return;
  case -1:
    y = x->Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Advice_DEL_Assertion) */

void zx_sa_Advice_DEL_Assertion(struct zx_sa_Advice_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zx_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Advice_NUM_EncryptedAssertion) */

int zx_sa_Advice_NUM_EncryptedAssertion(struct zx_sa_Advice_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; y; ++n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Advice_GET_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_sa_Advice_GET_EncryptedAssertion(struct zx_sa_Advice_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; n>=0 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Advice_POP_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_sa_Advice_POP_EncryptedAssertion(struct zx_sa_Advice_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  y = x->EncryptedAssertion;
  if (y)
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Advice_PUSH_EncryptedAssertion) */

void zx_sa_Advice_PUSH_EncryptedAssertion(struct zx_sa_Advice_s* x, struct zx_sa_EncryptedAssertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAssertion->gg.g;
  x->EncryptedAssertion = z;
}

/* FUNC(zx_sa_Advice_REV_EncryptedAssertion) */

void zx_sa_Advice_REV_EncryptedAssertion(struct zx_sa_Advice_s* x)
{
  struct zx_sa_EncryptedAssertion_s* nxt;
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  x->EncryptedAssertion = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Advice_PUT_EncryptedAssertion) */

void zx_sa_Advice_PUT_EncryptedAssertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAssertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Advice_ADD_EncryptedAssertion) */

void zx_sa_Advice_ADD_EncryptedAssertion(struct zx_sa_Advice_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = z;
    return;
  case -1:
    y = x->EncryptedAssertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Advice_DEL_EncryptedAssertion) */

void zx_sa_Advice_DEL_EncryptedAssertion(struct zx_sa_Advice_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sa_Assertion_NUM_Issuer) */

int zx_sa_Assertion_NUM_Issuer(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sa_Assertion_GET_Issuer(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sa_Assertion_POP_Issuer(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_Issuer) */

void zx_sa_Assertion_PUSH_Issuer(struct zx_sa_Assertion_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sa_Assertion_REV_Issuer) */

void zx_sa_Assertion_REV_Issuer(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_Issuer) */

void zx_sa_Assertion_PUT_Issuer(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_Issuer) */

void zx_sa_Assertion_ADD_Issuer(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Assertion_DEL_Issuer) */

void zx_sa_Assertion_DEL_Issuer(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Assertion_NUM_Signature) */

int zx_sa_Assertion_NUM_Signature(struct zx_sa_Assertion_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_Signature) */

struct zx_ds_Signature_s* zx_sa_Assertion_GET_Signature(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_Signature) */

struct zx_ds_Signature_s* zx_sa_Assertion_POP_Signature(struct zx_sa_Assertion_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_Signature) */

void zx_sa_Assertion_PUSH_Signature(struct zx_sa_Assertion_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sa_Assertion_REV_Signature) */

void zx_sa_Assertion_REV_Signature(struct zx_sa_Assertion_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_Signature) */

void zx_sa_Assertion_PUT_Signature(struct zx_sa_Assertion_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_Signature) */

void zx_sa_Assertion_ADD_Signature(struct zx_sa_Assertion_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Assertion_DEL_Signature) */

void zx_sa_Assertion_DEL_Signature(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Assertion_NUM_Subject) */

int zx_sa_Assertion_NUM_Subject(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_Subject) */

struct zx_sa_Subject_s* zx_sa_Assertion_GET_Subject(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_Subject) */

struct zx_sa_Subject_s* zx_sa_Assertion_POP_Subject(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_Subject) */

void zx_sa_Assertion_PUSH_Subject(struct zx_sa_Assertion_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sa_Assertion_REV_Subject) */

void zx_sa_Assertion_REV_Subject(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_Subject) */

void zx_sa_Assertion_PUT_Subject(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_Subject) */

void zx_sa_Assertion_ADD_Subject(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Assertion_DEL_Subject) */

void zx_sa_Assertion_DEL_Subject(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Assertion_NUM_Conditions) */

int zx_sa_Assertion_NUM_Conditions(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Conditions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Conditions; y; ++n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_Conditions) */

struct zx_sa_Conditions_s* zx_sa_Assertion_GET_Conditions(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return 0;
  for (y = x->Conditions; n>=0 && y; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_Conditions) */

struct zx_sa_Conditions_s* zx_sa_Assertion_POP_Conditions(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return 0;
  y = x->Conditions;
  if (y)
    x->Conditions = (struct zx_sa_Conditions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_Conditions) */

void zx_sa_Assertion_PUSH_Conditions(struct zx_sa_Assertion_s* x, struct zx_sa_Conditions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Conditions->gg.g;
  x->Conditions = z;
}

/* FUNC(zx_sa_Assertion_REV_Conditions) */

void zx_sa_Assertion_REV_Conditions(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Conditions_s* nxt;
  struct zx_sa_Conditions_s* y;
  if (!x) return;
  y = x->Conditions;
  if (!y) return;
  x->Conditions = 0;
  while (y) {
    nxt = (struct zx_sa_Conditions_s*)y->gg.g.n;
    y->gg.g.n = &x->Conditions->gg.g;
    x->Conditions = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_Conditions) */

void zx_sa_Assertion_PUT_Conditions(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Conditions_s* z)
{
  struct zx_sa_Conditions_s* y;
  if (!x || !z) return;
  y = x->Conditions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Conditions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_Conditions) */

void zx_sa_Assertion_ADD_Conditions(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Conditions_s* z)
{
  struct zx_sa_Conditions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Conditions->gg.g;
    x->Conditions = z;
    return;
  case -1:
    y = x->Conditions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Conditions; n > 1 && y; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Assertion_DEL_Conditions) */

void zx_sa_Assertion_DEL_Conditions(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Conditions = (struct zx_sa_Conditions_s*)x->Conditions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Conditions_s*)x->Conditions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Conditions; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Assertion_NUM_Advice) */

int zx_sa_Assertion_NUM_Advice(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Advice_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Advice; y; ++n, y = (struct zx_sa_Advice_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_Advice) */

struct zx_sa_Advice_s* zx_sa_Assertion_GET_Advice(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_Advice_s* y;
  if (!x) return 0;
  for (y = x->Advice; n>=0 && y; --n, y = (struct zx_sa_Advice_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_Advice) */

struct zx_sa_Advice_s* zx_sa_Assertion_POP_Advice(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Advice_s* y;
  if (!x) return 0;
  y = x->Advice;
  if (y)
    x->Advice = (struct zx_sa_Advice_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_Advice) */

void zx_sa_Assertion_PUSH_Advice(struct zx_sa_Assertion_s* x, struct zx_sa_Advice_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Advice->gg.g;
  x->Advice = z;
}

/* FUNC(zx_sa_Assertion_REV_Advice) */

void zx_sa_Assertion_REV_Advice(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_Advice_s* nxt;
  struct zx_sa_Advice_s* y;
  if (!x) return;
  y = x->Advice;
  if (!y) return;
  x->Advice = 0;
  while (y) {
    nxt = (struct zx_sa_Advice_s*)y->gg.g.n;
    y->gg.g.n = &x->Advice->gg.g;
    x->Advice = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_Advice) */

void zx_sa_Assertion_PUT_Advice(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Advice_s* z)
{
  struct zx_sa_Advice_s* y;
  if (!x || !z) return;
  y = x->Advice;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Advice = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Advice_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_Advice) */

void zx_sa_Assertion_ADD_Advice(struct zx_sa_Assertion_s* x, int n, struct zx_sa_Advice_s* z)
{
  struct zx_sa_Advice_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Advice->gg.g;
    x->Advice = z;
    return;
  case -1:
    y = x->Advice;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Advice_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Advice; n > 1 && y; --n, y = (struct zx_sa_Advice_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Assertion_DEL_Advice) */

void zx_sa_Assertion_DEL_Advice(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_Advice_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Advice = (struct zx_sa_Advice_s*)x->Advice->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Advice_s*)x->Advice;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Advice_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Advice; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Advice_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Assertion_NUM_Statement) */

int zx_sa_Assertion_NUM_Statement(struct zx_sa_Assertion_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Statement; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_Statement) */

struct zx_elem_s* zx_sa_Assertion_GET_Statement(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Statement; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_Statement) */

struct zx_elem_s* zx_sa_Assertion_POP_Statement(struct zx_sa_Assertion_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Statement;
  if (y)
    x->Statement = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_Statement) */

void zx_sa_Assertion_PUSH_Statement(struct zx_sa_Assertion_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Statement->g;
  x->Statement = z;
}

/* FUNC(zx_sa_Assertion_REV_Statement) */

void zx_sa_Assertion_REV_Statement(struct zx_sa_Assertion_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Statement;
  if (!y) return;
  x->Statement = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Statement->g;
    x->Statement = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_Statement) */

void zx_sa_Assertion_PUT_Statement(struct zx_sa_Assertion_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Statement;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Statement = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_Statement) */

void zx_sa_Assertion_ADD_Statement(struct zx_sa_Assertion_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Statement->g;
    x->Statement = z;
    return;
  case -1:
    y = x->Statement;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Statement; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_Assertion_DEL_Statement) */

void zx_sa_Assertion_DEL_Statement(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Statement = (struct zx_elem_s*)x->Statement->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Statement;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Statement; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_Assertion_NUM_AuthnStatement) */

int zx_sa_Assertion_NUM_AuthnStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AuthnStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnStatement; y; ++n, y = (struct zx_sa_AuthnStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_AuthnStatement) */

struct zx_sa_AuthnStatement_s* zx_sa_Assertion_GET_AuthnStatement(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_AuthnStatement_s* y;
  if (!x) return 0;
  for (y = x->AuthnStatement; n>=0 && y; --n, y = (struct zx_sa_AuthnStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_AuthnStatement) */

struct zx_sa_AuthnStatement_s* zx_sa_Assertion_POP_AuthnStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AuthnStatement_s* y;
  if (!x) return 0;
  y = x->AuthnStatement;
  if (y)
    x->AuthnStatement = (struct zx_sa_AuthnStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_AuthnStatement) */

void zx_sa_Assertion_PUSH_AuthnStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AuthnStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnStatement->gg.g;
  x->AuthnStatement = z;
}

/* FUNC(zx_sa_Assertion_REV_AuthnStatement) */

void zx_sa_Assertion_REV_AuthnStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AuthnStatement_s* nxt;
  struct zx_sa_AuthnStatement_s* y;
  if (!x) return;
  y = x->AuthnStatement;
  if (!y) return;
  x->AuthnStatement = 0;
  while (y) {
    nxt = (struct zx_sa_AuthnStatement_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnStatement->gg.g;
    x->AuthnStatement = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_AuthnStatement) */

void zx_sa_Assertion_PUT_AuthnStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthnStatement_s* z)
{
  struct zx_sa_AuthnStatement_s* y;
  if (!x || !z) return;
  y = x->AuthnStatement;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnStatement = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AuthnStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_AuthnStatement) */

void zx_sa_Assertion_ADD_AuthnStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthnStatement_s* z)
{
  struct zx_sa_AuthnStatement_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnStatement->gg.g;
    x->AuthnStatement = z;
    return;
  case -1:
    y = x->AuthnStatement;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_AuthnStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnStatement; n > 1 && y; --n, y = (struct zx_sa_AuthnStatement_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Assertion_DEL_AuthnStatement) */

void zx_sa_Assertion_DEL_AuthnStatement(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_AuthnStatement_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnStatement = (struct zx_sa_AuthnStatement_s*)x->AuthnStatement->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_AuthnStatement_s*)x->AuthnStatement;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_AuthnStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnStatement; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AuthnStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Assertion_NUM_AuthzDecisionStatement) */

int zx_sa_Assertion_NUM_AuthzDecisionStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AuthzDecisionStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthzDecisionStatement; y; ++n, y = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_AuthzDecisionStatement) */

struct zx_sa_AuthzDecisionStatement_s* zx_sa_Assertion_GET_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_AuthzDecisionStatement_s* y;
  if (!x) return 0;
  for (y = x->AuthzDecisionStatement; n>=0 && y; --n, y = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_AuthzDecisionStatement) */

struct zx_sa_AuthzDecisionStatement_s* zx_sa_Assertion_POP_AuthzDecisionStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AuthzDecisionStatement_s* y;
  if (!x) return 0;
  y = x->AuthzDecisionStatement;
  if (y)
    x->AuthzDecisionStatement = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_AuthzDecisionStatement) */

void zx_sa_Assertion_PUSH_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AuthzDecisionStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthzDecisionStatement->gg.g;
  x->AuthzDecisionStatement = z;
}

/* FUNC(zx_sa_Assertion_REV_AuthzDecisionStatement) */

void zx_sa_Assertion_REV_AuthzDecisionStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AuthzDecisionStatement_s* nxt;
  struct zx_sa_AuthzDecisionStatement_s* y;
  if (!x) return;
  y = x->AuthzDecisionStatement;
  if (!y) return;
  x->AuthzDecisionStatement = 0;
  while (y) {
    nxt = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthzDecisionStatement->gg.g;
    x->AuthzDecisionStatement = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_AuthzDecisionStatement) */

void zx_sa_Assertion_PUT_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthzDecisionStatement_s* z)
{
  struct zx_sa_AuthzDecisionStatement_s* y;
  if (!x || !z) return;
  y = x->AuthzDecisionStatement;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthzDecisionStatement = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_AuthzDecisionStatement) */

void zx_sa_Assertion_ADD_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AuthzDecisionStatement_s* z)
{
  struct zx_sa_AuthzDecisionStatement_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthzDecisionStatement->gg.g;
    x->AuthzDecisionStatement = z;
    return;
  case -1:
    y = x->AuthzDecisionStatement;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionStatement; n > 1 && y; --n, y = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Assertion_DEL_AuthzDecisionStatement) */

void zx_sa_Assertion_DEL_AuthzDecisionStatement(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_AuthzDecisionStatement_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthzDecisionStatement = (struct zx_sa_AuthzDecisionStatement_s*)x->AuthzDecisionStatement->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_AuthzDecisionStatement_s*)x->AuthzDecisionStatement;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionStatement; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AuthzDecisionStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Assertion_NUM_AttributeStatement) */

int zx_sa_Assertion_NUM_AttributeStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AttributeStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeStatement; y; ++n, y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Assertion_GET_AttributeStatement) */

struct zx_sa_AttributeStatement_s* zx_sa_Assertion_GET_AttributeStatement(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_AttributeStatement_s* y;
  if (!x) return 0;
  for (y = x->AttributeStatement; n>=0 && y; --n, y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Assertion_POP_AttributeStatement) */

struct zx_sa_AttributeStatement_s* zx_sa_Assertion_POP_AttributeStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AttributeStatement_s* y;
  if (!x) return 0;
  y = x->AttributeStatement;
  if (y)
    x->AttributeStatement = (struct zx_sa_AttributeStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Assertion_PUSH_AttributeStatement) */

void zx_sa_Assertion_PUSH_AttributeStatement(struct zx_sa_Assertion_s* x, struct zx_sa_AttributeStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeStatement->gg.g;
  x->AttributeStatement = z;
}

/* FUNC(zx_sa_Assertion_REV_AttributeStatement) */

void zx_sa_Assertion_REV_AttributeStatement(struct zx_sa_Assertion_s* x)
{
  struct zx_sa_AttributeStatement_s* nxt;
  struct zx_sa_AttributeStatement_s* y;
  if (!x) return;
  y = x->AttributeStatement;
  if (!y) return;
  x->AttributeStatement = 0;
  while (y) {
    nxt = (struct zx_sa_AttributeStatement_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeStatement->gg.g;
    x->AttributeStatement = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Assertion_PUT_AttributeStatement) */

void zx_sa_Assertion_PUT_AttributeStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AttributeStatement_s* z)
{
  struct zx_sa_AttributeStatement_s* y;
  if (!x || !z) return;
  y = x->AttributeStatement;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeStatement = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Assertion_ADD_AttributeStatement) */

void zx_sa_Assertion_ADD_AttributeStatement(struct zx_sa_Assertion_s* x, int n, struct zx_sa_AttributeStatement_s* z)
{
  struct zx_sa_AttributeStatement_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeStatement->gg.g;
    x->AttributeStatement = z;
    return;
  case -1:
    y = x->AttributeStatement;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeStatement; n > 1 && y; --n, y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Assertion_DEL_AttributeStatement) */

void zx_sa_Assertion_DEL_AttributeStatement(struct zx_sa_Assertion_s* x, int n)
{
  struct zx_sa_AttributeStatement_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeStatement = (struct zx_sa_AttributeStatement_s*)x->AttributeStatement->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_AttributeStatement_s*)x->AttributeStatement;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeStatement; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sa_Assertion_GET_Version) */
struct zx_str_s* zx_sa_Assertion_GET_Version(struct zx_sa_Assertion_s* x) { return x->Version; }
/* FUNC(zx_sa_Assertion_PUT_Version) */
void zx_sa_Assertion_PUT_Version(struct zx_sa_Assertion_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sa_Assertion_GET_ID) */
struct zx_str_s* zx_sa_Assertion_GET_ID(struct zx_sa_Assertion_s* x) { return x->ID; }
/* FUNC(zx_sa_Assertion_PUT_ID) */
void zx_sa_Assertion_PUT_ID(struct zx_sa_Assertion_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sa_Assertion_GET_IssueInstant) */
struct zx_str_s* zx_sa_Assertion_GET_IssueInstant(struct zx_sa_Assertion_s* x) { return x->IssueInstant; }
/* FUNC(zx_sa_Assertion_PUT_IssueInstant) */
void zx_sa_Assertion_PUT_IssueInstant(struct zx_sa_Assertion_s* x, struct zx_str_s* y) { x->IssueInstant = y; }







/* FUNC(zx_sa_Attribute_NUM_AttributeValue) */

int zx_sa_Attribute_NUM_AttributeValue(struct zx_sa_Attribute_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_Attribute_GET_AttributeValue) */

struct zx_elem_s* zx_sa_Attribute_GET_AttributeValue(struct zx_sa_Attribute_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_Attribute_POP_AttributeValue) */

struct zx_elem_s* zx_sa_Attribute_POP_AttributeValue(struct zx_sa_Attribute_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_Attribute_PUSH_AttributeValue) */

void zx_sa_Attribute_PUSH_AttributeValue(struct zx_sa_Attribute_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeValue->g;
  x->AttributeValue = z;
}

/* FUNC(zx_sa_Attribute_REV_AttributeValue) */

void zx_sa_Attribute_REV_AttributeValue(struct zx_sa_Attribute_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AttributeValue->g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Attribute_PUT_AttributeValue) */

void zx_sa_Attribute_PUT_AttributeValue(struct zx_sa_Attribute_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_Attribute_ADD_AttributeValue) */

void zx_sa_Attribute_ADD_AttributeValue(struct zx_sa_Attribute_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AttributeValue->g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_Attribute_DEL_AttributeValue) */

void zx_sa_Attribute_DEL_AttributeValue(struct zx_sa_Attribute_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_elem_s*)x->AttributeValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AttributeValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_sa_Attribute_GET_Name) */
struct zx_str_s* zx_sa_Attribute_GET_Name(struct zx_sa_Attribute_s* x) { return x->Name; }
/* FUNC(zx_sa_Attribute_PUT_Name) */
void zx_sa_Attribute_PUT_Name(struct zx_sa_Attribute_s* x, struct zx_str_s* y) { x->Name = y; }
/* FUNC(zx_sa_Attribute_GET_NameFormat) */
struct zx_str_s* zx_sa_Attribute_GET_NameFormat(struct zx_sa_Attribute_s* x) { return x->NameFormat; }
/* FUNC(zx_sa_Attribute_PUT_NameFormat) */
void zx_sa_Attribute_PUT_NameFormat(struct zx_sa_Attribute_s* x, struct zx_str_s* y) { x->NameFormat = y; }
/* FUNC(zx_sa_Attribute_GET_FriendlyName) */
struct zx_str_s* zx_sa_Attribute_GET_FriendlyName(struct zx_sa_Attribute_s* x) { return x->FriendlyName; }
/* FUNC(zx_sa_Attribute_PUT_FriendlyName) */
void zx_sa_Attribute_PUT_FriendlyName(struct zx_sa_Attribute_s* x, struct zx_str_s* y) { x->FriendlyName = y; }







/* FUNC(zx_sa_AttributeStatement_NUM_Attribute) */

int zx_sa_AttributeStatement_NUM_Attribute(struct zx_sa_AttributeStatement_s* x)
{
  struct zx_sa_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_AttributeStatement_GET_Attribute) */

struct zx_sa_Attribute_s* zx_sa_AttributeStatement_GET_Attribute(struct zx_sa_AttributeStatement_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_AttributeStatement_POP_Attribute) */

struct zx_sa_Attribute_s* zx_sa_AttributeStatement_POP_Attribute(struct zx_sa_AttributeStatement_s* x)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_sa_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_AttributeStatement_PUSH_Attribute) */

void zx_sa_AttributeStatement_PUSH_Attribute(struct zx_sa_AttributeStatement_s* x, struct zx_sa_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_sa_AttributeStatement_REV_Attribute) */

void zx_sa_AttributeStatement_REV_Attribute(struct zx_sa_AttributeStatement_s* x)
{
  struct zx_sa_Attribute_s* nxt;
  struct zx_sa_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zx_sa_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AttributeStatement_PUT_Attribute) */

void zx_sa_AttributeStatement_PUT_Attribute(struct zx_sa_AttributeStatement_s* x, int n, struct zx_sa_Attribute_s* z)
{
  struct zx_sa_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_AttributeStatement_ADD_Attribute) */

void zx_sa_AttributeStatement_ADD_Attribute(struct zx_sa_AttributeStatement_s* x, int n, struct zx_sa_Attribute_s* z)
{
  struct zx_sa_Attribute_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = z;
    return;
  case -1:
    y = x->Attribute;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_AttributeStatement_DEL_Attribute) */

void zx_sa_AttributeStatement_DEL_Attribute(struct zx_sa_AttributeStatement_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zx_sa_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_AttributeStatement_NUM_EncryptedAttribute) */

int zx_sa_AttributeStatement_NUM_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x)
{
  struct zx_sa_EncryptedAttribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAttribute; y; ++n, y = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_AttributeStatement_GET_EncryptedAttribute) */

struct zx_sa_EncryptedAttribute_s* zx_sa_AttributeStatement_GET_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, int n)
{
  struct zx_sa_EncryptedAttribute_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAttribute; n>=0 && y; --n, y = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_AttributeStatement_POP_EncryptedAttribute) */

struct zx_sa_EncryptedAttribute_s* zx_sa_AttributeStatement_POP_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x)
{
  struct zx_sa_EncryptedAttribute_s* y;
  if (!x) return 0;
  y = x->EncryptedAttribute;
  if (y)
    x->EncryptedAttribute = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_AttributeStatement_PUSH_EncryptedAttribute) */

void zx_sa_AttributeStatement_PUSH_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, struct zx_sa_EncryptedAttribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAttribute->gg.g;
  x->EncryptedAttribute = z;
}

/* FUNC(zx_sa_AttributeStatement_REV_EncryptedAttribute) */

void zx_sa_AttributeStatement_REV_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x)
{
  struct zx_sa_EncryptedAttribute_s* nxt;
  struct zx_sa_EncryptedAttribute_s* y;
  if (!x) return;
  y = x->EncryptedAttribute;
  if (!y) return;
  x->EncryptedAttribute = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAttribute->gg.g;
    x->EncryptedAttribute = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AttributeStatement_PUT_EncryptedAttribute) */

void zx_sa_AttributeStatement_PUT_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, int n, struct zx_sa_EncryptedAttribute_s* z)
{
  struct zx_sa_EncryptedAttribute_s* y;
  if (!x || !z) return;
  y = x->EncryptedAttribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAttribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_AttributeStatement_ADD_EncryptedAttribute) */

void zx_sa_AttributeStatement_ADD_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, int n, struct zx_sa_EncryptedAttribute_s* z)
{
  struct zx_sa_EncryptedAttribute_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedAttribute->gg.g;
    x->EncryptedAttribute = z;
    return;
  case -1:
    y = x->EncryptedAttribute;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAttribute; n > 1 && y; --n, y = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_AttributeStatement_DEL_EncryptedAttribute) */

void zx_sa_AttributeStatement_DEL_EncryptedAttribute(struct zx_sa_AttributeStatement_s* x, int n)
{
  struct zx_sa_EncryptedAttribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAttribute = (struct zx_sa_EncryptedAttribute_s*)x->EncryptedAttribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedAttribute_s*)x->EncryptedAttribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAttribute; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAttribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sa_AudienceRestriction_NUM_Audience) */

int zx_sa_AudienceRestriction_NUM_Audience(struct zx_sa_AudienceRestriction_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Audience; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_AudienceRestriction_GET_Audience) */

struct zx_elem_s* zx_sa_AudienceRestriction_GET_Audience(struct zx_sa_AudienceRestriction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Audience; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_AudienceRestriction_POP_Audience) */

struct zx_elem_s* zx_sa_AudienceRestriction_POP_Audience(struct zx_sa_AudienceRestriction_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Audience;
  if (y)
    x->Audience = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_AudienceRestriction_PUSH_Audience) */

void zx_sa_AudienceRestriction_PUSH_Audience(struct zx_sa_AudienceRestriction_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Audience->g;
  x->Audience = z;
}

/* FUNC(zx_sa_AudienceRestriction_REV_Audience) */

void zx_sa_AudienceRestriction_REV_Audience(struct zx_sa_AudienceRestriction_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Audience;
  if (!y) return;
  x->Audience = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Audience->g;
    x->Audience = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AudienceRestriction_PUT_Audience) */

void zx_sa_AudienceRestriction_PUT_Audience(struct zx_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Audience;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Audience = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_AudienceRestriction_ADD_Audience) */

void zx_sa_AudienceRestriction_ADD_Audience(struct zx_sa_AudienceRestriction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Audience->g;
    x->Audience = z;
    return;
  case -1:
    y = x->Audience;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Audience; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_AudienceRestriction_DEL_Audience) */

void zx_sa_AudienceRestriction_DEL_Audience(struct zx_sa_AudienceRestriction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Audience = (struct zx_elem_s*)x->Audience->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Audience;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Audience; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_sa_AuthnContext_NUM_AuthnContextClassRef) */

int zx_sa_AuthnContext_NUM_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextClassRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_AuthnContext_GET_AuthnContextClassRef) */

struct zx_elem_s* zx_sa_AuthnContext_GET_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextClassRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_AuthnContext_POP_AuthnContextClassRef) */

struct zx_elem_s* zx_sa_AuthnContext_POP_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextClassRef;
  if (y)
    x->AuthnContextClassRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_AuthnContext_PUSH_AuthnContextClassRef) */

void zx_sa_AuthnContext_PUSH_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextClassRef->g;
  x->AuthnContextClassRef = z;
}

/* FUNC(zx_sa_AuthnContext_REV_AuthnContextClassRef) */

void zx_sa_AuthnContext_REV_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnContextClassRef;
  if (!y) return;
  x->AuthnContextClassRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnContextClassRef->g;
    x->AuthnContextClassRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AuthnContext_PUT_AuthnContextClassRef) */

void zx_sa_AuthnContext_PUT_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnContextClassRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnContextClassRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_AuthnContext_ADD_AuthnContextClassRef) */

void zx_sa_AuthnContext_ADD_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnContextClassRef->g;
    x->AuthnContextClassRef = z;
    return;
  case -1:
    y = x->AuthnContextClassRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextClassRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_AuthnContext_DEL_AuthnContextClassRef) */

void zx_sa_AuthnContext_DEL_AuthnContextClassRef(struct zx_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContextClassRef = (struct zx_elem_s*)x->AuthnContextClassRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnContextClassRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextClassRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_AuthnContext_NUM_AuthnContextDecl) */

int zx_sa_AuthnContext_NUM_AuthnContextDecl(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextDecl; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_AuthnContext_GET_AuthnContextDecl) */

struct zx_elem_s* zx_sa_AuthnContext_GET_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextDecl; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_AuthnContext_POP_AuthnContextDecl) */

struct zx_elem_s* zx_sa_AuthnContext_POP_AuthnContextDecl(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextDecl;
  if (y)
    x->AuthnContextDecl = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_AuthnContext_PUSH_AuthnContextDecl) */

void zx_sa_AuthnContext_PUSH_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextDecl->g;
  x->AuthnContextDecl = z;
}

/* FUNC(zx_sa_AuthnContext_REV_AuthnContextDecl) */

void zx_sa_AuthnContext_REV_AuthnContextDecl(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnContextDecl;
  if (!y) return;
  x->AuthnContextDecl = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnContextDecl->g;
    x->AuthnContextDecl = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AuthnContext_PUT_AuthnContextDecl) */

void zx_sa_AuthnContext_PUT_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnContextDecl;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnContextDecl = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_AuthnContext_ADD_AuthnContextDecl) */

void zx_sa_AuthnContext_ADD_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnContextDecl->g;
    x->AuthnContextDecl = z;
    return;
  case -1:
    y = x->AuthnContextDecl;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDecl; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_AuthnContext_DEL_AuthnContextDecl) */

void zx_sa_AuthnContext_DEL_AuthnContextDecl(struct zx_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContextDecl = (struct zx_elem_s*)x->AuthnContextDecl->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnContextDecl;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDecl; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_AuthnContext_NUM_AuthnContextDeclRef) */

int zx_sa_AuthnContext_NUM_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextDeclRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_AuthnContext_GET_AuthnContextDeclRef) */

struct zx_elem_s* zx_sa_AuthnContext_GET_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextDeclRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_AuthnContext_POP_AuthnContextDeclRef) */

struct zx_elem_s* zx_sa_AuthnContext_POP_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextDeclRef;
  if (y)
    x->AuthnContextDeclRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_AuthnContext_PUSH_AuthnContextDeclRef) */

void zx_sa_AuthnContext_PUSH_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextDeclRef->g;
  x->AuthnContextDeclRef = z;
}

/* FUNC(zx_sa_AuthnContext_REV_AuthnContextDeclRef) */

void zx_sa_AuthnContext_REV_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnContextDeclRef;
  if (!y) return;
  x->AuthnContextDeclRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnContextDeclRef->g;
    x->AuthnContextDeclRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AuthnContext_PUT_AuthnContextDeclRef) */

void zx_sa_AuthnContext_PUT_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnContextDeclRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnContextDeclRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_AuthnContext_ADD_AuthnContextDeclRef) */

void zx_sa_AuthnContext_ADD_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnContextDeclRef->g;
    x->AuthnContextDeclRef = z;
    return;
  case -1:
    y = x->AuthnContextDeclRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDeclRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_AuthnContext_DEL_AuthnContextDeclRef) */

void zx_sa_AuthnContext_DEL_AuthnContextDeclRef(struct zx_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContextDeclRef = (struct zx_elem_s*)x->AuthnContextDeclRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnContextDeclRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDeclRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_AuthnContext_NUM_AuthenticatingAuthority) */

int zx_sa_AuthnContext_NUM_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthenticatingAuthority; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_AuthnContext_GET_AuthenticatingAuthority) */

struct zx_elem_s* zx_sa_AuthnContext_GET_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthenticatingAuthority; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_AuthnContext_POP_AuthenticatingAuthority) */

struct zx_elem_s* zx_sa_AuthnContext_POP_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthenticatingAuthority;
  if (y)
    x->AuthenticatingAuthority = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_AuthnContext_PUSH_AuthenticatingAuthority) */

void zx_sa_AuthnContext_PUSH_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthenticatingAuthority->g;
  x->AuthenticatingAuthority = z;
}

/* FUNC(zx_sa_AuthnContext_REV_AuthenticatingAuthority) */

void zx_sa_AuthnContext_REV_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthenticatingAuthority;
  if (!y) return;
  x->AuthenticatingAuthority = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthenticatingAuthority->g;
    x->AuthenticatingAuthority = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AuthnContext_PUT_AuthenticatingAuthority) */

void zx_sa_AuthnContext_PUT_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthenticatingAuthority;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthenticatingAuthority = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_AuthnContext_ADD_AuthenticatingAuthority) */

void zx_sa_AuthnContext_ADD_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthenticatingAuthority->g;
    x->AuthenticatingAuthority = z;
    return;
  case -1:
    y = x->AuthenticatingAuthority;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthenticatingAuthority; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_AuthnContext_DEL_AuthenticatingAuthority) */

void zx_sa_AuthnContext_DEL_AuthenticatingAuthority(struct zx_sa_AuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthenticatingAuthority = (struct zx_elem_s*)x->AuthenticatingAuthority->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthenticatingAuthority;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthenticatingAuthority; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_sa_AuthnStatement_NUM_SubjectLocality) */

int zx_sa_AuthnStatement_NUM_SubjectLocality(struct zx_sa_AuthnStatement_s* x)
{
  struct zx_sa_SubjectLocality_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectLocality; y; ++n, y = (struct zx_sa_SubjectLocality_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_AuthnStatement_GET_SubjectLocality) */

struct zx_sa_SubjectLocality_s* zx_sa_AuthnStatement_GET_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n)
{
  struct zx_sa_SubjectLocality_s* y;
  if (!x) return 0;
  for (y = x->SubjectLocality; n>=0 && y; --n, y = (struct zx_sa_SubjectLocality_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_AuthnStatement_POP_SubjectLocality) */

struct zx_sa_SubjectLocality_s* zx_sa_AuthnStatement_POP_SubjectLocality(struct zx_sa_AuthnStatement_s* x)
{
  struct zx_sa_SubjectLocality_s* y;
  if (!x) return 0;
  y = x->SubjectLocality;
  if (y)
    x->SubjectLocality = (struct zx_sa_SubjectLocality_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_AuthnStatement_PUSH_SubjectLocality) */

void zx_sa_AuthnStatement_PUSH_SubjectLocality(struct zx_sa_AuthnStatement_s* x, struct zx_sa_SubjectLocality_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectLocality->gg.g;
  x->SubjectLocality = z;
}

/* FUNC(zx_sa_AuthnStatement_REV_SubjectLocality) */

void zx_sa_AuthnStatement_REV_SubjectLocality(struct zx_sa_AuthnStatement_s* x)
{
  struct zx_sa_SubjectLocality_s* nxt;
  struct zx_sa_SubjectLocality_s* y;
  if (!x) return;
  y = x->SubjectLocality;
  if (!y) return;
  x->SubjectLocality = 0;
  while (y) {
    nxt = (struct zx_sa_SubjectLocality_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectLocality->gg.g;
    x->SubjectLocality = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AuthnStatement_PUT_SubjectLocality) */

void zx_sa_AuthnStatement_PUT_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_SubjectLocality_s* z)
{
  struct zx_sa_SubjectLocality_s* y;
  if (!x || !z) return;
  y = x->SubjectLocality;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectLocality = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_SubjectLocality_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_AuthnStatement_ADD_SubjectLocality) */

void zx_sa_AuthnStatement_ADD_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_SubjectLocality_s* z)
{
  struct zx_sa_SubjectLocality_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectLocality->gg.g;
    x->SubjectLocality = z;
    return;
  case -1:
    y = x->SubjectLocality;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_SubjectLocality_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectLocality; n > 1 && y; --n, y = (struct zx_sa_SubjectLocality_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_AuthnStatement_DEL_SubjectLocality) */

void zx_sa_AuthnStatement_DEL_SubjectLocality(struct zx_sa_AuthnStatement_s* x, int n)
{
  struct zx_sa_SubjectLocality_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectLocality = (struct zx_sa_SubjectLocality_s*)x->SubjectLocality->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_SubjectLocality_s*)x->SubjectLocality;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_SubjectLocality_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectLocality; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_SubjectLocality_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_AuthnStatement_NUM_AuthnContext) */

int zx_sa_AuthnStatement_NUM_AuthnContext(struct zx_sa_AuthnStatement_s* x)
{
  struct zx_sa_AuthnContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContext; y; ++n, y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_AuthnStatement_GET_AuthnContext) */

struct zx_sa_AuthnContext_s* zx_sa_AuthnStatement_GET_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n)
{
  struct zx_sa_AuthnContext_s* y;
  if (!x) return 0;
  for (y = x->AuthnContext; n>=0 && y; --n, y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_AuthnStatement_POP_AuthnContext) */

struct zx_sa_AuthnContext_s* zx_sa_AuthnStatement_POP_AuthnContext(struct zx_sa_AuthnStatement_s* x)
{
  struct zx_sa_AuthnContext_s* y;
  if (!x) return 0;
  y = x->AuthnContext;
  if (y)
    x->AuthnContext = (struct zx_sa_AuthnContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_AuthnStatement_PUSH_AuthnContext) */

void zx_sa_AuthnStatement_PUSH_AuthnContext(struct zx_sa_AuthnStatement_s* x, struct zx_sa_AuthnContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnContext->gg.g;
  x->AuthnContext = z;
}

/* FUNC(zx_sa_AuthnStatement_REV_AuthnContext) */

void zx_sa_AuthnStatement_REV_AuthnContext(struct zx_sa_AuthnStatement_s* x)
{
  struct zx_sa_AuthnContext_s* nxt;
  struct zx_sa_AuthnContext_s* y;
  if (!x) return;
  y = x->AuthnContext;
  if (!y) return;
  x->AuthnContext = 0;
  while (y) {
    nxt = (struct zx_sa_AuthnContext_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnContext->gg.g;
    x->AuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AuthnStatement_PUT_AuthnContext) */

void zx_sa_AuthnStatement_PUT_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_AuthnContext_s* z)
{
  struct zx_sa_AuthnContext_s* y;
  if (!x || !z) return;
  y = x->AuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_AuthnStatement_ADD_AuthnContext) */

void zx_sa_AuthnStatement_ADD_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n, struct zx_sa_AuthnContext_s* z)
{
  struct zx_sa_AuthnContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnContext->gg.g;
    x->AuthnContext = z;
    return;
  case -1:
    y = x->AuthnContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnContext; n > 1 && y; --n, y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_AuthnStatement_DEL_AuthnContext) */

void zx_sa_AuthnStatement_DEL_AuthnContext(struct zx_sa_AuthnStatement_s* x, int n)
{
  struct zx_sa_AuthnContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContext = (struct zx_sa_AuthnContext_s*)x->AuthnContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_AuthnContext_s*)x->AuthnContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnContext; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sa_AuthnStatement_GET_AuthnInstant) */
struct zx_str_s* zx_sa_AuthnStatement_GET_AuthnInstant(struct zx_sa_AuthnStatement_s* x) { return x->AuthnInstant; }
/* FUNC(zx_sa_AuthnStatement_PUT_AuthnInstant) */
void zx_sa_AuthnStatement_PUT_AuthnInstant(struct zx_sa_AuthnStatement_s* x, struct zx_str_s* y) { x->AuthnInstant = y; }
/* FUNC(zx_sa_AuthnStatement_GET_SessionIndex) */
struct zx_str_s* zx_sa_AuthnStatement_GET_SessionIndex(struct zx_sa_AuthnStatement_s* x) { return x->SessionIndex; }
/* FUNC(zx_sa_AuthnStatement_PUT_SessionIndex) */
void zx_sa_AuthnStatement_PUT_SessionIndex(struct zx_sa_AuthnStatement_s* x, struct zx_str_s* y) { x->SessionIndex = y; }
/* FUNC(zx_sa_AuthnStatement_GET_SessionNotOnOrAfter) */
struct zx_str_s* zx_sa_AuthnStatement_GET_SessionNotOnOrAfter(struct zx_sa_AuthnStatement_s* x) { return x->SessionNotOnOrAfter; }
/* FUNC(zx_sa_AuthnStatement_PUT_SessionNotOnOrAfter) */
void zx_sa_AuthnStatement_PUT_SessionNotOnOrAfter(struct zx_sa_AuthnStatement_s* x, struct zx_str_s* y) { x->SessionNotOnOrAfter = y; }







/* FUNC(zx_sa_AuthzDecisionStatement_NUM_Action) */

int zx_sa_AuthzDecisionStatement_NUM_Action(struct zx_sa_AuthzDecisionStatement_s* x)
{
  struct zx_sa_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_AuthzDecisionStatement_GET_Action) */

struct zx_sa_Action_s* zx_sa_AuthzDecisionStatement_GET_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n)
{
  struct zx_sa_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_AuthzDecisionStatement_POP_Action) */

struct zx_sa_Action_s* zx_sa_AuthzDecisionStatement_POP_Action(struct zx_sa_AuthzDecisionStatement_s* x)
{
  struct zx_sa_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_sa_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_AuthzDecisionStatement_PUSH_Action) */

void zx_sa_AuthzDecisionStatement_PUSH_Action(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_sa_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_sa_AuthzDecisionStatement_REV_Action) */

void zx_sa_AuthzDecisionStatement_REV_Action(struct zx_sa_AuthzDecisionStatement_s* x)
{
  struct zx_sa_Action_s* nxt;
  struct zx_sa_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_sa_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AuthzDecisionStatement_PUT_Action) */

void zx_sa_AuthzDecisionStatement_PUT_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Action_s* z)
{
  struct zx_sa_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_AuthzDecisionStatement_ADD_Action) */

void zx_sa_AuthzDecisionStatement_ADD_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Action_s* z)
{
  struct zx_sa_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_AuthzDecisionStatement_DEL_Action) */

void zx_sa_AuthzDecisionStatement_DEL_Action(struct zx_sa_AuthzDecisionStatement_s* x, int n)
{
  struct zx_sa_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_sa_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_AuthzDecisionStatement_NUM_Evidence) */

int zx_sa_AuthzDecisionStatement_NUM_Evidence(struct zx_sa_AuthzDecisionStatement_s* x)
{
  struct zx_sa_Evidence_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Evidence; y; ++n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_AuthzDecisionStatement_GET_Evidence) */

struct zx_sa_Evidence_s* zx_sa_AuthzDecisionStatement_GET_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return 0;
  for (y = x->Evidence; n>=0 && y; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_AuthzDecisionStatement_POP_Evidence) */

struct zx_sa_Evidence_s* zx_sa_AuthzDecisionStatement_POP_Evidence(struct zx_sa_AuthzDecisionStatement_s* x)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return 0;
  y = x->Evidence;
  if (y)
    x->Evidence = (struct zx_sa_Evidence_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_AuthzDecisionStatement_PUSH_Evidence) */

void zx_sa_AuthzDecisionStatement_PUSH_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_sa_Evidence_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Evidence->gg.g;
  x->Evidence = z;
}

/* FUNC(zx_sa_AuthzDecisionStatement_REV_Evidence) */

void zx_sa_AuthzDecisionStatement_REV_Evidence(struct zx_sa_AuthzDecisionStatement_s* x)
{
  struct zx_sa_Evidence_s* nxt;
  struct zx_sa_Evidence_s* y;
  if (!x) return;
  y = x->Evidence;
  if (!y) return;
  x->Evidence = 0;
  while (y) {
    nxt = (struct zx_sa_Evidence_s*)y->gg.g.n;
    y->gg.g.n = &x->Evidence->gg.g;
    x->Evidence = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_AuthzDecisionStatement_PUT_Evidence) */

void zx_sa_AuthzDecisionStatement_PUT_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Evidence_s* z)
{
  struct zx_sa_Evidence_s* y;
  if (!x || !z) return;
  y = x->Evidence;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Evidence = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_AuthzDecisionStatement_ADD_Evidence) */

void zx_sa_AuthzDecisionStatement_ADD_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n, struct zx_sa_Evidence_s* z)
{
  struct zx_sa_Evidence_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Evidence->gg.g;
    x->Evidence = z;
    return;
  case -1:
    y = x->Evidence;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_AuthzDecisionStatement_DEL_Evidence) */

void zx_sa_AuthzDecisionStatement_DEL_Evidence(struct zx_sa_AuthzDecisionStatement_s* x, int n)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Evidence = (struct zx_sa_Evidence_s*)x->Evidence->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Evidence_s*)x->Evidence;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sa_AuthzDecisionStatement_GET_Resource) */
struct zx_str_s* zx_sa_AuthzDecisionStatement_GET_Resource(struct zx_sa_AuthzDecisionStatement_s* x) { return x->Resource; }
/* FUNC(zx_sa_AuthzDecisionStatement_PUT_Resource) */
void zx_sa_AuthzDecisionStatement_PUT_Resource(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_str_s* y) { x->Resource = y; }
/* FUNC(zx_sa_AuthzDecisionStatement_GET_Decision) */
struct zx_str_s* zx_sa_AuthzDecisionStatement_GET_Decision(struct zx_sa_AuthzDecisionStatement_s* x) { return x->Decision; }
/* FUNC(zx_sa_AuthzDecisionStatement_PUT_Decision) */
void zx_sa_AuthzDecisionStatement_PUT_Decision(struct zx_sa_AuthzDecisionStatement_s* x, struct zx_str_s* y) { x->Decision = y; }





/* FUNC(zx_sa_BaseID_GET_NameQualifier) */
struct zx_str_s* zx_sa_BaseID_GET_NameQualifier(struct zx_sa_BaseID_s* x) { return x->NameQualifier; }
/* FUNC(zx_sa_BaseID_PUT_NameQualifier) */
void zx_sa_BaseID_PUT_NameQualifier(struct zx_sa_BaseID_s* x, struct zx_str_s* y) { x->NameQualifier = y; }
/* FUNC(zx_sa_BaseID_GET_SPNameQualifier) */
struct zx_str_s* zx_sa_BaseID_GET_SPNameQualifier(struct zx_sa_BaseID_s* x) { return x->SPNameQualifier; }
/* FUNC(zx_sa_BaseID_PUT_SPNameQualifier) */
void zx_sa_BaseID_PUT_SPNameQualifier(struct zx_sa_BaseID_s* x, struct zx_str_s* y) { x->SPNameQualifier = y; }







/* FUNC(zx_sa_Conditions_NUM_Condition) */

int zx_sa_Conditions_NUM_Condition(struct zx_sa_Conditions_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Condition; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_Conditions_GET_Condition) */

struct zx_elem_s* zx_sa_Conditions_GET_Condition(struct zx_sa_Conditions_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Condition; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_Conditions_POP_Condition) */

struct zx_elem_s* zx_sa_Conditions_POP_Condition(struct zx_sa_Conditions_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Condition;
  if (y)
    x->Condition = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_Conditions_PUSH_Condition) */

void zx_sa_Conditions_PUSH_Condition(struct zx_sa_Conditions_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Condition->g;
  x->Condition = z;
}

/* FUNC(zx_sa_Conditions_REV_Condition) */

void zx_sa_Conditions_REV_Condition(struct zx_sa_Conditions_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Condition;
  if (!y) return;
  x->Condition = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Condition->g;
    x->Condition = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Conditions_PUT_Condition) */

void zx_sa_Conditions_PUT_Condition(struct zx_sa_Conditions_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Condition;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Condition = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_Conditions_ADD_Condition) */

void zx_sa_Conditions_ADD_Condition(struct zx_sa_Conditions_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Condition->g;
    x->Condition = z;
    return;
  case -1:
    y = x->Condition;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Condition; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_Conditions_DEL_Condition) */

void zx_sa_Conditions_DEL_Condition(struct zx_sa_Conditions_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Condition = (struct zx_elem_s*)x->Condition->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Condition;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Condition; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_Conditions_NUM_AudienceRestriction) */

int zx_sa_Conditions_NUM_AudienceRestriction(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_AudienceRestriction_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AudienceRestriction; y; ++n, y = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Conditions_GET_AudienceRestriction) */

struct zx_sa_AudienceRestriction_s* zx_sa_Conditions_GET_AudienceRestriction(struct zx_sa_Conditions_s* x, int n)
{
  struct zx_sa_AudienceRestriction_s* y;
  if (!x) return 0;
  for (y = x->AudienceRestriction; n>=0 && y; --n, y = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Conditions_POP_AudienceRestriction) */

struct zx_sa_AudienceRestriction_s* zx_sa_Conditions_POP_AudienceRestriction(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_AudienceRestriction_s* y;
  if (!x) return 0;
  y = x->AudienceRestriction;
  if (y)
    x->AudienceRestriction = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Conditions_PUSH_AudienceRestriction) */

void zx_sa_Conditions_PUSH_AudienceRestriction(struct zx_sa_Conditions_s* x, struct zx_sa_AudienceRestriction_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AudienceRestriction->gg.g;
  x->AudienceRestriction = z;
}

/* FUNC(zx_sa_Conditions_REV_AudienceRestriction) */

void zx_sa_Conditions_REV_AudienceRestriction(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_AudienceRestriction_s* nxt;
  struct zx_sa_AudienceRestriction_s* y;
  if (!x) return;
  y = x->AudienceRestriction;
  if (!y) return;
  x->AudienceRestriction = 0;
  while (y) {
    nxt = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n;
    y->gg.g.n = &x->AudienceRestriction->gg.g;
    x->AudienceRestriction = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Conditions_PUT_AudienceRestriction) */

void zx_sa_Conditions_PUT_AudienceRestriction(struct zx_sa_Conditions_s* x, int n, struct zx_sa_AudienceRestriction_s* z)
{
  struct zx_sa_AudienceRestriction_s* y;
  if (!x || !z) return;
  y = x->AudienceRestriction;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AudienceRestriction = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Conditions_ADD_AudienceRestriction) */

void zx_sa_Conditions_ADD_AudienceRestriction(struct zx_sa_Conditions_s* x, int n, struct zx_sa_AudienceRestriction_s* z)
{
  struct zx_sa_AudienceRestriction_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AudienceRestriction->gg.g;
    x->AudienceRestriction = z;
    return;
  case -1:
    y = x->AudienceRestriction;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AudienceRestriction; n > 1 && y; --n, y = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Conditions_DEL_AudienceRestriction) */

void zx_sa_Conditions_DEL_AudienceRestriction(struct zx_sa_Conditions_s* x, int n)
{
  struct zx_sa_AudienceRestriction_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AudienceRestriction = (struct zx_sa_AudienceRestriction_s*)x->AudienceRestriction->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_AudienceRestriction_s*)x->AudienceRestriction;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AudienceRestriction; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_AudienceRestriction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Conditions_NUM_OneTimeUse) */

int zx_sa_Conditions_NUM_OneTimeUse(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_OneTimeUse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OneTimeUse; y; ++n, y = (struct zx_sa_OneTimeUse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Conditions_GET_OneTimeUse) */

struct zx_sa_OneTimeUse_s* zx_sa_Conditions_GET_OneTimeUse(struct zx_sa_Conditions_s* x, int n)
{
  struct zx_sa_OneTimeUse_s* y;
  if (!x) return 0;
  for (y = x->OneTimeUse; n>=0 && y; --n, y = (struct zx_sa_OneTimeUse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Conditions_POP_OneTimeUse) */

struct zx_sa_OneTimeUse_s* zx_sa_Conditions_POP_OneTimeUse(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_OneTimeUse_s* y;
  if (!x) return 0;
  y = x->OneTimeUse;
  if (y)
    x->OneTimeUse = (struct zx_sa_OneTimeUse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Conditions_PUSH_OneTimeUse) */

void zx_sa_Conditions_PUSH_OneTimeUse(struct zx_sa_Conditions_s* x, struct zx_sa_OneTimeUse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OneTimeUse->gg.g;
  x->OneTimeUse = z;
}

/* FUNC(zx_sa_Conditions_REV_OneTimeUse) */

void zx_sa_Conditions_REV_OneTimeUse(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_OneTimeUse_s* nxt;
  struct zx_sa_OneTimeUse_s* y;
  if (!x) return;
  y = x->OneTimeUse;
  if (!y) return;
  x->OneTimeUse = 0;
  while (y) {
    nxt = (struct zx_sa_OneTimeUse_s*)y->gg.g.n;
    y->gg.g.n = &x->OneTimeUse->gg.g;
    x->OneTimeUse = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Conditions_PUT_OneTimeUse) */

void zx_sa_Conditions_PUT_OneTimeUse(struct zx_sa_Conditions_s* x, int n, struct zx_sa_OneTimeUse_s* z)
{
  struct zx_sa_OneTimeUse_s* y;
  if (!x || !z) return;
  y = x->OneTimeUse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OneTimeUse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_OneTimeUse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Conditions_ADD_OneTimeUse) */

void zx_sa_Conditions_ADD_OneTimeUse(struct zx_sa_Conditions_s* x, int n, struct zx_sa_OneTimeUse_s* z)
{
  struct zx_sa_OneTimeUse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OneTimeUse->gg.g;
    x->OneTimeUse = z;
    return;
  case -1:
    y = x->OneTimeUse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_OneTimeUse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OneTimeUse; n > 1 && y; --n, y = (struct zx_sa_OneTimeUse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Conditions_DEL_OneTimeUse) */

void zx_sa_Conditions_DEL_OneTimeUse(struct zx_sa_Conditions_s* x, int n)
{
  struct zx_sa_OneTimeUse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OneTimeUse = (struct zx_sa_OneTimeUse_s*)x->OneTimeUse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_OneTimeUse_s*)x->OneTimeUse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_OneTimeUse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OneTimeUse; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_OneTimeUse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Conditions_NUM_ProxyRestriction) */

int zx_sa_Conditions_NUM_ProxyRestriction(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_ProxyRestriction_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxyRestriction; y; ++n, y = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Conditions_GET_ProxyRestriction) */

struct zx_sa_ProxyRestriction_s* zx_sa_Conditions_GET_ProxyRestriction(struct zx_sa_Conditions_s* x, int n)
{
  struct zx_sa_ProxyRestriction_s* y;
  if (!x) return 0;
  for (y = x->ProxyRestriction; n>=0 && y; --n, y = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Conditions_POP_ProxyRestriction) */

struct zx_sa_ProxyRestriction_s* zx_sa_Conditions_POP_ProxyRestriction(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_ProxyRestriction_s* y;
  if (!x) return 0;
  y = x->ProxyRestriction;
  if (y)
    x->ProxyRestriction = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Conditions_PUSH_ProxyRestriction) */

void zx_sa_Conditions_PUSH_ProxyRestriction(struct zx_sa_Conditions_s* x, struct zx_sa_ProxyRestriction_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProxyRestriction->gg.g;
  x->ProxyRestriction = z;
}

/* FUNC(zx_sa_Conditions_REV_ProxyRestriction) */

void zx_sa_Conditions_REV_ProxyRestriction(struct zx_sa_Conditions_s* x)
{
  struct zx_sa_ProxyRestriction_s* nxt;
  struct zx_sa_ProxyRestriction_s* y;
  if (!x) return;
  y = x->ProxyRestriction;
  if (!y) return;
  x->ProxyRestriction = 0;
  while (y) {
    nxt = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n;
    y->gg.g.n = &x->ProxyRestriction->gg.g;
    x->ProxyRestriction = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Conditions_PUT_ProxyRestriction) */

void zx_sa_Conditions_PUT_ProxyRestriction(struct zx_sa_Conditions_s* x, int n, struct zx_sa_ProxyRestriction_s* z)
{
  struct zx_sa_ProxyRestriction_s* y;
  if (!x || !z) return;
  y = x->ProxyRestriction;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProxyRestriction = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Conditions_ADD_ProxyRestriction) */

void zx_sa_Conditions_ADD_ProxyRestriction(struct zx_sa_Conditions_s* x, int n, struct zx_sa_ProxyRestriction_s* z)
{
  struct zx_sa_ProxyRestriction_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProxyRestriction->gg.g;
    x->ProxyRestriction = z;
    return;
  case -1:
    y = x->ProxyRestriction;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyRestriction; n > 1 && y; --n, y = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Conditions_DEL_ProxyRestriction) */

void zx_sa_Conditions_DEL_ProxyRestriction(struct zx_sa_Conditions_s* x, int n)
{
  struct zx_sa_ProxyRestriction_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxyRestriction = (struct zx_sa_ProxyRestriction_s*)x->ProxyRestriction->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_ProxyRestriction_s*)x->ProxyRestriction;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyRestriction; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_ProxyRestriction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sa_Conditions_GET_NotBefore) */
struct zx_str_s* zx_sa_Conditions_GET_NotBefore(struct zx_sa_Conditions_s* x) { return x->NotBefore; }
/* FUNC(zx_sa_Conditions_PUT_NotBefore) */
void zx_sa_Conditions_PUT_NotBefore(struct zx_sa_Conditions_s* x, struct zx_str_s* y) { x->NotBefore = y; }
/* FUNC(zx_sa_Conditions_GET_NotOnOrAfter) */
struct zx_str_s* zx_sa_Conditions_GET_NotOnOrAfter(struct zx_sa_Conditions_s* x) { return x->NotOnOrAfter; }
/* FUNC(zx_sa_Conditions_PUT_NotOnOrAfter) */
void zx_sa_Conditions_PUT_NotOnOrAfter(struct zx_sa_Conditions_s* x, struct zx_str_s* y) { x->NotOnOrAfter = y; }







/* FUNC(zx_sa_EncryptedAssertion_NUM_EncryptedData) */

int zx_sa_EncryptedAssertion_NUM_EncryptedData(struct zx_sa_EncryptedAssertion_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_EncryptedAssertion_GET_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedAssertion_GET_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_EncryptedAssertion_POP_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedAssertion_POP_EncryptedData(struct zx_sa_EncryptedAssertion_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_EncryptedAssertion_PUSH_EncryptedData) */

void zx_sa_EncryptedAssertion_PUSH_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, struct zx_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zx_sa_EncryptedAssertion_REV_EncryptedData) */

void zx_sa_EncryptedAssertion_REV_EncryptedData(struct zx_sa_EncryptedAssertion_s* x)
{
  struct zx_xenc_EncryptedData_s* nxt;
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_EncryptedAssertion_PUT_EncryptedData) */

void zx_sa_EncryptedAssertion_PUT_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_EncryptedAssertion_ADD_EncryptedData) */

void zx_sa_EncryptedAssertion_ADD_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_EncryptedAssertion_DEL_EncryptedData) */

void zx_sa_EncryptedAssertion_DEL_EncryptedData(struct zx_sa_EncryptedAssertion_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_EncryptedAssertion_NUM_EncryptedKey) */

int zx_sa_EncryptedAssertion_NUM_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_EncryptedAssertion_GET_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedAssertion_GET_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_EncryptedAssertion_POP_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedAssertion_POP_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_EncryptedAssertion_PUSH_EncryptedKey) */

void zx_sa_EncryptedAssertion_PUSH_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, struct zx_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zx_sa_EncryptedAssertion_REV_EncryptedKey) */

void zx_sa_EncryptedAssertion_REV_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x)
{
  struct zx_xenc_EncryptedKey_s* nxt;
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_EncryptedAssertion_PUT_EncryptedKey) */

void zx_sa_EncryptedAssertion_PUT_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_EncryptedAssertion_ADD_EncryptedKey) */

void zx_sa_EncryptedAssertion_ADD_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_EncryptedAssertion_DEL_EncryptedKey) */

void zx_sa_EncryptedAssertion_DEL_EncryptedKey(struct zx_sa_EncryptedAssertion_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sa_EncryptedAttribute_NUM_EncryptedData) */

int zx_sa_EncryptedAttribute_NUM_EncryptedData(struct zx_sa_EncryptedAttribute_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_EncryptedAttribute_GET_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedAttribute_GET_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_EncryptedAttribute_POP_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedAttribute_POP_EncryptedData(struct zx_sa_EncryptedAttribute_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_EncryptedAttribute_PUSH_EncryptedData) */

void zx_sa_EncryptedAttribute_PUSH_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, struct zx_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zx_sa_EncryptedAttribute_REV_EncryptedData) */

void zx_sa_EncryptedAttribute_REV_EncryptedData(struct zx_sa_EncryptedAttribute_s* x)
{
  struct zx_xenc_EncryptedData_s* nxt;
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_EncryptedAttribute_PUT_EncryptedData) */

void zx_sa_EncryptedAttribute_PUT_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_EncryptedAttribute_ADD_EncryptedData) */

void zx_sa_EncryptedAttribute_ADD_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_EncryptedAttribute_DEL_EncryptedData) */

void zx_sa_EncryptedAttribute_DEL_EncryptedData(struct zx_sa_EncryptedAttribute_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_EncryptedAttribute_NUM_EncryptedKey) */

int zx_sa_EncryptedAttribute_NUM_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_EncryptedAttribute_GET_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedAttribute_GET_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_EncryptedAttribute_POP_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedAttribute_POP_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_EncryptedAttribute_PUSH_EncryptedKey) */

void zx_sa_EncryptedAttribute_PUSH_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, struct zx_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zx_sa_EncryptedAttribute_REV_EncryptedKey) */

void zx_sa_EncryptedAttribute_REV_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x)
{
  struct zx_xenc_EncryptedKey_s* nxt;
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_EncryptedAttribute_PUT_EncryptedKey) */

void zx_sa_EncryptedAttribute_PUT_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_EncryptedAttribute_ADD_EncryptedKey) */

void zx_sa_EncryptedAttribute_ADD_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_EncryptedAttribute_DEL_EncryptedKey) */

void zx_sa_EncryptedAttribute_DEL_EncryptedKey(struct zx_sa_EncryptedAttribute_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sa_EncryptedID_NUM_EncryptedData) */

int zx_sa_EncryptedID_NUM_EncryptedData(struct zx_sa_EncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_EncryptedID_GET_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedID_GET_EncryptedData(struct zx_sa_EncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_EncryptedID_POP_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sa_EncryptedID_POP_EncryptedData(struct zx_sa_EncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_EncryptedID_PUSH_EncryptedData) */

void zx_sa_EncryptedID_PUSH_EncryptedData(struct zx_sa_EncryptedID_s* x, struct zx_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zx_sa_EncryptedID_REV_EncryptedData) */

void zx_sa_EncryptedID_REV_EncryptedData(struct zx_sa_EncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* nxt;
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_EncryptedID_PUT_EncryptedData) */

void zx_sa_EncryptedID_PUT_EncryptedData(struct zx_sa_EncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_EncryptedID_ADD_EncryptedData) */

void zx_sa_EncryptedID_ADD_EncryptedData(struct zx_sa_EncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_EncryptedID_DEL_EncryptedData) */

void zx_sa_EncryptedID_DEL_EncryptedData(struct zx_sa_EncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_EncryptedID_NUM_EncryptedKey) */

int zx_sa_EncryptedID_NUM_EncryptedKey(struct zx_sa_EncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_EncryptedID_GET_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedID_GET_EncryptedKey(struct zx_sa_EncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_EncryptedID_POP_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sa_EncryptedID_POP_EncryptedKey(struct zx_sa_EncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_EncryptedID_PUSH_EncryptedKey) */

void zx_sa_EncryptedID_PUSH_EncryptedKey(struct zx_sa_EncryptedID_s* x, struct zx_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zx_sa_EncryptedID_REV_EncryptedKey) */

void zx_sa_EncryptedID_REV_EncryptedKey(struct zx_sa_EncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* nxt;
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_EncryptedID_PUT_EncryptedKey) */

void zx_sa_EncryptedID_PUT_EncryptedKey(struct zx_sa_EncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_EncryptedID_ADD_EncryptedKey) */

void zx_sa_EncryptedID_ADD_EncryptedKey(struct zx_sa_EncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_EncryptedID_DEL_EncryptedKey) */

void zx_sa_EncryptedID_DEL_EncryptedKey(struct zx_sa_EncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sa_Evidence_NUM_AssertionIDRef) */

int zx_sa_Evidence_NUM_AssertionIDRef(struct zx_sa_Evidence_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_Evidence_GET_AssertionIDRef) */

struct zx_elem_s* zx_sa_Evidence_GET_AssertionIDRef(struct zx_sa_Evidence_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_Evidence_POP_AssertionIDRef) */

struct zx_elem_s* zx_sa_Evidence_POP_AssertionIDRef(struct zx_sa_Evidence_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDRef;
  if (y)
    x->AssertionIDRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_Evidence_PUSH_AssertionIDRef) */

void zx_sa_Evidence_PUSH_AssertionIDRef(struct zx_sa_Evidence_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDRef->g;
  x->AssertionIDRef = z;
}

/* FUNC(zx_sa_Evidence_REV_AssertionIDRef) */

void zx_sa_Evidence_REV_AssertionIDRef(struct zx_sa_Evidence_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionIDRef;
  if (!y) return;
  x->AssertionIDRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Evidence_PUT_AssertionIDRef) */

void zx_sa_Evidence_PUT_AssertionIDRef(struct zx_sa_Evidence_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionIDRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_Evidence_ADD_AssertionIDRef) */

void zx_sa_Evidence_ADD_AssertionIDRef(struct zx_sa_Evidence_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = z;
    return;
  case -1:
    y = x->AssertionIDRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_Evidence_DEL_AssertionIDRef) */

void zx_sa_Evidence_DEL_AssertionIDRef(struct zx_sa_Evidence_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRef = (struct zx_elem_s*)x->AssertionIDRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionIDRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_Evidence_NUM_AssertionURIRef) */

int zx_sa_Evidence_NUM_AssertionURIRef(struct zx_sa_Evidence_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionURIRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_Evidence_GET_AssertionURIRef) */

struct zx_elem_s* zx_sa_Evidence_GET_AssertionURIRef(struct zx_sa_Evidence_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionURIRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_Evidence_POP_AssertionURIRef) */

struct zx_elem_s* zx_sa_Evidence_POP_AssertionURIRef(struct zx_sa_Evidence_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionURIRef;
  if (y)
    x->AssertionURIRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_Evidence_PUSH_AssertionURIRef) */

void zx_sa_Evidence_PUSH_AssertionURIRef(struct zx_sa_Evidence_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionURIRef->g;
  x->AssertionURIRef = z;
}

/* FUNC(zx_sa_Evidence_REV_AssertionURIRef) */

void zx_sa_Evidence_REV_AssertionURIRef(struct zx_sa_Evidence_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionURIRef;
  if (!y) return;
  x->AssertionURIRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionURIRef->g;
    x->AssertionURIRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Evidence_PUT_AssertionURIRef) */

void zx_sa_Evidence_PUT_AssertionURIRef(struct zx_sa_Evidence_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionURIRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionURIRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_Evidence_ADD_AssertionURIRef) */

void zx_sa_Evidence_ADD_AssertionURIRef(struct zx_sa_Evidence_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionURIRef->g;
    x->AssertionURIRef = z;
    return;
  case -1:
    y = x->AssertionURIRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionURIRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_Evidence_DEL_AssertionURIRef) */

void zx_sa_Evidence_DEL_AssertionURIRef(struct zx_sa_Evidence_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionURIRef = (struct zx_elem_s*)x->AssertionURIRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionURIRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionURIRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sa_Evidence_NUM_Assertion) */

int zx_sa_Evidence_NUM_Assertion(struct zx_sa_Evidence_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Evidence_GET_Assertion) */

struct zx_sa_Assertion_s* zx_sa_Evidence_GET_Assertion(struct zx_sa_Evidence_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Evidence_POP_Assertion) */

struct zx_sa_Assertion_s* zx_sa_Evidence_POP_Assertion(struct zx_sa_Evidence_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Evidence_PUSH_Assertion) */

void zx_sa_Evidence_PUSH_Assertion(struct zx_sa_Evidence_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_sa_Evidence_REV_Assertion) */

void zx_sa_Evidence_REV_Assertion(struct zx_sa_Evidence_s* x)
{
  struct zx_sa_Assertion_s* nxt;
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zx_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Evidence_PUT_Assertion) */

void zx_sa_Evidence_PUT_Assertion(struct zx_sa_Evidence_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Evidence_ADD_Assertion) */

void zx_sa_Evidence_ADD_Assertion(struct zx_sa_Evidence_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = z;
    return;
  case -1:
    y = x->Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Evidence_DEL_Assertion) */

void zx_sa_Evidence_DEL_Assertion(struct zx_sa_Evidence_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zx_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Evidence_NUM_EncryptedAssertion) */

int zx_sa_Evidence_NUM_EncryptedAssertion(struct zx_sa_Evidence_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; y; ++n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Evidence_GET_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_sa_Evidence_GET_EncryptedAssertion(struct zx_sa_Evidence_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; n>=0 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Evidence_POP_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_sa_Evidence_POP_EncryptedAssertion(struct zx_sa_Evidence_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  y = x->EncryptedAssertion;
  if (y)
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Evidence_PUSH_EncryptedAssertion) */

void zx_sa_Evidence_PUSH_EncryptedAssertion(struct zx_sa_Evidence_s* x, struct zx_sa_EncryptedAssertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAssertion->gg.g;
  x->EncryptedAssertion = z;
}

/* FUNC(zx_sa_Evidence_REV_EncryptedAssertion) */

void zx_sa_Evidence_REV_EncryptedAssertion(struct zx_sa_Evidence_s* x)
{
  struct zx_sa_EncryptedAssertion_s* nxt;
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  x->EncryptedAssertion = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Evidence_PUT_EncryptedAssertion) */

void zx_sa_Evidence_PUT_EncryptedAssertion(struct zx_sa_Evidence_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAssertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Evidence_ADD_EncryptedAssertion) */

void zx_sa_Evidence_ADD_EncryptedAssertion(struct zx_sa_Evidence_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = z;
    return;
  case -1:
    y = x->EncryptedAssertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Evidence_DEL_EncryptedAssertion) */

void zx_sa_Evidence_DEL_EncryptedAssertion(struct zx_sa_Evidence_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}






/* FUNC(zx_sa_Issuer_GET_NameQualifier) */
struct zx_str_s* zx_sa_Issuer_GET_NameQualifier(struct zx_sa_Issuer_s* x) { return x->NameQualifier; }
/* FUNC(zx_sa_Issuer_PUT_NameQualifier) */
void zx_sa_Issuer_PUT_NameQualifier(struct zx_sa_Issuer_s* x, struct zx_str_s* y) { x->NameQualifier = y; }
/* FUNC(zx_sa_Issuer_GET_SPNameQualifier) */
struct zx_str_s* zx_sa_Issuer_GET_SPNameQualifier(struct zx_sa_Issuer_s* x) { return x->SPNameQualifier; }
/* FUNC(zx_sa_Issuer_PUT_SPNameQualifier) */
void zx_sa_Issuer_PUT_SPNameQualifier(struct zx_sa_Issuer_s* x, struct zx_str_s* y) { x->SPNameQualifier = y; }
/* FUNC(zx_sa_Issuer_GET_Format) */
struct zx_str_s* zx_sa_Issuer_GET_Format(struct zx_sa_Issuer_s* x) { return x->Format; }
/* FUNC(zx_sa_Issuer_PUT_Format) */
void zx_sa_Issuer_PUT_Format(struct zx_sa_Issuer_s* x, struct zx_str_s* y) { x->Format = y; }
/* FUNC(zx_sa_Issuer_GET_SPProvidedID) */
struct zx_str_s* zx_sa_Issuer_GET_SPProvidedID(struct zx_sa_Issuer_s* x) { return x->SPProvidedID; }
/* FUNC(zx_sa_Issuer_PUT_SPProvidedID) */
void zx_sa_Issuer_PUT_SPProvidedID(struct zx_sa_Issuer_s* x, struct zx_str_s* y) { x->SPProvidedID = y; }





/* FUNC(zx_sa_NameID_GET_NameQualifier) */
struct zx_str_s* zx_sa_NameID_GET_NameQualifier(struct zx_sa_NameID_s* x) { return x->NameQualifier; }
/* FUNC(zx_sa_NameID_PUT_NameQualifier) */
void zx_sa_NameID_PUT_NameQualifier(struct zx_sa_NameID_s* x, struct zx_str_s* y) { x->NameQualifier = y; }
/* FUNC(zx_sa_NameID_GET_SPNameQualifier) */
struct zx_str_s* zx_sa_NameID_GET_SPNameQualifier(struct zx_sa_NameID_s* x) { return x->SPNameQualifier; }
/* FUNC(zx_sa_NameID_PUT_SPNameQualifier) */
void zx_sa_NameID_PUT_SPNameQualifier(struct zx_sa_NameID_s* x, struct zx_str_s* y) { x->SPNameQualifier = y; }
/* FUNC(zx_sa_NameID_GET_Format) */
struct zx_str_s* zx_sa_NameID_GET_Format(struct zx_sa_NameID_s* x) { return x->Format; }
/* FUNC(zx_sa_NameID_PUT_Format) */
void zx_sa_NameID_PUT_Format(struct zx_sa_NameID_s* x, struct zx_str_s* y) { x->Format = y; }
/* FUNC(zx_sa_NameID_GET_SPProvidedID) */
struct zx_str_s* zx_sa_NameID_GET_SPProvidedID(struct zx_sa_NameID_s* x) { return x->SPProvidedID; }
/* FUNC(zx_sa_NameID_PUT_SPProvidedID) */
void zx_sa_NameID_PUT_SPProvidedID(struct zx_sa_NameID_s* x, struct zx_str_s* y) { x->SPProvidedID = y; }












/* FUNC(zx_sa_ProxyRestriction_NUM_Audience) */

int zx_sa_ProxyRestriction_NUM_Audience(struct zx_sa_ProxyRestriction_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Audience; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_ProxyRestriction_GET_Audience) */

struct zx_elem_s* zx_sa_ProxyRestriction_GET_Audience(struct zx_sa_ProxyRestriction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Audience; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_ProxyRestriction_POP_Audience) */

struct zx_elem_s* zx_sa_ProxyRestriction_POP_Audience(struct zx_sa_ProxyRestriction_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Audience;
  if (y)
    x->Audience = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_ProxyRestriction_PUSH_Audience) */

void zx_sa_ProxyRestriction_PUSH_Audience(struct zx_sa_ProxyRestriction_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Audience->g;
  x->Audience = z;
}

/* FUNC(zx_sa_ProxyRestriction_REV_Audience) */

void zx_sa_ProxyRestriction_REV_Audience(struct zx_sa_ProxyRestriction_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Audience;
  if (!y) return;
  x->Audience = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Audience->g;
    x->Audience = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_ProxyRestriction_PUT_Audience) */

void zx_sa_ProxyRestriction_PUT_Audience(struct zx_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Audience;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Audience = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_ProxyRestriction_ADD_Audience) */

void zx_sa_ProxyRestriction_ADD_Audience(struct zx_sa_ProxyRestriction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Audience->g;
    x->Audience = z;
    return;
  case -1:
    y = x->Audience;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Audience; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_ProxyRestriction_DEL_Audience) */

void zx_sa_ProxyRestriction_DEL_Audience(struct zx_sa_ProxyRestriction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Audience = (struct zx_elem_s*)x->Audience->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Audience;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Audience; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_sa_ProxyRestriction_GET_Count) */
struct zx_str_s* zx_sa_ProxyRestriction_GET_Count(struct zx_sa_ProxyRestriction_s* x) { return x->Count; }
/* FUNC(zx_sa_ProxyRestriction_PUT_Count) */
void zx_sa_ProxyRestriction_PUT_Count(struct zx_sa_ProxyRestriction_s* x, struct zx_str_s* y) { x->Count = y; }







/* FUNC(zx_sa_Subject_NUM_BaseID) */

int zx_sa_Subject_NUM_BaseID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_BaseID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BaseID; y; ++n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Subject_GET_BaseID) */

struct zx_sa_BaseID_s* zx_sa_Subject_GET_BaseID(struct zx_sa_Subject_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  for (y = x->BaseID; n>=0 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Subject_POP_BaseID) */

struct zx_sa_BaseID_s* zx_sa_Subject_POP_BaseID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  y = x->BaseID;
  if (y)
    x->BaseID = (struct zx_sa_BaseID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Subject_PUSH_BaseID) */

void zx_sa_Subject_PUSH_BaseID(struct zx_sa_Subject_s* x, struct zx_sa_BaseID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BaseID->gg.g;
  x->BaseID = z;
}

/* FUNC(zx_sa_Subject_REV_BaseID) */

void zx_sa_Subject_REV_BaseID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_BaseID_s* nxt;
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  y = x->BaseID;
  if (!y) return;
  x->BaseID = 0;
  while (y) {
    nxt = (struct zx_sa_BaseID_s*)y->gg.g.n;
    y->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Subject_PUT_BaseID) */

void zx_sa_Subject_PUT_BaseID(struct zx_sa_Subject_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  y = x->BaseID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BaseID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Subject_ADD_BaseID) */

void zx_sa_Subject_ADD_BaseID(struct zx_sa_Subject_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = z;
    return;
  case -1:
    y = x->BaseID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Subject_DEL_BaseID) */

void zx_sa_Subject_DEL_BaseID(struct zx_sa_Subject_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BaseID = (struct zx_sa_BaseID_s*)x->BaseID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_BaseID_s*)x->BaseID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Subject_NUM_NameID) */

int zx_sa_Subject_NUM_NameID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Subject_GET_NameID) */

struct zx_sa_NameID_s* zx_sa_Subject_GET_NameID(struct zx_sa_Subject_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Subject_POP_NameID) */

struct zx_sa_NameID_s* zx_sa_Subject_POP_NameID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Subject_PUSH_NameID) */

void zx_sa_Subject_PUSH_NameID(struct zx_sa_Subject_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sa_Subject_REV_NameID) */

void zx_sa_Subject_REV_NameID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Subject_PUT_NameID) */

void zx_sa_Subject_PUT_NameID(struct zx_sa_Subject_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Subject_ADD_NameID) */

void zx_sa_Subject_ADD_NameID(struct zx_sa_Subject_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Subject_DEL_NameID) */

void zx_sa_Subject_DEL_NameID(struct zx_sa_Subject_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Subject_NUM_EncryptedID) */

int zx_sa_Subject_NUM_EncryptedID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Subject_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sa_Subject_GET_EncryptedID(struct zx_sa_Subject_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Subject_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sa_Subject_POP_EncryptedID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Subject_PUSH_EncryptedID) */

void zx_sa_Subject_PUSH_EncryptedID(struct zx_sa_Subject_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sa_Subject_REV_EncryptedID) */

void zx_sa_Subject_REV_EncryptedID(struct zx_sa_Subject_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Subject_PUT_EncryptedID) */

void zx_sa_Subject_PUT_EncryptedID(struct zx_sa_Subject_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Subject_ADD_EncryptedID) */

void zx_sa_Subject_ADD_EncryptedID(struct zx_sa_Subject_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Subject_DEL_EncryptedID) */

void zx_sa_Subject_DEL_EncryptedID(struct zx_sa_Subject_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_Subject_NUM_SubjectConfirmation) */

int zx_sa_Subject_NUM_SubjectConfirmation(struct zx_sa_Subject_s* x)
{
  struct zx_sa_SubjectConfirmation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectConfirmation; y; ++n, y = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_Subject_GET_SubjectConfirmation) */

struct zx_sa_SubjectConfirmation_s* zx_sa_Subject_GET_SubjectConfirmation(struct zx_sa_Subject_s* x, int n)
{
  struct zx_sa_SubjectConfirmation_s* y;
  if (!x) return 0;
  for (y = x->SubjectConfirmation; n>=0 && y; --n, y = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_Subject_POP_SubjectConfirmation) */

struct zx_sa_SubjectConfirmation_s* zx_sa_Subject_POP_SubjectConfirmation(struct zx_sa_Subject_s* x)
{
  struct zx_sa_SubjectConfirmation_s* y;
  if (!x) return 0;
  y = x->SubjectConfirmation;
  if (y)
    x->SubjectConfirmation = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_Subject_PUSH_SubjectConfirmation) */

void zx_sa_Subject_PUSH_SubjectConfirmation(struct zx_sa_Subject_s* x, struct zx_sa_SubjectConfirmation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectConfirmation->gg.g;
  x->SubjectConfirmation = z;
}

/* FUNC(zx_sa_Subject_REV_SubjectConfirmation) */

void zx_sa_Subject_REV_SubjectConfirmation(struct zx_sa_Subject_s* x)
{
  struct zx_sa_SubjectConfirmation_s* nxt;
  struct zx_sa_SubjectConfirmation_s* y;
  if (!x) return;
  y = x->SubjectConfirmation;
  if (!y) return;
  x->SubjectConfirmation = 0;
  while (y) {
    nxt = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectConfirmation->gg.g;
    x->SubjectConfirmation = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_Subject_PUT_SubjectConfirmation) */

void zx_sa_Subject_PUT_SubjectConfirmation(struct zx_sa_Subject_s* x, int n, struct zx_sa_SubjectConfirmation_s* z)
{
  struct zx_sa_SubjectConfirmation_s* y;
  if (!x || !z) return;
  y = x->SubjectConfirmation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectConfirmation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_Subject_ADD_SubjectConfirmation) */

void zx_sa_Subject_ADD_SubjectConfirmation(struct zx_sa_Subject_s* x, int n, struct zx_sa_SubjectConfirmation_s* z)
{
  struct zx_sa_SubjectConfirmation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectConfirmation->gg.g;
    x->SubjectConfirmation = z;
    return;
  case -1:
    y = x->SubjectConfirmation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmation; n > 1 && y; --n, y = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_Subject_DEL_SubjectConfirmation) */

void zx_sa_Subject_DEL_SubjectConfirmation(struct zx_sa_Subject_s* x, int n)
{
  struct zx_sa_SubjectConfirmation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectConfirmation = (struct zx_sa_SubjectConfirmation_s*)x->SubjectConfirmation->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_SubjectConfirmation_s*)x->SubjectConfirmation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmation; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sa_SubjectConfirmation_NUM_BaseID) */

int zx_sa_SubjectConfirmation_NUM_BaseID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_BaseID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BaseID; y; ++n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_SubjectConfirmation_GET_BaseID) */

struct zx_sa_BaseID_s* zx_sa_SubjectConfirmation_GET_BaseID(struct zx_sa_SubjectConfirmation_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  for (y = x->BaseID; n>=0 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_SubjectConfirmation_POP_BaseID) */

struct zx_sa_BaseID_s* zx_sa_SubjectConfirmation_POP_BaseID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  y = x->BaseID;
  if (y)
    x->BaseID = (struct zx_sa_BaseID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_SubjectConfirmation_PUSH_BaseID) */

void zx_sa_SubjectConfirmation_PUSH_BaseID(struct zx_sa_SubjectConfirmation_s* x, struct zx_sa_BaseID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BaseID->gg.g;
  x->BaseID = z;
}

/* FUNC(zx_sa_SubjectConfirmation_REV_BaseID) */

void zx_sa_SubjectConfirmation_REV_BaseID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_BaseID_s* nxt;
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  y = x->BaseID;
  if (!y) return;
  x->BaseID = 0;
  while (y) {
    nxt = (struct zx_sa_BaseID_s*)y->gg.g.n;
    y->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_SubjectConfirmation_PUT_BaseID) */

void zx_sa_SubjectConfirmation_PUT_BaseID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  y = x->BaseID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BaseID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_SubjectConfirmation_ADD_BaseID) */

void zx_sa_SubjectConfirmation_ADD_BaseID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = z;
    return;
  case -1:
    y = x->BaseID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_SubjectConfirmation_DEL_BaseID) */

void zx_sa_SubjectConfirmation_DEL_BaseID(struct zx_sa_SubjectConfirmation_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BaseID = (struct zx_sa_BaseID_s*)x->BaseID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_BaseID_s*)x->BaseID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_SubjectConfirmation_NUM_NameID) */

int zx_sa_SubjectConfirmation_NUM_NameID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_SubjectConfirmation_GET_NameID) */

struct zx_sa_NameID_s* zx_sa_SubjectConfirmation_GET_NameID(struct zx_sa_SubjectConfirmation_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_SubjectConfirmation_POP_NameID) */

struct zx_sa_NameID_s* zx_sa_SubjectConfirmation_POP_NameID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_SubjectConfirmation_PUSH_NameID) */

void zx_sa_SubjectConfirmation_PUSH_NameID(struct zx_sa_SubjectConfirmation_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sa_SubjectConfirmation_REV_NameID) */

void zx_sa_SubjectConfirmation_REV_NameID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_SubjectConfirmation_PUT_NameID) */

void zx_sa_SubjectConfirmation_PUT_NameID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_SubjectConfirmation_ADD_NameID) */

void zx_sa_SubjectConfirmation_ADD_NameID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_SubjectConfirmation_DEL_NameID) */

void zx_sa_SubjectConfirmation_DEL_NameID(struct zx_sa_SubjectConfirmation_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_SubjectConfirmation_NUM_EncryptedID) */

int zx_sa_SubjectConfirmation_NUM_EncryptedID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_SubjectConfirmation_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sa_SubjectConfirmation_GET_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_SubjectConfirmation_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sa_SubjectConfirmation_POP_EncryptedID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_SubjectConfirmation_PUSH_EncryptedID) */

void zx_sa_SubjectConfirmation_PUSH_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sa_SubjectConfirmation_REV_EncryptedID) */

void zx_sa_SubjectConfirmation_REV_EncryptedID(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_SubjectConfirmation_PUT_EncryptedID) */

void zx_sa_SubjectConfirmation_PUT_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_SubjectConfirmation_ADD_EncryptedID) */

void zx_sa_SubjectConfirmation_ADD_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_SubjectConfirmation_DEL_EncryptedID) */

void zx_sa_SubjectConfirmation_DEL_EncryptedID(struct zx_sa_SubjectConfirmation_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sa_SubjectConfirmation_NUM_SubjectConfirmationData) */

int zx_sa_SubjectConfirmation_NUM_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_SubjectConfirmationData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectConfirmationData; y; ++n, y = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sa_SubjectConfirmation_GET_SubjectConfirmationData) */

struct zx_sa_SubjectConfirmationData_s* zx_sa_SubjectConfirmation_GET_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, int n)
{
  struct zx_sa_SubjectConfirmationData_s* y;
  if (!x) return 0;
  for (y = x->SubjectConfirmationData; n>=0 && y; --n, y = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sa_SubjectConfirmation_POP_SubjectConfirmationData) */

struct zx_sa_SubjectConfirmationData_s* zx_sa_SubjectConfirmation_POP_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_SubjectConfirmationData_s* y;
  if (!x) return 0;
  y = x->SubjectConfirmationData;
  if (y)
    x->SubjectConfirmationData = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sa_SubjectConfirmation_PUSH_SubjectConfirmationData) */

void zx_sa_SubjectConfirmation_PUSH_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, struct zx_sa_SubjectConfirmationData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectConfirmationData->gg.g;
  x->SubjectConfirmationData = z;
}

/* FUNC(zx_sa_SubjectConfirmation_REV_SubjectConfirmationData) */

void zx_sa_SubjectConfirmation_REV_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x)
{
  struct zx_sa_SubjectConfirmationData_s* nxt;
  struct zx_sa_SubjectConfirmationData_s* y;
  if (!x) return;
  y = x->SubjectConfirmationData;
  if (!y) return;
  x->SubjectConfirmationData = 0;
  while (y) {
    nxt = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectConfirmationData->gg.g;
    x->SubjectConfirmationData = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_SubjectConfirmation_PUT_SubjectConfirmationData) */

void zx_sa_SubjectConfirmation_PUT_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_SubjectConfirmationData_s* z)
{
  struct zx_sa_SubjectConfirmationData_s* y;
  if (!x || !z) return;
  y = x->SubjectConfirmationData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectConfirmationData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sa_SubjectConfirmation_ADD_SubjectConfirmationData) */

void zx_sa_SubjectConfirmation_ADD_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, int n, struct zx_sa_SubjectConfirmationData_s* z)
{
  struct zx_sa_SubjectConfirmationData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectConfirmationData->gg.g;
    x->SubjectConfirmationData = z;
    return;
  case -1:
    y = x->SubjectConfirmationData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmationData; n > 1 && y; --n, y = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sa_SubjectConfirmation_DEL_SubjectConfirmationData) */

void zx_sa_SubjectConfirmation_DEL_SubjectConfirmationData(struct zx_sa_SubjectConfirmation_s* x, int n)
{
  struct zx_sa_SubjectConfirmationData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectConfirmationData = (struct zx_sa_SubjectConfirmationData_s*)x->SubjectConfirmationData->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_SubjectConfirmationData_s*)x->SubjectConfirmationData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmationData; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_SubjectConfirmationData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sa_SubjectConfirmation_GET_Method) */
struct zx_str_s* zx_sa_SubjectConfirmation_GET_Method(struct zx_sa_SubjectConfirmation_s* x) { return x->Method; }
/* FUNC(zx_sa_SubjectConfirmation_PUT_Method) */
void zx_sa_SubjectConfirmation_PUT_Method(struct zx_sa_SubjectConfirmation_s* x, struct zx_str_s* y) { x->Method = y; }





/* FUNC(zx_sa_SubjectConfirmationData_GET_NotBefore) */
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_NotBefore(struct zx_sa_SubjectConfirmationData_s* x) { return x->NotBefore; }
/* FUNC(zx_sa_SubjectConfirmationData_PUT_NotBefore) */
void zx_sa_SubjectConfirmationData_PUT_NotBefore(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->NotBefore = y; }
/* FUNC(zx_sa_SubjectConfirmationData_GET_NotOnOrAfter) */
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_NotOnOrAfter(struct zx_sa_SubjectConfirmationData_s* x) { return x->NotOnOrAfter; }
/* FUNC(zx_sa_SubjectConfirmationData_PUT_NotOnOrAfter) */
void zx_sa_SubjectConfirmationData_PUT_NotOnOrAfter(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->NotOnOrAfter = y; }
/* FUNC(zx_sa_SubjectConfirmationData_GET_Recipient) */
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_Recipient(struct zx_sa_SubjectConfirmationData_s* x) { return x->Recipient; }
/* FUNC(zx_sa_SubjectConfirmationData_PUT_Recipient) */
void zx_sa_SubjectConfirmationData_PUT_Recipient(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->Recipient = y; }
/* FUNC(zx_sa_SubjectConfirmationData_GET_InResponseTo) */
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_InResponseTo(struct zx_sa_SubjectConfirmationData_s* x) { return x->InResponseTo; }
/* FUNC(zx_sa_SubjectConfirmationData_PUT_InResponseTo) */
void zx_sa_SubjectConfirmationData_PUT_InResponseTo(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->InResponseTo = y; }
/* FUNC(zx_sa_SubjectConfirmationData_GET_Address) */
struct zx_str_s* zx_sa_SubjectConfirmationData_GET_Address(struct zx_sa_SubjectConfirmationData_s* x) { return x->Address; }
/* FUNC(zx_sa_SubjectConfirmationData_PUT_Address) */
void zx_sa_SubjectConfirmationData_PUT_Address(struct zx_sa_SubjectConfirmationData_s* x, struct zx_str_s* y) { x->Address = y; }





/* FUNC(zx_sa_SubjectLocality_GET_Address) */
struct zx_str_s* zx_sa_SubjectLocality_GET_Address(struct zx_sa_SubjectLocality_s* x) { return x->Address; }
/* FUNC(zx_sa_SubjectLocality_PUT_Address) */
void zx_sa_SubjectLocality_PUT_Address(struct zx_sa_SubjectLocality_s* x, struct zx_str_s* y) { x->Address = y; }
/* FUNC(zx_sa_SubjectLocality_GET_DNSName) */
struct zx_str_s* zx_sa_SubjectLocality_GET_DNSName(struct zx_sa_SubjectLocality_s* x) { return x->DNSName; }
/* FUNC(zx_sa_SubjectLocality_PUT_DNSName) */
void zx_sa_SubjectLocality_PUT_DNSName(struct zx_sa_SubjectLocality_s* x, struct zx_str_s* y) { x->DNSName = y; }







/* FUNC(zx_sa_TestElem_NUM_AttributeValue) */

int zx_sa_TestElem_NUM_AttributeValue(struct zx_sa_TestElem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sa_TestElem_GET_AttributeValue) */

struct zx_elem_s* zx_sa_TestElem_GET_AttributeValue(struct zx_sa_TestElem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sa_TestElem_POP_AttributeValue) */

struct zx_elem_s* zx_sa_TestElem_POP_AttributeValue(struct zx_sa_TestElem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sa_TestElem_PUSH_AttributeValue) */

void zx_sa_TestElem_PUSH_AttributeValue(struct zx_sa_TestElem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeValue->g;
  x->AttributeValue = z;
}

/* FUNC(zx_sa_TestElem_REV_AttributeValue) */

void zx_sa_TestElem_REV_AttributeValue(struct zx_sa_TestElem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AttributeValue->g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zx_sa_TestElem_PUT_AttributeValue) */

void zx_sa_TestElem_PUT_AttributeValue(struct zx_sa_TestElem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sa_TestElem_ADD_AttributeValue) */

void zx_sa_TestElem_ADD_AttributeValue(struct zx_sa_TestElem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AttributeValue->g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sa_TestElem_DEL_AttributeValue) */

void zx_sa_TestElem_DEL_AttributeValue(struct zx_sa_TestElem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_elem_s*)x->AttributeValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AttributeValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_se_Body_NUM_ArtifactResolve) */

int zx_se_Body_NUM_ArtifactResolve(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResolve; y; ++n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ArtifactResolve) */

struct zx_sp_ArtifactResolve_s* zx_se_Body_GET_ArtifactResolve(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResolve; n>=0 && y; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ArtifactResolve) */

struct zx_sp_ArtifactResolve_s* zx_se_Body_POP_ArtifactResolve(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return 0;
  y = x->ArtifactResolve;
  if (y)
    x->ArtifactResolve = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ArtifactResolve) */

void zx_se_Body_PUSH_ArtifactResolve(struct zx_se_Body_s* x, struct zx_sp_ArtifactResolve_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResolve->gg.g;
  x->ArtifactResolve = z;
}

/* FUNC(zx_se_Body_REV_ArtifactResolve) */

void zx_se_Body_REV_ArtifactResolve(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* nxt;
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return;
  y = x->ArtifactResolve;
  if (!y) return;
  x->ArtifactResolve = 0;
  while (y) {
    nxt = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResolve->gg.g;
    x->ArtifactResolve = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ArtifactResolve) */

void zx_se_Body_PUT_ArtifactResolve(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x || !z) return;
  y = x->ArtifactResolve;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResolve = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ArtifactResolve) */

void zx_se_Body_ADD_ArtifactResolve(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ArtifactResolve->gg.g;
    x->ArtifactResolve = z;
    return;
  case -1:
    y = x->ArtifactResolve;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolve; n > 1 && y; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ArtifactResolve) */

void zx_se_Body_DEL_ArtifactResolve(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResolve = (struct zx_sp_ArtifactResolve_s*)x->ArtifactResolve->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ArtifactResolve_s*)x->ArtifactResolve;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolve; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_ArtifactResponse) */

int zx_se_Body_NUM_ArtifactResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResponse; y; ++n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ArtifactResponse) */

struct zx_sp_ArtifactResponse_s* zx_se_Body_GET_ArtifactResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResponse; n>=0 && y; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ArtifactResponse) */

struct zx_sp_ArtifactResponse_s* zx_se_Body_POP_ArtifactResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return 0;
  y = x->ArtifactResponse;
  if (y)
    x->ArtifactResponse = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ArtifactResponse) */

void zx_se_Body_PUSH_ArtifactResponse(struct zx_se_Body_s* x, struct zx_sp_ArtifactResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResponse->gg.g;
  x->ArtifactResponse = z;
}

/* FUNC(zx_se_Body_REV_ArtifactResponse) */

void zx_se_Body_REV_ArtifactResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* nxt;
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return;
  y = x->ArtifactResponse;
  if (!y) return;
  x->ArtifactResponse = 0;
  while (y) {
    nxt = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResponse->gg.g;
    x->ArtifactResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ArtifactResponse) */

void zx_se_Body_PUT_ArtifactResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x || !z) return;
  y = x->ArtifactResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ArtifactResponse) */

void zx_se_Body_ADD_ArtifactResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ArtifactResponse->gg.g;
    x->ArtifactResponse = z;
    return;
  case -1:
    y = x->ArtifactResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResponse; n > 1 && y; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ArtifactResponse) */

void zx_se_Body_DEL_ArtifactResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResponse = (struct zx_sp_ArtifactResponse_s*)x->ArtifactResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ArtifactResponse_s*)x->ArtifactResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_ManageNameIDRequest) */

int zx_se_Body_NUM_ManageNameIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; y; ++n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_se_Body_GET_ManageNameIDRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_se_Body_POP_ManageNameIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  y = x->ManageNameIDRequest;
  if (y)
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ManageNameIDRequest) */

void zx_se_Body_PUSH_ManageNameIDRequest(struct zx_se_Body_s* x, struct zx_sp_ManageNameIDRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDRequest->gg.g;
  x->ManageNameIDRequest = z;
}

/* FUNC(zx_se_Body_REV_ManageNameIDRequest) */

void zx_se_Body_REV_ManageNameIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* nxt;
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  x->ManageNameIDRequest = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ManageNameIDRequest) */

void zx_se_Body_PUT_ManageNameIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ManageNameIDRequest) */

void zx_se_Body_ADD_ManageNameIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = z;
    return;
  case -1:
    y = x->ManageNameIDRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ManageNameIDRequest) */

void zx_se_Body_DEL_ManageNameIDRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_ManageNameIDResponse) */

int zx_se_Body_NUM_ManageNameIDResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; y; ++n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_se_Body_GET_ManageNameIDResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_se_Body_POP_ManageNameIDResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  y = x->ManageNameIDResponse;
  if (y)
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ManageNameIDResponse) */

void zx_se_Body_PUSH_ManageNameIDResponse(struct zx_se_Body_s* x, struct zx_sp_ManageNameIDResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDResponse->gg.g;
  x->ManageNameIDResponse = z;
}

/* FUNC(zx_se_Body_REV_ManageNameIDResponse) */

void zx_se_Body_REV_ManageNameIDResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* nxt;
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  x->ManageNameIDResponse = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ManageNameIDResponse) */

void zx_se_Body_PUT_ManageNameIDResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ManageNameIDResponse) */

void zx_se_Body_ADD_ManageNameIDResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = z;
    return;
  case -1:
    y = x->ManageNameIDResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ManageNameIDResponse) */

void zx_se_Body_DEL_ManageNameIDResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_LogoutRequest) */

int zx_se_Body_NUM_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutRequest; y; ++n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_se_Body_GET_LogoutRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  for (y = x->LogoutRequest; n>=0 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_se_Body_POP_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  y = x->LogoutRequest;
  if (y)
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_LogoutRequest) */

void zx_se_Body_PUSH_LogoutRequest(struct zx_se_Body_s* x, struct zx_sp_LogoutRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutRequest->gg.g;
  x->LogoutRequest = z;
}

/* FUNC(zx_se_Body_REV_LogoutRequest) */

void zx_se_Body_REV_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* nxt;
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  y = x->LogoutRequest;
  if (!y) return;
  x->LogoutRequest = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_LogoutRequest) */

void zx_se_Body_PUT_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  y = x->LogoutRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_LogoutRequest) */

void zx_se_Body_ADD_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = z;
    return;
  case -1:
    y = x->LogoutRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_LogoutRequest) */

void zx_se_Body_DEL_LogoutRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_LogoutResponse) */

int zx_se_Body_NUM_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutResponse; y; ++n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_se_Body_GET_LogoutResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  for (y = x->LogoutResponse; n>=0 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_se_Body_POP_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  y = x->LogoutResponse;
  if (y)
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_LogoutResponse) */

void zx_se_Body_PUSH_LogoutResponse(struct zx_se_Body_s* x, struct zx_sp_LogoutResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutResponse->gg.g;
  x->LogoutResponse = z;
}

/* FUNC(zx_se_Body_REV_LogoutResponse) */

void zx_se_Body_REV_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* nxt;
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  y = x->LogoutResponse;
  if (!y) return;
  x->LogoutResponse = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_LogoutResponse) */

void zx_se_Body_PUT_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  y = x->LogoutResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_LogoutResponse) */

void zx_se_Body_ADD_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = z;
    return;
  case -1:
    y = x->LogoutResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_LogoutResponse) */

void zx_se_Body_DEL_LogoutResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_NameIDMappingRequest) */

int zx_se_Body_NUM_NameIDMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDMappingRequest; y; ++n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_NameIDMappingRequest) */

struct zx_sp_NameIDMappingRequest_s* zx_se_Body_GET_NameIDMappingRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return 0;
  for (y = x->NameIDMappingRequest; n>=0 && y; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_NameIDMappingRequest) */

struct zx_sp_NameIDMappingRequest_s* zx_se_Body_POP_NameIDMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return 0;
  y = x->NameIDMappingRequest;
  if (y)
    x->NameIDMappingRequest = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_NameIDMappingRequest) */

void zx_se_Body_PUSH_NameIDMappingRequest(struct zx_se_Body_s* x, struct zx_sp_NameIDMappingRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDMappingRequest->gg.g;
  x->NameIDMappingRequest = z;
}

/* FUNC(zx_se_Body_REV_NameIDMappingRequest) */

void zx_se_Body_REV_NameIDMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* nxt;
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return;
  y = x->NameIDMappingRequest;
  if (!y) return;
  x->NameIDMappingRequest = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDMappingRequest->gg.g;
    x->NameIDMappingRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_NameIDMappingRequest) */

void zx_se_Body_PUT_NameIDMappingRequest(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x || !z) return;
  y = x->NameIDMappingRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDMappingRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_NameIDMappingRequest) */

void zx_se_Body_ADD_NameIDMappingRequest(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDMappingRequest->gg.g;
    x->NameIDMappingRequest = z;
    return;
  case -1:
    y = x->NameIDMappingRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingRequest; n > 1 && y; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_NameIDMappingRequest) */

void zx_se_Body_DEL_NameIDMappingRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDMappingRequest = (struct zx_sp_NameIDMappingRequest_s*)x->NameIDMappingRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDMappingRequest_s*)x->NameIDMappingRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_NameIDMappingResponse) */

int zx_se_Body_NUM_NameIDMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDMappingResponse; y; ++n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_NameIDMappingResponse) */

struct zx_sp_NameIDMappingResponse_s* zx_se_Body_GET_NameIDMappingResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return 0;
  for (y = x->NameIDMappingResponse; n>=0 && y; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_NameIDMappingResponse) */

struct zx_sp_NameIDMappingResponse_s* zx_se_Body_POP_NameIDMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return 0;
  y = x->NameIDMappingResponse;
  if (y)
    x->NameIDMappingResponse = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_NameIDMappingResponse) */

void zx_se_Body_PUSH_NameIDMappingResponse(struct zx_se_Body_s* x, struct zx_sp_NameIDMappingResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDMappingResponse->gg.g;
  x->NameIDMappingResponse = z;
}

/* FUNC(zx_se_Body_REV_NameIDMappingResponse) */

void zx_se_Body_REV_NameIDMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* nxt;
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return;
  y = x->NameIDMappingResponse;
  if (!y) return;
  x->NameIDMappingResponse = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDMappingResponse->gg.g;
    x->NameIDMappingResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_NameIDMappingResponse) */

void zx_se_Body_PUT_NameIDMappingResponse(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x || !z) return;
  y = x->NameIDMappingResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDMappingResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_NameIDMappingResponse) */

void zx_se_Body_ADD_NameIDMappingResponse(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDMappingResponse->gg.g;
    x->NameIDMappingResponse = z;
    return;
  case -1:
    y = x->NameIDMappingResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingResponse; n > 1 && y; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_NameIDMappingResponse) */

void zx_se_Body_DEL_NameIDMappingResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDMappingResponse = (struct zx_sp_NameIDMappingResponse_s*)x->NameIDMappingResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDMappingResponse_s*)x->NameIDMappingResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_AttributeQuery) */

int zx_se_Body_NUM_AttributeQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeQuery; y; ++n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_AttributeQuery) */

struct zx_sp_AttributeQuery_s* zx_se_Body_GET_AttributeQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return 0;
  for (y = x->AttributeQuery; n>=0 && y; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_AttributeQuery) */

struct zx_sp_AttributeQuery_s* zx_se_Body_POP_AttributeQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return 0;
  y = x->AttributeQuery;
  if (y)
    x->AttributeQuery = (struct zx_sp_AttributeQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_AttributeQuery) */

void zx_se_Body_PUSH_AttributeQuery(struct zx_se_Body_s* x, struct zx_sp_AttributeQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeQuery->gg.g;
  x->AttributeQuery = z;
}

/* FUNC(zx_se_Body_REV_AttributeQuery) */

void zx_se_Body_REV_AttributeQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* nxt;
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return;
  y = x->AttributeQuery;
  if (!y) return;
  x->AttributeQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AttributeQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeQuery->gg.g;
    x->AttributeQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_AttributeQuery) */

void zx_se_Body_PUT_AttributeQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x || !z) return;
  y = x->AttributeQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_AttributeQuery) */

void zx_se_Body_ADD_AttributeQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeQuery->gg.g;
    x->AttributeQuery = z;
    return;
  case -1:
    y = x->AttributeQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeQuery; n > 1 && y; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_AttributeQuery) */

void zx_se_Body_DEL_AttributeQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeQuery = (struct zx_sp_AttributeQuery_s*)x->AttributeQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AttributeQuery_s*)x->AttributeQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_AuthnQuery) */

int zx_se_Body_NUM_AuthnQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnQuery; y; ++n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_AuthnQuery) */

struct zx_sp_AuthnQuery_s* zx_se_Body_GET_AuthnQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return 0;
  for (y = x->AuthnQuery; n>=0 && y; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_AuthnQuery) */

struct zx_sp_AuthnQuery_s* zx_se_Body_POP_AuthnQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return 0;
  y = x->AuthnQuery;
  if (y)
    x->AuthnQuery = (struct zx_sp_AuthnQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_AuthnQuery) */

void zx_se_Body_PUSH_AuthnQuery(struct zx_se_Body_s* x, struct zx_sp_AuthnQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnQuery->gg.g;
  x->AuthnQuery = z;
}

/* FUNC(zx_se_Body_REV_AuthnQuery) */

void zx_se_Body_REV_AuthnQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* nxt;
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return;
  y = x->AuthnQuery;
  if (!y) return;
  x->AuthnQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AuthnQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnQuery->gg.g;
    x->AuthnQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_AuthnQuery) */

void zx_se_Body_PUT_AuthnQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x || !z) return;
  y = x->AuthnQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_AuthnQuery) */

void zx_se_Body_ADD_AuthnQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnQuery->gg.g;
    x->AuthnQuery = z;
    return;
  case -1:
    y = x->AuthnQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQuery; n > 1 && y; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_AuthnQuery) */

void zx_se_Body_DEL_AuthnQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnQuery = (struct zx_sp_AuthnQuery_s*)x->AuthnQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthnQuery_s*)x->AuthnQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_AuthzDecisionQuery) */

int zx_se_Body_NUM_AuthzDecisionQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthzDecisionQuery; y; ++n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_AuthzDecisionQuery) */

struct zx_sp_AuthzDecisionQuery_s* zx_se_Body_GET_AuthzDecisionQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return 0;
  for (y = x->AuthzDecisionQuery; n>=0 && y; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_AuthzDecisionQuery) */

struct zx_sp_AuthzDecisionQuery_s* zx_se_Body_POP_AuthzDecisionQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return 0;
  y = x->AuthzDecisionQuery;
  if (y)
    x->AuthzDecisionQuery = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_AuthzDecisionQuery) */

void zx_se_Body_PUSH_AuthzDecisionQuery(struct zx_se_Body_s* x, struct zx_sp_AuthzDecisionQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthzDecisionQuery->gg.g;
  x->AuthzDecisionQuery = z;
}

/* FUNC(zx_se_Body_REV_AuthzDecisionQuery) */

void zx_se_Body_REV_AuthzDecisionQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* nxt;
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return;
  y = x->AuthzDecisionQuery;
  if (!y) return;
  x->AuthzDecisionQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthzDecisionQuery->gg.g;
    x->AuthzDecisionQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_AuthzDecisionQuery) */

void zx_se_Body_PUT_AuthzDecisionQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x || !z) return;
  y = x->AuthzDecisionQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthzDecisionQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_AuthzDecisionQuery) */

void zx_se_Body_ADD_AuthzDecisionQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthzDecisionQuery->gg.g;
    x->AuthzDecisionQuery = z;
    return;
  case -1:
    y = x->AuthzDecisionQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionQuery; n > 1 && y; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_AuthzDecisionQuery) */

void zx_se_Body_DEL_AuthzDecisionQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthzDecisionQuery = (struct zx_sp_AuthzDecisionQuery_s*)x->AuthzDecisionQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthzDecisionQuery_s*)x->AuthzDecisionQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_AssertionIDRequest) */

int zx_se_Body_NUM_AssertionIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequest; y; ++n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_AssertionIDRequest) */

struct zx_sp_AssertionIDRequest_s* zx_se_Body_GET_AssertionIDRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequest; n>=0 && y; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_AssertionIDRequest) */

struct zx_sp_AssertionIDRequest_s* zx_se_Body_POP_AssertionIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequest;
  if (y)
    x->AssertionIDRequest = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_AssertionIDRequest) */

void zx_se_Body_PUSH_AssertionIDRequest(struct zx_se_Body_s* x, struct zx_sp_AssertionIDRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequest->gg.g;
  x->AssertionIDRequest = z;
}

/* FUNC(zx_se_Body_REV_AssertionIDRequest) */

void zx_se_Body_REV_AssertionIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* nxt;
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return;
  y = x->AssertionIDRequest;
  if (!y) return;
  x->AssertionIDRequest = 0;
  while (y) {
    nxt = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequest->gg.g;
    x->AssertionIDRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_AssertionIDRequest) */

void zx_se_Body_PUT_AssertionIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_AssertionIDRequest) */

void zx_se_Body_ADD_AssertionIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionIDRequest->gg.g;
    x->AssertionIDRequest = z;
    return;
  case -1:
    y = x->AssertionIDRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequest; n > 1 && y; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_AssertionIDRequest) */

void zx_se_Body_DEL_AssertionIDRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequest = (struct zx_sp_AssertionIDRequest_s*)x->AssertionIDRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AssertionIDRequest_s*)x->AssertionIDRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_Response) */

int zx_se_Body_NUM_Response(struct zx_se_Body_s* x)
{
  struct zx_sp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_Response) */

struct zx_sp_Response_s* zx_se_Body_GET_Response(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_Response) */

struct zx_sp_Response_s* zx_se_Body_POP_Response(struct zx_se_Body_s* x)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_sp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_Response) */

void zx_se_Body_PUSH_Response(struct zx_se_Body_s* x, struct zx_sp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_se_Body_REV_Response) */

void zx_se_Body_REV_Response(struct zx_se_Body_s* x)
{
  struct zx_sp_Response_s* nxt;
  struct zx_sp_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_sp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_Response) */

void zx_se_Body_PUT_Response(struct zx_se_Body_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_Response) */

void zx_se_Body_ADD_Response(struct zx_se_Body_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Response->gg.g;
    x->Response = z;
    return;
  case -1:
    y = x->Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_Response) */

void zx_se_Body_DEL_Response(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_sp_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_Fault) */

int zx_se_Body_NUM_Fault(struct zx_se_Body_s* x)
{
  struct zx_se_Fault_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Fault; y; ++n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_Fault) */

struct zx_se_Fault_s* zx_se_Body_GET_Fault(struct zx_se_Body_s* x, int n)
{
  struct zx_se_Fault_s* y;
  if (!x) return 0;
  for (y = x->Fault; n>=0 && y; --n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_Fault) */

struct zx_se_Fault_s* zx_se_Body_POP_Fault(struct zx_se_Body_s* x)
{
  struct zx_se_Fault_s* y;
  if (!x) return 0;
  y = x->Fault;
  if (y)
    x->Fault = (struct zx_se_Fault_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_Fault) */

void zx_se_Body_PUSH_Fault(struct zx_se_Body_s* x, struct zx_se_Fault_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Fault->gg.g;
  x->Fault = z;
}

/* FUNC(zx_se_Body_REV_Fault) */

void zx_se_Body_REV_Fault(struct zx_se_Body_s* x)
{
  struct zx_se_Fault_s* nxt;
  struct zx_se_Fault_s* y;
  if (!x) return;
  y = x->Fault;
  if (!y) return;
  x->Fault = 0;
  while (y) {
    nxt = (struct zx_se_Fault_s*)y->gg.g.n;
    y->gg.g.n = &x->Fault->gg.g;
    x->Fault = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_Fault) */

void zx_se_Body_PUT_Fault(struct zx_se_Body_s* x, int n, struct zx_se_Fault_s* z)
{
  struct zx_se_Fault_s* y;
  if (!x || !z) return;
  y = x->Fault;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Fault = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_Fault) */

void zx_se_Body_ADD_Fault(struct zx_se_Body_s* x, int n, struct zx_se_Fault_s* z)
{
  struct zx_se_Fault_s* y;
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
    for (; y->gg.g.n; y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y; --n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_Fault) */

void zx_se_Body_DEL_Fault(struct zx_se_Body_s* x, int n)
{
  struct zx_se_Fault_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Fault = (struct zx_se_Fault_s*)x->Fault->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_Fault_s*)x->Fault;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_se_Envelope_NUM_Header) */

int zx_se_Envelope_NUM_Header(struct zx_se_Envelope_s* x)
{
  struct zx_se_Header_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Header; y; ++n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Envelope_GET_Header) */

struct zx_se_Header_s* zx_se_Envelope_GET_Header(struct zx_se_Envelope_s* x, int n)
{
  struct zx_se_Header_s* y;
  if (!x) return 0;
  for (y = x->Header; n>=0 && y; --n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Envelope_POP_Header) */

struct zx_se_Header_s* zx_se_Envelope_POP_Header(struct zx_se_Envelope_s* x)
{
  struct zx_se_Header_s* y;
  if (!x) return 0;
  y = x->Header;
  if (y)
    x->Header = (struct zx_se_Header_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Envelope_PUSH_Header) */

void zx_se_Envelope_PUSH_Header(struct zx_se_Envelope_s* x, struct zx_se_Header_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Header->gg.g;
  x->Header = z;
}

/* FUNC(zx_se_Envelope_REV_Header) */

void zx_se_Envelope_REV_Header(struct zx_se_Envelope_s* x)
{
  struct zx_se_Header_s* nxt;
  struct zx_se_Header_s* y;
  if (!x) return;
  y = x->Header;
  if (!y) return;
  x->Header = 0;
  while (y) {
    nxt = (struct zx_se_Header_s*)y->gg.g.n;
    y->gg.g.n = &x->Header->gg.g;
    x->Header = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Envelope_PUT_Header) */

void zx_se_Envelope_PUT_Header(struct zx_se_Envelope_s* x, int n, struct zx_se_Header_s* z)
{
  struct zx_se_Header_s* y;
  if (!x || !z) return;
  y = x->Header;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Header = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Envelope_ADD_Header) */

void zx_se_Envelope_ADD_Header(struct zx_se_Envelope_s* x, int n, struct zx_se_Header_s* z)
{
  struct zx_se_Header_s* y;
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
    for (; y->gg.g.n; y = (struct zx_se_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y; --n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Envelope_DEL_Header) */

void zx_se_Envelope_DEL_Header(struct zx_se_Envelope_s* x, int n)
{
  struct zx_se_Header_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Header = (struct zx_se_Header_s*)x->Header->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_Header_s*)x->Header;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Envelope_NUM_Body) */

int zx_se_Envelope_NUM_Body(struct zx_se_Envelope_s* x)
{
  struct zx_se_Body_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Body; y; ++n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Envelope_GET_Body) */

struct zx_se_Body_s* zx_se_Envelope_GET_Body(struct zx_se_Envelope_s* x, int n)
{
  struct zx_se_Body_s* y;
  if (!x) return 0;
  for (y = x->Body; n>=0 && y; --n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Envelope_POP_Body) */

struct zx_se_Body_s* zx_se_Envelope_POP_Body(struct zx_se_Envelope_s* x)
{
  struct zx_se_Body_s* y;
  if (!x) return 0;
  y = x->Body;
  if (y)
    x->Body = (struct zx_se_Body_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Envelope_PUSH_Body) */

void zx_se_Envelope_PUSH_Body(struct zx_se_Envelope_s* x, struct zx_se_Body_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Body->gg.g;
  x->Body = z;
}

/* FUNC(zx_se_Envelope_REV_Body) */

void zx_se_Envelope_REV_Body(struct zx_se_Envelope_s* x)
{
  struct zx_se_Body_s* nxt;
  struct zx_se_Body_s* y;
  if (!x) return;
  y = x->Body;
  if (!y) return;
  x->Body = 0;
  while (y) {
    nxt = (struct zx_se_Body_s*)y->gg.g.n;
    y->gg.g.n = &x->Body->gg.g;
    x->Body = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Envelope_PUT_Body) */

void zx_se_Envelope_PUT_Body(struct zx_se_Envelope_s* x, int n, struct zx_se_Body_s* z)
{
  struct zx_se_Body_s* y;
  if (!x || !z) return;
  y = x->Body;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Body = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Envelope_ADD_Body) */

void zx_se_Envelope_ADD_Body(struct zx_se_Envelope_s* x, int n, struct zx_se_Body_s* z)
{
  struct zx_se_Body_s* y;
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
    for (; y->gg.g.n; y = (struct zx_se_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y; --n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Envelope_DEL_Body) */

void zx_se_Envelope_DEL_Body(struct zx_se_Envelope_s* x, int n)
{
  struct zx_se_Body_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Body = (struct zx_se_Body_s*)x->Body->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_Body_s*)x->Body;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_se_Fault_NUM_faultcode) */

int zx_se_Fault_NUM_faultcode(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultcode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_se_Fault_GET_faultcode) */

struct zx_elem_s* zx_se_Fault_GET_faultcode(struct zx_se_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultcode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_se_Fault_POP_faultcode) */

struct zx_elem_s* zx_se_Fault_POP_faultcode(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultcode;
  if (y)
    x->faultcode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_se_Fault_PUSH_faultcode) */

void zx_se_Fault_PUSH_faultcode(struct zx_se_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultcode->g;
  x->faultcode = z;
}

/* FUNC(zx_se_Fault_REV_faultcode) */

void zx_se_Fault_REV_faultcode(struct zx_se_Fault_s* x)
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

/* FUNC(zx_se_Fault_PUT_faultcode) */

void zx_se_Fault_PUT_faultcode(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_ADD_faultcode) */

void zx_se_Fault_ADD_faultcode(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_DEL_faultcode) */

void zx_se_Fault_DEL_faultcode(struct zx_se_Fault_s* x, int n)
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



/* FUNC(zx_se_Fault_NUM_faultstring) */

int zx_se_Fault_NUM_faultstring(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultstring; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_se_Fault_GET_faultstring) */

struct zx_elem_s* zx_se_Fault_GET_faultstring(struct zx_se_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultstring; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_se_Fault_POP_faultstring) */

struct zx_elem_s* zx_se_Fault_POP_faultstring(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultstring;
  if (y)
    x->faultstring = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_se_Fault_PUSH_faultstring) */

void zx_se_Fault_PUSH_faultstring(struct zx_se_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultstring->g;
  x->faultstring = z;
}

/* FUNC(zx_se_Fault_REV_faultstring) */

void zx_se_Fault_REV_faultstring(struct zx_se_Fault_s* x)
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

/* FUNC(zx_se_Fault_PUT_faultstring) */

void zx_se_Fault_PUT_faultstring(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_ADD_faultstring) */

void zx_se_Fault_ADD_faultstring(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_DEL_faultstring) */

void zx_se_Fault_DEL_faultstring(struct zx_se_Fault_s* x, int n)
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



/* FUNC(zx_se_Fault_NUM_faultactor) */

int zx_se_Fault_NUM_faultactor(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultactor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_se_Fault_GET_faultactor) */

struct zx_elem_s* zx_se_Fault_GET_faultactor(struct zx_se_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultactor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_se_Fault_POP_faultactor) */

struct zx_elem_s* zx_se_Fault_POP_faultactor(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultactor;
  if (y)
    x->faultactor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_se_Fault_PUSH_faultactor) */

void zx_se_Fault_PUSH_faultactor(struct zx_se_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultactor->g;
  x->faultactor = z;
}

/* FUNC(zx_se_Fault_REV_faultactor) */

void zx_se_Fault_REV_faultactor(struct zx_se_Fault_s* x)
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

/* FUNC(zx_se_Fault_PUT_faultactor) */

void zx_se_Fault_PUT_faultactor(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_ADD_faultactor) */

void zx_se_Fault_ADD_faultactor(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_DEL_faultactor) */

void zx_se_Fault_DEL_faultactor(struct zx_se_Fault_s* x, int n)
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



/* FUNC(zx_se_Fault_NUM_detail) */

int zx_se_Fault_NUM_detail(struct zx_se_Fault_s* x)
{
  struct zx_se_detail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->detail; y; ++n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Fault_GET_detail) */

struct zx_se_detail_s* zx_se_Fault_GET_detail(struct zx_se_Fault_s* x, int n)
{
  struct zx_se_detail_s* y;
  if (!x) return 0;
  for (y = x->detail; n>=0 && y; --n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Fault_POP_detail) */

struct zx_se_detail_s* zx_se_Fault_POP_detail(struct zx_se_Fault_s* x)
{
  struct zx_se_detail_s* y;
  if (!x) return 0;
  y = x->detail;
  if (y)
    x->detail = (struct zx_se_detail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Fault_PUSH_detail) */

void zx_se_Fault_PUSH_detail(struct zx_se_Fault_s* x, struct zx_se_detail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->detail->gg.g;
  x->detail = z;
}

/* FUNC(zx_se_Fault_REV_detail) */

void zx_se_Fault_REV_detail(struct zx_se_Fault_s* x)
{
  struct zx_se_detail_s* nxt;
  struct zx_se_detail_s* y;
  if (!x) return;
  y = x->detail;
  if (!y) return;
  x->detail = 0;
  while (y) {
    nxt = (struct zx_se_detail_s*)y->gg.g.n;
    y->gg.g.n = &x->detail->gg.g;
    x->detail = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Fault_PUT_detail) */

void zx_se_Fault_PUT_detail(struct zx_se_Fault_s* x, int n, struct zx_se_detail_s* z)
{
  struct zx_se_detail_s* y;
  if (!x || !z) return;
  y = x->detail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->detail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Fault_ADD_detail) */

void zx_se_Fault_ADD_detail(struct zx_se_Fault_s* x, int n, struct zx_se_detail_s* z)
{
  struct zx_se_detail_s* y;
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
    for (; y->gg.g.n; y = (struct zx_se_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y; --n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Fault_DEL_detail) */

void zx_se_Fault_DEL_detail(struct zx_se_Fault_s* x, int n)
{
  struct zx_se_detail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->detail = (struct zx_se_detail_s*)x->detail->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_detail_s*)x->detail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y->gg.g.n; --n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}


















/* FUNC(zx_sp_ArtifactResolve_NUM_Issuer) */

int zx_sp_ArtifactResolve_NUM_Issuer(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ArtifactResolve_GET_Issuer(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ArtifactResolve_POP_Issuer(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_PUSH_Issuer) */

void zx_sp_ArtifactResolve_PUSH_Issuer(struct zx_sp_ArtifactResolve_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_ArtifactResolve_REV_Issuer) */

void zx_sp_ArtifactResolve_REV_Issuer(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResolve_PUT_Issuer) */

void zx_sp_ArtifactResolve_PUT_Issuer(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResolve_ADD_Issuer) */

void zx_sp_ArtifactResolve_ADD_Issuer(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResolve_DEL_Issuer) */

void zx_sp_ArtifactResolve_DEL_Issuer(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ArtifactResolve_NUM_Signature) */

int zx_sp_ArtifactResolve_NUM_Signature(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_ArtifactResolve_GET_Signature(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_ArtifactResolve_POP_Signature(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_PUSH_Signature) */

void zx_sp_ArtifactResolve_PUSH_Signature(struct zx_sp_ArtifactResolve_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_ArtifactResolve_REV_Signature) */

void zx_sp_ArtifactResolve_REV_Signature(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResolve_PUT_Signature) */

void zx_sp_ArtifactResolve_PUT_Signature(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResolve_ADD_Signature) */

void zx_sp_ArtifactResolve_ADD_Signature(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResolve_DEL_Signature) */

void zx_sp_ArtifactResolve_DEL_Signature(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ArtifactResolve_NUM_Extensions) */

int zx_sp_ArtifactResolve_NUM_Extensions(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ArtifactResolve_GET_Extensions(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ArtifactResolve_POP_Extensions(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_PUSH_Extensions) */

void zx_sp_ArtifactResolve_PUSH_Extensions(struct zx_sp_ArtifactResolve_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_ArtifactResolve_REV_Extensions) */

void zx_sp_ArtifactResolve_REV_Extensions(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResolve_PUT_Extensions) */

void zx_sp_ArtifactResolve_PUT_Extensions(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResolve_ADD_Extensions) */

void zx_sp_ArtifactResolve_ADD_Extensions(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResolve_DEL_Extensions) */

void zx_sp_ArtifactResolve_DEL_Extensions(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_ID) */
struct zx_str_s* zx_sp_ArtifactResolve_GET_ID(struct zx_sp_ArtifactResolve_s* x) { return x->ID; }
/* FUNC(zx_sp_ArtifactResolve_PUT_ID) */
void zx_sp_ArtifactResolve_PUT_ID(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_ArtifactResolve_GET_Version) */
struct zx_str_s* zx_sp_ArtifactResolve_GET_Version(struct zx_sp_ArtifactResolve_s* x) { return x->Version; }
/* FUNC(zx_sp_ArtifactResolve_PUT_Version) */
void zx_sp_ArtifactResolve_PUT_Version(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_ArtifactResolve_GET_IssueInstant) */
struct zx_str_s* zx_sp_ArtifactResolve_GET_IssueInstant(struct zx_sp_ArtifactResolve_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_ArtifactResolve_PUT_IssueInstant) */
void zx_sp_ArtifactResolve_PUT_IssueInstant(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_ArtifactResolve_GET_Destination) */
struct zx_str_s* zx_sp_ArtifactResolve_GET_Destination(struct zx_sp_ArtifactResolve_s* x) { return x->Destination; }
/* FUNC(zx_sp_ArtifactResolve_PUT_Destination) */
void zx_sp_ArtifactResolve_PUT_Destination(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_ArtifactResolve_GET_Consent) */
struct zx_str_s* zx_sp_ArtifactResolve_GET_Consent(struct zx_sp_ArtifactResolve_s* x) { return x->Consent; }
/* FUNC(zx_sp_ArtifactResolve_PUT_Consent) */
void zx_sp_ArtifactResolve_PUT_Consent(struct zx_sp_ArtifactResolve_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_ArtifactResolve_NUM_Artifact) */

int zx_sp_ArtifactResolve_NUM_Artifact(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Artifact; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResolve_GET_Artifact) */

struct zx_elem_s* zx_sp_ArtifactResolve_GET_Artifact(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Artifact; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_POP_Artifact) */

struct zx_elem_s* zx_sp_ArtifactResolve_POP_Artifact(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Artifact;
  if (y)
    x->Artifact = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResolve_PUSH_Artifact) */

void zx_sp_ArtifactResolve_PUSH_Artifact(struct zx_sp_ArtifactResolve_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Artifact->g;
  x->Artifact = z;
}

/* FUNC(zx_sp_ArtifactResolve_REV_Artifact) */

void zx_sp_ArtifactResolve_REV_Artifact(struct zx_sp_ArtifactResolve_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Artifact;
  if (!y) return;
  x->Artifact = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Artifact->g;
    x->Artifact = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResolve_PUT_Artifact) */

void zx_sp_ArtifactResolve_PUT_Artifact(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Artifact;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Artifact = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_ArtifactResolve_ADD_Artifact) */

void zx_sp_ArtifactResolve_ADD_Artifact(struct zx_sp_ArtifactResolve_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Artifact->g;
    x->Artifact = z;
    return;
  case -1:
    y = x->Artifact;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Artifact; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_ArtifactResolve_DEL_Artifact) */

void zx_sp_ArtifactResolve_DEL_Artifact(struct zx_sp_ArtifactResolve_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Artifact = (struct zx_elem_s*)x->Artifact->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Artifact;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Artifact; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_sp_ArtifactResponse_NUM_Issuer) */

int zx_sp_ArtifactResponse_NUM_Issuer(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ArtifactResponse_GET_Issuer(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ArtifactResponse_POP_Issuer(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Issuer) */

void zx_sp_ArtifactResponse_PUSH_Issuer(struct zx_sp_ArtifactResponse_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Issuer) */

void zx_sp_ArtifactResponse_REV_Issuer(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Issuer) */

void zx_sp_ArtifactResponse_PUT_Issuer(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Issuer) */

void zx_sp_ArtifactResponse_ADD_Issuer(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Issuer) */

void zx_sp_ArtifactResponse_DEL_Issuer(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ArtifactResponse_NUM_Signature) */

int zx_sp_ArtifactResponse_NUM_Signature(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_ArtifactResponse_GET_Signature(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_ArtifactResponse_POP_Signature(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Signature) */

void zx_sp_ArtifactResponse_PUSH_Signature(struct zx_sp_ArtifactResponse_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Signature) */

void zx_sp_ArtifactResponse_REV_Signature(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Signature) */

void zx_sp_ArtifactResponse_PUT_Signature(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Signature) */

void zx_sp_ArtifactResponse_ADD_Signature(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Signature) */

void zx_sp_ArtifactResponse_DEL_Signature(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ArtifactResponse_NUM_Extensions) */

int zx_sp_ArtifactResponse_NUM_Extensions(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ArtifactResponse_GET_Extensions(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ArtifactResponse_POP_Extensions(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Extensions) */

void zx_sp_ArtifactResponse_PUSH_Extensions(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Extensions) */

void zx_sp_ArtifactResponse_REV_Extensions(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Extensions) */

void zx_sp_ArtifactResponse_PUT_Extensions(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Extensions) */

void zx_sp_ArtifactResponse_ADD_Extensions(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Extensions) */

void zx_sp_ArtifactResponse_DEL_Extensions(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ArtifactResponse_NUM_Status) */

int zx_sp_ArtifactResponse_NUM_Status(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Status) */

struct zx_sp_Status_s* zx_sp_ArtifactResponse_GET_Status(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Status) */

struct zx_sp_Status_s* zx_sp_ArtifactResponse_POP_Status(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Status) */

void zx_sp_ArtifactResponse_PUSH_Status(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Status) */

void zx_sp_ArtifactResponse_REV_Status(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Status) */

void zx_sp_ArtifactResponse_PUT_Status(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Status) */

void zx_sp_ArtifactResponse_ADD_Status(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Status) */

void zx_sp_ArtifactResponse_DEL_Status(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_ID) */
struct zx_str_s* zx_sp_ArtifactResponse_GET_ID(struct zx_sp_ArtifactResponse_s* x) { return x->ID; }
/* FUNC(zx_sp_ArtifactResponse_PUT_ID) */
void zx_sp_ArtifactResponse_PUT_ID(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_InResponseTo) */
struct zx_str_s* zx_sp_ArtifactResponse_GET_InResponseTo(struct zx_sp_ArtifactResponse_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_ArtifactResponse_PUT_InResponseTo) */
void zx_sp_ArtifactResponse_PUT_InResponseTo(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_Version) */
struct zx_str_s* zx_sp_ArtifactResponse_GET_Version(struct zx_sp_ArtifactResponse_s* x) { return x->Version; }
/* FUNC(zx_sp_ArtifactResponse_PUT_Version) */
void zx_sp_ArtifactResponse_PUT_Version(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_IssueInstant) */
struct zx_str_s* zx_sp_ArtifactResponse_GET_IssueInstant(struct zx_sp_ArtifactResponse_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_ArtifactResponse_PUT_IssueInstant) */
void zx_sp_ArtifactResponse_PUT_IssueInstant(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_Destination) */
struct zx_str_s* zx_sp_ArtifactResponse_GET_Destination(struct zx_sp_ArtifactResponse_s* x) { return x->Destination; }
/* FUNC(zx_sp_ArtifactResponse_PUT_Destination) */
void zx_sp_ArtifactResponse_PUT_Destination(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_ArtifactResponse_GET_Consent) */
struct zx_str_s* zx_sp_ArtifactResponse_GET_Consent(struct zx_sp_ArtifactResponse_s* x) { return x->Consent; }
/* FUNC(zx_sp_ArtifactResponse_PUT_Consent) */
void zx_sp_ArtifactResponse_PUT_Consent(struct zx_sp_ArtifactResponse_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_ArtifactResponse_NUM_Response) */

int zx_sp_ArtifactResponse_NUM_Response(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ArtifactResponse_GET_Response) */

struct zx_sp_Response_s* zx_sp_ArtifactResponse_GET_Response(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_POP_Response) */

struct zx_sp_Response_s* zx_sp_ArtifactResponse_POP_Response(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_sp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ArtifactResponse_PUSH_Response) */

void zx_sp_ArtifactResponse_PUSH_Response(struct zx_sp_ArtifactResponse_s* x, struct zx_sp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_sp_ArtifactResponse_REV_Response) */

void zx_sp_ArtifactResponse_REV_Response(struct zx_sp_ArtifactResponse_s* x)
{
  struct zx_sp_Response_s* nxt;
  struct zx_sp_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_sp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ArtifactResponse_PUT_Response) */

void zx_sp_ArtifactResponse_PUT_Response(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ArtifactResponse_ADD_Response) */

void zx_sp_ArtifactResponse_ADD_Response(struct zx_sp_ArtifactResponse_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Response->gg.g;
    x->Response = z;
    return;
  case -1:
    y = x->Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ArtifactResponse_DEL_Response) */

void zx_sp_ArtifactResponse_DEL_Response(struct zx_sp_ArtifactResponse_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_sp_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sp_AssertionIDRequest_NUM_Issuer) */

int zx_sp_AssertionIDRequest_NUM_Issuer(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AssertionIDRequest_GET_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AssertionIDRequest_POP_Issuer(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_PUSH_Issuer) */

void zx_sp_AssertionIDRequest_PUSH_Issuer(struct zx_sp_AssertionIDRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AssertionIDRequest_REV_Issuer) */

void zx_sp_AssertionIDRequest_REV_Issuer(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_PUT_Issuer) */

void zx_sp_AssertionIDRequest_PUT_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_ADD_Issuer) */

void zx_sp_AssertionIDRequest_ADD_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AssertionIDRequest_DEL_Issuer) */

void zx_sp_AssertionIDRequest_DEL_Issuer(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AssertionIDRequest_NUM_Signature) */

int zx_sp_AssertionIDRequest_NUM_Signature(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AssertionIDRequest_GET_Signature(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AssertionIDRequest_POP_Signature(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_PUSH_Signature) */

void zx_sp_AssertionIDRequest_PUSH_Signature(struct zx_sp_AssertionIDRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AssertionIDRequest_REV_Signature) */

void zx_sp_AssertionIDRequest_REV_Signature(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_PUT_Signature) */

void zx_sp_AssertionIDRequest_PUT_Signature(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_ADD_Signature) */

void zx_sp_AssertionIDRequest_ADD_Signature(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AssertionIDRequest_DEL_Signature) */

void zx_sp_AssertionIDRequest_DEL_Signature(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AssertionIDRequest_NUM_Extensions) */

int zx_sp_AssertionIDRequest_NUM_Extensions(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AssertionIDRequest_GET_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AssertionIDRequest_POP_Extensions(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_PUSH_Extensions) */

void zx_sp_AssertionIDRequest_PUSH_Extensions(struct zx_sp_AssertionIDRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AssertionIDRequest_REV_Extensions) */

void zx_sp_AssertionIDRequest_REV_Extensions(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_PUT_Extensions) */

void zx_sp_AssertionIDRequest_PUT_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_ADD_Extensions) */

void zx_sp_AssertionIDRequest_ADD_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AssertionIDRequest_DEL_Extensions) */

void zx_sp_AssertionIDRequest_DEL_Extensions(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_ID) */
struct zx_str_s* zx_sp_AssertionIDRequest_GET_ID(struct zx_sp_AssertionIDRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_ID) */
void zx_sp_AssertionIDRequest_PUT_ID(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_AssertionIDRequest_GET_Version) */
struct zx_str_s* zx_sp_AssertionIDRequest_GET_Version(struct zx_sp_AssertionIDRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_Version) */
void zx_sp_AssertionIDRequest_PUT_Version(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_AssertionIDRequest_GET_IssueInstant) */
struct zx_str_s* zx_sp_AssertionIDRequest_GET_IssueInstant(struct zx_sp_AssertionIDRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_IssueInstant) */
void zx_sp_AssertionIDRequest_PUT_IssueInstant(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AssertionIDRequest_GET_Destination) */
struct zx_str_s* zx_sp_AssertionIDRequest_GET_Destination(struct zx_sp_AssertionIDRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_Destination) */
void zx_sp_AssertionIDRequest_PUT_Destination(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_AssertionIDRequest_GET_Consent) */
struct zx_str_s* zx_sp_AssertionIDRequest_GET_Consent(struct zx_sp_AssertionIDRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_AssertionIDRequest_PUT_Consent) */
void zx_sp_AssertionIDRequest_PUT_Consent(struct zx_sp_AssertionIDRequest_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_AssertionIDRequest_NUM_AssertionIDRef) */

int zx_sp_AssertionIDRequest_NUM_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_AssertionIDRequest_GET_AssertionIDRef) */

struct zx_elem_s* zx_sp_AssertionIDRequest_GET_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_POP_AssertionIDRef) */

struct zx_elem_s* zx_sp_AssertionIDRequest_POP_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDRef;
  if (y)
    x->AssertionIDRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_AssertionIDRequest_PUSH_AssertionIDRef) */

void zx_sp_AssertionIDRequest_PUSH_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDRef->g;
  x->AssertionIDRef = z;
}

/* FUNC(zx_sp_AssertionIDRequest_REV_AssertionIDRef) */

void zx_sp_AssertionIDRequest_REV_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionIDRef;
  if (!y) return;
  x->AssertionIDRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_PUT_AssertionIDRef) */

void zx_sp_AssertionIDRequest_PUT_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionIDRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_AssertionIDRequest_ADD_AssertionIDRef) */

void zx_sp_AssertionIDRequest_ADD_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionIDRef->g;
    x->AssertionIDRef = z;
    return;
  case -1:
    y = x->AssertionIDRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_AssertionIDRequest_DEL_AssertionIDRef) */

void zx_sp_AssertionIDRequest_DEL_AssertionIDRef(struct zx_sp_AssertionIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRef = (struct zx_elem_s*)x->AssertionIDRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionIDRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_sp_AttributeQuery_NUM_Issuer) */

int zx_sp_AttributeQuery_NUM_Issuer(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AttributeQuery_GET_Issuer(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AttributeQuery_POP_Issuer(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Issuer) */

void zx_sp_AttributeQuery_PUSH_Issuer(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Issuer) */

void zx_sp_AttributeQuery_REV_Issuer(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AttributeQuery_PUT_Issuer) */

void zx_sp_AttributeQuery_PUT_Issuer(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AttributeQuery_ADD_Issuer) */

void zx_sp_AttributeQuery_ADD_Issuer(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AttributeQuery_DEL_Issuer) */

void zx_sp_AttributeQuery_DEL_Issuer(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AttributeQuery_NUM_Signature) */

int zx_sp_AttributeQuery_NUM_Signature(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AttributeQuery_GET_Signature(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AttributeQuery_POP_Signature(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Signature) */

void zx_sp_AttributeQuery_PUSH_Signature(struct zx_sp_AttributeQuery_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Signature) */

void zx_sp_AttributeQuery_REV_Signature(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AttributeQuery_PUT_Signature) */

void zx_sp_AttributeQuery_PUT_Signature(struct zx_sp_AttributeQuery_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AttributeQuery_ADD_Signature) */

void zx_sp_AttributeQuery_ADD_Signature(struct zx_sp_AttributeQuery_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AttributeQuery_DEL_Signature) */

void zx_sp_AttributeQuery_DEL_Signature(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AttributeQuery_NUM_Extensions) */

int zx_sp_AttributeQuery_NUM_Extensions(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AttributeQuery_GET_Extensions(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AttributeQuery_POP_Extensions(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Extensions) */

void zx_sp_AttributeQuery_PUSH_Extensions(struct zx_sp_AttributeQuery_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Extensions) */

void zx_sp_AttributeQuery_REV_Extensions(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AttributeQuery_PUT_Extensions) */

void zx_sp_AttributeQuery_PUT_Extensions(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AttributeQuery_ADD_Extensions) */

void zx_sp_AttributeQuery_ADD_Extensions(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AttributeQuery_DEL_Extensions) */

void zx_sp_AttributeQuery_DEL_Extensions(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_AttributeQuery_GET_ID) */
struct zx_str_s* zx_sp_AttributeQuery_GET_ID(struct zx_sp_AttributeQuery_s* x) { return x->ID; }
/* FUNC(zx_sp_AttributeQuery_PUT_ID) */
void zx_sp_AttributeQuery_PUT_ID(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_AttributeQuery_GET_Version) */
struct zx_str_s* zx_sp_AttributeQuery_GET_Version(struct zx_sp_AttributeQuery_s* x) { return x->Version; }
/* FUNC(zx_sp_AttributeQuery_PUT_Version) */
void zx_sp_AttributeQuery_PUT_Version(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_AttributeQuery_GET_IssueInstant) */
struct zx_str_s* zx_sp_AttributeQuery_GET_IssueInstant(struct zx_sp_AttributeQuery_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AttributeQuery_PUT_IssueInstant) */
void zx_sp_AttributeQuery_PUT_IssueInstant(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AttributeQuery_GET_Destination) */
struct zx_str_s* zx_sp_AttributeQuery_GET_Destination(struct zx_sp_AttributeQuery_s* x) { return x->Destination; }
/* FUNC(zx_sp_AttributeQuery_PUT_Destination) */
void zx_sp_AttributeQuery_PUT_Destination(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_AttributeQuery_GET_Consent) */
struct zx_str_s* zx_sp_AttributeQuery_GET_Consent(struct zx_sp_AttributeQuery_s* x) { return x->Consent; }
/* FUNC(zx_sp_AttributeQuery_PUT_Consent) */
void zx_sp_AttributeQuery_PUT_Consent(struct zx_sp_AttributeQuery_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_AttributeQuery_NUM_Subject) */

int zx_sp_AttributeQuery_NUM_Subject(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_AttributeQuery_GET_Subject(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_AttributeQuery_POP_Subject(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Subject) */

void zx_sp_AttributeQuery_PUSH_Subject(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Subject) */

void zx_sp_AttributeQuery_REV_Subject(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AttributeQuery_PUT_Subject) */

void zx_sp_AttributeQuery_PUT_Subject(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AttributeQuery_ADD_Subject) */

void zx_sp_AttributeQuery_ADD_Subject(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AttributeQuery_DEL_Subject) */

void zx_sp_AttributeQuery_DEL_Subject(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AttributeQuery_NUM_Attribute) */

int zx_sp_AttributeQuery_NUM_Attribute(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AttributeQuery_GET_Attribute) */

struct zx_sa_Attribute_s* zx_sp_AttributeQuery_GET_Attribute(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_POP_Attribute) */

struct zx_sa_Attribute_s* zx_sp_AttributeQuery_POP_Attribute(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_sa_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AttributeQuery_PUSH_Attribute) */

void zx_sp_AttributeQuery_PUSH_Attribute(struct zx_sp_AttributeQuery_s* x, struct zx_sa_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_sp_AttributeQuery_REV_Attribute) */

void zx_sp_AttributeQuery_REV_Attribute(struct zx_sp_AttributeQuery_s* x)
{
  struct zx_sa_Attribute_s* nxt;
  struct zx_sa_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zx_sa_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AttributeQuery_PUT_Attribute) */

void zx_sp_AttributeQuery_PUT_Attribute(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Attribute_s* z)
{
  struct zx_sa_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AttributeQuery_ADD_Attribute) */

void zx_sp_AttributeQuery_ADD_Attribute(struct zx_sp_AttributeQuery_s* x, int n, struct zx_sa_Attribute_s* z)
{
  struct zx_sa_Attribute_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = z;
    return;
  case -1:
    y = x->Attribute;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AttributeQuery_DEL_Attribute) */

void zx_sp_AttributeQuery_DEL_Attribute(struct zx_sp_AttributeQuery_s* x, int n)
{
  struct zx_sa_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zx_sa_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sp_AuthnQuery_NUM_Issuer) */

int zx_sp_AuthnQuery_NUM_Issuer(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthnQuery_GET_Issuer(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthnQuery_POP_Issuer(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_Issuer) */

void zx_sp_AuthnQuery_PUSH_Issuer(struct zx_sp_AuthnQuery_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_Issuer) */

void zx_sp_AuthnQuery_REV_Issuer(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_Issuer) */

void zx_sp_AuthnQuery_PUT_Issuer(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_Issuer) */

void zx_sp_AuthnQuery_ADD_Issuer(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_Issuer) */

void zx_sp_AuthnQuery_DEL_Issuer(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnQuery_NUM_Signature) */

int zx_sp_AuthnQuery_NUM_Signature(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthnQuery_GET_Signature(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthnQuery_POP_Signature(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_Signature) */

void zx_sp_AuthnQuery_PUSH_Signature(struct zx_sp_AuthnQuery_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_Signature) */

void zx_sp_AuthnQuery_REV_Signature(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_Signature) */

void zx_sp_AuthnQuery_PUT_Signature(struct zx_sp_AuthnQuery_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_Signature) */

void zx_sp_AuthnQuery_ADD_Signature(struct zx_sp_AuthnQuery_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_Signature) */

void zx_sp_AuthnQuery_DEL_Signature(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnQuery_NUM_Extensions) */

int zx_sp_AuthnQuery_NUM_Extensions(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthnQuery_GET_Extensions(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthnQuery_POP_Extensions(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_Extensions) */

void zx_sp_AuthnQuery_PUSH_Extensions(struct zx_sp_AuthnQuery_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_Extensions) */

void zx_sp_AuthnQuery_REV_Extensions(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_Extensions) */

void zx_sp_AuthnQuery_PUT_Extensions(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_Extensions) */

void zx_sp_AuthnQuery_ADD_Extensions(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_Extensions) */

void zx_sp_AuthnQuery_DEL_Extensions(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_AuthnQuery_GET_ID) */
struct zx_str_s* zx_sp_AuthnQuery_GET_ID(struct zx_sp_AuthnQuery_s* x) { return x->ID; }
/* FUNC(zx_sp_AuthnQuery_PUT_ID) */
void zx_sp_AuthnQuery_PUT_ID(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_AuthnQuery_GET_Version) */
struct zx_str_s* zx_sp_AuthnQuery_GET_Version(struct zx_sp_AuthnQuery_s* x) { return x->Version; }
/* FUNC(zx_sp_AuthnQuery_PUT_Version) */
void zx_sp_AuthnQuery_PUT_Version(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_AuthnQuery_GET_IssueInstant) */
struct zx_str_s* zx_sp_AuthnQuery_GET_IssueInstant(struct zx_sp_AuthnQuery_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AuthnQuery_PUT_IssueInstant) */
void zx_sp_AuthnQuery_PUT_IssueInstant(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AuthnQuery_GET_Destination) */
struct zx_str_s* zx_sp_AuthnQuery_GET_Destination(struct zx_sp_AuthnQuery_s* x) { return x->Destination; }
/* FUNC(zx_sp_AuthnQuery_PUT_Destination) */
void zx_sp_AuthnQuery_PUT_Destination(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_AuthnQuery_GET_Consent) */
struct zx_str_s* zx_sp_AuthnQuery_GET_Consent(struct zx_sp_AuthnQuery_s* x) { return x->Consent; }
/* FUNC(zx_sp_AuthnQuery_PUT_Consent) */
void zx_sp_AuthnQuery_PUT_Consent(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_AuthnQuery_NUM_Subject) */

int zx_sp_AuthnQuery_NUM_Subject(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthnQuery_GET_Subject(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthnQuery_POP_Subject(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_Subject) */

void zx_sp_AuthnQuery_PUSH_Subject(struct zx_sp_AuthnQuery_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_Subject) */

void zx_sp_AuthnQuery_REV_Subject(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_Subject) */

void zx_sp_AuthnQuery_PUT_Subject(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_Subject) */

void zx_sp_AuthnQuery_ADD_Subject(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_Subject) */

void zx_sp_AuthnQuery_DEL_Subject(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnQuery_NUM_RequestedAuthnContext) */

int zx_sp_AuthnQuery_NUM_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; y; ++n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnQuery_GET_RequestedAuthnContext) */

struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnQuery_GET_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; n>=0 && y; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_POP_RequestedAuthnContext) */

struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnQuery_POP_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return 0;
  y = x->RequestedAuthnContext;
  if (y)
    x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnQuery_PUSH_RequestedAuthnContext) */

void zx_sp_AuthnQuery_PUSH_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, struct zx_sp_RequestedAuthnContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedAuthnContext->gg.g;
  x->RequestedAuthnContext = z;
}

/* FUNC(zx_sp_AuthnQuery_REV_RequestedAuthnContext) */

void zx_sp_AuthnQuery_REV_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* nxt;
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  x->RequestedAuthnContext = 0;
  while (y) {
    nxt = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedAuthnContext->gg.g;
    x->RequestedAuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnQuery_PUT_RequestedAuthnContext) */

void zx_sp_AuthnQuery_PUT_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x || !z) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedAuthnContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnQuery_ADD_RequestedAuthnContext) */

void zx_sp_AuthnQuery_ADD_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedAuthnContext->gg.g;
    x->RequestedAuthnContext = z;
    return;
  case -1:
    y = x->RequestedAuthnContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnQuery_DEL_RequestedAuthnContext) */

void zx_sp_AuthnQuery_DEL_RequestedAuthnContext(struct zx_sp_AuthnQuery_s* x, int n)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)x->RequestedAuthnContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_RequestedAuthnContext_s*)x->RequestedAuthnContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_AuthnQuery_GET_SessionIndex) */
struct zx_str_s* zx_sp_AuthnQuery_GET_SessionIndex(struct zx_sp_AuthnQuery_s* x) { return x->SessionIndex; }
/* FUNC(zx_sp_AuthnQuery_PUT_SessionIndex) */
void zx_sp_AuthnQuery_PUT_SessionIndex(struct zx_sp_AuthnQuery_s* x, struct zx_str_s* y) { x->SessionIndex = y; }







/* FUNC(zx_sp_AuthnRequest_NUM_Issuer) */

int zx_sp_AuthnRequest_NUM_Issuer(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthnRequest_GET_Issuer(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthnRequest_POP_Issuer(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Issuer) */

void zx_sp_AuthnRequest_PUSH_Issuer(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Issuer) */

void zx_sp_AuthnRequest_REV_Issuer(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Issuer) */

void zx_sp_AuthnRequest_PUT_Issuer(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Issuer) */

void zx_sp_AuthnRequest_ADD_Issuer(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Issuer) */

void zx_sp_AuthnRequest_DEL_Issuer(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnRequest_NUM_Signature) */

int zx_sp_AuthnRequest_NUM_Signature(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthnRequest_GET_Signature(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthnRequest_POP_Signature(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Signature) */

void zx_sp_AuthnRequest_PUSH_Signature(struct zx_sp_AuthnRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Signature) */

void zx_sp_AuthnRequest_REV_Signature(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Signature) */

void zx_sp_AuthnRequest_PUT_Signature(struct zx_sp_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Signature) */

void zx_sp_AuthnRequest_ADD_Signature(struct zx_sp_AuthnRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Signature) */

void zx_sp_AuthnRequest_DEL_Signature(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnRequest_NUM_Extensions) */

int zx_sp_AuthnRequest_NUM_Extensions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthnRequest_GET_Extensions(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthnRequest_POP_Extensions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Extensions) */

void zx_sp_AuthnRequest_PUSH_Extensions(struct zx_sp_AuthnRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Extensions) */

void zx_sp_AuthnRequest_REV_Extensions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Extensions) */

void zx_sp_AuthnRequest_PUT_Extensions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Extensions) */

void zx_sp_AuthnRequest_ADD_Extensions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Extensions) */

void zx_sp_AuthnRequest_DEL_Extensions(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_AuthnRequest_GET_ID) */
struct zx_str_s* zx_sp_AuthnRequest_GET_ID(struct zx_sp_AuthnRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_AuthnRequest_PUT_ID) */
void zx_sp_AuthnRequest_PUT_ID(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_AuthnRequest_GET_Version) */
struct zx_str_s* zx_sp_AuthnRequest_GET_Version(struct zx_sp_AuthnRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_AuthnRequest_PUT_Version) */
void zx_sp_AuthnRequest_PUT_Version(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_AuthnRequest_GET_IssueInstant) */
struct zx_str_s* zx_sp_AuthnRequest_GET_IssueInstant(struct zx_sp_AuthnRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AuthnRequest_PUT_IssueInstant) */
void zx_sp_AuthnRequest_PUT_IssueInstant(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AuthnRequest_GET_Destination) */
struct zx_str_s* zx_sp_AuthnRequest_GET_Destination(struct zx_sp_AuthnRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_AuthnRequest_PUT_Destination) */
void zx_sp_AuthnRequest_PUT_Destination(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_AuthnRequest_GET_Consent) */
struct zx_str_s* zx_sp_AuthnRequest_GET_Consent(struct zx_sp_AuthnRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_AuthnRequest_PUT_Consent) */
void zx_sp_AuthnRequest_PUT_Consent(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_AuthnRequest_NUM_Subject) */

int zx_sp_AuthnRequest_NUM_Subject(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthnRequest_GET_Subject(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthnRequest_POP_Subject(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Subject) */

void zx_sp_AuthnRequest_PUSH_Subject(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Subject) */

void zx_sp_AuthnRequest_REV_Subject(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Subject) */

void zx_sp_AuthnRequest_PUT_Subject(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Subject) */

void zx_sp_AuthnRequest_ADD_Subject(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Subject) */

void zx_sp_AuthnRequest_DEL_Subject(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnRequest_NUM_NameIDPolicy) */

int zx_sp_AuthnRequest_NUM_NameIDPolicy(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDPolicy; y; ++n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_NameIDPolicy) */

struct zx_sp_NameIDPolicy_s* zx_sp_AuthnRequest_GET_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return 0;
  for (y = x->NameIDPolicy; n>=0 && y; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_NameIDPolicy) */

struct zx_sp_NameIDPolicy_s* zx_sp_AuthnRequest_POP_NameIDPolicy(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return 0;
  y = x->NameIDPolicy;
  if (y)
    x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_NameIDPolicy) */

void zx_sp_AuthnRequest_PUSH_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, struct zx_sp_NameIDPolicy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDPolicy->gg.g;
  x->NameIDPolicy = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_NameIDPolicy) */

void zx_sp_AuthnRequest_REV_NameIDPolicy(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* nxt;
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return;
  y = x->NameIDPolicy;
  if (!y) return;
  x->NameIDPolicy = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDPolicy->gg.g;
    x->NameIDPolicy = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_NameIDPolicy) */

void zx_sp_AuthnRequest_PUT_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x || !z) return;
  y = x->NameIDPolicy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDPolicy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_NameIDPolicy) */

void zx_sp_AuthnRequest_ADD_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDPolicy->gg.g;
    x->NameIDPolicy = z;
    return;
  case -1:
    y = x->NameIDPolicy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDPolicy; n > 1 && y; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_NameIDPolicy) */

void zx_sp_AuthnRequest_DEL_NameIDPolicy(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)x->NameIDPolicy->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDPolicy_s*)x->NameIDPolicy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDPolicy; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnRequest_NUM_Conditions) */

int zx_sp_AuthnRequest_NUM_Conditions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Conditions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Conditions; y; ++n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Conditions) */

struct zx_sa_Conditions_s* zx_sp_AuthnRequest_GET_Conditions(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return 0;
  for (y = x->Conditions; n>=0 && y; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Conditions) */

struct zx_sa_Conditions_s* zx_sp_AuthnRequest_POP_Conditions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return 0;
  y = x->Conditions;
  if (y)
    x->Conditions = (struct zx_sa_Conditions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Conditions) */

void zx_sp_AuthnRequest_PUSH_Conditions(struct zx_sp_AuthnRequest_s* x, struct zx_sa_Conditions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Conditions->gg.g;
  x->Conditions = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Conditions) */

void zx_sp_AuthnRequest_REV_Conditions(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sa_Conditions_s* nxt;
  struct zx_sa_Conditions_s* y;
  if (!x) return;
  y = x->Conditions;
  if (!y) return;
  x->Conditions = 0;
  while (y) {
    nxt = (struct zx_sa_Conditions_s*)y->gg.g.n;
    y->gg.g.n = &x->Conditions->gg.g;
    x->Conditions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Conditions) */

void zx_sp_AuthnRequest_PUT_Conditions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Conditions_s* z)
{
  struct zx_sa_Conditions_s* y;
  if (!x || !z) return;
  y = x->Conditions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Conditions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Conditions) */

void zx_sp_AuthnRequest_ADD_Conditions(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sa_Conditions_s* z)
{
  struct zx_sa_Conditions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Conditions->gg.g;
    x->Conditions = z;
    return;
  case -1:
    y = x->Conditions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Conditions; n > 1 && y; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Conditions) */

void zx_sp_AuthnRequest_DEL_Conditions(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sa_Conditions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Conditions = (struct zx_sa_Conditions_s*)x->Conditions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Conditions_s*)x->Conditions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Conditions; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Conditions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnRequest_NUM_RequestedAuthnContext) */

int zx_sp_AuthnRequest_NUM_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; y; ++n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_RequestedAuthnContext) */

struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnRequest_GET_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; n>=0 && y; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_RequestedAuthnContext) */

struct zx_sp_RequestedAuthnContext_s* zx_sp_AuthnRequest_POP_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return 0;
  y = x->RequestedAuthnContext;
  if (y)
    x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_RequestedAuthnContext) */

void zx_sp_AuthnRequest_PUSH_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, struct zx_sp_RequestedAuthnContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedAuthnContext->gg.g;
  x->RequestedAuthnContext = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_RequestedAuthnContext) */

void zx_sp_AuthnRequest_REV_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_RequestedAuthnContext_s* nxt;
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  x->RequestedAuthnContext = 0;
  while (y) {
    nxt = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedAuthnContext->gg.g;
    x->RequestedAuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_RequestedAuthnContext) */

void zx_sp_AuthnRequest_PUT_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x || !z) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedAuthnContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_RequestedAuthnContext) */

void zx_sp_AuthnRequest_ADD_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedAuthnContext->gg.g;
    x->RequestedAuthnContext = z;
    return;
  case -1:
    y = x->RequestedAuthnContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_RequestedAuthnContext) */

void zx_sp_AuthnRequest_DEL_RequestedAuthnContext(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_RequestedAuthnContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)x->RequestedAuthnContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_RequestedAuthnContext_s*)x->RequestedAuthnContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_RequestedAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthnRequest_NUM_Scoping) */

int zx_sp_AuthnRequest_NUM_Scoping(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Scoping_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Scoping; y; ++n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthnRequest_GET_Scoping) */

struct zx_sp_Scoping_s* zx_sp_AuthnRequest_GET_Scoping(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_Scoping_s* y;
  if (!x) return 0;
  for (y = x->Scoping; n>=0 && y; --n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_POP_Scoping) */

struct zx_sp_Scoping_s* zx_sp_AuthnRequest_POP_Scoping(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Scoping_s* y;
  if (!x) return 0;
  y = x->Scoping;
  if (y)
    x->Scoping = (struct zx_sp_Scoping_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthnRequest_PUSH_Scoping) */

void zx_sp_AuthnRequest_PUSH_Scoping(struct zx_sp_AuthnRequest_s* x, struct zx_sp_Scoping_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Scoping->gg.g;
  x->Scoping = z;
}

/* FUNC(zx_sp_AuthnRequest_REV_Scoping) */

void zx_sp_AuthnRequest_REV_Scoping(struct zx_sp_AuthnRequest_s* x)
{
  struct zx_sp_Scoping_s* nxt;
  struct zx_sp_Scoping_s* y;
  if (!x) return;
  y = x->Scoping;
  if (!y) return;
  x->Scoping = 0;
  while (y) {
    nxt = (struct zx_sp_Scoping_s*)y->gg.g.n;
    y->gg.g.n = &x->Scoping->gg.g;
    x->Scoping = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthnRequest_PUT_Scoping) */

void zx_sp_AuthnRequest_PUT_Scoping(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Scoping_s* z)
{
  struct zx_sp_Scoping_s* y;
  if (!x || !z) return;
  y = x->Scoping;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Scoping = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthnRequest_ADD_Scoping) */

void zx_sp_AuthnRequest_ADD_Scoping(struct zx_sp_AuthnRequest_s* x, int n, struct zx_sp_Scoping_s* z)
{
  struct zx_sp_Scoping_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Scoping->gg.g;
    x->Scoping = z;
    return;
  case -1:
    y = x->Scoping;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Scoping; n > 1 && y; --n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthnRequest_DEL_Scoping) */

void zx_sp_AuthnRequest_DEL_Scoping(struct zx_sp_AuthnRequest_s* x, int n)
{
  struct zx_sp_Scoping_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Scoping = (struct zx_sp_Scoping_s*)x->Scoping->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Scoping_s*)x->Scoping;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Scoping; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Scoping_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_AuthnRequest_GET_ForceAuthn) */
struct zx_str_s* zx_sp_AuthnRequest_GET_ForceAuthn(struct zx_sp_AuthnRequest_s* x) { return x->ForceAuthn; }
/* FUNC(zx_sp_AuthnRequest_PUT_ForceAuthn) */
void zx_sp_AuthnRequest_PUT_ForceAuthn(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->ForceAuthn = y; }
/* FUNC(zx_sp_AuthnRequest_GET_IsPassive) */
struct zx_str_s* zx_sp_AuthnRequest_GET_IsPassive(struct zx_sp_AuthnRequest_s* x) { return x->IsPassive; }
/* FUNC(zx_sp_AuthnRequest_PUT_IsPassive) */
void zx_sp_AuthnRequest_PUT_IsPassive(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->IsPassive = y; }
/* FUNC(zx_sp_AuthnRequest_GET_ProtocolBinding) */
struct zx_str_s* zx_sp_AuthnRequest_GET_ProtocolBinding(struct zx_sp_AuthnRequest_s* x) { return x->ProtocolBinding; }
/* FUNC(zx_sp_AuthnRequest_PUT_ProtocolBinding) */
void zx_sp_AuthnRequest_PUT_ProtocolBinding(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->ProtocolBinding = y; }
/* FUNC(zx_sp_AuthnRequest_GET_AssertionConsumerServiceIndex) */
struct zx_str_s* zx_sp_AuthnRequest_GET_AssertionConsumerServiceIndex(struct zx_sp_AuthnRequest_s* x) { return x->AssertionConsumerServiceIndex; }
/* FUNC(zx_sp_AuthnRequest_PUT_AssertionConsumerServiceIndex) */
void zx_sp_AuthnRequest_PUT_AssertionConsumerServiceIndex(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->AssertionConsumerServiceIndex = y; }
/* FUNC(zx_sp_AuthnRequest_GET_AssertionConsumerServiceURL) */
struct zx_str_s* zx_sp_AuthnRequest_GET_AssertionConsumerServiceURL(struct zx_sp_AuthnRequest_s* x) { return x->AssertionConsumerServiceURL; }
/* FUNC(zx_sp_AuthnRequest_PUT_AssertionConsumerServiceURL) */
void zx_sp_AuthnRequest_PUT_AssertionConsumerServiceURL(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->AssertionConsumerServiceURL = y; }
/* FUNC(zx_sp_AuthnRequest_GET_AttributeConsumingServiceIndex) */
struct zx_str_s* zx_sp_AuthnRequest_GET_AttributeConsumingServiceIndex(struct zx_sp_AuthnRequest_s* x) { return x->AttributeConsumingServiceIndex; }
/* FUNC(zx_sp_AuthnRequest_PUT_AttributeConsumingServiceIndex) */
void zx_sp_AuthnRequest_PUT_AttributeConsumingServiceIndex(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->AttributeConsumingServiceIndex = y; }
/* FUNC(zx_sp_AuthnRequest_GET_ProviderName) */
struct zx_str_s* zx_sp_AuthnRequest_GET_ProviderName(struct zx_sp_AuthnRequest_s* x) { return x->ProviderName; }
/* FUNC(zx_sp_AuthnRequest_PUT_ProviderName) */
void zx_sp_AuthnRequest_PUT_ProviderName(struct zx_sp_AuthnRequest_s* x, struct zx_str_s* y) { x->ProviderName = y; }







/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Issuer) */

int zx_sp_AuthzDecisionQuery_NUM_Issuer(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthzDecisionQuery_GET_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_AuthzDecisionQuery_POP_Issuer(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Issuer) */

void zx_sp_AuthzDecisionQuery_PUSH_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Issuer) */

void zx_sp_AuthzDecisionQuery_REV_Issuer(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Issuer) */

void zx_sp_AuthzDecisionQuery_PUT_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Issuer) */

void zx_sp_AuthzDecisionQuery_ADD_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Issuer) */

void zx_sp_AuthzDecisionQuery_DEL_Issuer(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Signature) */

int zx_sp_AuthzDecisionQuery_NUM_Signature(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthzDecisionQuery_GET_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_AuthzDecisionQuery_POP_Signature(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Signature) */

void zx_sp_AuthzDecisionQuery_PUSH_Signature(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Signature) */

void zx_sp_AuthzDecisionQuery_REV_Signature(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Signature) */

void zx_sp_AuthzDecisionQuery_PUT_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Signature) */

void zx_sp_AuthzDecisionQuery_ADD_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Signature) */

void zx_sp_AuthzDecisionQuery_DEL_Signature(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Extensions) */

int zx_sp_AuthzDecisionQuery_NUM_Extensions(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthzDecisionQuery_GET_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_AuthzDecisionQuery_POP_Extensions(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Extensions) */

void zx_sp_AuthzDecisionQuery_PUSH_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Extensions) */

void zx_sp_AuthzDecisionQuery_REV_Extensions(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Extensions) */

void zx_sp_AuthzDecisionQuery_PUT_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Extensions) */

void zx_sp_AuthzDecisionQuery_ADD_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Extensions) */

void zx_sp_AuthzDecisionQuery_DEL_Extensions(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_ID) */
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_ID(struct zx_sp_AuthzDecisionQuery_s* x) { return x->ID; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_ID) */
void zx_sp_AuthzDecisionQuery_PUT_ID(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_Version) */
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_Version(struct zx_sp_AuthzDecisionQuery_s* x) { return x->Version; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Version) */
void zx_sp_AuthzDecisionQuery_PUT_Version(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_IssueInstant) */
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_IssueInstant(struct zx_sp_AuthzDecisionQuery_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_IssueInstant) */
void zx_sp_AuthzDecisionQuery_PUT_IssueInstant(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_Destination) */
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_Destination(struct zx_sp_AuthzDecisionQuery_s* x) { return x->Destination; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Destination) */
void zx_sp_AuthzDecisionQuery_PUT_Destination(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_AuthzDecisionQuery_GET_Consent) */
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_Consent(struct zx_sp_AuthzDecisionQuery_s* x) { return x->Consent; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Consent) */
void zx_sp_AuthzDecisionQuery_PUT_Consent(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Subject) */

int zx_sp_AuthzDecisionQuery_NUM_Subject(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthzDecisionQuery_GET_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_AuthzDecisionQuery_POP_Subject(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Subject) */

void zx_sp_AuthzDecisionQuery_PUSH_Subject(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Subject) */

void zx_sp_AuthzDecisionQuery_REV_Subject(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Subject) */

void zx_sp_AuthzDecisionQuery_PUT_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Subject) */

void zx_sp_AuthzDecisionQuery_ADD_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Subject) */

void zx_sp_AuthzDecisionQuery_DEL_Subject(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Action) */

int zx_sp_AuthzDecisionQuery_NUM_Action(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Action) */

struct zx_sa_Action_s* zx_sp_AuthzDecisionQuery_GET_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Action) */

struct zx_sa_Action_s* zx_sp_AuthzDecisionQuery_POP_Action(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_sa_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Action) */

void zx_sp_AuthzDecisionQuery_PUSH_Action(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Action) */

void zx_sp_AuthzDecisionQuery_REV_Action(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Action_s* nxt;
  struct zx_sa_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_sa_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Action) */

void zx_sp_AuthzDecisionQuery_PUT_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Action_s* z)
{
  struct zx_sa_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Action) */

void zx_sp_AuthzDecisionQuery_ADD_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Action_s* z)
{
  struct zx_sa_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Action) */

void zx_sp_AuthzDecisionQuery_DEL_Action(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_sa_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_AuthzDecisionQuery_NUM_Evidence) */

int zx_sp_AuthzDecisionQuery_NUM_Evidence(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Evidence_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Evidence; y; ++n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Evidence) */

struct zx_sa_Evidence_s* zx_sp_AuthzDecisionQuery_GET_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return 0;
  for (y = x->Evidence; n>=0 && y; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_POP_Evidence) */

struct zx_sa_Evidence_s* zx_sp_AuthzDecisionQuery_POP_Evidence(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return 0;
  y = x->Evidence;
  if (y)
    x->Evidence = (struct zx_sa_Evidence_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUSH_Evidence) */

void zx_sp_AuthzDecisionQuery_PUSH_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_sa_Evidence_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Evidence->gg.g;
  x->Evidence = z;
}

/* FUNC(zx_sp_AuthzDecisionQuery_REV_Evidence) */

void zx_sp_AuthzDecisionQuery_REV_Evidence(struct zx_sp_AuthzDecisionQuery_s* x)
{
  struct zx_sa_Evidence_s* nxt;
  struct zx_sa_Evidence_s* y;
  if (!x) return;
  y = x->Evidence;
  if (!y) return;
  x->Evidence = 0;
  while (y) {
    nxt = (struct zx_sa_Evidence_s*)y->gg.g.n;
    y->gg.g.n = &x->Evidence->gg.g;
    x->Evidence = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Evidence) */

void zx_sp_AuthzDecisionQuery_PUT_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Evidence_s* z)
{
  struct zx_sa_Evidence_s* y;
  if (!x || !z) return;
  y = x->Evidence;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Evidence = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_AuthzDecisionQuery_ADD_Evidence) */

void zx_sp_AuthzDecisionQuery_ADD_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n, struct zx_sa_Evidence_s* z)
{
  struct zx_sa_Evidence_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Evidence->gg.g;
    x->Evidence = z;
    return;
  case -1:
    y = x->Evidence;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_AuthzDecisionQuery_DEL_Evidence) */

void zx_sp_AuthzDecisionQuery_DEL_Evidence(struct zx_sp_AuthzDecisionQuery_s* x, int n)
{
  struct zx_sa_Evidence_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Evidence = (struct zx_sa_Evidence_s*)x->Evidence->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Evidence_s*)x->Evidence;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Evidence; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Evidence_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_AuthzDecisionQuery_GET_Resource) */
struct zx_str_s* zx_sp_AuthzDecisionQuery_GET_Resource(struct zx_sp_AuthzDecisionQuery_s* x) { return x->Resource; }
/* FUNC(zx_sp_AuthzDecisionQuery_PUT_Resource) */
void zx_sp_AuthzDecisionQuery_PUT_Resource(struct zx_sp_AuthzDecisionQuery_s* x, struct zx_str_s* y) { x->Resource = y; }










/* FUNC(zx_sp_IDPEntry_GET_ProviderID) */
struct zx_str_s* zx_sp_IDPEntry_GET_ProviderID(struct zx_sp_IDPEntry_s* x) { return x->ProviderID; }
/* FUNC(zx_sp_IDPEntry_PUT_ProviderID) */
void zx_sp_IDPEntry_PUT_ProviderID(struct zx_sp_IDPEntry_s* x, struct zx_str_s* y) { x->ProviderID = y; }
/* FUNC(zx_sp_IDPEntry_GET_Name) */
struct zx_str_s* zx_sp_IDPEntry_GET_Name(struct zx_sp_IDPEntry_s* x) { return x->Name; }
/* FUNC(zx_sp_IDPEntry_PUT_Name) */
void zx_sp_IDPEntry_PUT_Name(struct zx_sp_IDPEntry_s* x, struct zx_str_s* y) { x->Name = y; }
/* FUNC(zx_sp_IDPEntry_GET_Loc) */
struct zx_str_s* zx_sp_IDPEntry_GET_Loc(struct zx_sp_IDPEntry_s* x) { return x->Loc; }
/* FUNC(zx_sp_IDPEntry_PUT_Loc) */
void zx_sp_IDPEntry_PUT_Loc(struct zx_sp_IDPEntry_s* x, struct zx_str_s* y) { x->Loc = y; }







/* FUNC(zx_sp_IDPList_NUM_IDPEntry) */

int zx_sp_IDPList_NUM_IDPEntry(struct zx_sp_IDPList_s* x)
{
  struct zx_sp_IDPEntry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IDPEntry; y; ++n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_IDPList_GET_IDPEntry) */

struct zx_sp_IDPEntry_s* zx_sp_IDPList_GET_IDPEntry(struct zx_sp_IDPList_s* x, int n)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x) return 0;
  for (y = x->IDPEntry; n>=0 && y; --n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_IDPList_POP_IDPEntry) */

struct zx_sp_IDPEntry_s* zx_sp_IDPList_POP_IDPEntry(struct zx_sp_IDPList_s* x)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x) return 0;
  y = x->IDPEntry;
  if (y)
    x->IDPEntry = (struct zx_sp_IDPEntry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_IDPList_PUSH_IDPEntry) */

void zx_sp_IDPList_PUSH_IDPEntry(struct zx_sp_IDPList_s* x, struct zx_sp_IDPEntry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IDPEntry->gg.g;
  x->IDPEntry = z;
}

/* FUNC(zx_sp_IDPList_REV_IDPEntry) */

void zx_sp_IDPList_REV_IDPEntry(struct zx_sp_IDPList_s* x)
{
  struct zx_sp_IDPEntry_s* nxt;
  struct zx_sp_IDPEntry_s* y;
  if (!x) return;
  y = x->IDPEntry;
  if (!y) return;
  x->IDPEntry = 0;
  while (y) {
    nxt = (struct zx_sp_IDPEntry_s*)y->gg.g.n;
    y->gg.g.n = &x->IDPEntry->gg.g;
    x->IDPEntry = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_IDPList_PUT_IDPEntry) */

void zx_sp_IDPList_PUT_IDPEntry(struct zx_sp_IDPList_s* x, int n, struct zx_sp_IDPEntry_s* z)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x || !z) return;
  y = x->IDPEntry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IDPEntry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_IDPList_ADD_IDPEntry) */

void zx_sp_IDPList_ADD_IDPEntry(struct zx_sp_IDPList_s* x, int n, struct zx_sp_IDPEntry_s* z)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IDPEntry->gg.g;
    x->IDPEntry = z;
    return;
  case -1:
    y = x->IDPEntry;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPEntry; n > 1 && y; --n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_IDPList_DEL_IDPEntry) */

void zx_sp_IDPList_DEL_IDPEntry(struct zx_sp_IDPList_s* x, int n)
{
  struct zx_sp_IDPEntry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IDPEntry = (struct zx_sp_IDPEntry_s*)x->IDPEntry->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_IDPEntry_s*)x->IDPEntry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPEntry; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_IDPEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_IDPList_NUM_GetComplete) */

int zx_sp_IDPList_NUM_GetComplete(struct zx_sp_IDPList_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetComplete; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_IDPList_GET_GetComplete) */

struct zx_elem_s* zx_sp_IDPList_GET_GetComplete(struct zx_sp_IDPList_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->GetComplete; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_IDPList_POP_GetComplete) */

struct zx_elem_s* zx_sp_IDPList_POP_GetComplete(struct zx_sp_IDPList_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->GetComplete;
  if (y)
    x->GetComplete = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_IDPList_PUSH_GetComplete) */

void zx_sp_IDPList_PUSH_GetComplete(struct zx_sp_IDPList_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->GetComplete->g;
  x->GetComplete = z;
}

/* FUNC(zx_sp_IDPList_REV_GetComplete) */

void zx_sp_IDPList_REV_GetComplete(struct zx_sp_IDPList_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->GetComplete;
  if (!y) return;
  x->GetComplete = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->GetComplete->g;
    x->GetComplete = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_IDPList_PUT_GetComplete) */

void zx_sp_IDPList_PUT_GetComplete(struct zx_sp_IDPList_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->GetComplete;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->GetComplete = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_IDPList_ADD_GetComplete) */

void zx_sp_IDPList_ADD_GetComplete(struct zx_sp_IDPList_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->GetComplete->g;
    x->GetComplete = z;
    return;
  case -1:
    y = x->GetComplete;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->GetComplete; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_IDPList_DEL_GetComplete) */

void zx_sp_IDPList_DEL_GetComplete(struct zx_sp_IDPList_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetComplete = (struct zx_elem_s*)x->GetComplete->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->GetComplete;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->GetComplete; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_sp_LogoutRequest_NUM_Issuer) */

int zx_sp_LogoutRequest_NUM_Issuer(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_LogoutRequest_GET_Issuer(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_LogoutRequest_POP_Issuer(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_Issuer) */

void zx_sp_LogoutRequest_PUSH_Issuer(struct zx_sp_LogoutRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_Issuer) */

void zx_sp_LogoutRequest_REV_Issuer(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_Issuer) */

void zx_sp_LogoutRequest_PUT_Issuer(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_Issuer) */

void zx_sp_LogoutRequest_ADD_Issuer(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_Issuer) */

void zx_sp_LogoutRequest_DEL_Issuer(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_LogoutRequest_NUM_Signature) */

int zx_sp_LogoutRequest_NUM_Signature(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_LogoutRequest_GET_Signature(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_LogoutRequest_POP_Signature(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_Signature) */

void zx_sp_LogoutRequest_PUSH_Signature(struct zx_sp_LogoutRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_Signature) */

void zx_sp_LogoutRequest_REV_Signature(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_Signature) */

void zx_sp_LogoutRequest_PUT_Signature(struct zx_sp_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_Signature) */

void zx_sp_LogoutRequest_ADD_Signature(struct zx_sp_LogoutRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_Signature) */

void zx_sp_LogoutRequest_DEL_Signature(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_LogoutRequest_NUM_Extensions) */

int zx_sp_LogoutRequest_NUM_Extensions(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_LogoutRequest_GET_Extensions(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_LogoutRequest_POP_Extensions(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_Extensions) */

void zx_sp_LogoutRequest_PUSH_Extensions(struct zx_sp_LogoutRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_Extensions) */

void zx_sp_LogoutRequest_REV_Extensions(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_Extensions) */

void zx_sp_LogoutRequest_PUT_Extensions(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_Extensions) */

void zx_sp_LogoutRequest_ADD_Extensions(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_Extensions) */

void zx_sp_LogoutRequest_DEL_Extensions(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_LogoutRequest_GET_ID) */
struct zx_str_s* zx_sp_LogoutRequest_GET_ID(struct zx_sp_LogoutRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_LogoutRequest_PUT_ID) */
void zx_sp_LogoutRequest_PUT_ID(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_LogoutRequest_GET_Version) */
struct zx_str_s* zx_sp_LogoutRequest_GET_Version(struct zx_sp_LogoutRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_LogoutRequest_PUT_Version) */
void zx_sp_LogoutRequest_PUT_Version(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_LogoutRequest_GET_IssueInstant) */
struct zx_str_s* zx_sp_LogoutRequest_GET_IssueInstant(struct zx_sp_LogoutRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_LogoutRequest_PUT_IssueInstant) */
void zx_sp_LogoutRequest_PUT_IssueInstant(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_LogoutRequest_GET_Destination) */
struct zx_str_s* zx_sp_LogoutRequest_GET_Destination(struct zx_sp_LogoutRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_LogoutRequest_PUT_Destination) */
void zx_sp_LogoutRequest_PUT_Destination(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_LogoutRequest_GET_Consent) */
struct zx_str_s* zx_sp_LogoutRequest_GET_Consent(struct zx_sp_LogoutRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_LogoutRequest_PUT_Consent) */
void zx_sp_LogoutRequest_PUT_Consent(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_LogoutRequest_NUM_BaseID) */

int zx_sp_LogoutRequest_NUM_BaseID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_BaseID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BaseID; y; ++n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_BaseID) */

struct zx_sa_BaseID_s* zx_sp_LogoutRequest_GET_BaseID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  for (y = x->BaseID; n>=0 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_BaseID) */

struct zx_sa_BaseID_s* zx_sp_LogoutRequest_POP_BaseID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  y = x->BaseID;
  if (y)
    x->BaseID = (struct zx_sa_BaseID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_BaseID) */

void zx_sp_LogoutRequest_PUSH_BaseID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_BaseID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BaseID->gg.g;
  x->BaseID = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_BaseID) */

void zx_sp_LogoutRequest_REV_BaseID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_BaseID_s* nxt;
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  y = x->BaseID;
  if (!y) return;
  x->BaseID = 0;
  while (y) {
    nxt = (struct zx_sa_BaseID_s*)y->gg.g.n;
    y->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_BaseID) */

void zx_sp_LogoutRequest_PUT_BaseID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  y = x->BaseID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BaseID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_BaseID) */

void zx_sp_LogoutRequest_ADD_BaseID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = z;
    return;
  case -1:
    y = x->BaseID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_BaseID) */

void zx_sp_LogoutRequest_DEL_BaseID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BaseID = (struct zx_sa_BaseID_s*)x->BaseID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_BaseID_s*)x->BaseID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_LogoutRequest_NUM_NameID) */

int zx_sp_LogoutRequest_NUM_NameID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_NameID) */

struct zx_sa_NameID_s* zx_sp_LogoutRequest_GET_NameID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_NameID) */

struct zx_sa_NameID_s* zx_sp_LogoutRequest_POP_NameID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_NameID) */

void zx_sp_LogoutRequest_PUSH_NameID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_NameID) */

void zx_sp_LogoutRequest_REV_NameID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_NameID) */

void zx_sp_LogoutRequest_PUT_NameID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_NameID) */

void zx_sp_LogoutRequest_ADD_NameID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_NameID) */

void zx_sp_LogoutRequest_DEL_NameID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_LogoutRequest_NUM_EncryptedID) */

int zx_sp_LogoutRequest_NUM_EncryptedID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_LogoutRequest_GET_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_LogoutRequest_POP_EncryptedID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_EncryptedID) */

void zx_sp_LogoutRequest_PUSH_EncryptedID(struct zx_sp_LogoutRequest_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_EncryptedID) */

void zx_sp_LogoutRequest_REV_EncryptedID(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_EncryptedID) */

void zx_sp_LogoutRequest_PUT_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_EncryptedID) */

void zx_sp_LogoutRequest_ADD_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_EncryptedID) */

void zx_sp_LogoutRequest_DEL_EncryptedID(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_LogoutRequest_NUM_SessionIndex) */

int zx_sp_LogoutRequest_NUM_SessionIndex(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SessionIndex; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutRequest_GET_SessionIndex) */

struct zx_elem_s* zx_sp_LogoutRequest_GET_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SessionIndex; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_POP_SessionIndex) */

struct zx_elem_s* zx_sp_LogoutRequest_POP_SessionIndex(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SessionIndex;
  if (y)
    x->SessionIndex = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_LogoutRequest_PUSH_SessionIndex) */

void zx_sp_LogoutRequest_PUSH_SessionIndex(struct zx_sp_LogoutRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SessionIndex->g;
  x->SessionIndex = z;
}

/* FUNC(zx_sp_LogoutRequest_REV_SessionIndex) */

void zx_sp_LogoutRequest_REV_SessionIndex(struct zx_sp_LogoutRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SessionIndex;
  if (!y) return;
  x->SessionIndex = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SessionIndex->g;
    x->SessionIndex = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutRequest_PUT_SessionIndex) */

void zx_sp_LogoutRequest_PUT_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SessionIndex;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SessionIndex = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_LogoutRequest_ADD_SessionIndex) */

void zx_sp_LogoutRequest_ADD_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SessionIndex->g;
    x->SessionIndex = z;
    return;
  case -1:
    y = x->SessionIndex;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SessionIndex; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_LogoutRequest_DEL_SessionIndex) */

void zx_sp_LogoutRequest_DEL_SessionIndex(struct zx_sp_LogoutRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SessionIndex = (struct zx_elem_s*)x->SessionIndex->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SessionIndex;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SessionIndex; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_sp_LogoutRequest_GET_Reason) */
struct zx_str_s* zx_sp_LogoutRequest_GET_Reason(struct zx_sp_LogoutRequest_s* x) { return x->Reason; }
/* FUNC(zx_sp_LogoutRequest_PUT_Reason) */
void zx_sp_LogoutRequest_PUT_Reason(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y) { x->Reason = y; }
/* FUNC(zx_sp_LogoutRequest_GET_NotOnOrAfter) */
struct zx_str_s* zx_sp_LogoutRequest_GET_NotOnOrAfter(struct zx_sp_LogoutRequest_s* x) { return x->NotOnOrAfter; }
/* FUNC(zx_sp_LogoutRequest_PUT_NotOnOrAfter) */
void zx_sp_LogoutRequest_PUT_NotOnOrAfter(struct zx_sp_LogoutRequest_s* x, struct zx_str_s* y) { x->NotOnOrAfter = y; }







/* FUNC(zx_sp_LogoutResponse_NUM_Issuer) */

int zx_sp_LogoutResponse_NUM_Issuer(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutResponse_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_LogoutResponse_GET_Issuer(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_LogoutResponse_POP_Issuer(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_PUSH_Issuer) */

void zx_sp_LogoutResponse_PUSH_Issuer(struct zx_sp_LogoutResponse_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_LogoutResponse_REV_Issuer) */

void zx_sp_LogoutResponse_REV_Issuer(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutResponse_PUT_Issuer) */

void zx_sp_LogoutResponse_PUT_Issuer(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutResponse_ADD_Issuer) */

void zx_sp_LogoutResponse_ADD_Issuer(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutResponse_DEL_Issuer) */

void zx_sp_LogoutResponse_DEL_Issuer(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_LogoutResponse_NUM_Signature) */

int zx_sp_LogoutResponse_NUM_Signature(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutResponse_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_LogoutResponse_GET_Signature(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_LogoutResponse_POP_Signature(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_PUSH_Signature) */

void zx_sp_LogoutResponse_PUSH_Signature(struct zx_sp_LogoutResponse_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_LogoutResponse_REV_Signature) */

void zx_sp_LogoutResponse_REV_Signature(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutResponse_PUT_Signature) */

void zx_sp_LogoutResponse_PUT_Signature(struct zx_sp_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutResponse_ADD_Signature) */

void zx_sp_LogoutResponse_ADD_Signature(struct zx_sp_LogoutResponse_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutResponse_DEL_Signature) */

void zx_sp_LogoutResponse_DEL_Signature(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_LogoutResponse_NUM_Extensions) */

int zx_sp_LogoutResponse_NUM_Extensions(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutResponse_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_LogoutResponse_GET_Extensions(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_LogoutResponse_POP_Extensions(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_PUSH_Extensions) */

void zx_sp_LogoutResponse_PUSH_Extensions(struct zx_sp_LogoutResponse_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_LogoutResponse_REV_Extensions) */

void zx_sp_LogoutResponse_REV_Extensions(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutResponse_PUT_Extensions) */

void zx_sp_LogoutResponse_PUT_Extensions(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutResponse_ADD_Extensions) */

void zx_sp_LogoutResponse_ADD_Extensions(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutResponse_DEL_Extensions) */

void zx_sp_LogoutResponse_DEL_Extensions(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_LogoutResponse_NUM_Status) */

int zx_sp_LogoutResponse_NUM_Status(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_LogoutResponse_GET_Status) */

struct zx_sp_Status_s* zx_sp_LogoutResponse_GET_Status(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_POP_Status) */

struct zx_sp_Status_s* zx_sp_LogoutResponse_POP_Status(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_LogoutResponse_PUSH_Status) */

void zx_sp_LogoutResponse_PUSH_Status(struct zx_sp_LogoutResponse_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_LogoutResponse_REV_Status) */

void zx_sp_LogoutResponse_REV_Status(struct zx_sp_LogoutResponse_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_LogoutResponse_PUT_Status) */

void zx_sp_LogoutResponse_PUT_Status(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_LogoutResponse_ADD_Status) */

void zx_sp_LogoutResponse_ADD_Status(struct zx_sp_LogoutResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_LogoutResponse_DEL_Status) */

void zx_sp_LogoutResponse_DEL_Status(struct zx_sp_LogoutResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_LogoutResponse_GET_ID) */
struct zx_str_s* zx_sp_LogoutResponse_GET_ID(struct zx_sp_LogoutResponse_s* x) { return x->ID; }
/* FUNC(zx_sp_LogoutResponse_PUT_ID) */
void zx_sp_LogoutResponse_PUT_ID(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_LogoutResponse_GET_InResponseTo) */
struct zx_str_s* zx_sp_LogoutResponse_GET_InResponseTo(struct zx_sp_LogoutResponse_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_LogoutResponse_PUT_InResponseTo) */
void zx_sp_LogoutResponse_PUT_InResponseTo(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_LogoutResponse_GET_Version) */
struct zx_str_s* zx_sp_LogoutResponse_GET_Version(struct zx_sp_LogoutResponse_s* x) { return x->Version; }
/* FUNC(zx_sp_LogoutResponse_PUT_Version) */
void zx_sp_LogoutResponse_PUT_Version(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_LogoutResponse_GET_IssueInstant) */
struct zx_str_s* zx_sp_LogoutResponse_GET_IssueInstant(struct zx_sp_LogoutResponse_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_LogoutResponse_PUT_IssueInstant) */
void zx_sp_LogoutResponse_PUT_IssueInstant(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_LogoutResponse_GET_Destination) */
struct zx_str_s* zx_sp_LogoutResponse_GET_Destination(struct zx_sp_LogoutResponse_s* x) { return x->Destination; }
/* FUNC(zx_sp_LogoutResponse_PUT_Destination) */
void zx_sp_LogoutResponse_PUT_Destination(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_LogoutResponse_GET_Consent) */
struct zx_str_s* zx_sp_LogoutResponse_GET_Consent(struct zx_sp_LogoutResponse_s* x) { return x->Consent; }
/* FUNC(zx_sp_LogoutResponse_PUT_Consent) */
void zx_sp_LogoutResponse_PUT_Consent(struct zx_sp_LogoutResponse_s* x, struct zx_str_s* y) { x->Consent = y; }







/* FUNC(zx_sp_ManageNameIDRequest_NUM_Issuer) */

int zx_sp_ManageNameIDRequest_NUM_Issuer(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ManageNameIDRequest_GET_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ManageNameIDRequest_POP_Issuer(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_Issuer) */

void zx_sp_ManageNameIDRequest_PUSH_Issuer(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_Issuer) */

void zx_sp_ManageNameIDRequest_REV_Issuer(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_Issuer) */

void zx_sp_ManageNameIDRequest_PUT_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_Issuer) */

void zx_sp_ManageNameIDRequest_ADD_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_Issuer) */

void zx_sp_ManageNameIDRequest_DEL_Issuer(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ManageNameIDRequest_NUM_Signature) */

int zx_sp_ManageNameIDRequest_NUM_Signature(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_ManageNameIDRequest_GET_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_ManageNameIDRequest_POP_Signature(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_Signature) */

void zx_sp_ManageNameIDRequest_PUSH_Signature(struct zx_sp_ManageNameIDRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_Signature) */

void zx_sp_ManageNameIDRequest_REV_Signature(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_Signature) */

void zx_sp_ManageNameIDRequest_PUT_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_Signature) */

void zx_sp_ManageNameIDRequest_ADD_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_Signature) */

void zx_sp_ManageNameIDRequest_DEL_Signature(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ManageNameIDRequest_NUM_Extensions) */

int zx_sp_ManageNameIDRequest_NUM_Extensions(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ManageNameIDRequest_GET_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ManageNameIDRequest_POP_Extensions(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_Extensions) */

void zx_sp_ManageNameIDRequest_PUSH_Extensions(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_Extensions) */

void zx_sp_ManageNameIDRequest_REV_Extensions(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_Extensions) */

void zx_sp_ManageNameIDRequest_PUT_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_Extensions) */

void zx_sp_ManageNameIDRequest_ADD_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_Extensions) */

void zx_sp_ManageNameIDRequest_DEL_Extensions(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_ID) */
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_ID(struct zx_sp_ManageNameIDRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_ID) */
void zx_sp_ManageNameIDRequest_PUT_ID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_ManageNameIDRequest_GET_Version) */
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_Version(struct zx_sp_ManageNameIDRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_Version) */
void zx_sp_ManageNameIDRequest_PUT_Version(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_ManageNameIDRequest_GET_IssueInstant) */
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_IssueInstant(struct zx_sp_ManageNameIDRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_IssueInstant) */
void zx_sp_ManageNameIDRequest_PUT_IssueInstant(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_ManageNameIDRequest_GET_Destination) */
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_Destination(struct zx_sp_ManageNameIDRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_Destination) */
void zx_sp_ManageNameIDRequest_PUT_Destination(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_ManageNameIDRequest_GET_Consent) */
struct zx_str_s* zx_sp_ManageNameIDRequest_GET_Consent(struct zx_sp_ManageNameIDRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_ManageNameIDRequest_PUT_Consent) */
void zx_sp_ManageNameIDRequest_PUT_Consent(struct zx_sp_ManageNameIDRequest_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_ManageNameIDRequest_NUM_NameID) */

int zx_sp_ManageNameIDRequest_NUM_NameID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_NameID) */

struct zx_sa_NameID_s* zx_sp_ManageNameIDRequest_GET_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_NameID) */

struct zx_sa_NameID_s* zx_sp_ManageNameIDRequest_POP_NameID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_NameID) */

void zx_sp_ManageNameIDRequest_PUSH_NameID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_NameID) */

void zx_sp_ManageNameIDRequest_REV_NameID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_NameID) */

void zx_sp_ManageNameIDRequest_PUT_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_NameID) */

void zx_sp_ManageNameIDRequest_ADD_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_NameID) */

void zx_sp_ManageNameIDRequest_DEL_NameID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ManageNameIDRequest_NUM_EncryptedID) */

int zx_sp_ManageNameIDRequest_NUM_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_ManageNameIDRequest_GET_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_ManageNameIDRequest_POP_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_EncryptedID) */

void zx_sp_ManageNameIDRequest_PUSH_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_EncryptedID) */

void zx_sp_ManageNameIDRequest_REV_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_EncryptedID) */

void zx_sp_ManageNameIDRequest_PUT_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_EncryptedID) */

void zx_sp_ManageNameIDRequest_ADD_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_EncryptedID) */

void zx_sp_ManageNameIDRequest_DEL_EncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ManageNameIDRequest_NUM_NewID) */

int zx_sp_ManageNameIDRequest_NUM_NewID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_NewID) */

struct zx_elem_s* zx_sp_ManageNameIDRequest_GET_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NewID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_NewID) */

struct zx_elem_s* zx_sp_ManageNameIDRequest_POP_NewID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NewID;
  if (y)
    x->NewID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_NewID) */

void zx_sp_ManageNameIDRequest_PUSH_NewID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NewID->g;
  x->NewID = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_NewID) */

void zx_sp_ManageNameIDRequest_REV_NewID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NewID;
  if (!y) return;
  x->NewID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NewID->g;
    x->NewID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_NewID) */

void zx_sp_ManageNameIDRequest_PUT_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NewID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NewID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_NewID) */

void zx_sp_ManageNameIDRequest_ADD_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NewID->g;
    x->NewID = z;
    return;
  case -1:
    y = x->NewID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NewID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_NewID) */

void zx_sp_ManageNameIDRequest_DEL_NewID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewID = (struct zx_elem_s*)x->NewID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NewID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NewID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sp_ManageNameIDRequest_NUM_NewEncryptedID) */

int zx_sp_ManageNameIDRequest_NUM_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_NewEncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewEncryptedID; y; ++n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_NewEncryptedID) */

struct zx_sp_NewEncryptedID_s* zx_sp_ManageNameIDRequest_GET_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x) return 0;
  for (y = x->NewEncryptedID; n>=0 && y; --n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_NewEncryptedID) */

struct zx_sp_NewEncryptedID_s* zx_sp_ManageNameIDRequest_POP_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x) return 0;
  y = x->NewEncryptedID;
  if (y)
    x->NewEncryptedID = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_PUSH_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, struct zx_sp_NewEncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NewEncryptedID->gg.g;
  x->NewEncryptedID = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_REV_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_sp_NewEncryptedID_s* nxt;
  struct zx_sp_NewEncryptedID_s* y;
  if (!x) return;
  y = x->NewEncryptedID;
  if (!y) return;
  x->NewEncryptedID = 0;
  while (y) {
    nxt = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->NewEncryptedID->gg.g;
    x->NewEncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_PUT_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_NewEncryptedID_s* z)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x || !z) return;
  y = x->NewEncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NewEncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_ADD_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_sp_NewEncryptedID_s* z)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NewEncryptedID->gg.g;
    x->NewEncryptedID = z;
    return;
  case -1:
    y = x->NewEncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewEncryptedID; n > 1 && y; --n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_NewEncryptedID) */

void zx_sp_ManageNameIDRequest_DEL_NewEncryptedID(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_sp_NewEncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewEncryptedID = (struct zx_sp_NewEncryptedID_s*)x->NewEncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NewEncryptedID_s*)x->NewEncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewEncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NewEncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ManageNameIDRequest_NUM_Terminate) */

int zx_sp_ManageNameIDRequest_NUM_Terminate(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Terminate; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDRequest_GET_Terminate) */

struct zx_elem_s* zx_sp_ManageNameIDRequest_GET_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Terminate; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_POP_Terminate) */

struct zx_elem_s* zx_sp_ManageNameIDRequest_POP_Terminate(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Terminate;
  if (y)
    x->Terminate = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDRequest_PUSH_Terminate) */

void zx_sp_ManageNameIDRequest_PUSH_Terminate(struct zx_sp_ManageNameIDRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Terminate->g;
  x->Terminate = z;
}

/* FUNC(zx_sp_ManageNameIDRequest_REV_Terminate) */

void zx_sp_ManageNameIDRequest_REV_Terminate(struct zx_sp_ManageNameIDRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Terminate;
  if (!y) return;
  x->Terminate = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Terminate->g;
    x->Terminate = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_PUT_Terminate) */

void zx_sp_ManageNameIDRequest_PUT_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Terminate;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Terminate = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_ManageNameIDRequest_ADD_Terminate) */

void zx_sp_ManageNameIDRequest_ADD_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Terminate->g;
    x->Terminate = z;
    return;
  case -1:
    y = x->Terminate;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Terminate; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_ManageNameIDRequest_DEL_Terminate) */

void zx_sp_ManageNameIDRequest_DEL_Terminate(struct zx_sp_ManageNameIDRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Terminate = (struct zx_elem_s*)x->Terminate->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Terminate;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Terminate; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zx_sp_ManageNameIDResponse_NUM_Issuer) */

int zx_sp_ManageNameIDResponse_NUM_Issuer(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ManageNameIDResponse_GET_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_ManageNameIDResponse_POP_Issuer(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_PUSH_Issuer) */

void zx_sp_ManageNameIDResponse_PUSH_Issuer(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_ManageNameIDResponse_REV_Issuer) */

void zx_sp_ManageNameIDResponse_REV_Issuer(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_PUT_Issuer) */

void zx_sp_ManageNameIDResponse_PUT_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_ADD_Issuer) */

void zx_sp_ManageNameIDResponse_ADD_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDResponse_DEL_Issuer) */

void zx_sp_ManageNameIDResponse_DEL_Issuer(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ManageNameIDResponse_NUM_Signature) */

int zx_sp_ManageNameIDResponse_NUM_Signature(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_ManageNameIDResponse_GET_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_ManageNameIDResponse_POP_Signature(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_PUSH_Signature) */

void zx_sp_ManageNameIDResponse_PUSH_Signature(struct zx_sp_ManageNameIDResponse_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_ManageNameIDResponse_REV_Signature) */

void zx_sp_ManageNameIDResponse_REV_Signature(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_PUT_Signature) */

void zx_sp_ManageNameIDResponse_PUT_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_ADD_Signature) */

void zx_sp_ManageNameIDResponse_ADD_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDResponse_DEL_Signature) */

void zx_sp_ManageNameIDResponse_DEL_Signature(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ManageNameIDResponse_NUM_Extensions) */

int zx_sp_ManageNameIDResponse_NUM_Extensions(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ManageNameIDResponse_GET_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_ManageNameIDResponse_POP_Extensions(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_PUSH_Extensions) */

void zx_sp_ManageNameIDResponse_PUSH_Extensions(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_ManageNameIDResponse_REV_Extensions) */

void zx_sp_ManageNameIDResponse_REV_Extensions(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_PUT_Extensions) */

void zx_sp_ManageNameIDResponse_PUT_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_ADD_Extensions) */

void zx_sp_ManageNameIDResponse_ADD_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDResponse_DEL_Extensions) */

void zx_sp_ManageNameIDResponse_DEL_Extensions(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_ManageNameIDResponse_NUM_Status) */

int zx_sp_ManageNameIDResponse_NUM_Status(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_Status) */

struct zx_sp_Status_s* zx_sp_ManageNameIDResponse_GET_Status(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_POP_Status) */

struct zx_sp_Status_s* zx_sp_ManageNameIDResponse_POP_Status(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_ManageNameIDResponse_PUSH_Status) */

void zx_sp_ManageNameIDResponse_PUSH_Status(struct zx_sp_ManageNameIDResponse_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_ManageNameIDResponse_REV_Status) */

void zx_sp_ManageNameIDResponse_REV_Status(struct zx_sp_ManageNameIDResponse_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_PUT_Status) */

void zx_sp_ManageNameIDResponse_PUT_Status(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_ManageNameIDResponse_ADD_Status) */

void zx_sp_ManageNameIDResponse_ADD_Status(struct zx_sp_ManageNameIDResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_ManageNameIDResponse_DEL_Status) */

void zx_sp_ManageNameIDResponse_DEL_Status(struct zx_sp_ManageNameIDResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_ManageNameIDResponse_GET_ID) */
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_ID(struct zx_sp_ManageNameIDResponse_s* x) { return x->ID; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_ID) */
void zx_sp_ManageNameIDResponse_PUT_ID(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_InResponseTo) */
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_InResponseTo(struct zx_sp_ManageNameIDResponse_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_InResponseTo) */
void zx_sp_ManageNameIDResponse_PUT_InResponseTo(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_Version) */
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_Version(struct zx_sp_ManageNameIDResponse_s* x) { return x->Version; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_Version) */
void zx_sp_ManageNameIDResponse_PUT_Version(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_IssueInstant) */
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_IssueInstant(struct zx_sp_ManageNameIDResponse_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_IssueInstant) */
void zx_sp_ManageNameIDResponse_PUT_IssueInstant(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_Destination) */
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_Destination(struct zx_sp_ManageNameIDResponse_s* x) { return x->Destination; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_Destination) */
void zx_sp_ManageNameIDResponse_PUT_Destination(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_ManageNameIDResponse_GET_Consent) */
struct zx_str_s* zx_sp_ManageNameIDResponse_GET_Consent(struct zx_sp_ManageNameIDResponse_s* x) { return x->Consent; }
/* FUNC(zx_sp_ManageNameIDResponse_PUT_Consent) */
void zx_sp_ManageNameIDResponse_PUT_Consent(struct zx_sp_ManageNameIDResponse_s* x, struct zx_str_s* y) { x->Consent = y; }







/* FUNC(zx_sp_NameIDMappingRequest_NUM_Issuer) */

int zx_sp_NameIDMappingRequest_NUM_Issuer(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_NameIDMappingRequest_GET_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_NameIDMappingRequest_POP_Issuer(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_Issuer) */

void zx_sp_NameIDMappingRequest_PUSH_Issuer(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_Issuer) */

void zx_sp_NameIDMappingRequest_REV_Issuer(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_Issuer) */

void zx_sp_NameIDMappingRequest_PUT_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_Issuer) */

void zx_sp_NameIDMappingRequest_ADD_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_Issuer) */

void zx_sp_NameIDMappingRequest_DEL_Issuer(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingRequest_NUM_Signature) */

int zx_sp_NameIDMappingRequest_NUM_Signature(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_NameIDMappingRequest_GET_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_NameIDMappingRequest_POP_Signature(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_Signature) */

void zx_sp_NameIDMappingRequest_PUSH_Signature(struct zx_sp_NameIDMappingRequest_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_Signature) */

void zx_sp_NameIDMappingRequest_REV_Signature(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_Signature) */

void zx_sp_NameIDMappingRequest_PUT_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_Signature) */

void zx_sp_NameIDMappingRequest_ADD_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_Signature) */

void zx_sp_NameIDMappingRequest_DEL_Signature(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingRequest_NUM_Extensions) */

int zx_sp_NameIDMappingRequest_NUM_Extensions(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_NameIDMappingRequest_GET_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_NameIDMappingRequest_POP_Extensions(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_Extensions) */

void zx_sp_NameIDMappingRequest_PUSH_Extensions(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_Extensions) */

void zx_sp_NameIDMappingRequest_REV_Extensions(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_Extensions) */

void zx_sp_NameIDMappingRequest_PUT_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_Extensions) */

void zx_sp_NameIDMappingRequest_ADD_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_Extensions) */

void zx_sp_NameIDMappingRequest_DEL_Extensions(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_ID) */
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_ID(struct zx_sp_NameIDMappingRequest_s* x) { return x->ID; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_ID) */
void zx_sp_NameIDMappingRequest_PUT_ID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_NameIDMappingRequest_GET_Version) */
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_Version(struct zx_sp_NameIDMappingRequest_s* x) { return x->Version; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_Version) */
void zx_sp_NameIDMappingRequest_PUT_Version(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_NameIDMappingRequest_GET_IssueInstant) */
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_IssueInstant(struct zx_sp_NameIDMappingRequest_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_IssueInstant) */
void zx_sp_NameIDMappingRequest_PUT_IssueInstant(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_NameIDMappingRequest_GET_Destination) */
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_Destination(struct zx_sp_NameIDMappingRequest_s* x) { return x->Destination; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_Destination) */
void zx_sp_NameIDMappingRequest_PUT_Destination(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_NameIDMappingRequest_GET_Consent) */
struct zx_str_s* zx_sp_NameIDMappingRequest_GET_Consent(struct zx_sp_NameIDMappingRequest_s* x) { return x->Consent; }
/* FUNC(zx_sp_NameIDMappingRequest_PUT_Consent) */
void zx_sp_NameIDMappingRequest_PUT_Consent(struct zx_sp_NameIDMappingRequest_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_NameIDMappingRequest_NUM_BaseID) */

int zx_sp_NameIDMappingRequest_NUM_BaseID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_BaseID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->BaseID; y; ++n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_BaseID) */

struct zx_sa_BaseID_s* zx_sp_NameIDMappingRequest_GET_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  for (y = x->BaseID; n>=0 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_BaseID) */

struct zx_sa_BaseID_s* zx_sp_NameIDMappingRequest_POP_BaseID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return 0;
  y = x->BaseID;
  if (y)
    x->BaseID = (struct zx_sa_BaseID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_BaseID) */

void zx_sp_NameIDMappingRequest_PUSH_BaseID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_BaseID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->BaseID->gg.g;
  x->BaseID = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_BaseID) */

void zx_sp_NameIDMappingRequest_REV_BaseID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_BaseID_s* nxt;
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  y = x->BaseID;
  if (!y) return;
  x->BaseID = 0;
  while (y) {
    nxt = (struct zx_sa_BaseID_s*)y->gg.g.n;
    y->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_BaseID) */

void zx_sp_NameIDMappingRequest_PUT_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  y = x->BaseID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->BaseID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_BaseID) */

void zx_sp_NameIDMappingRequest_ADD_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_BaseID_s* z)
{
  struct zx_sa_BaseID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->BaseID->gg.g;
    x->BaseID = z;
    return;
  case -1:
    y = x->BaseID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_BaseID) */

void zx_sp_NameIDMappingRequest_DEL_BaseID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_BaseID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->BaseID = (struct zx_sa_BaseID_s*)x->BaseID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_BaseID_s*)x->BaseID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->BaseID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_BaseID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingRequest_NUM_NameID) */

int zx_sp_NameIDMappingRequest_NUM_NameID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_NameID) */

struct zx_sa_NameID_s* zx_sp_NameIDMappingRequest_GET_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_NameID) */

struct zx_sa_NameID_s* zx_sp_NameIDMappingRequest_POP_NameID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_NameID) */

void zx_sp_NameIDMappingRequest_PUSH_NameID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_NameID) */

void zx_sp_NameIDMappingRequest_REV_NameID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_NameID) */

void zx_sp_NameIDMappingRequest_PUT_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_NameID) */

void zx_sp_NameIDMappingRequest_ADD_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_NameID) */

void zx_sp_NameIDMappingRequest_DEL_NameID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingRequest_NUM_EncryptedID) */

int zx_sp_NameIDMappingRequest_NUM_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingRequest_GET_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingRequest_POP_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_EncryptedID) */

void zx_sp_NameIDMappingRequest_PUSH_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_EncryptedID) */

void zx_sp_NameIDMappingRequest_REV_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_EncryptedID) */

void zx_sp_NameIDMappingRequest_PUT_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_EncryptedID) */

void zx_sp_NameIDMappingRequest_ADD_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_EncryptedID) */

void zx_sp_NameIDMappingRequest_DEL_EncryptedID(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingRequest_NUM_NameIDPolicy) */

int zx_sp_NameIDMappingRequest_NUM_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDPolicy; y; ++n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingRequest_GET_NameIDPolicy) */

struct zx_sp_NameIDPolicy_s* zx_sp_NameIDMappingRequest_GET_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return 0;
  for (y = x->NameIDPolicy; n>=0 && y; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_POP_NameIDPolicy) */

struct zx_sp_NameIDPolicy_s* zx_sp_NameIDMappingRequest_POP_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return 0;
  y = x->NameIDPolicy;
  if (y)
    x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingRequest_PUSH_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_PUSH_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, struct zx_sp_NameIDPolicy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDPolicy->gg.g;
  x->NameIDPolicy = z;
}

/* FUNC(zx_sp_NameIDMappingRequest_REV_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_REV_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x)
{
  struct zx_sp_NameIDPolicy_s* nxt;
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return;
  y = x->NameIDPolicy;
  if (!y) return;
  x->NameIDPolicy = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDPolicy->gg.g;
    x->NameIDPolicy = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_PUT_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_PUT_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x || !z) return;
  y = x->NameIDPolicy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDPolicy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingRequest_ADD_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_ADD_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n, struct zx_sp_NameIDPolicy_s* z)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDPolicy->gg.g;
    x->NameIDPolicy = z;
    return;
  case -1:
    y = x->NameIDPolicy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDPolicy; n > 1 && y; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingRequest_DEL_NameIDPolicy) */

void zx_sp_NameIDMappingRequest_DEL_NameIDPolicy(struct zx_sp_NameIDMappingRequest_s* x, int n)
{
  struct zx_sp_NameIDPolicy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDPolicy = (struct zx_sp_NameIDPolicy_s*)x->NameIDPolicy->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDPolicy_s*)x->NameIDPolicy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDPolicy; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDPolicy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sp_NameIDMappingResponse_NUM_Issuer) */

int zx_sp_NameIDMappingResponse_NUM_Issuer(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_NameIDMappingResponse_GET_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_NameIDMappingResponse_POP_Issuer(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_Issuer) */

void zx_sp_NameIDMappingResponse_PUSH_Issuer(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_Issuer) */

void zx_sp_NameIDMappingResponse_REV_Issuer(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_Issuer) */

void zx_sp_NameIDMappingResponse_PUT_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_Issuer) */

void zx_sp_NameIDMappingResponse_ADD_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_Issuer) */

void zx_sp_NameIDMappingResponse_DEL_Issuer(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingResponse_NUM_Signature) */

int zx_sp_NameIDMappingResponse_NUM_Signature(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_NameIDMappingResponse_GET_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_NameIDMappingResponse_POP_Signature(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_Signature) */

void zx_sp_NameIDMappingResponse_PUSH_Signature(struct zx_sp_NameIDMappingResponse_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_Signature) */

void zx_sp_NameIDMappingResponse_REV_Signature(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_Signature) */

void zx_sp_NameIDMappingResponse_PUT_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_Signature) */

void zx_sp_NameIDMappingResponse_ADD_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_Signature) */

void zx_sp_NameIDMappingResponse_DEL_Signature(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingResponse_NUM_Extensions) */

int zx_sp_NameIDMappingResponse_NUM_Extensions(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_NameIDMappingResponse_GET_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_NameIDMappingResponse_POP_Extensions(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_Extensions) */

void zx_sp_NameIDMappingResponse_PUSH_Extensions(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_Extensions) */

void zx_sp_NameIDMappingResponse_REV_Extensions(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_Extensions) */

void zx_sp_NameIDMappingResponse_PUT_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_Extensions) */

void zx_sp_NameIDMappingResponse_ADD_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_Extensions) */

void zx_sp_NameIDMappingResponse_DEL_Extensions(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingResponse_NUM_Status) */

int zx_sp_NameIDMappingResponse_NUM_Status(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_Status) */

struct zx_sp_Status_s* zx_sp_NameIDMappingResponse_GET_Status(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_Status) */

struct zx_sp_Status_s* zx_sp_NameIDMappingResponse_POP_Status(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_Status) */

void zx_sp_NameIDMappingResponse_PUSH_Status(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_Status) */

void zx_sp_NameIDMappingResponse_REV_Status(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_Status) */

void zx_sp_NameIDMappingResponse_PUT_Status(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_Status) */

void zx_sp_NameIDMappingResponse_ADD_Status(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_Status) */

void zx_sp_NameIDMappingResponse_DEL_Status(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_ID) */
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_ID(struct zx_sp_NameIDMappingResponse_s* x) { return x->ID; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_ID) */
void zx_sp_NameIDMappingResponse_PUT_ID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_InResponseTo) */
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_InResponseTo(struct zx_sp_NameIDMappingResponse_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_InResponseTo) */
void zx_sp_NameIDMappingResponse_PUT_InResponseTo(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_Version) */
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_Version(struct zx_sp_NameIDMappingResponse_s* x) { return x->Version; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_Version) */
void zx_sp_NameIDMappingResponse_PUT_Version(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_IssueInstant) */
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_IssueInstant(struct zx_sp_NameIDMappingResponse_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_IssueInstant) */
void zx_sp_NameIDMappingResponse_PUT_IssueInstant(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_Destination) */
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_Destination(struct zx_sp_NameIDMappingResponse_s* x) { return x->Destination; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_Destination) */
void zx_sp_NameIDMappingResponse_PUT_Destination(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_NameIDMappingResponse_GET_Consent) */
struct zx_str_s* zx_sp_NameIDMappingResponse_GET_Consent(struct zx_sp_NameIDMappingResponse_s* x) { return x->Consent; }
/* FUNC(zx_sp_NameIDMappingResponse_PUT_Consent) */
void zx_sp_NameIDMappingResponse_PUT_Consent(struct zx_sp_NameIDMappingResponse_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_NameIDMappingResponse_NUM_NameID) */

int zx_sp_NameIDMappingResponse_NUM_NameID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_NameID) */

struct zx_sa_NameID_s* zx_sp_NameIDMappingResponse_GET_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_NameID) */

struct zx_sa_NameID_s* zx_sp_NameIDMappingResponse_POP_NameID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_NameID) */

void zx_sp_NameIDMappingResponse_PUSH_NameID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_NameID) */

void zx_sp_NameIDMappingResponse_REV_NameID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_NameID) */

void zx_sp_NameIDMappingResponse_PUT_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_NameID) */

void zx_sp_NameIDMappingResponse_ADD_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_NameID) */

void zx_sp_NameIDMappingResponse_DEL_NameID(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NameIDMappingResponse_NUM_EncryptedID) */

int zx_sp_NameIDMappingResponse_NUM_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NameIDMappingResponse_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingResponse_GET_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_sp_NameIDMappingResponse_POP_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NameIDMappingResponse_PUSH_EncryptedID) */

void zx_sp_NameIDMappingResponse_PUSH_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_sp_NameIDMappingResponse_REV_EncryptedID) */

void zx_sp_NameIDMappingResponse_REV_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_PUT_EncryptedID) */

void zx_sp_NameIDMappingResponse_PUT_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NameIDMappingResponse_ADD_EncryptedID) */

void zx_sp_NameIDMappingResponse_ADD_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NameIDMappingResponse_DEL_EncryptedID) */

void zx_sp_NameIDMappingResponse_DEL_EncryptedID(struct zx_sp_NameIDMappingResponse_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}






/* FUNC(zx_sp_NameIDPolicy_GET_Format) */
struct zx_str_s* zx_sp_NameIDPolicy_GET_Format(struct zx_sp_NameIDPolicy_s* x) { return x->Format; }
/* FUNC(zx_sp_NameIDPolicy_PUT_Format) */
void zx_sp_NameIDPolicy_PUT_Format(struct zx_sp_NameIDPolicy_s* x, struct zx_str_s* y) { x->Format = y; }
/* FUNC(zx_sp_NameIDPolicy_GET_SPNameQualifier) */
struct zx_str_s* zx_sp_NameIDPolicy_GET_SPNameQualifier(struct zx_sp_NameIDPolicy_s* x) { return x->SPNameQualifier; }
/* FUNC(zx_sp_NameIDPolicy_PUT_SPNameQualifier) */
void zx_sp_NameIDPolicy_PUT_SPNameQualifier(struct zx_sp_NameIDPolicy_s* x, struct zx_str_s* y) { x->SPNameQualifier = y; }
/* FUNC(zx_sp_NameIDPolicy_GET_AllowCreate) */
struct zx_str_s* zx_sp_NameIDPolicy_GET_AllowCreate(struct zx_sp_NameIDPolicy_s* x) { return x->AllowCreate; }
/* FUNC(zx_sp_NameIDPolicy_PUT_AllowCreate) */
void zx_sp_NameIDPolicy_PUT_AllowCreate(struct zx_sp_NameIDPolicy_s* x, struct zx_str_s* y) { x->AllowCreate = y; }







/* FUNC(zx_sp_NewEncryptedID_NUM_EncryptedData) */

int zx_sp_NewEncryptedID_NUM_EncryptedData(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NewEncryptedID_GET_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sp_NewEncryptedID_GET_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NewEncryptedID_POP_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_sp_NewEncryptedID_POP_EncryptedData(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NewEncryptedID_PUSH_EncryptedData) */

void zx_sp_NewEncryptedID_PUSH_EncryptedData(struct zx_sp_NewEncryptedID_s* x, struct zx_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zx_sp_NewEncryptedID_REV_EncryptedData) */

void zx_sp_NewEncryptedID_REV_EncryptedData(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedData_s* nxt;
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NewEncryptedID_PUT_EncryptedData) */

void zx_sp_NewEncryptedID_PUT_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NewEncryptedID_ADD_EncryptedData) */

void zx_sp_NewEncryptedID_ADD_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NewEncryptedID_DEL_EncryptedData) */

void zx_sp_NewEncryptedID_DEL_EncryptedData(struct zx_sp_NewEncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_NewEncryptedID_NUM_EncryptedKey) */

int zx_sp_NewEncryptedID_NUM_EncryptedKey(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_NewEncryptedID_GET_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sp_NewEncryptedID_GET_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_NewEncryptedID_POP_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_sp_NewEncryptedID_POP_EncryptedKey(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_NewEncryptedID_PUSH_EncryptedKey) */

void zx_sp_NewEncryptedID_PUSH_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, struct zx_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zx_sp_NewEncryptedID_REV_EncryptedKey) */

void zx_sp_NewEncryptedID_REV_EncryptedKey(struct zx_sp_NewEncryptedID_s* x)
{
  struct zx_xenc_EncryptedKey_s* nxt;
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_NewEncryptedID_PUT_EncryptedKey) */

void zx_sp_NewEncryptedID_PUT_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_NewEncryptedID_ADD_EncryptedKey) */

void zx_sp_NewEncryptedID_ADD_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_NewEncryptedID_DEL_EncryptedKey) */

void zx_sp_NewEncryptedID_DEL_EncryptedKey(struct zx_sp_NewEncryptedID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sp_RequestedAuthnContext_NUM_AuthnContextClassRef) */

int zx_sp_RequestedAuthnContext_NUM_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextClassRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_RequestedAuthnContext_GET_AuthnContextClassRef) */

struct zx_elem_s* zx_sp_RequestedAuthnContext_GET_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextClassRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_RequestedAuthnContext_POP_AuthnContextClassRef) */

struct zx_elem_s* zx_sp_RequestedAuthnContext_POP_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextClassRef;
  if (y)
    x->AuthnContextClassRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_RequestedAuthnContext_PUSH_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_PUSH_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextClassRef->g;
  x->AuthnContextClassRef = z;
}

/* FUNC(zx_sp_RequestedAuthnContext_REV_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_REV_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnContextClassRef;
  if (!y) return;
  x->AuthnContextClassRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnContextClassRef->g;
    x->AuthnContextClassRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_RequestedAuthnContext_PUT_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_PUT_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnContextClassRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnContextClassRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_RequestedAuthnContext_ADD_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_ADD_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnContextClassRef->g;
    x->AuthnContextClassRef = z;
    return;
  case -1:
    y = x->AuthnContextClassRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextClassRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_RequestedAuthnContext_DEL_AuthnContextClassRef) */

void zx_sp_RequestedAuthnContext_DEL_AuthnContextClassRef(struct zx_sp_RequestedAuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContextClassRef = (struct zx_elem_s*)x->AuthnContextClassRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnContextClassRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextClassRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sp_RequestedAuthnContext_NUM_AuthnContextDeclRef) */

int zx_sp_RequestedAuthnContext_NUM_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContextDeclRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_RequestedAuthnContext_GET_AuthnContextDeclRef) */

struct zx_elem_s* zx_sp_RequestedAuthnContext_GET_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthnContextDeclRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_RequestedAuthnContext_POP_AuthnContextDeclRef) */

struct zx_elem_s* zx_sp_RequestedAuthnContext_POP_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthnContextDeclRef;
  if (y)
    x->AuthnContextDeclRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_RequestedAuthnContext_PUSH_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_PUSH_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthnContextDeclRef->g;
  x->AuthnContextDeclRef = z;
}

/* FUNC(zx_sp_RequestedAuthnContext_REV_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_REV_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthnContextDeclRef;
  if (!y) return;
  x->AuthnContextDeclRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthnContextDeclRef->g;
    x->AuthnContextDeclRef = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_RequestedAuthnContext_PUT_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_PUT_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthnContextDeclRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthnContextDeclRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_RequestedAuthnContext_ADD_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_ADD_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthnContextDeclRef->g;
    x->AuthnContextDeclRef = z;
    return;
  case -1:
    y = x->AuthnContextDeclRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDeclRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_RequestedAuthnContext_DEL_AuthnContextDeclRef) */

void zx_sp_RequestedAuthnContext_DEL_AuthnContextDeclRef(struct zx_sp_RequestedAuthnContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnContextDeclRef = (struct zx_elem_s*)x->AuthnContextDeclRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthnContextDeclRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthnContextDeclRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_sp_RequestedAuthnContext_GET_Comparison) */
struct zx_str_s* zx_sp_RequestedAuthnContext_GET_Comparison(struct zx_sp_RequestedAuthnContext_s* x) { return x->Comparison; }
/* FUNC(zx_sp_RequestedAuthnContext_PUT_Comparison) */
void zx_sp_RequestedAuthnContext_PUT_Comparison(struct zx_sp_RequestedAuthnContext_s* x, struct zx_str_s* y) { x->Comparison = y; }







/* FUNC(zx_sp_Response_NUM_Issuer) */

int zx_sp_Response_NUM_Issuer(struct zx_sp_Response_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_Response_GET_Issuer(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_Response_POP_Issuer(struct zx_sp_Response_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Issuer) */

void zx_sp_Response_PUSH_Issuer(struct zx_sp_Response_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_Response_REV_Issuer) */

void zx_sp_Response_REV_Issuer(struct zx_sp_Response_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Issuer) */

void zx_sp_Response_PUT_Issuer(struct zx_sp_Response_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Issuer) */

void zx_sp_Response_ADD_Issuer(struct zx_sp_Response_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Issuer) */

void zx_sp_Response_DEL_Issuer(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_Response_NUM_Signature) */

int zx_sp_Response_NUM_Signature(struct zx_sp_Response_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_Response_GET_Signature(struct zx_sp_Response_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_Response_POP_Signature(struct zx_sp_Response_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Signature) */

void zx_sp_Response_PUSH_Signature(struct zx_sp_Response_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_Response_REV_Signature) */

void zx_sp_Response_REV_Signature(struct zx_sp_Response_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Signature) */

void zx_sp_Response_PUT_Signature(struct zx_sp_Response_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Signature) */

void zx_sp_Response_ADD_Signature(struct zx_sp_Response_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Signature) */

void zx_sp_Response_DEL_Signature(struct zx_sp_Response_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_Response_NUM_Extensions) */

int zx_sp_Response_NUM_Extensions(struct zx_sp_Response_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_Response_GET_Extensions(struct zx_sp_Response_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_Response_POP_Extensions(struct zx_sp_Response_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Extensions) */

void zx_sp_Response_PUSH_Extensions(struct zx_sp_Response_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_Response_REV_Extensions) */

void zx_sp_Response_REV_Extensions(struct zx_sp_Response_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Extensions) */

void zx_sp_Response_PUT_Extensions(struct zx_sp_Response_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Extensions) */

void zx_sp_Response_ADD_Extensions(struct zx_sp_Response_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Extensions) */

void zx_sp_Response_DEL_Extensions(struct zx_sp_Response_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_Response_NUM_Status) */

int zx_sp_Response_NUM_Status(struct zx_sp_Response_s* x)
{
  struct zx_sp_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Status) */

struct zx_sp_Status_s* zx_sp_Response_GET_Status(struct zx_sp_Response_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Status) */

struct zx_sp_Status_s* zx_sp_Response_POP_Status(struct zx_sp_Response_s* x)
{
  struct zx_sp_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_sp_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Status) */

void zx_sp_Response_PUSH_Status(struct zx_sp_Response_s* x, struct zx_sp_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_sp_Response_REV_Status) */

void zx_sp_Response_REV_Status(struct zx_sp_Response_s* x)
{
  struct zx_sp_Status_s* nxt;
  struct zx_sp_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_sp_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Status) */

void zx_sp_Response_PUT_Status(struct zx_sp_Response_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Status) */

void zx_sp_Response_ADD_Status(struct zx_sp_Response_s* x, int n, struct zx_sp_Status_s* z)
{
  struct zx_sp_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Status) */

void zx_sp_Response_DEL_Status(struct zx_sp_Response_s* x, int n)
{
  struct zx_sp_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_sp_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_Response_GET_ID) */
struct zx_str_s* zx_sp_Response_GET_ID(struct zx_sp_Response_s* x) { return x->ID; }
/* FUNC(zx_sp_Response_PUT_ID) */
void zx_sp_Response_PUT_ID(struct zx_sp_Response_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_Response_GET_InResponseTo) */
struct zx_str_s* zx_sp_Response_GET_InResponseTo(struct zx_sp_Response_s* x) { return x->InResponseTo; }
/* FUNC(zx_sp_Response_PUT_InResponseTo) */
void zx_sp_Response_PUT_InResponseTo(struct zx_sp_Response_s* x, struct zx_str_s* y) { x->InResponseTo = y; }
/* FUNC(zx_sp_Response_GET_Version) */
struct zx_str_s* zx_sp_Response_GET_Version(struct zx_sp_Response_s* x) { return x->Version; }
/* FUNC(zx_sp_Response_PUT_Version) */
void zx_sp_Response_PUT_Version(struct zx_sp_Response_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_Response_GET_IssueInstant) */
struct zx_str_s* zx_sp_Response_GET_IssueInstant(struct zx_sp_Response_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_Response_PUT_IssueInstant) */
void zx_sp_Response_PUT_IssueInstant(struct zx_sp_Response_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_Response_GET_Destination) */
struct zx_str_s* zx_sp_Response_GET_Destination(struct zx_sp_Response_s* x) { return x->Destination; }
/* FUNC(zx_sp_Response_PUT_Destination) */
void zx_sp_Response_PUT_Destination(struct zx_sp_Response_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_Response_GET_Consent) */
struct zx_str_s* zx_sp_Response_GET_Consent(struct zx_sp_Response_s* x) { return x->Consent; }
/* FUNC(zx_sp_Response_PUT_Consent) */
void zx_sp_Response_PUT_Consent(struct zx_sp_Response_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_Response_NUM_Assertion) */

int zx_sp_Response_NUM_Assertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_Assertion) */

struct zx_sa_Assertion_s* zx_sp_Response_GET_Assertion(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_Assertion) */

struct zx_sa_Assertion_s* zx_sp_Response_POP_Assertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_Assertion) */

void zx_sp_Response_PUSH_Assertion(struct zx_sp_Response_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_sp_Response_REV_Assertion) */

void zx_sp_Response_REV_Assertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_Assertion_s* nxt;
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zx_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_Assertion) */

void zx_sp_Response_PUT_Assertion(struct zx_sp_Response_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_Assertion) */

void zx_sp_Response_ADD_Assertion(struct zx_sp_Response_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = z;
    return;
  case -1:
    y = x->Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_Assertion) */

void zx_sp_Response_DEL_Assertion(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zx_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_Response_NUM_EncryptedAssertion) */

int zx_sp_Response_NUM_EncryptedAssertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; y; ++n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Response_GET_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_sp_Response_GET_EncryptedAssertion(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; n>=0 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Response_POP_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_sp_Response_POP_EncryptedAssertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  y = x->EncryptedAssertion;
  if (y)
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Response_PUSH_EncryptedAssertion) */

void zx_sp_Response_PUSH_EncryptedAssertion(struct zx_sp_Response_s* x, struct zx_sa_EncryptedAssertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAssertion->gg.g;
  x->EncryptedAssertion = z;
}

/* FUNC(zx_sp_Response_REV_EncryptedAssertion) */

void zx_sp_Response_REV_EncryptedAssertion(struct zx_sp_Response_s* x)
{
  struct zx_sa_EncryptedAssertion_s* nxt;
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  x->EncryptedAssertion = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Response_PUT_EncryptedAssertion) */

void zx_sp_Response_PUT_EncryptedAssertion(struct zx_sp_Response_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAssertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Response_ADD_EncryptedAssertion) */

void zx_sp_Response_ADD_EncryptedAssertion(struct zx_sp_Response_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = z;
    return;
  case -1:
    y = x->EncryptedAssertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Response_DEL_EncryptedAssertion) */

void zx_sp_Response_DEL_EncryptedAssertion(struct zx_sp_Response_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sp_Scoping_NUM_IDPList) */

int zx_sp_Scoping_NUM_IDPList(struct zx_sp_Scoping_s* x)
{
  struct zx_sp_IDPList_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IDPList; y; ++n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Scoping_GET_IDPList) */

struct zx_sp_IDPList_s* zx_sp_Scoping_GET_IDPList(struct zx_sp_Scoping_s* x, int n)
{
  struct zx_sp_IDPList_s* y;
  if (!x) return 0;
  for (y = x->IDPList; n>=0 && y; --n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Scoping_POP_IDPList) */

struct zx_sp_IDPList_s* zx_sp_Scoping_POP_IDPList(struct zx_sp_Scoping_s* x)
{
  struct zx_sp_IDPList_s* y;
  if (!x) return 0;
  y = x->IDPList;
  if (y)
    x->IDPList = (struct zx_sp_IDPList_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Scoping_PUSH_IDPList) */

void zx_sp_Scoping_PUSH_IDPList(struct zx_sp_Scoping_s* x, struct zx_sp_IDPList_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IDPList->gg.g;
  x->IDPList = z;
}

/* FUNC(zx_sp_Scoping_REV_IDPList) */

void zx_sp_Scoping_REV_IDPList(struct zx_sp_Scoping_s* x)
{
  struct zx_sp_IDPList_s* nxt;
  struct zx_sp_IDPList_s* y;
  if (!x) return;
  y = x->IDPList;
  if (!y) return;
  x->IDPList = 0;
  while (y) {
    nxt = (struct zx_sp_IDPList_s*)y->gg.g.n;
    y->gg.g.n = &x->IDPList->gg.g;
    x->IDPList = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Scoping_PUT_IDPList) */

void zx_sp_Scoping_PUT_IDPList(struct zx_sp_Scoping_s* x, int n, struct zx_sp_IDPList_s* z)
{
  struct zx_sp_IDPList_s* y;
  if (!x || !z) return;
  y = x->IDPList;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IDPList = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Scoping_ADD_IDPList) */

void zx_sp_Scoping_ADD_IDPList(struct zx_sp_Scoping_s* x, int n, struct zx_sp_IDPList_s* z)
{
  struct zx_sp_IDPList_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IDPList->gg.g;
    x->IDPList = z;
    return;
  case -1:
    y = x->IDPList;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPList; n > 1 && y; --n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Scoping_DEL_IDPList) */

void zx_sp_Scoping_DEL_IDPList(struct zx_sp_Scoping_s* x, int n)
{
  struct zx_sp_IDPList_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IDPList = (struct zx_sp_IDPList_s*)x->IDPList->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_IDPList_s*)x->IDPList;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPList; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_IDPList_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_Scoping_NUM_RequesterID) */

int zx_sp_Scoping_NUM_RequesterID(struct zx_sp_Scoping_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequesterID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_Scoping_GET_RequesterID) */

struct zx_elem_s* zx_sp_Scoping_GET_RequesterID(struct zx_sp_Scoping_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RequesterID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_Scoping_POP_RequesterID) */

struct zx_elem_s* zx_sp_Scoping_POP_RequesterID(struct zx_sp_Scoping_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RequesterID;
  if (y)
    x->RequesterID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_Scoping_PUSH_RequesterID) */

void zx_sp_Scoping_PUSH_RequesterID(struct zx_sp_Scoping_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RequesterID->g;
  x->RequesterID = z;
}

/* FUNC(zx_sp_Scoping_REV_RequesterID) */

void zx_sp_Scoping_REV_RequesterID(struct zx_sp_Scoping_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RequesterID;
  if (!y) return;
  x->RequesterID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RequesterID->g;
    x->RequesterID = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Scoping_PUT_RequesterID) */

void zx_sp_Scoping_PUT_RequesterID(struct zx_sp_Scoping_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RequesterID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RequesterID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_Scoping_ADD_RequesterID) */

void zx_sp_Scoping_ADD_RequesterID(struct zx_sp_Scoping_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RequesterID->g;
    x->RequesterID = z;
    return;
  case -1:
    y = x->RequesterID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequesterID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_Scoping_DEL_RequesterID) */

void zx_sp_Scoping_DEL_RequesterID(struct zx_sp_Scoping_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequesterID = (struct zx_elem_s*)x->RequesterID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RequesterID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequesterID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_sp_Scoping_GET_ProxyCount) */
struct zx_str_s* zx_sp_Scoping_GET_ProxyCount(struct zx_sp_Scoping_s* x) { return x->ProxyCount; }
/* FUNC(zx_sp_Scoping_PUT_ProxyCount) */
void zx_sp_Scoping_PUT_ProxyCount(struct zx_sp_Scoping_s* x, struct zx_str_s* y) { x->ProxyCount = y; }







/* FUNC(zx_sp_Status_NUM_StatusCode) */

int zx_sp_Status_NUM_StatusCode(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Status_GET_StatusCode) */

struct zx_sp_StatusCode_s* zx_sp_Status_GET_StatusCode(struct zx_sp_Status_s* x, int n)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Status_POP_StatusCode) */

struct zx_sp_StatusCode_s* zx_sp_Status_POP_StatusCode(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_sp_StatusCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Status_PUSH_StatusCode) */

void zx_sp_Status_PUSH_StatusCode(struct zx_sp_Status_s* x, struct zx_sp_StatusCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusCode->gg.g;
  x->StatusCode = z;
}

/* FUNC(zx_sp_Status_REV_StatusCode) */

void zx_sp_Status_REV_StatusCode(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusCode_s* nxt;
  struct zx_sp_StatusCode_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_sp_StatusCode_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Status_PUT_StatusCode) */

void zx_sp_Status_PUT_StatusCode(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusCode_s* z)
{
  struct zx_sp_StatusCode_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Status_ADD_StatusCode) */

void zx_sp_Status_ADD_StatusCode(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusCode_s* z)
{
  struct zx_sp_StatusCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = z;
    return;
  case -1:
    y = x->StatusCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Status_DEL_StatusCode) */

void zx_sp_Status_DEL_StatusCode(struct zx_sp_Status_s* x, int n)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_sp_StatusCode_s*)x->StatusCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_StatusCode_s*)x->StatusCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_Status_NUM_StatusMessage) */

int zx_sp_Status_NUM_StatusMessage(struct zx_sp_Status_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusMessage; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sp_Status_GET_StatusMessage) */

struct zx_elem_s* zx_sp_Status_GET_StatusMessage(struct zx_sp_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusMessage; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sp_Status_POP_StatusMessage) */

struct zx_elem_s* zx_sp_Status_POP_StatusMessage(struct zx_sp_Status_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusMessage;
  if (y)
    x->StatusMessage = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sp_Status_PUSH_StatusMessage) */

void zx_sp_Status_PUSH_StatusMessage(struct zx_sp_Status_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusMessage->g;
  x->StatusMessage = z;
}

/* FUNC(zx_sp_Status_REV_StatusMessage) */

void zx_sp_Status_REV_StatusMessage(struct zx_sp_Status_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->StatusMessage;
  if (!y) return;
  x->StatusMessage = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->StatusMessage->g;
    x->StatusMessage = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Status_PUT_StatusMessage) */

void zx_sp_Status_PUT_StatusMessage(struct zx_sp_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->StatusMessage;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->StatusMessage = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sp_Status_ADD_StatusMessage) */

void zx_sp_Status_ADD_StatusMessage(struct zx_sp_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->StatusMessage->g;
    x->StatusMessage = z;
    return;
  case -1:
    y = x->StatusMessage;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusMessage; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sp_Status_DEL_StatusMessage) */

void zx_sp_Status_DEL_StatusMessage(struct zx_sp_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusMessage = (struct zx_elem_s*)x->StatusMessage->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->StatusMessage;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusMessage; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_sp_Status_NUM_StatusDetail) */

int zx_sp_Status_NUM_StatusDetail(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusDetail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusDetail; y; ++n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_Status_GET_StatusDetail) */

struct zx_sp_StatusDetail_s* zx_sp_Status_GET_StatusDetail(struct zx_sp_Status_s* x, int n)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x) return 0;
  for (y = x->StatusDetail; n>=0 && y; --n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_Status_POP_StatusDetail) */

struct zx_sp_StatusDetail_s* zx_sp_Status_POP_StatusDetail(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x) return 0;
  y = x->StatusDetail;
  if (y)
    x->StatusDetail = (struct zx_sp_StatusDetail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_Status_PUSH_StatusDetail) */

void zx_sp_Status_PUSH_StatusDetail(struct zx_sp_Status_s* x, struct zx_sp_StatusDetail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusDetail->gg.g;
  x->StatusDetail = z;
}

/* FUNC(zx_sp_Status_REV_StatusDetail) */

void zx_sp_Status_REV_StatusDetail(struct zx_sp_Status_s* x)
{
  struct zx_sp_StatusDetail_s* nxt;
  struct zx_sp_StatusDetail_s* y;
  if (!x) return;
  y = x->StatusDetail;
  if (!y) return;
  x->StatusDetail = 0;
  while (y) {
    nxt = (struct zx_sp_StatusDetail_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusDetail->gg.g;
    x->StatusDetail = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_Status_PUT_StatusDetail) */

void zx_sp_Status_PUT_StatusDetail(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusDetail_s* z)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x || !z) return;
  y = x->StatusDetail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusDetail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_Status_ADD_StatusDetail) */

void zx_sp_Status_ADD_StatusDetail(struct zx_sp_Status_s* x, int n, struct zx_sp_StatusDetail_s* z)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->StatusDetail->gg.g;
    x->StatusDetail = z;
    return;
  case -1:
    y = x->StatusDetail;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusDetail; n > 1 && y; --n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_Status_DEL_StatusDetail) */

void zx_sp_Status_DEL_StatusDetail(struct zx_sp_Status_s* x, int n)
{
  struct zx_sp_StatusDetail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusDetail = (struct zx_sp_StatusDetail_s*)x->StatusDetail->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_StatusDetail_s*)x->StatusDetail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusDetail; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusDetail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_sp_StatusCode_NUM_StatusCode) */

int zx_sp_StatusCode_NUM_StatusCode(struct zx_sp_StatusCode_s* x)
{
  struct zx_sp_StatusCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_StatusCode_GET_StatusCode) */

struct zx_sp_StatusCode_s* zx_sp_StatusCode_GET_StatusCode(struct zx_sp_StatusCode_s* x, int n)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_StatusCode_POP_StatusCode) */

struct zx_sp_StatusCode_s* zx_sp_StatusCode_POP_StatusCode(struct zx_sp_StatusCode_s* x)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_sp_StatusCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_StatusCode_PUSH_StatusCode) */

void zx_sp_StatusCode_PUSH_StatusCode(struct zx_sp_StatusCode_s* x, struct zx_sp_StatusCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusCode->gg.g;
  x->StatusCode = z;
}

/* FUNC(zx_sp_StatusCode_REV_StatusCode) */

void zx_sp_StatusCode_REV_StatusCode(struct zx_sp_StatusCode_s* x)
{
  struct zx_sp_StatusCode_s* nxt;
  struct zx_sp_StatusCode_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_sp_StatusCode_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_StatusCode_PUT_StatusCode) */

void zx_sp_StatusCode_PUT_StatusCode(struct zx_sp_StatusCode_s* x, int n, struct zx_sp_StatusCode_s* z)
{
  struct zx_sp_StatusCode_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_StatusCode_ADD_StatusCode) */

void zx_sp_StatusCode_ADD_StatusCode(struct zx_sp_StatusCode_s* x, int n, struct zx_sp_StatusCode_s* z)
{
  struct zx_sp_StatusCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = z;
    return;
  case -1:
    y = x->StatusCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_StatusCode_DEL_StatusCode) */

void zx_sp_StatusCode_DEL_StatusCode(struct zx_sp_StatusCode_s* x, int n)
{
  struct zx_sp_StatusCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_sp_StatusCode_s*)x->StatusCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_StatusCode_s*)x->StatusCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_StatusCode_GET_Value) */
struct zx_str_s* zx_sp_StatusCode_GET_Value(struct zx_sp_StatusCode_s* x) { return x->Value; }
/* FUNC(zx_sp_StatusCode_PUT_Value) */
void zx_sp_StatusCode_PUT_Value(struct zx_sp_StatusCode_s* x, struct zx_str_s* y) { x->Value = y; }












/* FUNC(zx_sp_SubjectQuery_NUM_Issuer) */

int zx_sp_SubjectQuery_NUM_Issuer(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_SubjectQuery_GET_Issuer) */

struct zx_sa_Issuer_s* zx_sp_SubjectQuery_GET_Issuer(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_POP_Issuer) */

struct zx_sa_Issuer_s* zx_sp_SubjectQuery_POP_Issuer(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_sa_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_PUSH_Issuer) */

void zx_sp_SubjectQuery_PUSH_Issuer(struct zx_sp_SubjectQuery_s* x, struct zx_sa_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_sp_SubjectQuery_REV_Issuer) */

void zx_sp_SubjectQuery_REV_Issuer(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Issuer_s* nxt;
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_sa_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_SubjectQuery_PUT_Issuer) */

void zx_sp_SubjectQuery_PUT_Issuer(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_SubjectQuery_ADD_Issuer) */

void zx_sp_SubjectQuery_ADD_Issuer(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Issuer_s* z)
{
  struct zx_sa_Issuer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_SubjectQuery_DEL_Issuer) */

void zx_sp_SubjectQuery_DEL_Issuer(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sa_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_sa_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_SubjectQuery_NUM_Signature) */

int zx_sp_SubjectQuery_NUM_Signature(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_SubjectQuery_GET_Signature) */

struct zx_ds_Signature_s* zx_sp_SubjectQuery_GET_Signature(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_POP_Signature) */

struct zx_ds_Signature_s* zx_sp_SubjectQuery_POP_Signature(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_PUSH_Signature) */

void zx_sp_SubjectQuery_PUSH_Signature(struct zx_sp_SubjectQuery_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sp_SubjectQuery_REV_Signature) */

void zx_sp_SubjectQuery_REV_Signature(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_SubjectQuery_PUT_Signature) */

void zx_sp_SubjectQuery_PUT_Signature(struct zx_sp_SubjectQuery_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_SubjectQuery_ADD_Signature) */

void zx_sp_SubjectQuery_ADD_Signature(struct zx_sp_SubjectQuery_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_SubjectQuery_DEL_Signature) */

void zx_sp_SubjectQuery_DEL_Signature(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_sp_SubjectQuery_NUM_Extensions) */

int zx_sp_SubjectQuery_NUM_Extensions(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extensions; y; ++n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_SubjectQuery_GET_Extensions) */

struct zx_sp_Extensions_s* zx_sp_SubjectQuery_GET_Extensions(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  for (y = x->Extensions; n>=0 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_POP_Extensions) */

struct zx_sp_Extensions_s* zx_sp_SubjectQuery_POP_Extensions(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return 0;
  y = x->Extensions;
  if (y)
    x->Extensions = (struct zx_sp_Extensions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_PUSH_Extensions) */

void zx_sp_SubjectQuery_PUSH_Extensions(struct zx_sp_SubjectQuery_s* x, struct zx_sp_Extensions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extensions->gg.g;
  x->Extensions = z;
}

/* FUNC(zx_sp_SubjectQuery_REV_Extensions) */

void zx_sp_SubjectQuery_REV_Extensions(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sp_Extensions_s* nxt;
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  y = x->Extensions;
  if (!y) return;
  x->Extensions = 0;
  while (y) {
    nxt = (struct zx_sp_Extensions_s*)y->gg.g.n;
    y->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_SubjectQuery_PUT_Extensions) */

void zx_sp_SubjectQuery_PUT_Extensions(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  y = x->Extensions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extensions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_SubjectQuery_ADD_Extensions) */

void zx_sp_SubjectQuery_ADD_Extensions(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sp_Extensions_s* z)
{
  struct zx_sp_Extensions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extensions->gg.g;
    x->Extensions = z;
    return;
  case -1:
    y = x->Extensions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_SubjectQuery_DEL_Extensions) */

void zx_sp_SubjectQuery_DEL_Extensions(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sp_Extensions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extensions = (struct zx_sp_Extensions_s*)x->Extensions->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Extensions_s*)x->Extensions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extensions; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Extensions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_sp_SubjectQuery_GET_ID) */
struct zx_str_s* zx_sp_SubjectQuery_GET_ID(struct zx_sp_SubjectQuery_s* x) { return x->ID; }
/* FUNC(zx_sp_SubjectQuery_PUT_ID) */
void zx_sp_SubjectQuery_PUT_ID(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y) { x->ID = y; }
/* FUNC(zx_sp_SubjectQuery_GET_Version) */
struct zx_str_s* zx_sp_SubjectQuery_GET_Version(struct zx_sp_SubjectQuery_s* x) { return x->Version; }
/* FUNC(zx_sp_SubjectQuery_PUT_Version) */
void zx_sp_SubjectQuery_PUT_Version(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y) { x->Version = y; }
/* FUNC(zx_sp_SubjectQuery_GET_IssueInstant) */
struct zx_str_s* zx_sp_SubjectQuery_GET_IssueInstant(struct zx_sp_SubjectQuery_s* x) { return x->IssueInstant; }
/* FUNC(zx_sp_SubjectQuery_PUT_IssueInstant) */
void zx_sp_SubjectQuery_PUT_IssueInstant(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y) { x->IssueInstant = y; }
/* FUNC(zx_sp_SubjectQuery_GET_Destination) */
struct zx_str_s* zx_sp_SubjectQuery_GET_Destination(struct zx_sp_SubjectQuery_s* x) { return x->Destination; }
/* FUNC(zx_sp_SubjectQuery_PUT_Destination) */
void zx_sp_SubjectQuery_PUT_Destination(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y) { x->Destination = y; }
/* FUNC(zx_sp_SubjectQuery_GET_Consent) */
struct zx_str_s* zx_sp_SubjectQuery_GET_Consent(struct zx_sp_SubjectQuery_s* x) { return x->Consent; }
/* FUNC(zx_sp_SubjectQuery_PUT_Consent) */
void zx_sp_SubjectQuery_PUT_Consent(struct zx_sp_SubjectQuery_s* x, struct zx_str_s* y) { x->Consent = y; }


/* FUNC(zx_sp_SubjectQuery_NUM_Subject) */

int zx_sp_SubjectQuery_NUM_Subject(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sp_SubjectQuery_GET_Subject) */

struct zx_sa_Subject_s* zx_sp_SubjectQuery_GET_Subject(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_POP_Subject) */

struct zx_sa_Subject_s* zx_sp_SubjectQuery_POP_Subject(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sp_SubjectQuery_PUSH_Subject) */

void zx_sp_SubjectQuery_PUSH_Subject(struct zx_sp_SubjectQuery_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sp_SubjectQuery_REV_Subject) */

void zx_sp_SubjectQuery_REV_Subject(struct zx_sp_SubjectQuery_s* x)
{
  struct zx_sa_Subject_s* nxt;
  struct zx_sa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sp_SubjectQuery_PUT_Subject) */

void zx_sp_SubjectQuery_PUT_Subject(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sp_SubjectQuery_ADD_Subject) */

void zx_sp_SubjectQuery_ADD_Subject(struct zx_sp_SubjectQuery_s* x, int n, struct zx_sa_Subject_s* z)
{
  struct zx_sa_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sp_SubjectQuery_DEL_Subject) */

void zx_sp_SubjectQuery_DEL_Subject(struct zx_sp_SubjectQuery_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_xenc_AgreementMethod_NUM_KA_Nonce) */

int zx_xenc_AgreementMethod_NUM_KA_Nonce(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KA_Nonce; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_AgreementMethod_GET_KA_Nonce) */

struct zx_elem_s* zx_xenc_AgreementMethod_GET_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KA_Nonce; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_AgreementMethod_POP_KA_Nonce) */

struct zx_elem_s* zx_xenc_AgreementMethod_POP_KA_Nonce(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KA_Nonce;
  if (y)
    x->KA_Nonce = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_AgreementMethod_PUSH_KA_Nonce) */

void zx_xenc_AgreementMethod_PUSH_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KA_Nonce->g;
  x->KA_Nonce = z;
}

/* FUNC(zx_xenc_AgreementMethod_REV_KA_Nonce) */

void zx_xenc_AgreementMethod_REV_KA_Nonce(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KA_Nonce;
  if (!y) return;
  x->KA_Nonce = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KA_Nonce->g;
    x->KA_Nonce = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_AgreementMethod_PUT_KA_Nonce) */

void zx_xenc_AgreementMethod_PUT_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KA_Nonce;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KA_Nonce = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_AgreementMethod_ADD_KA_Nonce) */

void zx_xenc_AgreementMethod_ADD_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KA_Nonce->g;
    x->KA_Nonce = z;
    return;
  case -1:
    y = x->KA_Nonce;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KA_Nonce; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_AgreementMethod_DEL_KA_Nonce) */

void zx_xenc_AgreementMethod_DEL_KA_Nonce(struct zx_xenc_AgreementMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KA_Nonce = (struct zx_elem_s*)x->KA_Nonce->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KA_Nonce;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KA_Nonce; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_xenc_AgreementMethod_NUM_OriginatorKeyInfo) */

int zx_xenc_AgreementMethod_NUM_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_xenc_OriginatorKeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OriginatorKeyInfo; y; ++n, y = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_AgreementMethod_GET_OriginatorKeyInfo) */

struct zx_xenc_OriginatorKeyInfo_s* zx_xenc_AgreementMethod_GET_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n)
{
  struct zx_xenc_OriginatorKeyInfo_s* y;
  if (!x) return 0;
  for (y = x->OriginatorKeyInfo; n>=0 && y; --n, y = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_AgreementMethod_POP_OriginatorKeyInfo) */

struct zx_xenc_OriginatorKeyInfo_s* zx_xenc_AgreementMethod_POP_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_xenc_OriginatorKeyInfo_s* y;
  if (!x) return 0;
  y = x->OriginatorKeyInfo;
  if (y)
    x->OriginatorKeyInfo = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_AgreementMethod_PUSH_OriginatorKeyInfo) */

void zx_xenc_AgreementMethod_PUSH_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, struct zx_xenc_OriginatorKeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OriginatorKeyInfo->gg.g;
  x->OriginatorKeyInfo = z;
}

/* FUNC(zx_xenc_AgreementMethod_REV_OriginatorKeyInfo) */

void zx_xenc_AgreementMethod_REV_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_xenc_OriginatorKeyInfo_s* nxt;
  struct zx_xenc_OriginatorKeyInfo_s* y;
  if (!x) return;
  y = x->OriginatorKeyInfo;
  if (!y) return;
  x->OriginatorKeyInfo = 0;
  while (y) {
    nxt = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->OriginatorKeyInfo->gg.g;
    x->OriginatorKeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_AgreementMethod_PUT_OriginatorKeyInfo) */

void zx_xenc_AgreementMethod_PUT_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_OriginatorKeyInfo_s* z)
{
  struct zx_xenc_OriginatorKeyInfo_s* y;
  if (!x || !z) return;
  y = x->OriginatorKeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OriginatorKeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_AgreementMethod_ADD_OriginatorKeyInfo) */

void zx_xenc_AgreementMethod_ADD_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_OriginatorKeyInfo_s* z)
{
  struct zx_xenc_OriginatorKeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OriginatorKeyInfo->gg.g;
    x->OriginatorKeyInfo = z;
    return;
  case -1:
    y = x->OriginatorKeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OriginatorKeyInfo; n > 1 && y; --n, y = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_AgreementMethod_DEL_OriginatorKeyInfo) */

void zx_xenc_AgreementMethod_DEL_OriginatorKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n)
{
  struct zx_xenc_OriginatorKeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OriginatorKeyInfo = (struct zx_xenc_OriginatorKeyInfo_s*)x->OriginatorKeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_OriginatorKeyInfo_s*)x->OriginatorKeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OriginatorKeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_OriginatorKeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_AgreementMethod_NUM_RecipientKeyInfo) */

int zx_xenc_AgreementMethod_NUM_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_xenc_RecipientKeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RecipientKeyInfo; y; ++n, y = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_AgreementMethod_GET_RecipientKeyInfo) */

struct zx_xenc_RecipientKeyInfo_s* zx_xenc_AgreementMethod_GET_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n)
{
  struct zx_xenc_RecipientKeyInfo_s* y;
  if (!x) return 0;
  for (y = x->RecipientKeyInfo; n>=0 && y; --n, y = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_AgreementMethod_POP_RecipientKeyInfo) */

struct zx_xenc_RecipientKeyInfo_s* zx_xenc_AgreementMethod_POP_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_xenc_RecipientKeyInfo_s* y;
  if (!x) return 0;
  y = x->RecipientKeyInfo;
  if (y)
    x->RecipientKeyInfo = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_AgreementMethod_PUSH_RecipientKeyInfo) */

void zx_xenc_AgreementMethod_PUSH_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, struct zx_xenc_RecipientKeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RecipientKeyInfo->gg.g;
  x->RecipientKeyInfo = z;
}

/* FUNC(zx_xenc_AgreementMethod_REV_RecipientKeyInfo) */

void zx_xenc_AgreementMethod_REV_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x)
{
  struct zx_xenc_RecipientKeyInfo_s* nxt;
  struct zx_xenc_RecipientKeyInfo_s* y;
  if (!x) return;
  y = x->RecipientKeyInfo;
  if (!y) return;
  x->RecipientKeyInfo = 0;
  while (y) {
    nxt = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->RecipientKeyInfo->gg.g;
    x->RecipientKeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_AgreementMethod_PUT_RecipientKeyInfo) */

void zx_xenc_AgreementMethod_PUT_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_RecipientKeyInfo_s* z)
{
  struct zx_xenc_RecipientKeyInfo_s* y;
  if (!x || !z) return;
  y = x->RecipientKeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RecipientKeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_AgreementMethod_ADD_RecipientKeyInfo) */

void zx_xenc_AgreementMethod_ADD_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n, struct zx_xenc_RecipientKeyInfo_s* z)
{
  struct zx_xenc_RecipientKeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RecipientKeyInfo->gg.g;
    x->RecipientKeyInfo = z;
    return;
  case -1:
    y = x->RecipientKeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RecipientKeyInfo; n > 1 && y; --n, y = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_AgreementMethod_DEL_RecipientKeyInfo) */

void zx_xenc_AgreementMethod_DEL_RecipientKeyInfo(struct zx_xenc_AgreementMethod_s* x, int n)
{
  struct zx_xenc_RecipientKeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RecipientKeyInfo = (struct zx_xenc_RecipientKeyInfo_s*)x->RecipientKeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_RecipientKeyInfo_s*)x->RecipientKeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RecipientKeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_RecipientKeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_xenc_AgreementMethod_GET_Algorithm) */
struct zx_str_s* zx_xenc_AgreementMethod_GET_Algorithm(struct zx_xenc_AgreementMethod_s* x) { return x->Algorithm; }
/* FUNC(zx_xenc_AgreementMethod_PUT_Algorithm) */
void zx_xenc_AgreementMethod_PUT_Algorithm(struct zx_xenc_AgreementMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zx_xenc_CipherData_NUM_CipherValue) */

int zx_xenc_CipherData_NUM_CipherValue(struct zx_xenc_CipherData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CipherValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_CipherData_GET_CipherValue) */

struct zx_elem_s* zx_xenc_CipherData_GET_CipherValue(struct zx_xenc_CipherData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CipherValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_CipherData_POP_CipherValue) */

struct zx_elem_s* zx_xenc_CipherData_POP_CipherValue(struct zx_xenc_CipherData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CipherValue;
  if (y)
    x->CipherValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_CipherData_PUSH_CipherValue) */

void zx_xenc_CipherData_PUSH_CipherValue(struct zx_xenc_CipherData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CipherValue->g;
  x->CipherValue = z;
}

/* FUNC(zx_xenc_CipherData_REV_CipherValue) */

void zx_xenc_CipherData_REV_CipherValue(struct zx_xenc_CipherData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CipherValue;
  if (!y) return;
  x->CipherValue = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CipherValue->g;
    x->CipherValue = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_CipherData_PUT_CipherValue) */

void zx_xenc_CipherData_PUT_CipherValue(struct zx_xenc_CipherData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CipherValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CipherValue = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_CipherData_ADD_CipherValue) */

void zx_xenc_CipherData_ADD_CipherValue(struct zx_xenc_CipherData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CipherValue->g;
    x->CipherValue = z;
    return;
  case -1:
    y = x->CipherValue;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CipherValue; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_CipherData_DEL_CipherValue) */

void zx_xenc_CipherData_DEL_CipherValue(struct zx_xenc_CipherData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CipherValue = (struct zx_elem_s*)x->CipherValue->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CipherValue;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CipherValue; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_xenc_CipherData_NUM_CipherReference) */

int zx_xenc_CipherData_NUM_CipherReference(struct zx_xenc_CipherData_s* x)
{
  struct zx_xenc_CipherReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CipherReference; y; ++n, y = (struct zx_xenc_CipherReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_CipherData_GET_CipherReference) */

struct zx_xenc_CipherReference_s* zx_xenc_CipherData_GET_CipherReference(struct zx_xenc_CipherData_s* x, int n)
{
  struct zx_xenc_CipherReference_s* y;
  if (!x) return 0;
  for (y = x->CipherReference; n>=0 && y; --n, y = (struct zx_xenc_CipherReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_CipherData_POP_CipherReference) */

struct zx_xenc_CipherReference_s* zx_xenc_CipherData_POP_CipherReference(struct zx_xenc_CipherData_s* x)
{
  struct zx_xenc_CipherReference_s* y;
  if (!x) return 0;
  y = x->CipherReference;
  if (y)
    x->CipherReference = (struct zx_xenc_CipherReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_CipherData_PUSH_CipherReference) */

void zx_xenc_CipherData_PUSH_CipherReference(struct zx_xenc_CipherData_s* x, struct zx_xenc_CipherReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CipherReference->gg.g;
  x->CipherReference = z;
}

/* FUNC(zx_xenc_CipherData_REV_CipherReference) */

void zx_xenc_CipherData_REV_CipherReference(struct zx_xenc_CipherData_s* x)
{
  struct zx_xenc_CipherReference_s* nxt;
  struct zx_xenc_CipherReference_s* y;
  if (!x) return;
  y = x->CipherReference;
  if (!y) return;
  x->CipherReference = 0;
  while (y) {
    nxt = (struct zx_xenc_CipherReference_s*)y->gg.g.n;
    y->gg.g.n = &x->CipherReference->gg.g;
    x->CipherReference = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_CipherData_PUT_CipherReference) */

void zx_xenc_CipherData_PUT_CipherReference(struct zx_xenc_CipherData_s* x, int n, struct zx_xenc_CipherReference_s* z)
{
  struct zx_xenc_CipherReference_s* y;
  if (!x || !z) return;
  y = x->CipherReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CipherReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_CipherReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_CipherData_ADD_CipherReference) */

void zx_xenc_CipherData_ADD_CipherReference(struct zx_xenc_CipherData_s* x, int n, struct zx_xenc_CipherReference_s* z)
{
  struct zx_xenc_CipherReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CipherReference->gg.g;
    x->CipherReference = z;
    return;
  case -1:
    y = x->CipherReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_CipherReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherReference; n > 1 && y; --n, y = (struct zx_xenc_CipherReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_CipherData_DEL_CipherReference) */

void zx_xenc_CipherData_DEL_CipherReference(struct zx_xenc_CipherData_s* x, int n)
{
  struct zx_xenc_CipherReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CipherReference = (struct zx_xenc_CipherReference_s*)x->CipherReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_CipherReference_s*)x->CipherReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_CipherReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherReference; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_CipherReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_xenc_CipherReference_NUM_Transforms) */

int zx_xenc_CipherReference_NUM_Transforms(struct zx_xenc_CipherReference_s* x)
{
  struct zx_xenc_Transforms_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transforms; y; ++n, y = (struct zx_xenc_Transforms_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_CipherReference_GET_Transforms) */

struct zx_xenc_Transforms_s* zx_xenc_CipherReference_GET_Transforms(struct zx_xenc_CipherReference_s* x, int n)
{
  struct zx_xenc_Transforms_s* y;
  if (!x) return 0;
  for (y = x->Transforms; n>=0 && y; --n, y = (struct zx_xenc_Transforms_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_CipherReference_POP_Transforms) */

struct zx_xenc_Transforms_s* zx_xenc_CipherReference_POP_Transforms(struct zx_xenc_CipherReference_s* x)
{
  struct zx_xenc_Transforms_s* y;
  if (!x) return 0;
  y = x->Transforms;
  if (y)
    x->Transforms = (struct zx_xenc_Transforms_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_CipherReference_PUSH_Transforms) */

void zx_xenc_CipherReference_PUSH_Transforms(struct zx_xenc_CipherReference_s* x, struct zx_xenc_Transforms_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transforms->gg.g;
  x->Transforms = z;
}

/* FUNC(zx_xenc_CipherReference_REV_Transforms) */

void zx_xenc_CipherReference_REV_Transforms(struct zx_xenc_CipherReference_s* x)
{
  struct zx_xenc_Transforms_s* nxt;
  struct zx_xenc_Transforms_s* y;
  if (!x) return;
  y = x->Transforms;
  if (!y) return;
  x->Transforms = 0;
  while (y) {
    nxt = (struct zx_xenc_Transforms_s*)y->gg.g.n;
    y->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_CipherReference_PUT_Transforms) */

void zx_xenc_CipherReference_PUT_Transforms(struct zx_xenc_CipherReference_s* x, int n, struct zx_xenc_Transforms_s* z)
{
  struct zx_xenc_Transforms_s* y;
  if (!x || !z) return;
  y = x->Transforms;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transforms = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_CipherReference_ADD_Transforms) */

void zx_xenc_CipherReference_ADD_Transforms(struct zx_xenc_CipherReference_s* x, int n, struct zx_xenc_Transforms_s* z)
{
  struct zx_xenc_Transforms_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transforms->gg.g;
    x->Transforms = z;
    return;
  case -1:
    y = x->Transforms;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y; --n, y = (struct zx_xenc_Transforms_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_CipherReference_DEL_Transforms) */

void zx_xenc_CipherReference_DEL_Transforms(struct zx_xenc_CipherReference_s* x, int n)
{
  struct zx_xenc_Transforms_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transforms = (struct zx_xenc_Transforms_s*)x->Transforms->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_Transforms_s*)x->Transforms;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_Transforms_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transforms; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_Transforms_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_xenc_CipherReference_GET_URI) */
struct zx_str_s* zx_xenc_CipherReference_GET_URI(struct zx_xenc_CipherReference_s* x) { return x->URI; }
/* FUNC(zx_xenc_CipherReference_PUT_URI) */
void zx_xenc_CipherReference_PUT_URI(struct zx_xenc_CipherReference_s* x, struct zx_str_s* y) { x->URI = y; }





/* FUNC(zx_xenc_DataReference_GET_URI) */
struct zx_str_s* zx_xenc_DataReference_GET_URI(struct zx_xenc_DataReference_s* x) { return x->URI; }
/* FUNC(zx_xenc_DataReference_PUT_URI) */
void zx_xenc_DataReference_PUT_URI(struct zx_xenc_DataReference_s* x, struct zx_str_s* y) { x->URI = y; }







/* FUNC(zx_xenc_EncryptedData_NUM_EncryptionMethod) */

int zx_xenc_EncryptedData_NUM_EncryptionMethod(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_EncryptionMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionMethod; y; ++n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedData_GET_EncryptionMethod) */

struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedData_GET_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x) return 0;
  for (y = x->EncryptionMethod; n>=0 && y; --n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedData_POP_EncryptionMethod) */

struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedData_POP_EncryptionMethod(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x) return 0;
  y = x->EncryptionMethod;
  if (y)
    x->EncryptionMethod = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedData_PUSH_EncryptionMethod) */

void zx_xenc_EncryptedData_PUSH_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_EncryptionMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionMethod->gg.g;
  x->EncryptionMethod = z;
}

/* FUNC(zx_xenc_EncryptedData_REV_EncryptionMethod) */

void zx_xenc_EncryptedData_REV_EncryptionMethod(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_EncryptionMethod_s* nxt;
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x) return;
  y = x->EncryptionMethod;
  if (!y) return;
  x->EncryptionMethod = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedData_PUT_EncryptionMethod) */

void zx_xenc_EncryptedData_PUT_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionMethod_s* z)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x || !z) return;
  y = x->EncryptionMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedData_ADD_EncryptionMethod) */

void zx_xenc_EncryptedData_ADD_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionMethod_s* z)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = z;
    return;
  case -1:
    y = x->EncryptionMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y; --n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedData_DEL_EncryptionMethod) */

void zx_xenc_EncryptedData_DEL_EncryptionMethod(struct zx_xenc_EncryptedData_s* x, int n)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionMethod = (struct zx_xenc_EncryptionMethod_s*)x->EncryptionMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptionMethod_s*)x->EncryptionMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_EncryptedData_NUM_KeyInfo) */

int zx_xenc_EncryptedData_NUM_KeyInfo(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedData_GET_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_xenc_EncryptedData_GET_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedData_POP_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_xenc_EncryptedData_POP_KeyInfo(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedData_PUSH_KeyInfo) */

void zx_xenc_EncryptedData_PUSH_KeyInfo(struct zx_xenc_EncryptedData_s* x, struct zx_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zx_xenc_EncryptedData_REV_KeyInfo) */

void zx_xenc_EncryptedData_REV_KeyInfo(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_ds_KeyInfo_s* nxt;
  struct zx_ds_KeyInfo_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedData_PUT_KeyInfo) */

void zx_xenc_EncryptedData_PUT_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n, struct zx_ds_KeyInfo_s* z)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedData_ADD_KeyInfo) */

void zx_xenc_EncryptedData_ADD_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n, struct zx_ds_KeyInfo_s* z)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedData_DEL_KeyInfo) */

void zx_xenc_EncryptedData_DEL_KeyInfo(struct zx_xenc_EncryptedData_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)x->KeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_KeyInfo_s*)x->KeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_EncryptedData_NUM_CipherData) */

int zx_xenc_EncryptedData_NUM_CipherData(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_CipherData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CipherData; y; ++n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedData_GET_CipherData) */

struct zx_xenc_CipherData_s* zx_xenc_EncryptedData_GET_CipherData(struct zx_xenc_EncryptedData_s* x, int n)
{
  struct zx_xenc_CipherData_s* y;
  if (!x) return 0;
  for (y = x->CipherData; n>=0 && y; --n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedData_POP_CipherData) */

struct zx_xenc_CipherData_s* zx_xenc_EncryptedData_POP_CipherData(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_CipherData_s* y;
  if (!x) return 0;
  y = x->CipherData;
  if (y)
    x->CipherData = (struct zx_xenc_CipherData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedData_PUSH_CipherData) */

void zx_xenc_EncryptedData_PUSH_CipherData(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_CipherData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CipherData->gg.g;
  x->CipherData = z;
}

/* FUNC(zx_xenc_EncryptedData_REV_CipherData) */

void zx_xenc_EncryptedData_REV_CipherData(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_CipherData_s* nxt;
  struct zx_xenc_CipherData_s* y;
  if (!x) return;
  y = x->CipherData;
  if (!y) return;
  x->CipherData = 0;
  while (y) {
    nxt = (struct zx_xenc_CipherData_s*)y->gg.g.n;
    y->gg.g.n = &x->CipherData->gg.g;
    x->CipherData = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedData_PUT_CipherData) */

void zx_xenc_EncryptedData_PUT_CipherData(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_CipherData_s* z)
{
  struct zx_xenc_CipherData_s* y;
  if (!x || !z) return;
  y = x->CipherData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CipherData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedData_ADD_CipherData) */

void zx_xenc_EncryptedData_ADD_CipherData(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_CipherData_s* z)
{
  struct zx_xenc_CipherData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CipherData->gg.g;
    x->CipherData = z;
    return;
  case -1:
    y = x->CipherData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherData; n > 1 && y; --n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedData_DEL_CipherData) */

void zx_xenc_EncryptedData_DEL_CipherData(struct zx_xenc_EncryptedData_s* x, int n)
{
  struct zx_xenc_CipherData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CipherData = (struct zx_xenc_CipherData_s*)x->CipherData->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_CipherData_s*)x->CipherData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherData; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_EncryptedData_NUM_EncryptionProperties) */

int zx_xenc_EncryptedData_NUM_EncryptionProperties(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_EncryptionProperties_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionProperties; y; ++n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedData_GET_EncryptionProperties) */

struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedData_GET_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x) return 0;
  for (y = x->EncryptionProperties; n>=0 && y; --n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedData_POP_EncryptionProperties) */

struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedData_POP_EncryptionProperties(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x) return 0;
  y = x->EncryptionProperties;
  if (y)
    x->EncryptionProperties = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedData_PUSH_EncryptionProperties) */

void zx_xenc_EncryptedData_PUSH_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, struct zx_xenc_EncryptionProperties_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionProperties->gg.g;
  x->EncryptionProperties = z;
}

/* FUNC(zx_xenc_EncryptedData_REV_EncryptionProperties) */

void zx_xenc_EncryptedData_REV_EncryptionProperties(struct zx_xenc_EncryptedData_s* x)
{
  struct zx_xenc_EncryptionProperties_s* nxt;
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x) return;
  y = x->EncryptionProperties;
  if (!y) return;
  x->EncryptionProperties = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionProperties->gg.g;
    x->EncryptionProperties = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedData_PUT_EncryptionProperties) */

void zx_xenc_EncryptedData_PUT_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionProperties_s* z)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x || !z) return;
  y = x->EncryptionProperties;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionProperties = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedData_ADD_EncryptionProperties) */

void zx_xenc_EncryptedData_ADD_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n, struct zx_xenc_EncryptionProperties_s* z)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionProperties->gg.g;
    x->EncryptionProperties = z;
    return;
  case -1:
    y = x->EncryptionProperties;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperties; n > 1 && y; --n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedData_DEL_EncryptionProperties) */

void zx_xenc_EncryptedData_DEL_EncryptionProperties(struct zx_xenc_EncryptedData_s* x, int n)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionProperties = (struct zx_xenc_EncryptionProperties_s*)x->EncryptionProperties->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptionProperties_s*)x->EncryptionProperties;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperties; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_xenc_EncryptedData_GET_Id) */
struct zx_str_s* zx_xenc_EncryptedData_GET_Id(struct zx_xenc_EncryptedData_s* x) { return x->Id; }
/* FUNC(zx_xenc_EncryptedData_PUT_Id) */
void zx_xenc_EncryptedData_PUT_Id(struct zx_xenc_EncryptedData_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zx_xenc_EncryptedData_GET_Type) */
struct zx_str_s* zx_xenc_EncryptedData_GET_Type(struct zx_xenc_EncryptedData_s* x) { return x->Type; }
/* FUNC(zx_xenc_EncryptedData_PUT_Type) */
void zx_xenc_EncryptedData_PUT_Type(struct zx_xenc_EncryptedData_s* x, struct zx_str_s* y) { x->Type = y; }
/* FUNC(zx_xenc_EncryptedData_GET_MimeType) */
struct zx_str_s* zx_xenc_EncryptedData_GET_MimeType(struct zx_xenc_EncryptedData_s* x) { return x->MimeType; }
/* FUNC(zx_xenc_EncryptedData_PUT_MimeType) */
void zx_xenc_EncryptedData_PUT_MimeType(struct zx_xenc_EncryptedData_s* x, struct zx_str_s* y) { x->MimeType = y; }
/* FUNC(zx_xenc_EncryptedData_GET_Encoding) */
struct zx_str_s* zx_xenc_EncryptedData_GET_Encoding(struct zx_xenc_EncryptedData_s* x) { return x->Encoding; }
/* FUNC(zx_xenc_EncryptedData_PUT_Encoding) */
void zx_xenc_EncryptedData_PUT_Encoding(struct zx_xenc_EncryptedData_s* x, struct zx_str_s* y) { x->Encoding = y; }







/* FUNC(zx_xenc_EncryptedKey_NUM_EncryptionMethod) */

int zx_xenc_EncryptedKey_NUM_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_EncryptionMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionMethod; y; ++n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedKey_GET_EncryptionMethod) */

struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedKey_GET_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x) return 0;
  for (y = x->EncryptionMethod; n>=0 && y; --n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_POP_EncryptionMethod) */

struct zx_xenc_EncryptionMethod_s* zx_xenc_EncryptedKey_POP_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x) return 0;
  y = x->EncryptionMethod;
  if (y)
    x->EncryptionMethod = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_PUSH_EncryptionMethod) */

void zx_xenc_EncryptedKey_PUSH_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_EncryptionMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionMethod->gg.g;
  x->EncryptionMethod = z;
}

/* FUNC(zx_xenc_EncryptedKey_REV_EncryptionMethod) */

void zx_xenc_EncryptedKey_REV_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_EncryptionMethod_s* nxt;
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x) return;
  y = x->EncryptionMethod;
  if (!y) return;
  x->EncryptionMethod = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedKey_PUT_EncryptionMethod) */

void zx_xenc_EncryptedKey_PUT_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionMethod_s* z)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x || !z) return;
  y = x->EncryptionMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedKey_ADD_EncryptionMethod) */

void zx_xenc_EncryptedKey_ADD_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionMethod_s* z)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionMethod->gg.g;
    x->EncryptionMethod = z;
    return;
  case -1:
    y = x->EncryptionMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y; --n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedKey_DEL_EncryptionMethod) */

void zx_xenc_EncryptedKey_DEL_EncryptionMethod(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_xenc_EncryptionMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionMethod = (struct zx_xenc_EncryptionMethod_s*)x->EncryptionMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptionMethod_s*)x->EncryptionMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_EncryptedKey_NUM_KeyInfo) */

int zx_xenc_EncryptedKey_NUM_KeyInfo(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedKey_GET_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_xenc_EncryptedKey_GET_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_POP_KeyInfo) */

struct zx_ds_KeyInfo_s* zx_xenc_EncryptedKey_POP_KeyInfo(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_PUSH_KeyInfo) */

void zx_xenc_EncryptedKey_PUSH_KeyInfo(struct zx_xenc_EncryptedKey_s* x, struct zx_ds_KeyInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyInfo->gg.g;
  x->KeyInfo = z;
}

/* FUNC(zx_xenc_EncryptedKey_REV_KeyInfo) */

void zx_xenc_EncryptedKey_REV_KeyInfo(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_ds_KeyInfo_s* nxt;
  struct zx_ds_KeyInfo_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zx_ds_KeyInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedKey_PUT_KeyInfo) */

void zx_xenc_EncryptedKey_PUT_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_ds_KeyInfo_s* z)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedKey_ADD_KeyInfo) */

void zx_xenc_EncryptedKey_ADD_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_ds_KeyInfo_s* z)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyInfo->gg.g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedKey_DEL_KeyInfo) */

void zx_xenc_EncryptedKey_DEL_KeyInfo(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_ds_KeyInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zx_ds_KeyInfo_s*)x->KeyInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_KeyInfo_s*)x->KeyInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_EncryptedKey_NUM_CipherData) */

int zx_xenc_EncryptedKey_NUM_CipherData(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_CipherData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CipherData; y; ++n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedKey_GET_CipherData) */

struct zx_xenc_CipherData_s* zx_xenc_EncryptedKey_GET_CipherData(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_xenc_CipherData_s* y;
  if (!x) return 0;
  for (y = x->CipherData; n>=0 && y; --n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_POP_CipherData) */

struct zx_xenc_CipherData_s* zx_xenc_EncryptedKey_POP_CipherData(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_CipherData_s* y;
  if (!x) return 0;
  y = x->CipherData;
  if (y)
    x->CipherData = (struct zx_xenc_CipherData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_PUSH_CipherData) */

void zx_xenc_EncryptedKey_PUSH_CipherData(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_CipherData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CipherData->gg.g;
  x->CipherData = z;
}

/* FUNC(zx_xenc_EncryptedKey_REV_CipherData) */

void zx_xenc_EncryptedKey_REV_CipherData(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_CipherData_s* nxt;
  struct zx_xenc_CipherData_s* y;
  if (!x) return;
  y = x->CipherData;
  if (!y) return;
  x->CipherData = 0;
  while (y) {
    nxt = (struct zx_xenc_CipherData_s*)y->gg.g.n;
    y->gg.g.n = &x->CipherData->gg.g;
    x->CipherData = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedKey_PUT_CipherData) */

void zx_xenc_EncryptedKey_PUT_CipherData(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_CipherData_s* z)
{
  struct zx_xenc_CipherData_s* y;
  if (!x || !z) return;
  y = x->CipherData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CipherData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedKey_ADD_CipherData) */

void zx_xenc_EncryptedKey_ADD_CipherData(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_CipherData_s* z)
{
  struct zx_xenc_CipherData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CipherData->gg.g;
    x->CipherData = z;
    return;
  case -1:
    y = x->CipherData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherData; n > 1 && y; --n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedKey_DEL_CipherData) */

void zx_xenc_EncryptedKey_DEL_CipherData(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_xenc_CipherData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CipherData = (struct zx_xenc_CipherData_s*)x->CipherData->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_CipherData_s*)x->CipherData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CipherData; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_CipherData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_EncryptedKey_NUM_EncryptionProperties) */

int zx_xenc_EncryptedKey_NUM_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_EncryptionProperties_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionProperties; y; ++n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedKey_GET_EncryptionProperties) */

struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedKey_GET_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x) return 0;
  for (y = x->EncryptionProperties; n>=0 && y; --n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_POP_EncryptionProperties) */

struct zx_xenc_EncryptionProperties_s* zx_xenc_EncryptedKey_POP_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x) return 0;
  y = x->EncryptionProperties;
  if (y)
    x->EncryptionProperties = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_PUSH_EncryptionProperties) */

void zx_xenc_EncryptedKey_PUSH_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_EncryptionProperties_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionProperties->gg.g;
  x->EncryptionProperties = z;
}

/* FUNC(zx_xenc_EncryptedKey_REV_EncryptionProperties) */

void zx_xenc_EncryptedKey_REV_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_EncryptionProperties_s* nxt;
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x) return;
  y = x->EncryptionProperties;
  if (!y) return;
  x->EncryptionProperties = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionProperties->gg.g;
    x->EncryptionProperties = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedKey_PUT_EncryptionProperties) */

void zx_xenc_EncryptedKey_PUT_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionProperties_s* z)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x || !z) return;
  y = x->EncryptionProperties;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionProperties = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedKey_ADD_EncryptionProperties) */

void zx_xenc_EncryptedKey_ADD_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_EncryptionProperties_s* z)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionProperties->gg.g;
    x->EncryptionProperties = z;
    return;
  case -1:
    y = x->EncryptionProperties;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperties; n > 1 && y; --n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedKey_DEL_EncryptionProperties) */

void zx_xenc_EncryptedKey_DEL_EncryptionProperties(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_xenc_EncryptionProperties_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionProperties = (struct zx_xenc_EncryptionProperties_s*)x->EncryptionProperties->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptionProperties_s*)x->EncryptionProperties;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperties; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionProperties_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_xenc_EncryptedKey_GET_Id) */
struct zx_str_s* zx_xenc_EncryptedKey_GET_Id(struct zx_xenc_EncryptedKey_s* x) { return x->Id; }
/* FUNC(zx_xenc_EncryptedKey_PUT_Id) */
void zx_xenc_EncryptedKey_PUT_Id(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zx_xenc_EncryptedKey_GET_Type) */
struct zx_str_s* zx_xenc_EncryptedKey_GET_Type(struct zx_xenc_EncryptedKey_s* x) { return x->Type; }
/* FUNC(zx_xenc_EncryptedKey_PUT_Type) */
void zx_xenc_EncryptedKey_PUT_Type(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->Type = y; }
/* FUNC(zx_xenc_EncryptedKey_GET_MimeType) */
struct zx_str_s* zx_xenc_EncryptedKey_GET_MimeType(struct zx_xenc_EncryptedKey_s* x) { return x->MimeType; }
/* FUNC(zx_xenc_EncryptedKey_PUT_MimeType) */
void zx_xenc_EncryptedKey_PUT_MimeType(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->MimeType = y; }
/* FUNC(zx_xenc_EncryptedKey_GET_Encoding) */
struct zx_str_s* zx_xenc_EncryptedKey_GET_Encoding(struct zx_xenc_EncryptedKey_s* x) { return x->Encoding; }
/* FUNC(zx_xenc_EncryptedKey_PUT_Encoding) */
void zx_xenc_EncryptedKey_PUT_Encoding(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->Encoding = y; }


/* FUNC(zx_xenc_EncryptedKey_NUM_ReferenceList) */

int zx_xenc_EncryptedKey_NUM_ReferenceList(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_ReferenceList_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceList; y; ++n, y = (struct zx_xenc_ReferenceList_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedKey_GET_ReferenceList) */

struct zx_xenc_ReferenceList_s* zx_xenc_EncryptedKey_GET_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_xenc_ReferenceList_s* y;
  if (!x) return 0;
  for (y = x->ReferenceList; n>=0 && y; --n, y = (struct zx_xenc_ReferenceList_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_POP_ReferenceList) */

struct zx_xenc_ReferenceList_s* zx_xenc_EncryptedKey_POP_ReferenceList(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_ReferenceList_s* y;
  if (!x) return 0;
  y = x->ReferenceList;
  if (y)
    x->ReferenceList = (struct zx_xenc_ReferenceList_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_PUSH_ReferenceList) */

void zx_xenc_EncryptedKey_PUSH_ReferenceList(struct zx_xenc_EncryptedKey_s* x, struct zx_xenc_ReferenceList_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceList->gg.g;
  x->ReferenceList = z;
}

/* FUNC(zx_xenc_EncryptedKey_REV_ReferenceList) */

void zx_xenc_EncryptedKey_REV_ReferenceList(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_xenc_ReferenceList_s* nxt;
  struct zx_xenc_ReferenceList_s* y;
  if (!x) return;
  y = x->ReferenceList;
  if (!y) return;
  x->ReferenceList = 0;
  while (y) {
    nxt = (struct zx_xenc_ReferenceList_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceList->gg.g;
    x->ReferenceList = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedKey_PUT_ReferenceList) */

void zx_xenc_EncryptedKey_PUT_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_ReferenceList_s* z)
{
  struct zx_xenc_ReferenceList_s* y;
  if (!x || !z) return;
  y = x->ReferenceList;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceList = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_ReferenceList_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptedKey_ADD_ReferenceList) */

void zx_xenc_EncryptedKey_ADD_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_xenc_ReferenceList_s* z)
{
  struct zx_xenc_ReferenceList_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReferenceList->gg.g;
    x->ReferenceList = z;
    return;
  case -1:
    y = x->ReferenceList;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_ReferenceList_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceList; n > 1 && y; --n, y = (struct zx_xenc_ReferenceList_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptedKey_DEL_ReferenceList) */

void zx_xenc_EncryptedKey_DEL_ReferenceList(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_xenc_ReferenceList_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceList = (struct zx_xenc_ReferenceList_s*)x->ReferenceList->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_ReferenceList_s*)x->ReferenceList;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_ReferenceList_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceList; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_ReferenceList_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_EncryptedKey_NUM_CarriedKeyName) */

int zx_xenc_EncryptedKey_NUM_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CarriedKeyName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptedKey_GET_CarriedKeyName) */

struct zx_elem_s* zx_xenc_EncryptedKey_GET_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CarriedKeyName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_POP_CarriedKeyName) */

struct zx_elem_s* zx_xenc_EncryptedKey_POP_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CarriedKeyName;
  if (y)
    x->CarriedKeyName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptedKey_PUSH_CarriedKeyName) */

void zx_xenc_EncryptedKey_PUSH_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CarriedKeyName->g;
  x->CarriedKeyName = z;
}

/* FUNC(zx_xenc_EncryptedKey_REV_CarriedKeyName) */

void zx_xenc_EncryptedKey_REV_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CarriedKeyName;
  if (!y) return;
  x->CarriedKeyName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CarriedKeyName->g;
    x->CarriedKeyName = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptedKey_PUT_CarriedKeyName) */

void zx_xenc_EncryptedKey_PUT_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CarriedKeyName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CarriedKeyName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_EncryptedKey_ADD_CarriedKeyName) */

void zx_xenc_EncryptedKey_ADD_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CarriedKeyName->g;
    x->CarriedKeyName = z;
    return;
  case -1:
    y = x->CarriedKeyName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CarriedKeyName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_EncryptedKey_DEL_CarriedKeyName) */

void zx_xenc_EncryptedKey_DEL_CarriedKeyName(struct zx_xenc_EncryptedKey_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CarriedKeyName = (struct zx_elem_s*)x->CarriedKeyName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CarriedKeyName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CarriedKeyName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_xenc_EncryptedKey_GET_Recipient) */
struct zx_str_s* zx_xenc_EncryptedKey_GET_Recipient(struct zx_xenc_EncryptedKey_s* x) { return x->Recipient; }
/* FUNC(zx_xenc_EncryptedKey_PUT_Recipient) */
void zx_xenc_EncryptedKey_PUT_Recipient(struct zx_xenc_EncryptedKey_s* x, struct zx_str_s* y) { x->Recipient = y; }







/* FUNC(zx_xenc_EncryptionMethod_NUM_KeySize) */

int zx_xenc_EncryptionMethod_NUM_KeySize(struct zx_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeySize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptionMethod_GET_KeySize) */

struct zx_elem_s* zx_xenc_EncryptionMethod_GET_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeySize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptionMethod_POP_KeySize) */

struct zx_elem_s* zx_xenc_EncryptionMethod_POP_KeySize(struct zx_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeySize;
  if (y)
    x->KeySize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptionMethod_PUSH_KeySize) */

void zx_xenc_EncryptionMethod_PUSH_KeySize(struct zx_xenc_EncryptionMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeySize->g;
  x->KeySize = z;
}

/* FUNC(zx_xenc_EncryptionMethod_REV_KeySize) */

void zx_xenc_EncryptionMethod_REV_KeySize(struct zx_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeySize;
  if (!y) return;
  x->KeySize = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeySize->g;
    x->KeySize = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptionMethod_PUT_KeySize) */

void zx_xenc_EncryptionMethod_PUT_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeySize;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeySize = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_EncryptionMethod_ADD_KeySize) */

void zx_xenc_EncryptionMethod_ADD_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeySize->g;
    x->KeySize = z;
    return;
  case -1:
    y = x->KeySize;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeySize; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_EncryptionMethod_DEL_KeySize) */

void zx_xenc_EncryptionMethod_DEL_KeySize(struct zx_xenc_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeySize = (struct zx_elem_s*)x->KeySize->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeySize;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeySize; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_xenc_EncryptionMethod_NUM_OAEPparams) */

int zx_xenc_EncryptionMethod_NUM_OAEPparams(struct zx_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OAEPparams; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptionMethod_GET_OAEPparams) */

struct zx_elem_s* zx_xenc_EncryptionMethod_GET_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->OAEPparams; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptionMethod_POP_OAEPparams) */

struct zx_elem_s* zx_xenc_EncryptionMethod_POP_OAEPparams(struct zx_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->OAEPparams;
  if (y)
    x->OAEPparams = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptionMethod_PUSH_OAEPparams) */

void zx_xenc_EncryptionMethod_PUSH_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->OAEPparams->g;
  x->OAEPparams = z;
}

/* FUNC(zx_xenc_EncryptionMethod_REV_OAEPparams) */

void zx_xenc_EncryptionMethod_REV_OAEPparams(struct zx_xenc_EncryptionMethod_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->OAEPparams;
  if (!y) return;
  x->OAEPparams = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->OAEPparams->g;
    x->OAEPparams = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptionMethod_PUT_OAEPparams) */

void zx_xenc_EncryptionMethod_PUT_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->OAEPparams;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->OAEPparams = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_EncryptionMethod_ADD_OAEPparams) */

void zx_xenc_EncryptionMethod_ADD_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->OAEPparams->g;
    x->OAEPparams = z;
    return;
  case -1:
    y = x->OAEPparams;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->OAEPparams; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_EncryptionMethod_DEL_OAEPparams) */

void zx_xenc_EncryptionMethod_DEL_OAEPparams(struct zx_xenc_EncryptionMethod_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OAEPparams = (struct zx_elem_s*)x->OAEPparams->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->OAEPparams;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->OAEPparams; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_xenc_EncryptionMethod_GET_Algorithm) */
struct zx_str_s* zx_xenc_EncryptionMethod_GET_Algorithm(struct zx_xenc_EncryptionMethod_s* x) { return x->Algorithm; }
/* FUNC(zx_xenc_EncryptionMethod_PUT_Algorithm) */
void zx_xenc_EncryptionMethod_PUT_Algorithm(struct zx_xenc_EncryptionMethod_s* x, struct zx_str_s* y) { x->Algorithm = y; }







/* FUNC(zx_xenc_EncryptionProperties_NUM_EncryptionProperty) */

int zx_xenc_EncryptionProperties_NUM_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x)
{
  struct zx_xenc_EncryptionProperty_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionProperty; y; ++n, y = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_EncryptionProperties_GET_EncryptionProperty) */

struct zx_xenc_EncryptionProperty_s* zx_xenc_EncryptionProperties_GET_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n)
{
  struct zx_xenc_EncryptionProperty_s* y;
  if (!x) return 0;
  for (y = x->EncryptionProperty; n>=0 && y; --n, y = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_EncryptionProperties_POP_EncryptionProperty) */

struct zx_xenc_EncryptionProperty_s* zx_xenc_EncryptionProperties_POP_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x)
{
  struct zx_xenc_EncryptionProperty_s* y;
  if (!x) return 0;
  y = x->EncryptionProperty;
  if (y)
    x->EncryptionProperty = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_EncryptionProperties_PUSH_EncryptionProperty) */

void zx_xenc_EncryptionProperties_PUSH_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, struct zx_xenc_EncryptionProperty_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptionProperty->gg.g;
  x->EncryptionProperty = z;
}

/* FUNC(zx_xenc_EncryptionProperties_REV_EncryptionProperty) */

void zx_xenc_EncryptionProperties_REV_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x)
{
  struct zx_xenc_EncryptionProperty_s* nxt;
  struct zx_xenc_EncryptionProperty_s* y;
  if (!x) return;
  y = x->EncryptionProperty;
  if (!y) return;
  x->EncryptionProperty = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptionProperty->gg.g;
    x->EncryptionProperty = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_EncryptionProperties_PUT_EncryptionProperty) */

void zx_xenc_EncryptionProperties_PUT_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n, struct zx_xenc_EncryptionProperty_s* z)
{
  struct zx_xenc_EncryptionProperty_s* y;
  if (!x || !z) return;
  y = x->EncryptionProperty;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptionProperty = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_EncryptionProperties_ADD_EncryptionProperty) */

void zx_xenc_EncryptionProperties_ADD_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n, struct zx_xenc_EncryptionProperty_s* z)
{
  struct zx_xenc_EncryptionProperty_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptionProperty->gg.g;
    x->EncryptionProperty = z;
    return;
  case -1:
    y = x->EncryptionProperty;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperty; n > 1 && y; --n, y = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_EncryptionProperties_DEL_EncryptionProperty) */

void zx_xenc_EncryptionProperties_DEL_EncryptionProperty(struct zx_xenc_EncryptionProperties_s* x, int n)
{
  struct zx_xenc_EncryptionProperty_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionProperty = (struct zx_xenc_EncryptionProperty_s*)x->EncryptionProperty->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptionProperty_s*)x->EncryptionProperty;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptionProperty; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptionProperty_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_xenc_EncryptionProperties_GET_Id) */
struct zx_str_s* zx_xenc_EncryptionProperties_GET_Id(struct zx_xenc_EncryptionProperties_s* x) { return x->Id; }
/* FUNC(zx_xenc_EncryptionProperties_PUT_Id) */
void zx_xenc_EncryptionProperties_PUT_Id(struct zx_xenc_EncryptionProperties_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zx_xenc_EncryptionProperty_GET_Target) */
struct zx_str_s* zx_xenc_EncryptionProperty_GET_Target(struct zx_xenc_EncryptionProperty_s* x) { return x->Target; }
/* FUNC(zx_xenc_EncryptionProperty_PUT_Target) */
void zx_xenc_EncryptionProperty_PUT_Target(struct zx_xenc_EncryptionProperty_s* x, struct zx_str_s* y) { x->Target = y; }
/* FUNC(zx_xenc_EncryptionProperty_GET_Id) */
struct zx_str_s* zx_xenc_EncryptionProperty_GET_Id(struct zx_xenc_EncryptionProperty_s* x) { return x->Id; }
/* FUNC(zx_xenc_EncryptionProperty_PUT_Id) */
void zx_xenc_EncryptionProperty_PUT_Id(struct zx_xenc_EncryptionProperty_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zx_xenc_KeyReference_GET_URI) */
struct zx_str_s* zx_xenc_KeyReference_GET_URI(struct zx_xenc_KeyReference_s* x) { return x->URI; }
/* FUNC(zx_xenc_KeyReference_PUT_URI) */
void zx_xenc_KeyReference_PUT_URI(struct zx_xenc_KeyReference_s* x, struct zx_str_s* y) { x->URI = y; }







/* FUNC(zx_xenc_OriginatorKeyInfo_NUM_KeyName) */

int zx_xenc_OriginatorKeyInfo_NUM_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_KeyName) */

struct zx_elem_s* zx_xenc_OriginatorKeyInfo_GET_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_POP_KeyName) */

struct zx_elem_s* zx_xenc_OriginatorKeyInfo_POP_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyName;
  if (y)
    x->KeyName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUSH_KeyName) */

void zx_xenc_OriginatorKeyInfo_PUSH_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyName->g;
  x->KeyName = z;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_REV_KeyName) */

void zx_xenc_OriginatorKeyInfo_REV_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyName;
  if (!y) return;
  x->KeyName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyName->g;
    x->KeyName = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_KeyName) */

void zx_xenc_OriginatorKeyInfo_PUT_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_ADD_KeyName) */

void zx_xenc_OriginatorKeyInfo_ADD_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyName->g;
    x->KeyName = z;
    return;
  case -1:
    y = x->KeyName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_DEL_KeyName) */

void zx_xenc_OriginatorKeyInfo_DEL_KeyName(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyName = (struct zx_elem_s*)x->KeyName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_xenc_OriginatorKeyInfo_NUM_KeyValue) */

int zx_xenc_OriginatorKeyInfo_NUM_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyValue; y; ++n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_KeyValue) */

struct zx_ds_KeyValue_s* zx_xenc_OriginatorKeyInfo_GET_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return 0;
  for (y = x->KeyValue; n>=0 && y; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_POP_KeyValue) */

struct zx_ds_KeyValue_s* zx_xenc_OriginatorKeyInfo_POP_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return 0;
  y = x->KeyValue;
  if (y)
    x->KeyValue = (struct zx_ds_KeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUSH_KeyValue) */

void zx_xenc_OriginatorKeyInfo_PUSH_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_KeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyValue->gg.g;
  x->KeyValue = z;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_REV_KeyValue) */

void zx_xenc_OriginatorKeyInfo_REV_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* nxt;
  struct zx_ds_KeyValue_s* y;
  if (!x) return;
  y = x->KeyValue;
  if (!y) return;
  x->KeyValue = 0;
  while (y) {
    nxt = (struct zx_ds_KeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_KeyValue) */

void zx_xenc_OriginatorKeyInfo_PUT_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z)
{
  struct zx_ds_KeyValue_s* y;
  if (!x || !z) return;
  y = x->KeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_ADD_KeyValue) */

void zx_xenc_OriginatorKeyInfo_ADD_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z)
{
  struct zx_ds_KeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = z;
    return;
  case -1:
    y = x->KeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_DEL_KeyValue) */

void zx_xenc_OriginatorKeyInfo_DEL_KeyValue(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyValue = (struct zx_ds_KeyValue_s*)x->KeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_KeyValue_s*)x->KeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_OriginatorKeyInfo_NUM_RetrievalMethod) */

int zx_xenc_OriginatorKeyInfo_NUM_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RetrievalMethod; y; ++n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_RetrievalMethod) */

struct zx_ds_RetrievalMethod_s* zx_xenc_OriginatorKeyInfo_GET_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  for (y = x->RetrievalMethod; n>=0 && y; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_POP_RetrievalMethod) */

struct zx_ds_RetrievalMethod_s* zx_xenc_OriginatorKeyInfo_POP_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  y = x->RetrievalMethod;
  if (y)
    x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUSH_RetrievalMethod) */

void zx_xenc_OriginatorKeyInfo_PUSH_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_RetrievalMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RetrievalMethod->gg.g;
  x->RetrievalMethod = z;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_REV_RetrievalMethod) */

void zx_xenc_OriginatorKeyInfo_REV_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* nxt;
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return;
  y = x->RetrievalMethod;
  if (!y) return;
  x->RetrievalMethod = 0;
  while (y) {
    nxt = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_RetrievalMethod) */

void zx_xenc_OriginatorKeyInfo_PUT_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  y = x->RetrievalMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RetrievalMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_ADD_RetrievalMethod) */

void zx_xenc_OriginatorKeyInfo_ADD_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = z;
    return;
  case -1:
    y = x->RetrievalMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_DEL_RetrievalMethod) */

void zx_xenc_OriginatorKeyInfo_DEL_RetrievalMethod(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)x->RetrievalMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_RetrievalMethod_s*)x->RetrievalMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_OriginatorKeyInfo_NUM_X509Data) */

int zx_xenc_OriginatorKeyInfo_NUM_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_X509Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509Data; y; ++n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_X509Data) */

struct zx_ds_X509Data_s* zx_xenc_OriginatorKeyInfo_GET_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return 0;
  for (y = x->X509Data; n>=0 && y; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_POP_X509Data) */

struct zx_ds_X509Data_s* zx_xenc_OriginatorKeyInfo_POP_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return 0;
  y = x->X509Data;
  if (y)
    x->X509Data = (struct zx_ds_X509Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUSH_X509Data) */

void zx_xenc_OriginatorKeyInfo_PUSH_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_X509Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->X509Data->gg.g;
  x->X509Data = z;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_REV_X509Data) */

void zx_xenc_OriginatorKeyInfo_REV_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_X509Data_s* nxt;
  struct zx_ds_X509Data_s* y;
  if (!x) return;
  y = x->X509Data;
  if (!y) return;
  x->X509Data = 0;
  while (y) {
    nxt = (struct zx_ds_X509Data_s*)y->gg.g.n;
    y->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_X509Data) */

void zx_xenc_OriginatorKeyInfo_PUT_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_X509Data_s* z)
{
  struct zx_ds_X509Data_s* y;
  if (!x || !z) return;
  y = x->X509Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->X509Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_ADD_X509Data) */

void zx_xenc_OriginatorKeyInfo_ADD_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_X509Data_s* z)
{
  struct zx_ds_X509Data_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = z;
    return;
  case -1:
    y = x->X509Data;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_DEL_X509Data) */

void zx_xenc_OriginatorKeyInfo_DEL_X509Data(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509Data = (struct zx_ds_X509Data_s*)x->X509Data->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_X509Data_s*)x->X509Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_OriginatorKeyInfo_NUM_PGPData) */

int zx_xenc_OriginatorKeyInfo_NUM_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_PGPData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPData; y; ++n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_PGPData) */

struct zx_ds_PGPData_s* zx_xenc_OriginatorKeyInfo_GET_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return 0;
  for (y = x->PGPData; n>=0 && y; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_POP_PGPData) */

struct zx_ds_PGPData_s* zx_xenc_OriginatorKeyInfo_POP_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return 0;
  y = x->PGPData;
  if (y)
    x->PGPData = (struct zx_ds_PGPData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUSH_PGPData) */

void zx_xenc_OriginatorKeyInfo_PUSH_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_PGPData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PGPData->gg.g;
  x->PGPData = z;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_REV_PGPData) */

void zx_xenc_OriginatorKeyInfo_REV_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_PGPData_s* nxt;
  struct zx_ds_PGPData_s* y;
  if (!x) return;
  y = x->PGPData;
  if (!y) return;
  x->PGPData = 0;
  while (y) {
    nxt = (struct zx_ds_PGPData_s*)y->gg.g.n;
    y->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_PGPData) */

void zx_xenc_OriginatorKeyInfo_PUT_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_PGPData_s* z)
{
  struct zx_ds_PGPData_s* y;
  if (!x || !z) return;
  y = x->PGPData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PGPData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_ADD_PGPData) */

void zx_xenc_OriginatorKeyInfo_ADD_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_PGPData_s* z)
{
  struct zx_ds_PGPData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = z;
    return;
  case -1:
    y = x->PGPData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_DEL_PGPData) */

void zx_xenc_OriginatorKeyInfo_DEL_PGPData(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPData = (struct zx_ds_PGPData_s*)x->PGPData->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_PGPData_s*)x->PGPData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_OriginatorKeyInfo_NUM_SPKIData) */

int zx_xenc_OriginatorKeyInfo_NUM_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPKIData; y; ++n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_SPKIData) */

struct zx_ds_SPKIData_s* zx_xenc_OriginatorKeyInfo_GET_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return 0;
  for (y = x->SPKIData; n>=0 && y; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_POP_SPKIData) */

struct zx_ds_SPKIData_s* zx_xenc_OriginatorKeyInfo_POP_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return 0;
  y = x->SPKIData;
  if (y)
    x->SPKIData = (struct zx_ds_SPKIData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUSH_SPKIData) */

void zx_xenc_OriginatorKeyInfo_PUSH_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_ds_SPKIData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPKIData->gg.g;
  x->SPKIData = z;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_REV_SPKIData) */

void zx_xenc_OriginatorKeyInfo_REV_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* nxt;
  struct zx_ds_SPKIData_s* y;
  if (!x) return;
  y = x->SPKIData;
  if (!y) return;
  x->SPKIData = 0;
  while (y) {
    nxt = (struct zx_ds_SPKIData_s*)y->gg.g.n;
    y->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_SPKIData) */

void zx_xenc_OriginatorKeyInfo_PUT_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z)
{
  struct zx_ds_SPKIData_s* y;
  if (!x || !z) return;
  y = x->SPKIData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPKIData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_ADD_SPKIData) */

void zx_xenc_OriginatorKeyInfo_ADD_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z)
{
  struct zx_ds_SPKIData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = z;
    return;
  case -1:
    y = x->SPKIData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_DEL_SPKIData) */

void zx_xenc_OriginatorKeyInfo_DEL_SPKIData(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPKIData = (struct zx_ds_SPKIData_s*)x->SPKIData->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_SPKIData_s*)x->SPKIData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_OriginatorKeyInfo_NUM_MgmtData) */

int zx_xenc_OriginatorKeyInfo_NUM_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MgmtData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_MgmtData) */

struct zx_elem_s* zx_xenc_OriginatorKeyInfo_GET_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MgmtData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_POP_MgmtData) */

struct zx_elem_s* zx_xenc_OriginatorKeyInfo_POP_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MgmtData;
  if (y)
    x->MgmtData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUSH_MgmtData) */

void zx_xenc_OriginatorKeyInfo_PUSH_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MgmtData->g;
  x->MgmtData = z;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_REV_MgmtData) */

void zx_xenc_OriginatorKeyInfo_REV_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MgmtData;
  if (!y) return;
  x->MgmtData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MgmtData->g;
    x->MgmtData = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_MgmtData) */

void zx_xenc_OriginatorKeyInfo_PUT_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MgmtData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MgmtData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_OriginatorKeyInfo_ADD_MgmtData) */

void zx_xenc_OriginatorKeyInfo_ADD_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MgmtData->g;
    x->MgmtData = z;
    return;
  case -1:
    y = x->MgmtData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_DEL_MgmtData) */

void zx_xenc_OriginatorKeyInfo_DEL_MgmtData(struct zx_xenc_OriginatorKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MgmtData = (struct zx_elem_s*)x->MgmtData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MgmtData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_Id) */
struct zx_str_s* zx_xenc_OriginatorKeyInfo_GET_Id(struct zx_xenc_OriginatorKeyInfo_s* x) { return x->Id; }
/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_Id) */
void zx_xenc_OriginatorKeyInfo_PUT_Id(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zx_xenc_RecipientKeyInfo_NUM_KeyName) */

int zx_xenc_RecipientKeyInfo_NUM_KeyName(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyName; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_RecipientKeyInfo_GET_KeyName) */

struct zx_elem_s* zx_xenc_RecipientKeyInfo_GET_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyName; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_POP_KeyName) */

struct zx_elem_s* zx_xenc_RecipientKeyInfo_POP_KeyName(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyName;
  if (y)
    x->KeyName = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUSH_KeyName) */

void zx_xenc_RecipientKeyInfo_PUSH_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyName->g;
  x->KeyName = z;
}

/* FUNC(zx_xenc_RecipientKeyInfo_REV_KeyName) */

void zx_xenc_RecipientKeyInfo_REV_KeyName(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyName;
  if (!y) return;
  x->KeyName = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyName->g;
    x->KeyName = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUT_KeyName) */

void zx_xenc_RecipientKeyInfo_PUT_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyName;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyName = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_ADD_KeyName) */

void zx_xenc_RecipientKeyInfo_ADD_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyName->g;
    x->KeyName = z;
    return;
  case -1:
    y = x->KeyName;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_RecipientKeyInfo_DEL_KeyName) */

void zx_xenc_RecipientKeyInfo_DEL_KeyName(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyName = (struct zx_elem_s*)x->KeyName->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyName;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyName; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zx_xenc_RecipientKeyInfo_NUM_KeyValue) */

int zx_xenc_RecipientKeyInfo_NUM_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyValue; y; ++n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_RecipientKeyInfo_GET_KeyValue) */

struct zx_ds_KeyValue_s* zx_xenc_RecipientKeyInfo_GET_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return 0;
  for (y = x->KeyValue; n>=0 && y; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_POP_KeyValue) */

struct zx_ds_KeyValue_s* zx_xenc_RecipientKeyInfo_POP_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return 0;
  y = x->KeyValue;
  if (y)
    x->KeyValue = (struct zx_ds_KeyValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUSH_KeyValue) */

void zx_xenc_RecipientKeyInfo_PUSH_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_KeyValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyValue->gg.g;
  x->KeyValue = z;
}

/* FUNC(zx_xenc_RecipientKeyInfo_REV_KeyValue) */

void zx_xenc_RecipientKeyInfo_REV_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_KeyValue_s* nxt;
  struct zx_ds_KeyValue_s* y;
  if (!x) return;
  y = x->KeyValue;
  if (!y) return;
  x->KeyValue = 0;
  while (y) {
    nxt = (struct zx_ds_KeyValue_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUT_KeyValue) */

void zx_xenc_RecipientKeyInfo_PUT_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z)
{
  struct zx_ds_KeyValue_s* y;
  if (!x || !z) return;
  y = x->KeyValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_ADD_KeyValue) */

void zx_xenc_RecipientKeyInfo_ADD_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_KeyValue_s* z)
{
  struct zx_ds_KeyValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyValue->gg.g;
    x->KeyValue = z;
    return;
  case -1:
    y = x->KeyValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_RecipientKeyInfo_DEL_KeyValue) */

void zx_xenc_RecipientKeyInfo_DEL_KeyValue(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_KeyValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyValue = (struct zx_ds_KeyValue_s*)x->KeyValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_KeyValue_s*)x->KeyValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyValue; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_KeyValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_RecipientKeyInfo_NUM_RetrievalMethod) */

int zx_xenc_RecipientKeyInfo_NUM_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RetrievalMethod; y; ++n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_RecipientKeyInfo_GET_RetrievalMethod) */

struct zx_ds_RetrievalMethod_s* zx_xenc_RecipientKeyInfo_GET_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  for (y = x->RetrievalMethod; n>=0 && y; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_POP_RetrievalMethod) */

struct zx_ds_RetrievalMethod_s* zx_xenc_RecipientKeyInfo_POP_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return 0;
  y = x->RetrievalMethod;
  if (y)
    x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUSH_RetrievalMethod) */

void zx_xenc_RecipientKeyInfo_PUSH_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_RetrievalMethod_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RetrievalMethod->gg.g;
  x->RetrievalMethod = z;
}

/* FUNC(zx_xenc_RecipientKeyInfo_REV_RetrievalMethod) */

void zx_xenc_RecipientKeyInfo_REV_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_RetrievalMethod_s* nxt;
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return;
  y = x->RetrievalMethod;
  if (!y) return;
  x->RetrievalMethod = 0;
  while (y) {
    nxt = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n;
    y->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUT_RetrievalMethod) */

void zx_xenc_RecipientKeyInfo_PUT_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  y = x->RetrievalMethod;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RetrievalMethod = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_ADD_RetrievalMethod) */

void zx_xenc_RecipientKeyInfo_ADD_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_RetrievalMethod_s* z)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RetrievalMethod->gg.g;
    x->RetrievalMethod = z;
    return;
  case -1:
    y = x->RetrievalMethod;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_RecipientKeyInfo_DEL_RetrievalMethod) */

void zx_xenc_RecipientKeyInfo_DEL_RetrievalMethod(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_RetrievalMethod_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RetrievalMethod = (struct zx_ds_RetrievalMethod_s*)x->RetrievalMethod->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_RetrievalMethod_s*)x->RetrievalMethod;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RetrievalMethod; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_RetrievalMethod_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_RecipientKeyInfo_NUM_X509Data) */

int zx_xenc_RecipientKeyInfo_NUM_X509Data(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_X509Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X509Data; y; ++n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_RecipientKeyInfo_GET_X509Data) */

struct zx_ds_X509Data_s* zx_xenc_RecipientKeyInfo_GET_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return 0;
  for (y = x->X509Data; n>=0 && y; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_POP_X509Data) */

struct zx_ds_X509Data_s* zx_xenc_RecipientKeyInfo_POP_X509Data(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return 0;
  y = x->X509Data;
  if (y)
    x->X509Data = (struct zx_ds_X509Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUSH_X509Data) */

void zx_xenc_RecipientKeyInfo_PUSH_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_X509Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->X509Data->gg.g;
  x->X509Data = z;
}

/* FUNC(zx_xenc_RecipientKeyInfo_REV_X509Data) */

void zx_xenc_RecipientKeyInfo_REV_X509Data(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_X509Data_s* nxt;
  struct zx_ds_X509Data_s* y;
  if (!x) return;
  y = x->X509Data;
  if (!y) return;
  x->X509Data = 0;
  while (y) {
    nxt = (struct zx_ds_X509Data_s*)y->gg.g.n;
    y->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUT_X509Data) */

void zx_xenc_RecipientKeyInfo_PUT_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_X509Data_s* z)
{
  struct zx_ds_X509Data_s* y;
  if (!x || !z) return;
  y = x->X509Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->X509Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_ADD_X509Data) */

void zx_xenc_RecipientKeyInfo_ADD_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_X509Data_s* z)
{
  struct zx_ds_X509Data_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->X509Data->gg.g;
    x->X509Data = z;
    return;
  case -1:
    y = x->X509Data;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_RecipientKeyInfo_DEL_X509Data) */

void zx_xenc_RecipientKeyInfo_DEL_X509Data(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_X509Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X509Data = (struct zx_ds_X509Data_s*)x->X509Data->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_X509Data_s*)x->X509Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->X509Data; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_X509Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_RecipientKeyInfo_NUM_PGPData) */

int zx_xenc_RecipientKeyInfo_NUM_PGPData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_PGPData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PGPData; y; ++n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_RecipientKeyInfo_GET_PGPData) */

struct zx_ds_PGPData_s* zx_xenc_RecipientKeyInfo_GET_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return 0;
  for (y = x->PGPData; n>=0 && y; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_POP_PGPData) */

struct zx_ds_PGPData_s* zx_xenc_RecipientKeyInfo_POP_PGPData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return 0;
  y = x->PGPData;
  if (y)
    x->PGPData = (struct zx_ds_PGPData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUSH_PGPData) */

void zx_xenc_RecipientKeyInfo_PUSH_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_PGPData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PGPData->gg.g;
  x->PGPData = z;
}

/* FUNC(zx_xenc_RecipientKeyInfo_REV_PGPData) */

void zx_xenc_RecipientKeyInfo_REV_PGPData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_PGPData_s* nxt;
  struct zx_ds_PGPData_s* y;
  if (!x) return;
  y = x->PGPData;
  if (!y) return;
  x->PGPData = 0;
  while (y) {
    nxt = (struct zx_ds_PGPData_s*)y->gg.g.n;
    y->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUT_PGPData) */

void zx_xenc_RecipientKeyInfo_PUT_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_PGPData_s* z)
{
  struct zx_ds_PGPData_s* y;
  if (!x || !z) return;
  y = x->PGPData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PGPData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_ADD_PGPData) */

void zx_xenc_RecipientKeyInfo_ADD_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_PGPData_s* z)
{
  struct zx_ds_PGPData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PGPData->gg.g;
    x->PGPData = z;
    return;
  case -1:
    y = x->PGPData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_RecipientKeyInfo_DEL_PGPData) */

void zx_xenc_RecipientKeyInfo_DEL_PGPData(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_PGPData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PGPData = (struct zx_ds_PGPData_s*)x->PGPData->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_PGPData_s*)x->PGPData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PGPData; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_PGPData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_RecipientKeyInfo_NUM_SPKIData) */

int zx_xenc_RecipientKeyInfo_NUM_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SPKIData; y; ++n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_RecipientKeyInfo_GET_SPKIData) */

struct zx_ds_SPKIData_s* zx_xenc_RecipientKeyInfo_GET_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return 0;
  for (y = x->SPKIData; n>=0 && y; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_POP_SPKIData) */

struct zx_ds_SPKIData_s* zx_xenc_RecipientKeyInfo_POP_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return 0;
  y = x->SPKIData;
  if (y)
    x->SPKIData = (struct zx_ds_SPKIData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUSH_SPKIData) */

void zx_xenc_RecipientKeyInfo_PUSH_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_ds_SPKIData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SPKIData->gg.g;
  x->SPKIData = z;
}

/* FUNC(zx_xenc_RecipientKeyInfo_REV_SPKIData) */

void zx_xenc_RecipientKeyInfo_REV_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_ds_SPKIData_s* nxt;
  struct zx_ds_SPKIData_s* y;
  if (!x) return;
  y = x->SPKIData;
  if (!y) return;
  x->SPKIData = 0;
  while (y) {
    nxt = (struct zx_ds_SPKIData_s*)y->gg.g.n;
    y->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUT_SPKIData) */

void zx_xenc_RecipientKeyInfo_PUT_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z)
{
  struct zx_ds_SPKIData_s* y;
  if (!x || !z) return;
  y = x->SPKIData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SPKIData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_ADD_SPKIData) */

void zx_xenc_RecipientKeyInfo_ADD_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_ds_SPKIData_s* z)
{
  struct zx_ds_SPKIData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SPKIData->gg.g;
    x->SPKIData = z;
    return;
  case -1:
    y = x->SPKIData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_RecipientKeyInfo_DEL_SPKIData) */

void zx_xenc_RecipientKeyInfo_DEL_SPKIData(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_ds_SPKIData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SPKIData = (struct zx_ds_SPKIData_s*)x->SPKIData->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_SPKIData_s*)x->SPKIData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SPKIData; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_SPKIData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_RecipientKeyInfo_NUM_MgmtData) */

int zx_xenc_RecipientKeyInfo_NUM_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MgmtData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xenc_RecipientKeyInfo_GET_MgmtData) */

struct zx_elem_s* zx_xenc_RecipientKeyInfo_GET_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MgmtData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_POP_MgmtData) */

struct zx_elem_s* zx_xenc_RecipientKeyInfo_POP_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MgmtData;
  if (y)
    x->MgmtData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUSH_MgmtData) */

void zx_xenc_RecipientKeyInfo_PUSH_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MgmtData->g;
  x->MgmtData = z;
}

/* FUNC(zx_xenc_RecipientKeyInfo_REV_MgmtData) */

void zx_xenc_RecipientKeyInfo_REV_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MgmtData;
  if (!y) return;
  x->MgmtData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MgmtData->g;
    x->MgmtData = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_PUT_MgmtData) */

void zx_xenc_RecipientKeyInfo_PUT_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MgmtData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MgmtData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xenc_RecipientKeyInfo_ADD_MgmtData) */

void zx_xenc_RecipientKeyInfo_ADD_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MgmtData->g;
    x->MgmtData = z;
    return;
  case -1:
    y = x->MgmtData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xenc_RecipientKeyInfo_DEL_MgmtData) */

void zx_xenc_RecipientKeyInfo_DEL_MgmtData(struct zx_xenc_RecipientKeyInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MgmtData = (struct zx_elem_s*)x->MgmtData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MgmtData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MgmtData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zx_xenc_RecipientKeyInfo_GET_Id) */
struct zx_str_s* zx_xenc_RecipientKeyInfo_GET_Id(struct zx_xenc_RecipientKeyInfo_s* x) { return x->Id; }
/* FUNC(zx_xenc_RecipientKeyInfo_PUT_Id) */
void zx_xenc_RecipientKeyInfo_PUT_Id(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zx_xenc_ReferenceList_NUM_DataReference) */

int zx_xenc_ReferenceList_NUM_DataReference(struct zx_xenc_ReferenceList_s* x)
{
  struct zx_xenc_DataReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DataReference; y; ++n, y = (struct zx_xenc_DataReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_ReferenceList_GET_DataReference) */

struct zx_xenc_DataReference_s* zx_xenc_ReferenceList_GET_DataReference(struct zx_xenc_ReferenceList_s* x, int n)
{
  struct zx_xenc_DataReference_s* y;
  if (!x) return 0;
  for (y = x->DataReference; n>=0 && y; --n, y = (struct zx_xenc_DataReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_ReferenceList_POP_DataReference) */

struct zx_xenc_DataReference_s* zx_xenc_ReferenceList_POP_DataReference(struct zx_xenc_ReferenceList_s* x)
{
  struct zx_xenc_DataReference_s* y;
  if (!x) return 0;
  y = x->DataReference;
  if (y)
    x->DataReference = (struct zx_xenc_DataReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_ReferenceList_PUSH_DataReference) */

void zx_xenc_ReferenceList_PUSH_DataReference(struct zx_xenc_ReferenceList_s* x, struct zx_xenc_DataReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DataReference->gg.g;
  x->DataReference = z;
}

/* FUNC(zx_xenc_ReferenceList_REV_DataReference) */

void zx_xenc_ReferenceList_REV_DataReference(struct zx_xenc_ReferenceList_s* x)
{
  struct zx_xenc_DataReference_s* nxt;
  struct zx_xenc_DataReference_s* y;
  if (!x) return;
  y = x->DataReference;
  if (!y) return;
  x->DataReference = 0;
  while (y) {
    nxt = (struct zx_xenc_DataReference_s*)y->gg.g.n;
    y->gg.g.n = &x->DataReference->gg.g;
    x->DataReference = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_ReferenceList_PUT_DataReference) */

void zx_xenc_ReferenceList_PUT_DataReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_DataReference_s* z)
{
  struct zx_xenc_DataReference_s* y;
  if (!x || !z) return;
  y = x->DataReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DataReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_DataReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_ReferenceList_ADD_DataReference) */

void zx_xenc_ReferenceList_ADD_DataReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_DataReference_s* z)
{
  struct zx_xenc_DataReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DataReference->gg.g;
    x->DataReference = z;
    return;
  case -1:
    y = x->DataReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_DataReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DataReference; n > 1 && y; --n, y = (struct zx_xenc_DataReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_ReferenceList_DEL_DataReference) */

void zx_xenc_ReferenceList_DEL_DataReference(struct zx_xenc_ReferenceList_s* x, int n)
{
  struct zx_xenc_DataReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DataReference = (struct zx_xenc_DataReference_s*)x->DataReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_DataReference_s*)x->DataReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_DataReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DataReference; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_DataReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_xenc_ReferenceList_NUM_KeyReference) */

int zx_xenc_ReferenceList_NUM_KeyReference(struct zx_xenc_ReferenceList_s* x)
{
  struct zx_xenc_KeyReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyReference; y; ++n, y = (struct zx_xenc_KeyReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_ReferenceList_GET_KeyReference) */

struct zx_xenc_KeyReference_s* zx_xenc_ReferenceList_GET_KeyReference(struct zx_xenc_ReferenceList_s* x, int n)
{
  struct zx_xenc_KeyReference_s* y;
  if (!x) return 0;
  for (y = x->KeyReference; n>=0 && y; --n, y = (struct zx_xenc_KeyReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_ReferenceList_POP_KeyReference) */

struct zx_xenc_KeyReference_s* zx_xenc_ReferenceList_POP_KeyReference(struct zx_xenc_ReferenceList_s* x)
{
  struct zx_xenc_KeyReference_s* y;
  if (!x) return 0;
  y = x->KeyReference;
  if (y)
    x->KeyReference = (struct zx_xenc_KeyReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_ReferenceList_PUSH_KeyReference) */

void zx_xenc_ReferenceList_PUSH_KeyReference(struct zx_xenc_ReferenceList_s* x, struct zx_xenc_KeyReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->KeyReference->gg.g;
  x->KeyReference = z;
}

/* FUNC(zx_xenc_ReferenceList_REV_KeyReference) */

void zx_xenc_ReferenceList_REV_KeyReference(struct zx_xenc_ReferenceList_s* x)
{
  struct zx_xenc_KeyReference_s* nxt;
  struct zx_xenc_KeyReference_s* y;
  if (!x) return;
  y = x->KeyReference;
  if (!y) return;
  x->KeyReference = 0;
  while (y) {
    nxt = (struct zx_xenc_KeyReference_s*)y->gg.g.n;
    y->gg.g.n = &x->KeyReference->gg.g;
    x->KeyReference = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_ReferenceList_PUT_KeyReference) */

void zx_xenc_ReferenceList_PUT_KeyReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_KeyReference_s* z)
{
  struct zx_xenc_KeyReference_s* y;
  if (!x || !z) return;
  y = x->KeyReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->KeyReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_KeyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_ReferenceList_ADD_KeyReference) */

void zx_xenc_ReferenceList_ADD_KeyReference(struct zx_xenc_ReferenceList_s* x, int n, struct zx_xenc_KeyReference_s* z)
{
  struct zx_xenc_KeyReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->KeyReference->gg.g;
    x->KeyReference = z;
    return;
  case -1:
    y = x->KeyReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_KeyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyReference; n > 1 && y; --n, y = (struct zx_xenc_KeyReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_ReferenceList_DEL_KeyReference) */

void zx_xenc_ReferenceList_DEL_KeyReference(struct zx_xenc_ReferenceList_s* x, int n)
{
  struct zx_xenc_KeyReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyReference = (struct zx_xenc_KeyReference_s*)x->KeyReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_KeyReference_s*)x->KeyReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_KeyReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->KeyReference; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_KeyReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_xenc_Transforms_NUM_Transform) */

int zx_xenc_Transforms_NUM_Transform(struct zx_xenc_Transforms_s* x)
{
  struct zx_ds_Transform_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Transform; y; ++n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xenc_Transforms_GET_Transform) */

struct zx_ds_Transform_s* zx_xenc_Transforms_GET_Transform(struct zx_xenc_Transforms_s* x, int n)
{
  struct zx_ds_Transform_s* y;
  if (!x) return 0;
  for (y = x->Transform; n>=0 && y; --n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xenc_Transforms_POP_Transform) */

struct zx_ds_Transform_s* zx_xenc_Transforms_POP_Transform(struct zx_xenc_Transforms_s* x)
{
  struct zx_ds_Transform_s* y;
  if (!x) return 0;
  y = x->Transform;
  if (y)
    x->Transform = (struct zx_ds_Transform_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xenc_Transforms_PUSH_Transform) */

void zx_xenc_Transforms_PUSH_Transform(struct zx_xenc_Transforms_s* x, struct zx_ds_Transform_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Transform->gg.g;
  x->Transform = z;
}

/* FUNC(zx_xenc_Transforms_REV_Transform) */

void zx_xenc_Transforms_REV_Transform(struct zx_xenc_Transforms_s* x)
{
  struct zx_ds_Transform_s* nxt;
  struct zx_ds_Transform_s* y;
  if (!x) return;
  y = x->Transform;
  if (!y) return;
  x->Transform = 0;
  while (y) {
    nxt = (struct zx_ds_Transform_s*)y->gg.g.n;
    y->gg.g.n = &x->Transform->gg.g;
    x->Transform = y;
    y = nxt;
  }
}

/* FUNC(zx_xenc_Transforms_PUT_Transform) */

void zx_xenc_Transforms_PUT_Transform(struct zx_xenc_Transforms_s* x, int n, struct zx_ds_Transform_s* z)
{
  struct zx_ds_Transform_s* y;
  if (!x || !z) return;
  y = x->Transform;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Transform = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xenc_Transforms_ADD_Transform) */

void zx_xenc_Transforms_ADD_Transform(struct zx_xenc_Transforms_s* x, int n, struct zx_ds_Transform_s* z)
{
  struct zx_ds_Transform_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Transform->gg.g;
    x->Transform = z;
    return;
  case -1:
    y = x->Transform;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transform; n > 1 && y; --n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xenc_Transforms_DEL_Transform) */

void zx_xenc_Transforms_DEL_Transform(struct zx_xenc_Transforms_s* x, int n)
{
  struct zx_ds_Transform_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Transform = (struct zx_ds_Transform_s*)x->Transform->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Transform_s*)x->Transform;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Transform; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Transform_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_root_NUM_Assertion) */

int zx_root_NUM_Assertion(struct zx_root_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Assertion) */

struct zx_sa_Assertion_s* zx_root_GET_Assertion(struct zx_root_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Assertion) */

struct zx_sa_Assertion_s* zx_root_POP_Assertion(struct zx_root_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Assertion) */

void zx_root_PUSH_Assertion(struct zx_root_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_root_REV_Assertion) */

void zx_root_REV_Assertion(struct zx_root_s* x)
{
  struct zx_sa_Assertion_s* nxt;
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zx_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Assertion) */

void zx_root_PUT_Assertion(struct zx_root_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Assertion) */

void zx_root_ADD_Assertion(struct zx_root_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = z;
    return;
  case -1:
    y = x->Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Assertion) */

void zx_root_DEL_Assertion(struct zx_root_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zx_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_root_NUM_AuthnRequest) */

int zx_root_NUM_AuthnRequest(struct zx_root_s* x)
{
  struct zx_sp_AuthnRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnRequest; y; ++n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_AuthnRequest) */

struct zx_sp_AuthnRequest_s* zx_root_GET_AuthnRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return 0;
  for (y = x->AuthnRequest; n>=0 && y; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_AuthnRequest) */

struct zx_sp_AuthnRequest_s* zx_root_POP_AuthnRequest(struct zx_root_s* x)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return 0;
  y = x->AuthnRequest;
  if (y)
    x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_AuthnRequest) */

void zx_root_PUSH_AuthnRequest(struct zx_root_s* x, struct zx_sp_AuthnRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnRequest->gg.g;
  x->AuthnRequest = z;
}

/* FUNC(zx_root_REV_AuthnRequest) */

void zx_root_REV_AuthnRequest(struct zx_root_s* x)
{
  struct zx_sp_AuthnRequest_s* nxt;
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return;
  y = x->AuthnRequest;
  if (!y) return;
  x->AuthnRequest = 0;
  while (y) {
    nxt = (struct zx_sp_AuthnRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnRequest->gg.g;
    x->AuthnRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_AuthnRequest) */

void zx_root_PUT_AuthnRequest(struct zx_root_s* x, int n, struct zx_sp_AuthnRequest_s* z)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x || !z) return;
  y = x->AuthnRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_AuthnRequest) */

void zx_root_ADD_AuthnRequest(struct zx_root_s* x, int n, struct zx_sp_AuthnRequest_s* z)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnRequest->gg.g;
    x->AuthnRequest = z;
    return;
  case -1:
    y = x->AuthnRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnRequest; n > 1 && y; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_AuthnRequest) */

void zx_root_DEL_AuthnRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)x->AuthnRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthnRequest_s*)x->AuthnRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_root_NUM_Response) */

int zx_root_NUM_Response(struct zx_root_s* x)
{
  struct zx_sp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Response) */

struct zx_sp_Response_s* zx_root_GET_Response(struct zx_root_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Response) */

struct zx_sp_Response_s* zx_root_POP_Response(struct zx_root_s* x)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_sp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Response) */

void zx_root_PUSH_Response(struct zx_root_s* x, struct zx_sp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_root_REV_Response) */

void zx_root_REV_Response(struct zx_root_s* x)
{
  struct zx_sp_Response_s* nxt;
  struct zx_sp_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_sp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Response) */

void zx_root_PUT_Response(struct zx_root_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Response) */

void zx_root_ADD_Response(struct zx_root_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Response->gg.g;
    x->Response = z;
    return;
  case -1:
    y = x->Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Response) */

void zx_root_DEL_Response(struct zx_root_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_sp_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_root_NUM_LogoutRequest) */

int zx_root_NUM_LogoutRequest(struct zx_root_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutRequest; y; ++n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_root_GET_LogoutRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  for (y = x->LogoutRequest; n>=0 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_root_POP_LogoutRequest(struct zx_root_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  y = x->LogoutRequest;
  if (y)
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_LogoutRequest) */

void zx_root_PUSH_LogoutRequest(struct zx_root_s* x, struct zx_sp_LogoutRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutRequest->gg.g;
  x->LogoutRequest = z;
}

/* FUNC(zx_root_REV_LogoutRequest) */

void zx_root_REV_LogoutRequest(struct zx_root_s* x)
{
  struct zx_sp_LogoutRequest_s* nxt;
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  y = x->LogoutRequest;
  if (!y) return;
  x->LogoutRequest = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_LogoutRequest) */

void zx_root_PUT_LogoutRequest(struct zx_root_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  y = x->LogoutRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_LogoutRequest) */

void zx_root_ADD_LogoutRequest(struct zx_root_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = z;
    return;
  case -1:
    y = x->LogoutRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_LogoutRequest) */

void zx_root_DEL_LogoutRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_root_NUM_LogoutResponse) */

int zx_root_NUM_LogoutResponse(struct zx_root_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutResponse; y; ++n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_root_GET_LogoutResponse(struct zx_root_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  for (y = x->LogoutResponse; n>=0 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_root_POP_LogoutResponse(struct zx_root_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  y = x->LogoutResponse;
  if (y)
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_LogoutResponse) */

void zx_root_PUSH_LogoutResponse(struct zx_root_s* x, struct zx_sp_LogoutResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutResponse->gg.g;
  x->LogoutResponse = z;
}

/* FUNC(zx_root_REV_LogoutResponse) */

void zx_root_REV_LogoutResponse(struct zx_root_s* x)
{
  struct zx_sp_LogoutResponse_s* nxt;
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  y = x->LogoutResponse;
  if (!y) return;
  x->LogoutResponse = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_LogoutResponse) */

void zx_root_PUT_LogoutResponse(struct zx_root_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  y = x->LogoutResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_LogoutResponse) */

void zx_root_ADD_LogoutResponse(struct zx_root_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = z;
    return;
  case -1:
    y = x->LogoutResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_LogoutResponse) */

void zx_root_DEL_LogoutResponse(struct zx_root_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_root_NUM_ManageNameIDRequest) */

int zx_root_NUM_ManageNameIDRequest(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; y; ++n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_root_GET_ManageNameIDRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_root_POP_ManageNameIDRequest(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  y = x->ManageNameIDRequest;
  if (y)
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_ManageNameIDRequest) */

void zx_root_PUSH_ManageNameIDRequest(struct zx_root_s* x, struct zx_sp_ManageNameIDRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDRequest->gg.g;
  x->ManageNameIDRequest = z;
}

/* FUNC(zx_root_REV_ManageNameIDRequest) */

void zx_root_REV_ManageNameIDRequest(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* nxt;
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  x->ManageNameIDRequest = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_ManageNameIDRequest) */

void zx_root_PUT_ManageNameIDRequest(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_ManageNameIDRequest) */

void zx_root_ADD_ManageNameIDRequest(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = z;
    return;
  case -1:
    y = x->ManageNameIDRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_ManageNameIDRequest) */

void zx_root_DEL_ManageNameIDRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_root_NUM_ManageNameIDResponse) */

int zx_root_NUM_ManageNameIDResponse(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; y; ++n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_root_GET_ManageNameIDResponse(struct zx_root_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_root_POP_ManageNameIDResponse(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  y = x->ManageNameIDResponse;
  if (y)
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_ManageNameIDResponse) */

void zx_root_PUSH_ManageNameIDResponse(struct zx_root_s* x, struct zx_sp_ManageNameIDResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDResponse->gg.g;
  x->ManageNameIDResponse = z;
}

/* FUNC(zx_root_REV_ManageNameIDResponse) */

void zx_root_REV_ManageNameIDResponse(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* nxt;
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  x->ManageNameIDResponse = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_ManageNameIDResponse) */

void zx_root_PUT_ManageNameIDResponse(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_ManageNameIDResponse) */

void zx_root_ADD_ManageNameIDResponse(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = z;
    return;
  case -1:
    y = x->ManageNameIDResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_ManageNameIDResponse) */

void zx_root_DEL_ManageNameIDResponse(struct zx_root_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_root_NUM_Envelope) */

int zx_root_NUM_Envelope(struct zx_root_s* x)
{
  struct zx_se_Envelope_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Envelope; y; ++n, y = (struct zx_se_Envelope_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Envelope) */

struct zx_se_Envelope_s* zx_root_GET_Envelope(struct zx_root_s* x, int n)
{
  struct zx_se_Envelope_s* y;
  if (!x) return 0;
  for (y = x->Envelope; n>=0 && y; --n, y = (struct zx_se_Envelope_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Envelope) */

struct zx_se_Envelope_s* zx_root_POP_Envelope(struct zx_root_s* x)
{
  struct zx_se_Envelope_s* y;
  if (!x) return 0;
  y = x->Envelope;
  if (y)
    x->Envelope = (struct zx_se_Envelope_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Envelope) */

void zx_root_PUSH_Envelope(struct zx_root_s* x, struct zx_se_Envelope_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Envelope->gg.g;
  x->Envelope = z;
}

/* FUNC(zx_root_REV_Envelope) */

void zx_root_REV_Envelope(struct zx_root_s* x)
{
  struct zx_se_Envelope_s* nxt;
  struct zx_se_Envelope_s* y;
  if (!x) return;
  y = x->Envelope;
  if (!y) return;
  x->Envelope = 0;
  while (y) {
    nxt = (struct zx_se_Envelope_s*)y->gg.g.n;
    y->gg.g.n = &x->Envelope->gg.g;
    x->Envelope = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Envelope) */

void zx_root_PUT_Envelope(struct zx_root_s* x, int n, struct zx_se_Envelope_s* z)
{
  struct zx_se_Envelope_s* y;
  if (!x || !z) return;
  y = x->Envelope;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Envelope = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Envelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Envelope) */

void zx_root_ADD_Envelope(struct zx_root_s* x, int n, struct zx_se_Envelope_s* z)
{
  struct zx_se_Envelope_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Envelope->gg.g;
    x->Envelope = z;
    return;
  case -1:
    y = x->Envelope;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_se_Envelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Envelope; n > 1 && y; --n, y = (struct zx_se_Envelope_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Envelope) */

void zx_root_DEL_Envelope(struct zx_root_s* x, int n)
{
  struct zx_se_Envelope_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Envelope = (struct zx_se_Envelope_s*)x->Envelope->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_Envelope_s*)x->Envelope;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_Envelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Envelope; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Envelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}











