/* c/zx-prov-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-prov-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_CallbackEPR_NUM_Address) */

int zx_prov_CallbackEPR_NUM_Address(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_CallbackEPR_GET_Address) */

struct zx_a_Address_s* zx_prov_CallbackEPR_GET_Address(struct zx_prov_CallbackEPR_s* x, int n)
{
  struct zx_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_CallbackEPR_POP_Address) */

struct zx_a_Address_s* zx_prov_CallbackEPR_POP_Address(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zx_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_CallbackEPR_PUSH_Address) */

void zx_prov_CallbackEPR_PUSH_Address(struct zx_prov_CallbackEPR_s* x, struct zx_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zx_prov_CallbackEPR_REV_Address) */

void zx_prov_CallbackEPR_REV_Address(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_Address_s* nxt;
  struct zx_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zx_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_CallbackEPR_PUT_Address) */

void zx_prov_CallbackEPR_PUT_Address(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_Address_s* z)
{
  struct zx_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_CallbackEPR_ADD_Address) */

void zx_prov_CallbackEPR_ADD_Address(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_Address_s* z)
{
  struct zx_a_Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Address->gg.g;
    x->Address = z;
    return;
  case -1:
    y = x->Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_CallbackEPR_DEL_Address) */

void zx_prov_CallbackEPR_DEL_Address(struct zx_prov_CallbackEPR_s* x, int n)
{
  struct zx_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zx_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_CallbackEPR_NUM_ReferenceParameters) */

int zx_prov_CallbackEPR_NUM_ReferenceParameters(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_CallbackEPR_GET_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_prov_CallbackEPR_GET_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, int n)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_CallbackEPR_POP_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_prov_CallbackEPR_POP_ReferenceParameters(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_CallbackEPR_PUSH_ReferenceParameters) */

void zx_prov_CallbackEPR_PUSH_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, struct zx_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zx_prov_CallbackEPR_REV_ReferenceParameters) */

void zx_prov_CallbackEPR_REV_ReferenceParameters(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_ReferenceParameters_s* nxt;
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zx_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_CallbackEPR_PUT_ReferenceParameters) */

void zx_prov_CallbackEPR_PUT_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_CallbackEPR_ADD_ReferenceParameters) */

void zx_prov_CallbackEPR_ADD_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = z;
    return;
  case -1:
    y = x->ReferenceParameters;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_CallbackEPR_DEL_ReferenceParameters) */

void zx_prov_CallbackEPR_DEL_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, int n)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_CallbackEPR_NUM_Metadata) */

int zx_prov_CallbackEPR_NUM_Metadata(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_CallbackEPR_GET_Metadata) */

struct zx_a_Metadata_s* zx_prov_CallbackEPR_GET_Metadata(struct zx_prov_CallbackEPR_s* x, int n)
{
  struct zx_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_CallbackEPR_POP_Metadata) */

struct zx_a_Metadata_s* zx_prov_CallbackEPR_POP_Metadata(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zx_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_CallbackEPR_PUSH_Metadata) */

void zx_prov_CallbackEPR_PUSH_Metadata(struct zx_prov_CallbackEPR_s* x, struct zx_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zx_prov_CallbackEPR_REV_Metadata) */

void zx_prov_CallbackEPR_REV_Metadata(struct zx_prov_CallbackEPR_s* x)
{
  struct zx_a_Metadata_s* nxt;
  struct zx_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zx_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_CallbackEPR_PUT_Metadata) */

void zx_prov_CallbackEPR_PUT_Metadata(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_Metadata_s* z)
{
  struct zx_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_CallbackEPR_ADD_Metadata) */

void zx_prov_CallbackEPR_ADD_Metadata(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_Metadata_s* z)
{
  struct zx_a_Metadata_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = z;
    return;
  case -1:
    y = x->Metadata;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_CallbackEPR_DEL_Metadata) */

void zx_prov_CallbackEPR_DEL_Metadata(struct zx_prov_CallbackEPR_s* x, int n)
{
  struct zx_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zx_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_CallbackEPR_GET_notOnOrAfter) */
struct zx_str* zx_prov_CallbackEPR_GET_notOnOrAfter(struct zx_prov_CallbackEPR_s* x) { return x->notOnOrAfter; }
/* FUNC(zx_prov_CallbackEPR_PUT_notOnOrAfter) */
void zx_prov_CallbackEPR_PUT_notOnOrAfter(struct zx_prov_CallbackEPR_s* x, struct zx_str* y) { x->notOnOrAfter = y; }
/* FUNC(zx_prov_CallbackEPR_GET_mustUnderstand) */
struct zx_str* zx_prov_CallbackEPR_GET_mustUnderstand(struct zx_prov_CallbackEPR_s* x) { return x->mustUnderstand; }
/* FUNC(zx_prov_CallbackEPR_PUT_mustUnderstand) */
void zx_prov_CallbackEPR_PUT_mustUnderstand(struct zx_prov_CallbackEPR_s* x, struct zx_str* y) { x->mustUnderstand = y; }
/* FUNC(zx_prov_CallbackEPR_GET_actor) */
struct zx_str* zx_prov_CallbackEPR_GET_actor(struct zx_prov_CallbackEPR_s* x) { return x->actor; }
/* FUNC(zx_prov_CallbackEPR_PUT_actor) */
void zx_prov_CallbackEPR_PUT_actor(struct zx_prov_CallbackEPR_s* x, struct zx_str* y) { x->actor = y; }
/* FUNC(zx_prov_CallbackEPR_GET_Id) */
struct zx_str* zx_prov_CallbackEPR_GET_Id(struct zx_prov_CallbackEPR_s* x) { return x->Id; }
/* FUNC(zx_prov_CallbackEPR_PUT_Id) */
void zx_prov_CallbackEPR_PUT_Id(struct zx_prov_CallbackEPR_s* x, struct zx_str* y) { x->Id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMActivate_NUM_PMActivateItem) */

int zx_prov_PMActivate_NUM_PMActivateItem(struct zx_prov_PMActivate_s* x)
{
  struct zx_prov_PMActivateItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMActivateItem; y; ++n, y = (struct zx_prov_PMActivateItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMActivate_GET_PMActivateItem) */

struct zx_prov_PMActivateItem_s* zx_prov_PMActivate_GET_PMActivateItem(struct zx_prov_PMActivate_s* x, int n)
{
  struct zx_prov_PMActivateItem_s* y;
  if (!x) return 0;
  for (y = x->PMActivateItem; n>=0 && y; --n, y = (struct zx_prov_PMActivateItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMActivate_POP_PMActivateItem) */

struct zx_prov_PMActivateItem_s* zx_prov_PMActivate_POP_PMActivateItem(struct zx_prov_PMActivate_s* x)
{
  struct zx_prov_PMActivateItem_s* y;
  if (!x) return 0;
  y = x->PMActivateItem;
  if (y)
    x->PMActivateItem = (struct zx_prov_PMActivateItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMActivate_PUSH_PMActivateItem) */

void zx_prov_PMActivate_PUSH_PMActivateItem(struct zx_prov_PMActivate_s* x, struct zx_prov_PMActivateItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMActivateItem->gg.g;
  x->PMActivateItem = z;
}

/* FUNC(zx_prov_PMActivate_REV_PMActivateItem) */

void zx_prov_PMActivate_REV_PMActivateItem(struct zx_prov_PMActivate_s* x)
{
  struct zx_prov_PMActivateItem_s* nxt;
  struct zx_prov_PMActivateItem_s* y;
  if (!x) return;
  y = x->PMActivateItem;
  if (!y) return;
  x->PMActivateItem = 0;
  while (y) {
    nxt = (struct zx_prov_PMActivateItem_s*)y->gg.g.n;
    y->gg.g.n = &x->PMActivateItem->gg.g;
    x->PMActivateItem = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMActivate_PUT_PMActivateItem) */

void zx_prov_PMActivate_PUT_PMActivateItem(struct zx_prov_PMActivate_s* x, int n, struct zx_prov_PMActivateItem_s* z)
{
  struct zx_prov_PMActivateItem_s* y;
  if (!x || !z) return;
  y = x->PMActivateItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMActivateItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMActivateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMActivate_ADD_PMActivateItem) */

void zx_prov_PMActivate_ADD_PMActivateItem(struct zx_prov_PMActivate_s* x, int n, struct zx_prov_PMActivateItem_s* z)
{
  struct zx_prov_PMActivateItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMActivateItem->gg.g;
    x->PMActivateItem = z;
    return;
  case -1:
    y = x->PMActivateItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMActivateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMActivateItem; n > 1 && y; --n, y = (struct zx_prov_PMActivateItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMActivate_DEL_PMActivateItem) */

void zx_prov_PMActivate_DEL_PMActivateItem(struct zx_prov_PMActivate_s* x, int n)
{
  struct zx_prov_PMActivateItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMActivateItem = (struct zx_prov_PMActivateItem_s*)x->PMActivateItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMActivateItem_s*)x->PMActivateItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMActivateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMActivateItem; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMActivateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMActivate_NUM_NotifyTo) */

int zx_prov_PMActivate_NUM_NotifyTo(struct zx_prov_PMActivate_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyTo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMActivate_GET_NotifyTo) */

struct zx_elem_s* zx_prov_PMActivate_GET_NotifyTo(struct zx_prov_PMActivate_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NotifyTo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMActivate_POP_NotifyTo) */

struct zx_elem_s* zx_prov_PMActivate_POP_NotifyTo(struct zx_prov_PMActivate_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NotifyTo;
  if (y)
    x->NotifyTo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMActivate_PUSH_NotifyTo) */

void zx_prov_PMActivate_PUSH_NotifyTo(struct zx_prov_PMActivate_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NotifyTo->g;
  x->NotifyTo = z;
}

/* FUNC(zx_prov_PMActivate_REV_NotifyTo) */

void zx_prov_PMActivate_REV_NotifyTo(struct zx_prov_PMActivate_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NotifyTo;
  if (!y) return;
  x->NotifyTo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NotifyTo->g;
    x->NotifyTo = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMActivate_PUT_NotifyTo) */

void zx_prov_PMActivate_PUT_NotifyTo(struct zx_prov_PMActivate_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NotifyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NotifyTo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMActivate_ADD_NotifyTo) */

void zx_prov_PMActivate_ADD_NotifyTo(struct zx_prov_PMActivate_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NotifyTo->g;
    x->NotifyTo = z;
    return;
  case -1:
    y = x->NotifyTo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMActivate_DEL_NotifyTo) */

void zx_prov_PMActivate_DEL_NotifyTo(struct zx_prov_PMActivate_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyTo = (struct zx_elem_s*)x->NotifyTo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NotifyTo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMActivateItem_NUM_PMID) */

int zx_prov_PMActivateItem_NUM_PMID(struct zx_prov_PMActivateItem_s* x)
{
  struct zx_prov_PMID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMID; y; ++n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMActivateItem_GET_PMID) */

struct zx_prov_PMID_s* zx_prov_PMActivateItem_GET_PMID(struct zx_prov_PMActivateItem_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  for (y = x->PMID; n>=0 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMActivateItem_POP_PMID) */

struct zx_prov_PMID_s* zx_prov_PMActivateItem_POP_PMID(struct zx_prov_PMActivateItem_s* x)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  y = x->PMID;
  if (y)
    x->PMID = (struct zx_prov_PMID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMActivateItem_PUSH_PMID) */

void zx_prov_PMActivateItem_PUSH_PMID(struct zx_prov_PMActivateItem_s* x, struct zx_prov_PMID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMID->gg.g;
  x->PMID = z;
}

/* FUNC(zx_prov_PMActivateItem_REV_PMID) */

void zx_prov_PMActivateItem_REV_PMID(struct zx_prov_PMActivateItem_s* x)
{
  struct zx_prov_PMID_s* nxt;
  struct zx_prov_PMID_s* y;
  if (!x) return;
  y = x->PMID;
  if (!y) return;
  x->PMID = 0;
  while (y) {
    nxt = (struct zx_prov_PMID_s*)y->gg.g.n;
    y->gg.g.n = &x->PMID->gg.g;
    x->PMID = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMActivateItem_PUT_PMID) */

void zx_prov_PMActivateItem_PUT_PMID(struct zx_prov_PMActivateItem_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  y = x->PMID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMActivateItem_ADD_PMID) */

void zx_prov_PMActivateItem_ADD_PMID(struct zx_prov_PMActivateItem_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMID->gg.g;
    x->PMID = z;
    return;
  case -1:
    y = x->PMID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMActivateItem_DEL_PMID) */

void zx_prov_PMActivateItem_DEL_PMID(struct zx_prov_PMActivateItem_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMID = (struct zx_prov_PMID_s*)x->PMID->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMID_s*)x->PMID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_PMActivateItem_GET_itemID) */
struct zx_str* zx_prov_PMActivateItem_GET_itemID(struct zx_prov_PMActivateItem_s* x) { return x->itemID; }
/* FUNC(zx_prov_PMActivateItem_PUT_itemID) */
void zx_prov_PMActivateItem_PUT_itemID(struct zx_prov_PMActivateItem_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_prov_PMActivateItem_GET_at) */
struct zx_str* zx_prov_PMActivateItem_GET_at(struct zx_prov_PMActivateItem_s* x) { return x->at; }
/* FUNC(zx_prov_PMActivateItem_PUT_at) */
void zx_prov_PMActivateItem_PUT_at(struct zx_prov_PMActivateItem_s* x, struct zx_str* y) { x->at = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMActivateResponse_NUM_Status) */

int zx_prov_PMActivateResponse_NUM_Status(struct zx_prov_PMActivateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMActivateResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMActivateResponse_GET_Status(struct zx_prov_PMActivateResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMActivateResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMActivateResponse_POP_Status(struct zx_prov_PMActivateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMActivateResponse_PUSH_Status) */

void zx_prov_PMActivateResponse_PUSH_Status(struct zx_prov_PMActivateResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMActivateResponse_REV_Status) */

void zx_prov_PMActivateResponse_REV_Status(struct zx_prov_PMActivateResponse_s* x)
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

/* FUNC(zx_prov_PMActivateResponse_PUT_Status) */

void zx_prov_PMActivateResponse_PUT_Status(struct zx_prov_PMActivateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMActivateResponse_ADD_Status) */

void zx_prov_PMActivateResponse_ADD_Status(struct zx_prov_PMActivateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMActivateResponse_DEL_Status) */

void zx_prov_PMActivateResponse_DEL_Status(struct zx_prov_PMActivateResponse_s* x, int n)
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

/* FUNC(zx_prov_PMDeactivate_NUM_PMDeactivateItem) */

int zx_prov_PMDeactivate_NUM_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x)
{
  struct zx_prov_PMDeactivateItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDeactivateItem; y; ++n, y = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDeactivate_GET_PMDeactivateItem) */

struct zx_prov_PMDeactivateItem_s* zx_prov_PMDeactivate_GET_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, int n)
{
  struct zx_prov_PMDeactivateItem_s* y;
  if (!x) return 0;
  for (y = x->PMDeactivateItem; n>=0 && y; --n, y = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDeactivate_POP_PMDeactivateItem) */

struct zx_prov_PMDeactivateItem_s* zx_prov_PMDeactivate_POP_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x)
{
  struct zx_prov_PMDeactivateItem_s* y;
  if (!x) return 0;
  y = x->PMDeactivateItem;
  if (y)
    x->PMDeactivateItem = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMDeactivate_PUSH_PMDeactivateItem) */

void zx_prov_PMDeactivate_PUSH_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, struct zx_prov_PMDeactivateItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDeactivateItem->gg.g;
  x->PMDeactivateItem = z;
}

/* FUNC(zx_prov_PMDeactivate_REV_PMDeactivateItem) */

void zx_prov_PMDeactivate_REV_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x)
{
  struct zx_prov_PMDeactivateItem_s* nxt;
  struct zx_prov_PMDeactivateItem_s* y;
  if (!x) return;
  y = x->PMDeactivateItem;
  if (!y) return;
  x->PMDeactivateItem = 0;
  while (y) {
    nxt = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDeactivateItem->gg.g;
    x->PMDeactivateItem = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDeactivate_PUT_PMDeactivateItem) */

void zx_prov_PMDeactivate_PUT_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, int n, struct zx_prov_PMDeactivateItem_s* z)
{
  struct zx_prov_PMDeactivateItem_s* y;
  if (!x || !z) return;
  y = x->PMDeactivateItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDeactivateItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMDeactivate_ADD_PMDeactivateItem) */

void zx_prov_PMDeactivate_ADD_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, int n, struct zx_prov_PMDeactivateItem_s* z)
{
  struct zx_prov_PMDeactivateItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDeactivateItem->gg.g;
    x->PMDeactivateItem = z;
    return;
  case -1:
    y = x->PMDeactivateItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeactivateItem; n > 1 && y; --n, y = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMDeactivate_DEL_PMDeactivateItem) */

void zx_prov_PMDeactivate_DEL_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, int n)
{
  struct zx_prov_PMDeactivateItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDeactivateItem = (struct zx_prov_PMDeactivateItem_s*)x->PMDeactivateItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDeactivateItem_s*)x->PMDeactivateItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeactivateItem; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeactivateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDeactivate_NUM_NotifyTo) */

int zx_prov_PMDeactivate_NUM_NotifyTo(struct zx_prov_PMDeactivate_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyTo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDeactivate_GET_NotifyTo) */

struct zx_elem_s* zx_prov_PMDeactivate_GET_NotifyTo(struct zx_prov_PMDeactivate_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NotifyTo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDeactivate_POP_NotifyTo) */

struct zx_elem_s* zx_prov_PMDeactivate_POP_NotifyTo(struct zx_prov_PMDeactivate_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NotifyTo;
  if (y)
    x->NotifyTo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMDeactivate_PUSH_NotifyTo) */

void zx_prov_PMDeactivate_PUSH_NotifyTo(struct zx_prov_PMDeactivate_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NotifyTo->g;
  x->NotifyTo = z;
}

/* FUNC(zx_prov_PMDeactivate_REV_NotifyTo) */

void zx_prov_PMDeactivate_REV_NotifyTo(struct zx_prov_PMDeactivate_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NotifyTo;
  if (!y) return;
  x->NotifyTo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NotifyTo->g;
    x->NotifyTo = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDeactivate_PUT_NotifyTo) */

void zx_prov_PMDeactivate_PUT_NotifyTo(struct zx_prov_PMDeactivate_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NotifyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NotifyTo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMDeactivate_ADD_NotifyTo) */

void zx_prov_PMDeactivate_ADD_NotifyTo(struct zx_prov_PMDeactivate_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NotifyTo->g;
    x->NotifyTo = z;
    return;
  case -1:
    y = x->NotifyTo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMDeactivate_DEL_NotifyTo) */

void zx_prov_PMDeactivate_DEL_NotifyTo(struct zx_prov_PMDeactivate_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyTo = (struct zx_elem_s*)x->NotifyTo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NotifyTo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDeactivateItem_NUM_PMID) */

int zx_prov_PMDeactivateItem_NUM_PMID(struct zx_prov_PMDeactivateItem_s* x)
{
  struct zx_prov_PMID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMID; y; ++n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDeactivateItem_GET_PMID) */

struct zx_prov_PMID_s* zx_prov_PMDeactivateItem_GET_PMID(struct zx_prov_PMDeactivateItem_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  for (y = x->PMID; n>=0 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDeactivateItem_POP_PMID) */

struct zx_prov_PMID_s* zx_prov_PMDeactivateItem_POP_PMID(struct zx_prov_PMDeactivateItem_s* x)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  y = x->PMID;
  if (y)
    x->PMID = (struct zx_prov_PMID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMDeactivateItem_PUSH_PMID) */

void zx_prov_PMDeactivateItem_PUSH_PMID(struct zx_prov_PMDeactivateItem_s* x, struct zx_prov_PMID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMID->gg.g;
  x->PMID = z;
}

/* FUNC(zx_prov_PMDeactivateItem_REV_PMID) */

void zx_prov_PMDeactivateItem_REV_PMID(struct zx_prov_PMDeactivateItem_s* x)
{
  struct zx_prov_PMID_s* nxt;
  struct zx_prov_PMID_s* y;
  if (!x) return;
  y = x->PMID;
  if (!y) return;
  x->PMID = 0;
  while (y) {
    nxt = (struct zx_prov_PMID_s*)y->gg.g.n;
    y->gg.g.n = &x->PMID->gg.g;
    x->PMID = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDeactivateItem_PUT_PMID) */

void zx_prov_PMDeactivateItem_PUT_PMID(struct zx_prov_PMDeactivateItem_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  y = x->PMID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMDeactivateItem_ADD_PMID) */

void zx_prov_PMDeactivateItem_ADD_PMID(struct zx_prov_PMDeactivateItem_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMID->gg.g;
    x->PMID = z;
    return;
  case -1:
    y = x->PMID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMDeactivateItem_DEL_PMID) */

void zx_prov_PMDeactivateItem_DEL_PMID(struct zx_prov_PMDeactivateItem_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMID = (struct zx_prov_PMID_s*)x->PMID->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMID_s*)x->PMID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_PMDeactivateItem_GET_itemID) */
struct zx_str* zx_prov_PMDeactivateItem_GET_itemID(struct zx_prov_PMDeactivateItem_s* x) { return x->itemID; }
/* FUNC(zx_prov_PMDeactivateItem_PUT_itemID) */
void zx_prov_PMDeactivateItem_PUT_itemID(struct zx_prov_PMDeactivateItem_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_prov_PMDeactivateItem_GET_at) */
struct zx_str* zx_prov_PMDeactivateItem_GET_at(struct zx_prov_PMDeactivateItem_s* x) { return x->at; }
/* FUNC(zx_prov_PMDeactivateItem_PUT_at) */
void zx_prov_PMDeactivateItem_PUT_at(struct zx_prov_PMDeactivateItem_s* x, struct zx_str* y) { x->at = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDeactivateResponse_NUM_Status) */

int zx_prov_PMDeactivateResponse_NUM_Status(struct zx_prov_PMDeactivateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDeactivateResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMDeactivateResponse_GET_Status(struct zx_prov_PMDeactivateResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDeactivateResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMDeactivateResponse_POP_Status(struct zx_prov_PMDeactivateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMDeactivateResponse_PUSH_Status) */

void zx_prov_PMDeactivateResponse_PUSH_Status(struct zx_prov_PMDeactivateResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMDeactivateResponse_REV_Status) */

void zx_prov_PMDeactivateResponse_REV_Status(struct zx_prov_PMDeactivateResponse_s* x)
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

/* FUNC(zx_prov_PMDeactivateResponse_PUT_Status) */

void zx_prov_PMDeactivateResponse_PUT_Status(struct zx_prov_PMDeactivateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMDeactivateResponse_ADD_Status) */

void zx_prov_PMDeactivateResponse_ADD_Status(struct zx_prov_PMDeactivateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMDeactivateResponse_DEL_Status) */

void zx_prov_PMDeactivateResponse_DEL_Status(struct zx_prov_PMDeactivateResponse_s* x, int n)
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

/* FUNC(zx_prov_PMDelete_NUM_PMDeleteItem) */

int zx_prov_PMDelete_NUM_PMDeleteItem(struct zx_prov_PMDelete_s* x)
{
  struct zx_prov_PMDeleteItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDeleteItem; y; ++n, y = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDelete_GET_PMDeleteItem) */

struct zx_prov_PMDeleteItem_s* zx_prov_PMDelete_GET_PMDeleteItem(struct zx_prov_PMDelete_s* x, int n)
{
  struct zx_prov_PMDeleteItem_s* y;
  if (!x) return 0;
  for (y = x->PMDeleteItem; n>=0 && y; --n, y = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDelete_POP_PMDeleteItem) */

struct zx_prov_PMDeleteItem_s* zx_prov_PMDelete_POP_PMDeleteItem(struct zx_prov_PMDelete_s* x)
{
  struct zx_prov_PMDeleteItem_s* y;
  if (!x) return 0;
  y = x->PMDeleteItem;
  if (y)
    x->PMDeleteItem = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMDelete_PUSH_PMDeleteItem) */

void zx_prov_PMDelete_PUSH_PMDeleteItem(struct zx_prov_PMDelete_s* x, struct zx_prov_PMDeleteItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDeleteItem->gg.g;
  x->PMDeleteItem = z;
}

/* FUNC(zx_prov_PMDelete_REV_PMDeleteItem) */

void zx_prov_PMDelete_REV_PMDeleteItem(struct zx_prov_PMDelete_s* x)
{
  struct zx_prov_PMDeleteItem_s* nxt;
  struct zx_prov_PMDeleteItem_s* y;
  if (!x) return;
  y = x->PMDeleteItem;
  if (!y) return;
  x->PMDeleteItem = 0;
  while (y) {
    nxt = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDeleteItem->gg.g;
    x->PMDeleteItem = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDelete_PUT_PMDeleteItem) */

void zx_prov_PMDelete_PUT_PMDeleteItem(struct zx_prov_PMDelete_s* x, int n, struct zx_prov_PMDeleteItem_s* z)
{
  struct zx_prov_PMDeleteItem_s* y;
  if (!x || !z) return;
  y = x->PMDeleteItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDeleteItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMDelete_ADD_PMDeleteItem) */

void zx_prov_PMDelete_ADD_PMDeleteItem(struct zx_prov_PMDelete_s* x, int n, struct zx_prov_PMDeleteItem_s* z)
{
  struct zx_prov_PMDeleteItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDeleteItem->gg.g;
    x->PMDeleteItem = z;
    return;
  case -1:
    y = x->PMDeleteItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeleteItem; n > 1 && y; --n, y = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMDelete_DEL_PMDeleteItem) */

void zx_prov_PMDelete_DEL_PMDeleteItem(struct zx_prov_PMDelete_s* x, int n)
{
  struct zx_prov_PMDeleteItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDeleteItem = (struct zx_prov_PMDeleteItem_s*)x->PMDeleteItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDeleteItem_s*)x->PMDeleteItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeleteItem; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeleteItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDelete_NUM_NotifyTo) */

int zx_prov_PMDelete_NUM_NotifyTo(struct zx_prov_PMDelete_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyTo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDelete_GET_NotifyTo) */

struct zx_elem_s* zx_prov_PMDelete_GET_NotifyTo(struct zx_prov_PMDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NotifyTo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDelete_POP_NotifyTo) */

struct zx_elem_s* zx_prov_PMDelete_POP_NotifyTo(struct zx_prov_PMDelete_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NotifyTo;
  if (y)
    x->NotifyTo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMDelete_PUSH_NotifyTo) */

void zx_prov_PMDelete_PUSH_NotifyTo(struct zx_prov_PMDelete_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NotifyTo->g;
  x->NotifyTo = z;
}

/* FUNC(zx_prov_PMDelete_REV_NotifyTo) */

void zx_prov_PMDelete_REV_NotifyTo(struct zx_prov_PMDelete_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NotifyTo;
  if (!y) return;
  x->NotifyTo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NotifyTo->g;
    x->NotifyTo = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDelete_PUT_NotifyTo) */

void zx_prov_PMDelete_PUT_NotifyTo(struct zx_prov_PMDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NotifyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NotifyTo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMDelete_ADD_NotifyTo) */

void zx_prov_PMDelete_ADD_NotifyTo(struct zx_prov_PMDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NotifyTo->g;
    x->NotifyTo = z;
    return;
  case -1:
    y = x->NotifyTo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMDelete_DEL_NotifyTo) */

void zx_prov_PMDelete_DEL_NotifyTo(struct zx_prov_PMDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyTo = (struct zx_elem_s*)x->NotifyTo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NotifyTo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDeleteItem_NUM_PMID) */

int zx_prov_PMDeleteItem_NUM_PMID(struct zx_prov_PMDeleteItem_s* x)
{
  struct zx_prov_PMID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMID; y; ++n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDeleteItem_GET_PMID) */

struct zx_prov_PMID_s* zx_prov_PMDeleteItem_GET_PMID(struct zx_prov_PMDeleteItem_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  for (y = x->PMID; n>=0 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDeleteItem_POP_PMID) */

struct zx_prov_PMID_s* zx_prov_PMDeleteItem_POP_PMID(struct zx_prov_PMDeleteItem_s* x)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  y = x->PMID;
  if (y)
    x->PMID = (struct zx_prov_PMID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMDeleteItem_PUSH_PMID) */

void zx_prov_PMDeleteItem_PUSH_PMID(struct zx_prov_PMDeleteItem_s* x, struct zx_prov_PMID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMID->gg.g;
  x->PMID = z;
}

/* FUNC(zx_prov_PMDeleteItem_REV_PMID) */

void zx_prov_PMDeleteItem_REV_PMID(struct zx_prov_PMDeleteItem_s* x)
{
  struct zx_prov_PMID_s* nxt;
  struct zx_prov_PMID_s* y;
  if (!x) return;
  y = x->PMID;
  if (!y) return;
  x->PMID = 0;
  while (y) {
    nxt = (struct zx_prov_PMID_s*)y->gg.g.n;
    y->gg.g.n = &x->PMID->gg.g;
    x->PMID = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDeleteItem_PUT_PMID) */

void zx_prov_PMDeleteItem_PUT_PMID(struct zx_prov_PMDeleteItem_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  y = x->PMID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMDeleteItem_ADD_PMID) */

void zx_prov_PMDeleteItem_ADD_PMID(struct zx_prov_PMDeleteItem_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMID->gg.g;
    x->PMID = z;
    return;
  case -1:
    y = x->PMID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMDeleteItem_DEL_PMID) */

void zx_prov_PMDeleteItem_DEL_PMID(struct zx_prov_PMDeleteItem_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMID = (struct zx_prov_PMID_s*)x->PMID->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMID_s*)x->PMID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_PMDeleteItem_GET_itemID) */
struct zx_str* zx_prov_PMDeleteItem_GET_itemID(struct zx_prov_PMDeleteItem_s* x) { return x->itemID; }
/* FUNC(zx_prov_PMDeleteItem_PUT_itemID) */
void zx_prov_PMDeleteItem_PUT_itemID(struct zx_prov_PMDeleteItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDeleteResponse_NUM_Status) */

int zx_prov_PMDeleteResponse_NUM_Status(struct zx_prov_PMDeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDeleteResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMDeleteResponse_GET_Status(struct zx_prov_PMDeleteResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDeleteResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMDeleteResponse_POP_Status(struct zx_prov_PMDeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMDeleteResponse_PUSH_Status) */

void zx_prov_PMDeleteResponse_PUSH_Status(struct zx_prov_PMDeleteResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMDeleteResponse_REV_Status) */

void zx_prov_PMDeleteResponse_REV_Status(struct zx_prov_PMDeleteResponse_s* x)
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

/* FUNC(zx_prov_PMDeleteResponse_PUT_Status) */

void zx_prov_PMDeleteResponse_PUT_Status(struct zx_prov_PMDeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMDeleteResponse_ADD_Status) */

void zx_prov_PMDeleteResponse_ADD_Status(struct zx_prov_PMDeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMDeleteResponse_DEL_Status) */

void zx_prov_PMDeleteResponse_DEL_Status(struct zx_prov_PMDeleteResponse_s* x, int n)
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

/* FUNC(zx_prov_PMDescriptor_NUM_PMID) */

int zx_prov_PMDescriptor_NUM_PMID(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_prov_PMID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMID; y; ++n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDescriptor_GET_PMID) */

struct zx_prov_PMID_s* zx_prov_PMDescriptor_GET_PMID(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  for (y = x->PMID; n>=0 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_POP_PMID) */

struct zx_prov_PMID_s* zx_prov_PMDescriptor_POP_PMID(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  y = x->PMID;
  if (y)
    x->PMID = (struct zx_prov_PMID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_PUSH_PMID) */

void zx_prov_PMDescriptor_PUSH_PMID(struct zx_prov_PMDescriptor_s* x, struct zx_prov_PMID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMID->gg.g;
  x->PMID = z;
}

/* FUNC(zx_prov_PMDescriptor_REV_PMID) */

void zx_prov_PMDescriptor_REV_PMID(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_prov_PMID_s* nxt;
  struct zx_prov_PMID_s* y;
  if (!x) return;
  y = x->PMID;
  if (!y) return;
  x->PMID = 0;
  while (y) {
    nxt = (struct zx_prov_PMID_s*)y->gg.g.n;
    y->gg.g.n = &x->PMID->gg.g;
    x->PMID = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDescriptor_PUT_PMID) */

void zx_prov_PMDescriptor_PUT_PMID(struct zx_prov_PMDescriptor_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  y = x->PMID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMDescriptor_ADD_PMID) */

void zx_prov_PMDescriptor_ADD_PMID(struct zx_prov_PMDescriptor_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMID->gg.g;
    x->PMID = z;
    return;
  case -1:
    y = x->PMID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMDescriptor_DEL_PMID) */

void zx_prov_PMDescriptor_DEL_PMID(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMID = (struct zx_prov_PMID_s*)x->PMID->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMID_s*)x->PMID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDescriptor_NUM_PMEngineRef) */

int zx_prov_PMDescriptor_NUM_PMEngineRef(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDescriptor_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMDescriptor_GET_PMEngineRef(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMDescriptor_POP_PMEngineRef(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_PUSH_PMEngineRef) */

void zx_prov_PMDescriptor_PUSH_PMEngineRef(struct zx_prov_PMDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMDescriptor_REV_PMEngineRef) */

void zx_prov_PMDescriptor_REV_PMEngineRef(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDescriptor_PUT_PMEngineRef) */

void zx_prov_PMDescriptor_PUT_PMEngineRef(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMDescriptor_ADD_PMEngineRef) */

void zx_prov_PMDescriptor_ADD_PMEngineRef(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMDescriptor_DEL_PMEngineRef) */

void zx_prov_PMDescriptor_DEL_PMEngineRef(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDescriptor_NUM_PMInitData) */

int zx_prov_PMDescriptor_NUM_PMInitData(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMInitData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDescriptor_GET_PMInitData) */

struct zx_elem_s* zx_prov_PMDescriptor_GET_PMInitData(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMInitData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_POP_PMInitData) */

struct zx_elem_s* zx_prov_PMDescriptor_POP_PMInitData(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMInitData;
  if (y)
    x->PMInitData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_PUSH_PMInitData) */

void zx_prov_PMDescriptor_PUSH_PMInitData(struct zx_prov_PMDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMInitData->g;
  x->PMInitData = z;
}

/* FUNC(zx_prov_PMDescriptor_REV_PMInitData) */

void zx_prov_PMDescriptor_REV_PMInitData(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMInitData;
  if (!y) return;
  x->PMInitData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMInitData->g;
    x->PMInitData = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDescriptor_PUT_PMInitData) */

void zx_prov_PMDescriptor_PUT_PMInitData(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMInitData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMInitData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMDescriptor_ADD_PMInitData) */

void zx_prov_PMDescriptor_ADD_PMInitData(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMInitData->g;
    x->PMInitData = z;
    return;
  case -1:
    y = x->PMInitData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMInitData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMDescriptor_DEL_PMInitData) */

void zx_prov_PMDescriptor_DEL_PMInitData(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMInitData = (struct zx_elem_s*)x->PMInitData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMInitData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMInitData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDescriptor_NUM_PMRTData) */

int zx_prov_PMDescriptor_NUM_PMRTData(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMRTData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDescriptor_GET_PMRTData) */

struct zx_elem_s* zx_prov_PMDescriptor_GET_PMRTData(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMRTData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_POP_PMRTData) */

struct zx_elem_s* zx_prov_PMDescriptor_POP_PMRTData(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMRTData;
  if (y)
    x->PMRTData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_PUSH_PMRTData) */

void zx_prov_PMDescriptor_PUSH_PMRTData(struct zx_prov_PMDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMRTData->g;
  x->PMRTData = z;
}

/* FUNC(zx_prov_PMDescriptor_REV_PMRTData) */

void zx_prov_PMDescriptor_REV_PMRTData(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMRTData;
  if (!y) return;
  x->PMRTData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMRTData->g;
    x->PMRTData = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMDescriptor_PUT_PMRTData) */

void zx_prov_PMDescriptor_PUT_PMRTData(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMRTData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMRTData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMDescriptor_ADD_PMRTData) */

void zx_prov_PMDescriptor_ADD_PMRTData(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMRTData->g;
    x->PMRTData = z;
    return;
  case -1:
    y = x->PMRTData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMRTData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMDescriptor_DEL_PMRTData) */

void zx_prov_PMDescriptor_DEL_PMRTData(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMRTData = (struct zx_elem_s*)x->PMRTData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMRTData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMRTData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMDescriptor_NUM_Signature) */

int zx_prov_PMDescriptor_NUM_Signature(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMDescriptor_GET_Signature) */

struct zx_ds_Signature_s* zx_prov_PMDescriptor_GET_Signature(struct zx_prov_PMDescriptor_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_POP_Signature) */

struct zx_ds_Signature_s* zx_prov_PMDescriptor_POP_Signature(struct zx_prov_PMDescriptor_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMDescriptor_PUSH_Signature) */

void zx_prov_PMDescriptor_PUSH_Signature(struct zx_prov_PMDescriptor_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_prov_PMDescriptor_REV_Signature) */

void zx_prov_PMDescriptor_REV_Signature(struct zx_prov_PMDescriptor_s* x)
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

/* FUNC(zx_prov_PMDescriptor_PUT_Signature) */

void zx_prov_PMDescriptor_PUT_Signature(struct zx_prov_PMDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_prov_PMDescriptor_ADD_Signature) */

void zx_prov_PMDescriptor_ADD_Signature(struct zx_prov_PMDescriptor_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_prov_PMDescriptor_DEL_Signature) */

void zx_prov_PMDescriptor_DEL_Signature(struct zx_prov_PMDescriptor_s* x, int n)
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

#endif

/* FUNC(zx_prov_PMDescriptor_GET_activate) */
struct zx_str* zx_prov_PMDescriptor_GET_activate(struct zx_prov_PMDescriptor_s* x) { return x->activate; }
/* FUNC(zx_prov_PMDescriptor_PUT_activate) */
void zx_prov_PMDescriptor_PUT_activate(struct zx_prov_PMDescriptor_s* x, struct zx_str* y) { x->activate = y; }
/* FUNC(zx_prov_PMDescriptor_GET_activateAt) */
struct zx_str* zx_prov_PMDescriptor_GET_activateAt(struct zx_prov_PMDescriptor_s* x) { return x->activateAt; }
/* FUNC(zx_prov_PMDescriptor_PUT_activateAt) */
void zx_prov_PMDescriptor_PUT_activateAt(struct zx_prov_PMDescriptor_s* x, struct zx_str* y) { x->activateAt = y; }
/* FUNC(zx_prov_PMDescriptor_GET_deactivateAt) */
struct zx_str* zx_prov_PMDescriptor_GET_deactivateAt(struct zx_prov_PMDescriptor_s* x) { return x->deactivateAt; }
/* FUNC(zx_prov_PMDescriptor_PUT_deactivateAt) */
void zx_prov_PMDescriptor_PUT_deactivateAt(struct zx_prov_PMDescriptor_s* x, struct zx_str* y) { x->deactivateAt = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEDelete_NUM_PMEngineRef) */

int zx_prov_PMEDelete_NUM_PMEngineRef(struct zx_prov_PMEDelete_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEDelete_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEDelete_GET_PMEngineRef(struct zx_prov_PMEDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEDelete_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEDelete_POP_PMEngineRef(struct zx_prov_PMEDelete_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEDelete_PUSH_PMEngineRef) */

void zx_prov_PMEDelete_PUSH_PMEngineRef(struct zx_prov_PMEDelete_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMEDelete_REV_PMEngineRef) */

void zx_prov_PMEDelete_REV_PMEngineRef(struct zx_prov_PMEDelete_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEDelete_PUT_PMEngineRef) */

void zx_prov_PMEDelete_PUT_PMEngineRef(struct zx_prov_PMEDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEDelete_ADD_PMEngineRef) */

void zx_prov_PMEDelete_ADD_PMEngineRef(struct zx_prov_PMEDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEDelete_DEL_PMEngineRef) */

void zx_prov_PMEDelete_DEL_PMEngineRef(struct zx_prov_PMEDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEDeleteResponse_NUM_Status) */

int zx_prov_PMEDeleteResponse_NUM_Status(struct zx_prov_PMEDeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEDeleteResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMEDeleteResponse_GET_Status(struct zx_prov_PMEDeleteResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEDeleteResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMEDeleteResponse_POP_Status(struct zx_prov_PMEDeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMEDeleteResponse_PUSH_Status) */

void zx_prov_PMEDeleteResponse_PUSH_Status(struct zx_prov_PMEDeleteResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMEDeleteResponse_REV_Status) */

void zx_prov_PMEDeleteResponse_REV_Status(struct zx_prov_PMEDeleteResponse_s* x)
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

/* FUNC(zx_prov_PMEDeleteResponse_PUT_Status) */

void zx_prov_PMEDeleteResponse_PUT_Status(struct zx_prov_PMEDeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEDeleteResponse_ADD_Status) */

void zx_prov_PMEDeleteResponse_ADD_Status(struct zx_prov_PMEDeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEDeleteResponse_DEL_Status) */

void zx_prov_PMEDeleteResponse_DEL_Status(struct zx_prov_PMEDeleteResponse_s* x, int n)
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

/* FUNC(zx_prov_PMEDisable_NUM_PMEngineRef) */

int zx_prov_PMEDisable_NUM_PMEngineRef(struct zx_prov_PMEDisable_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEDisable_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEDisable_GET_PMEngineRef(struct zx_prov_PMEDisable_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEDisable_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEDisable_POP_PMEngineRef(struct zx_prov_PMEDisable_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEDisable_PUSH_PMEngineRef) */

void zx_prov_PMEDisable_PUSH_PMEngineRef(struct zx_prov_PMEDisable_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMEDisable_REV_PMEngineRef) */

void zx_prov_PMEDisable_REV_PMEngineRef(struct zx_prov_PMEDisable_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEDisable_PUT_PMEngineRef) */

void zx_prov_PMEDisable_PUT_PMEngineRef(struct zx_prov_PMEDisable_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEDisable_ADD_PMEngineRef) */

void zx_prov_PMEDisable_ADD_PMEngineRef(struct zx_prov_PMEDisable_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEDisable_DEL_PMEngineRef) */

void zx_prov_PMEDisable_DEL_PMEngineRef(struct zx_prov_PMEDisable_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEDisableResponse_NUM_Status) */

int zx_prov_PMEDisableResponse_NUM_Status(struct zx_prov_PMEDisableResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEDisableResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMEDisableResponse_GET_Status(struct zx_prov_PMEDisableResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEDisableResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMEDisableResponse_POP_Status(struct zx_prov_PMEDisableResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMEDisableResponse_PUSH_Status) */

void zx_prov_PMEDisableResponse_PUSH_Status(struct zx_prov_PMEDisableResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMEDisableResponse_REV_Status) */

void zx_prov_PMEDisableResponse_REV_Status(struct zx_prov_PMEDisableResponse_s* x)
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

/* FUNC(zx_prov_PMEDisableResponse_PUT_Status) */

void zx_prov_PMEDisableResponse_PUT_Status(struct zx_prov_PMEDisableResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEDisableResponse_ADD_Status) */

void zx_prov_PMEDisableResponse_ADD_Status(struct zx_prov_PMEDisableResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEDisableResponse_DEL_Status) */

void zx_prov_PMEDisableResponse_DEL_Status(struct zx_prov_PMEDisableResponse_s* x, int n)
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

/* FUNC(zx_prov_PMEDownload_NUM_PMEngineRef) */

int zx_prov_PMEDownload_NUM_PMEngineRef(struct zx_prov_PMEDownload_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEDownload_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEDownload_GET_PMEngineRef(struct zx_prov_PMEDownload_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEDownload_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEDownload_POP_PMEngineRef(struct zx_prov_PMEDownload_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEDownload_PUSH_PMEngineRef) */

void zx_prov_PMEDownload_PUSH_PMEngineRef(struct zx_prov_PMEDownload_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMEDownload_REV_PMEngineRef) */

void zx_prov_PMEDownload_REV_PMEngineRef(struct zx_prov_PMEDownload_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEDownload_PUT_PMEngineRef) */

void zx_prov_PMEDownload_PUT_PMEngineRef(struct zx_prov_PMEDownload_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEDownload_ADD_PMEngineRef) */

void zx_prov_PMEDownload_ADD_PMEngineRef(struct zx_prov_PMEDownload_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEDownload_DEL_PMEngineRef) */

void zx_prov_PMEDownload_DEL_PMEngineRef(struct zx_prov_PMEDownload_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEDownloadResponse_NUM_Status) */

int zx_prov_PMEDownloadResponse_NUM_Status(struct zx_prov_PMEDownloadResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEDownloadResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMEDownloadResponse_GET_Status(struct zx_prov_PMEDownloadResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEDownloadResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMEDownloadResponse_POP_Status(struct zx_prov_PMEDownloadResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMEDownloadResponse_PUSH_Status) */

void zx_prov_PMEDownloadResponse_PUSH_Status(struct zx_prov_PMEDownloadResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMEDownloadResponse_REV_Status) */

void zx_prov_PMEDownloadResponse_REV_Status(struct zx_prov_PMEDownloadResponse_s* x)
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

/* FUNC(zx_prov_PMEDownloadResponse_PUT_Status) */

void zx_prov_PMEDownloadResponse_PUT_Status(struct zx_prov_PMEDownloadResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEDownloadResponse_ADD_Status) */

void zx_prov_PMEDownloadResponse_ADD_Status(struct zx_prov_PMEDownloadResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEDownloadResponse_DEL_Status) */

void zx_prov_PMEDownloadResponse_DEL_Status(struct zx_prov_PMEDownloadResponse_s* x, int n)
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

/* FUNC(zx_prov_PMEDownloadResponse_NUM_EngineData) */

int zx_prov_PMEDownloadResponse_NUM_EngineData(struct zx_prov_PMEDownloadResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EngineData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEDownloadResponse_GET_EngineData) */

struct zx_elem_s* zx_prov_PMEDownloadResponse_GET_EngineData(struct zx_prov_PMEDownloadResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EngineData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEDownloadResponse_POP_EngineData) */

struct zx_elem_s* zx_prov_PMEDownloadResponse_POP_EngineData(struct zx_prov_PMEDownloadResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EngineData;
  if (y)
    x->EngineData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEDownloadResponse_PUSH_EngineData) */

void zx_prov_PMEDownloadResponse_PUSH_EngineData(struct zx_prov_PMEDownloadResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EngineData->g;
  x->EngineData = z;
}

/* FUNC(zx_prov_PMEDownloadResponse_REV_EngineData) */

void zx_prov_PMEDownloadResponse_REV_EngineData(struct zx_prov_PMEDownloadResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EngineData;
  if (!y) return;
  x->EngineData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EngineData->g;
    x->EngineData = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEDownloadResponse_PUT_EngineData) */

void zx_prov_PMEDownloadResponse_PUT_EngineData(struct zx_prov_PMEDownloadResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EngineData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EngineData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEDownloadResponse_ADD_EngineData) */

void zx_prov_PMEDownloadResponse_ADD_EngineData(struct zx_prov_PMEDownloadResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EngineData->g;
    x->EngineData = z;
    return;
  case -1:
    y = x->EngineData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EngineData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEDownloadResponse_DEL_EngineData) */

void zx_prov_PMEDownloadResponse_DEL_EngineData(struct zx_prov_PMEDownloadResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EngineData = (struct zx_elem_s*)x->EngineData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EngineData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EngineData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEEnable_NUM_PMEngineRef) */

int zx_prov_PMEEnable_NUM_PMEngineRef(struct zx_prov_PMEEnable_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEEnable_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEEnable_GET_PMEngineRef(struct zx_prov_PMEEnable_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEEnable_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEEnable_POP_PMEngineRef(struct zx_prov_PMEEnable_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEEnable_PUSH_PMEngineRef) */

void zx_prov_PMEEnable_PUSH_PMEngineRef(struct zx_prov_PMEEnable_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMEEnable_REV_PMEngineRef) */

void zx_prov_PMEEnable_REV_PMEngineRef(struct zx_prov_PMEEnable_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEEnable_PUT_PMEngineRef) */

void zx_prov_PMEEnable_PUT_PMEngineRef(struct zx_prov_PMEEnable_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEEnable_ADD_PMEngineRef) */

void zx_prov_PMEEnable_ADD_PMEngineRef(struct zx_prov_PMEEnable_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEEnable_DEL_PMEngineRef) */

void zx_prov_PMEEnable_DEL_PMEngineRef(struct zx_prov_PMEEnable_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEEnableResponse_NUM_Status) */

int zx_prov_PMEEnableResponse_NUM_Status(struct zx_prov_PMEEnableResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEEnableResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMEEnableResponse_GET_Status(struct zx_prov_PMEEnableResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEEnableResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMEEnableResponse_POP_Status(struct zx_prov_PMEEnableResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMEEnableResponse_PUSH_Status) */

void zx_prov_PMEEnableResponse_PUSH_Status(struct zx_prov_PMEEnableResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMEEnableResponse_REV_Status) */

void zx_prov_PMEEnableResponse_REV_Status(struct zx_prov_PMEEnableResponse_s* x)
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

/* FUNC(zx_prov_PMEEnableResponse_PUT_Status) */

void zx_prov_PMEEnableResponse_PUT_Status(struct zx_prov_PMEEnableResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEEnableResponse_ADD_Status) */

void zx_prov_PMEEnableResponse_ADD_Status(struct zx_prov_PMEEnableResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEEnableResponse_DEL_Status) */

void zx_prov_PMEEnableResponse_DEL_Status(struct zx_prov_PMEEnableResponse_s* x, int n)
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

/* FUNC(zx_prov_PMEGetInfo_NUM_PMEngineRef) */

int zx_prov_PMEGetInfo_NUM_PMEngineRef(struct zx_prov_PMEGetInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEGetInfo_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEGetInfo_GET_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEGetInfo_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEGetInfo_POP_PMEngineRef(struct zx_prov_PMEGetInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEGetInfo_PUSH_PMEngineRef) */

void zx_prov_PMEGetInfo_PUSH_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMEGetInfo_REV_PMEngineRef) */

void zx_prov_PMEGetInfo_REV_PMEngineRef(struct zx_prov_PMEGetInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEGetInfo_PUT_PMEngineRef) */

void zx_prov_PMEGetInfo_PUT_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEGetInfo_ADD_PMEngineRef) */

void zx_prov_PMEGetInfo_ADD_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEGetInfo_DEL_PMEngineRef) */

void zx_prov_PMEGetInfo_DEL_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEGetInfoResponse_NUM_Status) */

int zx_prov_PMEGetInfoResponse_NUM_Status(struct zx_prov_PMEGetInfoResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEGetInfoResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMEGetInfoResponse_GET_Status(struct zx_prov_PMEGetInfoResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEGetInfoResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMEGetInfoResponse_POP_Status(struct zx_prov_PMEGetInfoResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMEGetInfoResponse_PUSH_Status) */

void zx_prov_PMEGetInfoResponse_PUSH_Status(struct zx_prov_PMEGetInfoResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMEGetInfoResponse_REV_Status) */

void zx_prov_PMEGetInfoResponse_REV_Status(struct zx_prov_PMEGetInfoResponse_s* x)
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

/* FUNC(zx_prov_PMEGetInfoResponse_PUT_Status) */

void zx_prov_PMEGetInfoResponse_PUT_Status(struct zx_prov_PMEGetInfoResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEGetInfoResponse_ADD_Status) */

void zx_prov_PMEGetInfoResponse_ADD_Status(struct zx_prov_PMEGetInfoResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEGetInfoResponse_DEL_Status) */

void zx_prov_PMEGetInfoResponse_DEL_Status(struct zx_prov_PMEGetInfoResponse_s* x, int n)
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

/* FUNC(zx_prov_PMEGetInfoResponse_NUM_PMEInfo) */

int zx_prov_PMEGetInfoResponse_NUM_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x)
{
  struct zx_prov_PMEInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEInfo; y; ++n, y = (struct zx_prov_PMEInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEGetInfoResponse_GET_PMEInfo) */

struct zx_prov_PMEInfo_s* zx_prov_PMEGetInfoResponse_GET_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, int n)
{
  struct zx_prov_PMEInfo_s* y;
  if (!x) return 0;
  for (y = x->PMEInfo; n>=0 && y; --n, y = (struct zx_prov_PMEInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEGetInfoResponse_POP_PMEInfo) */

struct zx_prov_PMEInfo_s* zx_prov_PMEGetInfoResponse_POP_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x)
{
  struct zx_prov_PMEInfo_s* y;
  if (!x) return 0;
  y = x->PMEInfo;
  if (y)
    x->PMEInfo = (struct zx_prov_PMEInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMEGetInfoResponse_PUSH_PMEInfo) */

void zx_prov_PMEGetInfoResponse_PUSH_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, struct zx_prov_PMEInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEInfo->gg.g;
  x->PMEInfo = z;
}

/* FUNC(zx_prov_PMEGetInfoResponse_REV_PMEInfo) */

void zx_prov_PMEGetInfoResponse_REV_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x)
{
  struct zx_prov_PMEInfo_s* nxt;
  struct zx_prov_PMEInfo_s* y;
  if (!x) return;
  y = x->PMEInfo;
  if (!y) return;
  x->PMEInfo = 0;
  while (y) {
    nxt = (struct zx_prov_PMEInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEInfo->gg.g;
    x->PMEInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEGetInfoResponse_PUT_PMEInfo) */

void zx_prov_PMEGetInfoResponse_PUT_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, int n, struct zx_prov_PMEInfo_s* z)
{
  struct zx_prov_PMEInfo_s* y;
  if (!x || !z) return;
  y = x->PMEInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMEGetInfoResponse_ADD_PMEInfo) */

void zx_prov_PMEGetInfoResponse_ADD_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, int n, struct zx_prov_PMEInfo_s* z)
{
  struct zx_prov_PMEInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEInfo->gg.g;
    x->PMEInfo = z;
    return;
  case -1:
    y = x->PMEInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEInfo; n > 1 && y; --n, y = (struct zx_prov_PMEInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMEGetInfoResponse_DEL_PMEInfo) */

void zx_prov_PMEGetInfoResponse_DEL_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, int n)
{
  struct zx_prov_PMEInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEInfo = (struct zx_prov_PMEInfo_s*)x->PMEInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEInfo_s*)x->PMEInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_prov_PMEHash_GET_method) */
struct zx_str* zx_prov_PMEHash_GET_method(struct zx_prov_PMEHash_s* x) { return x->method; }
/* FUNC(zx_prov_PMEHash_PUT_method) */
void zx_prov_PMEHash_PUT_method(struct zx_prov_PMEHash_s* x, struct zx_str* y) { x->method = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEInfo_NUM_PMEngineRef) */

int zx_prov_PMEInfo_NUM_PMEngineRef(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEInfo_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEInfo_GET_PMEngineRef(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEInfo_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEInfo_POP_PMEngineRef(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEInfo_PUSH_PMEngineRef) */

void zx_prov_PMEInfo_PUSH_PMEngineRef(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMEInfo_REV_PMEngineRef) */

void zx_prov_PMEInfo_REV_PMEngineRef(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEInfo_PUT_PMEngineRef) */

void zx_prov_PMEInfo_PUT_PMEngineRef(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEInfo_ADD_PMEngineRef) */

void zx_prov_PMEInfo_ADD_PMEngineRef(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEInfo_DEL_PMEngineRef) */

void zx_prov_PMEInfo_DEL_PMEngineRef(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEInfo_NUM_PMECreatorID) */

int zx_prov_PMEInfo_NUM_PMECreatorID(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMECreatorID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEInfo_GET_PMECreatorID) */

struct zx_elem_s* zx_prov_PMEInfo_GET_PMECreatorID(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMECreatorID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEInfo_POP_PMECreatorID) */

struct zx_elem_s* zx_prov_PMEInfo_POP_PMECreatorID(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMECreatorID;
  if (y)
    x->PMECreatorID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEInfo_PUSH_PMECreatorID) */

void zx_prov_PMEInfo_PUSH_PMECreatorID(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMECreatorID->g;
  x->PMECreatorID = z;
}

/* FUNC(zx_prov_PMEInfo_REV_PMECreatorID) */

void zx_prov_PMEInfo_REV_PMECreatorID(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMECreatorID;
  if (!y) return;
  x->PMECreatorID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMECreatorID->g;
    x->PMECreatorID = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEInfo_PUT_PMECreatorID) */

void zx_prov_PMEInfo_PUT_PMECreatorID(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMECreatorID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMECreatorID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEInfo_ADD_PMECreatorID) */

void zx_prov_PMEInfo_ADD_PMECreatorID(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMECreatorID->g;
    x->PMECreatorID = z;
    return;
  case -1:
    y = x->PMECreatorID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMECreatorID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEInfo_DEL_PMECreatorID) */

void zx_prov_PMEInfo_DEL_PMECreatorID(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMECreatorID = (struct zx_elem_s*)x->PMECreatorID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMECreatorID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMECreatorID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEInfo_NUM_PMEWhenCreated) */

int zx_prov_PMEInfo_NUM_PMEWhenCreated(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEWhenCreated; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEInfo_GET_PMEWhenCreated) */

struct zx_elem_s* zx_prov_PMEInfo_GET_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEWhenCreated; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEInfo_POP_PMEWhenCreated) */

struct zx_elem_s* zx_prov_PMEInfo_POP_PMEWhenCreated(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEWhenCreated;
  if (y)
    x->PMEWhenCreated = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEInfo_PUSH_PMEWhenCreated) */

void zx_prov_PMEInfo_PUSH_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEWhenCreated->g;
  x->PMEWhenCreated = z;
}

/* FUNC(zx_prov_PMEInfo_REV_PMEWhenCreated) */

void zx_prov_PMEInfo_REV_PMEWhenCreated(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEWhenCreated;
  if (!y) return;
  x->PMEWhenCreated = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEWhenCreated->g;
    x->PMEWhenCreated = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEInfo_PUT_PMEWhenCreated) */

void zx_prov_PMEInfo_PUT_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEWhenCreated;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEWhenCreated = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEInfo_ADD_PMEWhenCreated) */

void zx_prov_PMEInfo_ADD_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEWhenCreated->g;
    x->PMEWhenCreated = z;
    return;
  case -1:
    y = x->PMEWhenCreated;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEWhenCreated; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEInfo_DEL_PMEWhenCreated) */

void zx_prov_PMEInfo_DEL_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEWhenCreated = (struct zx_elem_s*)x->PMEWhenCreated->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEWhenCreated;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEWhenCreated; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEInfo_NUM_PMEEnabled) */

int zx_prov_PMEInfo_NUM_PMEEnabled(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEEnabled; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEInfo_GET_PMEEnabled) */

struct zx_elem_s* zx_prov_PMEInfo_GET_PMEEnabled(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEEnabled; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEInfo_POP_PMEEnabled) */

struct zx_elem_s* zx_prov_PMEInfo_POP_PMEEnabled(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEEnabled;
  if (y)
    x->PMEEnabled = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEInfo_PUSH_PMEEnabled) */

void zx_prov_PMEInfo_PUSH_PMEEnabled(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEEnabled->g;
  x->PMEEnabled = z;
}

/* FUNC(zx_prov_PMEInfo_REV_PMEEnabled) */

void zx_prov_PMEInfo_REV_PMEEnabled(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEEnabled;
  if (!y) return;
  x->PMEEnabled = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEEnabled->g;
    x->PMEEnabled = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEInfo_PUT_PMEEnabled) */

void zx_prov_PMEInfo_PUT_PMEEnabled(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEEnabled;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEEnabled = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEInfo_ADD_PMEEnabled) */

void zx_prov_PMEInfo_ADD_PMEEnabled(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEEnabled->g;
    x->PMEEnabled = z;
    return;
  case -1:
    y = x->PMEEnabled;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEEnabled; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEInfo_DEL_PMEEnabled) */

void zx_prov_PMEInfo_DEL_PMEEnabled(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEEnabled = (struct zx_elem_s*)x->PMEEnabled->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEEnabled;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEEnabled; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEInfo_NUM_PMEWhenEnabled) */

int zx_prov_PMEInfo_NUM_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEWhenEnabled; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEInfo_GET_PMEWhenEnabled) */

struct zx_elem_s* zx_prov_PMEInfo_GET_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEWhenEnabled; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEInfo_POP_PMEWhenEnabled) */

struct zx_elem_s* zx_prov_PMEInfo_POP_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEWhenEnabled;
  if (y)
    x->PMEWhenEnabled = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEInfo_PUSH_PMEWhenEnabled) */

void zx_prov_PMEInfo_PUSH_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEWhenEnabled->g;
  x->PMEWhenEnabled = z;
}

/* FUNC(zx_prov_PMEInfo_REV_PMEWhenEnabled) */

void zx_prov_PMEInfo_REV_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEWhenEnabled;
  if (!y) return;
  x->PMEWhenEnabled = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEWhenEnabled->g;
    x->PMEWhenEnabled = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEInfo_PUT_PMEWhenEnabled) */

void zx_prov_PMEInfo_PUT_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEWhenEnabled;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEWhenEnabled = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEInfo_ADD_PMEWhenEnabled) */

void zx_prov_PMEInfo_ADD_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEWhenEnabled->g;
    x->PMEWhenEnabled = z;
    return;
  case -1:
    y = x->PMEWhenEnabled;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEWhenEnabled; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEInfo_DEL_PMEWhenEnabled) */

void zx_prov_PMEInfo_DEL_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEWhenEnabled = (struct zx_elem_s*)x->PMEWhenEnabled->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEWhenEnabled;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEWhenEnabled; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEInfo_NUM_PMESize) */

int zx_prov_PMEInfo_NUM_PMESize(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMESize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEInfo_GET_PMESize) */

struct zx_elem_s* zx_prov_PMEInfo_GET_PMESize(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMESize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEInfo_POP_PMESize) */

struct zx_elem_s* zx_prov_PMEInfo_POP_PMESize(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMESize;
  if (y)
    x->PMESize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEInfo_PUSH_PMESize) */

void zx_prov_PMEInfo_PUSH_PMESize(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMESize->g;
  x->PMESize = z;
}

/* FUNC(zx_prov_PMEInfo_REV_PMESize) */

void zx_prov_PMEInfo_REV_PMESize(struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMESize;
  if (!y) return;
  x->PMESize = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMESize->g;
    x->PMESize = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEInfo_PUT_PMESize) */

void zx_prov_PMEInfo_PUT_PMESize(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMESize;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMESize = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEInfo_ADD_PMESize) */

void zx_prov_PMEInfo_ADD_PMESize(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMESize->g;
    x->PMESize = z;
    return;
  case -1:
    y = x->PMESize;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMESize; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEInfo_DEL_PMESize) */

void zx_prov_PMEInfo_DEL_PMESize(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMESize = (struct zx_elem_s*)x->PMESize->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMESize;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMESize; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEInfo_NUM_PMEHash) */

int zx_prov_PMEInfo_NUM_PMEHash(struct zx_prov_PMEInfo_s* x)
{
  struct zx_prov_PMEHash_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEHash; y; ++n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEInfo_GET_PMEHash) */

struct zx_prov_PMEHash_s* zx_prov_PMEInfo_GET_PMEHash(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_prov_PMEHash_s* y;
  if (!x) return 0;
  for (y = x->PMEHash; n>=0 && y; --n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEInfo_POP_PMEHash) */

struct zx_prov_PMEHash_s* zx_prov_PMEInfo_POP_PMEHash(struct zx_prov_PMEInfo_s* x)
{
  struct zx_prov_PMEHash_s* y;
  if (!x) return 0;
  y = x->PMEHash;
  if (y)
    x->PMEHash = (struct zx_prov_PMEHash_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMEInfo_PUSH_PMEHash) */

void zx_prov_PMEInfo_PUSH_PMEHash(struct zx_prov_PMEInfo_s* x, struct zx_prov_PMEHash_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEHash->gg.g;
  x->PMEHash = z;
}

/* FUNC(zx_prov_PMEInfo_REV_PMEHash) */

void zx_prov_PMEInfo_REV_PMEHash(struct zx_prov_PMEInfo_s* x)
{
  struct zx_prov_PMEHash_s* nxt;
  struct zx_prov_PMEHash_s* y;
  if (!x) return;
  y = x->PMEHash;
  if (!y) return;
  x->PMEHash = 0;
  while (y) {
    nxt = (struct zx_prov_PMEHash_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEHash->gg.g;
    x->PMEHash = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEInfo_PUT_PMEHash) */

void zx_prov_PMEInfo_PUT_PMEHash(struct zx_prov_PMEInfo_s* x, int n, struct zx_prov_PMEHash_s* z)
{
  struct zx_prov_PMEHash_s* y;
  if (!x || !z) return;
  y = x->PMEHash;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEHash = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMEInfo_ADD_PMEHash) */

void zx_prov_PMEInfo_ADD_PMEHash(struct zx_prov_PMEInfo_s* x, int n, struct zx_prov_PMEHash_s* z)
{
  struct zx_prov_PMEHash_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEHash->gg.g;
    x->PMEHash = z;
    return;
  case -1:
    y = x->PMEHash;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEHash; n > 1 && y; --n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMEInfo_DEL_PMEHash) */

void zx_prov_PMEInfo_DEL_PMEHash(struct zx_prov_PMEInfo_s* x, int n)
{
  struct zx_prov_PMEHash_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEHash = (struct zx_prov_PMEHash_s*)x->PMEHash->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEHash_s*)x->PMEHash;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEHash; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMERegister_NUM_PMEngineRef) */

int zx_prov_PMERegister_NUM_PMEngineRef(struct zx_prov_PMERegister_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMERegister_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMERegister_GET_PMEngineRef(struct zx_prov_PMERegister_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMERegister_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMERegister_POP_PMEngineRef(struct zx_prov_PMERegister_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMERegister_PUSH_PMEngineRef) */

void zx_prov_PMERegister_PUSH_PMEngineRef(struct zx_prov_PMERegister_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMERegister_REV_PMEngineRef) */

void zx_prov_PMERegister_REV_PMEngineRef(struct zx_prov_PMERegister_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMERegister_PUT_PMEngineRef) */

void zx_prov_PMERegister_PUT_PMEngineRef(struct zx_prov_PMERegister_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMERegister_ADD_PMEngineRef) */

void zx_prov_PMERegister_ADD_PMEngineRef(struct zx_prov_PMERegister_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMERegister_DEL_PMEngineRef) */

void zx_prov_PMERegister_DEL_PMEngineRef(struct zx_prov_PMERegister_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMERegister_NUM_PMESize) */

int zx_prov_PMERegister_NUM_PMESize(struct zx_prov_PMERegister_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMESize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMERegister_GET_PMESize) */

struct zx_elem_s* zx_prov_PMERegister_GET_PMESize(struct zx_prov_PMERegister_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMESize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMERegister_POP_PMESize) */

struct zx_elem_s* zx_prov_PMERegister_POP_PMESize(struct zx_prov_PMERegister_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMESize;
  if (y)
    x->PMESize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMERegister_PUSH_PMESize) */

void zx_prov_PMERegister_PUSH_PMESize(struct zx_prov_PMERegister_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMESize->g;
  x->PMESize = z;
}

/* FUNC(zx_prov_PMERegister_REV_PMESize) */

void zx_prov_PMERegister_REV_PMESize(struct zx_prov_PMERegister_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMESize;
  if (!y) return;
  x->PMESize = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMESize->g;
    x->PMESize = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMERegister_PUT_PMESize) */

void zx_prov_PMERegister_PUT_PMESize(struct zx_prov_PMERegister_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMESize;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMESize = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMERegister_ADD_PMESize) */

void zx_prov_PMERegister_ADD_PMESize(struct zx_prov_PMERegister_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMESize->g;
    x->PMESize = z;
    return;
  case -1:
    y = x->PMESize;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMESize; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMERegister_DEL_PMESize) */

void zx_prov_PMERegister_DEL_PMESize(struct zx_prov_PMERegister_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMESize = (struct zx_elem_s*)x->PMESize->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMESize;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMESize; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMERegister_NUM_PMEHash) */

int zx_prov_PMERegister_NUM_PMEHash(struct zx_prov_PMERegister_s* x)
{
  struct zx_prov_PMEHash_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEHash; y; ++n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMERegister_GET_PMEHash) */

struct zx_prov_PMEHash_s* zx_prov_PMERegister_GET_PMEHash(struct zx_prov_PMERegister_s* x, int n)
{
  struct zx_prov_PMEHash_s* y;
  if (!x) return 0;
  for (y = x->PMEHash; n>=0 && y; --n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMERegister_POP_PMEHash) */

struct zx_prov_PMEHash_s* zx_prov_PMERegister_POP_PMEHash(struct zx_prov_PMERegister_s* x)
{
  struct zx_prov_PMEHash_s* y;
  if (!x) return 0;
  y = x->PMEHash;
  if (y)
    x->PMEHash = (struct zx_prov_PMEHash_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMERegister_PUSH_PMEHash) */

void zx_prov_PMERegister_PUSH_PMEHash(struct zx_prov_PMERegister_s* x, struct zx_prov_PMEHash_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEHash->gg.g;
  x->PMEHash = z;
}

/* FUNC(zx_prov_PMERegister_REV_PMEHash) */

void zx_prov_PMERegister_REV_PMEHash(struct zx_prov_PMERegister_s* x)
{
  struct zx_prov_PMEHash_s* nxt;
  struct zx_prov_PMEHash_s* y;
  if (!x) return;
  y = x->PMEHash;
  if (!y) return;
  x->PMEHash = 0;
  while (y) {
    nxt = (struct zx_prov_PMEHash_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEHash->gg.g;
    x->PMEHash = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMERegister_PUT_PMEHash) */

void zx_prov_PMERegister_PUT_PMEHash(struct zx_prov_PMERegister_s* x, int n, struct zx_prov_PMEHash_s* z)
{
  struct zx_prov_PMEHash_s* y;
  if (!x || !z) return;
  y = x->PMEHash;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEHash = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMERegister_ADD_PMEHash) */

void zx_prov_PMERegister_ADD_PMEHash(struct zx_prov_PMERegister_s* x, int n, struct zx_prov_PMEHash_s* z)
{
  struct zx_prov_PMEHash_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEHash->gg.g;
    x->PMEHash = z;
    return;
  case -1:
    y = x->PMEHash;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEHash; n > 1 && y; --n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMERegister_DEL_PMEHash) */

void zx_prov_PMERegister_DEL_PMEHash(struct zx_prov_PMERegister_s* x, int n)
{
  struct zx_prov_PMEHash_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEHash = (struct zx_prov_PMEHash_s*)x->PMEHash->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEHash_s*)x->PMEHash;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEHash; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEHash_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMERegisterResponse_NUM_Status) */

int zx_prov_PMERegisterResponse_NUM_Status(struct zx_prov_PMERegisterResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMERegisterResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMERegisterResponse_GET_Status(struct zx_prov_PMERegisterResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMERegisterResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMERegisterResponse_POP_Status(struct zx_prov_PMERegisterResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMERegisterResponse_PUSH_Status) */

void zx_prov_PMERegisterResponse_PUSH_Status(struct zx_prov_PMERegisterResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMERegisterResponse_REV_Status) */

void zx_prov_PMERegisterResponse_REV_Status(struct zx_prov_PMERegisterResponse_s* x)
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

/* FUNC(zx_prov_PMERegisterResponse_PUT_Status) */

void zx_prov_PMERegisterResponse_PUT_Status(struct zx_prov_PMERegisterResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMERegisterResponse_ADD_Status) */

void zx_prov_PMERegisterResponse_ADD_Status(struct zx_prov_PMERegisterResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMERegisterResponse_DEL_Status) */

void zx_prov_PMERegisterResponse_DEL_Status(struct zx_prov_PMERegisterResponse_s* x, int n)
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

/* FUNC(zx_prov_PMERegisterResponse_NUM_PMEUploadMax) */

int zx_prov_PMERegisterResponse_NUM_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEUploadMax; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMERegisterResponse_GET_PMEUploadMax) */

struct zx_elem_s* zx_prov_PMERegisterResponse_GET_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEUploadMax; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMERegisterResponse_POP_PMEUploadMax) */

struct zx_elem_s* zx_prov_PMERegisterResponse_POP_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEUploadMax;
  if (y)
    x->PMEUploadMax = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMERegisterResponse_PUSH_PMEUploadMax) */

void zx_prov_PMERegisterResponse_PUSH_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEUploadMax->g;
  x->PMEUploadMax = z;
}

/* FUNC(zx_prov_PMERegisterResponse_REV_PMEUploadMax) */

void zx_prov_PMERegisterResponse_REV_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEUploadMax;
  if (!y) return;
  x->PMEUploadMax = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEUploadMax->g;
    x->PMEUploadMax = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMERegisterResponse_PUT_PMEUploadMax) */

void zx_prov_PMERegisterResponse_PUT_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEUploadMax;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEUploadMax = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMERegisterResponse_ADD_PMEUploadMax) */

void zx_prov_PMERegisterResponse_ADD_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEUploadMax->g;
    x->PMEUploadMax = z;
    return;
  case -1:
    y = x->PMEUploadMax;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEUploadMax; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMERegisterResponse_DEL_PMEUploadMax) */

void zx_prov_PMERegisterResponse_DEL_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEUploadMax = (struct zx_elem_s*)x->PMEUploadMax->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEUploadMax;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEUploadMax; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEUpload_NUM_PMEngineRef) */

int zx_prov_PMEUpload_NUM_PMEngineRef(struct zx_prov_PMEUpload_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEngineRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEUpload_GET_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEUpload_GET_PMEngineRef(struct zx_prov_PMEUpload_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMEngineRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEUpload_POP_PMEngineRef) */

struct zx_elem_s* zx_prov_PMEUpload_POP_PMEngineRef(struct zx_prov_PMEUpload_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMEngineRef;
  if (y)
    x->PMEngineRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEUpload_PUSH_PMEngineRef) */

void zx_prov_PMEUpload_PUSH_PMEngineRef(struct zx_prov_PMEUpload_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMEngineRef->g;
  x->PMEngineRef = z;
}

/* FUNC(zx_prov_PMEUpload_REV_PMEngineRef) */

void zx_prov_PMEUpload_REV_PMEngineRef(struct zx_prov_PMEUpload_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMEngineRef;
  if (!y) return;
  x->PMEngineRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEUpload_PUT_PMEngineRef) */

void zx_prov_PMEUpload_PUT_PMEngineRef(struct zx_prov_PMEUpload_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMEngineRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMEngineRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEUpload_ADD_PMEngineRef) */

void zx_prov_PMEUpload_ADD_PMEngineRef(struct zx_prov_PMEUpload_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMEngineRef->g;
    x->PMEngineRef = z;
    return;
  case -1:
    y = x->PMEngineRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEUpload_DEL_PMEngineRef) */

void zx_prov_PMEUpload_DEL_PMEngineRef(struct zx_prov_PMEUpload_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEngineRef = (struct zx_elem_s*)x->PMEngineRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMEngineRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMEngineRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEUpload_NUM_EngineData) */

int zx_prov_PMEUpload_NUM_EngineData(struct zx_prov_PMEUpload_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EngineData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEUpload_GET_EngineData) */

struct zx_elem_s* zx_prov_PMEUpload_GET_EngineData(struct zx_prov_PMEUpload_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EngineData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEUpload_POP_EngineData) */

struct zx_elem_s* zx_prov_PMEUpload_POP_EngineData(struct zx_prov_PMEUpload_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EngineData;
  if (y)
    x->EngineData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMEUpload_PUSH_EngineData) */

void zx_prov_PMEUpload_PUSH_EngineData(struct zx_prov_PMEUpload_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EngineData->g;
  x->EngineData = z;
}

/* FUNC(zx_prov_PMEUpload_REV_EngineData) */

void zx_prov_PMEUpload_REV_EngineData(struct zx_prov_PMEUpload_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EngineData;
  if (!y) return;
  x->EngineData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EngineData->g;
    x->EngineData = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMEUpload_PUT_EngineData) */

void zx_prov_PMEUpload_PUT_EngineData(struct zx_prov_PMEUpload_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EngineData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EngineData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMEUpload_ADD_EngineData) */

void zx_prov_PMEUpload_ADD_EngineData(struct zx_prov_PMEUpload_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EngineData->g;
    x->EngineData = z;
    return;
  case -1:
    y = x->EngineData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EngineData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMEUpload_DEL_EngineData) */

void zx_prov_PMEUpload_DEL_EngineData(struct zx_prov_PMEUpload_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EngineData = (struct zx_elem_s*)x->EngineData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EngineData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EngineData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_prov_PMEUpload_GET_offset) */
struct zx_str* zx_prov_PMEUpload_GET_offset(struct zx_prov_PMEUpload_s* x) { return x->offset; }
/* FUNC(zx_prov_PMEUpload_PUT_offset) */
void zx_prov_PMEUpload_PUT_offset(struct zx_prov_PMEUpload_s* x, struct zx_str* y) { x->offset = y; }
/* FUNC(zx_prov_PMEUpload_GET_remaining) */
struct zx_str* zx_prov_PMEUpload_GET_remaining(struct zx_prov_PMEUpload_s* x) { return x->remaining; }
/* FUNC(zx_prov_PMEUpload_PUT_remaining) */
void zx_prov_PMEUpload_PUT_remaining(struct zx_prov_PMEUpload_s* x, struct zx_str* y) { x->remaining = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMEUploadResponse_NUM_Status) */

int zx_prov_PMEUploadResponse_NUM_Status(struct zx_prov_PMEUploadResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMEUploadResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMEUploadResponse_GET_Status(struct zx_prov_PMEUploadResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMEUploadResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMEUploadResponse_POP_Status(struct zx_prov_PMEUploadResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMEUploadResponse_PUSH_Status) */

void zx_prov_PMEUploadResponse_PUSH_Status(struct zx_prov_PMEUploadResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMEUploadResponse_REV_Status) */

void zx_prov_PMEUploadResponse_REV_Status(struct zx_prov_PMEUploadResponse_s* x)
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

/* FUNC(zx_prov_PMEUploadResponse_PUT_Status) */

void zx_prov_PMEUploadResponse_PUT_Status(struct zx_prov_PMEUploadResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEUploadResponse_ADD_Status) */

void zx_prov_PMEUploadResponse_ADD_Status(struct zx_prov_PMEUploadResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMEUploadResponse_DEL_Status) */

void zx_prov_PMEUploadResponse_DEL_Status(struct zx_prov_PMEUploadResponse_s* x, int n)
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

/* FUNC(zx_prov_PMGetDescriptor_NUM_PMDArtifact) */

int zx_prov_PMGetDescriptor_NUM_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDArtifact; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMGetDescriptor_GET_PMDArtifact) */

struct zx_elem_s* zx_prov_PMGetDescriptor_GET_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMDArtifact; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMGetDescriptor_POP_PMDArtifact) */

struct zx_elem_s* zx_prov_PMGetDescriptor_POP_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMDArtifact;
  if (y)
    x->PMDArtifact = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMGetDescriptor_PUSH_PMDArtifact) */

void zx_prov_PMGetDescriptor_PUSH_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMDArtifact->g;
  x->PMDArtifact = z;
}

/* FUNC(zx_prov_PMGetDescriptor_REV_PMDArtifact) */

void zx_prov_PMGetDescriptor_REV_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMDArtifact;
  if (!y) return;
  x->PMDArtifact = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMDArtifact->g;
    x->PMDArtifact = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMGetDescriptor_PUT_PMDArtifact) */

void zx_prov_PMGetDescriptor_PUT_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMDArtifact;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMDArtifact = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMGetDescriptor_ADD_PMDArtifact) */

void zx_prov_PMGetDescriptor_ADD_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMDArtifact->g;
    x->PMDArtifact = z;
    return;
  case -1:
    y = x->PMDArtifact;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMDArtifact; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMGetDescriptor_DEL_PMDArtifact) */

void zx_prov_PMGetDescriptor_DEL_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDArtifact = (struct zx_elem_s*)x->PMDArtifact->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMDArtifact;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMDArtifact; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMGetDescriptor_NUM_CallbackEPR) */

int zx_prov_PMGetDescriptor_NUM_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x)
{
  struct zx_prov_CallbackEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CallbackEPR; y; ++n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMGetDescriptor_GET_CallbackEPR) */

struct zx_prov_CallbackEPR_s* zx_prov_PMGetDescriptor_GET_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, int n)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x) return 0;
  for (y = x->CallbackEPR; n>=0 && y; --n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMGetDescriptor_POP_CallbackEPR) */

struct zx_prov_CallbackEPR_s* zx_prov_PMGetDescriptor_POP_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x) return 0;
  y = x->CallbackEPR;
  if (y)
    x->CallbackEPR = (struct zx_prov_CallbackEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMGetDescriptor_PUSH_CallbackEPR) */

void zx_prov_PMGetDescriptor_PUSH_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, struct zx_prov_CallbackEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CallbackEPR->gg.g;
  x->CallbackEPR = z;
}

/* FUNC(zx_prov_PMGetDescriptor_REV_CallbackEPR) */

void zx_prov_PMGetDescriptor_REV_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x)
{
  struct zx_prov_CallbackEPR_s* nxt;
  struct zx_prov_CallbackEPR_s* y;
  if (!x) return;
  y = x->CallbackEPR;
  if (!y) return;
  x->CallbackEPR = 0;
  while (y) {
    nxt = (struct zx_prov_CallbackEPR_s*)y->gg.g.n;
    y->gg.g.n = &x->CallbackEPR->gg.g;
    x->CallbackEPR = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMGetDescriptor_PUT_CallbackEPR) */

void zx_prov_PMGetDescriptor_PUT_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, int n, struct zx_prov_CallbackEPR_s* z)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x || !z) return;
  y = x->CallbackEPR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CallbackEPR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMGetDescriptor_ADD_CallbackEPR) */

void zx_prov_PMGetDescriptor_ADD_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, int n, struct zx_prov_CallbackEPR_s* z)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CallbackEPR->gg.g;
    x->CallbackEPR = z;
    return;
  case -1:
    y = x->CallbackEPR;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CallbackEPR; n > 1 && y; --n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMGetDescriptor_DEL_CallbackEPR) */

void zx_prov_PMGetDescriptor_DEL_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, int n)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CallbackEPR = (struct zx_prov_CallbackEPR_s*)x->CallbackEPR->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_CallbackEPR_s*)x->CallbackEPR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CallbackEPR; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMGetDescriptorResponse_NUM_Status) */

int zx_prov_PMGetDescriptorResponse_NUM_Status(struct zx_prov_PMGetDescriptorResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMGetDescriptorResponse_GET_Status(struct zx_prov_PMGetDescriptorResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMGetDescriptorResponse_POP_Status(struct zx_prov_PMGetDescriptorResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_PUSH_Status) */

void zx_prov_PMGetDescriptorResponse_PUSH_Status(struct zx_prov_PMGetDescriptorResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_REV_Status) */

void zx_prov_PMGetDescriptorResponse_REV_Status(struct zx_prov_PMGetDescriptorResponse_s* x)
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

/* FUNC(zx_prov_PMGetDescriptorResponse_PUT_Status) */

void zx_prov_PMGetDescriptorResponse_PUT_Status(struct zx_prov_PMGetDescriptorResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMGetDescriptorResponse_ADD_Status) */

void zx_prov_PMGetDescriptorResponse_ADD_Status(struct zx_prov_PMGetDescriptorResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMGetDescriptorResponse_DEL_Status) */

void zx_prov_PMGetDescriptorResponse_DEL_Status(struct zx_prov_PMGetDescriptorResponse_s* x, int n)
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

/* FUNC(zx_prov_PMGetDescriptorResponse_NUM_PMDescriptor) */

int zx_prov_PMGetDescriptorResponse_NUM_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x)
{
  struct zx_prov_PMDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDescriptor; y; ++n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_GET_PMDescriptor) */

struct zx_prov_PMDescriptor_s* zx_prov_PMGetDescriptorResponse_GET_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, int n)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return 0;
  for (y = x->PMDescriptor; n>=0 && y; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_POP_PMDescriptor) */

struct zx_prov_PMDescriptor_s* zx_prov_PMGetDescriptorResponse_POP_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return 0;
  y = x->PMDescriptor;
  if (y)
    x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_PUSH_PMDescriptor) */

void zx_prov_PMGetDescriptorResponse_PUSH_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, struct zx_prov_PMDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDescriptor->gg.g;
  x->PMDescriptor = z;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_REV_PMDescriptor) */

void zx_prov_PMGetDescriptorResponse_REV_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x)
{
  struct zx_prov_PMDescriptor_s* nxt;
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return;
  y = x->PMDescriptor;
  if (!y) return;
  x->PMDescriptor = 0;
  while (y) {
    nxt = (struct zx_prov_PMDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDescriptor->gg.g;
    x->PMDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMGetDescriptorResponse_PUT_PMDescriptor) */

void zx_prov_PMGetDescriptorResponse_PUT_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, int n, struct zx_prov_PMDescriptor_s* z)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x || !z) return;
  y = x->PMDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMGetDescriptorResponse_ADD_PMDescriptor) */

void zx_prov_PMGetDescriptorResponse_ADD_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, int n, struct zx_prov_PMDescriptor_s* z)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDescriptor->gg.g;
    x->PMDescriptor = z;
    return;
  case -1:
    y = x->PMDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDescriptor; n > 1 && y; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMGetDescriptorResponse_DEL_PMDescriptor) */

void zx_prov_PMGetDescriptorResponse_DEL_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, int n)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)x->PMDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDescriptor_s*)x->PMDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMGetStatus_NUM_PMID) */

int zx_prov_PMGetStatus_NUM_PMID(struct zx_prov_PMGetStatus_s* x)
{
  struct zx_prov_PMID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMID; y; ++n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMGetStatus_GET_PMID) */

struct zx_prov_PMID_s* zx_prov_PMGetStatus_GET_PMID(struct zx_prov_PMGetStatus_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  for (y = x->PMID; n>=0 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMGetStatus_POP_PMID) */

struct zx_prov_PMID_s* zx_prov_PMGetStatus_POP_PMID(struct zx_prov_PMGetStatus_s* x)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  y = x->PMID;
  if (y)
    x->PMID = (struct zx_prov_PMID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMGetStatus_PUSH_PMID) */

void zx_prov_PMGetStatus_PUSH_PMID(struct zx_prov_PMGetStatus_s* x, struct zx_prov_PMID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMID->gg.g;
  x->PMID = z;
}

/* FUNC(zx_prov_PMGetStatus_REV_PMID) */

void zx_prov_PMGetStatus_REV_PMID(struct zx_prov_PMGetStatus_s* x)
{
  struct zx_prov_PMID_s* nxt;
  struct zx_prov_PMID_s* y;
  if (!x) return;
  y = x->PMID;
  if (!y) return;
  x->PMID = 0;
  while (y) {
    nxt = (struct zx_prov_PMID_s*)y->gg.g.n;
    y->gg.g.n = &x->PMID->gg.g;
    x->PMID = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMGetStatus_PUT_PMID) */

void zx_prov_PMGetStatus_PUT_PMID(struct zx_prov_PMGetStatus_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  y = x->PMID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMGetStatus_ADD_PMID) */

void zx_prov_PMGetStatus_ADD_PMID(struct zx_prov_PMGetStatus_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMID->gg.g;
    x->PMID = z;
    return;
  case -1:
    y = x->PMID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMGetStatus_DEL_PMID) */

void zx_prov_PMGetStatus_DEL_PMID(struct zx_prov_PMGetStatus_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMID = (struct zx_prov_PMID_s*)x->PMID->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMID_s*)x->PMID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMGetStatusResponse_NUM_Status) */

int zx_prov_PMGetStatusResponse_NUM_Status(struct zx_prov_PMGetStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMGetStatusResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMGetStatusResponse_GET_Status(struct zx_prov_PMGetStatusResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMGetStatusResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMGetStatusResponse_POP_Status(struct zx_prov_PMGetStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMGetStatusResponse_PUSH_Status) */

void zx_prov_PMGetStatusResponse_PUSH_Status(struct zx_prov_PMGetStatusResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMGetStatusResponse_REV_Status) */

void zx_prov_PMGetStatusResponse_REV_Status(struct zx_prov_PMGetStatusResponse_s* x)
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

/* FUNC(zx_prov_PMGetStatusResponse_PUT_Status) */

void zx_prov_PMGetStatusResponse_PUT_Status(struct zx_prov_PMGetStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMGetStatusResponse_ADD_Status) */

void zx_prov_PMGetStatusResponse_ADD_Status(struct zx_prov_PMGetStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMGetStatusResponse_DEL_Status) */

void zx_prov_PMGetStatusResponse_DEL_Status(struct zx_prov_PMGetStatusResponse_s* x, int n)
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

/* FUNC(zx_prov_PMGetStatusResponse_NUM_PMStatus) */

int zx_prov_PMGetStatusResponse_NUM_PMStatus(struct zx_prov_PMGetStatusResponse_s* x)
{
  struct zx_prov_PMStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMStatus; y; ++n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMGetStatusResponse_GET_PMStatus) */

struct zx_prov_PMStatus_s* zx_prov_PMGetStatusResponse_GET_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, int n)
{
  struct zx_prov_PMStatus_s* y;
  if (!x) return 0;
  for (y = x->PMStatus; n>=0 && y; --n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMGetStatusResponse_POP_PMStatus) */

struct zx_prov_PMStatus_s* zx_prov_PMGetStatusResponse_POP_PMStatus(struct zx_prov_PMGetStatusResponse_s* x)
{
  struct zx_prov_PMStatus_s* y;
  if (!x) return 0;
  y = x->PMStatus;
  if (y)
    x->PMStatus = (struct zx_prov_PMStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMGetStatusResponse_PUSH_PMStatus) */

void zx_prov_PMGetStatusResponse_PUSH_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, struct zx_prov_PMStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMStatus->gg.g;
  x->PMStatus = z;
}

/* FUNC(zx_prov_PMGetStatusResponse_REV_PMStatus) */

void zx_prov_PMGetStatusResponse_REV_PMStatus(struct zx_prov_PMGetStatusResponse_s* x)
{
  struct zx_prov_PMStatus_s* nxt;
  struct zx_prov_PMStatus_s* y;
  if (!x) return;
  y = x->PMStatus;
  if (!y) return;
  x->PMStatus = 0;
  while (y) {
    nxt = (struct zx_prov_PMStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->PMStatus->gg.g;
    x->PMStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMGetStatusResponse_PUT_PMStatus) */

void zx_prov_PMGetStatusResponse_PUT_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, int n, struct zx_prov_PMStatus_s* z)
{
  struct zx_prov_PMStatus_s* y;
  if (!x || !z) return;
  y = x->PMStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMGetStatusResponse_ADD_PMStatus) */

void zx_prov_PMGetStatusResponse_ADD_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, int n, struct zx_prov_PMStatus_s* z)
{
  struct zx_prov_PMStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMStatus->gg.g;
    x->PMStatus = z;
    return;
  case -1:
    y = x->PMStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMStatus; n > 1 && y; --n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMGetStatusResponse_DEL_PMStatus) */

void zx_prov_PMGetStatusResponse_DEL_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, int n)
{
  struct zx_prov_PMStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMStatus = (struct zx_prov_PMStatus_s*)x->PMStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMStatus_s*)x->PMStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_prov_PMID_GET_issuer) */
struct zx_str* zx_prov_PMID_GET_issuer(struct zx_prov_PMID_s* x) { return x->issuer; }
/* FUNC(zx_prov_PMID_PUT_issuer) */
void zx_prov_PMID_PUT_issuer(struct zx_prov_PMID_s* x, struct zx_str* y) { x->issuer = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMRegisterDescriptor_NUM_PMRegisterDescriptorItem) */

int zx_prov_PMRegisterDescriptor_NUM_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x)
{
  struct zx_prov_PMRegisterDescriptorItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMRegisterDescriptorItem; y; ++n, y = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMRegisterDescriptor_GET_PMRegisterDescriptorItem) */

struct zx_prov_PMRegisterDescriptorItem_s* zx_prov_PMRegisterDescriptor_GET_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, int n)
{
  struct zx_prov_PMRegisterDescriptorItem_s* y;
  if (!x) return 0;
  for (y = x->PMRegisterDescriptorItem; n>=0 && y; --n, y = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptor_POP_PMRegisterDescriptorItem) */

struct zx_prov_PMRegisterDescriptorItem_s* zx_prov_PMRegisterDescriptor_POP_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x)
{
  struct zx_prov_PMRegisterDescriptorItem_s* y;
  if (!x) return 0;
  y = x->PMRegisterDescriptorItem;
  if (y)
    x->PMRegisterDescriptorItem = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptor_PUSH_PMRegisterDescriptorItem) */

void zx_prov_PMRegisterDescriptor_PUSH_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, struct zx_prov_PMRegisterDescriptorItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMRegisterDescriptorItem->gg.g;
  x->PMRegisterDescriptorItem = z;
}

/* FUNC(zx_prov_PMRegisterDescriptor_REV_PMRegisterDescriptorItem) */

void zx_prov_PMRegisterDescriptor_REV_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x)
{
  struct zx_prov_PMRegisterDescriptorItem_s* nxt;
  struct zx_prov_PMRegisterDescriptorItem_s* y;
  if (!x) return;
  y = x->PMRegisterDescriptorItem;
  if (!y) return;
  x->PMRegisterDescriptorItem = 0;
  while (y) {
    nxt = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n;
    y->gg.g.n = &x->PMRegisterDescriptorItem->gg.g;
    x->PMRegisterDescriptorItem = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMRegisterDescriptor_PUT_PMRegisterDescriptorItem) */

void zx_prov_PMRegisterDescriptor_PUT_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, int n, struct zx_prov_PMRegisterDescriptorItem_s* z)
{
  struct zx_prov_PMRegisterDescriptorItem_s* y;
  if (!x || !z) return;
  y = x->PMRegisterDescriptorItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMRegisterDescriptorItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMRegisterDescriptor_ADD_PMRegisterDescriptorItem) */

void zx_prov_PMRegisterDescriptor_ADD_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, int n, struct zx_prov_PMRegisterDescriptorItem_s* z)
{
  struct zx_prov_PMRegisterDescriptorItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMRegisterDescriptorItem->gg.g;
    x->PMRegisterDescriptorItem = z;
    return;
  case -1:
    y = x->PMRegisterDescriptorItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMRegisterDescriptorItem; n > 1 && y; --n, y = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMRegisterDescriptor_DEL_PMRegisterDescriptorItem) */

void zx_prov_PMRegisterDescriptor_DEL_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, int n)
{
  struct zx_prov_PMRegisterDescriptorItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMRegisterDescriptorItem = (struct zx_prov_PMRegisterDescriptorItem_s*)x->PMRegisterDescriptorItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMRegisterDescriptorItem_s*)x->PMRegisterDescriptorItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMRegisterDescriptorItem; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMRegisterDescriptorItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMRegisterDescriptorItem_NUM_PMDescriptor) */

int zx_prov_PMRegisterDescriptorItem_NUM_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x)
{
  struct zx_prov_PMDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDescriptor; y; ++n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMRegisterDescriptorItem_GET_PMDescriptor) */

struct zx_prov_PMDescriptor_s* zx_prov_PMRegisterDescriptorItem_GET_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, int n)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return 0;
  for (y = x->PMDescriptor; n>=0 && y; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptorItem_POP_PMDescriptor) */

struct zx_prov_PMDescriptor_s* zx_prov_PMRegisterDescriptorItem_POP_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return 0;
  y = x->PMDescriptor;
  if (y)
    x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptorItem_PUSH_PMDescriptor) */

void zx_prov_PMRegisterDescriptorItem_PUSH_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, struct zx_prov_PMDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDescriptor->gg.g;
  x->PMDescriptor = z;
}

/* FUNC(zx_prov_PMRegisterDescriptorItem_REV_PMDescriptor) */

void zx_prov_PMRegisterDescriptorItem_REV_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x)
{
  struct zx_prov_PMDescriptor_s* nxt;
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return;
  y = x->PMDescriptor;
  if (!y) return;
  x->PMDescriptor = 0;
  while (y) {
    nxt = (struct zx_prov_PMDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDescriptor->gg.g;
    x->PMDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMRegisterDescriptorItem_PUT_PMDescriptor) */

void zx_prov_PMRegisterDescriptorItem_PUT_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, int n, struct zx_prov_PMDescriptor_s* z)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x || !z) return;
  y = x->PMDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMRegisterDescriptorItem_ADD_PMDescriptor) */

void zx_prov_PMRegisterDescriptorItem_ADD_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, int n, struct zx_prov_PMDescriptor_s* z)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDescriptor->gg.g;
    x->PMDescriptor = z;
    return;
  case -1:
    y = x->PMDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDescriptor; n > 1 && y; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMRegisterDescriptorItem_DEL_PMDescriptor) */

void zx_prov_PMRegisterDescriptorItem_DEL_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, int n)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)x->PMDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDescriptor_s*)x->PMDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_PMRegisterDescriptorItem_GET_itemID) */
struct zx_str* zx_prov_PMRegisterDescriptorItem_GET_itemID(struct zx_prov_PMRegisterDescriptorItem_s* x) { return x->itemID; }
/* FUNC(zx_prov_PMRegisterDescriptorItem_PUT_itemID) */
void zx_prov_PMRegisterDescriptorItem_PUT_itemID(struct zx_prov_PMRegisterDescriptorItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMRegisterDescriptorResponse_NUM_Status) */

int zx_prov_PMRegisterDescriptorResponse_NUM_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMRegisterDescriptorResponse_GET_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMRegisterDescriptorResponse_POP_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_PUSH_Status) */

void zx_prov_PMRegisterDescriptorResponse_PUSH_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_REV_Status) */

void zx_prov_PMRegisterDescriptorResponse_REV_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x)
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

/* FUNC(zx_prov_PMRegisterDescriptorResponse_PUT_Status) */

void zx_prov_PMRegisterDescriptorResponse_PUT_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMRegisterDescriptorResponse_ADD_Status) */

void zx_prov_PMRegisterDescriptorResponse_ADD_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMRegisterDescriptorResponse_DEL_Status) */

void zx_prov_PMRegisterDescriptorResponse_DEL_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n)
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

/* FUNC(zx_prov_PMRegisterDescriptorResponse_NUM_PMRegisterDescriptorResponseItem) */

int zx_prov_PMRegisterDescriptorResponse_NUM_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x)
{
  struct zx_prov_PMRegisterDescriptorResponseItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMRegisterDescriptorResponseItem; y; ++n, y = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_GET_PMRegisterDescriptorResponseItem) */

struct zx_prov_PMRegisterDescriptorResponseItem_s* zx_prov_PMRegisterDescriptorResponse_GET_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n)
{
  struct zx_prov_PMRegisterDescriptorResponseItem_s* y;
  if (!x) return 0;
  for (y = x->PMRegisterDescriptorResponseItem; n>=0 && y; --n, y = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_POP_PMRegisterDescriptorResponseItem) */

struct zx_prov_PMRegisterDescriptorResponseItem_s* zx_prov_PMRegisterDescriptorResponse_POP_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x)
{
  struct zx_prov_PMRegisterDescriptorResponseItem_s* y;
  if (!x) return 0;
  y = x->PMRegisterDescriptorResponseItem;
  if (y)
    x->PMRegisterDescriptorResponseItem = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_PUSH_PMRegisterDescriptorResponseItem) */

void zx_prov_PMRegisterDescriptorResponse_PUSH_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, struct zx_prov_PMRegisterDescriptorResponseItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMRegisterDescriptorResponseItem->gg.g;
  x->PMRegisterDescriptorResponseItem = z;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_REV_PMRegisterDescriptorResponseItem) */

void zx_prov_PMRegisterDescriptorResponse_REV_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x)
{
  struct zx_prov_PMRegisterDescriptorResponseItem_s* nxt;
  struct zx_prov_PMRegisterDescriptorResponseItem_s* y;
  if (!x) return;
  y = x->PMRegisterDescriptorResponseItem;
  if (!y) return;
  x->PMRegisterDescriptorResponseItem = 0;
  while (y) {
    nxt = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n;
    y->gg.g.n = &x->PMRegisterDescriptorResponseItem->gg.g;
    x->PMRegisterDescriptorResponseItem = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_PUT_PMRegisterDescriptorResponseItem) */

void zx_prov_PMRegisterDescriptorResponse_PUT_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n, struct zx_prov_PMRegisterDescriptorResponseItem_s* z)
{
  struct zx_prov_PMRegisterDescriptorResponseItem_s* y;
  if (!x || !z) return;
  y = x->PMRegisterDescriptorResponseItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMRegisterDescriptorResponseItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_ADD_PMRegisterDescriptorResponseItem) */

void zx_prov_PMRegisterDescriptorResponse_ADD_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n, struct zx_prov_PMRegisterDescriptorResponseItem_s* z)
{
  struct zx_prov_PMRegisterDescriptorResponseItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMRegisterDescriptorResponseItem->gg.g;
    x->PMRegisterDescriptorResponseItem = z;
    return;
  case -1:
    y = x->PMRegisterDescriptorResponseItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMRegisterDescriptorResponseItem; n > 1 && y; --n, y = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponse_DEL_PMRegisterDescriptorResponseItem) */

void zx_prov_PMRegisterDescriptorResponse_DEL_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n)
{
  struct zx_prov_PMRegisterDescriptorResponseItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMRegisterDescriptorResponseItem = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)x->PMRegisterDescriptorResponseItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)x->PMRegisterDescriptorResponseItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMRegisterDescriptorResponseItem; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_NUM_ProvisioningHandle) */

int zx_prov_PMRegisterDescriptorResponseItem_NUM_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x)
{
  struct zx_prov_ProvisioningHandle_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProvisioningHandle; y; ++n, y = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_GET_ProvisioningHandle) */

struct zx_prov_ProvisioningHandle_s* zx_prov_PMRegisterDescriptorResponseItem_GET_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int n)
{
  struct zx_prov_ProvisioningHandle_s* y;
  if (!x) return 0;
  for (y = x->ProvisioningHandle; n>=0 && y; --n, y = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_POP_ProvisioningHandle) */

struct zx_prov_ProvisioningHandle_s* zx_prov_PMRegisterDescriptorResponseItem_POP_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x)
{
  struct zx_prov_ProvisioningHandle_s* y;
  if (!x) return 0;
  y = x->ProvisioningHandle;
  if (y)
    x->ProvisioningHandle = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_PUSH_ProvisioningHandle) */

void zx_prov_PMRegisterDescriptorResponseItem_PUSH_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, struct zx_prov_ProvisioningHandle_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProvisioningHandle->gg.g;
  x->ProvisioningHandle = z;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_REV_ProvisioningHandle) */

void zx_prov_PMRegisterDescriptorResponseItem_REV_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x)
{
  struct zx_prov_ProvisioningHandle_s* nxt;
  struct zx_prov_ProvisioningHandle_s* y;
  if (!x) return;
  y = x->ProvisioningHandle;
  if (!y) return;
  x->ProvisioningHandle = 0;
  while (y) {
    nxt = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n;
    y->gg.g.n = &x->ProvisioningHandle->gg.g;
    x->ProvisioningHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_PUT_ProvisioningHandle) */

void zx_prov_PMRegisterDescriptorResponseItem_PUT_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int n, struct zx_prov_ProvisioningHandle_s* z)
{
  struct zx_prov_ProvisioningHandle_s* y;
  if (!x || !z) return;
  y = x->ProvisioningHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProvisioningHandle = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_ADD_ProvisioningHandle) */

void zx_prov_PMRegisterDescriptorResponseItem_ADD_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int n, struct zx_prov_ProvisioningHandle_s* z)
{
  struct zx_prov_ProvisioningHandle_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProvisioningHandle->gg.g;
    x->ProvisioningHandle = z;
    return;
  case -1:
    y = x->ProvisioningHandle;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProvisioningHandle; n > 1 && y; --n, y = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_DEL_ProvisioningHandle) */

void zx_prov_PMRegisterDescriptorResponseItem_DEL_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int n)
{
  struct zx_prov_ProvisioningHandle_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProvisioningHandle = (struct zx_prov_ProvisioningHandle_s*)x->ProvisioningHandle->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_ProvisioningHandle_s*)x->ProvisioningHandle;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProvisioningHandle; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_ProvisioningHandle_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_GET_ref) */
struct zx_str* zx_prov_PMRegisterDescriptorResponseItem_GET_ref(struct zx_prov_PMRegisterDescriptorResponseItem_s* x) { return x->ref; }
/* FUNC(zx_prov_PMRegisterDescriptorResponseItem_PUT_ref) */
void zx_prov_PMRegisterDescriptorResponseItem_PUT_ref(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, struct zx_str* y) { x->ref = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMSetStatus_NUM_PMStatus) */

int zx_prov_PMSetStatus_NUM_PMStatus(struct zx_prov_PMSetStatus_s* x)
{
  struct zx_prov_PMStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMStatus; y; ++n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMSetStatus_GET_PMStatus) */

struct zx_prov_PMStatus_s* zx_prov_PMSetStatus_GET_PMStatus(struct zx_prov_PMSetStatus_s* x, int n)
{
  struct zx_prov_PMStatus_s* y;
  if (!x) return 0;
  for (y = x->PMStatus; n>=0 && y; --n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMSetStatus_POP_PMStatus) */

struct zx_prov_PMStatus_s* zx_prov_PMSetStatus_POP_PMStatus(struct zx_prov_PMSetStatus_s* x)
{
  struct zx_prov_PMStatus_s* y;
  if (!x) return 0;
  y = x->PMStatus;
  if (y)
    x->PMStatus = (struct zx_prov_PMStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMSetStatus_PUSH_PMStatus) */

void zx_prov_PMSetStatus_PUSH_PMStatus(struct zx_prov_PMSetStatus_s* x, struct zx_prov_PMStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMStatus->gg.g;
  x->PMStatus = z;
}

/* FUNC(zx_prov_PMSetStatus_REV_PMStatus) */

void zx_prov_PMSetStatus_REV_PMStatus(struct zx_prov_PMSetStatus_s* x)
{
  struct zx_prov_PMStatus_s* nxt;
  struct zx_prov_PMStatus_s* y;
  if (!x) return;
  y = x->PMStatus;
  if (!y) return;
  x->PMStatus = 0;
  while (y) {
    nxt = (struct zx_prov_PMStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->PMStatus->gg.g;
    x->PMStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMSetStatus_PUT_PMStatus) */

void zx_prov_PMSetStatus_PUT_PMStatus(struct zx_prov_PMSetStatus_s* x, int n, struct zx_prov_PMStatus_s* z)
{
  struct zx_prov_PMStatus_s* y;
  if (!x || !z) return;
  y = x->PMStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMSetStatus_ADD_PMStatus) */

void zx_prov_PMSetStatus_ADD_PMStatus(struct zx_prov_PMSetStatus_s* x, int n, struct zx_prov_PMStatus_s* z)
{
  struct zx_prov_PMStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMStatus->gg.g;
    x->PMStatus = z;
    return;
  case -1:
    y = x->PMStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMStatus; n > 1 && y; --n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMSetStatus_DEL_PMStatus) */

void zx_prov_PMSetStatus_DEL_PMStatus(struct zx_prov_PMSetStatus_s* x, int n)
{
  struct zx_prov_PMStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMStatus = (struct zx_prov_PMStatus_s*)x->PMStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMStatus_s*)x->PMStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMSetStatusResponse_NUM_Status) */

int zx_prov_PMSetStatusResponse_NUM_Status(struct zx_prov_PMSetStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMSetStatusResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMSetStatusResponse_GET_Status(struct zx_prov_PMSetStatusResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMSetStatusResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMSetStatusResponse_POP_Status(struct zx_prov_PMSetStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMSetStatusResponse_PUSH_Status) */

void zx_prov_PMSetStatusResponse_PUSH_Status(struct zx_prov_PMSetStatusResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMSetStatusResponse_REV_Status) */

void zx_prov_PMSetStatusResponse_REV_Status(struct zx_prov_PMSetStatusResponse_s* x)
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

/* FUNC(zx_prov_PMSetStatusResponse_PUT_Status) */

void zx_prov_PMSetStatusResponse_PUT_Status(struct zx_prov_PMSetStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMSetStatusResponse_ADD_Status) */

void zx_prov_PMSetStatusResponse_ADD_Status(struct zx_prov_PMSetStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMSetStatusResponse_DEL_Status) */

void zx_prov_PMSetStatusResponse_DEL_Status(struct zx_prov_PMSetStatusResponse_s* x, int n)
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

/* FUNC(zx_prov_PMStatus_NUM_PMID) */

int zx_prov_PMStatus_NUM_PMID(struct zx_prov_PMStatus_s* x)
{
  struct zx_prov_PMID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMID; y; ++n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMStatus_GET_PMID) */

struct zx_prov_PMID_s* zx_prov_PMStatus_GET_PMID(struct zx_prov_PMStatus_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  for (y = x->PMID; n>=0 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMStatus_POP_PMID) */

struct zx_prov_PMID_s* zx_prov_PMStatus_POP_PMID(struct zx_prov_PMStatus_s* x)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  y = x->PMID;
  if (y)
    x->PMID = (struct zx_prov_PMID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMStatus_PUSH_PMID) */

void zx_prov_PMStatus_PUSH_PMID(struct zx_prov_PMStatus_s* x, struct zx_prov_PMID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMID->gg.g;
  x->PMID = z;
}

/* FUNC(zx_prov_PMStatus_REV_PMID) */

void zx_prov_PMStatus_REV_PMID(struct zx_prov_PMStatus_s* x)
{
  struct zx_prov_PMID_s* nxt;
  struct zx_prov_PMID_s* y;
  if (!x) return;
  y = x->PMID;
  if (!y) return;
  x->PMID = 0;
  while (y) {
    nxt = (struct zx_prov_PMID_s*)y->gg.g.n;
    y->gg.g.n = &x->PMID->gg.g;
    x->PMID = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMStatus_PUT_PMID) */

void zx_prov_PMStatus_PUT_PMID(struct zx_prov_PMStatus_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  y = x->PMID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMStatus_ADD_PMID) */

void zx_prov_PMStatus_ADD_PMID(struct zx_prov_PMStatus_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMID->gg.g;
    x->PMID = z;
    return;
  case -1:
    y = x->PMID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMStatus_DEL_PMID) */

void zx_prov_PMStatus_DEL_PMID(struct zx_prov_PMStatus_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMID = (struct zx_prov_PMID_s*)x->PMID->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMID_s*)x->PMID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMStatus_NUM_State) */

int zx_prov_PMStatus_NUM_State(struct zx_prov_PMStatus_s* x)
{
  struct zx_prov_State_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->State; y; ++n, y = (struct zx_prov_State_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMStatus_GET_State) */

struct zx_prov_State_s* zx_prov_PMStatus_GET_State(struct zx_prov_PMStatus_s* x, int n)
{
  struct zx_prov_State_s* y;
  if (!x) return 0;
  for (y = x->State; n>=0 && y; --n, y = (struct zx_prov_State_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMStatus_POP_State) */

struct zx_prov_State_s* zx_prov_PMStatus_POP_State(struct zx_prov_PMStatus_s* x)
{
  struct zx_prov_State_s* y;
  if (!x) return 0;
  y = x->State;
  if (y)
    x->State = (struct zx_prov_State_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMStatus_PUSH_State) */

void zx_prov_PMStatus_PUSH_State(struct zx_prov_PMStatus_s* x, struct zx_prov_State_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->State->gg.g;
  x->State = z;
}

/* FUNC(zx_prov_PMStatus_REV_State) */

void zx_prov_PMStatus_REV_State(struct zx_prov_PMStatus_s* x)
{
  struct zx_prov_State_s* nxt;
  struct zx_prov_State_s* y;
  if (!x) return;
  y = x->State;
  if (!y) return;
  x->State = 0;
  while (y) {
    nxt = (struct zx_prov_State_s*)y->gg.g.n;
    y->gg.g.n = &x->State->gg.g;
    x->State = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMStatus_PUT_State) */

void zx_prov_PMStatus_PUT_State(struct zx_prov_PMStatus_s* x, int n, struct zx_prov_State_s* z)
{
  struct zx_prov_State_s* y;
  if (!x || !z) return;
  y = x->State;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->State = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_State_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMStatus_ADD_State) */

void zx_prov_PMStatus_ADD_State(struct zx_prov_PMStatus_s* x, int n, struct zx_prov_State_s* z)
{
  struct zx_prov_State_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->State->gg.g;
    x->State = z;
    return;
  case -1:
    y = x->State;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_State_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->State; n > 1 && y; --n, y = (struct zx_prov_State_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMStatus_DEL_State) */

void zx_prov_PMStatus_DEL_State(struct zx_prov_PMStatus_s* x, int n)
{
  struct zx_prov_State_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->State = (struct zx_prov_State_s*)x->State->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_State_s*)x->State;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_State_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->State; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_State_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMUpdate_NUM_PMUpdateItem) */

int zx_prov_PMUpdate_NUM_PMUpdateItem(struct zx_prov_PMUpdate_s* x)
{
  struct zx_prov_PMUpdateItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMUpdateItem; y; ++n, y = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMUpdate_GET_PMUpdateItem) */

struct zx_prov_PMUpdateItem_s* zx_prov_PMUpdate_GET_PMUpdateItem(struct zx_prov_PMUpdate_s* x, int n)
{
  struct zx_prov_PMUpdateItem_s* y;
  if (!x) return 0;
  for (y = x->PMUpdateItem; n>=0 && y; --n, y = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMUpdate_POP_PMUpdateItem) */

struct zx_prov_PMUpdateItem_s* zx_prov_PMUpdate_POP_PMUpdateItem(struct zx_prov_PMUpdate_s* x)
{
  struct zx_prov_PMUpdateItem_s* y;
  if (!x) return 0;
  y = x->PMUpdateItem;
  if (y)
    x->PMUpdateItem = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMUpdate_PUSH_PMUpdateItem) */

void zx_prov_PMUpdate_PUSH_PMUpdateItem(struct zx_prov_PMUpdate_s* x, struct zx_prov_PMUpdateItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMUpdateItem->gg.g;
  x->PMUpdateItem = z;
}

/* FUNC(zx_prov_PMUpdate_REV_PMUpdateItem) */

void zx_prov_PMUpdate_REV_PMUpdateItem(struct zx_prov_PMUpdate_s* x)
{
  struct zx_prov_PMUpdateItem_s* nxt;
  struct zx_prov_PMUpdateItem_s* y;
  if (!x) return;
  y = x->PMUpdateItem;
  if (!y) return;
  x->PMUpdateItem = 0;
  while (y) {
    nxt = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n;
    y->gg.g.n = &x->PMUpdateItem->gg.g;
    x->PMUpdateItem = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMUpdate_PUT_PMUpdateItem) */

void zx_prov_PMUpdate_PUT_PMUpdateItem(struct zx_prov_PMUpdate_s* x, int n, struct zx_prov_PMUpdateItem_s* z)
{
  struct zx_prov_PMUpdateItem_s* y;
  if (!x || !z) return;
  y = x->PMUpdateItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMUpdateItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMUpdate_ADD_PMUpdateItem) */

void zx_prov_PMUpdate_ADD_PMUpdateItem(struct zx_prov_PMUpdate_s* x, int n, struct zx_prov_PMUpdateItem_s* z)
{
  struct zx_prov_PMUpdateItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMUpdateItem->gg.g;
    x->PMUpdateItem = z;
    return;
  case -1:
    y = x->PMUpdateItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMUpdateItem; n > 1 && y; --n, y = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMUpdate_DEL_PMUpdateItem) */

void zx_prov_PMUpdate_DEL_PMUpdateItem(struct zx_prov_PMUpdate_s* x, int n)
{
  struct zx_prov_PMUpdateItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMUpdateItem = (struct zx_prov_PMUpdateItem_s*)x->PMUpdateItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMUpdateItem_s*)x->PMUpdateItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMUpdateItem; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMUpdateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMUpdate_NUM_NotifyTo) */

int zx_prov_PMUpdate_NUM_NotifyTo(struct zx_prov_PMUpdate_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyTo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_PMUpdate_GET_NotifyTo) */

struct zx_elem_s* zx_prov_PMUpdate_GET_NotifyTo(struct zx_prov_PMUpdate_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NotifyTo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_PMUpdate_POP_NotifyTo) */

struct zx_elem_s* zx_prov_PMUpdate_POP_NotifyTo(struct zx_prov_PMUpdate_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NotifyTo;
  if (y)
    x->NotifyTo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_PMUpdate_PUSH_NotifyTo) */

void zx_prov_PMUpdate_PUSH_NotifyTo(struct zx_prov_PMUpdate_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NotifyTo->g;
  x->NotifyTo = z;
}

/* FUNC(zx_prov_PMUpdate_REV_NotifyTo) */

void zx_prov_PMUpdate_REV_NotifyTo(struct zx_prov_PMUpdate_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NotifyTo;
  if (!y) return;
  x->NotifyTo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NotifyTo->g;
    x->NotifyTo = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMUpdate_PUT_NotifyTo) */

void zx_prov_PMUpdate_PUT_NotifyTo(struct zx_prov_PMUpdate_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NotifyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NotifyTo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_PMUpdate_ADD_NotifyTo) */

void zx_prov_PMUpdate_ADD_NotifyTo(struct zx_prov_PMUpdate_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NotifyTo->g;
    x->NotifyTo = z;
    return;
  case -1:
    y = x->NotifyTo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_PMUpdate_DEL_NotifyTo) */

void zx_prov_PMUpdate_DEL_NotifyTo(struct zx_prov_PMUpdate_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyTo = (struct zx_elem_s*)x->NotifyTo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NotifyTo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMUpdateItem_NUM_PMDescriptor) */

int zx_prov_PMUpdateItem_NUM_PMDescriptor(struct zx_prov_PMUpdateItem_s* x)
{
  struct zx_prov_PMDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDescriptor; y; ++n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMUpdateItem_GET_PMDescriptor) */

struct zx_prov_PMDescriptor_s* zx_prov_PMUpdateItem_GET_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, int n)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return 0;
  for (y = x->PMDescriptor; n>=0 && y; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMUpdateItem_POP_PMDescriptor) */

struct zx_prov_PMDescriptor_s* zx_prov_PMUpdateItem_POP_PMDescriptor(struct zx_prov_PMUpdateItem_s* x)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return 0;
  y = x->PMDescriptor;
  if (y)
    x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMUpdateItem_PUSH_PMDescriptor) */

void zx_prov_PMUpdateItem_PUSH_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, struct zx_prov_PMDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDescriptor->gg.g;
  x->PMDescriptor = z;
}

/* FUNC(zx_prov_PMUpdateItem_REV_PMDescriptor) */

void zx_prov_PMUpdateItem_REV_PMDescriptor(struct zx_prov_PMUpdateItem_s* x)
{
  struct zx_prov_PMDescriptor_s* nxt;
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return;
  y = x->PMDescriptor;
  if (!y) return;
  x->PMDescriptor = 0;
  while (y) {
    nxt = (struct zx_prov_PMDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDescriptor->gg.g;
    x->PMDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PMUpdateItem_PUT_PMDescriptor) */

void zx_prov_PMUpdateItem_PUT_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, int n, struct zx_prov_PMDescriptor_s* z)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x || !z) return;
  y = x->PMDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PMUpdateItem_ADD_PMDescriptor) */

void zx_prov_PMUpdateItem_ADD_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, int n, struct zx_prov_PMDescriptor_s* z)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDescriptor->gg.g;
    x->PMDescriptor = z;
    return;
  case -1:
    y = x->PMDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDescriptor; n > 1 && y; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PMUpdateItem_DEL_PMDescriptor) */

void zx_prov_PMUpdateItem_DEL_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, int n)
{
  struct zx_prov_PMDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)x->PMDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDescriptor_s*)x->PMDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_PMUpdateItem_GET_type) */
struct zx_str* zx_prov_PMUpdateItem_GET_type(struct zx_prov_PMUpdateItem_s* x) { return x->type; }
/* FUNC(zx_prov_PMUpdateItem_PUT_type) */
void zx_prov_PMUpdateItem_PUT_type(struct zx_prov_PMUpdateItem_s* x, struct zx_str* y) { x->type = y; }
/* FUNC(zx_prov_PMUpdateItem_GET_itemID) */
struct zx_str* zx_prov_PMUpdateItem_GET_itemID(struct zx_prov_PMUpdateItem_s* x) { return x->itemID; }
/* FUNC(zx_prov_PMUpdateItem_PUT_itemID) */
void zx_prov_PMUpdateItem_PUT_itemID(struct zx_prov_PMUpdateItem_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_prov_PMUpdateItem_GET_at) */
struct zx_str* zx_prov_PMUpdateItem_GET_at(struct zx_prov_PMUpdateItem_s* x) { return x->at; }
/* FUNC(zx_prov_PMUpdateItem_PUT_at) */
void zx_prov_PMUpdateItem_PUT_at(struct zx_prov_PMUpdateItem_s* x, struct zx_str* y) { x->at = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PMUpdateResponse_NUM_Status) */

int zx_prov_PMUpdateResponse_NUM_Status(struct zx_prov_PMUpdateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PMUpdateResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_PMUpdateResponse_GET_Status(struct zx_prov_PMUpdateResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PMUpdateResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_PMUpdateResponse_POP_Status(struct zx_prov_PMUpdateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PMUpdateResponse_PUSH_Status) */

void zx_prov_PMUpdateResponse_PUSH_Status(struct zx_prov_PMUpdateResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_PMUpdateResponse_REV_Status) */

void zx_prov_PMUpdateResponse_REV_Status(struct zx_prov_PMUpdateResponse_s* x)
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

/* FUNC(zx_prov_PMUpdateResponse_PUT_Status) */

void zx_prov_PMUpdateResponse_PUT_Status(struct zx_prov_PMUpdateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMUpdateResponse_ADD_Status) */

void zx_prov_PMUpdateResponse_ADD_Status(struct zx_prov_PMUpdateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_PMUpdateResponse_DEL_Status) */

void zx_prov_PMUpdateResponse_DEL_Status(struct zx_prov_PMUpdateResponse_s* x, int n)
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

/* FUNC(zx_prov_Poll_NUM_Action) */

int zx_prov_Poll_NUM_Action(struct zx_prov_Poll_s* x)
{
  struct zx_a_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_Poll_GET_Action) */

struct zx_a_Action_s* zx_prov_Poll_GET_Action(struct zx_prov_Poll_s* x, int n)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_Poll_POP_Action) */

struct zx_a_Action_s* zx_prov_Poll_POP_Action(struct zx_prov_Poll_s* x)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_a_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_Poll_PUSH_Action) */

void zx_prov_Poll_PUSH_Action(struct zx_prov_Poll_s* x, struct zx_a_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_prov_Poll_REV_Action) */

void zx_prov_Poll_REV_Action(struct zx_prov_Poll_s* x)
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

/* FUNC(zx_prov_Poll_PUT_Action) */

void zx_prov_Poll_PUT_Action(struct zx_prov_Poll_s* x, int n, struct zx_a_Action_s* z)
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

/* FUNC(zx_prov_Poll_ADD_Action) */

void zx_prov_Poll_ADD_Action(struct zx_prov_Poll_s* x, int n, struct zx_a_Action_s* z)
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

/* FUNC(zx_prov_Poll_DEL_Action) */

void zx_prov_Poll_DEL_Action(struct zx_prov_Poll_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_Poll_NUM_Response) */

int zx_prov_Poll_NUM_Response(struct zx_prov_Poll_s* x)
{
  struct zx_dp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_dp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_Poll_GET_Response) */

struct zx_dp_Response_s* zx_prov_Poll_GET_Response(struct zx_prov_Poll_s* x, int n)
{
  struct zx_dp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_dp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_Poll_POP_Response) */

struct zx_dp_Response_s* zx_prov_Poll_POP_Response(struct zx_prov_Poll_s* x)
{
  struct zx_dp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_dp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_Poll_PUSH_Response) */

void zx_prov_Poll_PUSH_Response(struct zx_prov_Poll_s* x, struct zx_dp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_prov_Poll_REV_Response) */

void zx_prov_Poll_REV_Response(struct zx_prov_Poll_s* x)
{
  struct zx_dp_Response_s* nxt;
  struct zx_dp_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_dp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_Poll_PUT_Response) */

void zx_prov_Poll_PUT_Response(struct zx_prov_Poll_s* x, int n, struct zx_dp_Response_s* z)
{
  struct zx_dp_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_Poll_ADD_Response) */

void zx_prov_Poll_ADD_Response(struct zx_prov_Poll_s* x, int n, struct zx_dp_Response_s* z)
{
  struct zx_dp_Response_s* y;
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
    for (; y->gg.g.n; y = (struct zx_dp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_dp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_Poll_DEL_Response) */

void zx_prov_Poll_DEL_Response(struct zx_prov_Poll_s* x, int n)
{
  struct zx_dp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_dp_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_dp_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_dp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_Poll_GET_wait) */
struct zx_str* zx_prov_Poll_GET_wait(struct zx_prov_Poll_s* x) { return x->wait; }
/* FUNC(zx_prov_Poll_PUT_wait) */
void zx_prov_Poll_PUT_wait(struct zx_prov_Poll_s* x, struct zx_str* y) { x->wait = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_PollResponse_NUM_Request) */

int zx_prov_PollResponse_NUM_Request(struct zx_prov_PollResponse_s* x)
{
  struct zx_dp_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Request; y; ++n, y = (struct zx_dp_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_PollResponse_GET_Request) */

struct zx_dp_Request_s* zx_prov_PollResponse_GET_Request(struct zx_prov_PollResponse_s* x, int n)
{
  struct zx_dp_Request_s* y;
  if (!x) return 0;
  for (y = x->Request; n>=0 && y; --n, y = (struct zx_dp_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_PollResponse_POP_Request) */

struct zx_dp_Request_s* zx_prov_PollResponse_POP_Request(struct zx_prov_PollResponse_s* x)
{
  struct zx_dp_Request_s* y;
  if (!x) return 0;
  y = x->Request;
  if (y)
    x->Request = (struct zx_dp_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_PollResponse_PUSH_Request) */

void zx_prov_PollResponse_PUSH_Request(struct zx_prov_PollResponse_s* x, struct zx_dp_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Request->gg.g;
  x->Request = z;
}

/* FUNC(zx_prov_PollResponse_REV_Request) */

void zx_prov_PollResponse_REV_Request(struct zx_prov_PollResponse_s* x)
{
  struct zx_dp_Request_s* nxt;
  struct zx_dp_Request_s* y;
  if (!x) return;
  y = x->Request;
  if (!y) return;
  x->Request = 0;
  while (y) {
    nxt = (struct zx_dp_Request_s*)y->gg.g.n;
    y->gg.g.n = &x->Request->gg.g;
    x->Request = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_PollResponse_PUT_Request) */

void zx_prov_PollResponse_PUT_Request(struct zx_prov_PollResponse_s* x, int n, struct zx_dp_Request_s* z)
{
  struct zx_dp_Request_s* y;
  if (!x || !z) return;
  y = x->Request;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Request = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dp_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_PollResponse_ADD_Request) */

void zx_prov_PollResponse_ADD_Request(struct zx_prov_PollResponse_s* x, int n, struct zx_dp_Request_s* z)
{
  struct zx_dp_Request_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Request->gg.g;
    x->Request = z;
    return;
  case -1:
    y = x->Request;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dp_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y; --n, y = (struct zx_dp_Request_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_PollResponse_DEL_Request) */

void zx_prov_PollResponse_DEL_Request(struct zx_prov_PollResponse_s* x, int n)
{
  struct zx_dp_Request_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Request = (struct zx_dp_Request_s*)x->Request->gg.g.n;
    return;
  case -1:
    y = (struct zx_dp_Request_s*)x->Request;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dp_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y->gg.g.n; --n, y = (struct zx_dp_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_PollResponse_GET_nextPoll) */
struct zx_str* zx_prov_PollResponse_GET_nextPoll(struct zx_prov_PollResponse_s* x) { return x->nextPoll; }
/* FUNC(zx_prov_PollResponse_PUT_nextPoll) */
void zx_prov_PollResponse_PUT_nextPoll(struct zx_prov_PollResponse_s* x, struct zx_str* y) { x->nextPoll = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_ProvisioningHandle_NUM_PMDArtifact) */

int zx_prov_ProvisioningHandle_NUM_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDArtifact; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_prov_ProvisioningHandle_GET_PMDArtifact) */

struct zx_elem_s* zx_prov_ProvisioningHandle_GET_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PMDArtifact; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_prov_ProvisioningHandle_POP_PMDArtifact) */

struct zx_elem_s* zx_prov_ProvisioningHandle_POP_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PMDArtifact;
  if (y)
    x->PMDArtifact = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_prov_ProvisioningHandle_PUSH_PMDArtifact) */

void zx_prov_ProvisioningHandle_PUSH_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PMDArtifact->g;
  x->PMDArtifact = z;
}

/* FUNC(zx_prov_ProvisioningHandle_REV_PMDArtifact) */

void zx_prov_ProvisioningHandle_REV_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PMDArtifact;
  if (!y) return;
  x->PMDArtifact = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PMDArtifact->g;
    x->PMDArtifact = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_ProvisioningHandle_PUT_PMDArtifact) */

void zx_prov_ProvisioningHandle_PUT_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PMDArtifact;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PMDArtifact = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_prov_ProvisioningHandle_ADD_PMDArtifact) */

void zx_prov_ProvisioningHandle_ADD_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PMDArtifact->g;
    x->PMDArtifact = z;
    return;
  case -1:
    y = x->PMDArtifact;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMDArtifact; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_prov_ProvisioningHandle_DEL_PMDArtifact) */

void zx_prov_ProvisioningHandle_DEL_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDArtifact = (struct zx_elem_s*)x->PMDArtifact->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PMDArtifact;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PMDArtifact; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_ProvisioningHandle_NUM_ProvisioningServiceEPR) */

int zx_prov_ProvisioningHandle_NUM_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_prov_ProvisioningServiceEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProvisioningServiceEPR; y; ++n, y = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_ProvisioningHandle_GET_ProvisioningServiceEPR) */

struct zx_prov_ProvisioningServiceEPR_s* zx_prov_ProvisioningHandle_GET_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, int n)
{
  struct zx_prov_ProvisioningServiceEPR_s* y;
  if (!x) return 0;
  for (y = x->ProvisioningServiceEPR; n>=0 && y; --n, y = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_ProvisioningHandle_POP_ProvisioningServiceEPR) */

struct zx_prov_ProvisioningServiceEPR_s* zx_prov_ProvisioningHandle_POP_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_prov_ProvisioningServiceEPR_s* y;
  if (!x) return 0;
  y = x->ProvisioningServiceEPR;
  if (y)
    x->ProvisioningServiceEPR = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_ProvisioningHandle_PUSH_ProvisioningServiceEPR) */

void zx_prov_ProvisioningHandle_PUSH_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, struct zx_prov_ProvisioningServiceEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProvisioningServiceEPR->gg.g;
  x->ProvisioningServiceEPR = z;
}

/* FUNC(zx_prov_ProvisioningHandle_REV_ProvisioningServiceEPR) */

void zx_prov_ProvisioningHandle_REV_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_prov_ProvisioningServiceEPR_s* nxt;
  struct zx_prov_ProvisioningServiceEPR_s* y;
  if (!x) return;
  y = x->ProvisioningServiceEPR;
  if (!y) return;
  x->ProvisioningServiceEPR = 0;
  while (y) {
    nxt = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n;
    y->gg.g.n = &x->ProvisioningServiceEPR->gg.g;
    x->ProvisioningServiceEPR = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_ProvisioningHandle_PUT_ProvisioningServiceEPR) */

void zx_prov_ProvisioningHandle_PUT_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_prov_ProvisioningServiceEPR_s* z)
{
  struct zx_prov_ProvisioningServiceEPR_s* y;
  if (!x || !z) return;
  y = x->ProvisioningServiceEPR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProvisioningServiceEPR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_ProvisioningHandle_ADD_ProvisioningServiceEPR) */

void zx_prov_ProvisioningHandle_ADD_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_prov_ProvisioningServiceEPR_s* z)
{
  struct zx_prov_ProvisioningServiceEPR_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProvisioningServiceEPR->gg.g;
    x->ProvisioningServiceEPR = z;
    return;
  case -1:
    y = x->ProvisioningServiceEPR;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProvisioningServiceEPR; n > 1 && y; --n, y = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_ProvisioningHandle_DEL_ProvisioningServiceEPR) */

void zx_prov_ProvisioningHandle_DEL_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, int n)
{
  struct zx_prov_ProvisioningServiceEPR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProvisioningServiceEPR = (struct zx_prov_ProvisioningServiceEPR_s*)x->ProvisioningServiceEPR->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_ProvisioningServiceEPR_s*)x->ProvisioningServiceEPR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProvisioningServiceEPR; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_ProvisioningServiceEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_ProvisioningHandle_NUM_Signature) */

int zx_prov_ProvisioningHandle_NUM_Signature(struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_ProvisioningHandle_GET_Signature) */

struct zx_ds_Signature_s* zx_prov_ProvisioningHandle_GET_Signature(struct zx_prov_ProvisioningHandle_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_ProvisioningHandle_POP_Signature) */

struct zx_ds_Signature_s* zx_prov_ProvisioningHandle_POP_Signature(struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_ProvisioningHandle_PUSH_Signature) */

void zx_prov_ProvisioningHandle_PUSH_Signature(struct zx_prov_ProvisioningHandle_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_prov_ProvisioningHandle_REV_Signature) */

void zx_prov_ProvisioningHandle_REV_Signature(struct zx_prov_ProvisioningHandle_s* x)
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

/* FUNC(zx_prov_ProvisioningHandle_PUT_Signature) */

void zx_prov_ProvisioningHandle_PUT_Signature(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_prov_ProvisioningHandle_ADD_Signature) */

void zx_prov_ProvisioningHandle_ADD_Signature(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_ds_Signature_s* z)
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

/* FUNC(zx_prov_ProvisioningHandle_DEL_Signature) */

void zx_prov_ProvisioningHandle_DEL_Signature(struct zx_prov_ProvisioningHandle_s* x, int n)
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

#endif

/* FUNC(zx_prov_ProvisioningHandle_GET_expires) */
struct zx_str* zx_prov_ProvisioningHandle_GET_expires(struct zx_prov_ProvisioningHandle_s* x) { return x->expires; }
/* FUNC(zx_prov_ProvisioningHandle_PUT_expires) */
void zx_prov_ProvisioningHandle_PUT_expires(struct zx_prov_ProvisioningHandle_s* x, struct zx_str* y) { x->expires = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_ProvisioningServiceEPR_NUM_Address) */

int zx_prov_ProvisioningServiceEPR_NUM_Address(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_GET_Address) */

struct zx_a_Address_s* zx_prov_ProvisioningServiceEPR_GET_Address(struct zx_prov_ProvisioningServiceEPR_s* x, int n)
{
  struct zx_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_POP_Address) */

struct zx_a_Address_s* zx_prov_ProvisioningServiceEPR_POP_Address(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zx_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_PUSH_Address) */

void zx_prov_ProvisioningServiceEPR_PUSH_Address(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_REV_Address) */

void zx_prov_ProvisioningServiceEPR_REV_Address(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_Address_s* nxt;
  struct zx_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zx_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_ProvisioningServiceEPR_PUT_Address) */

void zx_prov_ProvisioningServiceEPR_PUT_Address(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_Address_s* z)
{
  struct zx_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_ProvisioningServiceEPR_ADD_Address) */

void zx_prov_ProvisioningServiceEPR_ADD_Address(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_Address_s* z)
{
  struct zx_a_Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Address->gg.g;
    x->Address = z;
    return;
  case -1:
    y = x->Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_DEL_Address) */

void zx_prov_ProvisioningServiceEPR_DEL_Address(struct zx_prov_ProvisioningServiceEPR_s* x, int n)
{
  struct zx_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zx_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_ProvisioningServiceEPR_NUM_ReferenceParameters) */

int zx_prov_ProvisioningServiceEPR_NUM_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_GET_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_prov_ProvisioningServiceEPR_GET_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, int n)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_POP_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_prov_ProvisioningServiceEPR_POP_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_PUSH_ReferenceParameters) */

void zx_prov_ProvisioningServiceEPR_PUSH_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_REV_ReferenceParameters) */

void zx_prov_ProvisioningServiceEPR_REV_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_ReferenceParameters_s* nxt;
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zx_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_ProvisioningServiceEPR_PUT_ReferenceParameters) */

void zx_prov_ProvisioningServiceEPR_PUT_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_ProvisioningServiceEPR_ADD_ReferenceParameters) */

void zx_prov_ProvisioningServiceEPR_ADD_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = z;
    return;
  case -1:
    y = x->ReferenceParameters;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_DEL_ReferenceParameters) */

void zx_prov_ProvisioningServiceEPR_DEL_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, int n)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_ProvisioningServiceEPR_NUM_Metadata) */

int zx_prov_ProvisioningServiceEPR_NUM_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_GET_Metadata) */

struct zx_a_Metadata_s* zx_prov_ProvisioningServiceEPR_GET_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, int n)
{
  struct zx_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_POP_Metadata) */

struct zx_a_Metadata_s* zx_prov_ProvisioningServiceEPR_POP_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zx_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_PUSH_Metadata) */

void zx_prov_ProvisioningServiceEPR_PUSH_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_REV_Metadata) */

void zx_prov_ProvisioningServiceEPR_REV_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_a_Metadata_s* nxt;
  struct zx_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zx_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_ProvisioningServiceEPR_PUT_Metadata) */

void zx_prov_ProvisioningServiceEPR_PUT_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_Metadata_s* z)
{
  struct zx_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_ProvisioningServiceEPR_ADD_Metadata) */

void zx_prov_ProvisioningServiceEPR_ADD_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_Metadata_s* z)
{
  struct zx_a_Metadata_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = z;
    return;
  case -1:
    y = x->Metadata;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_ProvisioningServiceEPR_DEL_Metadata) */

void zx_prov_ProvisioningServiceEPR_DEL_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, int n)
{
  struct zx_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zx_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_ProvisioningServiceEPR_GET_notOnOrAfter) */
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_notOnOrAfter(struct zx_prov_ProvisioningServiceEPR_s* x) { return x->notOnOrAfter; }
/* FUNC(zx_prov_ProvisioningServiceEPR_PUT_notOnOrAfter) */
void zx_prov_ProvisioningServiceEPR_PUT_notOnOrAfter(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y) { x->notOnOrAfter = y; }
/* FUNC(zx_prov_ProvisioningServiceEPR_GET_mustUnderstand) */
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_mustUnderstand(struct zx_prov_ProvisioningServiceEPR_s* x) { return x->mustUnderstand; }
/* FUNC(zx_prov_ProvisioningServiceEPR_PUT_mustUnderstand) */
void zx_prov_ProvisioningServiceEPR_PUT_mustUnderstand(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y) { x->mustUnderstand = y; }
/* FUNC(zx_prov_ProvisioningServiceEPR_GET_actor) */
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_actor(struct zx_prov_ProvisioningServiceEPR_s* x) { return x->actor; }
/* FUNC(zx_prov_ProvisioningServiceEPR_PUT_actor) */
void zx_prov_ProvisioningServiceEPR_PUT_actor(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y) { x->actor = y; }
/* FUNC(zx_prov_ProvisioningServiceEPR_GET_Id) */
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_Id(struct zx_prov_ProvisioningServiceEPR_s* x) { return x->Id; }
/* FUNC(zx_prov_ProvisioningServiceEPR_PUT_Id) */
void zx_prov_ProvisioningServiceEPR_PUT_Id(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_prov_State_GET_asof) */
struct zx_str* zx_prov_State_GET_asof(struct zx_prov_State_s* x) { return x->asof; }
/* FUNC(zx_prov_State_PUT_asof) */
void zx_prov_State_PUT_asof(struct zx_prov_State_s* x, struct zx_str* y) { x->asof = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_UpdateEPR_NUM_UpdateEPRItem) */

int zx_prov_UpdateEPR_NUM_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x)
{
  struct zx_prov_UpdateEPRItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UpdateEPRItem; y; ++n, y = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_UpdateEPR_GET_UpdateEPRItem) */

struct zx_prov_UpdateEPRItem_s* zx_prov_UpdateEPR_GET_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, int n)
{
  struct zx_prov_UpdateEPRItem_s* y;
  if (!x) return 0;
  for (y = x->UpdateEPRItem; n>=0 && y; --n, y = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_UpdateEPR_POP_UpdateEPRItem) */

struct zx_prov_UpdateEPRItem_s* zx_prov_UpdateEPR_POP_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x)
{
  struct zx_prov_UpdateEPRItem_s* y;
  if (!x) return 0;
  y = x->UpdateEPRItem;
  if (y)
    x->UpdateEPRItem = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_UpdateEPR_PUSH_UpdateEPRItem) */

void zx_prov_UpdateEPR_PUSH_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, struct zx_prov_UpdateEPRItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UpdateEPRItem->gg.g;
  x->UpdateEPRItem = z;
}

/* FUNC(zx_prov_UpdateEPR_REV_UpdateEPRItem) */

void zx_prov_UpdateEPR_REV_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x)
{
  struct zx_prov_UpdateEPRItem_s* nxt;
  struct zx_prov_UpdateEPRItem_s* y;
  if (!x) return;
  y = x->UpdateEPRItem;
  if (!y) return;
  x->UpdateEPRItem = 0;
  while (y) {
    nxt = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n;
    y->gg.g.n = &x->UpdateEPRItem->gg.g;
    x->UpdateEPRItem = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_UpdateEPR_PUT_UpdateEPRItem) */

void zx_prov_UpdateEPR_PUT_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, int n, struct zx_prov_UpdateEPRItem_s* z)
{
  struct zx_prov_UpdateEPRItem_s* y;
  if (!x || !z) return;
  y = x->UpdateEPRItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UpdateEPRItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_UpdateEPR_ADD_UpdateEPRItem) */

void zx_prov_UpdateEPR_ADD_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, int n, struct zx_prov_UpdateEPRItem_s* z)
{
  struct zx_prov_UpdateEPRItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UpdateEPRItem->gg.g;
    x->UpdateEPRItem = z;
    return;
  case -1:
    y = x->UpdateEPRItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateEPRItem; n > 1 && y; --n, y = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_UpdateEPR_DEL_UpdateEPRItem) */

void zx_prov_UpdateEPR_DEL_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, int n)
{
  struct zx_prov_UpdateEPRItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UpdateEPRItem = (struct zx_prov_UpdateEPRItem_s*)x->UpdateEPRItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_UpdateEPRItem_s*)x->UpdateEPRItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateEPRItem; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_UpdateEPRItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_UpdateEPRItem_NUM_PMID) */

int zx_prov_UpdateEPRItem_NUM_PMID(struct zx_prov_UpdateEPRItem_s* x)
{
  struct zx_prov_PMID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMID; y; ++n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_UpdateEPRItem_GET_PMID) */

struct zx_prov_PMID_s* zx_prov_UpdateEPRItem_GET_PMID(struct zx_prov_UpdateEPRItem_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  for (y = x->PMID; n>=0 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_UpdateEPRItem_POP_PMID) */

struct zx_prov_PMID_s* zx_prov_UpdateEPRItem_POP_PMID(struct zx_prov_UpdateEPRItem_s* x)
{
  struct zx_prov_PMID_s* y;
  if (!x) return 0;
  y = x->PMID;
  if (y)
    x->PMID = (struct zx_prov_PMID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_UpdateEPRItem_PUSH_PMID) */

void zx_prov_UpdateEPRItem_PUSH_PMID(struct zx_prov_UpdateEPRItem_s* x, struct zx_prov_PMID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMID->gg.g;
  x->PMID = z;
}

/* FUNC(zx_prov_UpdateEPRItem_REV_PMID) */

void zx_prov_UpdateEPRItem_REV_PMID(struct zx_prov_UpdateEPRItem_s* x)
{
  struct zx_prov_PMID_s* nxt;
  struct zx_prov_PMID_s* y;
  if (!x) return;
  y = x->PMID;
  if (!y) return;
  x->PMID = 0;
  while (y) {
    nxt = (struct zx_prov_PMID_s*)y->gg.g.n;
    y->gg.g.n = &x->PMID->gg.g;
    x->PMID = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_UpdateEPRItem_PUT_PMID) */

void zx_prov_UpdateEPRItem_PUT_PMID(struct zx_prov_UpdateEPRItem_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  y = x->PMID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_UpdateEPRItem_ADD_PMID) */

void zx_prov_UpdateEPRItem_ADD_PMID(struct zx_prov_UpdateEPRItem_s* x, int n, struct zx_prov_PMID_s* z)
{
  struct zx_prov_PMID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMID->gg.g;
    x->PMID = z;
    return;
  case -1:
    y = x->PMID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_UpdateEPRItem_DEL_PMID) */

void zx_prov_UpdateEPRItem_DEL_PMID(struct zx_prov_UpdateEPRItem_s* x, int n)
{
  struct zx_prov_PMID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMID = (struct zx_prov_PMID_s*)x->PMID->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMID_s*)x->PMID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMID; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_UpdateEPRItem_NUM_CallbackEPR) */

int zx_prov_UpdateEPRItem_NUM_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x)
{
  struct zx_prov_CallbackEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CallbackEPR; y; ++n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_UpdateEPRItem_GET_CallbackEPR) */

struct zx_prov_CallbackEPR_s* zx_prov_UpdateEPRItem_GET_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, int n)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x) return 0;
  for (y = x->CallbackEPR; n>=0 && y; --n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_UpdateEPRItem_POP_CallbackEPR) */

struct zx_prov_CallbackEPR_s* zx_prov_UpdateEPRItem_POP_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x) return 0;
  y = x->CallbackEPR;
  if (y)
    x->CallbackEPR = (struct zx_prov_CallbackEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_UpdateEPRItem_PUSH_CallbackEPR) */

void zx_prov_UpdateEPRItem_PUSH_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, struct zx_prov_CallbackEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CallbackEPR->gg.g;
  x->CallbackEPR = z;
}

/* FUNC(zx_prov_UpdateEPRItem_REV_CallbackEPR) */

void zx_prov_UpdateEPRItem_REV_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x)
{
  struct zx_prov_CallbackEPR_s* nxt;
  struct zx_prov_CallbackEPR_s* y;
  if (!x) return;
  y = x->CallbackEPR;
  if (!y) return;
  x->CallbackEPR = 0;
  while (y) {
    nxt = (struct zx_prov_CallbackEPR_s*)y->gg.g.n;
    y->gg.g.n = &x->CallbackEPR->gg.g;
    x->CallbackEPR = y;
    y = nxt;
  }
}

/* FUNC(zx_prov_UpdateEPRItem_PUT_CallbackEPR) */

void zx_prov_UpdateEPRItem_PUT_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, int n, struct zx_prov_CallbackEPR_s* z)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x || !z) return;
  y = x->CallbackEPR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CallbackEPR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_prov_UpdateEPRItem_ADD_CallbackEPR) */

void zx_prov_UpdateEPRItem_ADD_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, int n, struct zx_prov_CallbackEPR_s* z)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CallbackEPR->gg.g;
    x->CallbackEPR = z;
    return;
  case -1:
    y = x->CallbackEPR;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CallbackEPR; n > 1 && y; --n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_prov_UpdateEPRItem_DEL_CallbackEPR) */

void zx_prov_UpdateEPRItem_DEL_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, int n)
{
  struct zx_prov_CallbackEPR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CallbackEPR = (struct zx_prov_CallbackEPR_s*)x->CallbackEPR->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_CallbackEPR_s*)x->CallbackEPR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CallbackEPR; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_CallbackEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_prov_UpdateEPRItem_GET_itemID) */
struct zx_str* zx_prov_UpdateEPRItem_GET_itemID(struct zx_prov_UpdateEPRItem_s* x) { return x->itemID; }
/* FUNC(zx_prov_UpdateEPRItem_PUT_itemID) */
void zx_prov_UpdateEPRItem_PUT_itemID(struct zx_prov_UpdateEPRItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_prov_UpdateEPRResponse_NUM_Status) */

int zx_prov_UpdateEPRResponse_NUM_Status(struct zx_prov_UpdateEPRResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_prov_UpdateEPRResponse_GET_Status) */

struct zx_lu_Status_s* zx_prov_UpdateEPRResponse_GET_Status(struct zx_prov_UpdateEPRResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_prov_UpdateEPRResponse_POP_Status) */

struct zx_lu_Status_s* zx_prov_UpdateEPRResponse_POP_Status(struct zx_prov_UpdateEPRResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_prov_UpdateEPRResponse_PUSH_Status) */

void zx_prov_UpdateEPRResponse_PUSH_Status(struct zx_prov_UpdateEPRResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_prov_UpdateEPRResponse_REV_Status) */

void zx_prov_UpdateEPRResponse_REV_Status(struct zx_prov_UpdateEPRResponse_s* x)
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

/* FUNC(zx_prov_UpdateEPRResponse_PUT_Status) */

void zx_prov_UpdateEPRResponse_PUT_Status(struct zx_prov_UpdateEPRResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_UpdateEPRResponse_ADD_Status) */

void zx_prov_UpdateEPRResponse_ADD_Status(struct zx_prov_UpdateEPRResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_prov_UpdateEPRResponse_DEL_Status) */

void zx_prov_UpdateEPRResponse_DEL_Status(struct zx_prov_UpdateEPRResponse_s* x, int n)
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






/* EOF -- c/zx-prov-getput.c */
