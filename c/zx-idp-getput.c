/* c/zx-idp-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-idp-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_AssertionItem_NUM_MEDInfo) */

int zx_idp_AssertionItem_NUM_MEDInfo(struct zx_idp_AssertionItem_s* x)
{
  struct zx_idp_MEDInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MEDInfo; y; ++n, y = (struct zx_idp_MEDInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_AssertionItem_GET_MEDInfo) */

struct zx_idp_MEDInfo_s* zx_idp_AssertionItem_GET_MEDInfo(struct zx_idp_AssertionItem_s* x, int n)
{
  struct zx_idp_MEDInfo_s* y;
  if (!x) return 0;
  for (y = x->MEDInfo; n>=0 && y; --n, y = (struct zx_idp_MEDInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_AssertionItem_POP_MEDInfo) */

struct zx_idp_MEDInfo_s* zx_idp_AssertionItem_POP_MEDInfo(struct zx_idp_AssertionItem_s* x)
{
  struct zx_idp_MEDInfo_s* y;
  if (!x) return 0;
  y = x->MEDInfo;
  if (y)
    x->MEDInfo = (struct zx_idp_MEDInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_AssertionItem_PUSH_MEDInfo) */

void zx_idp_AssertionItem_PUSH_MEDInfo(struct zx_idp_AssertionItem_s* x, struct zx_idp_MEDInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MEDInfo->gg.g;
  x->MEDInfo = z;
}

/* FUNC(zx_idp_AssertionItem_REV_MEDInfo) */

void zx_idp_AssertionItem_REV_MEDInfo(struct zx_idp_AssertionItem_s* x)
{
  struct zx_idp_MEDInfo_s* nxt;
  struct zx_idp_MEDInfo_s* y;
  if (!x) return;
  y = x->MEDInfo;
  if (!y) return;
  x->MEDInfo = 0;
  while (y) {
    nxt = (struct zx_idp_MEDInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->MEDInfo->gg.g;
    x->MEDInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_AssertionItem_PUT_MEDInfo) */

void zx_idp_AssertionItem_PUT_MEDInfo(struct zx_idp_AssertionItem_s* x, int n, struct zx_idp_MEDInfo_s* z)
{
  struct zx_idp_MEDInfo_s* y;
  if (!x || !z) return;
  y = x->MEDInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MEDInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_MEDInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idp_AssertionItem_ADD_MEDInfo) */

void zx_idp_AssertionItem_ADD_MEDInfo(struct zx_idp_AssertionItem_s* x, int n, struct zx_idp_MEDInfo_s* z)
{
  struct zx_idp_MEDInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MEDInfo->gg.g;
    x->MEDInfo = z;
    return;
  case -1:
    y = x->MEDInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_MEDInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MEDInfo; n > 1 && y; --n, y = (struct zx_idp_MEDInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idp_AssertionItem_DEL_MEDInfo) */

void zx_idp_AssertionItem_DEL_MEDInfo(struct zx_idp_AssertionItem_s* x, int n)
{
  struct zx_idp_MEDInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MEDInfo = (struct zx_idp_MEDInfo_s*)x->MEDInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_MEDInfo_s*)x->MEDInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_MEDInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MEDInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_MEDInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_AssertionItem_NUM_Assertion) */

int zx_idp_AssertionItem_NUM_Assertion(struct zx_idp_AssertionItem_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_AssertionItem_GET_Assertion) */

struct zx_sa_Assertion_s* zx_idp_AssertionItem_GET_Assertion(struct zx_idp_AssertionItem_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_AssertionItem_POP_Assertion) */

struct zx_sa_Assertion_s* zx_idp_AssertionItem_POP_Assertion(struct zx_idp_AssertionItem_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_AssertionItem_PUSH_Assertion) */

void zx_idp_AssertionItem_PUSH_Assertion(struct zx_idp_AssertionItem_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_idp_AssertionItem_REV_Assertion) */

void zx_idp_AssertionItem_REV_Assertion(struct zx_idp_AssertionItem_s* x)
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

/* FUNC(zx_idp_AssertionItem_PUT_Assertion) */

void zx_idp_AssertionItem_PUT_Assertion(struct zx_idp_AssertionItem_s* x, int n, struct zx_sa_Assertion_s* z)
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

/* FUNC(zx_idp_AssertionItem_ADD_Assertion) */

void zx_idp_AssertionItem_ADD_Assertion(struct zx_idp_AssertionItem_s* x, int n, struct zx_sa_Assertion_s* z)
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

/* FUNC(zx_idp_AssertionItem_DEL_Assertion) */

void zx_idp_AssertionItem_DEL_Assertion(struct zx_idp_AssertionItem_s* x, int n)
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

#endif

/* FUNC(zx_idp_AssertionItem_GET_created) */
struct zx_str* zx_idp_AssertionItem_GET_created(struct zx_idp_AssertionItem_s* x) { return x->created; }
/* FUNC(zx_idp_AssertionItem_PUT_created) */
void zx_idp_AssertionItem_PUT_created(struct zx_idp_AssertionItem_s* x, struct zx_str* y) { x->created = y; }
/* FUNC(zx_idp_AssertionItem_GET_id) */
struct zx_str* zx_idp_AssertionItem_GET_id(struct zx_idp_AssertionItem_s* x) { return x->id; }
/* FUNC(zx_idp_AssertionItem_PUT_id) */
void zx_idp_AssertionItem_PUT_id(struct zx_idp_AssertionItem_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_AuthnContextRestriction_NUM_AuthnContext) */

int zx_idp_AuthnContextRestriction_NUM_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x)
{
  struct zx_sa_AuthnContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnContext; y; ++n, y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_AuthnContextRestriction_GET_AuthnContext) */

struct zx_sa_AuthnContext_s* zx_idp_AuthnContextRestriction_GET_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, int n)
{
  struct zx_sa_AuthnContext_s* y;
  if (!x) return 0;
  for (y = x->AuthnContext; n>=0 && y; --n, y = (struct zx_sa_AuthnContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_AuthnContextRestriction_POP_AuthnContext) */

struct zx_sa_AuthnContext_s* zx_idp_AuthnContextRestriction_POP_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x)
{
  struct zx_sa_AuthnContext_s* y;
  if (!x) return 0;
  y = x->AuthnContext;
  if (y)
    x->AuthnContext = (struct zx_sa_AuthnContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_AuthnContextRestriction_PUSH_AuthnContext) */

void zx_idp_AuthnContextRestriction_PUSH_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, struct zx_sa_AuthnContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnContext->gg.g;
  x->AuthnContext = z;
}

/* FUNC(zx_idp_AuthnContextRestriction_REV_AuthnContext) */

void zx_idp_AuthnContextRestriction_REV_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x)
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

/* FUNC(zx_idp_AuthnContextRestriction_PUT_AuthnContext) */

void zx_idp_AuthnContextRestriction_PUT_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, int n, struct zx_sa_AuthnContext_s* z)
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

/* FUNC(zx_idp_AuthnContextRestriction_ADD_AuthnContext) */

void zx_idp_AuthnContextRestriction_ADD_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, int n, struct zx_sa_AuthnContext_s* z)
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

/* FUNC(zx_idp_AuthnContextRestriction_DEL_AuthnContext) */

void zx_idp_AuthnContextRestriction_DEL_AuthnContext(struct zx_idp_AuthnContextRestriction_s* x, int n)
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

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_CreatedStatus_NUM_CreatedStatusItem) */

int zx_idp_CreatedStatus_NUM_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x)
{
  struct zx_idp_CreatedStatusItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CreatedStatusItem; y; ++n, y = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_CreatedStatus_GET_CreatedStatusItem) */

struct zx_idp_CreatedStatusItem_s* zx_idp_CreatedStatus_GET_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, int n)
{
  struct zx_idp_CreatedStatusItem_s* y;
  if (!x) return 0;
  for (y = x->CreatedStatusItem; n>=0 && y; --n, y = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_CreatedStatus_POP_CreatedStatusItem) */

struct zx_idp_CreatedStatusItem_s* zx_idp_CreatedStatus_POP_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x)
{
  struct zx_idp_CreatedStatusItem_s* y;
  if (!x) return 0;
  y = x->CreatedStatusItem;
  if (y)
    x->CreatedStatusItem = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_CreatedStatus_PUSH_CreatedStatusItem) */

void zx_idp_CreatedStatus_PUSH_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, struct zx_idp_CreatedStatusItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CreatedStatusItem->gg.g;
  x->CreatedStatusItem = z;
}

/* FUNC(zx_idp_CreatedStatus_REV_CreatedStatusItem) */

void zx_idp_CreatedStatus_REV_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x)
{
  struct zx_idp_CreatedStatusItem_s* nxt;
  struct zx_idp_CreatedStatusItem_s* y;
  if (!x) return;
  y = x->CreatedStatusItem;
  if (!y) return;
  x->CreatedStatusItem = 0;
  while (y) {
    nxt = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n;
    y->gg.g.n = &x->CreatedStatusItem->gg.g;
    x->CreatedStatusItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_CreatedStatus_PUT_CreatedStatusItem) */

void zx_idp_CreatedStatus_PUT_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, int n, struct zx_idp_CreatedStatusItem_s* z)
{
  struct zx_idp_CreatedStatusItem_s* y;
  if (!x || !z) return;
  y = x->CreatedStatusItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CreatedStatusItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idp_CreatedStatus_ADD_CreatedStatusItem) */

void zx_idp_CreatedStatus_ADD_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, int n, struct zx_idp_CreatedStatusItem_s* z)
{
  struct zx_idp_CreatedStatusItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CreatedStatusItem->gg.g;
    x->CreatedStatusItem = z;
    return;
  case -1:
    y = x->CreatedStatusItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreatedStatusItem; n > 1 && y; --n, y = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idp_CreatedStatus_DEL_CreatedStatusItem) */

void zx_idp_CreatedStatus_DEL_CreatedStatusItem(struct zx_idp_CreatedStatus_s* x, int n)
{
  struct zx_idp_CreatedStatusItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CreatedStatusItem = (struct zx_idp_CreatedStatusItem_s*)x->CreatedStatusItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_CreatedStatusItem_s*)x->CreatedStatusItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreatedStatusItem; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_CreatedStatusItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_idp_CreatedStatusItem_GET_ref) */
struct zx_str* zx_idp_CreatedStatusItem_GET_ref(struct zx_idp_CreatedStatusItem_s* x) { return x->ref; }
/* FUNC(zx_idp_CreatedStatusItem_PUT_ref) */
void zx_idp_CreatedStatusItem_PUT_ref(struct zx_idp_CreatedStatusItem_s* x, struct zx_str* y) { x->ref = y; }
/* FUNC(zx_idp_CreatedStatusItem_GET_used) */
struct zx_str* zx_idp_CreatedStatusItem_GET_used(struct zx_idp_CreatedStatusItem_s* x) { return x->used; }
/* FUNC(zx_idp_CreatedStatusItem_PUT_used) */
void zx_idp_CreatedStatusItem_PUT_used(struct zx_idp_CreatedStatusItem_s* x, struct zx_str* y) { x->used = y; }
/* FUNC(zx_idp_CreatedStatusItem_GET_firstUsed) */
struct zx_str* zx_idp_CreatedStatusItem_GET_firstUsed(struct zx_idp_CreatedStatusItem_s* x) { return x->firstUsed; }
/* FUNC(zx_idp_CreatedStatusItem_PUT_firstUsed) */
void zx_idp_CreatedStatusItem_PUT_firstUsed(struct zx_idp_CreatedStatusItem_s* x, struct zx_str* y) { x->firstUsed = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_CreatedStatusResponse_NUM_Status) */

int zx_idp_CreatedStatusResponse_NUM_Status(struct zx_idp_CreatedStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_CreatedStatusResponse_GET_Status) */

struct zx_lu_Status_s* zx_idp_CreatedStatusResponse_GET_Status(struct zx_idp_CreatedStatusResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_CreatedStatusResponse_POP_Status) */

struct zx_lu_Status_s* zx_idp_CreatedStatusResponse_POP_Status(struct zx_idp_CreatedStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_CreatedStatusResponse_PUSH_Status) */

void zx_idp_CreatedStatusResponse_PUSH_Status(struct zx_idp_CreatedStatusResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_idp_CreatedStatusResponse_REV_Status) */

void zx_idp_CreatedStatusResponse_REV_Status(struct zx_idp_CreatedStatusResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_CreatedStatusResponse_PUT_Status) */

void zx_idp_CreatedStatusResponse_PUT_Status(struct zx_idp_CreatedStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idp_CreatedStatusResponse_ADD_Status) */

void zx_idp_CreatedStatusResponse_ADD_Status(struct zx_idp_CreatedStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idp_CreatedStatusResponse_DEL_Status) */

void zx_idp_CreatedStatusResponse_DEL_Status(struct zx_idp_CreatedStatusResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_GetAssertion_NUM_AuthnRequest) */

int zx_idp_GetAssertion_NUM_AuthnRequest(struct zx_idp_GetAssertion_s* x)
{
  struct zx_sp_AuthnRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnRequest; y; ++n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_GetAssertion_GET_AuthnRequest) */

struct zx_sp_AuthnRequest_s* zx_idp_GetAssertion_GET_AuthnRequest(struct zx_idp_GetAssertion_s* x, int n)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return 0;
  for (y = x->AuthnRequest; n>=0 && y; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_GetAssertion_POP_AuthnRequest) */

struct zx_sp_AuthnRequest_s* zx_idp_GetAssertion_POP_AuthnRequest(struct zx_idp_GetAssertion_s* x)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return 0;
  y = x->AuthnRequest;
  if (y)
    x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_GetAssertion_PUSH_AuthnRequest) */

void zx_idp_GetAssertion_PUSH_AuthnRequest(struct zx_idp_GetAssertion_s* x, struct zx_sp_AuthnRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnRequest->gg.g;
  x->AuthnRequest = z;
}

/* FUNC(zx_idp_GetAssertion_REV_AuthnRequest) */

void zx_idp_GetAssertion_REV_AuthnRequest(struct zx_idp_GetAssertion_s* x)
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

/* FUNC(zx_idp_GetAssertion_PUT_AuthnRequest) */

void zx_idp_GetAssertion_PUT_AuthnRequest(struct zx_idp_GetAssertion_s* x, int n, struct zx_sp_AuthnRequest_s* z)
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

/* FUNC(zx_idp_GetAssertion_ADD_AuthnRequest) */

void zx_idp_GetAssertion_ADD_AuthnRequest(struct zx_idp_GetAssertion_s* x, int n, struct zx_sp_AuthnRequest_s* z)
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

/* FUNC(zx_idp_GetAssertion_DEL_AuthnRequest) */

void zx_idp_GetAssertion_DEL_AuthnRequest(struct zx_idp_GetAssertion_s* x, int n)
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

#endif

/* FUNC(zx_idp_GetAssertion_GET_purpose) */
struct zx_str* zx_idp_GetAssertion_GET_purpose(struct zx_idp_GetAssertion_s* x) { return x->purpose; }
/* FUNC(zx_idp_GetAssertion_PUT_purpose) */
void zx_idp_GetAssertion_PUT_purpose(struct zx_idp_GetAssertion_s* x, struct zx_str* y) { x->purpose = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_GetAssertionResponse_NUM_Status) */

int zx_idp_GetAssertionResponse_NUM_Status(struct zx_idp_GetAssertionResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_GetAssertionResponse_GET_Status) */

struct zx_lu_Status_s* zx_idp_GetAssertionResponse_GET_Status(struct zx_idp_GetAssertionResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_GetAssertionResponse_POP_Status) */

struct zx_lu_Status_s* zx_idp_GetAssertionResponse_POP_Status(struct zx_idp_GetAssertionResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_GetAssertionResponse_PUSH_Status) */

void zx_idp_GetAssertionResponse_PUSH_Status(struct zx_idp_GetAssertionResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_idp_GetAssertionResponse_REV_Status) */

void zx_idp_GetAssertionResponse_REV_Status(struct zx_idp_GetAssertionResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_GetAssertionResponse_PUT_Status) */

void zx_idp_GetAssertionResponse_PUT_Status(struct zx_idp_GetAssertionResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idp_GetAssertionResponse_ADD_Status) */

void zx_idp_GetAssertionResponse_ADD_Status(struct zx_idp_GetAssertionResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idp_GetAssertionResponse_DEL_Status) */

void zx_idp_GetAssertionResponse_DEL_Status(struct zx_idp_GetAssertionResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_GetAssertionResponse_NUM_GetAssertionResponseItem) */

int zx_idp_GetAssertionResponse_NUM_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x)
{
  struct zx_idp_GetAssertionResponseItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetAssertionResponseItem; y; ++n, y = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_GetAssertionResponse_GET_GetAssertionResponseItem) */

struct zx_idp_GetAssertionResponseItem_s* zx_idp_GetAssertionResponse_GET_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, int n)
{
  struct zx_idp_GetAssertionResponseItem_s* y;
  if (!x) return 0;
  for (y = x->GetAssertionResponseItem; n>=0 && y; --n, y = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_GetAssertionResponse_POP_GetAssertionResponseItem) */

struct zx_idp_GetAssertionResponseItem_s* zx_idp_GetAssertionResponse_POP_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x)
{
  struct zx_idp_GetAssertionResponseItem_s* y;
  if (!x) return 0;
  y = x->GetAssertionResponseItem;
  if (y)
    x->GetAssertionResponseItem = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_GetAssertionResponse_PUSH_GetAssertionResponseItem) */

void zx_idp_GetAssertionResponse_PUSH_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, struct zx_idp_GetAssertionResponseItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetAssertionResponseItem->gg.g;
  x->GetAssertionResponseItem = z;
}

/* FUNC(zx_idp_GetAssertionResponse_REV_GetAssertionResponseItem) */

void zx_idp_GetAssertionResponse_REV_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x)
{
  struct zx_idp_GetAssertionResponseItem_s* nxt;
  struct zx_idp_GetAssertionResponseItem_s* y;
  if (!x) return;
  y = x->GetAssertionResponseItem;
  if (!y) return;
  x->GetAssertionResponseItem = 0;
  while (y) {
    nxt = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n;
    y->gg.g.n = &x->GetAssertionResponseItem->gg.g;
    x->GetAssertionResponseItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_GetAssertionResponse_PUT_GetAssertionResponseItem) */

void zx_idp_GetAssertionResponse_PUT_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, int n, struct zx_idp_GetAssertionResponseItem_s* z)
{
  struct zx_idp_GetAssertionResponseItem_s* y;
  if (!x || !z) return;
  y = x->GetAssertionResponseItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetAssertionResponseItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idp_GetAssertionResponse_ADD_GetAssertionResponseItem) */

void zx_idp_GetAssertionResponse_ADD_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, int n, struct zx_idp_GetAssertionResponseItem_s* z)
{
  struct zx_idp_GetAssertionResponseItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetAssertionResponseItem->gg.g;
    x->GetAssertionResponseItem = z;
    return;
  case -1:
    y = x->GetAssertionResponseItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetAssertionResponseItem; n > 1 && y; --n, y = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idp_GetAssertionResponse_DEL_GetAssertionResponseItem) */

void zx_idp_GetAssertionResponse_DEL_GetAssertionResponseItem(struct zx_idp_GetAssertionResponse_s* x, int n)
{
  struct zx_idp_GetAssertionResponseItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetAssertionResponseItem = (struct zx_idp_GetAssertionResponseItem_s*)x->GetAssertionResponseItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_GetAssertionResponseItem_s*)x->GetAssertionResponseItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetAssertionResponseItem; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetAssertionResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_GetAssertionResponseItem_NUM_AssertionItem) */

int zx_idp_GetAssertionResponseItem_NUM_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x)
{
  struct zx_idp_AssertionItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionItem; y; ++n, y = (struct zx_idp_AssertionItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_GetAssertionResponseItem_GET_AssertionItem) */

struct zx_idp_AssertionItem_s* zx_idp_GetAssertionResponseItem_GET_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, int n)
{
  struct zx_idp_AssertionItem_s* y;
  if (!x) return 0;
  for (y = x->AssertionItem; n>=0 && y; --n, y = (struct zx_idp_AssertionItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_GetAssertionResponseItem_POP_AssertionItem) */

struct zx_idp_AssertionItem_s* zx_idp_GetAssertionResponseItem_POP_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x)
{
  struct zx_idp_AssertionItem_s* y;
  if (!x) return 0;
  y = x->AssertionItem;
  if (y)
    x->AssertionItem = (struct zx_idp_AssertionItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_GetAssertionResponseItem_PUSH_AssertionItem) */

void zx_idp_GetAssertionResponseItem_PUSH_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, struct zx_idp_AssertionItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionItem->gg.g;
  x->AssertionItem = z;
}

/* FUNC(zx_idp_GetAssertionResponseItem_REV_AssertionItem) */

void zx_idp_GetAssertionResponseItem_REV_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x)
{
  struct zx_idp_AssertionItem_s* nxt;
  struct zx_idp_AssertionItem_s* y;
  if (!x) return;
  y = x->AssertionItem;
  if (!y) return;
  x->AssertionItem = 0;
  while (y) {
    nxt = (struct zx_idp_AssertionItem_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionItem->gg.g;
    x->AssertionItem = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_GetAssertionResponseItem_PUT_AssertionItem) */

void zx_idp_GetAssertionResponseItem_PUT_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, int n, struct zx_idp_AssertionItem_s* z)
{
  struct zx_idp_AssertionItem_s* y;
  if (!x || !z) return;
  y = x->AssertionItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_AssertionItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idp_GetAssertionResponseItem_ADD_AssertionItem) */

void zx_idp_GetAssertionResponseItem_ADD_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, int n, struct zx_idp_AssertionItem_s* z)
{
  struct zx_idp_AssertionItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionItem->gg.g;
    x->AssertionItem = z;
    return;
  case -1:
    y = x->AssertionItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_AssertionItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionItem; n > 1 && y; --n, y = (struct zx_idp_AssertionItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idp_GetAssertionResponseItem_DEL_AssertionItem) */

void zx_idp_GetAssertionResponseItem_DEL_AssertionItem(struct zx_idp_GetAssertionResponseItem_s* x, int n)
{
  struct zx_idp_AssertionItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionItem = (struct zx_idp_AssertionItem_s*)x->AssertionItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_AssertionItem_s*)x->AssertionItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_AssertionItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionItem; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_AssertionItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_idp_GetAssertionResponseItem_GET_ref) */
struct zx_str* zx_idp_GetAssertionResponseItem_GET_ref(struct zx_idp_GetAssertionResponseItem_s* x) { return x->ref; }
/* FUNC(zx_idp_GetAssertionResponseItem_PUT_ref) */
void zx_idp_GetAssertionResponseItem_PUT_ref(struct zx_idp_GetAssertionResponseItem_s* x, struct zx_str* y) { x->ref = y; }
/* FUNC(zx_idp_GetAssertionResponseItem_GET_id) */
struct zx_str* zx_idp_GetAssertionResponseItem_GET_id(struct zx_idp_GetAssertionResponseItem_s* x) { return x->id; }
/* FUNC(zx_idp_GetAssertionResponseItem_PUT_id) */
void zx_idp_GetAssertionResponseItem_PUT_id(struct zx_idp_GetAssertionResponseItem_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_GetProviderInfo_NUM_ProviderID) */

int zx_idp_GetProviderInfo_NUM_ProviderID(struct zx_idp_GetProviderInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_idp_GetProviderInfo_GET_ProviderID) */

struct zx_elem_s* zx_idp_GetProviderInfo_GET_ProviderID(struct zx_idp_GetProviderInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_idp_GetProviderInfo_POP_ProviderID) */

struct zx_elem_s* zx_idp_GetProviderInfo_POP_ProviderID(struct zx_idp_GetProviderInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_idp_GetProviderInfo_PUSH_ProviderID) */

void zx_idp_GetProviderInfo_PUSH_ProviderID(struct zx_idp_GetProviderInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zx_idp_GetProviderInfo_REV_ProviderID) */

void zx_idp_GetProviderInfo_REV_ProviderID(struct zx_idp_GetProviderInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ProviderID;
  if (!y) return;
  x->ProviderID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ProviderID->g;
    x->ProviderID = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_GetProviderInfo_PUT_ProviderID) */

void zx_idp_GetProviderInfo_PUT_ProviderID(struct zx_idp_GetProviderInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ProviderID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ProviderID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_idp_GetProviderInfo_ADD_ProviderID) */

void zx_idp_GetProviderInfo_ADD_ProviderID(struct zx_idp_GetProviderInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ProviderID->g;
    x->ProviderID = z;
    return;
  case -1:
    y = x->ProviderID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProviderID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_idp_GetProviderInfo_DEL_ProviderID) */

void zx_idp_GetProviderInfo_DEL_ProviderID(struct zx_idp_GetProviderInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProviderID = (struct zx_elem_s*)x->ProviderID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ProviderID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProviderID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_idp_GetProviderInfo_GET_all) */
struct zx_str* zx_idp_GetProviderInfo_GET_all(struct zx_idp_GetProviderInfo_s* x) { return x->all; }
/* FUNC(zx_idp_GetProviderInfo_PUT_all) */
void zx_idp_GetProviderInfo_PUT_all(struct zx_idp_GetProviderInfo_s* x, struct zx_str* y) { x->all = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_GetProviderInfoResponse_NUM_Status) */

int zx_idp_GetProviderInfoResponse_NUM_Status(struct zx_idp_GetProviderInfoResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_GetProviderInfoResponse_GET_Status) */

struct zx_lu_Status_s* zx_idp_GetProviderInfoResponse_GET_Status(struct zx_idp_GetProviderInfoResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_GetProviderInfoResponse_POP_Status) */

struct zx_lu_Status_s* zx_idp_GetProviderInfoResponse_POP_Status(struct zx_idp_GetProviderInfoResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_GetProviderInfoResponse_PUSH_Status) */

void zx_idp_GetProviderInfoResponse_PUSH_Status(struct zx_idp_GetProviderInfoResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_idp_GetProviderInfoResponse_REV_Status) */

void zx_idp_GetProviderInfoResponse_REV_Status(struct zx_idp_GetProviderInfoResponse_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_GetProviderInfoResponse_PUT_Status) */

void zx_idp_GetProviderInfoResponse_PUT_Status(struct zx_idp_GetProviderInfoResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idp_GetProviderInfoResponse_ADD_Status) */

void zx_idp_GetProviderInfoResponse_ADD_Status(struct zx_idp_GetProviderInfoResponse_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idp_GetProviderInfoResponse_DEL_Status) */

void zx_idp_GetProviderInfoResponse_DEL_Status(struct zx_idp_GetProviderInfoResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_GetProviderInfoResponse_NUM_ProviderInfo) */

int zx_idp_GetProviderInfoResponse_NUM_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x)
{
  struct zx_idp_ProviderInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderInfo; y; ++n, y = (struct zx_idp_ProviderInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_GetProviderInfoResponse_GET_ProviderInfo) */

struct zx_idp_ProviderInfo_s* zx_idp_GetProviderInfoResponse_GET_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, int n)
{
  struct zx_idp_ProviderInfo_s* y;
  if (!x) return 0;
  for (y = x->ProviderInfo; n>=0 && y; --n, y = (struct zx_idp_ProviderInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_GetProviderInfoResponse_POP_ProviderInfo) */

struct zx_idp_ProviderInfo_s* zx_idp_GetProviderInfoResponse_POP_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x)
{
  struct zx_idp_ProviderInfo_s* y;
  if (!x) return 0;
  y = x->ProviderInfo;
  if (y)
    x->ProviderInfo = (struct zx_idp_ProviderInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_GetProviderInfoResponse_PUSH_ProviderInfo) */

void zx_idp_GetProviderInfoResponse_PUSH_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, struct zx_idp_ProviderInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProviderInfo->gg.g;
  x->ProviderInfo = z;
}

/* FUNC(zx_idp_GetProviderInfoResponse_REV_ProviderInfo) */

void zx_idp_GetProviderInfoResponse_REV_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x)
{
  struct zx_idp_ProviderInfo_s* nxt;
  struct zx_idp_ProviderInfo_s* y;
  if (!x) return;
  y = x->ProviderInfo;
  if (!y) return;
  x->ProviderInfo = 0;
  while (y) {
    nxt = (struct zx_idp_ProviderInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->ProviderInfo->gg.g;
    x->ProviderInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_idp_GetProviderInfoResponse_PUT_ProviderInfo) */

void zx_idp_GetProviderInfoResponse_PUT_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, int n, struct zx_idp_ProviderInfo_s* z)
{
  struct zx_idp_ProviderInfo_s* y;
  if (!x || !z) return;
  y = x->ProviderInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProviderInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_ProviderInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_idp_GetProviderInfoResponse_ADD_ProviderInfo) */

void zx_idp_GetProviderInfoResponse_ADD_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, int n, struct zx_idp_ProviderInfo_s* z)
{
  struct zx_idp_ProviderInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProviderInfo->gg.g;
    x->ProviderInfo = z;
    return;
  case -1:
    y = x->ProviderInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_ProviderInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProviderInfo; n > 1 && y; --n, y = (struct zx_idp_ProviderInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_idp_GetProviderInfoResponse_DEL_ProviderInfo) */

void zx_idp_GetProviderInfoResponse_DEL_ProviderInfo(struct zx_idp_GetProviderInfoResponse_s* x, int n)
{
  struct zx_idp_ProviderInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProviderInfo = (struct zx_idp_ProviderInfo_s*)x->ProviderInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_ProviderInfo_s*)x->ProviderInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_ProviderInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProviderInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_ProviderInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_MEDInfo_NUM_NameID) */

int zx_idp_MEDInfo_NUM_NameID(struct zx_idp_MEDInfo_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_MEDInfo_GET_NameID) */

struct zx_sa_NameID_s* zx_idp_MEDInfo_GET_NameID(struct zx_idp_MEDInfo_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_MEDInfo_POP_NameID) */

struct zx_sa_NameID_s* zx_idp_MEDInfo_POP_NameID(struct zx_idp_MEDInfo_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_MEDInfo_PUSH_NameID) */

void zx_idp_MEDInfo_PUSH_NameID(struct zx_idp_MEDInfo_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_idp_MEDInfo_REV_NameID) */

void zx_idp_MEDInfo_REV_NameID(struct zx_idp_MEDInfo_s* x)
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

/* FUNC(zx_idp_MEDInfo_PUT_NameID) */

void zx_idp_MEDInfo_PUT_NameID(struct zx_idp_MEDInfo_s* x, int n, struct zx_sa_NameID_s* z)
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

/* FUNC(zx_idp_MEDInfo_ADD_NameID) */

void zx_idp_MEDInfo_ADD_NameID(struct zx_idp_MEDInfo_s* x, int n, struct zx_sa_NameID_s* z)
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

/* FUNC(zx_idp_MEDInfo_DEL_NameID) */

void zx_idp_MEDInfo_DEL_NameID(struct zx_idp_MEDInfo_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_MEDInfo_NUM_AttributeStatement) */

int zx_idp_MEDInfo_NUM_AttributeStatement(struct zx_idp_MEDInfo_s* x)
{
  struct zx_sa_AttributeStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeStatement; y; ++n, y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_MEDInfo_GET_AttributeStatement) */

struct zx_sa_AttributeStatement_s* zx_idp_MEDInfo_GET_AttributeStatement(struct zx_idp_MEDInfo_s* x, int n)
{
  struct zx_sa_AttributeStatement_s* y;
  if (!x) return 0;
  for (y = x->AttributeStatement; n>=0 && y; --n, y = (struct zx_sa_AttributeStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_MEDInfo_POP_AttributeStatement) */

struct zx_sa_AttributeStatement_s* zx_idp_MEDInfo_POP_AttributeStatement(struct zx_idp_MEDInfo_s* x)
{
  struct zx_sa_AttributeStatement_s* y;
  if (!x) return 0;
  y = x->AttributeStatement;
  if (y)
    x->AttributeStatement = (struct zx_sa_AttributeStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_MEDInfo_PUSH_AttributeStatement) */

void zx_idp_MEDInfo_PUSH_AttributeStatement(struct zx_idp_MEDInfo_s* x, struct zx_sa_AttributeStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeStatement->gg.g;
  x->AttributeStatement = z;
}

/* FUNC(zx_idp_MEDInfo_REV_AttributeStatement) */

void zx_idp_MEDInfo_REV_AttributeStatement(struct zx_idp_MEDInfo_s* x)
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

/* FUNC(zx_idp_MEDInfo_PUT_AttributeStatement) */

void zx_idp_MEDInfo_PUT_AttributeStatement(struct zx_idp_MEDInfo_s* x, int n, struct zx_sa_AttributeStatement_s* z)
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

/* FUNC(zx_idp_MEDInfo_ADD_AttributeStatement) */

void zx_idp_MEDInfo_ADD_AttributeStatement(struct zx_idp_MEDInfo_s* x, int n, struct zx_sa_AttributeStatement_s* z)
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

/* FUNC(zx_idp_MEDInfo_DEL_AttributeStatement) */

void zx_idp_MEDInfo_DEL_AttributeStatement(struct zx_idp_MEDInfo_s* x, int n)
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

#endif






/* FUNC(zx_idp_ProviderInfo_GET_providerID) */
struct zx_str* zx_idp_ProviderInfo_GET_providerID(struct zx_idp_ProviderInfo_s* x) { return x->providerID; }
/* FUNC(zx_idp_ProviderInfo_PUT_providerID) */
void zx_idp_ProviderInfo_PUT_providerID(struct zx_idp_ProviderInfo_s* x, struct zx_str* y) { x->providerID = y; }
/* FUNC(zx_idp_ProviderInfo_GET_name) */
struct zx_str* zx_idp_ProviderInfo_GET_name(struct zx_idp_ProviderInfo_s* x) { return x->name; }
/* FUNC(zx_idp_ProviderInfo_PUT_name) */
void zx_idp_ProviderInfo_PUT_name(struct zx_idp_ProviderInfo_s* x, struct zx_str* y) { x->name = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_idp_SubjectRestriction_NUM_Subject) */

int zx_idp_SubjectRestriction_NUM_Subject(struct zx_idp_SubjectRestriction_s* x)
{
  struct zx_sa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_idp_SubjectRestriction_GET_Subject) */

struct zx_sa_Subject_s* zx_idp_SubjectRestriction_GET_Subject(struct zx_idp_SubjectRestriction_s* x, int n)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_idp_SubjectRestriction_POP_Subject) */

struct zx_sa_Subject_s* zx_idp_SubjectRestriction_POP_Subject(struct zx_idp_SubjectRestriction_s* x)
{
  struct zx_sa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_idp_SubjectRestriction_PUSH_Subject) */

void zx_idp_SubjectRestriction_PUSH_Subject(struct zx_idp_SubjectRestriction_s* x, struct zx_sa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_idp_SubjectRestriction_REV_Subject) */

void zx_idp_SubjectRestriction_REV_Subject(struct zx_idp_SubjectRestriction_s* x)
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

/* FUNC(zx_idp_SubjectRestriction_PUT_Subject) */

void zx_idp_SubjectRestriction_PUT_Subject(struct zx_idp_SubjectRestriction_s* x, int n, struct zx_sa_Subject_s* z)
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

/* FUNC(zx_idp_SubjectRestriction_ADD_Subject) */

void zx_idp_SubjectRestriction_ADD_Subject(struct zx_idp_SubjectRestriction_s* x, int n, struct zx_sa_Subject_s* z)
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

/* FUNC(zx_idp_SubjectRestriction_DEL_Subject) */

void zx_idp_SubjectRestriction_DEL_Subject(struct zx_idp_SubjectRestriction_s* x, int n)
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

#endif






/* EOF -- c/zx-idp-getput.c */
