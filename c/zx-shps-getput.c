/* c/zx-shps-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-shps-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_CallbackEPR_NUM_Address) */

int zx_shps_CallbackEPR_NUM_Address(struct zx_shps_CallbackEPR_s* x)
{
  struct zx_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_CallbackEPR_GET_Address) */

struct zx_a_Address_s* zx_shps_CallbackEPR_GET_Address(struct zx_shps_CallbackEPR_s* x, int n)
{
  struct zx_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_CallbackEPR_POP_Address) */

struct zx_a_Address_s* zx_shps_CallbackEPR_POP_Address(struct zx_shps_CallbackEPR_s* x)
{
  struct zx_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zx_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_CallbackEPR_PUSH_Address) */

void zx_shps_CallbackEPR_PUSH_Address(struct zx_shps_CallbackEPR_s* x, struct zx_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zx_shps_CallbackEPR_REV_Address) */

void zx_shps_CallbackEPR_REV_Address(struct zx_shps_CallbackEPR_s* x)
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

/* FUNC(zx_shps_CallbackEPR_PUT_Address) */

void zx_shps_CallbackEPR_PUT_Address(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_Address_s* z)
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

/* FUNC(zx_shps_CallbackEPR_ADD_Address) */

void zx_shps_CallbackEPR_ADD_Address(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_Address_s* z)
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

/* FUNC(zx_shps_CallbackEPR_DEL_Address) */

void zx_shps_CallbackEPR_DEL_Address(struct zx_shps_CallbackEPR_s* x, int n)
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

/* FUNC(zx_shps_CallbackEPR_NUM_ReferenceParameters) */

int zx_shps_CallbackEPR_NUM_ReferenceParameters(struct zx_shps_CallbackEPR_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_CallbackEPR_GET_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_shps_CallbackEPR_GET_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, int n)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_CallbackEPR_POP_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_shps_CallbackEPR_POP_ReferenceParameters(struct zx_shps_CallbackEPR_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_CallbackEPR_PUSH_ReferenceParameters) */

void zx_shps_CallbackEPR_PUSH_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, struct zx_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zx_shps_CallbackEPR_REV_ReferenceParameters) */

void zx_shps_CallbackEPR_REV_ReferenceParameters(struct zx_shps_CallbackEPR_s* x)
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

/* FUNC(zx_shps_CallbackEPR_PUT_ReferenceParameters) */

void zx_shps_CallbackEPR_PUT_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z)
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

/* FUNC(zx_shps_CallbackEPR_ADD_ReferenceParameters) */

void zx_shps_CallbackEPR_ADD_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z)
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

/* FUNC(zx_shps_CallbackEPR_DEL_ReferenceParameters) */

void zx_shps_CallbackEPR_DEL_ReferenceParameters(struct zx_shps_CallbackEPR_s* x, int n)
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

/* FUNC(zx_shps_CallbackEPR_NUM_Metadata) */

int zx_shps_CallbackEPR_NUM_Metadata(struct zx_shps_CallbackEPR_s* x)
{
  struct zx_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_CallbackEPR_GET_Metadata) */

struct zx_a_Metadata_s* zx_shps_CallbackEPR_GET_Metadata(struct zx_shps_CallbackEPR_s* x, int n)
{
  struct zx_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_CallbackEPR_POP_Metadata) */

struct zx_a_Metadata_s* zx_shps_CallbackEPR_POP_Metadata(struct zx_shps_CallbackEPR_s* x)
{
  struct zx_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zx_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_CallbackEPR_PUSH_Metadata) */

void zx_shps_CallbackEPR_PUSH_Metadata(struct zx_shps_CallbackEPR_s* x, struct zx_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zx_shps_CallbackEPR_REV_Metadata) */

void zx_shps_CallbackEPR_REV_Metadata(struct zx_shps_CallbackEPR_s* x)
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

/* FUNC(zx_shps_CallbackEPR_PUT_Metadata) */

void zx_shps_CallbackEPR_PUT_Metadata(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_Metadata_s* z)
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

/* FUNC(zx_shps_CallbackEPR_ADD_Metadata) */

void zx_shps_CallbackEPR_ADD_Metadata(struct zx_shps_CallbackEPR_s* x, int n, struct zx_a_Metadata_s* z)
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

/* FUNC(zx_shps_CallbackEPR_DEL_Metadata) */

void zx_shps_CallbackEPR_DEL_Metadata(struct zx_shps_CallbackEPR_s* x, int n)
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

/* FUNC(zx_shps_CallbackEPR_GET_notOnOrAfter) */
struct zx_str* zx_shps_CallbackEPR_GET_notOnOrAfter(struct zx_shps_CallbackEPR_s* x) { return x->notOnOrAfter; }
/* FUNC(zx_shps_CallbackEPR_PUT_notOnOrAfter) */
void zx_shps_CallbackEPR_PUT_notOnOrAfter(struct zx_shps_CallbackEPR_s* x, struct zx_str* y) { x->notOnOrAfter = y; }
/* FUNC(zx_shps_CallbackEPR_GET_mustUnderstand) */
struct zx_str* zx_shps_CallbackEPR_GET_mustUnderstand(struct zx_shps_CallbackEPR_s* x) { return x->mustUnderstand; }
/* FUNC(zx_shps_CallbackEPR_PUT_mustUnderstand) */
void zx_shps_CallbackEPR_PUT_mustUnderstand(struct zx_shps_CallbackEPR_s* x, struct zx_str* y) { x->mustUnderstand = y; }
/* FUNC(zx_shps_CallbackEPR_GET_actor) */
struct zx_str* zx_shps_CallbackEPR_GET_actor(struct zx_shps_CallbackEPR_s* x) { return x->actor; }
/* FUNC(zx_shps_CallbackEPR_PUT_actor) */
void zx_shps_CallbackEPR_PUT_actor(struct zx_shps_CallbackEPR_s* x, struct zx_str* y) { x->actor = y; }
/* FUNC(zx_shps_CallbackEPR_GET_Id) */
struct zx_str* zx_shps_CallbackEPR_GET_Id(struct zx_shps_CallbackEPR_s* x) { return x->Id; }
/* FUNC(zx_shps_CallbackEPR_PUT_Id) */
void zx_shps_CallbackEPR_PUT_Id(struct zx_shps_CallbackEPR_s* x, struct zx_str* y) { x->Id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_Delete_NUM_ServiceHandle) */

int zx_shps_Delete_NUM_ServiceHandle(struct zx_shps_Delete_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_Delete_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_Delete_GET_ServiceHandle(struct zx_shps_Delete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_Delete_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_Delete_POP_ServiceHandle(struct zx_shps_Delete_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_Delete_PUSH_ServiceHandle) */

void zx_shps_Delete_PUSH_ServiceHandle(struct zx_shps_Delete_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_Delete_REV_ServiceHandle) */

void zx_shps_Delete_REV_ServiceHandle(struct zx_shps_Delete_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_Delete_PUT_ServiceHandle) */

void zx_shps_Delete_PUT_ServiceHandle(struct zx_shps_Delete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_Delete_ADD_ServiceHandle) */

void zx_shps_Delete_ADD_ServiceHandle(struct zx_shps_Delete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_Delete_DEL_ServiceHandle) */

void zx_shps_Delete_DEL_ServiceHandle(struct zx_shps_Delete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_DeleteResponse_NUM_Status) */

int zx_shps_DeleteResponse_NUM_Status(struct zx_shps_DeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_DeleteResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_DeleteResponse_GET_Status(struct zx_shps_DeleteResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_DeleteResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_DeleteResponse_POP_Status(struct zx_shps_DeleteResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_DeleteResponse_PUSH_Status) */

void zx_shps_DeleteResponse_PUSH_Status(struct zx_shps_DeleteResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_DeleteResponse_REV_Status) */

void zx_shps_DeleteResponse_REV_Status(struct zx_shps_DeleteResponse_s* x)
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

/* FUNC(zx_shps_DeleteResponse_PUT_Status) */

void zx_shps_DeleteResponse_PUT_Status(struct zx_shps_DeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_DeleteResponse_ADD_Status) */

void zx_shps_DeleteResponse_ADD_Status(struct zx_shps_DeleteResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_DeleteResponse_DEL_Status) */

void zx_shps_DeleteResponse_DEL_Status(struct zx_shps_DeleteResponse_s* x, int n)
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

/* FUNC(zx_shps_GetStatus_NUM_ServiceHandle) */

int zx_shps_GetStatus_NUM_ServiceHandle(struct zx_shps_GetStatus_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_GetStatus_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_GetStatus_GET_ServiceHandle(struct zx_shps_GetStatus_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_GetStatus_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_GetStatus_POP_ServiceHandle(struct zx_shps_GetStatus_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_GetStatus_PUSH_ServiceHandle) */

void zx_shps_GetStatus_PUSH_ServiceHandle(struct zx_shps_GetStatus_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_GetStatus_REV_ServiceHandle) */

void zx_shps_GetStatus_REV_ServiceHandle(struct zx_shps_GetStatus_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_GetStatus_PUT_ServiceHandle) */

void zx_shps_GetStatus_PUT_ServiceHandle(struct zx_shps_GetStatus_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_GetStatus_ADD_ServiceHandle) */

void zx_shps_GetStatus_ADD_ServiceHandle(struct zx_shps_GetStatus_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_GetStatus_DEL_ServiceHandle) */

void zx_shps_GetStatus_DEL_ServiceHandle(struct zx_shps_GetStatus_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_GetStatusResponse_NUM_Status) */

int zx_shps_GetStatusResponse_NUM_Status(struct zx_shps_GetStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_GetStatusResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_GetStatusResponse_GET_Status(struct zx_shps_GetStatusResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_GetStatusResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_GetStatusResponse_POP_Status(struct zx_shps_GetStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_GetStatusResponse_PUSH_Status) */

void zx_shps_GetStatusResponse_PUSH_Status(struct zx_shps_GetStatusResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_GetStatusResponse_REV_Status) */

void zx_shps_GetStatusResponse_REV_Status(struct zx_shps_GetStatusResponse_s* x)
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

/* FUNC(zx_shps_GetStatusResponse_PUT_Status) */

void zx_shps_GetStatusResponse_PUT_Status(struct zx_shps_GetStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_GetStatusResponse_ADD_Status) */

void zx_shps_GetStatusResponse_ADD_Status(struct zx_shps_GetStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_GetStatusResponse_DEL_Status) */

void zx_shps_GetStatusResponse_DEL_Status(struct zx_shps_GetStatusResponse_s* x, int n)
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

/* FUNC(zx_shps_GetStatusResponse_NUM_GetStatusResponseItem) */

int zx_shps_GetStatusResponse_NUM_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x)
{
  struct zx_shps_GetStatusResponseItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetStatusResponseItem; y; ++n, y = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_GetStatusResponse_GET_GetStatusResponseItem) */

struct zx_shps_GetStatusResponseItem_s* zx_shps_GetStatusResponse_GET_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, int n)
{
  struct zx_shps_GetStatusResponseItem_s* y;
  if (!x) return 0;
  for (y = x->GetStatusResponseItem; n>=0 && y; --n, y = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_GetStatusResponse_POP_GetStatusResponseItem) */

struct zx_shps_GetStatusResponseItem_s* zx_shps_GetStatusResponse_POP_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x)
{
  struct zx_shps_GetStatusResponseItem_s* y;
  if (!x) return 0;
  y = x->GetStatusResponseItem;
  if (y)
    x->GetStatusResponseItem = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_GetStatusResponse_PUSH_GetStatusResponseItem) */

void zx_shps_GetStatusResponse_PUSH_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, struct zx_shps_GetStatusResponseItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetStatusResponseItem->gg.g;
  x->GetStatusResponseItem = z;
}

/* FUNC(zx_shps_GetStatusResponse_REV_GetStatusResponseItem) */

void zx_shps_GetStatusResponse_REV_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x)
{
  struct zx_shps_GetStatusResponseItem_s* nxt;
  struct zx_shps_GetStatusResponseItem_s* y;
  if (!x) return;
  y = x->GetStatusResponseItem;
  if (!y) return;
  x->GetStatusResponseItem = 0;
  while (y) {
    nxt = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n;
    y->gg.g.n = &x->GetStatusResponseItem->gg.g;
    x->GetStatusResponseItem = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_GetStatusResponse_PUT_GetStatusResponseItem) */

void zx_shps_GetStatusResponse_PUT_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, int n, struct zx_shps_GetStatusResponseItem_s* z)
{
  struct zx_shps_GetStatusResponseItem_s* y;
  if (!x || !z) return;
  y = x->GetStatusResponseItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetStatusResponseItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_GetStatusResponse_ADD_GetStatusResponseItem) */

void zx_shps_GetStatusResponse_ADD_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, int n, struct zx_shps_GetStatusResponseItem_s* z)
{
  struct zx_shps_GetStatusResponseItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetStatusResponseItem->gg.g;
    x->GetStatusResponseItem = z;
    return;
  case -1:
    y = x->GetStatusResponseItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetStatusResponseItem; n > 1 && y; --n, y = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_GetStatusResponse_DEL_GetStatusResponseItem) */

void zx_shps_GetStatusResponse_DEL_GetStatusResponseItem(struct zx_shps_GetStatusResponse_s* x, int n)
{
  struct zx_shps_GetStatusResponseItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetStatusResponseItem = (struct zx_shps_GetStatusResponseItem_s*)x->GetStatusResponseItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_GetStatusResponseItem_s*)x->GetStatusResponseItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetStatusResponseItem; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_GetStatusResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_GetStatusResponseItem_NUM_ServiceHandle) */

int zx_shps_GetStatusResponseItem_NUM_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_GetStatusResponseItem_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_GetStatusResponseItem_GET_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_GetStatusResponseItem_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_GetStatusResponseItem_POP_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_GetStatusResponseItem_PUSH_ServiceHandle) */

void zx_shps_GetStatusResponseItem_PUSH_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_GetStatusResponseItem_REV_ServiceHandle) */

void zx_shps_GetStatusResponseItem_REV_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_GetStatusResponseItem_PUT_ServiceHandle) */

void zx_shps_GetStatusResponseItem_PUT_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_GetStatusResponseItem_ADD_ServiceHandle) */

void zx_shps_GetStatusResponseItem_ADD_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_GetStatusResponseItem_DEL_ServiceHandle) */

void zx_shps_GetStatusResponseItem_DEL_ServiceHandle(struct zx_shps_GetStatusResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_GetStatusResponseItem_NUM_ServiceStatus) */

int zx_shps_GetStatusResponseItem_NUM_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceStatus; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_GetStatusResponseItem_GET_ServiceStatus) */

struct zx_elem_s* zx_shps_GetStatusResponseItem_GET_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceStatus; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_GetStatusResponseItem_POP_ServiceStatus) */

struct zx_elem_s* zx_shps_GetStatusResponseItem_POP_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceStatus;
  if (y)
    x->ServiceStatus = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_GetStatusResponseItem_PUSH_ServiceStatus) */

void zx_shps_GetStatusResponseItem_PUSH_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceStatus->g;
  x->ServiceStatus = z;
}

/* FUNC(zx_shps_GetStatusResponseItem_REV_ServiceStatus) */

void zx_shps_GetStatusResponseItem_REV_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceStatus;
  if (!y) return;
  x->ServiceStatus = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceStatus->g;
    x->ServiceStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_GetStatusResponseItem_PUT_ServiceStatus) */

void zx_shps_GetStatusResponseItem_PUT_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceStatus = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_GetStatusResponseItem_ADD_ServiceStatus) */

void zx_shps_GetStatusResponseItem_ADD_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceStatus->g;
    x->ServiceStatus = z;
    return;
  case -1:
    y = x->ServiceStatus;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceStatus; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_GetStatusResponseItem_DEL_ServiceStatus) */

void zx_shps_GetStatusResponseItem_DEL_ServiceStatus(struct zx_shps_GetStatusResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceStatus = (struct zx_elem_s*)x->ServiceStatus->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceStatus;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceStatus; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_InvocationContext_NUM_InvokingProvider) */

int zx_shps_InvocationContext_NUM_InvokingProvider(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InvokingProvider; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_InvocationContext_GET_InvokingProvider) */

struct zx_elem_s* zx_shps_InvocationContext_GET_InvokingProvider(struct zx_shps_InvocationContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->InvokingProvider; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_InvocationContext_POP_InvokingProvider) */

struct zx_elem_s* zx_shps_InvocationContext_POP_InvokingProvider(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->InvokingProvider;
  if (y)
    x->InvokingProvider = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_InvocationContext_PUSH_InvokingProvider) */

void zx_shps_InvocationContext_PUSH_InvokingProvider(struct zx_shps_InvocationContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->InvokingProvider->g;
  x->InvokingProvider = z;
}

/* FUNC(zx_shps_InvocationContext_REV_InvokingProvider) */

void zx_shps_InvocationContext_REV_InvokingProvider(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->InvokingProvider;
  if (!y) return;
  x->InvokingProvider = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->InvokingProvider->g;
    x->InvokingProvider = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_InvocationContext_PUT_InvokingProvider) */

void zx_shps_InvocationContext_PUT_InvokingProvider(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->InvokingProvider;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->InvokingProvider = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_InvocationContext_ADD_InvokingProvider) */

void zx_shps_InvocationContext_ADD_InvokingProvider(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->InvokingProvider->g;
    x->InvokingProvider = z;
    return;
  case -1:
    y = x->InvokingProvider;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->InvokingProvider; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_InvocationContext_DEL_InvokingProvider) */

void zx_shps_InvocationContext_DEL_InvokingProvider(struct zx_shps_InvocationContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InvokingProvider = (struct zx_elem_s*)x->InvokingProvider->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->InvokingProvider;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->InvokingProvider; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_InvocationContext_NUM_InvokingPrincipal) */

int zx_shps_InvocationContext_NUM_InvokingPrincipal(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InvokingPrincipal; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_InvocationContext_GET_InvokingPrincipal) */

struct zx_elem_s* zx_shps_InvocationContext_GET_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->InvokingPrincipal; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_InvocationContext_POP_InvokingPrincipal) */

struct zx_elem_s* zx_shps_InvocationContext_POP_InvokingPrincipal(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->InvokingPrincipal;
  if (y)
    x->InvokingPrincipal = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_InvocationContext_PUSH_InvokingPrincipal) */

void zx_shps_InvocationContext_PUSH_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->InvokingPrincipal->g;
  x->InvokingPrincipal = z;
}

/* FUNC(zx_shps_InvocationContext_REV_InvokingPrincipal) */

void zx_shps_InvocationContext_REV_InvokingPrincipal(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->InvokingPrincipal;
  if (!y) return;
  x->InvokingPrincipal = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->InvokingPrincipal->g;
    x->InvokingPrincipal = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_InvocationContext_PUT_InvokingPrincipal) */

void zx_shps_InvocationContext_PUT_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->InvokingPrincipal;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->InvokingPrincipal = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_InvocationContext_ADD_InvokingPrincipal) */

void zx_shps_InvocationContext_ADD_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->InvokingPrincipal->g;
    x->InvokingPrincipal = z;
    return;
  case -1:
    y = x->InvokingPrincipal;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->InvokingPrincipal; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_InvocationContext_DEL_InvokingPrincipal) */

void zx_shps_InvocationContext_DEL_InvokingPrincipal(struct zx_shps_InvocationContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InvokingPrincipal = (struct zx_elem_s*)x->InvokingPrincipal->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->InvokingPrincipal;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->InvokingPrincipal; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_InvocationContext_NUM_SecurityMechID) */

int zx_shps_InvocationContext_NUM_SecurityMechID(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_InvocationContext_GET_SecurityMechID) */

struct zx_elem_s* zx_shps_InvocationContext_GET_SecurityMechID(struct zx_shps_InvocationContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_InvocationContext_POP_SecurityMechID) */

struct zx_elem_s* zx_shps_InvocationContext_POP_SecurityMechID(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_InvocationContext_PUSH_SecurityMechID) */

void zx_shps_InvocationContext_PUSH_SecurityMechID(struct zx_shps_InvocationContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_shps_InvocationContext_REV_SecurityMechID) */

void zx_shps_InvocationContext_REV_SecurityMechID(struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SecurityMechID;
  if (!y) return;
  x->SecurityMechID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_InvocationContext_PUT_SecurityMechID) */

void zx_shps_InvocationContext_PUT_SecurityMechID(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SecurityMechID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SecurityMechID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_InvocationContext_ADD_SecurityMechID) */

void zx_shps_InvocationContext_ADD_SecurityMechID(struct zx_shps_InvocationContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = z;
    return;
  case -1:
    y = x->SecurityMechID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_InvocationContext_DEL_SecurityMechID) */

void zx_shps_InvocationContext_DEL_SecurityMechID(struct zx_shps_InvocationContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityMechID = (struct zx_elem_s*)x->SecurityMechID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SecurityMechID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_InvokeItem_NUM_ServiceHandle) */

int zx_shps_InvokeItem_NUM_ServiceHandle(struct zx_shps_InvokeItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_InvokeItem_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_InvokeItem_GET_ServiceHandle(struct zx_shps_InvokeItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_InvokeItem_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_InvokeItem_POP_ServiceHandle(struct zx_shps_InvokeItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_InvokeItem_PUSH_ServiceHandle) */

void zx_shps_InvokeItem_PUSH_ServiceHandle(struct zx_shps_InvokeItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_InvokeItem_REV_ServiceHandle) */

void zx_shps_InvokeItem_REV_ServiceHandle(struct zx_shps_InvokeItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_InvokeItem_PUT_ServiceHandle) */

void zx_shps_InvokeItem_PUT_ServiceHandle(struct zx_shps_InvokeItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_InvokeItem_ADD_ServiceHandle) */

void zx_shps_InvokeItem_ADD_ServiceHandle(struct zx_shps_InvokeItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_InvokeItem_DEL_ServiceHandle) */

void zx_shps_InvokeItem_DEL_ServiceHandle(struct zx_shps_InvokeItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_shps_InvokeItem_GET_itemID) */
struct zx_str* zx_shps_InvokeItem_GET_itemID(struct zx_shps_InvokeItem_s* x) { return x->itemID; }
/* FUNC(zx_shps_InvokeItem_PUT_itemID) */
void zx_shps_InvokeItem_PUT_itemID(struct zx_shps_InvokeItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_InvokeResponse_NUM_Status) */

int zx_shps_InvokeResponse_NUM_Status(struct zx_shps_InvokeResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_InvokeResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_InvokeResponse_GET_Status(struct zx_shps_InvokeResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_InvokeResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_InvokeResponse_POP_Status(struct zx_shps_InvokeResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_InvokeResponse_PUSH_Status) */

void zx_shps_InvokeResponse_PUSH_Status(struct zx_shps_InvokeResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_InvokeResponse_REV_Status) */

void zx_shps_InvokeResponse_REV_Status(struct zx_shps_InvokeResponse_s* x)
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

/* FUNC(zx_shps_InvokeResponse_PUT_Status) */

void zx_shps_InvokeResponse_PUT_Status(struct zx_shps_InvokeResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_InvokeResponse_ADD_Status) */

void zx_shps_InvokeResponse_ADD_Status(struct zx_shps_InvokeResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_InvokeResponse_DEL_Status) */

void zx_shps_InvokeResponse_DEL_Status(struct zx_shps_InvokeResponse_s* x, int n)
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

/* FUNC(zx_shps_InvokeResponse_NUM_InvokeResponseItem) */

int zx_shps_InvokeResponse_NUM_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x)
{
  struct zx_shps_InvokeResponseItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InvokeResponseItem; y; ++n, y = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_InvokeResponse_GET_InvokeResponseItem) */

struct zx_shps_InvokeResponseItem_s* zx_shps_InvokeResponse_GET_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, int n)
{
  struct zx_shps_InvokeResponseItem_s* y;
  if (!x) return 0;
  for (y = x->InvokeResponseItem; n>=0 && y; --n, y = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_InvokeResponse_POP_InvokeResponseItem) */

struct zx_shps_InvokeResponseItem_s* zx_shps_InvokeResponse_POP_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x)
{
  struct zx_shps_InvokeResponseItem_s* y;
  if (!x) return 0;
  y = x->InvokeResponseItem;
  if (y)
    x->InvokeResponseItem = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_InvokeResponse_PUSH_InvokeResponseItem) */

void zx_shps_InvokeResponse_PUSH_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, struct zx_shps_InvokeResponseItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InvokeResponseItem->gg.g;
  x->InvokeResponseItem = z;
}

/* FUNC(zx_shps_InvokeResponse_REV_InvokeResponseItem) */

void zx_shps_InvokeResponse_REV_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x)
{
  struct zx_shps_InvokeResponseItem_s* nxt;
  struct zx_shps_InvokeResponseItem_s* y;
  if (!x) return;
  y = x->InvokeResponseItem;
  if (!y) return;
  x->InvokeResponseItem = 0;
  while (y) {
    nxt = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n;
    y->gg.g.n = &x->InvokeResponseItem->gg.g;
    x->InvokeResponseItem = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_InvokeResponse_PUT_InvokeResponseItem) */

void zx_shps_InvokeResponse_PUT_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, int n, struct zx_shps_InvokeResponseItem_s* z)
{
  struct zx_shps_InvokeResponseItem_s* y;
  if (!x || !z) return;
  y = x->InvokeResponseItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InvokeResponseItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_InvokeResponse_ADD_InvokeResponseItem) */

void zx_shps_InvokeResponse_ADD_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, int n, struct zx_shps_InvokeResponseItem_s* z)
{
  struct zx_shps_InvokeResponseItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->InvokeResponseItem->gg.g;
    x->InvokeResponseItem = z;
    return;
  case -1:
    y = x->InvokeResponseItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InvokeResponseItem; n > 1 && y; --n, y = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_InvokeResponse_DEL_InvokeResponseItem) */

void zx_shps_InvokeResponse_DEL_InvokeResponseItem(struct zx_shps_InvokeResponse_s* x, int n)
{
  struct zx_shps_InvokeResponseItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InvokeResponseItem = (struct zx_shps_InvokeResponseItem_s*)x->InvokeResponseItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_InvokeResponseItem_s*)x->InvokeResponseItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InvokeResponseItem; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_InvokeResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_shps_InvokeResponseItem_GET_ref) */
struct zx_str* zx_shps_InvokeResponseItem_GET_ref(struct zx_shps_InvokeResponseItem_s* x) { return x->ref; }
/* FUNC(zx_shps_InvokeResponseItem_PUT_ref) */
void zx_shps_InvokeResponseItem_PUT_ref(struct zx_shps_InvokeResponseItem_s* x, struct zx_str* y) { x->ref = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_Poll_NUM_Action) */

int zx_shps_Poll_NUM_Action(struct zx_shps_Poll_s* x)
{
  struct zx_a_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_Poll_GET_Action) */

struct zx_a_Action_s* zx_shps_Poll_GET_Action(struct zx_shps_Poll_s* x, int n)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_Poll_POP_Action) */

struct zx_a_Action_s* zx_shps_Poll_POP_Action(struct zx_shps_Poll_s* x)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_a_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_Poll_PUSH_Action) */

void zx_shps_Poll_PUSH_Action(struct zx_shps_Poll_s* x, struct zx_a_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_shps_Poll_REV_Action) */

void zx_shps_Poll_REV_Action(struct zx_shps_Poll_s* x)
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

/* FUNC(zx_shps_Poll_PUT_Action) */

void zx_shps_Poll_PUT_Action(struct zx_shps_Poll_s* x, int n, struct zx_a_Action_s* z)
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

/* FUNC(zx_shps_Poll_ADD_Action) */

void zx_shps_Poll_ADD_Action(struct zx_shps_Poll_s* x, int n, struct zx_a_Action_s* z)
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

/* FUNC(zx_shps_Poll_DEL_Action) */

void zx_shps_Poll_DEL_Action(struct zx_shps_Poll_s* x, int n)
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

/* FUNC(zx_shps_Poll_NUM_Response) */

int zx_shps_Poll_NUM_Response(struct zx_shps_Poll_s* x)
{
  struct zx_dp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_dp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_Poll_GET_Response) */

struct zx_dp_Response_s* zx_shps_Poll_GET_Response(struct zx_shps_Poll_s* x, int n)
{
  struct zx_dp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_dp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_Poll_POP_Response) */

struct zx_dp_Response_s* zx_shps_Poll_POP_Response(struct zx_shps_Poll_s* x)
{
  struct zx_dp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_dp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_Poll_PUSH_Response) */

void zx_shps_Poll_PUSH_Response(struct zx_shps_Poll_s* x, struct zx_dp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_shps_Poll_REV_Response) */

void zx_shps_Poll_REV_Response(struct zx_shps_Poll_s* x)
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

/* FUNC(zx_shps_Poll_PUT_Response) */

void zx_shps_Poll_PUT_Response(struct zx_shps_Poll_s* x, int n, struct zx_dp_Response_s* z)
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

/* FUNC(zx_shps_Poll_ADD_Response) */

void zx_shps_Poll_ADD_Response(struct zx_shps_Poll_s* x, int n, struct zx_dp_Response_s* z)
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

/* FUNC(zx_shps_Poll_DEL_Response) */

void zx_shps_Poll_DEL_Response(struct zx_shps_Poll_s* x, int n)
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

/* FUNC(zx_shps_Poll_GET_wait) */
struct zx_str* zx_shps_Poll_GET_wait(struct zx_shps_Poll_s* x) { return x->wait; }
/* FUNC(zx_shps_Poll_PUT_wait) */
void zx_shps_Poll_PUT_wait(struct zx_shps_Poll_s* x, struct zx_str* y) { x->wait = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_PollResponse_NUM_Request) */

int zx_shps_PollResponse_NUM_Request(struct zx_shps_PollResponse_s* x)
{
  struct zx_dp_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Request; y; ++n, y = (struct zx_dp_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_PollResponse_GET_Request) */

struct zx_dp_Request_s* zx_shps_PollResponse_GET_Request(struct zx_shps_PollResponse_s* x, int n)
{
  struct zx_dp_Request_s* y;
  if (!x) return 0;
  for (y = x->Request; n>=0 && y; --n, y = (struct zx_dp_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_PollResponse_POP_Request) */

struct zx_dp_Request_s* zx_shps_PollResponse_POP_Request(struct zx_shps_PollResponse_s* x)
{
  struct zx_dp_Request_s* y;
  if (!x) return 0;
  y = x->Request;
  if (y)
    x->Request = (struct zx_dp_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_PollResponse_PUSH_Request) */

void zx_shps_PollResponse_PUSH_Request(struct zx_shps_PollResponse_s* x, struct zx_dp_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Request->gg.g;
  x->Request = z;
}

/* FUNC(zx_shps_PollResponse_REV_Request) */

void zx_shps_PollResponse_REV_Request(struct zx_shps_PollResponse_s* x)
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

/* FUNC(zx_shps_PollResponse_PUT_Request) */

void zx_shps_PollResponse_PUT_Request(struct zx_shps_PollResponse_s* x, int n, struct zx_dp_Request_s* z)
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

/* FUNC(zx_shps_PollResponse_ADD_Request) */

void zx_shps_PollResponse_ADD_Request(struct zx_shps_PollResponse_s* x, int n, struct zx_dp_Request_s* z)
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

/* FUNC(zx_shps_PollResponse_DEL_Request) */

void zx_shps_PollResponse_DEL_Request(struct zx_shps_PollResponse_s* x, int n)
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

/* FUNC(zx_shps_PollResponse_GET_nextPoll) */
struct zx_str* zx_shps_PollResponse_GET_nextPoll(struct zx_shps_PollResponse_s* x) { return x->nextPoll; }
/* FUNC(zx_shps_PollResponse_PUT_nextPoll) */
void zx_shps_PollResponse_PUT_nextPoll(struct zx_shps_PollResponse_s* x, struct zx_str* y) { x->nextPoll = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_ProxyInvoke_NUM_ProxyInvokeItem) */

int zx_shps_ProxyInvoke_NUM_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x)
{
  struct zx_shps_ProxyInvokeItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxyInvokeItem; y; ++n, y = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_ProxyInvoke_GET_ProxyInvokeItem) */

struct zx_shps_ProxyInvokeItem_s* zx_shps_ProxyInvoke_GET_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, int n)
{
  struct zx_shps_ProxyInvokeItem_s* y;
  if (!x) return 0;
  for (y = x->ProxyInvokeItem; n>=0 && y; --n, y = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_ProxyInvoke_POP_ProxyInvokeItem) */

struct zx_shps_ProxyInvokeItem_s* zx_shps_ProxyInvoke_POP_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x)
{
  struct zx_shps_ProxyInvokeItem_s* y;
  if (!x) return 0;
  y = x->ProxyInvokeItem;
  if (y)
    x->ProxyInvokeItem = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_ProxyInvoke_PUSH_ProxyInvokeItem) */

void zx_shps_ProxyInvoke_PUSH_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, struct zx_shps_ProxyInvokeItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProxyInvokeItem->gg.g;
  x->ProxyInvokeItem = z;
}

/* FUNC(zx_shps_ProxyInvoke_REV_ProxyInvokeItem) */

void zx_shps_ProxyInvoke_REV_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x)
{
  struct zx_shps_ProxyInvokeItem_s* nxt;
  struct zx_shps_ProxyInvokeItem_s* y;
  if (!x) return;
  y = x->ProxyInvokeItem;
  if (!y) return;
  x->ProxyInvokeItem = 0;
  while (y) {
    nxt = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n;
    y->gg.g.n = &x->ProxyInvokeItem->gg.g;
    x->ProxyInvokeItem = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_ProxyInvoke_PUT_ProxyInvokeItem) */

void zx_shps_ProxyInvoke_PUT_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, int n, struct zx_shps_ProxyInvokeItem_s* z)
{
  struct zx_shps_ProxyInvokeItem_s* y;
  if (!x || !z) return;
  y = x->ProxyInvokeItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProxyInvokeItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_ProxyInvoke_ADD_ProxyInvokeItem) */

void zx_shps_ProxyInvoke_ADD_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, int n, struct zx_shps_ProxyInvokeItem_s* z)
{
  struct zx_shps_ProxyInvokeItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProxyInvokeItem->gg.g;
    x->ProxyInvokeItem = z;
    return;
  case -1:
    y = x->ProxyInvokeItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyInvokeItem; n > 1 && y; --n, y = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_ProxyInvoke_DEL_ProxyInvokeItem) */

void zx_shps_ProxyInvoke_DEL_ProxyInvokeItem(struct zx_shps_ProxyInvoke_s* x, int n)
{
  struct zx_shps_ProxyInvokeItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxyInvokeItem = (struct zx_shps_ProxyInvokeItem_s*)x->ProxyInvokeItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_ProxyInvokeItem_s*)x->ProxyInvokeItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyInvokeItem; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_ProxyInvokeItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_ProxyInvokeItem_NUM_ServiceHandle) */

int zx_shps_ProxyInvokeItem_NUM_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_ProxyInvokeItem_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_ProxyInvokeItem_GET_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeItem_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_ProxyInvokeItem_POP_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeItem_PUSH_ServiceHandle) */

void zx_shps_ProxyInvokeItem_PUSH_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_ProxyInvokeItem_REV_ServiceHandle) */

void zx_shps_ProxyInvokeItem_REV_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_ProxyInvokeItem_PUT_ServiceHandle) */

void zx_shps_ProxyInvokeItem_PUT_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_ProxyInvokeItem_ADD_ServiceHandle) */

void zx_shps_ProxyInvokeItem_ADD_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_ProxyInvokeItem_DEL_ServiceHandle) */

void zx_shps_ProxyInvokeItem_DEL_ServiceHandle(struct zx_shps_ProxyInvokeItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_ProxyInvokeItem_NUM_InvocationContext) */

int zx_shps_ProxyInvokeItem_NUM_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_shps_InvocationContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InvocationContext; y; ++n, y = (struct zx_shps_InvocationContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_ProxyInvokeItem_GET_InvocationContext) */

struct zx_shps_InvocationContext_s* zx_shps_ProxyInvokeItem_GET_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, int n)
{
  struct zx_shps_InvocationContext_s* y;
  if (!x) return 0;
  for (y = x->InvocationContext; n>=0 && y; --n, y = (struct zx_shps_InvocationContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeItem_POP_InvocationContext) */

struct zx_shps_InvocationContext_s* zx_shps_ProxyInvokeItem_POP_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_shps_InvocationContext_s* y;
  if (!x) return 0;
  y = x->InvocationContext;
  if (y)
    x->InvocationContext = (struct zx_shps_InvocationContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeItem_PUSH_InvocationContext) */

void zx_shps_ProxyInvokeItem_PUSH_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, struct zx_shps_InvocationContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InvocationContext->gg.g;
  x->InvocationContext = z;
}

/* FUNC(zx_shps_ProxyInvokeItem_REV_InvocationContext) */

void zx_shps_ProxyInvokeItem_REV_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_shps_InvocationContext_s* nxt;
  struct zx_shps_InvocationContext_s* y;
  if (!x) return;
  y = x->InvocationContext;
  if (!y) return;
  x->InvocationContext = 0;
  while (y) {
    nxt = (struct zx_shps_InvocationContext_s*)y->gg.g.n;
    y->gg.g.n = &x->InvocationContext->gg.g;
    x->InvocationContext = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_ProxyInvokeItem_PUT_InvocationContext) */

void zx_shps_ProxyInvokeItem_PUT_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_shps_InvocationContext_s* z)
{
  struct zx_shps_InvocationContext_s* y;
  if (!x || !z) return;
  y = x->InvocationContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InvocationContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_InvocationContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_ProxyInvokeItem_ADD_InvocationContext) */

void zx_shps_ProxyInvokeItem_ADD_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_shps_InvocationContext_s* z)
{
  struct zx_shps_InvocationContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->InvocationContext->gg.g;
    x->InvocationContext = z;
    return;
  case -1:
    y = x->InvocationContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_InvocationContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InvocationContext; n > 1 && y; --n, y = (struct zx_shps_InvocationContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_ProxyInvokeItem_DEL_InvocationContext) */

void zx_shps_ProxyInvokeItem_DEL_InvocationContext(struct zx_shps_ProxyInvokeItem_s* x, int n)
{
  struct zx_shps_InvocationContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InvocationContext = (struct zx_shps_InvocationContext_s*)x->InvocationContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_InvocationContext_s*)x->InvocationContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_InvocationContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InvocationContext; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_InvocationContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_ProxyInvokeItem_NUM_RequestHeaders) */

int zx_shps_ProxyInvokeItem_NUM_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestHeaders; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_ProxyInvokeItem_GET_RequestHeaders) */

struct zx_elem_s* zx_shps_ProxyInvokeItem_GET_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RequestHeaders; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeItem_POP_RequestHeaders) */

struct zx_elem_s* zx_shps_ProxyInvokeItem_POP_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RequestHeaders;
  if (y)
    x->RequestHeaders = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeItem_PUSH_RequestHeaders) */

void zx_shps_ProxyInvokeItem_PUSH_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RequestHeaders->g;
  x->RequestHeaders = z;
}

/* FUNC(zx_shps_ProxyInvokeItem_REV_RequestHeaders) */

void zx_shps_ProxyInvokeItem_REV_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RequestHeaders;
  if (!y) return;
  x->RequestHeaders = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RequestHeaders->g;
    x->RequestHeaders = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_ProxyInvokeItem_PUT_RequestHeaders) */

void zx_shps_ProxyInvokeItem_PUT_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RequestHeaders;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RequestHeaders = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_ProxyInvokeItem_ADD_RequestHeaders) */

void zx_shps_ProxyInvokeItem_ADD_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RequestHeaders->g;
    x->RequestHeaders = z;
    return;
  case -1:
    y = x->RequestHeaders;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestHeaders; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_ProxyInvokeItem_DEL_RequestHeaders) */

void zx_shps_ProxyInvokeItem_DEL_RequestHeaders(struct zx_shps_ProxyInvokeItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestHeaders = (struct zx_elem_s*)x->RequestHeaders->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RequestHeaders;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestHeaders; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_shps_ProxyInvokeItem_GET_itemID) */
struct zx_str* zx_shps_ProxyInvokeItem_GET_itemID(struct zx_shps_ProxyInvokeItem_s* x) { return x->itemID; }
/* FUNC(zx_shps_ProxyInvokeItem_PUT_itemID) */
void zx_shps_ProxyInvokeItem_PUT_itemID(struct zx_shps_ProxyInvokeItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_ProxyInvokeResponse_NUM_Status) */

int zx_shps_ProxyInvokeResponse_NUM_Status(struct zx_shps_ProxyInvokeResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_ProxyInvokeResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_ProxyInvokeResponse_GET_Status(struct zx_shps_ProxyInvokeResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_ProxyInvokeResponse_POP_Status(struct zx_shps_ProxyInvokeResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeResponse_PUSH_Status) */

void zx_shps_ProxyInvokeResponse_PUSH_Status(struct zx_shps_ProxyInvokeResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_ProxyInvokeResponse_REV_Status) */

void zx_shps_ProxyInvokeResponse_REV_Status(struct zx_shps_ProxyInvokeResponse_s* x)
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

/* FUNC(zx_shps_ProxyInvokeResponse_PUT_Status) */

void zx_shps_ProxyInvokeResponse_PUT_Status(struct zx_shps_ProxyInvokeResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_ProxyInvokeResponse_ADD_Status) */

void zx_shps_ProxyInvokeResponse_ADD_Status(struct zx_shps_ProxyInvokeResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_ProxyInvokeResponse_DEL_Status) */

void zx_shps_ProxyInvokeResponse_DEL_Status(struct zx_shps_ProxyInvokeResponse_s* x, int n)
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

/* FUNC(zx_shps_ProxyInvokeResponse_NUM_ProxyInvokeResponseItem) */

int zx_shps_ProxyInvokeResponse_NUM_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x)
{
  struct zx_shps_ProxyInvokeResponseItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxyInvokeResponseItem; y; ++n, y = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_ProxyInvokeResponse_GET_ProxyInvokeResponseItem) */

struct zx_shps_ProxyInvokeResponseItem_s* zx_shps_ProxyInvokeResponse_GET_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, int n)
{
  struct zx_shps_ProxyInvokeResponseItem_s* y;
  if (!x) return 0;
  for (y = x->ProxyInvokeResponseItem; n>=0 && y; --n, y = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeResponse_POP_ProxyInvokeResponseItem) */

struct zx_shps_ProxyInvokeResponseItem_s* zx_shps_ProxyInvokeResponse_POP_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x)
{
  struct zx_shps_ProxyInvokeResponseItem_s* y;
  if (!x) return 0;
  y = x->ProxyInvokeResponseItem;
  if (y)
    x->ProxyInvokeResponseItem = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeResponse_PUSH_ProxyInvokeResponseItem) */

void zx_shps_ProxyInvokeResponse_PUSH_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, struct zx_shps_ProxyInvokeResponseItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProxyInvokeResponseItem->gg.g;
  x->ProxyInvokeResponseItem = z;
}

/* FUNC(zx_shps_ProxyInvokeResponse_REV_ProxyInvokeResponseItem) */

void zx_shps_ProxyInvokeResponse_REV_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x)
{
  struct zx_shps_ProxyInvokeResponseItem_s* nxt;
  struct zx_shps_ProxyInvokeResponseItem_s* y;
  if (!x) return;
  y = x->ProxyInvokeResponseItem;
  if (!y) return;
  x->ProxyInvokeResponseItem = 0;
  while (y) {
    nxt = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n;
    y->gg.g.n = &x->ProxyInvokeResponseItem->gg.g;
    x->ProxyInvokeResponseItem = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_ProxyInvokeResponse_PUT_ProxyInvokeResponseItem) */

void zx_shps_ProxyInvokeResponse_PUT_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, int n, struct zx_shps_ProxyInvokeResponseItem_s* z)
{
  struct zx_shps_ProxyInvokeResponseItem_s* y;
  if (!x || !z) return;
  y = x->ProxyInvokeResponseItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProxyInvokeResponseItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_ProxyInvokeResponse_ADD_ProxyInvokeResponseItem) */

void zx_shps_ProxyInvokeResponse_ADD_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, int n, struct zx_shps_ProxyInvokeResponseItem_s* z)
{
  struct zx_shps_ProxyInvokeResponseItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProxyInvokeResponseItem->gg.g;
    x->ProxyInvokeResponseItem = z;
    return;
  case -1:
    y = x->ProxyInvokeResponseItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyInvokeResponseItem; n > 1 && y; --n, y = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_ProxyInvokeResponse_DEL_ProxyInvokeResponseItem) */

void zx_shps_ProxyInvokeResponse_DEL_ProxyInvokeResponseItem(struct zx_shps_ProxyInvokeResponse_s* x, int n)
{
  struct zx_shps_ProxyInvokeResponseItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxyInvokeResponseItem = (struct zx_shps_ProxyInvokeResponseItem_s*)x->ProxyInvokeResponseItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_ProxyInvokeResponseItem_s*)x->ProxyInvokeResponseItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyInvokeResponseItem; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_ProxyInvokeResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_ProxyInvokeResponseItem_NUM_ServiceHandle) */

int zx_shps_ProxyInvokeResponseItem_NUM_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_ProxyInvokeResponseItem_GET_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_ProxyInvokeResponseItem_POP_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_PUSH_ServiceHandle) */

void zx_shps_ProxyInvokeResponseItem_PUSH_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_REV_ServiceHandle) */

void zx_shps_ProxyInvokeResponseItem_REV_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_PUT_ServiceHandle) */

void zx_shps_ProxyInvokeResponseItem_PUT_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_ADD_ServiceHandle) */

void zx_shps_ProxyInvokeResponseItem_ADD_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_DEL_ServiceHandle) */

void zx_shps_ProxyInvokeResponseItem_DEL_ServiceHandle(struct zx_shps_ProxyInvokeResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_ProxyInvokeResponseItem_NUM_ResponseHeaders) */

int zx_shps_ProxyInvokeResponseItem_NUM_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResponseHeaders; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_GET_ResponseHeaders) */

struct zx_elem_s* zx_shps_ProxyInvokeResponseItem_GET_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ResponseHeaders; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_POP_ResponseHeaders) */

struct zx_elem_s* zx_shps_ProxyInvokeResponseItem_POP_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ResponseHeaders;
  if (y)
    x->ResponseHeaders = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_PUSH_ResponseHeaders) */

void zx_shps_ProxyInvokeResponseItem_PUSH_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ResponseHeaders->g;
  x->ResponseHeaders = z;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_REV_ResponseHeaders) */

void zx_shps_ProxyInvokeResponseItem_REV_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ResponseHeaders;
  if (!y) return;
  x->ResponseHeaders = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ResponseHeaders->g;
    x->ResponseHeaders = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_PUT_ResponseHeaders) */

void zx_shps_ProxyInvokeResponseItem_PUT_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ResponseHeaders;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ResponseHeaders = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_ADD_ResponseHeaders) */

void zx_shps_ProxyInvokeResponseItem_ADD_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ResponseHeaders->g;
    x->ResponseHeaders = z;
    return;
  case -1:
    y = x->ResponseHeaders;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ResponseHeaders; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_ProxyInvokeResponseItem_DEL_ResponseHeaders) */

void zx_shps_ProxyInvokeResponseItem_DEL_ResponseHeaders(struct zx_shps_ProxyInvokeResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResponseHeaders = (struct zx_elem_s*)x->ResponseHeaders->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ResponseHeaders;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ResponseHeaders; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_shps_ProxyInvokeResponseItem_GET_ref) */
struct zx_str* zx_shps_ProxyInvokeResponseItem_GET_ref(struct zx_shps_ProxyInvokeResponseItem_s* x) { return x->ref; }
/* FUNC(zx_shps_ProxyInvokeResponseItem_PUT_ref) */
void zx_shps_ProxyInvokeResponseItem_PUT_ref(struct zx_shps_ProxyInvokeResponseItem_s* x, struct zx_str* y) { x->ref = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_Query_NUM_RequestedService) */

int zx_shps_Query_NUM_RequestedService(struct zx_shps_Query_s* x)
{
  struct zx_di_RequestedService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedService; y; ++n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_Query_GET_RequestedService) */

struct zx_di_RequestedService_s* zx_shps_Query_GET_RequestedService(struct zx_shps_Query_s* x, int n)
{
  struct zx_di_RequestedService_s* y;
  if (!x) return 0;
  for (y = x->RequestedService; n>=0 && y; --n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_Query_POP_RequestedService) */

struct zx_di_RequestedService_s* zx_shps_Query_POP_RequestedService(struct zx_shps_Query_s* x)
{
  struct zx_di_RequestedService_s* y;
  if (!x) return 0;
  y = x->RequestedService;
  if (y)
    x->RequestedService = (struct zx_di_RequestedService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_Query_PUSH_RequestedService) */

void zx_shps_Query_PUSH_RequestedService(struct zx_shps_Query_s* x, struct zx_di_RequestedService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedService->gg.g;
  x->RequestedService = z;
}

/* FUNC(zx_shps_Query_REV_RequestedService) */

void zx_shps_Query_REV_RequestedService(struct zx_shps_Query_s* x)
{
  struct zx_di_RequestedService_s* nxt;
  struct zx_di_RequestedService_s* y;
  if (!x) return;
  y = x->RequestedService;
  if (!y) return;
  x->RequestedService = 0;
  while (y) {
    nxt = (struct zx_di_RequestedService_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedService->gg.g;
    x->RequestedService = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_Query_PUT_RequestedService) */

void zx_shps_Query_PUT_RequestedService(struct zx_shps_Query_s* x, int n, struct zx_di_RequestedService_s* z)
{
  struct zx_di_RequestedService_s* y;
  if (!x || !z) return;
  y = x->RequestedService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_Query_ADD_RequestedService) */

void zx_shps_Query_ADD_RequestedService(struct zx_shps_Query_s* x, int n, struct zx_di_RequestedService_s* z)
{
  struct zx_di_RequestedService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedService->gg.g;
    x->RequestedService = z;
    return;
  case -1:
    y = x->RequestedService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedService; n > 1 && y; --n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_Query_DEL_RequestedService) */

void zx_shps_Query_DEL_RequestedService(struct zx_shps_Query_s* x, int n)
{
  struct zx_di_RequestedService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedService = (struct zx_di_RequestedService_s*)x->RequestedService->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_RequestedService_s*)x->RequestedService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedService; n > 1 && y->gg.g.n; --n, y = (struct zx_di_RequestedService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_QueryRegistered_NUM_ServiceHandle) */

int zx_shps_QueryRegistered_NUM_ServiceHandle(struct zx_shps_QueryRegistered_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_QueryRegistered_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_QueryRegistered_GET_ServiceHandle(struct zx_shps_QueryRegistered_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_QueryRegistered_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_QueryRegistered_POP_ServiceHandle(struct zx_shps_QueryRegistered_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_QueryRegistered_PUSH_ServiceHandle) */

void zx_shps_QueryRegistered_PUSH_ServiceHandle(struct zx_shps_QueryRegistered_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_QueryRegistered_REV_ServiceHandle) */

void zx_shps_QueryRegistered_REV_ServiceHandle(struct zx_shps_QueryRegistered_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_QueryRegistered_PUT_ServiceHandle) */

void zx_shps_QueryRegistered_PUT_ServiceHandle(struct zx_shps_QueryRegistered_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_QueryRegistered_ADD_ServiceHandle) */

void zx_shps_QueryRegistered_ADD_ServiceHandle(struct zx_shps_QueryRegistered_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_QueryRegistered_DEL_ServiceHandle) */

void zx_shps_QueryRegistered_DEL_ServiceHandle(struct zx_shps_QueryRegistered_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_QueryRegisteredResponse_NUM_Status) */

int zx_shps_QueryRegisteredResponse_NUM_Status(struct zx_shps_QueryRegisteredResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_QueryRegisteredResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_QueryRegisteredResponse_GET_Status(struct zx_shps_QueryRegisteredResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_QueryRegisteredResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_QueryRegisteredResponse_POP_Status(struct zx_shps_QueryRegisteredResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_QueryRegisteredResponse_PUSH_Status) */

void zx_shps_QueryRegisteredResponse_PUSH_Status(struct zx_shps_QueryRegisteredResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_QueryRegisteredResponse_REV_Status) */

void zx_shps_QueryRegisteredResponse_REV_Status(struct zx_shps_QueryRegisteredResponse_s* x)
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

/* FUNC(zx_shps_QueryRegisteredResponse_PUT_Status) */

void zx_shps_QueryRegisteredResponse_PUT_Status(struct zx_shps_QueryRegisteredResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_QueryRegisteredResponse_ADD_Status) */

void zx_shps_QueryRegisteredResponse_ADD_Status(struct zx_shps_QueryRegisteredResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_QueryRegisteredResponse_DEL_Status) */

void zx_shps_QueryRegisteredResponse_DEL_Status(struct zx_shps_QueryRegisteredResponse_s* x, int n)
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

/* FUNC(zx_shps_QueryRegisteredResponse_NUM_EndpointReference) */

int zx_shps_QueryRegisteredResponse_NUM_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x)
{
  struct zx_a_EndpointReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointReference; y; ++n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_QueryRegisteredResponse_GET_EndpointReference) */

struct zx_a_EndpointReference_s* zx_shps_QueryRegisteredResponse_GET_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  for (y = x->EndpointReference; n>=0 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_QueryRegisteredResponse_POP_EndpointReference) */

struct zx_a_EndpointReference_s* zx_shps_QueryRegisteredResponse_POP_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  y = x->EndpointReference;
  if (y)
    x->EndpointReference = (struct zx_a_EndpointReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_QueryRegisteredResponse_PUSH_EndpointReference) */

void zx_shps_QueryRegisteredResponse_PUSH_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, struct zx_a_EndpointReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointReference->gg.g;
  x->EndpointReference = z;
}

/* FUNC(zx_shps_QueryRegisteredResponse_REV_EndpointReference) */

void zx_shps_QueryRegisteredResponse_REV_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x)
{
  struct zx_a_EndpointReference_s* nxt;
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  y = x->EndpointReference;
  if (!y) return;
  x->EndpointReference = 0;
  while (y) {
    nxt = (struct zx_a_EndpointReference_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_QueryRegisteredResponse_PUT_EndpointReference) */

void zx_shps_QueryRegisteredResponse_PUT_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  y = x->EndpointReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_QueryRegisteredResponse_ADD_EndpointReference) */

void zx_shps_QueryRegisteredResponse_ADD_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = z;
    return;
  case -1:
    y = x->EndpointReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_QueryRegisteredResponse_DEL_EndpointReference) */

void zx_shps_QueryRegisteredResponse_DEL_EndpointReference(struct zx_shps_QueryRegisteredResponse_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointReference = (struct zx_a_EndpointReference_s*)x->EndpointReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_EndpointReference_s*)x->EndpointReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_QueryResponse_NUM_Status) */

int zx_shps_QueryResponse_NUM_Status(struct zx_shps_QueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_QueryResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_QueryResponse_GET_Status(struct zx_shps_QueryResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_QueryResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_QueryResponse_POP_Status(struct zx_shps_QueryResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_QueryResponse_PUSH_Status) */

void zx_shps_QueryResponse_PUSH_Status(struct zx_shps_QueryResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_QueryResponse_REV_Status) */

void zx_shps_QueryResponse_REV_Status(struct zx_shps_QueryResponse_s* x)
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

/* FUNC(zx_shps_QueryResponse_PUT_Status) */

void zx_shps_QueryResponse_PUT_Status(struct zx_shps_QueryResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_QueryResponse_ADD_Status) */

void zx_shps_QueryResponse_ADD_Status(struct zx_shps_QueryResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_QueryResponse_DEL_Status) */

void zx_shps_QueryResponse_DEL_Status(struct zx_shps_QueryResponse_s* x, int n)
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

/* FUNC(zx_shps_QueryResponse_NUM_EndpointReference) */

int zx_shps_QueryResponse_NUM_EndpointReference(struct zx_shps_QueryResponse_s* x)
{
  struct zx_a_EndpointReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointReference; y; ++n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_QueryResponse_GET_EndpointReference) */

struct zx_a_EndpointReference_s* zx_shps_QueryResponse_GET_EndpointReference(struct zx_shps_QueryResponse_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  for (y = x->EndpointReference; n>=0 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_QueryResponse_POP_EndpointReference) */

struct zx_a_EndpointReference_s* zx_shps_QueryResponse_POP_EndpointReference(struct zx_shps_QueryResponse_s* x)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  y = x->EndpointReference;
  if (y)
    x->EndpointReference = (struct zx_a_EndpointReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_QueryResponse_PUSH_EndpointReference) */

void zx_shps_QueryResponse_PUSH_EndpointReference(struct zx_shps_QueryResponse_s* x, struct zx_a_EndpointReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointReference->gg.g;
  x->EndpointReference = z;
}

/* FUNC(zx_shps_QueryResponse_REV_EndpointReference) */

void zx_shps_QueryResponse_REV_EndpointReference(struct zx_shps_QueryResponse_s* x)
{
  struct zx_a_EndpointReference_s* nxt;
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  y = x->EndpointReference;
  if (!y) return;
  x->EndpointReference = 0;
  while (y) {
    nxt = (struct zx_a_EndpointReference_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_QueryResponse_PUT_EndpointReference) */

void zx_shps_QueryResponse_PUT_EndpointReference(struct zx_shps_QueryResponse_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  y = x->EndpointReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_QueryResponse_ADD_EndpointReference) */

void zx_shps_QueryResponse_ADD_EndpointReference(struct zx_shps_QueryResponse_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = z;
    return;
  case -1:
    y = x->EndpointReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_QueryResponse_DEL_EndpointReference) */

void zx_shps_QueryResponse_DEL_EndpointReference(struct zx_shps_QueryResponse_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointReference = (struct zx_a_EndpointReference_s*)x->EndpointReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_EndpointReference_s*)x->EndpointReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_Register_NUM_EndpointReference) */

int zx_shps_Register_NUM_EndpointReference(struct zx_shps_Register_s* x)
{
  struct zx_a_EndpointReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointReference; y; ++n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_Register_GET_EndpointReference) */

struct zx_a_EndpointReference_s* zx_shps_Register_GET_EndpointReference(struct zx_shps_Register_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  for (y = x->EndpointReference; n>=0 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_Register_POP_EndpointReference) */

struct zx_a_EndpointReference_s* zx_shps_Register_POP_EndpointReference(struct zx_shps_Register_s* x)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  y = x->EndpointReference;
  if (y)
    x->EndpointReference = (struct zx_a_EndpointReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_Register_PUSH_EndpointReference) */

void zx_shps_Register_PUSH_EndpointReference(struct zx_shps_Register_s* x, struct zx_a_EndpointReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointReference->gg.g;
  x->EndpointReference = z;
}

/* FUNC(zx_shps_Register_REV_EndpointReference) */

void zx_shps_Register_REV_EndpointReference(struct zx_shps_Register_s* x)
{
  struct zx_a_EndpointReference_s* nxt;
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  y = x->EndpointReference;
  if (!y) return;
  x->EndpointReference = 0;
  while (y) {
    nxt = (struct zx_a_EndpointReference_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_Register_PUT_EndpointReference) */

void zx_shps_Register_PUT_EndpointReference(struct zx_shps_Register_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  y = x->EndpointReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_Register_ADD_EndpointReference) */

void zx_shps_Register_ADD_EndpointReference(struct zx_shps_Register_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = z;
    return;
  case -1:
    y = x->EndpointReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_Register_DEL_EndpointReference) */

void zx_shps_Register_DEL_EndpointReference(struct zx_shps_Register_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointReference = (struct zx_a_EndpointReference_s*)x->EndpointReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_EndpointReference_s*)x->EndpointReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_RegisterResponse_NUM_Status) */

int zx_shps_RegisterResponse_NUM_Status(struct zx_shps_RegisterResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_RegisterResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_RegisterResponse_GET_Status(struct zx_shps_RegisterResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_RegisterResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_RegisterResponse_POP_Status(struct zx_shps_RegisterResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_RegisterResponse_PUSH_Status) */

void zx_shps_RegisterResponse_PUSH_Status(struct zx_shps_RegisterResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_RegisterResponse_REV_Status) */

void zx_shps_RegisterResponse_REV_Status(struct zx_shps_RegisterResponse_s* x)
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

/* FUNC(zx_shps_RegisterResponse_PUT_Status) */

void zx_shps_RegisterResponse_PUT_Status(struct zx_shps_RegisterResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_RegisterResponse_ADD_Status) */

void zx_shps_RegisterResponse_ADD_Status(struct zx_shps_RegisterResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_RegisterResponse_DEL_Status) */

void zx_shps_RegisterResponse_DEL_Status(struct zx_shps_RegisterResponse_s* x, int n)
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

/* FUNC(zx_shps_RegisterResponse_NUM_RegisterResponseItem) */

int zx_shps_RegisterResponse_NUM_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x)
{
  struct zx_shps_RegisterResponseItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterResponseItem; y; ++n, y = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_RegisterResponse_GET_RegisterResponseItem) */

struct zx_shps_RegisterResponseItem_s* zx_shps_RegisterResponse_GET_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, int n)
{
  struct zx_shps_RegisterResponseItem_s* y;
  if (!x) return 0;
  for (y = x->RegisterResponseItem; n>=0 && y; --n, y = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_RegisterResponse_POP_RegisterResponseItem) */

struct zx_shps_RegisterResponseItem_s* zx_shps_RegisterResponse_POP_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x)
{
  struct zx_shps_RegisterResponseItem_s* y;
  if (!x) return 0;
  y = x->RegisterResponseItem;
  if (y)
    x->RegisterResponseItem = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_RegisterResponse_PUSH_RegisterResponseItem) */

void zx_shps_RegisterResponse_PUSH_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, struct zx_shps_RegisterResponseItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RegisterResponseItem->gg.g;
  x->RegisterResponseItem = z;
}

/* FUNC(zx_shps_RegisterResponse_REV_RegisterResponseItem) */

void zx_shps_RegisterResponse_REV_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x)
{
  struct zx_shps_RegisterResponseItem_s* nxt;
  struct zx_shps_RegisterResponseItem_s* y;
  if (!x) return;
  y = x->RegisterResponseItem;
  if (!y) return;
  x->RegisterResponseItem = 0;
  while (y) {
    nxt = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n;
    y->gg.g.n = &x->RegisterResponseItem->gg.g;
    x->RegisterResponseItem = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_RegisterResponse_PUT_RegisterResponseItem) */

void zx_shps_RegisterResponse_PUT_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, int n, struct zx_shps_RegisterResponseItem_s* z)
{
  struct zx_shps_RegisterResponseItem_s* y;
  if (!x || !z) return;
  y = x->RegisterResponseItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RegisterResponseItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_RegisterResponse_ADD_RegisterResponseItem) */

void zx_shps_RegisterResponse_ADD_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, int n, struct zx_shps_RegisterResponseItem_s* z)
{
  struct zx_shps_RegisterResponseItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RegisterResponseItem->gg.g;
    x->RegisterResponseItem = z;
    return;
  case -1:
    y = x->RegisterResponseItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterResponseItem; n > 1 && y; --n, y = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_RegisterResponse_DEL_RegisterResponseItem) */

void zx_shps_RegisterResponse_DEL_RegisterResponseItem(struct zx_shps_RegisterResponse_s* x, int n)
{
  struct zx_shps_RegisterResponseItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterResponseItem = (struct zx_shps_RegisterResponseItem_s*)x->RegisterResponseItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_RegisterResponseItem_s*)x->RegisterResponseItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterResponseItem; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_RegisterResponseItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_RegisterResponseItem_NUM_ServiceHandle) */

int zx_shps_RegisterResponseItem_NUM_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_RegisterResponseItem_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_RegisterResponseItem_GET_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_RegisterResponseItem_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_RegisterResponseItem_POP_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_RegisterResponseItem_PUSH_ServiceHandle) */

void zx_shps_RegisterResponseItem_PUSH_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_RegisterResponseItem_REV_ServiceHandle) */

void zx_shps_RegisterResponseItem_REV_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_RegisterResponseItem_PUT_ServiceHandle) */

void zx_shps_RegisterResponseItem_PUT_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_RegisterResponseItem_ADD_ServiceHandle) */

void zx_shps_RegisterResponseItem_ADD_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_RegisterResponseItem_DEL_ServiceHandle) */

void zx_shps_RegisterResponseItem_DEL_ServiceHandle(struct zx_shps_RegisterResponseItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_shps_RegisterResponseItem_GET_ref) */
struct zx_str* zx_shps_RegisterResponseItem_GET_ref(struct zx_shps_RegisterResponseItem_s* x) { return x->ref; }
/* FUNC(zx_shps_RegisterResponseItem_PUT_ref) */
void zx_shps_RegisterResponseItem_PUT_ref(struct zx_shps_RegisterResponseItem_s* x, struct zx_str* y) { x->ref = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_SetStatus_NUM_SetStatusItem) */

int zx_shps_SetStatus_NUM_SetStatusItem(struct zx_shps_SetStatus_s* x)
{
  struct zx_shps_SetStatusItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SetStatusItem; y; ++n, y = (struct zx_shps_SetStatusItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_SetStatus_GET_SetStatusItem) */

struct zx_shps_SetStatusItem_s* zx_shps_SetStatus_GET_SetStatusItem(struct zx_shps_SetStatus_s* x, int n)
{
  struct zx_shps_SetStatusItem_s* y;
  if (!x) return 0;
  for (y = x->SetStatusItem; n>=0 && y; --n, y = (struct zx_shps_SetStatusItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_SetStatus_POP_SetStatusItem) */

struct zx_shps_SetStatusItem_s* zx_shps_SetStatus_POP_SetStatusItem(struct zx_shps_SetStatus_s* x)
{
  struct zx_shps_SetStatusItem_s* y;
  if (!x) return 0;
  y = x->SetStatusItem;
  if (y)
    x->SetStatusItem = (struct zx_shps_SetStatusItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_SetStatus_PUSH_SetStatusItem) */

void zx_shps_SetStatus_PUSH_SetStatusItem(struct zx_shps_SetStatus_s* x, struct zx_shps_SetStatusItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SetStatusItem->gg.g;
  x->SetStatusItem = z;
}

/* FUNC(zx_shps_SetStatus_REV_SetStatusItem) */

void zx_shps_SetStatus_REV_SetStatusItem(struct zx_shps_SetStatus_s* x)
{
  struct zx_shps_SetStatusItem_s* nxt;
  struct zx_shps_SetStatusItem_s* y;
  if (!x) return;
  y = x->SetStatusItem;
  if (!y) return;
  x->SetStatusItem = 0;
  while (y) {
    nxt = (struct zx_shps_SetStatusItem_s*)y->gg.g.n;
    y->gg.g.n = &x->SetStatusItem->gg.g;
    x->SetStatusItem = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_SetStatus_PUT_SetStatusItem) */

void zx_shps_SetStatus_PUT_SetStatusItem(struct zx_shps_SetStatus_s* x, int n, struct zx_shps_SetStatusItem_s* z)
{
  struct zx_shps_SetStatusItem_s* y;
  if (!x || !z) return;
  y = x->SetStatusItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SetStatusItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_SetStatusItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_SetStatus_ADD_SetStatusItem) */

void zx_shps_SetStatus_ADD_SetStatusItem(struct zx_shps_SetStatus_s* x, int n, struct zx_shps_SetStatusItem_s* z)
{
  struct zx_shps_SetStatusItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SetStatusItem->gg.g;
    x->SetStatusItem = z;
    return;
  case -1:
    y = x->SetStatusItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_SetStatusItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetStatusItem; n > 1 && y; --n, y = (struct zx_shps_SetStatusItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_SetStatus_DEL_SetStatusItem) */

void zx_shps_SetStatus_DEL_SetStatusItem(struct zx_shps_SetStatus_s* x, int n)
{
  struct zx_shps_SetStatusItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SetStatusItem = (struct zx_shps_SetStatusItem_s*)x->SetStatusItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_SetStatusItem_s*)x->SetStatusItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_SetStatusItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetStatusItem; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_SetStatusItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_SetStatusItem_NUM_ServiceStatus) */

int zx_shps_SetStatusItem_NUM_ServiceStatus(struct zx_shps_SetStatusItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceStatus; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_SetStatusItem_GET_ServiceStatus) */

struct zx_elem_s* zx_shps_SetStatusItem_GET_ServiceStatus(struct zx_shps_SetStatusItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceStatus; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_SetStatusItem_POP_ServiceStatus) */

struct zx_elem_s* zx_shps_SetStatusItem_POP_ServiceStatus(struct zx_shps_SetStatusItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceStatus;
  if (y)
    x->ServiceStatus = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_SetStatusItem_PUSH_ServiceStatus) */

void zx_shps_SetStatusItem_PUSH_ServiceStatus(struct zx_shps_SetStatusItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceStatus->g;
  x->ServiceStatus = z;
}

/* FUNC(zx_shps_SetStatusItem_REV_ServiceStatus) */

void zx_shps_SetStatusItem_REV_ServiceStatus(struct zx_shps_SetStatusItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceStatus;
  if (!y) return;
  x->ServiceStatus = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceStatus->g;
    x->ServiceStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_SetStatusItem_PUT_ServiceStatus) */

void zx_shps_SetStatusItem_PUT_ServiceStatus(struct zx_shps_SetStatusItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceStatus = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_SetStatusItem_ADD_ServiceStatus) */

void zx_shps_SetStatusItem_ADD_ServiceStatus(struct zx_shps_SetStatusItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceStatus->g;
    x->ServiceStatus = z;
    return;
  case -1:
    y = x->ServiceStatus;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceStatus; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_SetStatusItem_DEL_ServiceStatus) */

void zx_shps_SetStatusItem_DEL_ServiceStatus(struct zx_shps_SetStatusItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceStatus = (struct zx_elem_s*)x->ServiceStatus->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceStatus;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceStatus; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_SetStatusItem_NUM_ServiceHandle) */

int zx_shps_SetStatusItem_NUM_ServiceHandle(struct zx_shps_SetStatusItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_SetStatusItem_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_SetStatusItem_GET_ServiceHandle(struct zx_shps_SetStatusItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_SetStatusItem_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_SetStatusItem_POP_ServiceHandle(struct zx_shps_SetStatusItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_SetStatusItem_PUSH_ServiceHandle) */

void zx_shps_SetStatusItem_PUSH_ServiceHandle(struct zx_shps_SetStatusItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_SetStatusItem_REV_ServiceHandle) */

void zx_shps_SetStatusItem_REV_ServiceHandle(struct zx_shps_SetStatusItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_SetStatusItem_PUT_ServiceHandle) */

void zx_shps_SetStatusItem_PUT_ServiceHandle(struct zx_shps_SetStatusItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_SetStatusItem_ADD_ServiceHandle) */

void zx_shps_SetStatusItem_ADD_ServiceHandle(struct zx_shps_SetStatusItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_SetStatusItem_DEL_ServiceHandle) */

void zx_shps_SetStatusItem_DEL_ServiceHandle(struct zx_shps_SetStatusItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_shps_SetStatusItem_GET_itemID) */
struct zx_str* zx_shps_SetStatusItem_GET_itemID(struct zx_shps_SetStatusItem_s* x) { return x->itemID; }
/* FUNC(zx_shps_SetStatusItem_PUT_itemID) */
void zx_shps_SetStatusItem_PUT_itemID(struct zx_shps_SetStatusItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_SetStatusResponse_NUM_Status) */

int zx_shps_SetStatusResponse_NUM_Status(struct zx_shps_SetStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_SetStatusResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_SetStatusResponse_GET_Status(struct zx_shps_SetStatusResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_SetStatusResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_SetStatusResponse_POP_Status(struct zx_shps_SetStatusResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_SetStatusResponse_PUSH_Status) */

void zx_shps_SetStatusResponse_PUSH_Status(struct zx_shps_SetStatusResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_SetStatusResponse_REV_Status) */

void zx_shps_SetStatusResponse_REV_Status(struct zx_shps_SetStatusResponse_s* x)
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

/* FUNC(zx_shps_SetStatusResponse_PUT_Status) */

void zx_shps_SetStatusResponse_PUT_Status(struct zx_shps_SetStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_SetStatusResponse_ADD_Status) */

void zx_shps_SetStatusResponse_ADD_Status(struct zx_shps_SetStatusResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_SetStatusResponse_DEL_Status) */

void zx_shps_SetStatusResponse_DEL_Status(struct zx_shps_SetStatusResponse_s* x, int n)
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

/* FUNC(zx_shps_Update_NUM_UpdateItem) */

int zx_shps_Update_NUM_UpdateItem(struct zx_shps_Update_s* x)
{
  struct zx_shps_UpdateItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UpdateItem; y; ++n, y = (struct zx_shps_UpdateItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_Update_GET_UpdateItem) */

struct zx_shps_UpdateItem_s* zx_shps_Update_GET_UpdateItem(struct zx_shps_Update_s* x, int n)
{
  struct zx_shps_UpdateItem_s* y;
  if (!x) return 0;
  for (y = x->UpdateItem; n>=0 && y; --n, y = (struct zx_shps_UpdateItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_Update_POP_UpdateItem) */

struct zx_shps_UpdateItem_s* zx_shps_Update_POP_UpdateItem(struct zx_shps_Update_s* x)
{
  struct zx_shps_UpdateItem_s* y;
  if (!x) return 0;
  y = x->UpdateItem;
  if (y)
    x->UpdateItem = (struct zx_shps_UpdateItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_Update_PUSH_UpdateItem) */

void zx_shps_Update_PUSH_UpdateItem(struct zx_shps_Update_s* x, struct zx_shps_UpdateItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UpdateItem->gg.g;
  x->UpdateItem = z;
}

/* FUNC(zx_shps_Update_REV_UpdateItem) */

void zx_shps_Update_REV_UpdateItem(struct zx_shps_Update_s* x)
{
  struct zx_shps_UpdateItem_s* nxt;
  struct zx_shps_UpdateItem_s* y;
  if (!x) return;
  y = x->UpdateItem;
  if (!y) return;
  x->UpdateItem = 0;
  while (y) {
    nxt = (struct zx_shps_UpdateItem_s*)y->gg.g.n;
    y->gg.g.n = &x->UpdateItem->gg.g;
    x->UpdateItem = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_Update_PUT_UpdateItem) */

void zx_shps_Update_PUT_UpdateItem(struct zx_shps_Update_s* x, int n, struct zx_shps_UpdateItem_s* z)
{
  struct zx_shps_UpdateItem_s* y;
  if (!x || !z) return;
  y = x->UpdateItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UpdateItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_UpdateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_Update_ADD_UpdateItem) */

void zx_shps_Update_ADD_UpdateItem(struct zx_shps_Update_s* x, int n, struct zx_shps_UpdateItem_s* z)
{
  struct zx_shps_UpdateItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UpdateItem->gg.g;
    x->UpdateItem = z;
    return;
  case -1:
    y = x->UpdateItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_UpdateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateItem; n > 1 && y; --n, y = (struct zx_shps_UpdateItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_Update_DEL_UpdateItem) */

void zx_shps_Update_DEL_UpdateItem(struct zx_shps_Update_s* x, int n)
{
  struct zx_shps_UpdateItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UpdateItem = (struct zx_shps_UpdateItem_s*)x->UpdateItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_UpdateItem_s*)x->UpdateItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_UpdateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateItem; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_UpdateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_UpdateItem_NUM_ServiceHandle) */

int zx_shps_UpdateItem_NUM_ServiceHandle(struct zx_shps_UpdateItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceHandle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_shps_UpdateItem_GET_ServiceHandle) */

struct zx_elem_s* zx_shps_UpdateItem_GET_ServiceHandle(struct zx_shps_UpdateItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceHandle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_shps_UpdateItem_POP_ServiceHandle) */

struct zx_elem_s* zx_shps_UpdateItem_POP_ServiceHandle(struct zx_shps_UpdateItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceHandle;
  if (y)
    x->ServiceHandle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_shps_UpdateItem_PUSH_ServiceHandle) */

void zx_shps_UpdateItem_PUSH_ServiceHandle(struct zx_shps_UpdateItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceHandle->g;
  x->ServiceHandle = z;
}

/* FUNC(zx_shps_UpdateItem_REV_ServiceHandle) */

void zx_shps_UpdateItem_REV_ServiceHandle(struct zx_shps_UpdateItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceHandle;
  if (!y) return;
  x->ServiceHandle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_UpdateItem_PUT_ServiceHandle) */

void zx_shps_UpdateItem_PUT_ServiceHandle(struct zx_shps_UpdateItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceHandle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceHandle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_shps_UpdateItem_ADD_ServiceHandle) */

void zx_shps_UpdateItem_ADD_ServiceHandle(struct zx_shps_UpdateItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceHandle->g;
    x->ServiceHandle = z;
    return;
  case -1:
    y = x->ServiceHandle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_shps_UpdateItem_DEL_ServiceHandle) */

void zx_shps_UpdateItem_DEL_ServiceHandle(struct zx_shps_UpdateItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceHandle = (struct zx_elem_s*)x->ServiceHandle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceHandle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceHandle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_UpdateItem_NUM_EndpointReference) */

int zx_shps_UpdateItem_NUM_EndpointReference(struct zx_shps_UpdateItem_s* x)
{
  struct zx_a_EndpointReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointReference; y; ++n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_UpdateItem_GET_EndpointReference) */

struct zx_a_EndpointReference_s* zx_shps_UpdateItem_GET_EndpointReference(struct zx_shps_UpdateItem_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  for (y = x->EndpointReference; n>=0 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_UpdateItem_POP_EndpointReference) */

struct zx_a_EndpointReference_s* zx_shps_UpdateItem_POP_EndpointReference(struct zx_shps_UpdateItem_s* x)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  y = x->EndpointReference;
  if (y)
    x->EndpointReference = (struct zx_a_EndpointReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_UpdateItem_PUSH_EndpointReference) */

void zx_shps_UpdateItem_PUSH_EndpointReference(struct zx_shps_UpdateItem_s* x, struct zx_a_EndpointReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointReference->gg.g;
  x->EndpointReference = z;
}

/* FUNC(zx_shps_UpdateItem_REV_EndpointReference) */

void zx_shps_UpdateItem_REV_EndpointReference(struct zx_shps_UpdateItem_s* x)
{
  struct zx_a_EndpointReference_s* nxt;
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  y = x->EndpointReference;
  if (!y) return;
  x->EndpointReference = 0;
  while (y) {
    nxt = (struct zx_a_EndpointReference_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = y;
    y = nxt;
  }
}

/* FUNC(zx_shps_UpdateItem_PUT_EndpointReference) */

void zx_shps_UpdateItem_PUT_EndpointReference(struct zx_shps_UpdateItem_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  y = x->EndpointReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_shps_UpdateItem_ADD_EndpointReference) */

void zx_shps_UpdateItem_ADD_EndpointReference(struct zx_shps_UpdateItem_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = z;
    return;
  case -1:
    y = x->EndpointReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_shps_UpdateItem_DEL_EndpointReference) */

void zx_shps_UpdateItem_DEL_EndpointReference(struct zx_shps_UpdateItem_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointReference = (struct zx_a_EndpointReference_s*)x->EndpointReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_EndpointReference_s*)x->EndpointReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_shps_UpdateItem_GET_itemID) */
struct zx_str* zx_shps_UpdateItem_GET_itemID(struct zx_shps_UpdateItem_s* x) { return x->itemID; }
/* FUNC(zx_shps_UpdateItem_PUT_itemID) */
void zx_shps_UpdateItem_PUT_itemID(struct zx_shps_UpdateItem_s* x, struct zx_str* y) { x->itemID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_shps_UpdateResponse_NUM_Status) */

int zx_shps_UpdateResponse_NUM_Status(struct zx_shps_UpdateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_shps_UpdateResponse_GET_Status) */

struct zx_lu_Status_s* zx_shps_UpdateResponse_GET_Status(struct zx_shps_UpdateResponse_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_shps_UpdateResponse_POP_Status) */

struct zx_lu_Status_s* zx_shps_UpdateResponse_POP_Status(struct zx_shps_UpdateResponse_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_shps_UpdateResponse_PUSH_Status) */

void zx_shps_UpdateResponse_PUSH_Status(struct zx_shps_UpdateResponse_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_shps_UpdateResponse_REV_Status) */

void zx_shps_UpdateResponse_REV_Status(struct zx_shps_UpdateResponse_s* x)
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

/* FUNC(zx_shps_UpdateResponse_PUT_Status) */

void zx_shps_UpdateResponse_PUT_Status(struct zx_shps_UpdateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_UpdateResponse_ADD_Status) */

void zx_shps_UpdateResponse_ADD_Status(struct zx_shps_UpdateResponse_s* x, int n, struct zx_lu_Status_s* z)
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

/* FUNC(zx_shps_UpdateResponse_DEL_Status) */

void zx_shps_UpdateResponse_DEL_Status(struct zx_shps_UpdateResponse_s* x, int n)
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






/* EOF -- c/zx-shps-getput.c */
