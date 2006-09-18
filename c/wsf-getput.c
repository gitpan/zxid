/* c/wsf-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/wsf-const.h"
#include "c/wsf-data.h"













/* FUNC(zxwsf_a_EndpointReference_NUM_Address) */

int zxwsf_a_EndpointReference_NUM_Address(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_EndpointReference_GET_Address) */

struct zxwsf_a_Address_s* zxwsf_a_EndpointReference_GET_Address(struct zxwsf_a_EndpointReference_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_EndpointReference_POP_Address) */

struct zxwsf_a_Address_s* zxwsf_a_EndpointReference_POP_Address(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zxwsf_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_EndpointReference_PUSH_Address) */

void zxwsf_a_EndpointReference_PUSH_Address(struct zxwsf_a_EndpointReference_s* x, struct zxwsf_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zxwsf_a_EndpointReference_REV_Address) */

void zxwsf_a_EndpointReference_REV_Address(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_Address_s* nxt;
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zxwsf_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_EndpointReference_PUT_Address) */

void zxwsf_a_EndpointReference_PUT_Address(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_EndpointReference_ADD_Address) */

void zxwsf_a_EndpointReference_ADD_Address(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_EndpointReference_DEL_Address) */

void zxwsf_a_EndpointReference_DEL_Address(struct zxwsf_a_EndpointReference_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zxwsf_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_EndpointReference_NUM_ReferenceParameters) */

int zxwsf_a_EndpointReference_NUM_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_EndpointReference_GET_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_a_EndpointReference_GET_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_EndpointReference_POP_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_a_EndpointReference_POP_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_EndpointReference_PUSH_ReferenceParameters) */

void zxwsf_a_EndpointReference_PUSH_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, struct zxwsf_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zxwsf_a_EndpointReference_REV_ReferenceParameters) */

void zxwsf_a_EndpointReference_REV_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* nxt;
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_EndpointReference_PUT_ReferenceParameters) */

void zxwsf_a_EndpointReference_PUT_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_EndpointReference_ADD_ReferenceParameters) */

void zxwsf_a_EndpointReference_ADD_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_EndpointReference_DEL_ReferenceParameters) */

void zxwsf_a_EndpointReference_DEL_ReferenceParameters(struct zxwsf_a_EndpointReference_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_EndpointReference_NUM_Metadata) */

int zxwsf_a_EndpointReference_NUM_Metadata(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_EndpointReference_GET_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_a_EndpointReference_GET_Metadata(struct zxwsf_a_EndpointReference_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_EndpointReference_POP_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_a_EndpointReference_POP_Metadata(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_EndpointReference_PUSH_Metadata) */

void zxwsf_a_EndpointReference_PUSH_Metadata(struct zxwsf_a_EndpointReference_s* x, struct zxwsf_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zxwsf_a_EndpointReference_REV_Metadata) */

void zxwsf_a_EndpointReference_REV_Metadata(struct zxwsf_a_EndpointReference_s* x)
{
  struct zxwsf_a_Metadata_s* nxt;
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_EndpointReference_PUT_Metadata) */

void zxwsf_a_EndpointReference_PUT_Metadata(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_EndpointReference_ADD_Metadata) */

void zxwsf_a_EndpointReference_ADD_Metadata(struct zxwsf_a_EndpointReference_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_EndpointReference_DEL_Metadata) */

void zxwsf_a_EndpointReference_DEL_Metadata(struct zxwsf_a_EndpointReference_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zxwsf_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_a_FaultTo_NUM_Address) */

int zxwsf_a_FaultTo_NUM_Address(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_FaultTo_GET_Address) */

struct zxwsf_a_Address_s* zxwsf_a_FaultTo_GET_Address(struct zxwsf_a_FaultTo_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_FaultTo_POP_Address) */

struct zxwsf_a_Address_s* zxwsf_a_FaultTo_POP_Address(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zxwsf_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_FaultTo_PUSH_Address) */

void zxwsf_a_FaultTo_PUSH_Address(struct zxwsf_a_FaultTo_s* x, struct zxwsf_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zxwsf_a_FaultTo_REV_Address) */

void zxwsf_a_FaultTo_REV_Address(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_Address_s* nxt;
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zxwsf_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_FaultTo_PUT_Address) */

void zxwsf_a_FaultTo_PUT_Address(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_FaultTo_ADD_Address) */

void zxwsf_a_FaultTo_ADD_Address(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_FaultTo_DEL_Address) */

void zxwsf_a_FaultTo_DEL_Address(struct zxwsf_a_FaultTo_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zxwsf_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_FaultTo_NUM_ReferenceParameters) */

int zxwsf_a_FaultTo_NUM_ReferenceParameters(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_FaultTo_GET_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_a_FaultTo_GET_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_FaultTo_POP_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_a_FaultTo_POP_ReferenceParameters(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_FaultTo_PUSH_ReferenceParameters) */

void zxwsf_a_FaultTo_PUSH_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, struct zxwsf_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zxwsf_a_FaultTo_REV_ReferenceParameters) */

void zxwsf_a_FaultTo_REV_ReferenceParameters(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* nxt;
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_FaultTo_PUT_ReferenceParameters) */

void zxwsf_a_FaultTo_PUT_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_FaultTo_ADD_ReferenceParameters) */

void zxwsf_a_FaultTo_ADD_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_FaultTo_DEL_ReferenceParameters) */

void zxwsf_a_FaultTo_DEL_ReferenceParameters(struct zxwsf_a_FaultTo_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_FaultTo_NUM_Metadata) */

int zxwsf_a_FaultTo_NUM_Metadata(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_FaultTo_GET_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_a_FaultTo_GET_Metadata(struct zxwsf_a_FaultTo_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_FaultTo_POP_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_a_FaultTo_POP_Metadata(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_FaultTo_PUSH_Metadata) */

void zxwsf_a_FaultTo_PUSH_Metadata(struct zxwsf_a_FaultTo_s* x, struct zxwsf_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zxwsf_a_FaultTo_REV_Metadata) */

void zxwsf_a_FaultTo_REV_Metadata(struct zxwsf_a_FaultTo_s* x)
{
  struct zxwsf_a_Metadata_s* nxt;
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_FaultTo_PUT_Metadata) */

void zxwsf_a_FaultTo_PUT_Metadata(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_FaultTo_ADD_Metadata) */

void zxwsf_a_FaultTo_ADD_Metadata(struct zxwsf_a_FaultTo_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_FaultTo_DEL_Metadata) */

void zxwsf_a_FaultTo_DEL_Metadata(struct zxwsf_a_FaultTo_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zxwsf_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_a_From_NUM_Address) */

int zxwsf_a_From_NUM_Address(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_From_GET_Address) */

struct zxwsf_a_Address_s* zxwsf_a_From_GET_Address(struct zxwsf_a_From_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_From_POP_Address) */

struct zxwsf_a_Address_s* zxwsf_a_From_POP_Address(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zxwsf_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_From_PUSH_Address) */

void zxwsf_a_From_PUSH_Address(struct zxwsf_a_From_s* x, struct zxwsf_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zxwsf_a_From_REV_Address) */

void zxwsf_a_From_REV_Address(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_Address_s* nxt;
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zxwsf_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_From_PUT_Address) */

void zxwsf_a_From_PUT_Address(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_From_ADD_Address) */

void zxwsf_a_From_ADD_Address(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_From_DEL_Address) */

void zxwsf_a_From_DEL_Address(struct zxwsf_a_From_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zxwsf_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_From_NUM_ReferenceParameters) */

int zxwsf_a_From_NUM_ReferenceParameters(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_From_GET_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_a_From_GET_ReferenceParameters(struct zxwsf_a_From_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_From_POP_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_a_From_POP_ReferenceParameters(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_From_PUSH_ReferenceParameters) */

void zxwsf_a_From_PUSH_ReferenceParameters(struct zxwsf_a_From_s* x, struct zxwsf_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zxwsf_a_From_REV_ReferenceParameters) */

void zxwsf_a_From_REV_ReferenceParameters(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* nxt;
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_From_PUT_ReferenceParameters) */

void zxwsf_a_From_PUT_ReferenceParameters(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_From_ADD_ReferenceParameters) */

void zxwsf_a_From_ADD_ReferenceParameters(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_From_DEL_ReferenceParameters) */

void zxwsf_a_From_DEL_ReferenceParameters(struct zxwsf_a_From_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_From_NUM_Metadata) */

int zxwsf_a_From_NUM_Metadata(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_From_GET_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_a_From_GET_Metadata(struct zxwsf_a_From_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_From_POP_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_a_From_POP_Metadata(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_From_PUSH_Metadata) */

void zxwsf_a_From_PUSH_Metadata(struct zxwsf_a_From_s* x, struct zxwsf_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zxwsf_a_From_REV_Metadata) */

void zxwsf_a_From_REV_Metadata(struct zxwsf_a_From_s* x)
{
  struct zxwsf_a_Metadata_s* nxt;
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_From_PUT_Metadata) */

void zxwsf_a_From_PUT_Metadata(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_From_ADD_Metadata) */

void zxwsf_a_From_ADD_Metadata(struct zxwsf_a_From_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_From_DEL_Metadata) */

void zxwsf_a_From_DEL_Metadata(struct zxwsf_a_From_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zxwsf_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}


















/* FUNC(zxwsf_a_ProblemAction_NUM_Action) */

int zxwsf_a_ProblemAction_NUM_Action(struct zxwsf_a_ProblemAction_s* x)
{
  struct zxwsf_a_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_ProblemAction_GET_Action) */

struct zxwsf_a_Action_s* zxwsf_a_ProblemAction_GET_Action(struct zxwsf_a_ProblemAction_s* x, int n)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_ProblemAction_POP_Action) */

struct zxwsf_a_Action_s* zxwsf_a_ProblemAction_POP_Action(struct zxwsf_a_ProblemAction_s* x)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zxwsf_a_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_ProblemAction_PUSH_Action) */

void zxwsf_a_ProblemAction_PUSH_Action(struct zxwsf_a_ProblemAction_s* x, struct zxwsf_a_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zxwsf_a_ProblemAction_REV_Action) */

void zxwsf_a_ProblemAction_REV_Action(struct zxwsf_a_ProblemAction_s* x)
{
  struct zxwsf_a_Action_s* nxt;
  struct zxwsf_a_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zxwsf_a_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_ProblemAction_PUT_Action) */

void zxwsf_a_ProblemAction_PUT_Action(struct zxwsf_a_ProblemAction_s* x, int n, struct zxwsf_a_Action_s* z)
{
  struct zxwsf_a_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_ProblemAction_ADD_Action) */

void zxwsf_a_ProblemAction_ADD_Action(struct zxwsf_a_ProblemAction_s* x, int n, struct zxwsf_a_Action_s* z)
{
  struct zxwsf_a_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_ProblemAction_DEL_Action) */

void zxwsf_a_ProblemAction_DEL_Action(struct zxwsf_a_ProblemAction_s* x, int n)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zxwsf_a_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_ProblemAction_NUM_SoapAction) */

int zxwsf_a_ProblemAction_NUM_SoapAction(struct zxwsf_a_ProblemAction_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SoapAction; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_a_ProblemAction_GET_SoapAction) */

struct zx_elem_s* zxwsf_a_ProblemAction_GET_SoapAction(struct zxwsf_a_ProblemAction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SoapAction; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_a_ProblemAction_POP_SoapAction) */

struct zx_elem_s* zxwsf_a_ProblemAction_POP_SoapAction(struct zxwsf_a_ProblemAction_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SoapAction;
  if (y)
    x->SoapAction = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_a_ProblemAction_PUSH_SoapAction) */

void zxwsf_a_ProblemAction_PUSH_SoapAction(struct zxwsf_a_ProblemAction_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SoapAction->g;
  x->SoapAction = z;
}

/* FUNC(zxwsf_a_ProblemAction_REV_SoapAction) */

void zxwsf_a_ProblemAction_REV_SoapAction(struct zxwsf_a_ProblemAction_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SoapAction;
  if (!y) return;
  x->SoapAction = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SoapAction->g;
    x->SoapAction = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_ProblemAction_PUT_SoapAction) */

void zxwsf_a_ProblemAction_PUT_SoapAction(struct zxwsf_a_ProblemAction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SoapAction;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SoapAction = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_a_ProblemAction_ADD_SoapAction) */

void zxwsf_a_ProblemAction_ADD_SoapAction(struct zxwsf_a_ProblemAction_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SoapAction->g;
    x->SoapAction = z;
    return;
  case -1:
    y = x->SoapAction;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SoapAction; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_a_ProblemAction_DEL_SoapAction) */

void zxwsf_a_ProblemAction_DEL_SoapAction(struct zxwsf_a_ProblemAction_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SoapAction = (struct zx_elem_s*)x->SoapAction->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SoapAction;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SoapAction; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}


























/* FUNC(zxwsf_a_RelatesTo_GET_RelationshipType) */
struct zx_str_s* zxwsf_a_RelatesTo_GET_RelationshipType(struct zxwsf_a_RelatesTo_s* x) { return x->RelationshipType; }
/* FUNC(zxwsf_a_RelatesTo_PUT_RelationshipType) */
void zxwsf_a_RelatesTo_PUT_RelationshipType(struct zxwsf_a_RelatesTo_s* x, struct zx_str_s* y) { x->RelationshipType = y; }







/* FUNC(zxwsf_a_ReplyTo_NUM_Address) */

int zxwsf_a_ReplyTo_NUM_Address(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_ReplyTo_GET_Address) */

struct zxwsf_a_Address_s* zxwsf_a_ReplyTo_GET_Address(struct zxwsf_a_ReplyTo_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_ReplyTo_POP_Address) */

struct zxwsf_a_Address_s* zxwsf_a_ReplyTo_POP_Address(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zxwsf_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_ReplyTo_PUSH_Address) */

void zxwsf_a_ReplyTo_PUSH_Address(struct zxwsf_a_ReplyTo_s* x, struct zxwsf_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zxwsf_a_ReplyTo_REV_Address) */

void zxwsf_a_ReplyTo_REV_Address(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_Address_s* nxt;
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zxwsf_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_ReplyTo_PUT_Address) */

void zxwsf_a_ReplyTo_PUT_Address(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_ReplyTo_ADD_Address) */

void zxwsf_a_ReplyTo_ADD_Address(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_ReplyTo_DEL_Address) */

void zxwsf_a_ReplyTo_DEL_Address(struct zxwsf_a_ReplyTo_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zxwsf_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_ReplyTo_NUM_ReferenceParameters) */

int zxwsf_a_ReplyTo_NUM_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_ReplyTo_GET_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_a_ReplyTo_GET_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_ReplyTo_POP_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_a_ReplyTo_POP_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_ReplyTo_PUSH_ReferenceParameters) */

void zxwsf_a_ReplyTo_PUSH_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, struct zxwsf_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zxwsf_a_ReplyTo_REV_ReferenceParameters) */

void zxwsf_a_ReplyTo_REV_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* nxt;
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_ReplyTo_PUT_ReferenceParameters) */

void zxwsf_a_ReplyTo_PUT_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_ReplyTo_ADD_ReferenceParameters) */

void zxwsf_a_ReplyTo_ADD_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_ReplyTo_DEL_ReferenceParameters) */

void zxwsf_a_ReplyTo_DEL_ReferenceParameters(struct zxwsf_a_ReplyTo_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_a_ReplyTo_NUM_Metadata) */

int zxwsf_a_ReplyTo_NUM_Metadata(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_a_ReplyTo_GET_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_a_ReplyTo_GET_Metadata(struct zxwsf_a_ReplyTo_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_a_ReplyTo_POP_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_a_ReplyTo_POP_Metadata(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_a_ReplyTo_PUSH_Metadata) */

void zxwsf_a_ReplyTo_PUSH_Metadata(struct zxwsf_a_ReplyTo_s* x, struct zxwsf_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zxwsf_a_ReplyTo_REV_Metadata) */

void zxwsf_a_ReplyTo_REV_Metadata(struct zxwsf_a_ReplyTo_s* x)
{
  struct zxwsf_a_Metadata_s* nxt;
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_a_ReplyTo_PUT_Metadata) */

void zxwsf_a_ReplyTo_PUT_Metadata(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_a_ReplyTo_ADD_Metadata) */

void zxwsf_a_ReplyTo_ADD_Metadata(struct zxwsf_a_ReplyTo_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_a_ReplyTo_DEL_Metadata) */

void zxwsf_a_ReplyTo_DEL_Metadata(struct zxwsf_a_ReplyTo_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zxwsf_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}
















/* FUNC(zxwsf_b12_Consent_GET_uri) */
struct zx_str_s* zxwsf_b12_Consent_GET_uri(struct zxwsf_b12_Consent_s* x) { return x->uri; }
/* FUNC(zxwsf_b12_Consent_PUT_uri) */
void zxwsf_b12_Consent_PUT_uri(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y) { x->uri = y; }
/* FUNC(zxwsf_b12_Consent_GET_timestamp) */
struct zx_str_s* zxwsf_b12_Consent_GET_timestamp(struct zxwsf_b12_Consent_s* x) { return x->timestamp; }
/* FUNC(zxwsf_b12_Consent_PUT_timestamp) */
void zxwsf_b12_Consent_PUT_timestamp(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y) { x->timestamp = y; }
/* FUNC(zxwsf_b12_Consent_GET_id) */
struct zx_str_s* zxwsf_b12_Consent_GET_id(struct zxwsf_b12_Consent_s* x) { return x->id; }
/* FUNC(zxwsf_b12_Consent_PUT_id) */
void zxwsf_b12_Consent_PUT_id(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_b12_Consent_GET_mustUnderstand) */
struct zx_str_s* zxwsf_b12_Consent_GET_mustUnderstand(struct zxwsf_b12_Consent_s* x) { return x->mustUnderstand; }
/* FUNC(zxwsf_b12_Consent_PUT_mustUnderstand) */
void zxwsf_b12_Consent_PUT_mustUnderstand(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y) { x->mustUnderstand = y; }
/* FUNC(zxwsf_b12_Consent_GET_actor) */
struct zx_str_s* zxwsf_b12_Consent_GET_actor(struct zxwsf_b12_Consent_s* x) { return x->actor; }
/* FUNC(zxwsf_b12_Consent_PUT_actor) */
void zxwsf_b12_Consent_PUT_actor(struct zxwsf_b12_Consent_s* x, struct zx_str_s* y) { x->actor = y; }





/* FUNC(zxwsf_b12_Correlation_GET_messageID) */
struct zx_str_s* zxwsf_b12_Correlation_GET_messageID(struct zxwsf_b12_Correlation_s* x) { return x->messageID; }
/* FUNC(zxwsf_b12_Correlation_PUT_messageID) */
void zxwsf_b12_Correlation_PUT_messageID(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y) { x->messageID = y; }
/* FUNC(zxwsf_b12_Correlation_GET_refToMessageID) */
struct zx_str_s* zxwsf_b12_Correlation_GET_refToMessageID(struct zxwsf_b12_Correlation_s* x) { return x->refToMessageID; }
/* FUNC(zxwsf_b12_Correlation_PUT_refToMessageID) */
void zxwsf_b12_Correlation_PUT_refToMessageID(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y) { x->refToMessageID = y; }
/* FUNC(zxwsf_b12_Correlation_GET_timestamp) */
struct zx_str_s* zxwsf_b12_Correlation_GET_timestamp(struct zxwsf_b12_Correlation_s* x) { return x->timestamp; }
/* FUNC(zxwsf_b12_Correlation_PUT_timestamp) */
void zxwsf_b12_Correlation_PUT_timestamp(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y) { x->timestamp = y; }
/* FUNC(zxwsf_b12_Correlation_GET_id) */
struct zx_str_s* zxwsf_b12_Correlation_GET_id(struct zxwsf_b12_Correlation_s* x) { return x->id; }
/* FUNC(zxwsf_b12_Correlation_PUT_id) */
void zxwsf_b12_Correlation_PUT_id(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_b12_Correlation_GET_mustUnderstand) */
struct zx_str_s* zxwsf_b12_Correlation_GET_mustUnderstand(struct zxwsf_b12_Correlation_s* x) { return x->mustUnderstand; }
/* FUNC(zxwsf_b12_Correlation_PUT_mustUnderstand) */
void zxwsf_b12_Correlation_PUT_mustUnderstand(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y) { x->mustUnderstand = y; }
/* FUNC(zxwsf_b12_Correlation_GET_actor) */
struct zx_str_s* zxwsf_b12_Correlation_GET_actor(struct zxwsf_b12_Correlation_s* x) { return x->actor; }
/* FUNC(zxwsf_b12_Correlation_PUT_actor) */
void zxwsf_b12_Correlation_PUT_actor(struct zxwsf_b12_Correlation_s* x, struct zx_str_s* y) { x->actor = y; }





/* FUNC(zxwsf_b12_ProcessingContext_GET_id) */
struct zx_str_s* zxwsf_b12_ProcessingContext_GET_id(struct zxwsf_b12_ProcessingContext_s* x) { return x->id; }
/* FUNC(zxwsf_b12_ProcessingContext_PUT_id) */
void zxwsf_b12_ProcessingContext_PUT_id(struct zxwsf_b12_ProcessingContext_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_b12_ProcessingContext_GET_mustUnderstand) */
struct zx_str_s* zxwsf_b12_ProcessingContext_GET_mustUnderstand(struct zxwsf_b12_ProcessingContext_s* x) { return x->mustUnderstand; }
/* FUNC(zxwsf_b12_ProcessingContext_PUT_mustUnderstand) */
void zxwsf_b12_ProcessingContext_PUT_mustUnderstand(struct zxwsf_b12_ProcessingContext_s* x, struct zx_str_s* y) { x->mustUnderstand = y; }
/* FUNC(zxwsf_b12_ProcessingContext_GET_actor) */
struct zx_str_s* zxwsf_b12_ProcessingContext_GET_actor(struct zxwsf_b12_ProcessingContext_s* x) { return x->actor; }
/* FUNC(zxwsf_b12_ProcessingContext_PUT_actor) */
void zxwsf_b12_ProcessingContext_PUT_actor(struct zxwsf_b12_ProcessingContext_s* x, struct zx_str_s* y) { x->actor = y; }





/* FUNC(zxwsf_b12_Provider_GET_providerID) */
struct zx_str_s* zxwsf_b12_Provider_GET_providerID(struct zxwsf_b12_Provider_s* x) { return x->providerID; }
/* FUNC(zxwsf_b12_Provider_PUT_providerID) */
void zxwsf_b12_Provider_PUT_providerID(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y) { x->providerID = y; }
/* FUNC(zxwsf_b12_Provider_GET_affiliationID) */
struct zx_str_s* zxwsf_b12_Provider_GET_affiliationID(struct zxwsf_b12_Provider_s* x) { return x->affiliationID; }
/* FUNC(zxwsf_b12_Provider_PUT_affiliationID) */
void zxwsf_b12_Provider_PUT_affiliationID(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y) { x->affiliationID = y; }
/* FUNC(zxwsf_b12_Provider_GET_id) */
struct zx_str_s* zxwsf_b12_Provider_GET_id(struct zxwsf_b12_Provider_s* x) { return x->id; }
/* FUNC(zxwsf_b12_Provider_PUT_id) */
void zxwsf_b12_Provider_PUT_id(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_b12_Provider_GET_mustUnderstand) */
struct zx_str_s* zxwsf_b12_Provider_GET_mustUnderstand(struct zxwsf_b12_Provider_s* x) { return x->mustUnderstand; }
/* FUNC(zxwsf_b12_Provider_PUT_mustUnderstand) */
void zxwsf_b12_Provider_PUT_mustUnderstand(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y) { x->mustUnderstand = y; }
/* FUNC(zxwsf_b12_Provider_GET_actor) */
struct zx_str_s* zxwsf_b12_Provider_GET_actor(struct zxwsf_b12_Provider_s* x) { return x->actor; }
/* FUNC(zxwsf_b12_Provider_PUT_actor) */
void zxwsf_b12_Provider_PUT_actor(struct zxwsf_b12_Provider_s* x, struct zx_str_s* y) { x->actor = y; }





/* FUNC(zxwsf_b12_UsageDirective_GET_id) */
struct zx_str_s* zxwsf_b12_UsageDirective_GET_id(struct zxwsf_b12_UsageDirective_s* x) { return x->id; }
/* FUNC(zxwsf_b12_UsageDirective_PUT_id) */
void zxwsf_b12_UsageDirective_PUT_id(struct zxwsf_b12_UsageDirective_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_b12_UsageDirective_GET_ref) */
struct zx_str_s* zxwsf_b12_UsageDirective_GET_ref(struct zxwsf_b12_UsageDirective_s* x) { return x->ref; }
/* FUNC(zxwsf_b12_UsageDirective_PUT_ref) */
void zxwsf_b12_UsageDirective_PUT_ref(struct zxwsf_b12_UsageDirective_s* x, struct zx_str_s* y) { x->ref = y; }
/* FUNC(zxwsf_b12_UsageDirective_GET_mustUnderstand) */
struct zx_str_s* zxwsf_b12_UsageDirective_GET_mustUnderstand(struct zxwsf_b12_UsageDirective_s* x) { return x->mustUnderstand; }
/* FUNC(zxwsf_b12_UsageDirective_PUT_mustUnderstand) */
void zxwsf_b12_UsageDirective_PUT_mustUnderstand(struct zxwsf_b12_UsageDirective_s* x, struct zx_str_s* y) { x->mustUnderstand = y; }
/* FUNC(zxwsf_b12_UsageDirective_GET_actor) */
struct zx_str_s* zxwsf_b12_UsageDirective_GET_actor(struct zxwsf_b12_UsageDirective_s* x) { return x->actor; }
/* FUNC(zxwsf_b12_UsageDirective_PUT_actor) */
void zxwsf_b12_UsageDirective_PUT_actor(struct zxwsf_b12_UsageDirective_s* x, struct zx_str_s* y) { x->actor = y; }







/* FUNC(zxwsf_b_ApplicationEPR_NUM_Address) */

int zxwsf_b_ApplicationEPR_NUM_Address(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_ApplicationEPR_GET_Address) */

struct zxwsf_a_Address_s* zxwsf_b_ApplicationEPR_GET_Address(struct zxwsf_b_ApplicationEPR_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_ApplicationEPR_POP_Address) */

struct zxwsf_a_Address_s* zxwsf_b_ApplicationEPR_POP_Address(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zxwsf_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_ApplicationEPR_PUSH_Address) */

void zxwsf_b_ApplicationEPR_PUSH_Address(struct zxwsf_b_ApplicationEPR_s* x, struct zxwsf_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zxwsf_b_ApplicationEPR_REV_Address) */

void zxwsf_b_ApplicationEPR_REV_Address(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_Address_s* nxt;
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zxwsf_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_ApplicationEPR_PUT_Address) */

void zxwsf_b_ApplicationEPR_PUT_Address(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_ApplicationEPR_ADD_Address) */

void zxwsf_b_ApplicationEPR_ADD_Address(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_ApplicationEPR_DEL_Address) */

void zxwsf_b_ApplicationEPR_DEL_Address(struct zxwsf_b_ApplicationEPR_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zxwsf_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_b_ApplicationEPR_NUM_ReferenceParameters) */

int zxwsf_b_ApplicationEPR_NUM_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_ApplicationEPR_GET_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_b_ApplicationEPR_GET_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_ApplicationEPR_POP_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_b_ApplicationEPR_POP_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_ApplicationEPR_PUSH_ReferenceParameters) */

void zxwsf_b_ApplicationEPR_PUSH_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, struct zxwsf_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zxwsf_b_ApplicationEPR_REV_ReferenceParameters) */

void zxwsf_b_ApplicationEPR_REV_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* nxt;
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_ApplicationEPR_PUT_ReferenceParameters) */

void zxwsf_b_ApplicationEPR_PUT_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_ApplicationEPR_ADD_ReferenceParameters) */

void zxwsf_b_ApplicationEPR_ADD_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_ApplicationEPR_DEL_ReferenceParameters) */

void zxwsf_b_ApplicationEPR_DEL_ReferenceParameters(struct zxwsf_b_ApplicationEPR_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_b_ApplicationEPR_NUM_Metadata) */

int zxwsf_b_ApplicationEPR_NUM_Metadata(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_ApplicationEPR_GET_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_b_ApplicationEPR_GET_Metadata(struct zxwsf_b_ApplicationEPR_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_ApplicationEPR_POP_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_b_ApplicationEPR_POP_Metadata(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_ApplicationEPR_PUSH_Metadata) */

void zxwsf_b_ApplicationEPR_PUSH_Metadata(struct zxwsf_b_ApplicationEPR_s* x, struct zxwsf_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zxwsf_b_ApplicationEPR_REV_Metadata) */

void zxwsf_b_ApplicationEPR_REV_Metadata(struct zxwsf_b_ApplicationEPR_s* x)
{
  struct zxwsf_a_Metadata_s* nxt;
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_ApplicationEPR_PUT_Metadata) */

void zxwsf_b_ApplicationEPR_PUT_Metadata(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_ApplicationEPR_ADD_Metadata) */

void zxwsf_b_ApplicationEPR_ADD_Metadata(struct zxwsf_b_ApplicationEPR_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_ApplicationEPR_DEL_Metadata) */

void zxwsf_b_ApplicationEPR_DEL_Metadata(struct zxwsf_b_ApplicationEPR_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zxwsf_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}






/* FUNC(zxwsf_b_Consent_GET_uri) */
struct zx_str_s* zxwsf_b_Consent_GET_uri(struct zxwsf_b_Consent_s* x) { return x->uri; }
/* FUNC(zxwsf_b_Consent_PUT_uri) */
void zxwsf_b_Consent_PUT_uri(struct zxwsf_b_Consent_s* x, struct zx_str_s* y) { x->uri = y; }
/* FUNC(zxwsf_b_Consent_GET_timestamp) */
struct zx_str_s* zxwsf_b_Consent_GET_timestamp(struct zxwsf_b_Consent_s* x) { return x->timestamp; }
/* FUNC(zxwsf_b_Consent_PUT_timestamp) */
void zxwsf_b_Consent_PUT_timestamp(struct zxwsf_b_Consent_s* x, struct zx_str_s* y) { x->timestamp = y; }







/* FUNC(zxwsf_b_CredentialsContext_NUM_RequestedAuthnContext) */

int zxwsf_b_CredentialsContext_NUM_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_b_CredentialsContext_GET_RequestedAuthnContext) */

struct zx_elem_s* zxwsf_b_CredentialsContext_GET_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RequestedAuthnContext; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_b_CredentialsContext_POP_RequestedAuthnContext) */

struct zx_elem_s* zxwsf_b_CredentialsContext_POP_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RequestedAuthnContext;
  if (y)
    x->RequestedAuthnContext = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_b_CredentialsContext_PUSH_RequestedAuthnContext) */

void zxwsf_b_CredentialsContext_PUSH_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RequestedAuthnContext->g;
  x->RequestedAuthnContext = z;
}

/* FUNC(zxwsf_b_CredentialsContext_REV_RequestedAuthnContext) */

void zxwsf_b_CredentialsContext_REV_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  x->RequestedAuthnContext = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RequestedAuthnContext->g;
    x->RequestedAuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_CredentialsContext_PUT_RequestedAuthnContext) */

void zxwsf_b_CredentialsContext_PUT_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RequestedAuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RequestedAuthnContext = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_b_CredentialsContext_ADD_RequestedAuthnContext) */

void zxwsf_b_CredentialsContext_ADD_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RequestedAuthnContext->g;
    x->RequestedAuthnContext = z;
    return;
  case -1:
    y = x->RequestedAuthnContext;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_b_CredentialsContext_DEL_RequestedAuthnContext) */

void zxwsf_b_CredentialsContext_DEL_RequestedAuthnContext(struct zxwsf_b_CredentialsContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedAuthnContext = (struct zx_elem_s*)x->RequestedAuthnContext->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RequestedAuthnContext;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestedAuthnContext; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_b_CredentialsContext_NUM_SecurityMechID) */

int zxwsf_b_CredentialsContext_NUM_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_b_CredentialsContext_GET_SecurityMechID) */

struct zx_elem_s* zxwsf_b_CredentialsContext_GET_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_b_CredentialsContext_POP_SecurityMechID) */

struct zx_elem_s* zxwsf_b_CredentialsContext_POP_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_b_CredentialsContext_PUSH_SecurityMechID) */

void zxwsf_b_CredentialsContext_PUSH_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zxwsf_b_CredentialsContext_REV_SecurityMechID) */

void zxwsf_b_CredentialsContext_REV_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x)
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

/* FUNC(zxwsf_b_CredentialsContext_PUT_SecurityMechID) */

void zxwsf_b_CredentialsContext_PUT_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_b_CredentialsContext_ADD_SecurityMechID) */

void zxwsf_b_CredentialsContext_ADD_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_b_CredentialsContext_DEL_SecurityMechID) */

void zxwsf_b_CredentialsContext_DEL_SecurityMechID(struct zxwsf_b_CredentialsContext_s* x, int n)
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








/* FUNC(zxwsf_b_EndpointUpdate_NUM_Address) */

int zxwsf_b_EndpointUpdate_NUM_Address(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_EndpointUpdate_GET_Address) */

struct zxwsf_a_Address_s* zxwsf_b_EndpointUpdate_GET_Address(struct zxwsf_b_EndpointUpdate_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_EndpointUpdate_POP_Address) */

struct zxwsf_a_Address_s* zxwsf_b_EndpointUpdate_POP_Address(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zxwsf_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_EndpointUpdate_PUSH_Address) */

void zxwsf_b_EndpointUpdate_PUSH_Address(struct zxwsf_b_EndpointUpdate_s* x, struct zxwsf_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zxwsf_b_EndpointUpdate_REV_Address) */

void zxwsf_b_EndpointUpdate_REV_Address(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_Address_s* nxt;
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zxwsf_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_EndpointUpdate_PUT_Address) */

void zxwsf_b_EndpointUpdate_PUT_Address(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_EndpointUpdate_ADD_Address) */

void zxwsf_b_EndpointUpdate_ADD_Address(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_EndpointUpdate_DEL_Address) */

void zxwsf_b_EndpointUpdate_DEL_Address(struct zxwsf_b_EndpointUpdate_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zxwsf_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_b_EndpointUpdate_NUM_ReferenceParameters) */

int zxwsf_b_EndpointUpdate_NUM_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_EndpointUpdate_GET_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_b_EndpointUpdate_GET_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_EndpointUpdate_POP_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_b_EndpointUpdate_POP_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_EndpointUpdate_PUSH_ReferenceParameters) */

void zxwsf_b_EndpointUpdate_PUSH_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, struct zxwsf_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zxwsf_b_EndpointUpdate_REV_ReferenceParameters) */

void zxwsf_b_EndpointUpdate_REV_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* nxt;
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_EndpointUpdate_PUT_ReferenceParameters) */

void zxwsf_b_EndpointUpdate_PUT_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_EndpointUpdate_ADD_ReferenceParameters) */

void zxwsf_b_EndpointUpdate_ADD_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_EndpointUpdate_DEL_ReferenceParameters) */

void zxwsf_b_EndpointUpdate_DEL_ReferenceParameters(struct zxwsf_b_EndpointUpdate_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_b_EndpointUpdate_NUM_Metadata) */

int zxwsf_b_EndpointUpdate_NUM_Metadata(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_EndpointUpdate_GET_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_b_EndpointUpdate_GET_Metadata(struct zxwsf_b_EndpointUpdate_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_EndpointUpdate_POP_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_b_EndpointUpdate_POP_Metadata(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_EndpointUpdate_PUSH_Metadata) */

void zxwsf_b_EndpointUpdate_PUSH_Metadata(struct zxwsf_b_EndpointUpdate_s* x, struct zxwsf_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zxwsf_b_EndpointUpdate_REV_Metadata) */

void zxwsf_b_EndpointUpdate_REV_Metadata(struct zxwsf_b_EndpointUpdate_s* x)
{
  struct zxwsf_a_Metadata_s* nxt;
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_EndpointUpdate_PUT_Metadata) */

void zxwsf_b_EndpointUpdate_PUT_Metadata(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_EndpointUpdate_ADD_Metadata) */

void zxwsf_b_EndpointUpdate_ADD_Metadata(struct zxwsf_b_EndpointUpdate_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_EndpointUpdate_DEL_Metadata) */

void zxwsf_b_EndpointUpdate_DEL_Metadata(struct zxwsf_b_EndpointUpdate_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zxwsf_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_b_EndpointUpdate_GET_updateType) */
struct zx_str_s* zxwsf_b_EndpointUpdate_GET_updateType(struct zxwsf_b_EndpointUpdate_s* x) { return x->updateType; }
/* FUNC(zxwsf_b_EndpointUpdate_PUT_updateType) */
void zxwsf_b_EndpointUpdate_PUT_updateType(struct zxwsf_b_EndpointUpdate_s* x, struct zx_str_s* y) { x->updateType = y; }





/* FUNC(zxwsf_b_Framework_GET_version) */
struct zx_str_s* zxwsf_b_Framework_GET_version(struct zxwsf_b_Framework_s* x) { return x->version; }
/* FUNC(zxwsf_b_Framework_PUT_version) */
void zxwsf_b_Framework_PUT_version(struct zxwsf_b_Framework_s* x, struct zx_str_s* y) { x->version = y; }







/* FUNC(zxwsf_b_InteractionService_NUM_Address) */

int zxwsf_b_InteractionService_NUM_Address(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_InteractionService_GET_Address) */

struct zxwsf_a_Address_s* zxwsf_b_InteractionService_GET_Address(struct zxwsf_b_InteractionService_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_InteractionService_POP_Address) */

struct zxwsf_a_Address_s* zxwsf_b_InteractionService_POP_Address(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zxwsf_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_InteractionService_PUSH_Address) */

void zxwsf_b_InteractionService_PUSH_Address(struct zxwsf_b_InteractionService_s* x, struct zxwsf_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zxwsf_b_InteractionService_REV_Address) */

void zxwsf_b_InteractionService_REV_Address(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_Address_s* nxt;
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zxwsf_a_Address_s*)y->gg.g.n;
    y->gg.g.n = &x->Address->gg.g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_InteractionService_PUT_Address) */

void zxwsf_b_InteractionService_PUT_Address(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_InteractionService_ADD_Address) */

void zxwsf_b_InteractionService_ADD_Address(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_Address_s* z)
{
  struct zxwsf_a_Address_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_InteractionService_DEL_Address) */

void zxwsf_b_InteractionService_DEL_Address(struct zxwsf_b_InteractionService_s* x, int n)
{
  struct zxwsf_a_Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zxwsf_a_Address_s*)x->Address->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Address_s*)x->Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_b_InteractionService_NUM_ReferenceParameters) */

int zxwsf_b_InteractionService_NUM_ReferenceParameters(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_InteractionService_GET_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_b_InteractionService_GET_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_InteractionService_POP_ReferenceParameters) */

struct zxwsf_a_ReferenceParameters_s* zxwsf_b_InteractionService_POP_ReferenceParameters(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_InteractionService_PUSH_ReferenceParameters) */

void zxwsf_b_InteractionService_PUSH_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, struct zxwsf_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zxwsf_b_InteractionService_REV_ReferenceParameters) */

void zxwsf_b_InteractionService_REV_ReferenceParameters(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_ReferenceParameters_s* nxt;
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_InteractionService_PUT_ReferenceParameters) */

void zxwsf_b_InteractionService_PUT_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_InteractionService_ADD_ReferenceParameters) */

void zxwsf_b_InteractionService_ADD_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_ReferenceParameters_s* z)
{
  struct zxwsf_a_ReferenceParameters_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_InteractionService_DEL_ReferenceParameters) */

void zxwsf_b_InteractionService_DEL_ReferenceParameters(struct zxwsf_b_InteractionService_s* x, int n)
{
  struct zxwsf_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_b_InteractionService_NUM_Metadata) */

int zxwsf_b_InteractionService_NUM_Metadata(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_InteractionService_GET_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_b_InteractionService_GET_Metadata(struct zxwsf_b_InteractionService_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_InteractionService_POP_Metadata) */

struct zxwsf_a_Metadata_s* zxwsf_b_InteractionService_POP_Metadata(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_InteractionService_PUSH_Metadata) */

void zxwsf_b_InteractionService_PUSH_Metadata(struct zxwsf_b_InteractionService_s* x, struct zxwsf_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zxwsf_b_InteractionService_REV_Metadata) */

void zxwsf_b_InteractionService_REV_Metadata(struct zxwsf_b_InteractionService_s* x)
{
  struct zxwsf_a_Metadata_s* nxt;
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  y = x->Metadata;
  if (!y) return;
  x->Metadata = 0;
  while (y) {
    nxt = (struct zxwsf_a_Metadata_s*)y->gg.g.n;
    y->gg.g.n = &x->Metadata->gg.g;
    x->Metadata = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_InteractionService_PUT_Metadata) */

void zxwsf_b_InteractionService_PUT_Metadata(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x || !z) return;
  y = x->Metadata;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Metadata = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_InteractionService_ADD_Metadata) */

void zxwsf_b_InteractionService_ADD_Metadata(struct zxwsf_b_InteractionService_s* x, int n, struct zxwsf_a_Metadata_s* z)
{
  struct zxwsf_a_Metadata_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_InteractionService_DEL_Metadata) */

void zxwsf_b_InteractionService_DEL_Metadata(struct zxwsf_b_InteractionService_s* x, int n)
{
  struct zxwsf_a_Metadata_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Metadata = (struct zxwsf_a_Metadata_s*)x->Metadata->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Metadata_s*)x->Metadata;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Metadata; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Metadata_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}











/* FUNC(zxwsf_b_RedirectRequest_GET_redirectURL) */
struct zx_str_s* zxwsf_b_RedirectRequest_GET_redirectURL(struct zxwsf_b_RedirectRequest_s* x) { return x->redirectURL; }
/* FUNC(zxwsf_b_RedirectRequest_PUT_redirectURL) */
void zxwsf_b_RedirectRequest_PUT_redirectURL(struct zxwsf_b_RedirectRequest_s* x, struct zx_str_s* y) { x->redirectURL = y; }





/* FUNC(zxwsf_b_Sender_GET_providerID) */
struct zx_str_s* zxwsf_b_Sender_GET_providerID(struct zxwsf_b_Sender_s* x) { return x->providerID; }
/* FUNC(zxwsf_b_Sender_PUT_providerID) */
void zxwsf_b_Sender_PUT_providerID(struct zxwsf_b_Sender_s* x, struct zx_str_s* y) { x->providerID = y; }
/* FUNC(zxwsf_b_Sender_GET_affiliationID) */
struct zx_str_s* zxwsf_b_Sender_GET_affiliationID(struct zxwsf_b_Sender_s* x) { return x->affiliationID; }
/* FUNC(zxwsf_b_Sender_PUT_affiliationID) */
void zxwsf_b_Sender_PUT_affiliationID(struct zxwsf_b_Sender_s* x, struct zx_str_s* y) { x->affiliationID = y; }










/* FUNC(zxwsf_b_UsageDirective_GET_ref) */
struct zx_str_s* zxwsf_b_UsageDirective_GET_ref(struct zxwsf_b_UsageDirective_s* x) { return x->ref; }
/* FUNC(zxwsf_b_UsageDirective_PUT_ref) */
void zxwsf_b_UsageDirective_PUT_ref(struct zxwsf_b_UsageDirective_s* x, struct zx_str_s* y) { x->ref = y; }







/* FUNC(zxwsf_b_UserInteraction_NUM_InteractionService) */

int zxwsf_b_UserInteraction_NUM_InteractionService(struct zxwsf_b_UserInteraction_s* x)
{
  struct zxwsf_b_InteractionService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InteractionService; y; ++n, y = (struct zxwsf_b_InteractionService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_b_UserInteraction_GET_InteractionService) */

struct zxwsf_b_InteractionService_s* zxwsf_b_UserInteraction_GET_InteractionService(struct zxwsf_b_UserInteraction_s* x, int n)
{
  struct zxwsf_b_InteractionService_s* y;
  if (!x) return 0;
  for (y = x->InteractionService; n>=0 && y; --n, y = (struct zxwsf_b_InteractionService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_b_UserInteraction_POP_InteractionService) */

struct zxwsf_b_InteractionService_s* zxwsf_b_UserInteraction_POP_InteractionService(struct zxwsf_b_UserInteraction_s* x)
{
  struct zxwsf_b_InteractionService_s* y;
  if (!x) return 0;
  y = x->InteractionService;
  if (y)
    x->InteractionService = (struct zxwsf_b_InteractionService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_b_UserInteraction_PUSH_InteractionService) */

void zxwsf_b_UserInteraction_PUSH_InteractionService(struct zxwsf_b_UserInteraction_s* x, struct zxwsf_b_InteractionService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InteractionService->gg.g;
  x->InteractionService = z;
}

/* FUNC(zxwsf_b_UserInteraction_REV_InteractionService) */

void zxwsf_b_UserInteraction_REV_InteractionService(struct zxwsf_b_UserInteraction_s* x)
{
  struct zxwsf_b_InteractionService_s* nxt;
  struct zxwsf_b_InteractionService_s* y;
  if (!x) return;
  y = x->InteractionService;
  if (!y) return;
  x->InteractionService = 0;
  while (y) {
    nxt = (struct zxwsf_b_InteractionService_s*)y->gg.g.n;
    y->gg.g.n = &x->InteractionService->gg.g;
    x->InteractionService = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_b_UserInteraction_PUT_InteractionService) */

void zxwsf_b_UserInteraction_PUT_InteractionService(struct zxwsf_b_UserInteraction_s* x, int n, struct zxwsf_b_InteractionService_s* z)
{
  struct zxwsf_b_InteractionService_s* y;
  if (!x || !z) return;
  y = x->InteractionService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InteractionService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_InteractionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_b_UserInteraction_ADD_InteractionService) */

void zxwsf_b_UserInteraction_ADD_InteractionService(struct zxwsf_b_UserInteraction_s* x, int n, struct zxwsf_b_InteractionService_s* z)
{
  struct zxwsf_b_InteractionService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->InteractionService->gg.g;
    x->InteractionService = z;
    return;
  case -1:
    y = x->InteractionService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_b_InteractionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InteractionService; n > 1 && y; --n, y = (struct zxwsf_b_InteractionService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_b_UserInteraction_DEL_InteractionService) */

void zxwsf_b_UserInteraction_DEL_InteractionService(struct zxwsf_b_UserInteraction_s* x, int n)
{
  struct zxwsf_b_InteractionService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InteractionService = (struct zxwsf_b_InteractionService_s*)x->InteractionService->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_InteractionService_s*)x->InteractionService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_InteractionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InteractionService; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_InteractionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_b_UserInteraction_GET_interact) */
struct zx_str_s* zxwsf_b_UserInteraction_GET_interact(struct zxwsf_b_UserInteraction_s* x) { return x->interact; }
/* FUNC(zxwsf_b_UserInteraction_PUT_interact) */
void zxwsf_b_UserInteraction_PUT_interact(struct zxwsf_b_UserInteraction_s* x, struct zx_str_s* y) { x->interact = y; }
/* FUNC(zxwsf_b_UserInteraction_GET_language) */
struct zx_str_s* zxwsf_b_UserInteraction_GET_language(struct zxwsf_b_UserInteraction_s* x) { return x->language; }
/* FUNC(zxwsf_b_UserInteraction_PUT_language) */
void zxwsf_b_UserInteraction_PUT_language(struct zxwsf_b_UserInteraction_s* x, struct zx_str_s* y) { x->language = y; }
/* FUNC(zxwsf_b_UserInteraction_GET_redirect) */
struct zx_str_s* zxwsf_b_UserInteraction_GET_redirect(struct zxwsf_b_UserInteraction_s* x) { return x->redirect; }
/* FUNC(zxwsf_b_UserInteraction_PUT_redirect) */
void zxwsf_b_UserInteraction_PUT_redirect(struct zxwsf_b_UserInteraction_s* x, struct zx_str_s* y) { x->redirect = y; }
/* FUNC(zxwsf_b_UserInteraction_GET_maxInteractTime) */
struct zx_str_s* zxwsf_b_UserInteraction_GET_maxInteractTime(struct zxwsf_b_UserInteraction_s* x) { return x->maxInteractTime; }
/* FUNC(zxwsf_b_UserInteraction_PUT_maxInteractTime) */
void zxwsf_b_UserInteraction_PUT_maxInteractTime(struct zxwsf_b_UserInteraction_s* x, struct zx_str_s* y) { x->maxInteractTime = y; }





/* FUNC(zxwsf_di12_AuthenticateRequester_GET_descriptionIDRefs) */
struct zx_str_s* zxwsf_di12_AuthenticateRequester_GET_descriptionIDRefs(struct zxwsf_di12_AuthenticateRequester_s* x) { return x->descriptionIDRefs; }
/* FUNC(zxwsf_di12_AuthenticateRequester_PUT_descriptionIDRefs) */
void zxwsf_di12_AuthenticateRequester_PUT_descriptionIDRefs(struct zxwsf_di12_AuthenticateRequester_s* x, struct zx_str_s* y) { x->descriptionIDRefs = y; }





/* FUNC(zxwsf_di12_AuthenticateSessionContext_GET_descriptionIDRefs) */
struct zx_str_s* zxwsf_di12_AuthenticateSessionContext_GET_descriptionIDRefs(struct zxwsf_di12_AuthenticateSessionContext_s* x) { return x->descriptionIDRefs; }
/* FUNC(zxwsf_di12_AuthenticateSessionContext_PUT_descriptionIDRefs) */
void zxwsf_di12_AuthenticateSessionContext_PUT_descriptionIDRefs(struct zxwsf_di12_AuthenticateSessionContext_s* x, struct zx_str_s* y) { x->descriptionIDRefs = y; }





/* FUNC(zxwsf_di12_AuthorizeRequester_GET_descriptionIDRefs) */
struct zx_str_s* zxwsf_di12_AuthorizeRequester_GET_descriptionIDRefs(struct zxwsf_di12_AuthorizeRequester_s* x) { return x->descriptionIDRefs; }
/* FUNC(zxwsf_di12_AuthorizeRequester_PUT_descriptionIDRefs) */
void zxwsf_di12_AuthorizeRequester_PUT_descriptionIDRefs(struct zxwsf_di12_AuthorizeRequester_s* x, struct zx_str_s* y) { x->descriptionIDRefs = y; }












/* FUNC(zxwsf_di12_Description_NUM_SecurityMechID) */

int zxwsf_di12_Description_NUM_SecurityMechID(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Description_GET_SecurityMechID) */

struct zx_elem_s* zxwsf_di12_Description_GET_SecurityMechID(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Description_POP_SecurityMechID) */

struct zx_elem_s* zxwsf_di12_Description_POP_SecurityMechID(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_Description_PUSH_SecurityMechID) */

void zxwsf_di12_Description_PUSH_SecurityMechID(struct zxwsf_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zxwsf_di12_Description_REV_SecurityMechID) */

void zxwsf_di12_Description_REV_SecurityMechID(struct zxwsf_di12_Description_s* x)
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

/* FUNC(zxwsf_di12_Description_PUT_SecurityMechID) */

void zxwsf_di12_Description_PUT_SecurityMechID(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di12_Description_ADD_SecurityMechID) */

void zxwsf_di12_Description_ADD_SecurityMechID(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di12_Description_DEL_SecurityMechID) */

void zxwsf_di12_Description_DEL_SecurityMechID(struct zxwsf_di12_Description_s* x, int n)
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



/* FUNC(zxwsf_di12_Description_NUM_CredentialRef) */

int zxwsf_di12_Description_NUM_CredentialRef(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CredentialRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Description_GET_CredentialRef) */

struct zx_elem_s* zxwsf_di12_Description_GET_CredentialRef(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CredentialRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Description_POP_CredentialRef) */

struct zx_elem_s* zxwsf_di12_Description_POP_CredentialRef(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CredentialRef;
  if (y)
    x->CredentialRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_Description_PUSH_CredentialRef) */

void zxwsf_di12_Description_PUSH_CredentialRef(struct zxwsf_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CredentialRef->g;
  x->CredentialRef = z;
}

/* FUNC(zxwsf_di12_Description_REV_CredentialRef) */

void zxwsf_di12_Description_REV_CredentialRef(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CredentialRef;
  if (!y) return;
  x->CredentialRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CredentialRef->g;
    x->CredentialRef = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Description_PUT_CredentialRef) */

void zxwsf_di12_Description_PUT_CredentialRef(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CredentialRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CredentialRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_Description_ADD_CredentialRef) */

void zxwsf_di12_Description_ADD_CredentialRef(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CredentialRef->g;
    x->CredentialRef = z;
    return;
  case -1:
    y = x->CredentialRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CredentialRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_Description_DEL_CredentialRef) */

void zxwsf_di12_Description_DEL_CredentialRef(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CredentialRef = (struct zx_elem_s*)x->CredentialRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CredentialRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CredentialRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di12_Description_NUM_WsdlURI) */

int zxwsf_di12_Description_NUM_WsdlURI(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->WsdlURI; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Description_GET_WsdlURI) */

struct zx_elem_s* zxwsf_di12_Description_GET_WsdlURI(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->WsdlURI; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Description_POP_WsdlURI) */

struct zx_elem_s* zxwsf_di12_Description_POP_WsdlURI(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->WsdlURI;
  if (y)
    x->WsdlURI = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_Description_PUSH_WsdlURI) */

void zxwsf_di12_Description_PUSH_WsdlURI(struct zxwsf_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->WsdlURI->g;
  x->WsdlURI = z;
}

/* FUNC(zxwsf_di12_Description_REV_WsdlURI) */

void zxwsf_di12_Description_REV_WsdlURI(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->WsdlURI;
  if (!y) return;
  x->WsdlURI = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->WsdlURI->g;
    x->WsdlURI = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Description_PUT_WsdlURI) */

void zxwsf_di12_Description_PUT_WsdlURI(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->WsdlURI;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->WsdlURI = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_Description_ADD_WsdlURI) */

void zxwsf_di12_Description_ADD_WsdlURI(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->WsdlURI->g;
    x->WsdlURI = z;
    return;
  case -1:
    y = x->WsdlURI;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WsdlURI; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_Description_DEL_WsdlURI) */

void zxwsf_di12_Description_DEL_WsdlURI(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->WsdlURI = (struct zx_elem_s*)x->WsdlURI->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->WsdlURI;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->WsdlURI; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di12_Description_NUM_ServiceNameRef) */

int zxwsf_di12_Description_NUM_ServiceNameRef(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceNameRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Description_GET_ServiceNameRef) */

struct zx_elem_s* zxwsf_di12_Description_GET_ServiceNameRef(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceNameRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Description_POP_ServiceNameRef) */

struct zx_elem_s* zxwsf_di12_Description_POP_ServiceNameRef(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceNameRef;
  if (y)
    x->ServiceNameRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_Description_PUSH_ServiceNameRef) */

void zxwsf_di12_Description_PUSH_ServiceNameRef(struct zxwsf_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceNameRef->g;
  x->ServiceNameRef = z;
}

/* FUNC(zxwsf_di12_Description_REV_ServiceNameRef) */

void zxwsf_di12_Description_REV_ServiceNameRef(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceNameRef;
  if (!y) return;
  x->ServiceNameRef = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceNameRef->g;
    x->ServiceNameRef = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Description_PUT_ServiceNameRef) */

void zxwsf_di12_Description_PUT_ServiceNameRef(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceNameRef;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceNameRef = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_Description_ADD_ServiceNameRef) */

void zxwsf_di12_Description_ADD_ServiceNameRef(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceNameRef->g;
    x->ServiceNameRef = z;
    return;
  case -1:
    y = x->ServiceNameRef;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceNameRef; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_Description_DEL_ServiceNameRef) */

void zxwsf_di12_Description_DEL_ServiceNameRef(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceNameRef = (struct zx_elem_s*)x->ServiceNameRef->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceNameRef;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceNameRef; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di12_Description_NUM_Endpoint) */

int zxwsf_di12_Description_NUM_Endpoint(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Endpoint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Description_GET_Endpoint) */

struct zx_elem_s* zxwsf_di12_Description_GET_Endpoint(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Endpoint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Description_POP_Endpoint) */

struct zx_elem_s* zxwsf_di12_Description_POP_Endpoint(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Endpoint;
  if (y)
    x->Endpoint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_Description_PUSH_Endpoint) */

void zxwsf_di12_Description_PUSH_Endpoint(struct zxwsf_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Endpoint->g;
  x->Endpoint = z;
}

/* FUNC(zxwsf_di12_Description_REV_Endpoint) */

void zxwsf_di12_Description_REV_Endpoint(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Endpoint;
  if (!y) return;
  x->Endpoint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Endpoint->g;
    x->Endpoint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Description_PUT_Endpoint) */

void zxwsf_di12_Description_PUT_Endpoint(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Endpoint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Endpoint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_Description_ADD_Endpoint) */

void zxwsf_di12_Description_ADD_Endpoint(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Endpoint->g;
    x->Endpoint = z;
    return;
  case -1:
    y = x->Endpoint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_Description_DEL_Endpoint) */

void zxwsf_di12_Description_DEL_Endpoint(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Endpoint = (struct zx_elem_s*)x->Endpoint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Endpoint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di12_Description_NUM_SoapAction) */

int zxwsf_di12_Description_NUM_SoapAction(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SoapAction; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Description_GET_SoapAction) */

struct zx_elem_s* zxwsf_di12_Description_GET_SoapAction(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SoapAction; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Description_POP_SoapAction) */

struct zx_elem_s* zxwsf_di12_Description_POP_SoapAction(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SoapAction;
  if (y)
    x->SoapAction = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_Description_PUSH_SoapAction) */

void zxwsf_di12_Description_PUSH_SoapAction(struct zxwsf_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SoapAction->g;
  x->SoapAction = z;
}

/* FUNC(zxwsf_di12_Description_REV_SoapAction) */

void zxwsf_di12_Description_REV_SoapAction(struct zxwsf_di12_Description_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SoapAction;
  if (!y) return;
  x->SoapAction = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SoapAction->g;
    x->SoapAction = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Description_PUT_SoapAction) */

void zxwsf_di12_Description_PUT_SoapAction(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SoapAction;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SoapAction = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_Description_ADD_SoapAction) */

void zxwsf_di12_Description_ADD_SoapAction(struct zxwsf_di12_Description_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SoapAction->g;
    x->SoapAction = z;
    return;
  case -1:
    y = x->SoapAction;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SoapAction; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_Description_DEL_SoapAction) */

void zxwsf_di12_Description_DEL_SoapAction(struct zxwsf_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SoapAction = (struct zx_elem_s*)x->SoapAction->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SoapAction;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SoapAction; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_di12_Description_GET_id) */
struct zx_str_s* zxwsf_di12_Description_GET_id(struct zxwsf_di12_Description_s* x) { return x->id; }
/* FUNC(zxwsf_di12_Description_PUT_id) */
void zxwsf_di12_Description_PUT_id(struct zxwsf_di12_Description_s* x, struct zx_str_s* y) { x->id = y; }





/* FUNC(zxwsf_di12_EncryptResourceID_GET_descriptionIDRefs) */
struct zx_str_s* zxwsf_di12_EncryptResourceID_GET_descriptionIDRefs(struct zxwsf_di12_EncryptResourceID_s* x) { return x->descriptionIDRefs; }
/* FUNC(zxwsf_di12_EncryptResourceID_PUT_descriptionIDRefs) */
void zxwsf_di12_EncryptResourceID_PUT_descriptionIDRefs(struct zxwsf_di12_EncryptResourceID_s* x, struct zx_str_s* y) { x->descriptionIDRefs = y; }







/* FUNC(zxwsf_di12_EncryptedResourceID_NUM_EncryptedData) */

int zxwsf_di12_EncryptedResourceID_NUM_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_GET_EncryptedData) */

struct zx_elem_s* zxwsf_di12_EncryptedResourceID_GET_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_POP_EncryptedData) */

struct zx_elem_s* zxwsf_di12_EncryptedResourceID_POP_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_PUSH_EncryptedData) */

void zxwsf_di12_EncryptedResourceID_PUSH_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptedData->g;
  x->EncryptedData = z;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_REV_EncryptedData) */

void zxwsf_di12_EncryptedResourceID_REV_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptedData->g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_EncryptedResourceID_PUT_EncryptedData) */

void zxwsf_di12_EncryptedResourceID_PUT_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_EncryptedResourceID_ADD_EncryptedData) */

void zxwsf_di12_EncryptedResourceID_ADD_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptedData->g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_DEL_EncryptedData) */

void zxwsf_di12_EncryptedResourceID_DEL_EncryptedData(struct zxwsf_di12_EncryptedResourceID_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zx_elem_s*)x->EncryptedData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptedData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di12_EncryptedResourceID_NUM_EncryptedKey) */

int zxwsf_di12_EncryptedResourceID_NUM_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_GET_EncryptedKey) */

struct zx_elem_s* zxwsf_di12_EncryptedResourceID_GET_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_POP_EncryptedKey) */

struct zx_elem_s* zxwsf_di12_EncryptedResourceID_POP_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_PUSH_EncryptedKey) */

void zxwsf_di12_EncryptedResourceID_PUSH_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptedKey->g;
  x->EncryptedKey = z;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_REV_EncryptedKey) */

void zxwsf_di12_EncryptedResourceID_REV_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptedKey->g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_EncryptedResourceID_PUT_EncryptedKey) */

void zxwsf_di12_EncryptedResourceID_PUT_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_EncryptedResourceID_ADD_EncryptedKey) */

void zxwsf_di12_EncryptedResourceID_ADD_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptedKey->g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_EncryptedResourceID_DEL_EncryptedKey) */

void zxwsf_di12_EncryptedResourceID_DEL_EncryptedKey(struct zxwsf_di12_EncryptedResourceID_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zx_elem_s*)x->EncryptedKey->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}













/* FUNC(zxwsf_di12_InsertEntry_NUM_ResourceOffering) */

int zxwsf_di12_InsertEntry_NUM_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceOffering; y; ++n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_InsertEntry_GET_ResourceOffering) */

struct zxwsf_di12_ResourceOffering_s* zxwsf_di12_InsertEntry_GET_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, int n)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x) return 0;
  for (y = x->ResourceOffering; n>=0 && y; --n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_InsertEntry_POP_ResourceOffering) */

struct zxwsf_di12_ResourceOffering_s* zxwsf_di12_InsertEntry_POP_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x) return 0;
  y = x->ResourceOffering;
  if (y)
    x->ResourceOffering = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_InsertEntry_PUSH_ResourceOffering) */

void zxwsf_di12_InsertEntry_PUSH_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, struct zxwsf_di12_ResourceOffering_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceOffering->gg.g;
  x->ResourceOffering = z;
}

/* FUNC(zxwsf_di12_InsertEntry_REV_ResourceOffering) */

void zxwsf_di12_InsertEntry_REV_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x)
{
  struct zxwsf_di12_ResourceOffering_s* nxt;
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x) return;
  y = x->ResourceOffering;
  if (!y) return;
  x->ResourceOffering = 0;
  while (y) {
    nxt = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceOffering->gg.g;
    x->ResourceOffering = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_InsertEntry_PUT_ResourceOffering) */

void zxwsf_di12_InsertEntry_PUT_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, int n, struct zxwsf_di12_ResourceOffering_s* z)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x || !z) return;
  y = x->ResourceOffering;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceOffering = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_InsertEntry_ADD_ResourceOffering) */

void zxwsf_di12_InsertEntry_ADD_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, int n, struct zxwsf_di12_ResourceOffering_s* z)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceOffering->gg.g;
    x->ResourceOffering = z;
    return;
  case -1:
    y = x->ResourceOffering;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceOffering; n > 1 && y; --n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_InsertEntry_DEL_ResourceOffering) */

void zxwsf_di12_InsertEntry_DEL_ResourceOffering(struct zxwsf_di12_InsertEntry_s* x, int n)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceOffering = (struct zxwsf_di12_ResourceOffering_s*)x->ResourceOffering->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_ResourceOffering_s*)x->ResourceOffering;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceOffering; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di12_Modify_NUM_InsertEntry) */

int zxwsf_di12_Modify_NUM_InsertEntry(struct zxwsf_di12_Modify_s* x)
{
  struct zxwsf_di12_InsertEntry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InsertEntry; y; ++n, y = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Modify_GET_InsertEntry) */

struct zxwsf_di12_InsertEntry_s* zxwsf_di12_Modify_GET_InsertEntry(struct zxwsf_di12_Modify_s* x, int n)
{
  struct zxwsf_di12_InsertEntry_s* y;
  if (!x) return 0;
  for (y = x->InsertEntry; n>=0 && y; --n, y = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Modify_POP_InsertEntry) */

struct zxwsf_di12_InsertEntry_s* zxwsf_di12_Modify_POP_InsertEntry(struct zxwsf_di12_Modify_s* x)
{
  struct zxwsf_di12_InsertEntry_s* y;
  if (!x) return 0;
  y = x->InsertEntry;
  if (y)
    x->InsertEntry = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_Modify_PUSH_InsertEntry) */

void zxwsf_di12_Modify_PUSH_InsertEntry(struct zxwsf_di12_Modify_s* x, struct zxwsf_di12_InsertEntry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InsertEntry->gg.g;
  x->InsertEntry = z;
}

/* FUNC(zxwsf_di12_Modify_REV_InsertEntry) */

void zxwsf_di12_Modify_REV_InsertEntry(struct zxwsf_di12_Modify_s* x)
{
  struct zxwsf_di12_InsertEntry_s* nxt;
  struct zxwsf_di12_InsertEntry_s* y;
  if (!x) return;
  y = x->InsertEntry;
  if (!y) return;
  x->InsertEntry = 0;
  while (y) {
    nxt = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n;
    y->gg.g.n = &x->InsertEntry->gg.g;
    x->InsertEntry = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Modify_PUT_InsertEntry) */

void zxwsf_di12_Modify_PUT_InsertEntry(struct zxwsf_di12_Modify_s* x, int n, struct zxwsf_di12_InsertEntry_s* z)
{
  struct zxwsf_di12_InsertEntry_s* y;
  if (!x || !z) return;
  y = x->InsertEntry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InsertEntry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_Modify_ADD_InsertEntry) */

void zxwsf_di12_Modify_ADD_InsertEntry(struct zxwsf_di12_Modify_s* x, int n, struct zxwsf_di12_InsertEntry_s* z)
{
  struct zxwsf_di12_InsertEntry_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->InsertEntry->gg.g;
    x->InsertEntry = z;
    return;
  case -1:
    y = x->InsertEntry;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InsertEntry; n > 1 && y; --n, y = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_Modify_DEL_InsertEntry) */

void zxwsf_di12_Modify_DEL_InsertEntry(struct zxwsf_di12_Modify_s* x, int n)
{
  struct zxwsf_di12_InsertEntry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InsertEntry = (struct zxwsf_di12_InsertEntry_s*)x->InsertEntry->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_InsertEntry_s*)x->InsertEntry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InsertEntry; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_InsertEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di12_Modify_NUM_RemoveEntry) */

int zxwsf_di12_Modify_NUM_RemoveEntry(struct zxwsf_di12_Modify_s* x)
{
  struct zxwsf_di12_RemoveEntry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RemoveEntry; y; ++n, y = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Modify_GET_RemoveEntry) */

struct zxwsf_di12_RemoveEntry_s* zxwsf_di12_Modify_GET_RemoveEntry(struct zxwsf_di12_Modify_s* x, int n)
{
  struct zxwsf_di12_RemoveEntry_s* y;
  if (!x) return 0;
  for (y = x->RemoveEntry; n>=0 && y; --n, y = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Modify_POP_RemoveEntry) */

struct zxwsf_di12_RemoveEntry_s* zxwsf_di12_Modify_POP_RemoveEntry(struct zxwsf_di12_Modify_s* x)
{
  struct zxwsf_di12_RemoveEntry_s* y;
  if (!x) return 0;
  y = x->RemoveEntry;
  if (y)
    x->RemoveEntry = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_Modify_PUSH_RemoveEntry) */

void zxwsf_di12_Modify_PUSH_RemoveEntry(struct zxwsf_di12_Modify_s* x, struct zxwsf_di12_RemoveEntry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RemoveEntry->gg.g;
  x->RemoveEntry = z;
}

/* FUNC(zxwsf_di12_Modify_REV_RemoveEntry) */

void zxwsf_di12_Modify_REV_RemoveEntry(struct zxwsf_di12_Modify_s* x)
{
  struct zxwsf_di12_RemoveEntry_s* nxt;
  struct zxwsf_di12_RemoveEntry_s* y;
  if (!x) return;
  y = x->RemoveEntry;
  if (!y) return;
  x->RemoveEntry = 0;
  while (y) {
    nxt = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n;
    y->gg.g.n = &x->RemoveEntry->gg.g;
    x->RemoveEntry = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Modify_PUT_RemoveEntry) */

void zxwsf_di12_Modify_PUT_RemoveEntry(struct zxwsf_di12_Modify_s* x, int n, struct zxwsf_di12_RemoveEntry_s* z)
{
  struct zxwsf_di12_RemoveEntry_s* y;
  if (!x || !z) return;
  y = x->RemoveEntry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RemoveEntry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_Modify_ADD_RemoveEntry) */

void zxwsf_di12_Modify_ADD_RemoveEntry(struct zxwsf_di12_Modify_s* x, int n, struct zxwsf_di12_RemoveEntry_s* z)
{
  struct zxwsf_di12_RemoveEntry_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RemoveEntry->gg.g;
    x->RemoveEntry = z;
    return;
  case -1:
    y = x->RemoveEntry;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveEntry; n > 1 && y; --n, y = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_Modify_DEL_RemoveEntry) */

void zxwsf_di12_Modify_DEL_RemoveEntry(struct zxwsf_di12_Modify_s* x, int n)
{
  struct zxwsf_di12_RemoveEntry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RemoveEntry = (struct zxwsf_di12_RemoveEntry_s*)x->RemoveEntry->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_RemoveEntry_s*)x->RemoveEntry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveEntry; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_RemoveEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_di12_Modify_GET_id) */
struct zx_str_s* zxwsf_di12_Modify_GET_id(struct zxwsf_di12_Modify_s* x) { return x->id; }
/* FUNC(zxwsf_di12_Modify_PUT_id) */
void zxwsf_di12_Modify_PUT_id(struct zxwsf_di12_Modify_s* x, struct zx_str_s* y) { x->id = y; }







/* FUNC(zxwsf_di12_ModifyResponse_NUM_Status) */

int zxwsf_di12_ModifyResponse_NUM_Status(struct zxwsf_di12_ModifyResponse_s* x)
{
  struct zxwsf_di12_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_ModifyResponse_GET_Status) */

struct zxwsf_di12_Status_s* zxwsf_di12_ModifyResponse_GET_Status(struct zxwsf_di12_ModifyResponse_s* x, int n)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_ModifyResponse_POP_Status) */

struct zxwsf_di12_Status_s* zxwsf_di12_ModifyResponse_POP_Status(struct zxwsf_di12_ModifyResponse_s* x)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_di12_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_ModifyResponse_PUSH_Status) */

void zxwsf_di12_ModifyResponse_PUSH_Status(struct zxwsf_di12_ModifyResponse_s* x, struct zxwsf_di12_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di12_ModifyResponse_REV_Status) */

void zxwsf_di12_ModifyResponse_REV_Status(struct zxwsf_di12_ModifyResponse_s* x)
{
  struct zxwsf_di12_Status_s* nxt;
  struct zxwsf_di12_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_ModifyResponse_PUT_Status) */

void zxwsf_di12_ModifyResponse_PUT_Status(struct zxwsf_di12_ModifyResponse_s* x, int n, struct zxwsf_di12_Status_s* z)
{
  struct zxwsf_di12_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_ModifyResponse_ADD_Status) */

void zxwsf_di12_ModifyResponse_ADD_Status(struct zxwsf_di12_ModifyResponse_s* x, int n, struct zxwsf_di12_Status_s* z)
{
  struct zxwsf_di12_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_ModifyResponse_DEL_Status) */

void zxwsf_di12_ModifyResponse_DEL_Status(struct zxwsf_di12_ModifyResponse_s* x, int n)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_di12_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di12_ModifyResponse_NUM_Extension) */

int zxwsf_di12_ModifyResponse_NUM_Extension(struct zxwsf_di12_ModifyResponse_s* x)
{
  struct zxwsf_di12_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zxwsf_di12_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_ModifyResponse_GET_Extension) */

struct zxwsf_di12_Extension_s* zxwsf_di12_ModifyResponse_GET_Extension(struct zxwsf_di12_ModifyResponse_s* x, int n)
{
  struct zxwsf_di12_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zxwsf_di12_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_ModifyResponse_POP_Extension) */

struct zxwsf_di12_Extension_s* zxwsf_di12_ModifyResponse_POP_Extension(struct zxwsf_di12_ModifyResponse_s* x)
{
  struct zxwsf_di12_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zxwsf_di12_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_ModifyResponse_PUSH_Extension) */

void zxwsf_di12_ModifyResponse_PUSH_Extension(struct zxwsf_di12_ModifyResponse_s* x, struct zxwsf_di12_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zxwsf_di12_ModifyResponse_REV_Extension) */

void zxwsf_di12_ModifyResponse_REV_Extension(struct zxwsf_di12_ModifyResponse_s* x)
{
  struct zxwsf_di12_Extension_s* nxt;
  struct zxwsf_di12_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_ModifyResponse_PUT_Extension) */

void zxwsf_di12_ModifyResponse_PUT_Extension(struct zxwsf_di12_ModifyResponse_s* x, int n, struct zxwsf_di12_Extension_s* z)
{
  struct zxwsf_di12_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_ModifyResponse_ADD_Extension) */

void zxwsf_di12_ModifyResponse_ADD_Extension(struct zxwsf_di12_ModifyResponse_s* x, int n, struct zxwsf_di12_Extension_s* z)
{
  struct zxwsf_di12_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di12_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zxwsf_di12_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_ModifyResponse_DEL_Extension) */

void zxwsf_di12_ModifyResponse_DEL_Extension(struct zxwsf_di12_ModifyResponse_s* x, int n)
{
  struct zxwsf_di12_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zxwsf_di12_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_di12_ModifyResponse_GET_id) */
struct zx_str_s* zxwsf_di12_ModifyResponse_GET_id(struct zxwsf_di12_ModifyResponse_s* x) { return x->id; }
/* FUNC(zxwsf_di12_ModifyResponse_PUT_id) */
void zxwsf_di12_ModifyResponse_PUT_id(struct zxwsf_di12_ModifyResponse_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_di12_ModifyResponse_GET_newEntryIDs) */
struct zx_str_s* zxwsf_di12_ModifyResponse_GET_newEntryIDs(struct zxwsf_di12_ModifyResponse_s* x) { return x->newEntryIDs; }
/* FUNC(zxwsf_di12_ModifyResponse_PUT_newEntryIDs) */
void zxwsf_di12_ModifyResponse_PUT_newEntryIDs(struct zxwsf_di12_ModifyResponse_s* x, struct zx_str_s* y) { x->newEntryIDs = y; }







/* FUNC(zxwsf_di12_Options_NUM_Option) */

int zxwsf_di12_Options_NUM_Option(struct zxwsf_di12_Options_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Option; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Options_GET_Option) */

struct zx_elem_s* zxwsf_di12_Options_GET_Option(struct zxwsf_di12_Options_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Option; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Options_POP_Option) */

struct zx_elem_s* zxwsf_di12_Options_POP_Option(struct zxwsf_di12_Options_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Option;
  if (y)
    x->Option = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_Options_PUSH_Option) */

void zxwsf_di12_Options_PUSH_Option(struct zxwsf_di12_Options_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Option->g;
  x->Option = z;
}

/* FUNC(zxwsf_di12_Options_REV_Option) */

void zxwsf_di12_Options_REV_Option(struct zxwsf_di12_Options_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Option;
  if (!y) return;
  x->Option = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Option->g;
    x->Option = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Options_PUT_Option) */

void zxwsf_di12_Options_PUT_Option(struct zxwsf_di12_Options_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Option;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Option = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_Options_ADD_Option) */

void zxwsf_di12_Options_ADD_Option(struct zxwsf_di12_Options_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Option->g;
    x->Option = z;
    return;
  case -1:
    y = x->Option;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Option; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_Options_DEL_Option) */

void zxwsf_di12_Options_DEL_Option(struct zxwsf_di12_Options_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Option = (struct zx_elem_s*)x->Option->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Option;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Option; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di12_Query_NUM_RequestedServiceType) */

int zxwsf_di12_Query_NUM_RequestedServiceType(struct zxwsf_di12_Query_s* x)
{
  struct zxwsf_di12_RequestedServiceType_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedServiceType; y; ++n, y = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Query_GET_RequestedServiceType) */

struct zxwsf_di12_RequestedServiceType_s* zxwsf_di12_Query_GET_RequestedServiceType(struct zxwsf_di12_Query_s* x, int n)
{
  struct zxwsf_di12_RequestedServiceType_s* y;
  if (!x) return 0;
  for (y = x->RequestedServiceType; n>=0 && y; --n, y = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Query_POP_RequestedServiceType) */

struct zxwsf_di12_RequestedServiceType_s* zxwsf_di12_Query_POP_RequestedServiceType(struct zxwsf_di12_Query_s* x)
{
  struct zxwsf_di12_RequestedServiceType_s* y;
  if (!x) return 0;
  y = x->RequestedServiceType;
  if (y)
    x->RequestedServiceType = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_Query_PUSH_RequestedServiceType) */

void zxwsf_di12_Query_PUSH_RequestedServiceType(struct zxwsf_di12_Query_s* x, struct zxwsf_di12_RequestedServiceType_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedServiceType->gg.g;
  x->RequestedServiceType = z;
}

/* FUNC(zxwsf_di12_Query_REV_RequestedServiceType) */

void zxwsf_di12_Query_REV_RequestedServiceType(struct zxwsf_di12_Query_s* x)
{
  struct zxwsf_di12_RequestedServiceType_s* nxt;
  struct zxwsf_di12_RequestedServiceType_s* y;
  if (!x) return;
  y = x->RequestedServiceType;
  if (!y) return;
  x->RequestedServiceType = 0;
  while (y) {
    nxt = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedServiceType->gg.g;
    x->RequestedServiceType = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Query_PUT_RequestedServiceType) */

void zxwsf_di12_Query_PUT_RequestedServiceType(struct zxwsf_di12_Query_s* x, int n, struct zxwsf_di12_RequestedServiceType_s* z)
{
  struct zxwsf_di12_RequestedServiceType_s* y;
  if (!x || !z) return;
  y = x->RequestedServiceType;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedServiceType = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_Query_ADD_RequestedServiceType) */

void zxwsf_di12_Query_ADD_RequestedServiceType(struct zxwsf_di12_Query_s* x, int n, struct zxwsf_di12_RequestedServiceType_s* z)
{
  struct zxwsf_di12_RequestedServiceType_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedServiceType->gg.g;
    x->RequestedServiceType = z;
    return;
  case -1:
    y = x->RequestedServiceType;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedServiceType; n > 1 && y; --n, y = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_Query_DEL_RequestedServiceType) */

void zxwsf_di12_Query_DEL_RequestedServiceType(struct zxwsf_di12_Query_s* x, int n)
{
  struct zxwsf_di12_RequestedServiceType_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedServiceType = (struct zxwsf_di12_RequestedServiceType_s*)x->RequestedServiceType->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_RequestedServiceType_s*)x->RequestedServiceType;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedServiceType; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_RequestedServiceType_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_di12_Query_GET_id) */
struct zx_str_s* zxwsf_di12_Query_GET_id(struct zxwsf_di12_Query_s* x) { return x->id; }
/* FUNC(zxwsf_di12_Query_PUT_id) */
void zxwsf_di12_Query_PUT_id(struct zxwsf_di12_Query_s* x, struct zx_str_s* y) { x->id = y; }







/* FUNC(zxwsf_di12_QueryResponse_NUM_Status) */

int zxwsf_di12_QueryResponse_NUM_Status(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_QueryResponse_GET_Status) */

struct zxwsf_di12_Status_s* zxwsf_di12_QueryResponse_GET_Status(struct zxwsf_di12_QueryResponse_s* x, int n)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_QueryResponse_POP_Status) */

struct zxwsf_di12_Status_s* zxwsf_di12_QueryResponse_POP_Status(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_di12_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_QueryResponse_PUSH_Status) */

void zxwsf_di12_QueryResponse_PUSH_Status(struct zxwsf_di12_QueryResponse_s* x, struct zxwsf_di12_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di12_QueryResponse_REV_Status) */

void zxwsf_di12_QueryResponse_REV_Status(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_Status_s* nxt;
  struct zxwsf_di12_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_QueryResponse_PUT_Status) */

void zxwsf_di12_QueryResponse_PUT_Status(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_Status_s* z)
{
  struct zxwsf_di12_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_QueryResponse_ADD_Status) */

void zxwsf_di12_QueryResponse_ADD_Status(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_Status_s* z)
{
  struct zxwsf_di12_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_QueryResponse_DEL_Status) */

void zxwsf_di12_QueryResponse_DEL_Status(struct zxwsf_di12_QueryResponse_s* x, int n)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_di12_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di12_QueryResponse_NUM_ResourceOffering) */

int zxwsf_di12_QueryResponse_NUM_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceOffering; y; ++n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_QueryResponse_GET_ResourceOffering) */

struct zxwsf_di12_ResourceOffering_s* zxwsf_di12_QueryResponse_GET_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, int n)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x) return 0;
  for (y = x->ResourceOffering; n>=0 && y; --n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_QueryResponse_POP_ResourceOffering) */

struct zxwsf_di12_ResourceOffering_s* zxwsf_di12_QueryResponse_POP_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x) return 0;
  y = x->ResourceOffering;
  if (y)
    x->ResourceOffering = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_QueryResponse_PUSH_ResourceOffering) */

void zxwsf_di12_QueryResponse_PUSH_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, struct zxwsf_di12_ResourceOffering_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceOffering->gg.g;
  x->ResourceOffering = z;
}

/* FUNC(zxwsf_di12_QueryResponse_REV_ResourceOffering) */

void zxwsf_di12_QueryResponse_REV_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_ResourceOffering_s* nxt;
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x) return;
  y = x->ResourceOffering;
  if (!y) return;
  x->ResourceOffering = 0;
  while (y) {
    nxt = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceOffering->gg.g;
    x->ResourceOffering = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_QueryResponse_PUT_ResourceOffering) */

void zxwsf_di12_QueryResponse_PUT_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_ResourceOffering_s* z)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x || !z) return;
  y = x->ResourceOffering;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceOffering = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_QueryResponse_ADD_ResourceOffering) */

void zxwsf_di12_QueryResponse_ADD_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_ResourceOffering_s* z)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceOffering->gg.g;
    x->ResourceOffering = z;
    return;
  case -1:
    y = x->ResourceOffering;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceOffering; n > 1 && y; --n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_QueryResponse_DEL_ResourceOffering) */

void zxwsf_di12_QueryResponse_DEL_ResourceOffering(struct zxwsf_di12_QueryResponse_s* x, int n)
{
  struct zxwsf_di12_ResourceOffering_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceOffering = (struct zxwsf_di12_ResourceOffering_s*)x->ResourceOffering->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_ResourceOffering_s*)x->ResourceOffering;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceOffering; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di12_QueryResponse_NUM_Credentials) */

int zxwsf_di12_QueryResponse_NUM_Credentials(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_Credentials_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Credentials; y; ++n, y = (struct zxwsf_di12_Credentials_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_QueryResponse_GET_Credentials) */

struct zxwsf_di12_Credentials_s* zxwsf_di12_QueryResponse_GET_Credentials(struct zxwsf_di12_QueryResponse_s* x, int n)
{
  struct zxwsf_di12_Credentials_s* y;
  if (!x) return 0;
  for (y = x->Credentials; n>=0 && y; --n, y = (struct zxwsf_di12_Credentials_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_QueryResponse_POP_Credentials) */

struct zxwsf_di12_Credentials_s* zxwsf_di12_QueryResponse_POP_Credentials(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_Credentials_s* y;
  if (!x) return 0;
  y = x->Credentials;
  if (y)
    x->Credentials = (struct zxwsf_di12_Credentials_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_QueryResponse_PUSH_Credentials) */

void zxwsf_di12_QueryResponse_PUSH_Credentials(struct zxwsf_di12_QueryResponse_s* x, struct zxwsf_di12_Credentials_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Credentials->gg.g;
  x->Credentials = z;
}

/* FUNC(zxwsf_di12_QueryResponse_REV_Credentials) */

void zxwsf_di12_QueryResponse_REV_Credentials(struct zxwsf_di12_QueryResponse_s* x)
{
  struct zxwsf_di12_Credentials_s* nxt;
  struct zxwsf_di12_Credentials_s* y;
  if (!x) return;
  y = x->Credentials;
  if (!y) return;
  x->Credentials = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Credentials_s*)y->gg.g.n;
    y->gg.g.n = &x->Credentials->gg.g;
    x->Credentials = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_QueryResponse_PUT_Credentials) */

void zxwsf_di12_QueryResponse_PUT_Credentials(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_Credentials_s* z)
{
  struct zxwsf_di12_Credentials_s* y;
  if (!x || !z) return;
  y = x->Credentials;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Credentials = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Credentials_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_QueryResponse_ADD_Credentials) */

void zxwsf_di12_QueryResponse_ADD_Credentials(struct zxwsf_di12_QueryResponse_s* x, int n, struct zxwsf_di12_Credentials_s* z)
{
  struct zxwsf_di12_Credentials_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Credentials->gg.g;
    x->Credentials = z;
    return;
  case -1:
    y = x->Credentials;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Credentials_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credentials; n > 1 && y; --n, y = (struct zxwsf_di12_Credentials_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_QueryResponse_DEL_Credentials) */

void zxwsf_di12_QueryResponse_DEL_Credentials(struct zxwsf_di12_QueryResponse_s* x, int n)
{
  struct zxwsf_di12_Credentials_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Credentials = (struct zxwsf_di12_Credentials_s*)x->Credentials->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Credentials_s*)x->Credentials;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Credentials_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credentials; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Credentials_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_di12_QueryResponse_GET_id) */
struct zx_str_s* zxwsf_di12_QueryResponse_GET_id(struct zxwsf_di12_QueryResponse_s* x) { return x->id; }
/* FUNC(zxwsf_di12_QueryResponse_PUT_id) */
void zxwsf_di12_QueryResponse_PUT_id(struct zxwsf_di12_QueryResponse_s* x, struct zx_str_s* y) { x->id = y; }





/* FUNC(zxwsf_di12_RemoveEntry_GET_entryID) */
struct zx_str_s* zxwsf_di12_RemoveEntry_GET_entryID(struct zxwsf_di12_RemoveEntry_s* x) { return x->entryID; }
/* FUNC(zxwsf_di12_RemoveEntry_PUT_entryID) */
void zxwsf_di12_RemoveEntry_PUT_entryID(struct zxwsf_di12_RemoveEntry_s* x, struct zx_str_s* y) { x->entryID = y; }







/* FUNC(zxwsf_di12_RequestedServiceType_NUM_ServiceType) */

int zxwsf_di12_RequestedServiceType_NUM_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_RequestedServiceType_GET_ServiceType) */

struct zx_elem_s* zxwsf_di12_RequestedServiceType_GET_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_RequestedServiceType_POP_ServiceType) */

struct zx_elem_s* zxwsf_di12_RequestedServiceType_POP_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceType;
  if (y)
    x->ServiceType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_RequestedServiceType_PUSH_ServiceType) */

void zxwsf_di12_RequestedServiceType_PUSH_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceType->g;
  x->ServiceType = z;
}

/* FUNC(zxwsf_di12_RequestedServiceType_REV_ServiceType) */

void zxwsf_di12_RequestedServiceType_REV_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceType;
  if (!y) return;
  x->ServiceType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceType->g;
    x->ServiceType = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_RequestedServiceType_PUT_ServiceType) */

void zxwsf_di12_RequestedServiceType_PUT_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_RequestedServiceType_ADD_ServiceType) */

void zxwsf_di12_RequestedServiceType_ADD_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceType->g;
    x->ServiceType = z;
    return;
  case -1:
    y = x->ServiceType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_RequestedServiceType_DEL_ServiceType) */

void zxwsf_di12_RequestedServiceType_DEL_ServiceType(struct zxwsf_di12_RequestedServiceType_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceType = (struct zx_elem_s*)x->ServiceType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di12_RequestedServiceType_NUM_Options) */

int zxwsf_di12_RequestedServiceType_NUM_Options(struct zxwsf_di12_RequestedServiceType_s* x)
{
  struct zxwsf_di12_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_RequestedServiceType_GET_Options) */

struct zxwsf_di12_Options_s* zxwsf_di12_RequestedServiceType_GET_Options(struct zxwsf_di12_RequestedServiceType_s* x, int n)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_RequestedServiceType_POP_Options) */

struct zxwsf_di12_Options_s* zxwsf_di12_RequestedServiceType_POP_Options(struct zxwsf_di12_RequestedServiceType_s* x)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zxwsf_di12_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_RequestedServiceType_PUSH_Options) */

void zxwsf_di12_RequestedServiceType_PUSH_Options(struct zxwsf_di12_RequestedServiceType_s* x, struct zxwsf_di12_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zxwsf_di12_RequestedServiceType_REV_Options) */

void zxwsf_di12_RequestedServiceType_REV_Options(struct zxwsf_di12_RequestedServiceType_s* x)
{
  struct zxwsf_di12_Options_s* nxt;
  struct zxwsf_di12_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_RequestedServiceType_PUT_Options) */

void zxwsf_di12_RequestedServiceType_PUT_Options(struct zxwsf_di12_RequestedServiceType_s* x, int n, struct zxwsf_di12_Options_s* z)
{
  struct zxwsf_di12_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_RequestedServiceType_ADD_Options) */

void zxwsf_di12_RequestedServiceType_ADD_Options(struct zxwsf_di12_RequestedServiceType_s* x, int n, struct zxwsf_di12_Options_s* z)
{
  struct zxwsf_di12_Options_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Options->gg.g;
    x->Options = z;
    return;
  case -1:
    y = x->Options;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_RequestedServiceType_DEL_Options) */

void zxwsf_di12_RequestedServiceType_DEL_Options(struct zxwsf_di12_RequestedServiceType_s* x, int n)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zxwsf_di12_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}






/* FUNC(zxwsf_di12_ResourceID_GET_id) */
struct zx_str_s* zxwsf_di12_ResourceID_GET_id(struct zxwsf_di12_ResourceID_s* x) { return x->id; }
/* FUNC(zxwsf_di12_ResourceID_PUT_id) */
void zxwsf_di12_ResourceID_PUT_id(struct zxwsf_di12_ResourceID_s* x, struct zx_str_s* y) { x->id = y; }







/* FUNC(zxwsf_di12_ResourceOffering_NUM_ServiceInstance) */

int zxwsf_di12_ResourceOffering_NUM_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceInstance; y; ++n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_ResourceOffering_GET_ServiceInstance) */

struct zxwsf_di12_ServiceInstance_s* zxwsf_di12_ResourceOffering_GET_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, int n)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x) return 0;
  for (y = x->ServiceInstance; n>=0 && y; --n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_ResourceOffering_POP_ServiceInstance) */

struct zxwsf_di12_ServiceInstance_s* zxwsf_di12_ResourceOffering_POP_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x) return 0;
  y = x->ServiceInstance;
  if (y)
    x->ServiceInstance = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_ResourceOffering_PUSH_ServiceInstance) */

void zxwsf_di12_ResourceOffering_PUSH_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, struct zxwsf_di12_ServiceInstance_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceInstance->gg.g;
  x->ServiceInstance = z;
}

/* FUNC(zxwsf_di12_ResourceOffering_REV_ServiceInstance) */

void zxwsf_di12_ResourceOffering_REV_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zxwsf_di12_ServiceInstance_s* nxt;
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x) return;
  y = x->ServiceInstance;
  if (!y) return;
  x->ServiceInstance = 0;
  while (y) {
    nxt = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceInstance->gg.g;
    x->ServiceInstance = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_ResourceOffering_PUT_ServiceInstance) */

void zxwsf_di12_ResourceOffering_PUT_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zxwsf_di12_ServiceInstance_s* z)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x || !z) return;
  y = x->ServiceInstance;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceInstance = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_ResourceOffering_ADD_ServiceInstance) */

void zxwsf_di12_ResourceOffering_ADD_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zxwsf_di12_ServiceInstance_s* z)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceInstance->gg.g;
    x->ServiceInstance = z;
    return;
  case -1:
    y = x->ServiceInstance;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceInstance; n > 1 && y; --n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_ResourceOffering_DEL_ServiceInstance) */

void zxwsf_di12_ResourceOffering_DEL_ServiceInstance(struct zxwsf_di12_ResourceOffering_s* x, int n)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceInstance = (struct zxwsf_di12_ServiceInstance_s*)x->ServiceInstance->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_ServiceInstance_s*)x->ServiceInstance;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceInstance; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di12_ResourceOffering_NUM_Options) */

int zxwsf_di12_ResourceOffering_NUM_Options(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zxwsf_di12_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_ResourceOffering_GET_Options) */

struct zxwsf_di12_Options_s* zxwsf_di12_ResourceOffering_GET_Options(struct zxwsf_di12_ResourceOffering_s* x, int n)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_ResourceOffering_POP_Options) */

struct zxwsf_di12_Options_s* zxwsf_di12_ResourceOffering_POP_Options(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zxwsf_di12_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_ResourceOffering_PUSH_Options) */

void zxwsf_di12_ResourceOffering_PUSH_Options(struct zxwsf_di12_ResourceOffering_s* x, struct zxwsf_di12_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zxwsf_di12_ResourceOffering_REV_Options) */

void zxwsf_di12_ResourceOffering_REV_Options(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zxwsf_di12_Options_s* nxt;
  struct zxwsf_di12_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_ResourceOffering_PUT_Options) */

void zxwsf_di12_ResourceOffering_PUT_Options(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zxwsf_di12_Options_s* z)
{
  struct zxwsf_di12_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_ResourceOffering_ADD_Options) */

void zxwsf_di12_ResourceOffering_ADD_Options(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zxwsf_di12_Options_s* z)
{
  struct zxwsf_di12_Options_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Options->gg.g;
    x->Options = z;
    return;
  case -1:
    y = x->Options;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_ResourceOffering_DEL_Options) */

void zxwsf_di12_ResourceOffering_DEL_Options(struct zxwsf_di12_ResourceOffering_s* x, int n)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zxwsf_di12_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di12_ResourceOffering_NUM_Abstract) */

int zxwsf_di12_ResourceOffering_NUM_Abstract(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Abstract; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_ResourceOffering_GET_Abstract) */

struct zx_elem_s* zxwsf_di12_ResourceOffering_GET_Abstract(struct zxwsf_di12_ResourceOffering_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Abstract; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_ResourceOffering_POP_Abstract) */

struct zx_elem_s* zxwsf_di12_ResourceOffering_POP_Abstract(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Abstract;
  if (y)
    x->Abstract = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_ResourceOffering_PUSH_Abstract) */

void zxwsf_di12_ResourceOffering_PUSH_Abstract(struct zxwsf_di12_ResourceOffering_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Abstract->g;
  x->Abstract = z;
}

/* FUNC(zxwsf_di12_ResourceOffering_REV_Abstract) */

void zxwsf_di12_ResourceOffering_REV_Abstract(struct zxwsf_di12_ResourceOffering_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Abstract;
  if (!y) return;
  x->Abstract = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Abstract->g;
    x->Abstract = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_ResourceOffering_PUT_Abstract) */

void zxwsf_di12_ResourceOffering_PUT_Abstract(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Abstract;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Abstract = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_ResourceOffering_ADD_Abstract) */

void zxwsf_di12_ResourceOffering_ADD_Abstract(struct zxwsf_di12_ResourceOffering_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Abstract->g;
    x->Abstract = z;
    return;
  case -1:
    y = x->Abstract;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Abstract; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_ResourceOffering_DEL_Abstract) */

void zxwsf_di12_ResourceOffering_DEL_Abstract(struct zxwsf_di12_ResourceOffering_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Abstract = (struct zx_elem_s*)x->Abstract->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Abstract;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Abstract; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_di12_ResourceOffering_GET_entryID) */
struct zx_str_s* zxwsf_di12_ResourceOffering_GET_entryID(struct zxwsf_di12_ResourceOffering_s* x) { return x->entryID; }
/* FUNC(zxwsf_di12_ResourceOffering_PUT_entryID) */
void zxwsf_di12_ResourceOffering_PUT_entryID(struct zxwsf_di12_ResourceOffering_s* x, struct zx_str_s* y) { x->entryID = y; }







/* FUNC(zxwsf_di12_ServiceInstance_NUM_ServiceType) */

int zxwsf_di12_ServiceInstance_NUM_ServiceType(struct zxwsf_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_ServiceInstance_GET_ServiceType) */

struct zx_elem_s* zxwsf_di12_ServiceInstance_GET_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_ServiceInstance_POP_ServiceType) */

struct zx_elem_s* zxwsf_di12_ServiceInstance_POP_ServiceType(struct zxwsf_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceType;
  if (y)
    x->ServiceType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_ServiceInstance_PUSH_ServiceType) */

void zxwsf_di12_ServiceInstance_PUSH_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceType->g;
  x->ServiceType = z;
}

/* FUNC(zxwsf_di12_ServiceInstance_REV_ServiceType) */

void zxwsf_di12_ServiceInstance_REV_ServiceType(struct zxwsf_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceType;
  if (!y) return;
  x->ServiceType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceType->g;
    x->ServiceType = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_ServiceInstance_PUT_ServiceType) */

void zxwsf_di12_ServiceInstance_PUT_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di12_ServiceInstance_ADD_ServiceType) */

void zxwsf_di12_ServiceInstance_ADD_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceType->g;
    x->ServiceType = z;
    return;
  case -1:
    y = x->ServiceType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di12_ServiceInstance_DEL_ServiceType) */

void zxwsf_di12_ServiceInstance_DEL_ServiceType(struct zxwsf_di12_ServiceInstance_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceType = (struct zx_elem_s*)x->ServiceType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di12_ServiceInstance_NUM_ProviderID) */

int zxwsf_di12_ServiceInstance_NUM_ProviderID(struct zxwsf_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_ServiceInstance_GET_ProviderID) */

struct zx_elem_s* zxwsf_di12_ServiceInstance_GET_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_ServiceInstance_POP_ProviderID) */

struct zx_elem_s* zxwsf_di12_ServiceInstance_POP_ProviderID(struct zxwsf_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di12_ServiceInstance_PUSH_ProviderID) */

void zxwsf_di12_ServiceInstance_PUSH_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zxwsf_di12_ServiceInstance_REV_ProviderID) */

void zxwsf_di12_ServiceInstance_REV_ProviderID(struct zxwsf_di12_ServiceInstance_s* x)
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

/* FUNC(zxwsf_di12_ServiceInstance_PUT_ProviderID) */

void zxwsf_di12_ServiceInstance_PUT_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di12_ServiceInstance_ADD_ProviderID) */

void zxwsf_di12_ServiceInstance_ADD_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di12_ServiceInstance_DEL_ProviderID) */

void zxwsf_di12_ServiceInstance_DEL_ProviderID(struct zxwsf_di12_ServiceInstance_s* x, int n)
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



/* FUNC(zxwsf_di12_ServiceInstance_NUM_Description) */

int zxwsf_di12_ServiceInstance_NUM_Description(struct zxwsf_di12_ServiceInstance_s* x)
{
  struct zxwsf_di12_Description_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Description; y; ++n, y = (struct zxwsf_di12_Description_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_ServiceInstance_GET_Description) */

struct zxwsf_di12_Description_s* zxwsf_di12_ServiceInstance_GET_Description(struct zxwsf_di12_ServiceInstance_s* x, int n)
{
  struct zxwsf_di12_Description_s* y;
  if (!x) return 0;
  for (y = x->Description; n>=0 && y; --n, y = (struct zxwsf_di12_Description_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_ServiceInstance_POP_Description) */

struct zxwsf_di12_Description_s* zxwsf_di12_ServiceInstance_POP_Description(struct zxwsf_di12_ServiceInstance_s* x)
{
  struct zxwsf_di12_Description_s* y;
  if (!x) return 0;
  y = x->Description;
  if (y)
    x->Description = (struct zxwsf_di12_Description_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_ServiceInstance_PUSH_Description) */

void zxwsf_di12_ServiceInstance_PUSH_Description(struct zxwsf_di12_ServiceInstance_s* x, struct zxwsf_di12_Description_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Description->gg.g;
  x->Description = z;
}

/* FUNC(zxwsf_di12_ServiceInstance_REV_Description) */

void zxwsf_di12_ServiceInstance_REV_Description(struct zxwsf_di12_ServiceInstance_s* x)
{
  struct zxwsf_di12_Description_s* nxt;
  struct zxwsf_di12_Description_s* y;
  if (!x) return;
  y = x->Description;
  if (!y) return;
  x->Description = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Description_s*)y->gg.g.n;
    y->gg.g.n = &x->Description->gg.g;
    x->Description = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_ServiceInstance_PUT_Description) */

void zxwsf_di12_ServiceInstance_PUT_Description(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zxwsf_di12_Description_s* z)
{
  struct zxwsf_di12_Description_s* y;
  if (!x || !z) return;
  y = x->Description;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Description = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Description_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_ServiceInstance_ADD_Description) */

void zxwsf_di12_ServiceInstance_ADD_Description(struct zxwsf_di12_ServiceInstance_s* x, int n, struct zxwsf_di12_Description_s* z)
{
  struct zxwsf_di12_Description_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Description->gg.g;
    x->Description = z;
    return;
  case -1:
    y = x->Description;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Description_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y; --n, y = (struct zxwsf_di12_Description_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_ServiceInstance_DEL_Description) */

void zxwsf_di12_ServiceInstance_DEL_Description(struct zxwsf_di12_ServiceInstance_s* x, int n)
{
  struct zxwsf_di12_Description_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Description = (struct zxwsf_di12_Description_s*)x->Description->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Description_s*)x->Description;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Description_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Description_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di12_Status_NUM_Status) */

int zxwsf_di12_Status_NUM_Status(struct zxwsf_di12_Status_s* x)
{
  struct zxwsf_di12_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di12_Status_GET_Status) */

struct zxwsf_di12_Status_s* zxwsf_di12_Status_GET_Status(struct zxwsf_di12_Status_s* x, int n)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di12_Status_POP_Status) */

struct zxwsf_di12_Status_s* zxwsf_di12_Status_POP_Status(struct zxwsf_di12_Status_s* x)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_di12_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di12_Status_PUSH_Status) */

void zxwsf_di12_Status_PUSH_Status(struct zxwsf_di12_Status_s* x, struct zxwsf_di12_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di12_Status_REV_Status) */

void zxwsf_di12_Status_REV_Status(struct zxwsf_di12_Status_s* x)
{
  struct zxwsf_di12_Status_s* nxt;
  struct zxwsf_di12_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di12_Status_PUT_Status) */

void zxwsf_di12_Status_PUT_Status(struct zxwsf_di12_Status_s* x, int n, struct zxwsf_di12_Status_s* z)
{
  struct zxwsf_di12_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di12_Status_ADD_Status) */

void zxwsf_di12_Status_ADD_Status(struct zxwsf_di12_Status_s* x, int n, struct zxwsf_di12_Status_s* z)
{
  struct zxwsf_di12_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di12_Status_DEL_Status) */

void zxwsf_di12_Status_DEL_Status(struct zxwsf_di12_Status_s* x, int n)
{
  struct zxwsf_di12_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_di12_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_di12_Status_GET_code) */
struct zx_str_s* zxwsf_di12_Status_GET_code(struct zxwsf_di12_Status_s* x) { return x->code; }
/* FUNC(zxwsf_di12_Status_PUT_code) */
void zxwsf_di12_Status_PUT_code(struct zxwsf_di12_Status_s* x, struct zx_str_s* y) { x->code = y; }
/* FUNC(zxwsf_di12_Status_GET_ref) */
struct zx_str_s* zxwsf_di12_Status_GET_ref(struct zxwsf_di12_Status_s* x) { return x->ref; }
/* FUNC(zxwsf_di12_Status_PUT_ref) */
void zxwsf_di12_Status_PUT_ref(struct zxwsf_di12_Status_s* x, struct zx_str_s* y) { x->ref = y; }
/* FUNC(zxwsf_di12_Status_GET_comment) */
struct zx_str_s* zxwsf_di12_Status_GET_comment(struct zxwsf_di12_Status_s* x) { return x->comment; }
/* FUNC(zxwsf_di12_Status_PUT_comment) */
void zxwsf_di12_Status_PUT_comment(struct zxwsf_di12_Status_s* x, struct zx_str_s* y) { x->comment = y; }







/* FUNC(zxwsf_di_EndpointContext_NUM_Address) */

int zxwsf_di_EndpointContext_NUM_Address(struct zxwsf_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_EndpointContext_GET_Address) */

struct zx_elem_s* zxwsf_di_EndpointContext_GET_Address(struct zxwsf_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_EndpointContext_POP_Address) */

struct zx_elem_s* zxwsf_di_EndpointContext_POP_Address(struct zxwsf_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_EndpointContext_PUSH_Address) */

void zxwsf_di_EndpointContext_PUSH_Address(struct zxwsf_di_EndpointContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Address->g;
  x->Address = z;
}

/* FUNC(zxwsf_di_EndpointContext_REV_Address) */

void zxwsf_di_EndpointContext_REV_Address(struct zxwsf_di_EndpointContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Address;
  if (!y) return;
  x->Address = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Address->g;
    x->Address = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_EndpointContext_PUT_Address) */

void zxwsf_di_EndpointContext_PUT_Address(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Address = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_EndpointContext_ADD_Address) */

void zxwsf_di_EndpointContext_ADD_Address(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Address->g;
    x->Address = z;
    return;
  case -1:
    y = x->Address;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_EndpointContext_DEL_Address) */

void zxwsf_di_EndpointContext_DEL_Address(struct zxwsf_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Address = (struct zx_elem_s*)x->Address->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Address;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Address; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di_EndpointContext_NUM_Framework) */

int zxwsf_di_EndpointContext_NUM_Framework(struct zxwsf_di_EndpointContext_s* x)
{
  struct zxwsf_sbf_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_EndpointContext_GET_Framework) */

struct zxwsf_sbf_Framework_s* zxwsf_di_EndpointContext_GET_Framework(struct zxwsf_di_EndpointContext_s* x, int n)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_EndpointContext_POP_Framework) */

struct zxwsf_sbf_Framework_s* zxwsf_di_EndpointContext_POP_Framework(struct zxwsf_di_EndpointContext_s* x)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zxwsf_sbf_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_EndpointContext_PUSH_Framework) */

void zxwsf_di_EndpointContext_PUSH_Framework(struct zxwsf_di_EndpointContext_s* x, struct zxwsf_sbf_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zxwsf_di_EndpointContext_REV_Framework) */

void zxwsf_di_EndpointContext_REV_Framework(struct zxwsf_di_EndpointContext_s* x)
{
  struct zxwsf_sbf_Framework_s* nxt;
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return;
  y = x->Framework;
  if (!y) return;
  x->Framework = 0;
  while (y) {
    nxt = (struct zxwsf_sbf_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->Framework->gg.g;
    x->Framework = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_EndpointContext_PUT_Framework) */

void zxwsf_di_EndpointContext_PUT_Framework(struct zxwsf_di_EndpointContext_s* x, int n, struct zxwsf_sbf_Framework_s* z)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x || !z) return;
  y = x->Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_EndpointContext_ADD_Framework) */

void zxwsf_di_EndpointContext_ADD_Framework(struct zxwsf_di_EndpointContext_s* x, int n, struct zxwsf_sbf_Framework_s* z)
{
  struct zxwsf_sbf_Framework_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_EndpointContext_DEL_Framework) */

void zxwsf_di_EndpointContext_DEL_Framework(struct zxwsf_di_EndpointContext_s* x, int n)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Framework = (struct zxwsf_sbf_Framework_s*)x->Framework->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_sbf_Framework_s*)x->Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di_EndpointContext_NUM_SecurityMechID) */

int zxwsf_di_EndpointContext_NUM_SecurityMechID(struct zxwsf_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_EndpointContext_GET_SecurityMechID) */

struct zx_elem_s* zxwsf_di_EndpointContext_GET_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_EndpointContext_POP_SecurityMechID) */

struct zx_elem_s* zxwsf_di_EndpointContext_POP_SecurityMechID(struct zxwsf_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_EndpointContext_PUSH_SecurityMechID) */

void zxwsf_di_EndpointContext_PUSH_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zxwsf_di_EndpointContext_REV_SecurityMechID) */

void zxwsf_di_EndpointContext_REV_SecurityMechID(struct zxwsf_di_EndpointContext_s* x)
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

/* FUNC(zxwsf_di_EndpointContext_PUT_SecurityMechID) */

void zxwsf_di_EndpointContext_PUT_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_EndpointContext_ADD_SecurityMechID) */

void zxwsf_di_EndpointContext_ADD_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_EndpointContext_DEL_SecurityMechID) */

void zxwsf_di_EndpointContext_DEL_SecurityMechID(struct zxwsf_di_EndpointContext_s* x, int n)
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



/* FUNC(zxwsf_di_EndpointContext_NUM_Action) */

int zxwsf_di_EndpointContext_NUM_Action(struct zxwsf_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_EndpointContext_GET_Action) */

struct zx_elem_s* zxwsf_di_EndpointContext_GET_Action(struct zxwsf_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_EndpointContext_POP_Action) */

struct zx_elem_s* zxwsf_di_EndpointContext_POP_Action(struct zxwsf_di_EndpointContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_EndpointContext_PUSH_Action) */

void zxwsf_di_EndpointContext_PUSH_Action(struct zxwsf_di_EndpointContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Action->g;
  x->Action = z;
}

/* FUNC(zxwsf_di_EndpointContext_REV_Action) */

void zxwsf_di_EndpointContext_REV_Action(struct zxwsf_di_EndpointContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Action->g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_EndpointContext_PUT_Action) */

void zxwsf_di_EndpointContext_PUT_Action(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_EndpointContext_ADD_Action) */

void zxwsf_di_EndpointContext_ADD_Action(struct zxwsf_di_EndpointContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Action->g;
    x->Action = z;
    return;
  case -1:
    y = x->Action;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_EndpointContext_DEL_Action) */

void zxwsf_di_EndpointContext_DEL_Action(struct zxwsf_di_EndpointContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_elem_s*)x->Action->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Action;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}






/* FUNC(zxwsf_di_Framework_GET_version) */
struct zx_str_s* zxwsf_di_Framework_GET_version(struct zxwsf_di_Framework_s* x) { return x->version; }
/* FUNC(zxwsf_di_Framework_PUT_version) */
void zxwsf_di_Framework_PUT_version(struct zxwsf_di_Framework_s* x, struct zx_str_s* y) { x->version = y; }







/* FUNC(zxwsf_di_Keys_NUM_KeyDescriptor) */

int zxwsf_di_Keys_NUM_KeyDescriptor(struct zxwsf_di_Keys_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyDescriptor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_Keys_GET_KeyDescriptor) */

struct zx_elem_s* zxwsf_di_Keys_GET_KeyDescriptor(struct zxwsf_di_Keys_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyDescriptor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_Keys_POP_KeyDescriptor) */

struct zx_elem_s* zxwsf_di_Keys_POP_KeyDescriptor(struct zxwsf_di_Keys_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyDescriptor;
  if (y)
    x->KeyDescriptor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_Keys_PUSH_KeyDescriptor) */

void zxwsf_di_Keys_PUSH_KeyDescriptor(struct zxwsf_di_Keys_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyDescriptor->g;
  x->KeyDescriptor = z;
}

/* FUNC(zxwsf_di_Keys_REV_KeyDescriptor) */

void zxwsf_di_Keys_REV_KeyDescriptor(struct zxwsf_di_Keys_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyDescriptor;
  if (!y) return;
  x->KeyDescriptor = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyDescriptor->g;
    x->KeyDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_Keys_PUT_KeyDescriptor) */

void zxwsf_di_Keys_PUT_KeyDescriptor(struct zxwsf_di_Keys_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyDescriptor = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_Keys_ADD_KeyDescriptor) */

void zxwsf_di_Keys_ADD_KeyDescriptor(struct zxwsf_di_Keys_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyDescriptor->g;
    x->KeyDescriptor = z;
    return;
  case -1:
    y = x->KeyDescriptor;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_Keys_DEL_KeyDescriptor) */

void zxwsf_di_Keys_DEL_KeyDescriptor(struct zxwsf_di_Keys_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyDescriptor = (struct zx_elem_s*)x->KeyDescriptor->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyDescriptor;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyDescriptor; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di_Options_NUM_Option) */

int zxwsf_di_Options_NUM_Option(struct zxwsf_di_Options_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Option; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_Options_GET_Option) */

struct zx_elem_s* zxwsf_di_Options_GET_Option(struct zxwsf_di_Options_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Option; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_Options_POP_Option) */

struct zx_elem_s* zxwsf_di_Options_POP_Option(struct zxwsf_di_Options_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Option;
  if (y)
    x->Option = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_Options_PUSH_Option) */

void zxwsf_di_Options_PUSH_Option(struct zxwsf_di_Options_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Option->g;
  x->Option = z;
}

/* FUNC(zxwsf_di_Options_REV_Option) */

void zxwsf_di_Options_REV_Option(struct zxwsf_di_Options_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Option;
  if (!y) return;
  x->Option = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Option->g;
    x->Option = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_Options_PUT_Option) */

void zxwsf_di_Options_PUT_Option(struct zxwsf_di_Options_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Option;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Option = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_Options_ADD_Option) */

void zxwsf_di_Options_ADD_Option(struct zxwsf_di_Options_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Option->g;
    x->Option = z;
    return;
  case -1:
    y = x->Option;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Option; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_Options_DEL_Option) */

void zxwsf_di_Options_DEL_Option(struct zxwsf_di_Options_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Option = (struct zx_elem_s*)x->Option->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Option;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Option; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di_Query_NUM_RequestedService) */

int zxwsf_di_Query_NUM_RequestedService(struct zxwsf_di_Query_s* x)
{
  struct zxwsf_di_RequestedService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedService; y; ++n, y = (struct zxwsf_di_RequestedService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_Query_GET_RequestedService) */

struct zxwsf_di_RequestedService_s* zxwsf_di_Query_GET_RequestedService(struct zxwsf_di_Query_s* x, int n)
{
  struct zxwsf_di_RequestedService_s* y;
  if (!x) return 0;
  for (y = x->RequestedService; n>=0 && y; --n, y = (struct zxwsf_di_RequestedService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_Query_POP_RequestedService) */

struct zxwsf_di_RequestedService_s* zxwsf_di_Query_POP_RequestedService(struct zxwsf_di_Query_s* x)
{
  struct zxwsf_di_RequestedService_s* y;
  if (!x) return 0;
  y = x->RequestedService;
  if (y)
    x->RequestedService = (struct zxwsf_di_RequestedService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_Query_PUSH_RequestedService) */

void zxwsf_di_Query_PUSH_RequestedService(struct zxwsf_di_Query_s* x, struct zxwsf_di_RequestedService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedService->gg.g;
  x->RequestedService = z;
}

/* FUNC(zxwsf_di_Query_REV_RequestedService) */

void zxwsf_di_Query_REV_RequestedService(struct zxwsf_di_Query_s* x)
{
  struct zxwsf_di_RequestedService_s* nxt;
  struct zxwsf_di_RequestedService_s* y;
  if (!x) return;
  y = x->RequestedService;
  if (!y) return;
  x->RequestedService = 0;
  while (y) {
    nxt = (struct zxwsf_di_RequestedService_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedService->gg.g;
    x->RequestedService = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_Query_PUT_RequestedService) */

void zxwsf_di_Query_PUT_RequestedService(struct zxwsf_di_Query_s* x, int n, struct zxwsf_di_RequestedService_s* z)
{
  struct zxwsf_di_RequestedService_s* y;
  if (!x || !z) return;
  y = x->RequestedService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_RequestedService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_Query_ADD_RequestedService) */

void zxwsf_di_Query_ADD_RequestedService(struct zxwsf_di_Query_s* x, int n, struct zxwsf_di_RequestedService_s* z)
{
  struct zxwsf_di_RequestedService_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_RequestedService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedService; n > 1 && y; --n, y = (struct zxwsf_di_RequestedService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_Query_DEL_RequestedService) */

void zxwsf_di_Query_DEL_RequestedService(struct zxwsf_di_Query_s* x, int n)
{
  struct zxwsf_di_RequestedService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedService = (struct zxwsf_di_RequestedService_s*)x->RequestedService->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_RequestedService_s*)x->RequestedService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_RequestedService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedService; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_RequestedService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_QueryResponse_NUM_Status) */

int zxwsf_di_QueryResponse_NUM_Status(struct zxwsf_di_QueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_QueryResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_QueryResponse_GET_Status(struct zxwsf_di_QueryResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_QueryResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_QueryResponse_POP_Status(struct zxwsf_di_QueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_QueryResponse_PUSH_Status) */

void zxwsf_di_QueryResponse_PUSH_Status(struct zxwsf_di_QueryResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di_QueryResponse_REV_Status) */

void zxwsf_di_QueryResponse_REV_Status(struct zxwsf_di_QueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_QueryResponse_PUT_Status) */

void zxwsf_di_QueryResponse_PUT_Status(struct zxwsf_di_QueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_QueryResponse_ADD_Status) */

void zxwsf_di_QueryResponse_ADD_Status(struct zxwsf_di_QueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_QueryResponse_DEL_Status) */

void zxwsf_di_QueryResponse_DEL_Status(struct zxwsf_di_QueryResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di_QueryResponse_NUM_EndpointReference) */

int zxwsf_di_QueryResponse_NUM_EndpointReference(struct zxwsf_di_QueryResponse_s* x)
{
  struct zxwsf_a_EndpointReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointReference; y; ++n, y = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_QueryResponse_GET_EndpointReference) */

struct zxwsf_a_EndpointReference_s* zxwsf_di_QueryResponse_GET_EndpointReference(struct zxwsf_di_QueryResponse_s* x, int n)
{
  struct zxwsf_a_EndpointReference_s* y;
  if (!x) return 0;
  for (y = x->EndpointReference; n>=0 && y; --n, y = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_QueryResponse_POP_EndpointReference) */

struct zxwsf_a_EndpointReference_s* zxwsf_di_QueryResponse_POP_EndpointReference(struct zxwsf_di_QueryResponse_s* x)
{
  struct zxwsf_a_EndpointReference_s* y;
  if (!x) return 0;
  y = x->EndpointReference;
  if (y)
    x->EndpointReference = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_QueryResponse_PUSH_EndpointReference) */

void zxwsf_di_QueryResponse_PUSH_EndpointReference(struct zxwsf_di_QueryResponse_s* x, struct zxwsf_a_EndpointReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointReference->gg.g;
  x->EndpointReference = z;
}

/* FUNC(zxwsf_di_QueryResponse_REV_EndpointReference) */

void zxwsf_di_QueryResponse_REV_EndpointReference(struct zxwsf_di_QueryResponse_s* x)
{
  struct zxwsf_a_EndpointReference_s* nxt;
  struct zxwsf_a_EndpointReference_s* y;
  if (!x) return;
  y = x->EndpointReference;
  if (!y) return;
  x->EndpointReference = 0;
  while (y) {
    nxt = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_QueryResponse_PUT_EndpointReference) */

void zxwsf_di_QueryResponse_PUT_EndpointReference(struct zxwsf_di_QueryResponse_s* x, int n, struct zxwsf_a_EndpointReference_s* z)
{
  struct zxwsf_a_EndpointReference_s* y;
  if (!x || !z) return;
  y = x->EndpointReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_QueryResponse_ADD_EndpointReference) */

void zxwsf_di_QueryResponse_ADD_EndpointReference(struct zxwsf_di_QueryResponse_s* x, int n, struct zxwsf_a_EndpointReference_s* z)
{
  struct zxwsf_a_EndpointReference_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y; --n, y = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_QueryResponse_DEL_EndpointReference) */

void zxwsf_di_QueryResponse_DEL_EndpointReference(struct zxwsf_di_QueryResponse_s* x, int n)
{
  struct zxwsf_a_EndpointReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointReference = (struct zxwsf_a_EndpointReference_s*)x->EndpointReference->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_EndpointReference_s*)x->EndpointReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_RequestedService_NUM_ServiceType) */

int zxwsf_di_RequestedService_NUM_ServiceType(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_RequestedService_GET_ServiceType) */

struct zx_elem_s* zxwsf_di_RequestedService_GET_ServiceType(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_POP_ServiceType) */

struct zx_elem_s* zxwsf_di_RequestedService_POP_ServiceType(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceType;
  if (y)
    x->ServiceType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_PUSH_ServiceType) */

void zxwsf_di_RequestedService_PUSH_ServiceType(struct zxwsf_di_RequestedService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceType->g;
  x->ServiceType = z;
}

/* FUNC(zxwsf_di_RequestedService_REV_ServiceType) */

void zxwsf_di_RequestedService_REV_ServiceType(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceType;
  if (!y) return;
  x->ServiceType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceType->g;
    x->ServiceType = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_RequestedService_PUT_ServiceType) */

void zxwsf_di_RequestedService_PUT_ServiceType(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_RequestedService_ADD_ServiceType) */

void zxwsf_di_RequestedService_ADD_ServiceType(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceType->g;
    x->ServiceType = z;
    return;
  case -1:
    y = x->ServiceType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_RequestedService_DEL_ServiceType) */

void zxwsf_di_RequestedService_DEL_ServiceType(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceType = (struct zx_elem_s*)x->ServiceType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di_RequestedService_NUM_ProviderID) */

int zxwsf_di_RequestedService_NUM_ProviderID(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_RequestedService_GET_ProviderID) */

struct zx_elem_s* zxwsf_di_RequestedService_GET_ProviderID(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_POP_ProviderID) */

struct zx_elem_s* zxwsf_di_RequestedService_POP_ProviderID(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_PUSH_ProviderID) */

void zxwsf_di_RequestedService_PUSH_ProviderID(struct zxwsf_di_RequestedService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zxwsf_di_RequestedService_REV_ProviderID) */

void zxwsf_di_RequestedService_REV_ProviderID(struct zxwsf_di_RequestedService_s* x)
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

/* FUNC(zxwsf_di_RequestedService_PUT_ProviderID) */

void zxwsf_di_RequestedService_PUT_ProviderID(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_RequestedService_ADD_ProviderID) */

void zxwsf_di_RequestedService_ADD_ProviderID(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_RequestedService_DEL_ProviderID) */

void zxwsf_di_RequestedService_DEL_ProviderID(struct zxwsf_di_RequestedService_s* x, int n)
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



/* FUNC(zxwsf_di_RequestedService_NUM_Options) */

int zxwsf_di_RequestedService_NUM_Options(struct zxwsf_di_RequestedService_s* x)
{
  struct zxwsf_di_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_RequestedService_GET_Options) */

struct zxwsf_di_Options_s* zxwsf_di_RequestedService_GET_Options(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zxwsf_di_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_POP_Options) */

struct zxwsf_di_Options_s* zxwsf_di_RequestedService_POP_Options(struct zxwsf_di_RequestedService_s* x)
{
  struct zxwsf_di_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zxwsf_di_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_PUSH_Options) */

void zxwsf_di_RequestedService_PUSH_Options(struct zxwsf_di_RequestedService_s* x, struct zxwsf_di_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zxwsf_di_RequestedService_REV_Options) */

void zxwsf_di_RequestedService_REV_Options(struct zxwsf_di_RequestedService_s* x)
{
  struct zxwsf_di_Options_s* nxt;
  struct zxwsf_di_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zxwsf_di_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_RequestedService_PUT_Options) */

void zxwsf_di_RequestedService_PUT_Options(struct zxwsf_di_RequestedService_s* x, int n, struct zxwsf_di_Options_s* z)
{
  struct zxwsf_di_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_RequestedService_ADD_Options) */

void zxwsf_di_RequestedService_ADD_Options(struct zxwsf_di_RequestedService_s* x, int n, struct zxwsf_di_Options_s* z)
{
  struct zxwsf_di_Options_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Options->gg.g;
    x->Options = z;
    return;
  case -1:
    y = x->Options;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_RequestedService_DEL_Options) */

void zxwsf_di_RequestedService_DEL_Options(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zxwsf_di_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zxwsf_di_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di_RequestedService_NUM_SecurityMechID) */

int zxwsf_di_RequestedService_NUM_SecurityMechID(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_RequestedService_GET_SecurityMechID) */

struct zx_elem_s* zxwsf_di_RequestedService_GET_SecurityMechID(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_POP_SecurityMechID) */

struct zx_elem_s* zxwsf_di_RequestedService_POP_SecurityMechID(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_PUSH_SecurityMechID) */

void zxwsf_di_RequestedService_PUSH_SecurityMechID(struct zxwsf_di_RequestedService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zxwsf_di_RequestedService_REV_SecurityMechID) */

void zxwsf_di_RequestedService_REV_SecurityMechID(struct zxwsf_di_RequestedService_s* x)
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

/* FUNC(zxwsf_di_RequestedService_PUT_SecurityMechID) */

void zxwsf_di_RequestedService_PUT_SecurityMechID(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_RequestedService_ADD_SecurityMechID) */

void zxwsf_di_RequestedService_ADD_SecurityMechID(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_RequestedService_DEL_SecurityMechID) */

void zxwsf_di_RequestedService_DEL_SecurityMechID(struct zxwsf_di_RequestedService_s* x, int n)
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



/* FUNC(zxwsf_di_RequestedService_NUM_Framework) */

int zxwsf_di_RequestedService_NUM_Framework(struct zxwsf_di_RequestedService_s* x)
{
  struct zxwsf_di_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zxwsf_di_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_RequestedService_GET_Framework) */

struct zxwsf_di_Framework_s* zxwsf_di_RequestedService_GET_Framework(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zxwsf_di_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zxwsf_di_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_POP_Framework) */

struct zxwsf_di_Framework_s* zxwsf_di_RequestedService_POP_Framework(struct zxwsf_di_RequestedService_s* x)
{
  struct zxwsf_di_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zxwsf_di_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_PUSH_Framework) */

void zxwsf_di_RequestedService_PUSH_Framework(struct zxwsf_di_RequestedService_s* x, struct zxwsf_di_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zxwsf_di_RequestedService_REV_Framework) */

void zxwsf_di_RequestedService_REV_Framework(struct zxwsf_di_RequestedService_s* x)
{
  struct zxwsf_di_Framework_s* nxt;
  struct zxwsf_di_Framework_s* y;
  if (!x) return;
  y = x->Framework;
  if (!y) return;
  x->Framework = 0;
  while (y) {
    nxt = (struct zxwsf_di_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->Framework->gg.g;
    x->Framework = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_RequestedService_PUT_Framework) */

void zxwsf_di_RequestedService_PUT_Framework(struct zxwsf_di_RequestedService_s* x, int n, struct zxwsf_di_Framework_s* z)
{
  struct zxwsf_di_Framework_s* y;
  if (!x || !z) return;
  y = x->Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_RequestedService_ADD_Framework) */

void zxwsf_di_RequestedService_ADD_Framework(struct zxwsf_di_RequestedService_s* x, int n, struct zxwsf_di_Framework_s* z)
{
  struct zxwsf_di_Framework_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y; --n, y = (struct zxwsf_di_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_RequestedService_DEL_Framework) */

void zxwsf_di_RequestedService_DEL_Framework(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zxwsf_di_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Framework = (struct zxwsf_di_Framework_s*)x->Framework->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_Framework_s*)x->Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di_RequestedService_NUM_Action) */

int zxwsf_di_RequestedService_NUM_Action(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_RequestedService_GET_Action) */

struct zx_elem_s* zxwsf_di_RequestedService_GET_Action(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_POP_Action) */

struct zx_elem_s* zxwsf_di_RequestedService_POP_Action(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_RequestedService_PUSH_Action) */

void zxwsf_di_RequestedService_PUSH_Action(struct zxwsf_di_RequestedService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Action->g;
  x->Action = z;
}

/* FUNC(zxwsf_di_RequestedService_REV_Action) */

void zxwsf_di_RequestedService_REV_Action(struct zxwsf_di_RequestedService_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Action->g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_RequestedService_PUT_Action) */

void zxwsf_di_RequestedService_PUT_Action(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_RequestedService_ADD_Action) */

void zxwsf_di_RequestedService_ADD_Action(struct zxwsf_di_RequestedService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Action->g;
    x->Action = z;
    return;
  case -1:
    y = x->Action;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_RequestedService_DEL_Action) */

void zxwsf_di_RequestedService_DEL_Action(struct zxwsf_di_RequestedService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_elem_s*)x->Action->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Action;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_di_RequestedService_GET_reqID) */
struct zx_str_s* zxwsf_di_RequestedService_GET_reqID(struct zxwsf_di_RequestedService_s* x) { return x->reqID; }
/* FUNC(zxwsf_di_RequestedService_PUT_reqID) */
void zxwsf_di_RequestedService_PUT_reqID(struct zxwsf_di_RequestedService_s* x, struct zx_str_s* y) { x->reqID = y; }
/* FUNC(zxwsf_di_RequestedService_GET_resultsType) */
struct zx_str_s* zxwsf_di_RequestedService_GET_resultsType(struct zxwsf_di_RequestedService_s* x) { return x->resultsType; }
/* FUNC(zxwsf_di_RequestedService_PUT_resultsType) */
void zxwsf_di_RequestedService_PUT_resultsType(struct zxwsf_di_RequestedService_s* x, struct zx_str_s* y) { x->resultsType = y; }







/* FUNC(zxwsf_di_SecurityContext_NUM_SecurityMechID) */

int zxwsf_di_SecurityContext_NUM_SecurityMechID(struct zxwsf_di_SecurityContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SecurityContext_GET_SecurityMechID) */

struct zx_elem_s* zxwsf_di_SecurityContext_GET_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SecurityContext_POP_SecurityMechID) */

struct zx_elem_s* zxwsf_di_SecurityContext_POP_SecurityMechID(struct zxwsf_di_SecurityContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SecurityContext_PUSH_SecurityMechID) */

void zxwsf_di_SecurityContext_PUSH_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zxwsf_di_SecurityContext_REV_SecurityMechID) */

void zxwsf_di_SecurityContext_REV_SecurityMechID(struct zxwsf_di_SecurityContext_s* x)
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

/* FUNC(zxwsf_di_SecurityContext_PUT_SecurityMechID) */

void zxwsf_di_SecurityContext_PUT_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_SecurityContext_ADD_SecurityMechID) */

void zxwsf_di_SecurityContext_ADD_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_SecurityContext_DEL_SecurityMechID) */

void zxwsf_di_SecurityContext_DEL_SecurityMechID(struct zxwsf_di_SecurityContext_s* x, int n)
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



/* FUNC(zxwsf_di_SecurityContext_NUM_Token) */

int zxwsf_di_SecurityContext_NUM_Token(struct zxwsf_di_SecurityContext_s* x)
{
  struct zxwsf_sec_Token_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Token; y; ++n, y = (struct zxwsf_sec_Token_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SecurityContext_GET_Token) */

struct zxwsf_sec_Token_s* zxwsf_di_SecurityContext_GET_Token(struct zxwsf_di_SecurityContext_s* x, int n)
{
  struct zxwsf_sec_Token_s* y;
  if (!x) return 0;
  for (y = x->Token; n>=0 && y; --n, y = (struct zxwsf_sec_Token_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SecurityContext_POP_Token) */

struct zxwsf_sec_Token_s* zxwsf_di_SecurityContext_POP_Token(struct zxwsf_di_SecurityContext_s* x)
{
  struct zxwsf_sec_Token_s* y;
  if (!x) return 0;
  y = x->Token;
  if (y)
    x->Token = (struct zxwsf_sec_Token_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SecurityContext_PUSH_Token) */

void zxwsf_di_SecurityContext_PUSH_Token(struct zxwsf_di_SecurityContext_s* x, struct zxwsf_sec_Token_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Token->gg.g;
  x->Token = z;
}

/* FUNC(zxwsf_di_SecurityContext_REV_Token) */

void zxwsf_di_SecurityContext_REV_Token(struct zxwsf_di_SecurityContext_s* x)
{
  struct zxwsf_sec_Token_s* nxt;
  struct zxwsf_sec_Token_s* y;
  if (!x) return;
  y = x->Token;
  if (!y) return;
  x->Token = 0;
  while (y) {
    nxt = (struct zxwsf_sec_Token_s*)y->gg.g.n;
    y->gg.g.n = &x->Token->gg.g;
    x->Token = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SecurityContext_PUT_Token) */

void zxwsf_di_SecurityContext_PUT_Token(struct zxwsf_di_SecurityContext_s* x, int n, struct zxwsf_sec_Token_s* z)
{
  struct zxwsf_sec_Token_s* y;
  if (!x || !z) return;
  y = x->Token;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Token = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sec_Token_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SecurityContext_ADD_Token) */

void zxwsf_di_SecurityContext_ADD_Token(struct zxwsf_di_SecurityContext_s* x, int n, struct zxwsf_sec_Token_s* z)
{
  struct zxwsf_sec_Token_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Token->gg.g;
    x->Token = z;
    return;
  case -1:
    y = x->Token;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_sec_Token_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Token; n > 1 && y; --n, y = (struct zxwsf_sec_Token_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SecurityContext_DEL_Token) */

void zxwsf_di_SecurityContext_DEL_Token(struct zxwsf_di_SecurityContext_s* x, int n)
{
  struct zxwsf_sec_Token_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Token = (struct zxwsf_sec_Token_s*)x->Token->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_sec_Token_s*)x->Token;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_sec_Token_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Token; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sec_Token_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_ServiceContext_NUM_ServiceType) */

int zxwsf_di_ServiceContext_NUM_ServiceType(struct zxwsf_di_ServiceContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_ServiceContext_GET_ServiceType) */

struct zx_elem_s* zxwsf_di_ServiceContext_GET_ServiceType(struct zxwsf_di_ServiceContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_ServiceContext_POP_ServiceType) */

struct zx_elem_s* zxwsf_di_ServiceContext_POP_ServiceType(struct zxwsf_di_ServiceContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceType;
  if (y)
    x->ServiceType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_ServiceContext_PUSH_ServiceType) */

void zxwsf_di_ServiceContext_PUSH_ServiceType(struct zxwsf_di_ServiceContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceType->g;
  x->ServiceType = z;
}

/* FUNC(zxwsf_di_ServiceContext_REV_ServiceType) */

void zxwsf_di_ServiceContext_REV_ServiceType(struct zxwsf_di_ServiceContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ServiceType;
  if (!y) return;
  x->ServiceType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ServiceType->g;
    x->ServiceType = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_ServiceContext_PUT_ServiceType) */

void zxwsf_di_ServiceContext_PUT_ServiceType(struct zxwsf_di_ServiceContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ServiceType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ServiceType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_ServiceContext_ADD_ServiceType) */

void zxwsf_di_ServiceContext_ADD_ServiceType(struct zxwsf_di_ServiceContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ServiceType->g;
    x->ServiceType = z;
    return;
  case -1:
    y = x->ServiceType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_ServiceContext_DEL_ServiceType) */

void zxwsf_di_ServiceContext_DEL_ServiceType(struct zxwsf_di_ServiceContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceType = (struct zx_elem_s*)x->ServiceType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ServiceType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ServiceType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di_ServiceContext_NUM_Options) */

int zxwsf_di_ServiceContext_NUM_Options(struct zxwsf_di_ServiceContext_s* x)
{
  struct zxwsf_di_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_ServiceContext_GET_Options) */

struct zxwsf_di_Options_s* zxwsf_di_ServiceContext_GET_Options(struct zxwsf_di_ServiceContext_s* x, int n)
{
  struct zxwsf_di_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_ServiceContext_POP_Options) */

struct zxwsf_di_Options_s* zxwsf_di_ServiceContext_POP_Options(struct zxwsf_di_ServiceContext_s* x)
{
  struct zxwsf_di_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zxwsf_di_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_ServiceContext_PUSH_Options) */

void zxwsf_di_ServiceContext_PUSH_Options(struct zxwsf_di_ServiceContext_s* x, struct zxwsf_di_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zxwsf_di_ServiceContext_REV_Options) */

void zxwsf_di_ServiceContext_REV_Options(struct zxwsf_di_ServiceContext_s* x)
{
  struct zxwsf_di_Options_s* nxt;
  struct zxwsf_di_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zxwsf_di_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_ServiceContext_PUT_Options) */

void zxwsf_di_ServiceContext_PUT_Options(struct zxwsf_di_ServiceContext_s* x, int n, struct zxwsf_di_Options_s* z)
{
  struct zxwsf_di_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_ServiceContext_ADD_Options) */

void zxwsf_di_ServiceContext_ADD_Options(struct zxwsf_di_ServiceContext_s* x, int n, struct zxwsf_di_Options_s* z)
{
  struct zxwsf_di_Options_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Options->gg.g;
    x->Options = z;
    return;
  case -1:
    y = x->Options;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_ServiceContext_DEL_Options) */

void zxwsf_di_ServiceContext_DEL_Options(struct zxwsf_di_ServiceContext_s* x, int n)
{
  struct zxwsf_di_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zxwsf_di_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di_ServiceContext_NUM_EndpointContext) */

int zxwsf_di_ServiceContext_NUM_EndpointContext(struct zxwsf_di_ServiceContext_s* x)
{
  struct zxwsf_di_EndpointContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointContext; y; ++n, y = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_ServiceContext_GET_EndpointContext) */

struct zxwsf_di_EndpointContext_s* zxwsf_di_ServiceContext_GET_EndpointContext(struct zxwsf_di_ServiceContext_s* x, int n)
{
  struct zxwsf_di_EndpointContext_s* y;
  if (!x) return 0;
  for (y = x->EndpointContext; n>=0 && y; --n, y = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_ServiceContext_POP_EndpointContext) */

struct zxwsf_di_EndpointContext_s* zxwsf_di_ServiceContext_POP_EndpointContext(struct zxwsf_di_ServiceContext_s* x)
{
  struct zxwsf_di_EndpointContext_s* y;
  if (!x) return 0;
  y = x->EndpointContext;
  if (y)
    x->EndpointContext = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_ServiceContext_PUSH_EndpointContext) */

void zxwsf_di_ServiceContext_PUSH_EndpointContext(struct zxwsf_di_ServiceContext_s* x, struct zxwsf_di_EndpointContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointContext->gg.g;
  x->EndpointContext = z;
}

/* FUNC(zxwsf_di_ServiceContext_REV_EndpointContext) */

void zxwsf_di_ServiceContext_REV_EndpointContext(struct zxwsf_di_ServiceContext_s* x)
{
  struct zxwsf_di_EndpointContext_s* nxt;
  struct zxwsf_di_EndpointContext_s* y;
  if (!x) return;
  y = x->EndpointContext;
  if (!y) return;
  x->EndpointContext = 0;
  while (y) {
    nxt = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointContext->gg.g;
    x->EndpointContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_ServiceContext_PUT_EndpointContext) */

void zxwsf_di_ServiceContext_PUT_EndpointContext(struct zxwsf_di_ServiceContext_s* x, int n, struct zxwsf_di_EndpointContext_s* z)
{
  struct zxwsf_di_EndpointContext_s* y;
  if (!x || !z) return;
  y = x->EndpointContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_ServiceContext_ADD_EndpointContext) */

void zxwsf_di_ServiceContext_ADD_EndpointContext(struct zxwsf_di_ServiceContext_s* x, int n, struct zxwsf_di_EndpointContext_s* z)
{
  struct zxwsf_di_EndpointContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointContext->gg.g;
    x->EndpointContext = z;
    return;
  case -1:
    y = x->EndpointContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointContext; n > 1 && y; --n, y = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_ServiceContext_DEL_EndpointContext) */

void zxwsf_di_ServiceContext_DEL_EndpointContext(struct zxwsf_di_ServiceContext_s* x, int n)
{
  struct zxwsf_di_EndpointContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointContext = (struct zxwsf_di_EndpointContext_s*)x->EndpointContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_EndpointContext_s*)x->EndpointContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_EndpointContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_SvcMD_NUM_Abstract) */

int zxwsf_di_SvcMD_NUM_Abstract(struct zxwsf_di_SvcMD_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Abstract; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMD_GET_Abstract) */

struct zx_elem_s* zxwsf_di_SvcMD_GET_Abstract(struct zxwsf_di_SvcMD_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Abstract; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMD_POP_Abstract) */

struct zx_elem_s* zxwsf_di_SvcMD_POP_Abstract(struct zxwsf_di_SvcMD_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Abstract;
  if (y)
    x->Abstract = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMD_PUSH_Abstract) */

void zxwsf_di_SvcMD_PUSH_Abstract(struct zxwsf_di_SvcMD_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Abstract->g;
  x->Abstract = z;
}

/* FUNC(zxwsf_di_SvcMD_REV_Abstract) */

void zxwsf_di_SvcMD_REV_Abstract(struct zxwsf_di_SvcMD_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Abstract;
  if (!y) return;
  x->Abstract = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Abstract->g;
    x->Abstract = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMD_PUT_Abstract) */

void zxwsf_di_SvcMD_PUT_Abstract(struct zxwsf_di_SvcMD_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Abstract;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Abstract = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_SvcMD_ADD_Abstract) */

void zxwsf_di_SvcMD_ADD_Abstract(struct zxwsf_di_SvcMD_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Abstract->g;
    x->Abstract = z;
    return;
  case -1:
    y = x->Abstract;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Abstract; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_SvcMD_DEL_Abstract) */

void zxwsf_di_SvcMD_DEL_Abstract(struct zxwsf_di_SvcMD_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Abstract = (struct zx_elem_s*)x->Abstract->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Abstract;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Abstract; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di_SvcMD_NUM_ProviderID) */

int zxwsf_di_SvcMD_NUM_ProviderID(struct zxwsf_di_SvcMD_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMD_GET_ProviderID) */

struct zx_elem_s* zxwsf_di_SvcMD_GET_ProviderID(struct zxwsf_di_SvcMD_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMD_POP_ProviderID) */

struct zx_elem_s* zxwsf_di_SvcMD_POP_ProviderID(struct zxwsf_di_SvcMD_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMD_PUSH_ProviderID) */

void zxwsf_di_SvcMD_PUSH_ProviderID(struct zxwsf_di_SvcMD_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zxwsf_di_SvcMD_REV_ProviderID) */

void zxwsf_di_SvcMD_REV_ProviderID(struct zxwsf_di_SvcMD_s* x)
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

/* FUNC(zxwsf_di_SvcMD_PUT_ProviderID) */

void zxwsf_di_SvcMD_PUT_ProviderID(struct zxwsf_di_SvcMD_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_SvcMD_ADD_ProviderID) */

void zxwsf_di_SvcMD_ADD_ProviderID(struct zxwsf_di_SvcMD_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_di_SvcMD_DEL_ProviderID) */

void zxwsf_di_SvcMD_DEL_ProviderID(struct zxwsf_di_SvcMD_s* x, int n)
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



/* FUNC(zxwsf_di_SvcMD_NUM_ServiceContext) */

int zxwsf_di_SvcMD_NUM_ServiceContext(struct zxwsf_di_SvcMD_s* x)
{
  struct zxwsf_di_ServiceContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceContext; y; ++n, y = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMD_GET_ServiceContext) */

struct zxwsf_di_ServiceContext_s* zxwsf_di_SvcMD_GET_ServiceContext(struct zxwsf_di_SvcMD_s* x, int n)
{
  struct zxwsf_di_ServiceContext_s* y;
  if (!x) return 0;
  for (y = x->ServiceContext; n>=0 && y; --n, y = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMD_POP_ServiceContext) */

struct zxwsf_di_ServiceContext_s* zxwsf_di_SvcMD_POP_ServiceContext(struct zxwsf_di_SvcMD_s* x)
{
  struct zxwsf_di_ServiceContext_s* y;
  if (!x) return 0;
  y = x->ServiceContext;
  if (y)
    x->ServiceContext = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMD_PUSH_ServiceContext) */

void zxwsf_di_SvcMD_PUSH_ServiceContext(struct zxwsf_di_SvcMD_s* x, struct zxwsf_di_ServiceContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceContext->gg.g;
  x->ServiceContext = z;
}

/* FUNC(zxwsf_di_SvcMD_REV_ServiceContext) */

void zxwsf_di_SvcMD_REV_ServiceContext(struct zxwsf_di_SvcMD_s* x)
{
  struct zxwsf_di_ServiceContext_s* nxt;
  struct zxwsf_di_ServiceContext_s* y;
  if (!x) return;
  y = x->ServiceContext;
  if (!y) return;
  x->ServiceContext = 0;
  while (y) {
    nxt = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceContext->gg.g;
    x->ServiceContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMD_PUT_ServiceContext) */

void zxwsf_di_SvcMD_PUT_ServiceContext(struct zxwsf_di_SvcMD_s* x, int n, struct zxwsf_di_ServiceContext_s* z)
{
  struct zxwsf_di_ServiceContext_s* y;
  if (!x || !z) return;
  y = x->ServiceContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMD_ADD_ServiceContext) */

void zxwsf_di_SvcMD_ADD_ServiceContext(struct zxwsf_di_SvcMD_s* x, int n, struct zxwsf_di_ServiceContext_s* z)
{
  struct zxwsf_di_ServiceContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceContext->gg.g;
    x->ServiceContext = z;
    return;
  case -1:
    y = x->ServiceContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceContext; n > 1 && y; --n, y = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMD_DEL_ServiceContext) */

void zxwsf_di_SvcMD_DEL_ServiceContext(struct zxwsf_di_SvcMD_s* x, int n)
{
  struct zxwsf_di_ServiceContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceContext = (struct zxwsf_di_ServiceContext_s*)x->ServiceContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_ServiceContext_s*)x->ServiceContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_ServiceContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_di_SvcMD_GET_svcMDID) */
struct zx_str_s* zxwsf_di_SvcMD_GET_svcMDID(struct zxwsf_di_SvcMD_s* x) { return x->svcMDID; }
/* FUNC(zxwsf_di_SvcMD_PUT_svcMDID) */
void zxwsf_di_SvcMD_PUT_svcMDID(struct zxwsf_di_SvcMD_s* x, struct zx_str_s* y) { x->svcMDID = y; }







/* FUNC(zxwsf_di_SvcMDAssociationAdd_NUM_SvcMDID) */

int zxwsf_di_SvcMDAssociationAdd_NUM_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDAssociationAdd_GET_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDAssociationAdd_GET_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationAdd_POP_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDAssociationAdd_POP_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationAdd_PUSH_SvcMDID) */

void zxwsf_di_SvcMDAssociationAdd_PUSH_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zxwsf_di_SvcMDAssociationAdd_REV_SvcMDID) */

void zxwsf_di_SvcMDAssociationAdd_REV_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationAdd_PUT_SvcMDID) */

void zxwsf_di_SvcMDAssociationAdd_PUT_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationAdd_ADD_SvcMDID) */

void zxwsf_di_SvcMDAssociationAdd_ADD_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_SvcMDAssociationAdd_DEL_SvcMDID) */

void zxwsf_di_SvcMDAssociationAdd_DEL_SvcMDID(struct zxwsf_di_SvcMDAssociationAdd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di_SvcMDAssociationAddResponse_NUM_Status) */

int zxwsf_di_SvcMDAssociationAddResponse_NUM_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDAssociationAddResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationAddResponse_GET_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationAddResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationAddResponse_POP_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationAddResponse_PUSH_Status) */

void zxwsf_di_SvcMDAssociationAddResponse_PUSH_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di_SvcMDAssociationAddResponse_REV_Status) */

void zxwsf_di_SvcMDAssociationAddResponse_REV_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationAddResponse_PUT_Status) */

void zxwsf_di_SvcMDAssociationAddResponse_PUT_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationAddResponse_ADD_Status) */

void zxwsf_di_SvcMDAssociationAddResponse_ADD_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDAssociationAddResponse_DEL_Status) */

void zxwsf_di_SvcMDAssociationAddResponse_DEL_Status(struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_SvcMDAssociationDelete_NUM_SvcMDID) */

int zxwsf_di_SvcMDAssociationDelete_NUM_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDAssociationDelete_GET_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDAssociationDelete_GET_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationDelete_POP_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDAssociationDelete_POP_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationDelete_PUSH_SvcMDID) */

void zxwsf_di_SvcMDAssociationDelete_PUSH_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zxwsf_di_SvcMDAssociationDelete_REV_SvcMDID) */

void zxwsf_di_SvcMDAssociationDelete_REV_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationDelete_PUT_SvcMDID) */

void zxwsf_di_SvcMDAssociationDelete_PUT_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationDelete_ADD_SvcMDID) */

void zxwsf_di_SvcMDAssociationDelete_ADD_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_SvcMDAssociationDelete_DEL_SvcMDID) */

void zxwsf_di_SvcMDAssociationDelete_DEL_SvcMDID(struct zxwsf_di_SvcMDAssociationDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di_SvcMDAssociationDeleteResponse_NUM_Status) */

int zxwsf_di_SvcMDAssociationDeleteResponse_NUM_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDAssociationDeleteResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationDeleteResponse_GET_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationDeleteResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationDeleteResponse_POP_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationDeleteResponse_PUSH_Status) */

void zxwsf_di_SvcMDAssociationDeleteResponse_PUSH_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di_SvcMDAssociationDeleteResponse_REV_Status) */

void zxwsf_di_SvcMDAssociationDeleteResponse_REV_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationDeleteResponse_PUT_Status) */

void zxwsf_di_SvcMDAssociationDeleteResponse_PUT_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationDeleteResponse_ADD_Status) */

void zxwsf_di_SvcMDAssociationDeleteResponse_ADD_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDAssociationDeleteResponse_DEL_Status) */

void zxwsf_di_SvcMDAssociationDeleteResponse_DEL_Status(struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_SvcMDAssociationQuery_NUM_SvcMDID) */

int zxwsf_di_SvcMDAssociationQuery_NUM_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDAssociationQuery_GET_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDAssociationQuery_GET_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationQuery_POP_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDAssociationQuery_POP_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationQuery_PUSH_SvcMDID) */

void zxwsf_di_SvcMDAssociationQuery_PUSH_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zxwsf_di_SvcMDAssociationQuery_REV_SvcMDID) */

void zxwsf_di_SvcMDAssociationQuery_REV_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationQuery_PUT_SvcMDID) */

void zxwsf_di_SvcMDAssociationQuery_PUT_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationQuery_ADD_SvcMDID) */

void zxwsf_di_SvcMDAssociationQuery_ADD_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_SvcMDAssociationQuery_DEL_SvcMDID) */

void zxwsf_di_SvcMDAssociationQuery_DEL_SvcMDID(struct zxwsf_di_SvcMDAssociationQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_NUM_Status) */

int zxwsf_di_SvcMDAssociationQueryResponse_NUM_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationQueryResponse_GET_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDAssociationQueryResponse_POP_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_PUSH_Status) */

void zxwsf_di_SvcMDAssociationQueryResponse_PUSH_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_REV_Status) */

void zxwsf_di_SvcMDAssociationQueryResponse_REV_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_PUT_Status) */

void zxwsf_di_SvcMDAssociationQueryResponse_PUT_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_ADD_Status) */

void zxwsf_di_SvcMDAssociationQueryResponse_ADD_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_DEL_Status) */

void zxwsf_di_SvcMDAssociationQueryResponse_DEL_Status(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_NUM_SvcMDID) */

int zxwsf_di_SvcMDAssociationQueryResponse_NUM_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_GET_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDAssociationQueryResponse_GET_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_POP_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDAssociationQueryResponse_POP_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_PUSH_SvcMDID) */

void zxwsf_di_SvcMDAssociationQueryResponse_PUSH_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_REV_SvcMDID) */

void zxwsf_di_SvcMDAssociationQueryResponse_REV_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_PUT_SvcMDID) */

void zxwsf_di_SvcMDAssociationQueryResponse_PUT_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_ADD_SvcMDID) */

void zxwsf_di_SvcMDAssociationQueryResponse_ADD_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_SvcMDAssociationQueryResponse_DEL_SvcMDID) */

void zxwsf_di_SvcMDAssociationQueryResponse_DEL_SvcMDID(struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di_SvcMDDelete_NUM_SvcMDID) */

int zxwsf_di_SvcMDDelete_NUM_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDDelete_GET_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDDelete_GET_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDDelete_POP_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDDelete_POP_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDDelete_PUSH_SvcMDID) */

void zxwsf_di_SvcMDDelete_PUSH_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zxwsf_di_SvcMDDelete_REV_SvcMDID) */

void zxwsf_di_SvcMDDelete_REV_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDDelete_PUT_SvcMDID) */

void zxwsf_di_SvcMDDelete_PUT_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_SvcMDDelete_ADD_SvcMDID) */

void zxwsf_di_SvcMDDelete_ADD_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_SvcMDDelete_DEL_SvcMDID) */

void zxwsf_di_SvcMDDelete_DEL_SvcMDID(struct zxwsf_di_SvcMDDelete_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di_SvcMDDeleteResponse_NUM_Status) */

int zxwsf_di_SvcMDDeleteResponse_NUM_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDDeleteResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDDeleteResponse_GET_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDDeleteResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDDeleteResponse_POP_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDDeleteResponse_PUSH_Status) */

void zxwsf_di_SvcMDDeleteResponse_PUSH_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di_SvcMDDeleteResponse_REV_Status) */

void zxwsf_di_SvcMDDeleteResponse_REV_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDDeleteResponse_PUT_Status) */

void zxwsf_di_SvcMDDeleteResponse_PUT_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDDeleteResponse_ADD_Status) */

void zxwsf_di_SvcMDDeleteResponse_ADD_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDDeleteResponse_DEL_Status) */

void zxwsf_di_SvcMDDeleteResponse_DEL_Status(struct zxwsf_di_SvcMDDeleteResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_SvcMDQuery_NUM_SvcMDID) */

int zxwsf_di_SvcMDQuery_NUM_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDQuery_GET_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDQuery_GET_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDQuery_POP_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDQuery_POP_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDQuery_PUSH_SvcMDID) */

void zxwsf_di_SvcMDQuery_PUSH_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zxwsf_di_SvcMDQuery_REV_SvcMDID) */

void zxwsf_di_SvcMDQuery_REV_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDQuery_PUT_SvcMDID) */

void zxwsf_di_SvcMDQuery_PUT_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_SvcMDQuery_ADD_SvcMDID) */

void zxwsf_di_SvcMDQuery_ADD_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_SvcMDQuery_DEL_SvcMDID) */

void zxwsf_di_SvcMDQuery_DEL_SvcMDID(struct zxwsf_di_SvcMDQuery_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_di_SvcMDQueryResponse_NUM_Status) */

int zxwsf_di_SvcMDQueryResponse_NUM_Status(struct zxwsf_di_SvcMDQueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDQueryResponse_GET_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDQueryResponse_POP_Status(struct zxwsf_di_SvcMDQueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_PUSH_Status) */

void zxwsf_di_SvcMDQueryResponse_PUSH_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_REV_Status) */

void zxwsf_di_SvcMDQueryResponse_REV_Status(struct zxwsf_di_SvcMDQueryResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_PUT_Status) */

void zxwsf_di_SvcMDQueryResponse_PUT_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_ADD_Status) */

void zxwsf_di_SvcMDQueryResponse_ADD_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_DEL_Status) */

void zxwsf_di_SvcMDQueryResponse_DEL_Status(struct zxwsf_di_SvcMDQueryResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di_SvcMDQueryResponse_NUM_SvcMD) */

int zxwsf_di_SvcMDQueryResponse_NUM_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x)
{
  struct zxwsf_di_SvcMD_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMD; y; ++n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_GET_SvcMD) */

struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDQueryResponse_GET_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, int n)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return 0;
  for (y = x->SvcMD; n>=0 && y; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_POP_SvcMD) */

struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDQueryResponse_POP_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return 0;
  y = x->SvcMD;
  if (y)
    x->SvcMD = (struct zxwsf_di_SvcMD_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_PUSH_SvcMD) */

void zxwsf_di_SvcMDQueryResponse_PUSH_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, struct zxwsf_di_SvcMD_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMD->gg.g;
  x->SvcMD = z;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_REV_SvcMD) */

void zxwsf_di_SvcMDQueryResponse_REV_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x)
{
  struct zxwsf_di_SvcMD_s* nxt;
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return;
  y = x->SvcMD;
  if (!y) return;
  x->SvcMD = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMD_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_PUT_SvcMD) */

void zxwsf_di_SvcMDQueryResponse_PUT_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, int n, struct zxwsf_di_SvcMD_s* z)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x || !z) return;
  y = x->SvcMD;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMD = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_ADD_SvcMD) */

void zxwsf_di_SvcMDQueryResponse_ADD_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, int n, struct zxwsf_di_SvcMD_s* z)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = z;
    return;
  case -1:
    y = x->SvcMD;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDQueryResponse_DEL_SvcMD) */

void zxwsf_di_SvcMDQueryResponse_DEL_SvcMD(struct zxwsf_di_SvcMDQueryResponse_s* x, int n)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMD = (struct zxwsf_di_SvcMD_s*)x->SvcMD->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMD_s*)x->SvcMD;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_SvcMDRegister_NUM_SvcMD) */

int zxwsf_di_SvcMDRegister_NUM_SvcMD(struct zxwsf_di_SvcMDRegister_s* x)
{
  struct zxwsf_di_SvcMD_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMD; y; ++n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDRegister_GET_SvcMD) */

struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDRegister_GET_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, int n)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return 0;
  for (y = x->SvcMD; n>=0 && y; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDRegister_POP_SvcMD) */

struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDRegister_POP_SvcMD(struct zxwsf_di_SvcMDRegister_s* x)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return 0;
  y = x->SvcMD;
  if (y)
    x->SvcMD = (struct zxwsf_di_SvcMD_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDRegister_PUSH_SvcMD) */

void zxwsf_di_SvcMDRegister_PUSH_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, struct zxwsf_di_SvcMD_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMD->gg.g;
  x->SvcMD = z;
}

/* FUNC(zxwsf_di_SvcMDRegister_REV_SvcMD) */

void zxwsf_di_SvcMDRegister_REV_SvcMD(struct zxwsf_di_SvcMDRegister_s* x)
{
  struct zxwsf_di_SvcMD_s* nxt;
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return;
  y = x->SvcMD;
  if (!y) return;
  x->SvcMD = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMD_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDRegister_PUT_SvcMD) */

void zxwsf_di_SvcMDRegister_PUT_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, int n, struct zxwsf_di_SvcMD_s* z)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x || !z) return;
  y = x->SvcMD;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMD = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDRegister_ADD_SvcMD) */

void zxwsf_di_SvcMDRegister_ADD_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, int n, struct zxwsf_di_SvcMD_s* z)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = z;
    return;
  case -1:
    y = x->SvcMD;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDRegister_DEL_SvcMD) */

void zxwsf_di_SvcMDRegister_DEL_SvcMD(struct zxwsf_di_SvcMDRegister_s* x, int n)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMD = (struct zxwsf_di_SvcMD_s*)x->SvcMD->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMD_s*)x->SvcMD;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_SvcMDRegisterResponse_NUM_Status) */

int zxwsf_di_SvcMDRegisterResponse_NUM_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDRegisterResponse_GET_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDRegisterResponse_POP_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_PUSH_Status) */

void zxwsf_di_SvcMDRegisterResponse_PUSH_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_REV_Status) */

void zxwsf_di_SvcMDRegisterResponse_REV_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_PUT_Status) */

void zxwsf_di_SvcMDRegisterResponse_PUT_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_ADD_Status) */

void zxwsf_di_SvcMDRegisterResponse_ADD_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_DEL_Status) */

void zxwsf_di_SvcMDRegisterResponse_DEL_Status(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_di_SvcMDRegisterResponse_NUM_SvcMDID) */

int zxwsf_di_SvcMDRegisterResponse_NUM_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_GET_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDRegisterResponse_GET_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SvcMDID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_POP_SvcMDID) */

struct zx_elem_s* zxwsf_di_SvcMDRegisterResponse_POP_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SvcMDID;
  if (y)
    x->SvcMDID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_PUSH_SvcMDID) */

void zxwsf_di_SvcMDRegisterResponse_PUSH_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SvcMDID->g;
  x->SvcMDID = z;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_REV_SvcMDID) */

void zxwsf_di_SvcMDRegisterResponse_REV_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SvcMDID;
  if (!y) return;
  x->SvcMDID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SvcMDID->g;
    x->SvcMDID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_PUT_SvcMDID) */

void zxwsf_di_SvcMDRegisterResponse_PUT_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SvcMDID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SvcMDID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_ADD_SvcMDID) */

void zxwsf_di_SvcMDRegisterResponse_ADD_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SvcMDID->g;
    x->SvcMDID = z;
    return;
  case -1:
    y = x->SvcMDID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_DEL_SvcMDID) */

void zxwsf_di_SvcMDRegisterResponse_DEL_SvcMDID(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDID = (struct zx_elem_s*)x->SvcMDID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SvcMDID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SvcMDID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_di_SvcMDRegisterResponse_NUM_Keys) */

int zxwsf_di_SvcMDRegisterResponse_NUM_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zxwsf_di_Keys_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Keys; y; ++n, y = (struct zxwsf_di_Keys_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_GET_Keys) */

struct zxwsf_di_Keys_s* zxwsf_di_SvcMDRegisterResponse_GET_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zxwsf_di_Keys_s* y;
  if (!x) return 0;
  for (y = x->Keys; n>=0 && y; --n, y = (struct zxwsf_di_Keys_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_POP_Keys) */

struct zxwsf_di_Keys_s* zxwsf_di_SvcMDRegisterResponse_POP_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zxwsf_di_Keys_s* y;
  if (!x) return 0;
  y = x->Keys;
  if (y)
    x->Keys = (struct zxwsf_di_Keys_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_PUSH_Keys) */

void zxwsf_di_SvcMDRegisterResponse_PUSH_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, struct zxwsf_di_Keys_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Keys->gg.g;
  x->Keys = z;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_REV_Keys) */

void zxwsf_di_SvcMDRegisterResponse_REV_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  struct zxwsf_di_Keys_s* nxt;
  struct zxwsf_di_Keys_s* y;
  if (!x) return;
  y = x->Keys;
  if (!y) return;
  x->Keys = 0;
  while (y) {
    nxt = (struct zxwsf_di_Keys_s*)y->gg.g.n;
    y->gg.g.n = &x->Keys->gg.g;
    x->Keys = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_PUT_Keys) */

void zxwsf_di_SvcMDRegisterResponse_PUT_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zxwsf_di_Keys_s* z)
{
  struct zxwsf_di_Keys_s* y;
  if (!x || !z) return;
  y = x->Keys;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Keys = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Keys_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_ADD_Keys) */

void zxwsf_di_SvcMDRegisterResponse_ADD_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n, struct zxwsf_di_Keys_s* z)
{
  struct zxwsf_di_Keys_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Keys->gg.g;
    x->Keys = z;
    return;
  case -1:
    y = x->Keys;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di_Keys_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Keys; n > 1 && y; --n, y = (struct zxwsf_di_Keys_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDRegisterResponse_DEL_Keys) */

void zxwsf_di_SvcMDRegisterResponse_DEL_Keys(struct zxwsf_di_SvcMDRegisterResponse_s* x, int n)
{
  struct zxwsf_di_Keys_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Keys = (struct zxwsf_di_Keys_s*)x->Keys->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_Keys_s*)x->Keys;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_Keys_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Keys; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Keys_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_SvcMDReplace_NUM_SvcMD) */

int zxwsf_di_SvcMDReplace_NUM_SvcMD(struct zxwsf_di_SvcMDReplace_s* x)
{
  struct zxwsf_di_SvcMD_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMD; y; ++n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDReplace_GET_SvcMD) */

struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDReplace_GET_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, int n)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return 0;
  for (y = x->SvcMD; n>=0 && y; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDReplace_POP_SvcMD) */

struct zxwsf_di_SvcMD_s* zxwsf_di_SvcMDReplace_POP_SvcMD(struct zxwsf_di_SvcMDReplace_s* x)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return 0;
  y = x->SvcMD;
  if (y)
    x->SvcMD = (struct zxwsf_di_SvcMD_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDReplace_PUSH_SvcMD) */

void zxwsf_di_SvcMDReplace_PUSH_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, struct zxwsf_di_SvcMD_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMD->gg.g;
  x->SvcMD = z;
}

/* FUNC(zxwsf_di_SvcMDReplace_REV_SvcMD) */

void zxwsf_di_SvcMDReplace_REV_SvcMD(struct zxwsf_di_SvcMDReplace_s* x)
{
  struct zxwsf_di_SvcMD_s* nxt;
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return;
  y = x->SvcMD;
  if (!y) return;
  x->SvcMD = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMD_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDReplace_PUT_SvcMD) */

void zxwsf_di_SvcMDReplace_PUT_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, int n, struct zxwsf_di_SvcMD_s* z)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x || !z) return;
  y = x->SvcMD;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMD = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDReplace_ADD_SvcMD) */

void zxwsf_di_SvcMDReplace_ADD_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, int n, struct zxwsf_di_SvcMD_s* z)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMD->gg.g;
    x->SvcMD = z;
    return;
  case -1:
    y = x->SvcMD;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDReplace_DEL_SvcMD) */

void zxwsf_di_SvcMDReplace_DEL_SvcMD(struct zxwsf_di_SvcMDReplace_s* x, int n)
{
  struct zxwsf_di_SvcMD_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMD = (struct zxwsf_di_SvcMD_s*)x->SvcMD->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMD_s*)x->SvcMD;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMD; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMD_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_di_SvcMDReplaceResponse_NUM_Status) */

int zxwsf_di_SvcMDReplaceResponse_NUM_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_di_SvcMDReplaceResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDReplaceResponse_GET_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_di_SvcMDReplaceResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_di_SvcMDReplaceResponse_POP_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_di_SvcMDReplaceResponse_PUSH_Status) */

void zxwsf_di_SvcMDReplaceResponse_PUSH_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_di_SvcMDReplaceResponse_REV_Status) */

void zxwsf_di_SvcMDReplaceResponse_REV_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_di_SvcMDReplaceResponse_PUT_Status) */

void zxwsf_di_SvcMDReplaceResponse_PUT_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_di_SvcMDReplaceResponse_ADD_Status) */

void zxwsf_di_SvcMDReplaceResponse_ADD_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_di_SvcMDReplaceResponse_DEL_Status) */

void zxwsf_di_SvcMDReplaceResponse_DEL_Status(struct zxwsf_di_SvcMDReplaceResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_dise_Body_NUM_SvcMDAssociationAdd) */

int zxwsf_dise_Body_NUM_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationAdd_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAdd; y; ++n, y = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDAssociationAdd) */

struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_dise_Body_GET_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationAdd_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAdd; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDAssociationAdd) */

struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_dise_Body_POP_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationAdd_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationAdd;
  if (y)
    x->SvcMDAssociationAdd = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDAssociationAdd) */

void zxwsf_dise_Body_PUSH_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationAdd_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationAdd->gg.g;
  x->SvcMDAssociationAdd = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDAssociationAdd) */

void zxwsf_dise_Body_REV_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationAdd_s* nxt;
  struct zxwsf_di_SvcMDAssociationAdd_s* y;
  if (!x) return;
  y = x->SvcMDAssociationAdd;
  if (!y) return;
  x->SvcMDAssociationAdd = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationAdd->gg.g;
    x->SvcMDAssociationAdd = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDAssociationAdd) */

void zxwsf_dise_Body_PUT_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationAdd_s* z)
{
  struct zxwsf_di_SvcMDAssociationAdd_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationAdd;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationAdd = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDAssociationAdd) */

void zxwsf_dise_Body_ADD_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationAdd_s* z)
{
  struct zxwsf_di_SvcMDAssociationAdd_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAdd; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDAssociationAdd) */

void zxwsf_dise_Body_DEL_SvcMDAssociationAdd(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationAdd_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationAdd = (struct zxwsf_di_SvcMDAssociationAdd_s*)x->SvcMDAssociationAdd->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDAssociationAdd_s*)x->SvcMDAssociationAdd;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAdd; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDAssociationAddResponse) */

int zxwsf_dise_Body_NUM_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationAddResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAddResponse; y; ++n, y = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDAssociationAddResponse) */

struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_dise_Body_GET_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAddResponse; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDAssociationAddResponse) */

struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_dise_Body_POP_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationAddResponse;
  if (y)
    x->SvcMDAssociationAddResponse = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDAssociationAddResponse) */

void zxwsf_dise_Body_PUSH_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationAddResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationAddResponse->gg.g;
  x->SvcMDAssociationAddResponse = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDAssociationAddResponse) */

void zxwsf_dise_Body_REV_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationAddResponse_s* nxt;
  struct zxwsf_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationAddResponse;
  if (!y) return;
  x->SvcMDAssociationAddResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationAddResponse->gg.g;
    x->SvcMDAssociationAddResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDAssociationAddResponse) */

void zxwsf_dise_Body_PUT_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationAddResponse_s* z)
{
  struct zxwsf_di_SvcMDAssociationAddResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationAddResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationAddResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDAssociationAddResponse) */

void zxwsf_dise_Body_ADD_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationAddResponse_s* z)
{
  struct zxwsf_di_SvcMDAssociationAddResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAddResponse; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDAssociationAddResponse) */

void zxwsf_dise_Body_DEL_SvcMDAssociationAddResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationAddResponse = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)x->SvcMDAssociationAddResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)x->SvcMDAssociationAddResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAddResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDAssociationDelete) */

int zxwsf_dise_Body_NUM_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDelete; y; ++n, y = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDAssociationDelete) */

struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_dise_Body_GET_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationDelete_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDelete; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDAssociationDelete) */

struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_dise_Body_POP_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationDelete_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationDelete;
  if (y)
    x->SvcMDAssociationDelete = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDAssociationDelete) */

void zxwsf_dise_Body_PUSH_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationDelete->gg.g;
  x->SvcMDAssociationDelete = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDAssociationDelete) */

void zxwsf_dise_Body_REV_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationDelete_s* nxt;
  struct zxwsf_di_SvcMDAssociationDelete_s* y;
  if (!x) return;
  y = x->SvcMDAssociationDelete;
  if (!y) return;
  x->SvcMDAssociationDelete = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationDelete->gg.g;
    x->SvcMDAssociationDelete = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDAssociationDelete) */

void zxwsf_dise_Body_PUT_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationDelete_s* z)
{
  struct zxwsf_di_SvcMDAssociationDelete_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDAssociationDelete) */

void zxwsf_dise_Body_ADD_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationDelete_s* z)
{
  struct zxwsf_di_SvcMDAssociationDelete_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDelete; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDAssociationDelete) */

void zxwsf_dise_Body_DEL_SvcMDAssociationDelete(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationDelete = (struct zxwsf_di_SvcMDAssociationDelete_s*)x->SvcMDAssociationDelete->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDAssociationDelete_s*)x->SvcMDAssociationDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDelete; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDAssociationDeleteResponse) */

int zxwsf_dise_Body_NUM_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDeleteResponse; y; ++n, y = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDAssociationDeleteResponse) */

struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_dise_Body_GET_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDeleteResponse; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDAssociationDeleteResponse) */

struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_dise_Body_POP_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationDeleteResponse;
  if (y)
    x->SvcMDAssociationDeleteResponse = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDAssociationDeleteResponse) */

void zxwsf_dise_Body_PUSH_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
  x->SvcMDAssociationDeleteResponse = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDAssociationDeleteResponse) */

void zxwsf_dise_Body_REV_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* nxt;
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationDeleteResponse;
  if (!y) return;
  x->SvcMDAssociationDeleteResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
    x->SvcMDAssociationDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDAssociationDeleteResponse) */

void zxwsf_dise_Body_PUT_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* z)
{
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDAssociationDeleteResponse) */

void zxwsf_dise_Body_ADD_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* z)
{
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDeleteResponse; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDAssociationDeleteResponse) */

void zxwsf_dise_Body_DEL_SvcMDAssociationDeleteResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationDeleteResponse = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)x->SvcMDAssociationDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)x->SvcMDAssociationDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDAssociationQuery) */

int zxwsf_dise_Body_NUM_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQuery; y; ++n, y = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDAssociationQuery) */

struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_dise_Body_GET_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationQuery_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQuery; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDAssociationQuery) */

struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_dise_Body_POP_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationQuery_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationQuery;
  if (y)
    x->SvcMDAssociationQuery = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDAssociationQuery) */

void zxwsf_dise_Body_PUSH_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationQuery->gg.g;
  x->SvcMDAssociationQuery = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDAssociationQuery) */

void zxwsf_dise_Body_REV_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationQuery_s* nxt;
  struct zxwsf_di_SvcMDAssociationQuery_s* y;
  if (!x) return;
  y = x->SvcMDAssociationQuery;
  if (!y) return;
  x->SvcMDAssociationQuery = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationQuery->gg.g;
    x->SvcMDAssociationQuery = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDAssociationQuery) */

void zxwsf_dise_Body_PUT_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationQuery_s* z)
{
  struct zxwsf_di_SvcMDAssociationQuery_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDAssociationQuery) */

void zxwsf_dise_Body_ADD_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationQuery_s* z)
{
  struct zxwsf_di_SvcMDAssociationQuery_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQuery; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDAssociationQuery) */

void zxwsf_dise_Body_DEL_SvcMDAssociationQuery(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationQuery = (struct zxwsf_di_SvcMDAssociationQuery_s*)x->SvcMDAssociationQuery->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDAssociationQuery_s*)x->SvcMDAssociationQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQuery; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDAssociationQueryResponse) */

int zxwsf_dise_Body_NUM_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQueryResponse; y; ++n, y = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDAssociationQueryResponse) */

struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_dise_Body_GET_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQueryResponse; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDAssociationQueryResponse) */

struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_dise_Body_POP_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationQueryResponse;
  if (y)
    x->SvcMDAssociationQueryResponse = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDAssociationQueryResponse) */

void zxwsf_dise_Body_PUSH_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDAssociationQueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationQueryResponse->gg.g;
  x->SvcMDAssociationQueryResponse = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDAssociationQueryResponse) */

void zxwsf_dise_Body_REV_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* nxt;
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationQueryResponse;
  if (!y) return;
  x->SvcMDAssociationQueryResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationQueryResponse->gg.g;
    x->SvcMDAssociationQueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDAssociationQueryResponse) */

void zxwsf_dise_Body_PUT_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationQueryResponse_s* z)
{
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationQueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationQueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDAssociationQueryResponse) */

void zxwsf_dise_Body_ADD_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDAssociationQueryResponse_s* z)
{
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQueryResponse; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDAssociationQueryResponse) */

void zxwsf_dise_Body_DEL_SvcMDAssociationQueryResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationQueryResponse = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)x->SvcMDAssociationQueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)x->SvcMDAssociationQueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDRegister) */

int zxwsf_dise_Body_NUM_SvcMDRegister(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDRegister_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDRegister; y; ++n, y = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDRegister) */

struct zxwsf_di_SvcMDRegister_s* zxwsf_dise_Body_GET_SvcMDRegister(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDRegister_s* y;
  if (!x) return 0;
  for (y = x->SvcMDRegister; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDRegister) */

struct zxwsf_di_SvcMDRegister_s* zxwsf_dise_Body_POP_SvcMDRegister(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDRegister_s* y;
  if (!x) return 0;
  y = x->SvcMDRegister;
  if (y)
    x->SvcMDRegister = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDRegister) */

void zxwsf_dise_Body_PUSH_SvcMDRegister(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDRegister_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDRegister->gg.g;
  x->SvcMDRegister = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDRegister) */

void zxwsf_dise_Body_REV_SvcMDRegister(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDRegister_s* nxt;
  struct zxwsf_di_SvcMDRegister_s* y;
  if (!x) return;
  y = x->SvcMDRegister;
  if (!y) return;
  x->SvcMDRegister = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDRegister->gg.g;
    x->SvcMDRegister = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDRegister) */

void zxwsf_dise_Body_PUT_SvcMDRegister(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDRegister_s* z)
{
  struct zxwsf_di_SvcMDRegister_s* y;
  if (!x || !z) return;
  y = x->SvcMDRegister;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDRegister = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDRegister) */

void zxwsf_dise_Body_ADD_SvcMDRegister(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDRegister_s* z)
{
  struct zxwsf_di_SvcMDRegister_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegister; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDRegister) */

void zxwsf_dise_Body_DEL_SvcMDRegister(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDRegister_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDRegister = (struct zxwsf_di_SvcMDRegister_s*)x->SvcMDRegister->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDRegister_s*)x->SvcMDRegister;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegister; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDRegisterResponse) */

int zxwsf_dise_Body_NUM_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDRegisterResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDRegisterResponse; y; ++n, y = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDRegisterResponse) */

struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_dise_Body_GET_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDRegisterResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDRegisterResponse; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDRegisterResponse) */

struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_dise_Body_POP_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDRegisterResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDRegisterResponse;
  if (y)
    x->SvcMDRegisterResponse = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDRegisterResponse) */

void zxwsf_dise_Body_PUSH_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDRegisterResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDRegisterResponse->gg.g;
  x->SvcMDRegisterResponse = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDRegisterResponse) */

void zxwsf_dise_Body_REV_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDRegisterResponse_s* nxt;
  struct zxwsf_di_SvcMDRegisterResponse_s* y;
  if (!x) return;
  y = x->SvcMDRegisterResponse;
  if (!y) return;
  x->SvcMDRegisterResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDRegisterResponse->gg.g;
    x->SvcMDRegisterResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDRegisterResponse) */

void zxwsf_dise_Body_PUT_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDRegisterResponse_s* z)
{
  struct zxwsf_di_SvcMDRegisterResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDRegisterResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDRegisterResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDRegisterResponse) */

void zxwsf_dise_Body_ADD_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDRegisterResponse_s* z)
{
  struct zxwsf_di_SvcMDRegisterResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegisterResponse; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDRegisterResponse) */

void zxwsf_dise_Body_DEL_SvcMDRegisterResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDRegisterResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDRegisterResponse = (struct zxwsf_di_SvcMDRegisterResponse_s*)x->SvcMDRegisterResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDRegisterResponse_s*)x->SvcMDRegisterResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegisterResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDDelete) */

int zxwsf_dise_Body_NUM_SvcMDDelete(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDDelete; y; ++n, y = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDDelete) */

struct zxwsf_di_SvcMDDelete_s* zxwsf_dise_Body_GET_SvcMDDelete(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDDelete_s* y;
  if (!x) return 0;
  for (y = x->SvcMDDelete; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDDelete) */

struct zxwsf_di_SvcMDDelete_s* zxwsf_dise_Body_POP_SvcMDDelete(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDDelete_s* y;
  if (!x) return 0;
  y = x->SvcMDDelete;
  if (y)
    x->SvcMDDelete = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDDelete) */

void zxwsf_dise_Body_PUSH_SvcMDDelete(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDDelete->gg.g;
  x->SvcMDDelete = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDDelete) */

void zxwsf_dise_Body_REV_SvcMDDelete(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDDelete_s* nxt;
  struct zxwsf_di_SvcMDDelete_s* y;
  if (!x) return;
  y = x->SvcMDDelete;
  if (!y) return;
  x->SvcMDDelete = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDDelete->gg.g;
    x->SvcMDDelete = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDDelete) */

void zxwsf_dise_Body_PUT_SvcMDDelete(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDDelete_s* z)
{
  struct zxwsf_di_SvcMDDelete_s* y;
  if (!x || !z) return;
  y = x->SvcMDDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDDelete) */

void zxwsf_dise_Body_ADD_SvcMDDelete(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDDelete_s* z)
{
  struct zxwsf_di_SvcMDDelete_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDelete; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDDelete) */

void zxwsf_dise_Body_DEL_SvcMDDelete(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDDelete = (struct zxwsf_di_SvcMDDelete_s*)x->SvcMDDelete->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDDelete_s*)x->SvcMDDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDelete; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDDeleteResponse) */

int zxwsf_dise_Body_NUM_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDDeleteResponse; y; ++n, y = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDDeleteResponse) */

struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_dise_Body_GET_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDDeleteResponse; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDDeleteResponse) */

struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_dise_Body_POP_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDDeleteResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDDeleteResponse;
  if (y)
    x->SvcMDDeleteResponse = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDDeleteResponse) */

void zxwsf_dise_Body_PUSH_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDDeleteResponse->gg.g;
  x->SvcMDDeleteResponse = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDDeleteResponse) */

void zxwsf_dise_Body_REV_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDDeleteResponse_s* nxt;
  struct zxwsf_di_SvcMDDeleteResponse_s* y;
  if (!x) return;
  y = x->SvcMDDeleteResponse;
  if (!y) return;
  x->SvcMDDeleteResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDDeleteResponse->gg.g;
    x->SvcMDDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDDeleteResponse) */

void zxwsf_dise_Body_PUT_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDDeleteResponse_s* z)
{
  struct zxwsf_di_SvcMDDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDDeleteResponse) */

void zxwsf_dise_Body_ADD_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDDeleteResponse_s* z)
{
  struct zxwsf_di_SvcMDDeleteResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDeleteResponse; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDDeleteResponse) */

void zxwsf_dise_Body_DEL_SvcMDDeleteResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDDeleteResponse = (struct zxwsf_di_SvcMDDeleteResponse_s*)x->SvcMDDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDDeleteResponse_s*)x->SvcMDDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDQuery) */

int zxwsf_dise_Body_NUM_SvcMDQuery(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDQuery; y; ++n, y = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDQuery) */

struct zxwsf_di_SvcMDQuery_s* zxwsf_dise_Body_GET_SvcMDQuery(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDQuery_s* y;
  if (!x) return 0;
  for (y = x->SvcMDQuery; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDQuery) */

struct zxwsf_di_SvcMDQuery_s* zxwsf_dise_Body_POP_SvcMDQuery(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDQuery_s* y;
  if (!x) return 0;
  y = x->SvcMDQuery;
  if (y)
    x->SvcMDQuery = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDQuery) */

void zxwsf_dise_Body_PUSH_SvcMDQuery(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDQuery->gg.g;
  x->SvcMDQuery = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDQuery) */

void zxwsf_dise_Body_REV_SvcMDQuery(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDQuery_s* nxt;
  struct zxwsf_di_SvcMDQuery_s* y;
  if (!x) return;
  y = x->SvcMDQuery;
  if (!y) return;
  x->SvcMDQuery = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDQuery->gg.g;
    x->SvcMDQuery = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDQuery) */

void zxwsf_dise_Body_PUT_SvcMDQuery(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDQuery_s* z)
{
  struct zxwsf_di_SvcMDQuery_s* y;
  if (!x || !z) return;
  y = x->SvcMDQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDQuery) */

void zxwsf_dise_Body_ADD_SvcMDQuery(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDQuery_s* z)
{
  struct zxwsf_di_SvcMDQuery_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQuery; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDQuery) */

void zxwsf_dise_Body_DEL_SvcMDQuery(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDQuery = (struct zxwsf_di_SvcMDQuery_s*)x->SvcMDQuery->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDQuery_s*)x->SvcMDQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQuery; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDQueryResponse) */

int zxwsf_dise_Body_NUM_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDQueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDQueryResponse; y; ++n, y = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDQueryResponse) */

struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_dise_Body_GET_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDQueryResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDQueryResponse; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDQueryResponse) */

struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_dise_Body_POP_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDQueryResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDQueryResponse;
  if (y)
    x->SvcMDQueryResponse = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDQueryResponse) */

void zxwsf_dise_Body_PUSH_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDQueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDQueryResponse->gg.g;
  x->SvcMDQueryResponse = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDQueryResponse) */

void zxwsf_dise_Body_REV_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDQueryResponse_s* nxt;
  struct zxwsf_di_SvcMDQueryResponse_s* y;
  if (!x) return;
  y = x->SvcMDQueryResponse;
  if (!y) return;
  x->SvcMDQueryResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDQueryResponse->gg.g;
    x->SvcMDQueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDQueryResponse) */

void zxwsf_dise_Body_PUT_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDQueryResponse_s* z)
{
  struct zxwsf_di_SvcMDQueryResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDQueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDQueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDQueryResponse) */

void zxwsf_dise_Body_ADD_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDQueryResponse_s* z)
{
  struct zxwsf_di_SvcMDQueryResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQueryResponse; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDQueryResponse) */

void zxwsf_dise_Body_DEL_SvcMDQueryResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDQueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDQueryResponse = (struct zxwsf_di_SvcMDQueryResponse_s*)x->SvcMDQueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDQueryResponse_s*)x->SvcMDQueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDReplace) */

int zxwsf_dise_Body_NUM_SvcMDReplace(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDReplace_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDReplace; y; ++n, y = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDReplace) */

struct zxwsf_di_SvcMDReplace_s* zxwsf_dise_Body_GET_SvcMDReplace(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDReplace_s* y;
  if (!x) return 0;
  for (y = x->SvcMDReplace; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDReplace) */

struct zxwsf_di_SvcMDReplace_s* zxwsf_dise_Body_POP_SvcMDReplace(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDReplace_s* y;
  if (!x) return 0;
  y = x->SvcMDReplace;
  if (y)
    x->SvcMDReplace = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDReplace) */

void zxwsf_dise_Body_PUSH_SvcMDReplace(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDReplace_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDReplace->gg.g;
  x->SvcMDReplace = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDReplace) */

void zxwsf_dise_Body_REV_SvcMDReplace(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDReplace_s* nxt;
  struct zxwsf_di_SvcMDReplace_s* y;
  if (!x) return;
  y = x->SvcMDReplace;
  if (!y) return;
  x->SvcMDReplace = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDReplace->gg.g;
    x->SvcMDReplace = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDReplace) */

void zxwsf_dise_Body_PUT_SvcMDReplace(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDReplace_s* z)
{
  struct zxwsf_di_SvcMDReplace_s* y;
  if (!x || !z) return;
  y = x->SvcMDReplace;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDReplace = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDReplace) */

void zxwsf_dise_Body_ADD_SvcMDReplace(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDReplace_s* z)
{
  struct zxwsf_di_SvcMDReplace_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplace; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDReplace) */

void zxwsf_dise_Body_DEL_SvcMDReplace(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDReplace_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDReplace = (struct zxwsf_di_SvcMDReplace_s*)x->SvcMDReplace->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDReplace_s*)x->SvcMDReplace;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplace; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_SvcMDReplaceResponse) */

int zxwsf_dise_Body_NUM_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDReplaceResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDReplaceResponse; y; ++n, y = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_SvcMDReplaceResponse) */

struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_dise_Body_GET_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDReplaceResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDReplaceResponse; n>=0 && y; --n, y = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_SvcMDReplaceResponse) */

struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_dise_Body_POP_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDReplaceResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDReplaceResponse;
  if (y)
    x->SvcMDReplaceResponse = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_SvcMDReplaceResponse) */

void zxwsf_dise_Body_PUSH_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, struct zxwsf_di_SvcMDReplaceResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDReplaceResponse->gg.g;
  x->SvcMDReplaceResponse = z;
}

/* FUNC(zxwsf_dise_Body_REV_SvcMDReplaceResponse) */

void zxwsf_dise_Body_REV_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_di_SvcMDReplaceResponse_s* nxt;
  struct zxwsf_di_SvcMDReplaceResponse_s* y;
  if (!x) return;
  y = x->SvcMDReplaceResponse;
  if (!y) return;
  x->SvcMDReplaceResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDReplaceResponse->gg.g;
    x->SvcMDReplaceResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_SvcMDReplaceResponse) */

void zxwsf_dise_Body_PUT_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDReplaceResponse_s* z)
{
  struct zxwsf_di_SvcMDReplaceResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDReplaceResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDReplaceResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_SvcMDReplaceResponse) */

void zxwsf_dise_Body_ADD_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_di_SvcMDReplaceResponse_s* z)
{
  struct zxwsf_di_SvcMDReplaceResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplaceResponse; n > 1 && y; --n, y = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_SvcMDReplaceResponse) */

void zxwsf_dise_Body_DEL_SvcMDReplaceResponse(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_di_SvcMDReplaceResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDReplaceResponse = (struct zxwsf_di_SvcMDReplaceResponse_s*)x->SvcMDReplaceResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_SvcMDReplaceResponse_s*)x->SvcMDReplaceResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplaceResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Body_NUM_Fault) */

int zxwsf_dise_Body_NUM_Fault(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_dise_Fault_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Fault; y; ++n, y = (struct zxwsf_dise_Fault_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Body_GET_Fault) */

struct zxwsf_dise_Fault_s* zxwsf_dise_Body_GET_Fault(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_dise_Fault_s* y;
  if (!x) return 0;
  for (y = x->Fault; n>=0 && y; --n, y = (struct zxwsf_dise_Fault_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Body_POP_Fault) */

struct zxwsf_dise_Fault_s* zxwsf_dise_Body_POP_Fault(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_dise_Fault_s* y;
  if (!x) return 0;
  y = x->Fault;
  if (y)
    x->Fault = (struct zxwsf_dise_Fault_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Body_PUSH_Fault) */

void zxwsf_dise_Body_PUSH_Fault(struct zxwsf_dise_Body_s* x, struct zxwsf_dise_Fault_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Fault->gg.g;
  x->Fault = z;
}

/* FUNC(zxwsf_dise_Body_REV_Fault) */

void zxwsf_dise_Body_REV_Fault(struct zxwsf_dise_Body_s* x)
{
  struct zxwsf_dise_Fault_s* nxt;
  struct zxwsf_dise_Fault_s* y;
  if (!x) return;
  y = x->Fault;
  if (!y) return;
  x->Fault = 0;
  while (y) {
    nxt = (struct zxwsf_dise_Fault_s*)y->gg.g.n;
    y->gg.g.n = &x->Fault->gg.g;
    x->Fault = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Body_PUT_Fault) */

void zxwsf_dise_Body_PUT_Fault(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_dise_Fault_s* z)
{
  struct zxwsf_dise_Fault_s* y;
  if (!x || !z) return;
  y = x->Fault;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Fault = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Body_ADD_Fault) */

void zxwsf_dise_Body_ADD_Fault(struct zxwsf_dise_Body_s* x, int n, struct zxwsf_dise_Fault_s* z)
{
  struct zxwsf_dise_Fault_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_dise_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y; --n, y = (struct zxwsf_dise_Fault_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Body_DEL_Fault) */

void zxwsf_dise_Body_DEL_Fault(struct zxwsf_dise_Body_s* x, int n)
{
  struct zxwsf_dise_Fault_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Fault = (struct zxwsf_dise_Fault_s*)x->Fault->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_dise_Fault_s*)x->Fault;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_dise_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_dise_Envelope_NUM_Header) */

int zxwsf_dise_Envelope_NUM_Header(struct zxwsf_dise_Envelope_s* x)
{
  struct zxwsf_dise_Header_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Header; y; ++n, y = (struct zxwsf_dise_Header_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Envelope_GET_Header) */

struct zxwsf_dise_Header_s* zxwsf_dise_Envelope_GET_Header(struct zxwsf_dise_Envelope_s* x, int n)
{
  struct zxwsf_dise_Header_s* y;
  if (!x) return 0;
  for (y = x->Header; n>=0 && y; --n, y = (struct zxwsf_dise_Header_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Envelope_POP_Header) */

struct zxwsf_dise_Header_s* zxwsf_dise_Envelope_POP_Header(struct zxwsf_dise_Envelope_s* x)
{
  struct zxwsf_dise_Header_s* y;
  if (!x) return 0;
  y = x->Header;
  if (y)
    x->Header = (struct zxwsf_dise_Header_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Envelope_PUSH_Header) */

void zxwsf_dise_Envelope_PUSH_Header(struct zxwsf_dise_Envelope_s* x, struct zxwsf_dise_Header_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Header->gg.g;
  x->Header = z;
}

/* FUNC(zxwsf_dise_Envelope_REV_Header) */

void zxwsf_dise_Envelope_REV_Header(struct zxwsf_dise_Envelope_s* x)
{
  struct zxwsf_dise_Header_s* nxt;
  struct zxwsf_dise_Header_s* y;
  if (!x) return;
  y = x->Header;
  if (!y) return;
  x->Header = 0;
  while (y) {
    nxt = (struct zxwsf_dise_Header_s*)y->gg.g.n;
    y->gg.g.n = &x->Header->gg.g;
    x->Header = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Envelope_PUT_Header) */

void zxwsf_dise_Envelope_PUT_Header(struct zxwsf_dise_Envelope_s* x, int n, struct zxwsf_dise_Header_s* z)
{
  struct zxwsf_dise_Header_s* y;
  if (!x || !z) return;
  y = x->Header;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Header = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Envelope_ADD_Header) */

void zxwsf_dise_Envelope_ADD_Header(struct zxwsf_dise_Envelope_s* x, int n, struct zxwsf_dise_Header_s* z)
{
  struct zxwsf_dise_Header_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_dise_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y; --n, y = (struct zxwsf_dise_Header_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Envelope_DEL_Header) */

void zxwsf_dise_Envelope_DEL_Header(struct zxwsf_dise_Envelope_s* x, int n)
{
  struct zxwsf_dise_Header_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Header = (struct zxwsf_dise_Header_s*)x->Header->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_dise_Header_s*)x->Header;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_dise_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Envelope_NUM_Body) */

int zxwsf_dise_Envelope_NUM_Body(struct zxwsf_dise_Envelope_s* x)
{
  struct zxwsf_dise_Body_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Body; y; ++n, y = (struct zxwsf_dise_Body_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Envelope_GET_Body) */

struct zxwsf_dise_Body_s* zxwsf_dise_Envelope_GET_Body(struct zxwsf_dise_Envelope_s* x, int n)
{
  struct zxwsf_dise_Body_s* y;
  if (!x) return 0;
  for (y = x->Body; n>=0 && y; --n, y = (struct zxwsf_dise_Body_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Envelope_POP_Body) */

struct zxwsf_dise_Body_s* zxwsf_dise_Envelope_POP_Body(struct zxwsf_dise_Envelope_s* x)
{
  struct zxwsf_dise_Body_s* y;
  if (!x) return 0;
  y = x->Body;
  if (y)
    x->Body = (struct zxwsf_dise_Body_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Envelope_PUSH_Body) */

void zxwsf_dise_Envelope_PUSH_Body(struct zxwsf_dise_Envelope_s* x, struct zxwsf_dise_Body_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Body->gg.g;
  x->Body = z;
}

/* FUNC(zxwsf_dise_Envelope_REV_Body) */

void zxwsf_dise_Envelope_REV_Body(struct zxwsf_dise_Envelope_s* x)
{
  struct zxwsf_dise_Body_s* nxt;
  struct zxwsf_dise_Body_s* y;
  if (!x) return;
  y = x->Body;
  if (!y) return;
  x->Body = 0;
  while (y) {
    nxt = (struct zxwsf_dise_Body_s*)y->gg.g.n;
    y->gg.g.n = &x->Body->gg.g;
    x->Body = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Envelope_PUT_Body) */

void zxwsf_dise_Envelope_PUT_Body(struct zxwsf_dise_Envelope_s* x, int n, struct zxwsf_dise_Body_s* z)
{
  struct zxwsf_dise_Body_s* y;
  if (!x || !z) return;
  y = x->Body;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Body = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Envelope_ADD_Body) */

void zxwsf_dise_Envelope_ADD_Body(struct zxwsf_dise_Envelope_s* x, int n, struct zxwsf_dise_Body_s* z)
{
  struct zxwsf_dise_Body_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_dise_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y; --n, y = (struct zxwsf_dise_Body_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Envelope_DEL_Body) */

void zxwsf_dise_Envelope_DEL_Body(struct zxwsf_dise_Envelope_s* x, int n)
{
  struct zxwsf_dise_Body_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Body = (struct zxwsf_dise_Body_s*)x->Body->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_dise_Body_s*)x->Body;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_dise_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_dise_Fault_NUM_faultcode) */

int zxwsf_dise_Fault_NUM_faultcode(struct zxwsf_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultcode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Fault_GET_faultcode) */

struct zx_elem_s* zxwsf_dise_Fault_GET_faultcode(struct zxwsf_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultcode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Fault_POP_faultcode) */

struct zx_elem_s* zxwsf_dise_Fault_POP_faultcode(struct zxwsf_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultcode;
  if (y)
    x->faultcode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_dise_Fault_PUSH_faultcode) */

void zxwsf_dise_Fault_PUSH_faultcode(struct zxwsf_dise_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultcode->g;
  x->faultcode = z;
}

/* FUNC(zxwsf_dise_Fault_REV_faultcode) */

void zxwsf_dise_Fault_REV_faultcode(struct zxwsf_dise_Fault_s* x)
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

/* FUNC(zxwsf_dise_Fault_PUT_faultcode) */

void zxwsf_dise_Fault_PUT_faultcode(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_dise_Fault_ADD_faultcode) */

void zxwsf_dise_Fault_ADD_faultcode(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_dise_Fault_DEL_faultcode) */

void zxwsf_dise_Fault_DEL_faultcode(struct zxwsf_dise_Fault_s* x, int n)
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



/* FUNC(zxwsf_dise_Fault_NUM_faultstring) */

int zxwsf_dise_Fault_NUM_faultstring(struct zxwsf_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultstring; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Fault_GET_faultstring) */

struct zx_elem_s* zxwsf_dise_Fault_GET_faultstring(struct zxwsf_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultstring; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Fault_POP_faultstring) */

struct zx_elem_s* zxwsf_dise_Fault_POP_faultstring(struct zxwsf_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultstring;
  if (y)
    x->faultstring = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_dise_Fault_PUSH_faultstring) */

void zxwsf_dise_Fault_PUSH_faultstring(struct zxwsf_dise_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultstring->g;
  x->faultstring = z;
}

/* FUNC(zxwsf_dise_Fault_REV_faultstring) */

void zxwsf_dise_Fault_REV_faultstring(struct zxwsf_dise_Fault_s* x)
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

/* FUNC(zxwsf_dise_Fault_PUT_faultstring) */

void zxwsf_dise_Fault_PUT_faultstring(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_dise_Fault_ADD_faultstring) */

void zxwsf_dise_Fault_ADD_faultstring(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_dise_Fault_DEL_faultstring) */

void zxwsf_dise_Fault_DEL_faultstring(struct zxwsf_dise_Fault_s* x, int n)
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



/* FUNC(zxwsf_dise_Fault_NUM_faultactor) */

int zxwsf_dise_Fault_NUM_faultactor(struct zxwsf_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultactor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Fault_GET_faultactor) */

struct zx_elem_s* zxwsf_dise_Fault_GET_faultactor(struct zxwsf_dise_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultactor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Fault_POP_faultactor) */

struct zx_elem_s* zxwsf_dise_Fault_POP_faultactor(struct zxwsf_dise_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultactor;
  if (y)
    x->faultactor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_dise_Fault_PUSH_faultactor) */

void zxwsf_dise_Fault_PUSH_faultactor(struct zxwsf_dise_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultactor->g;
  x->faultactor = z;
}

/* FUNC(zxwsf_dise_Fault_REV_faultactor) */

void zxwsf_dise_Fault_REV_faultactor(struct zxwsf_dise_Fault_s* x)
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

/* FUNC(zxwsf_dise_Fault_PUT_faultactor) */

void zxwsf_dise_Fault_PUT_faultactor(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_dise_Fault_ADD_faultactor) */

void zxwsf_dise_Fault_ADD_faultactor(struct zxwsf_dise_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_dise_Fault_DEL_faultactor) */

void zxwsf_dise_Fault_DEL_faultactor(struct zxwsf_dise_Fault_s* x, int n)
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



/* FUNC(zxwsf_dise_Fault_NUM_detail) */

int zxwsf_dise_Fault_NUM_detail(struct zxwsf_dise_Fault_s* x)
{
  struct zxwsf_dise_detail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->detail; y; ++n, y = (struct zxwsf_dise_detail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Fault_GET_detail) */

struct zxwsf_dise_detail_s* zxwsf_dise_Fault_GET_detail(struct zxwsf_dise_Fault_s* x, int n)
{
  struct zxwsf_dise_detail_s* y;
  if (!x) return 0;
  for (y = x->detail; n>=0 && y; --n, y = (struct zxwsf_dise_detail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Fault_POP_detail) */

struct zxwsf_dise_detail_s* zxwsf_dise_Fault_POP_detail(struct zxwsf_dise_Fault_s* x)
{
  struct zxwsf_dise_detail_s* y;
  if (!x) return 0;
  y = x->detail;
  if (y)
    x->detail = (struct zxwsf_dise_detail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Fault_PUSH_detail) */

void zxwsf_dise_Fault_PUSH_detail(struct zxwsf_dise_Fault_s* x, struct zxwsf_dise_detail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->detail->gg.g;
  x->detail = z;
}

/* FUNC(zxwsf_dise_Fault_REV_detail) */

void zxwsf_dise_Fault_REV_detail(struct zxwsf_dise_Fault_s* x)
{
  struct zxwsf_dise_detail_s* nxt;
  struct zxwsf_dise_detail_s* y;
  if (!x) return;
  y = x->detail;
  if (!y) return;
  x->detail = 0;
  while (y) {
    nxt = (struct zxwsf_dise_detail_s*)y->gg.g.n;
    y->gg.g.n = &x->detail->gg.g;
    x->detail = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Fault_PUT_detail) */

void zxwsf_dise_Fault_PUT_detail(struct zxwsf_dise_Fault_s* x, int n, struct zxwsf_dise_detail_s* z)
{
  struct zxwsf_dise_detail_s* y;
  if (!x || !z) return;
  y = x->detail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->detail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Fault_ADD_detail) */

void zxwsf_dise_Fault_ADD_detail(struct zxwsf_dise_Fault_s* x, int n, struct zxwsf_dise_detail_s* z)
{
  struct zxwsf_dise_detail_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_dise_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y; --n, y = (struct zxwsf_dise_detail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Fault_DEL_detail) */

void zxwsf_dise_Fault_DEL_detail(struct zxwsf_dise_Fault_s* x, int n)
{
  struct zxwsf_dise_detail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->detail = (struct zxwsf_dise_detail_s*)x->detail->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_dise_detail_s*)x->detail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_dise_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_dise_Header_NUM_MessageID) */

int zxwsf_dise_Header_NUM_MessageID(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_MessageID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_MessageID) */

struct zxwsf_a_MessageID_s* zxwsf_dise_Header_GET_MessageID(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_MessageID_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_MessageID) */

struct zxwsf_a_MessageID_s* zxwsf_dise_Header_POP_MessageID(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_MessageID_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zxwsf_a_MessageID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_MessageID) */

void zxwsf_dise_Header_PUSH_MessageID(struct zxwsf_dise_Header_s* x, struct zxwsf_a_MessageID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageID->gg.g;
  x->MessageID = z;
}

/* FUNC(zxwsf_dise_Header_REV_MessageID) */

void zxwsf_dise_Header_REV_MessageID(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_MessageID_s* nxt;
  struct zxwsf_a_MessageID_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zxwsf_a_MessageID_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageID->gg.g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_MessageID) */

void zxwsf_dise_Header_PUT_MessageID(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_MessageID_s* z)
{
  struct zxwsf_a_MessageID_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_MessageID) */

void zxwsf_dise_Header_ADD_MessageID(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_MessageID_s* z)
{
  struct zxwsf_a_MessageID_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_MessageID) */

void zxwsf_dise_Header_DEL_MessageID(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_MessageID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zxwsf_a_MessageID_s*)x->MessageID->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_MessageID_s*)x->MessageID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_RelatesTo) */

int zxwsf_dise_Header_NUM_RelatesTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_RelatesTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RelatesTo; y; ++n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_RelatesTo) */

struct zxwsf_a_RelatesTo_s* zxwsf_dise_Header_GET_RelatesTo(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_RelatesTo_s* y;
  if (!x) return 0;
  for (y = x->RelatesTo; n>=0 && y; --n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_RelatesTo) */

struct zxwsf_a_RelatesTo_s* zxwsf_dise_Header_POP_RelatesTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_RelatesTo_s* y;
  if (!x) return 0;
  y = x->RelatesTo;
  if (y)
    x->RelatesTo = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_RelatesTo) */

void zxwsf_dise_Header_PUSH_RelatesTo(struct zxwsf_dise_Header_s* x, struct zxwsf_a_RelatesTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RelatesTo->gg.g;
  x->RelatesTo = z;
}

/* FUNC(zxwsf_dise_Header_REV_RelatesTo) */

void zxwsf_dise_Header_REV_RelatesTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_RelatesTo_s* nxt;
  struct zxwsf_a_RelatesTo_s* y;
  if (!x) return;
  y = x->RelatesTo;
  if (!y) return;
  x->RelatesTo = 0;
  while (y) {
    nxt = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n;
    y->gg.g.n = &x->RelatesTo->gg.g;
    x->RelatesTo = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_RelatesTo) */

void zxwsf_dise_Header_PUT_RelatesTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_RelatesTo_s* z)
{
  struct zxwsf_a_RelatesTo_s* y;
  if (!x || !z) return;
  y = x->RelatesTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RelatesTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_RelatesTo) */

void zxwsf_dise_Header_ADD_RelatesTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_RelatesTo_s* z)
{
  struct zxwsf_a_RelatesTo_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelatesTo; n > 1 && y; --n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_RelatesTo) */

void zxwsf_dise_Header_DEL_RelatesTo(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_RelatesTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RelatesTo = (struct zxwsf_a_RelatesTo_s*)x->RelatesTo->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_RelatesTo_s*)x->RelatesTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelatesTo; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_ReplyTo) */

int zxwsf_dise_Header_NUM_ReplyTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_ReplyTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyTo; y; ++n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_ReplyTo) */

struct zxwsf_a_ReplyTo_s* zxwsf_dise_Header_GET_ReplyTo(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_ReplyTo_s* y;
  if (!x) return 0;
  for (y = x->ReplyTo; n>=0 && y; --n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_ReplyTo) */

struct zxwsf_a_ReplyTo_s* zxwsf_dise_Header_POP_ReplyTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_ReplyTo_s* y;
  if (!x) return 0;
  y = x->ReplyTo;
  if (y)
    x->ReplyTo = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_ReplyTo) */

void zxwsf_dise_Header_PUSH_ReplyTo(struct zxwsf_dise_Header_s* x, struct zxwsf_a_ReplyTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReplyTo->gg.g;
  x->ReplyTo = z;
}

/* FUNC(zxwsf_dise_Header_REV_ReplyTo) */

void zxwsf_dise_Header_REV_ReplyTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_ReplyTo_s* nxt;
  struct zxwsf_a_ReplyTo_s* y;
  if (!x) return;
  y = x->ReplyTo;
  if (!y) return;
  x->ReplyTo = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n;
    y->gg.g.n = &x->ReplyTo->gg.g;
    x->ReplyTo = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_ReplyTo) */

void zxwsf_dise_Header_PUT_ReplyTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_ReplyTo_s* z)
{
  struct zxwsf_a_ReplyTo_s* y;
  if (!x || !z) return;
  y = x->ReplyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReplyTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_ReplyTo) */

void zxwsf_dise_Header_ADD_ReplyTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_ReplyTo_s* z)
{
  struct zxwsf_a_ReplyTo_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyTo; n > 1 && y; --n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_ReplyTo) */

void zxwsf_dise_Header_DEL_ReplyTo(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_ReplyTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyTo = (struct zxwsf_a_ReplyTo_s*)x->ReplyTo->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReplyTo_s*)x->ReplyTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyTo; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_From) */

int zxwsf_dise_Header_NUM_From(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_From_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->From; y; ++n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_From) */

struct zxwsf_a_From_s* zxwsf_dise_Header_GET_From(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_From_s* y;
  if (!x) return 0;
  for (y = x->From; n>=0 && y; --n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_From) */

struct zxwsf_a_From_s* zxwsf_dise_Header_POP_From(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_From_s* y;
  if (!x) return 0;
  y = x->From;
  if (y)
    x->From = (struct zxwsf_a_From_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_From) */

void zxwsf_dise_Header_PUSH_From(struct zxwsf_dise_Header_s* x, struct zxwsf_a_From_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->From->gg.g;
  x->From = z;
}

/* FUNC(zxwsf_dise_Header_REV_From) */

void zxwsf_dise_Header_REV_From(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_From_s* nxt;
  struct zxwsf_a_From_s* y;
  if (!x) return;
  y = x->From;
  if (!y) return;
  x->From = 0;
  while (y) {
    nxt = (struct zxwsf_a_From_s*)y->gg.g.n;
    y->gg.g.n = &x->From->gg.g;
    x->From = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_From) */

void zxwsf_dise_Header_PUT_From(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_From_s* z)
{
  struct zxwsf_a_From_s* y;
  if (!x || !z) return;
  y = x->From;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->From = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_From) */

void zxwsf_dise_Header_ADD_From(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_From_s* z)
{
  struct zxwsf_a_From_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->From; n > 1 && y; --n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_From) */

void zxwsf_dise_Header_DEL_From(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_From_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->From = (struct zxwsf_a_From_s*)x->From->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_From_s*)x->From;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->From; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_FaultTo) */

int zxwsf_dise_Header_NUM_FaultTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_FaultTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FaultTo; y; ++n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_FaultTo) */

struct zxwsf_a_FaultTo_s* zxwsf_dise_Header_GET_FaultTo(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_FaultTo_s* y;
  if (!x) return 0;
  for (y = x->FaultTo; n>=0 && y; --n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_FaultTo) */

struct zxwsf_a_FaultTo_s* zxwsf_dise_Header_POP_FaultTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_FaultTo_s* y;
  if (!x) return 0;
  y = x->FaultTo;
  if (y)
    x->FaultTo = (struct zxwsf_a_FaultTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_FaultTo) */

void zxwsf_dise_Header_PUSH_FaultTo(struct zxwsf_dise_Header_s* x, struct zxwsf_a_FaultTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FaultTo->gg.g;
  x->FaultTo = z;
}

/* FUNC(zxwsf_dise_Header_REV_FaultTo) */

void zxwsf_dise_Header_REV_FaultTo(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_FaultTo_s* nxt;
  struct zxwsf_a_FaultTo_s* y;
  if (!x) return;
  y = x->FaultTo;
  if (!y) return;
  x->FaultTo = 0;
  while (y) {
    nxt = (struct zxwsf_a_FaultTo_s*)y->gg.g.n;
    y->gg.g.n = &x->FaultTo->gg.g;
    x->FaultTo = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_FaultTo) */

void zxwsf_dise_Header_PUT_FaultTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_FaultTo_s* z)
{
  struct zxwsf_a_FaultTo_s* y;
  if (!x || !z) return;
  y = x->FaultTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FaultTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_FaultTo) */

void zxwsf_dise_Header_ADD_FaultTo(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_FaultTo_s* z)
{
  struct zxwsf_a_FaultTo_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FaultTo; n > 1 && y; --n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_FaultTo) */

void zxwsf_dise_Header_DEL_FaultTo(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_FaultTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FaultTo = (struct zxwsf_a_FaultTo_s*)x->FaultTo->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_FaultTo_s*)x->FaultTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FaultTo; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_To) */

int zxwsf_dise_Header_NUM_To(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_To_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->To; y; ++n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_To) */

struct zxwsf_a_To_s* zxwsf_dise_Header_GET_To(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_To_s* y;
  if (!x) return 0;
  for (y = x->To; n>=0 && y; --n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_To) */

struct zxwsf_a_To_s* zxwsf_dise_Header_POP_To(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_To_s* y;
  if (!x) return 0;
  y = x->To;
  if (y)
    x->To = (struct zxwsf_a_To_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_To) */

void zxwsf_dise_Header_PUSH_To(struct zxwsf_dise_Header_s* x, struct zxwsf_a_To_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->To->gg.g;
  x->To = z;
}

/* FUNC(zxwsf_dise_Header_REV_To) */

void zxwsf_dise_Header_REV_To(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_To_s* nxt;
  struct zxwsf_a_To_s* y;
  if (!x) return;
  y = x->To;
  if (!y) return;
  x->To = 0;
  while (y) {
    nxt = (struct zxwsf_a_To_s*)y->gg.g.n;
    y->gg.g.n = &x->To->gg.g;
    x->To = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_To) */

void zxwsf_dise_Header_PUT_To(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_To_s* z)
{
  struct zxwsf_a_To_s* y;
  if (!x || !z) return;
  y = x->To;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->To = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_To) */

void zxwsf_dise_Header_ADD_To(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_To_s* z)
{
  struct zxwsf_a_To_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y; --n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_To) */

void zxwsf_dise_Header_DEL_To(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_To_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->To = (struct zxwsf_a_To_s*)x->To->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_To_s*)x->To;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_Action) */

int zxwsf_dise_Header_NUM_Action(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_Action) */

struct zxwsf_a_Action_s* zxwsf_dise_Header_GET_Action(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_Action) */

struct zxwsf_a_Action_s* zxwsf_dise_Header_POP_Action(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zxwsf_a_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_Action) */

void zxwsf_dise_Header_PUSH_Action(struct zxwsf_dise_Header_s* x, struct zxwsf_a_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zxwsf_dise_Header_REV_Action) */

void zxwsf_dise_Header_REV_Action(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_a_Action_s* nxt;
  struct zxwsf_a_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zxwsf_a_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_Action) */

void zxwsf_dise_Header_PUT_Action(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_Action_s* z)
{
  struct zxwsf_a_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_Action) */

void zxwsf_dise_Header_ADD_Action(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_a_Action_s* z)
{
  struct zxwsf_a_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_Action) */

void zxwsf_dise_Header_DEL_Action(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zxwsf_a_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_Framework) */

int zxwsf_dise_Header_NUM_Framework(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_sbf_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_Framework) */

struct zxwsf_sbf_Framework_s* zxwsf_dise_Header_GET_Framework(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_Framework) */

struct zxwsf_sbf_Framework_s* zxwsf_dise_Header_POP_Framework(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zxwsf_sbf_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_Framework) */

void zxwsf_dise_Header_PUSH_Framework(struct zxwsf_dise_Header_s* x, struct zxwsf_sbf_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zxwsf_dise_Header_REV_Framework) */

void zxwsf_dise_Header_REV_Framework(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_sbf_Framework_s* nxt;
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return;
  y = x->Framework;
  if (!y) return;
  x->Framework = 0;
  while (y) {
    nxt = (struct zxwsf_sbf_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->Framework->gg.g;
    x->Framework = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_Framework) */

void zxwsf_dise_Header_PUT_Framework(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_sbf_Framework_s* z)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x || !z) return;
  y = x->Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_Framework) */

void zxwsf_dise_Header_ADD_Framework(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_sbf_Framework_s* z)
{
  struct zxwsf_sbf_Framework_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_Framework) */

void zxwsf_dise_Header_DEL_Framework(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Framework = (struct zxwsf_sbf_Framework_s*)x->Framework->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_sbf_Framework_s*)x->Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_b_Framework) */

int zxwsf_dise_Header_NUM_b_Framework(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b_Framework; y; ++n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_b_Framework) */

struct zxwsf_b_Framework_s* zxwsf_dise_Header_GET_b_Framework(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_Framework_s* y;
  if (!x) return 0;
  for (y = x->b_Framework; n>=0 && y; --n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_b_Framework) */

struct zxwsf_b_Framework_s* zxwsf_dise_Header_POP_b_Framework(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_Framework_s* y;
  if (!x) return 0;
  y = x->b_Framework;
  if (y)
    x->b_Framework = (struct zxwsf_b_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_b_Framework) */

void zxwsf_dise_Header_PUSH_b_Framework(struct zxwsf_dise_Header_s* x, struct zxwsf_b_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b_Framework->gg.g;
  x->b_Framework = z;
}

/* FUNC(zxwsf_dise_Header_REV_b_Framework) */

void zxwsf_dise_Header_REV_b_Framework(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_Framework_s* nxt;
  struct zxwsf_b_Framework_s* y;
  if (!x) return;
  y = x->b_Framework;
  if (!y) return;
  x->b_Framework = 0;
  while (y) {
    nxt = (struct zxwsf_b_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->b_Framework->gg.g;
    x->b_Framework = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_b_Framework) */

void zxwsf_dise_Header_PUT_b_Framework(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_Framework_s* z)
{
  struct zxwsf_b_Framework_s* y;
  if (!x || !z) return;
  y = x->b_Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b_Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_b_Framework) */

void zxwsf_dise_Header_ADD_b_Framework(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_Framework_s* z)
{
  struct zxwsf_b_Framework_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b_Framework; n > 1 && y; --n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_b_Framework) */

void zxwsf_dise_Header_DEL_b_Framework(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b_Framework = (struct zxwsf_b_Framework_s*)x->b_Framework->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_Framework_s*)x->b_Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b_Framework; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_Sender) */

int zxwsf_dise_Header_NUM_Sender(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_Sender_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sender; y; ++n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_Sender) */

struct zxwsf_b_Sender_s* zxwsf_dise_Header_GET_Sender(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_Sender_s* y;
  if (!x) return 0;
  for (y = x->Sender; n>=0 && y; --n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_Sender) */

struct zxwsf_b_Sender_s* zxwsf_dise_Header_POP_Sender(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_Sender_s* y;
  if (!x) return 0;
  y = x->Sender;
  if (y)
    x->Sender = (struct zxwsf_b_Sender_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_Sender) */

void zxwsf_dise_Header_PUSH_Sender(struct zxwsf_dise_Header_s* x, struct zxwsf_b_Sender_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Sender->gg.g;
  x->Sender = z;
}

/* FUNC(zxwsf_dise_Header_REV_Sender) */

void zxwsf_dise_Header_REV_Sender(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_Sender_s* nxt;
  struct zxwsf_b_Sender_s* y;
  if (!x) return;
  y = x->Sender;
  if (!y) return;
  x->Sender = 0;
  while (y) {
    nxt = (struct zxwsf_b_Sender_s*)y->gg.g.n;
    y->gg.g.n = &x->Sender->gg.g;
    x->Sender = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_Sender) */

void zxwsf_dise_Header_PUT_Sender(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_Sender_s* z)
{
  struct zxwsf_b_Sender_s* y;
  if (!x || !z) return;
  y = x->Sender;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Sender = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_Sender) */

void zxwsf_dise_Header_ADD_Sender(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_Sender_s* z)
{
  struct zxwsf_b_Sender_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y; --n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_Sender) */

void zxwsf_dise_Header_DEL_Sender(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_Sender_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sender = (struct zxwsf_b_Sender_s*)x->Sender->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_Sender_s*)x->Sender;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_CredentialsContext) */

int zxwsf_dise_Header_NUM_CredentialsContext(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_CredentialsContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CredentialsContext; y; ++n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_CredentialsContext) */

struct zxwsf_b_CredentialsContext_s* zxwsf_dise_Header_GET_CredentialsContext(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x) return 0;
  for (y = x->CredentialsContext; n>=0 && y; --n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_CredentialsContext) */

struct zxwsf_b_CredentialsContext_s* zxwsf_dise_Header_POP_CredentialsContext(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x) return 0;
  y = x->CredentialsContext;
  if (y)
    x->CredentialsContext = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_CredentialsContext) */

void zxwsf_dise_Header_PUSH_CredentialsContext(struct zxwsf_dise_Header_s* x, struct zxwsf_b_CredentialsContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CredentialsContext->gg.g;
  x->CredentialsContext = z;
}

/* FUNC(zxwsf_dise_Header_REV_CredentialsContext) */

void zxwsf_dise_Header_REV_CredentialsContext(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_CredentialsContext_s* nxt;
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x) return;
  y = x->CredentialsContext;
  if (!y) return;
  x->CredentialsContext = 0;
  while (y) {
    nxt = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n;
    y->gg.g.n = &x->CredentialsContext->gg.g;
    x->CredentialsContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_CredentialsContext) */

void zxwsf_dise_Header_PUT_CredentialsContext(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_CredentialsContext_s* z)
{
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x || !z) return;
  y = x->CredentialsContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CredentialsContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_CredentialsContext) */

void zxwsf_dise_Header_ADD_CredentialsContext(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_CredentialsContext_s* z)
{
  struct zxwsf_b_CredentialsContext_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CredentialsContext; n > 1 && y; --n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_CredentialsContext) */

void zxwsf_dise_Header_DEL_CredentialsContext(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CredentialsContext = (struct zxwsf_b_CredentialsContext_s*)x->CredentialsContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_CredentialsContext_s*)x->CredentialsContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CredentialsContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_EndpointUpdate) */

int zxwsf_dise_Header_NUM_EndpointUpdate(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointUpdate; y; ++n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_EndpointUpdate) */

struct zxwsf_b_EndpointUpdate_s* zxwsf_dise_Header_GET_EndpointUpdate(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x) return 0;
  for (y = x->EndpointUpdate; n>=0 && y; --n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_EndpointUpdate) */

struct zxwsf_b_EndpointUpdate_s* zxwsf_dise_Header_POP_EndpointUpdate(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x) return 0;
  y = x->EndpointUpdate;
  if (y)
    x->EndpointUpdate = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_EndpointUpdate) */

void zxwsf_dise_Header_PUSH_EndpointUpdate(struct zxwsf_dise_Header_s* x, struct zxwsf_b_EndpointUpdate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointUpdate->gg.g;
  x->EndpointUpdate = z;
}

/* FUNC(zxwsf_dise_Header_REV_EndpointUpdate) */

void zxwsf_dise_Header_REV_EndpointUpdate(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_EndpointUpdate_s* nxt;
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x) return;
  y = x->EndpointUpdate;
  if (!y) return;
  x->EndpointUpdate = 0;
  while (y) {
    nxt = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointUpdate->gg.g;
    x->EndpointUpdate = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_EndpointUpdate) */

void zxwsf_dise_Header_PUT_EndpointUpdate(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_EndpointUpdate_s* z)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x || !z) return;
  y = x->EndpointUpdate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointUpdate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_EndpointUpdate) */

void zxwsf_dise_Header_ADD_EndpointUpdate(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_EndpointUpdate_s* z)
{
  struct zxwsf_b_EndpointUpdate_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointUpdate; n > 1 && y; --n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_EndpointUpdate) */

void zxwsf_dise_Header_DEL_EndpointUpdate(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointUpdate = (struct zxwsf_b_EndpointUpdate_s*)x->EndpointUpdate->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_EndpointUpdate_s*)x->EndpointUpdate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointUpdate; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_Timeout) */

int zxwsf_dise_Header_NUM_Timeout(struct zxwsf_dise_Header_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Timeout; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_Timeout) */

struct zx_elem_s* zxwsf_dise_Header_GET_Timeout(struct zxwsf_dise_Header_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Timeout; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_Timeout) */

struct zx_elem_s* zxwsf_dise_Header_POP_Timeout(struct zxwsf_dise_Header_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Timeout;
  if (y)
    x->Timeout = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_Timeout) */

void zxwsf_dise_Header_PUSH_Timeout(struct zxwsf_dise_Header_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Timeout->g;
  x->Timeout = z;
}

/* FUNC(zxwsf_dise_Header_REV_Timeout) */

void zxwsf_dise_Header_REV_Timeout(struct zxwsf_dise_Header_s* x)
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

/* FUNC(zxwsf_dise_Header_PUT_Timeout) */

void zxwsf_dise_Header_PUT_Timeout(struct zxwsf_dise_Header_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_dise_Header_ADD_Timeout) */

void zxwsf_dise_Header_ADD_Timeout(struct zxwsf_dise_Header_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_dise_Header_DEL_Timeout) */

void zxwsf_dise_Header_DEL_Timeout(struct zxwsf_dise_Header_s* x, int n)
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



/* FUNC(zxwsf_dise_Header_NUM_ProcessingContext) */

int zxwsf_dise_Header_NUM_ProcessingContext(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_ProcessingContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProcessingContext; y; ++n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_ProcessingContext) */

struct zxwsf_b_ProcessingContext_s* zxwsf_dise_Header_GET_ProcessingContext(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x) return 0;
  for (y = x->ProcessingContext; n>=0 && y; --n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_ProcessingContext) */

struct zxwsf_b_ProcessingContext_s* zxwsf_dise_Header_POP_ProcessingContext(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x) return 0;
  y = x->ProcessingContext;
  if (y)
    x->ProcessingContext = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_ProcessingContext) */

void zxwsf_dise_Header_PUSH_ProcessingContext(struct zxwsf_dise_Header_s* x, struct zxwsf_b_ProcessingContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProcessingContext->gg.g;
  x->ProcessingContext = z;
}

/* FUNC(zxwsf_dise_Header_REV_ProcessingContext) */

void zxwsf_dise_Header_REV_ProcessingContext(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_ProcessingContext_s* nxt;
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x) return;
  y = x->ProcessingContext;
  if (!y) return;
  x->ProcessingContext = 0;
  while (y) {
    nxt = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n;
    y->gg.g.n = &x->ProcessingContext->gg.g;
    x->ProcessingContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_ProcessingContext) */

void zxwsf_dise_Header_PUT_ProcessingContext(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_ProcessingContext_s* z)
{
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x || !z) return;
  y = x->ProcessingContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProcessingContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_ProcessingContext) */

void zxwsf_dise_Header_ADD_ProcessingContext(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_ProcessingContext_s* z)
{
  struct zxwsf_b_ProcessingContext_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProcessingContext; n > 1 && y; --n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_ProcessingContext) */

void zxwsf_dise_Header_DEL_ProcessingContext(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProcessingContext = (struct zxwsf_b_ProcessingContext_s*)x->ProcessingContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_ProcessingContext_s*)x->ProcessingContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProcessingContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_ApplicationEPR) */

int zxwsf_dise_Header_NUM_ApplicationEPR(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicationEPR; y; ++n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_ApplicationEPR) */

struct zxwsf_b_ApplicationEPR_s* zxwsf_dise_Header_GET_ApplicationEPR(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x) return 0;
  for (y = x->ApplicationEPR; n>=0 && y; --n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_ApplicationEPR) */

struct zxwsf_b_ApplicationEPR_s* zxwsf_dise_Header_POP_ApplicationEPR(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x) return 0;
  y = x->ApplicationEPR;
  if (y)
    x->ApplicationEPR = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_ApplicationEPR) */

void zxwsf_dise_Header_PUSH_ApplicationEPR(struct zxwsf_dise_Header_s* x, struct zxwsf_b_ApplicationEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ApplicationEPR->gg.g;
  x->ApplicationEPR = z;
}

/* FUNC(zxwsf_dise_Header_REV_ApplicationEPR) */

void zxwsf_dise_Header_REV_ApplicationEPR(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_ApplicationEPR_s* nxt;
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x) return;
  y = x->ApplicationEPR;
  if (!y) return;
  x->ApplicationEPR = 0;
  while (y) {
    nxt = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n;
    y->gg.g.n = &x->ApplicationEPR->gg.g;
    x->ApplicationEPR = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_ApplicationEPR) */

void zxwsf_dise_Header_PUT_ApplicationEPR(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_ApplicationEPR_s* z)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x || !z) return;
  y = x->ApplicationEPR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ApplicationEPR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_ApplicationEPR) */

void zxwsf_dise_Header_ADD_ApplicationEPR(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_ApplicationEPR_s* z)
{
  struct zxwsf_b_ApplicationEPR_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ApplicationEPR; n > 1 && y; --n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_ApplicationEPR) */

void zxwsf_dise_Header_DEL_ApplicationEPR(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicationEPR = (struct zxwsf_b_ApplicationEPR_s*)x->ApplicationEPR->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_ApplicationEPR_s*)x->ApplicationEPR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ApplicationEPR; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_dise_Header_NUM_RedirectRequest) */

int zxwsf_dise_Header_NUM_RedirectRequest(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_RedirectRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RedirectRequest; y; ++n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_dise_Header_GET_RedirectRequest) */

struct zxwsf_b_RedirectRequest_s* zxwsf_dise_Header_GET_RedirectRequest(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x) return 0;
  for (y = x->RedirectRequest; n>=0 && y; --n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_dise_Header_POP_RedirectRequest) */

struct zxwsf_b_RedirectRequest_s* zxwsf_dise_Header_POP_RedirectRequest(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x) return 0;
  y = x->RedirectRequest;
  if (y)
    x->RedirectRequest = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_dise_Header_PUSH_RedirectRequest) */

void zxwsf_dise_Header_PUSH_RedirectRequest(struct zxwsf_dise_Header_s* x, struct zxwsf_b_RedirectRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RedirectRequest->gg.g;
  x->RedirectRequest = z;
}

/* FUNC(zxwsf_dise_Header_REV_RedirectRequest) */

void zxwsf_dise_Header_REV_RedirectRequest(struct zxwsf_dise_Header_s* x)
{
  struct zxwsf_b_RedirectRequest_s* nxt;
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x) return;
  y = x->RedirectRequest;
  if (!y) return;
  x->RedirectRequest = 0;
  while (y) {
    nxt = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RedirectRequest->gg.g;
    x->RedirectRequest = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_dise_Header_PUT_RedirectRequest) */

void zxwsf_dise_Header_PUT_RedirectRequest(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_RedirectRequest_s* z)
{
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x || !z) return;
  y = x->RedirectRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RedirectRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_dise_Header_ADD_RedirectRequest) */

void zxwsf_dise_Header_ADD_RedirectRequest(struct zxwsf_dise_Header_s* x, int n, struct zxwsf_b_RedirectRequest_s* z)
{
  struct zxwsf_b_RedirectRequest_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RedirectRequest; n > 1 && y; --n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_dise_Header_DEL_RedirectRequest) */

void zxwsf_dise_Header_DEL_RedirectRequest(struct zxwsf_dise_Header_s* x, int n)
{
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RedirectRequest = (struct zxwsf_b_RedirectRequest_s*)x->RedirectRequest->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_RedirectRequest_s*)x->RedirectRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RedirectRequest; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}













/* FUNC(zxwsf_e_Body_NUM_Query) */

int zxwsf_e_Body_NUM_Query(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Query; y; ++n, y = (struct zxwsf_di_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Body_GET_Query) */

struct zxwsf_di_Query_s* zxwsf_e_Body_GET_Query(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di_Query_s* y;
  if (!x) return 0;
  for (y = x->Query; n>=0 && y; --n, y = (struct zxwsf_di_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Body_POP_Query) */

struct zxwsf_di_Query_s* zxwsf_e_Body_POP_Query(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di_Query_s* y;
  if (!x) return 0;
  y = x->Query;
  if (y)
    x->Query = (struct zxwsf_di_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Body_PUSH_Query) */

void zxwsf_e_Body_PUSH_Query(struct zxwsf_e_Body_s* x, struct zxwsf_di_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Query->gg.g;
  x->Query = z;
}

/* FUNC(zxwsf_e_Body_REV_Query) */

void zxwsf_e_Body_REV_Query(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di_Query_s* nxt;
  struct zxwsf_di_Query_s* y;
  if (!x) return;
  y = x->Query;
  if (!y) return;
  x->Query = 0;
  while (y) {
    nxt = (struct zxwsf_di_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->Query->gg.g;
    x->Query = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Body_PUT_Query) */

void zxwsf_e_Body_PUT_Query(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di_Query_s* z)
{
  struct zxwsf_di_Query_s* y;
  if (!x || !z) return;
  y = x->Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Body_ADD_Query) */

void zxwsf_e_Body_ADD_Query(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di_Query_s* z)
{
  struct zxwsf_di_Query_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Query; n > 1 && y; --n, y = (struct zxwsf_di_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Body_DEL_Query) */

void zxwsf_e_Body_DEL_Query(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Query = (struct zxwsf_di_Query_s*)x->Query->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_Query_s*)x->Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Query; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Body_NUM_QueryResponse) */

int zxwsf_e_Body_NUM_QueryResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryResponse; y; ++n, y = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Body_GET_QueryResponse) */

struct zxwsf_di_QueryResponse_s* zxwsf_e_Body_GET_QueryResponse(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->QueryResponse; n>=0 && y; --n, y = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Body_POP_QueryResponse) */

struct zxwsf_di_QueryResponse_s* zxwsf_e_Body_POP_QueryResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di_QueryResponse_s* y;
  if (!x) return 0;
  y = x->QueryResponse;
  if (y)
    x->QueryResponse = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Body_PUSH_QueryResponse) */

void zxwsf_e_Body_PUSH_QueryResponse(struct zxwsf_e_Body_s* x, struct zxwsf_di_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryResponse->gg.g;
  x->QueryResponse = z;
}

/* FUNC(zxwsf_e_Body_REV_QueryResponse) */

void zxwsf_e_Body_REV_QueryResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di_QueryResponse_s* nxt;
  struct zxwsf_di_QueryResponse_s* y;
  if (!x) return;
  y = x->QueryResponse;
  if (!y) return;
  x->QueryResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryResponse->gg.g;
    x->QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Body_PUT_QueryResponse) */

void zxwsf_e_Body_PUT_QueryResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di_QueryResponse_s* z)
{
  struct zxwsf_di_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Body_ADD_QueryResponse) */

void zxwsf_e_Body_ADD_QueryResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di_QueryResponse_s* z)
{
  struct zxwsf_di_QueryResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryResponse; n > 1 && y; --n, y = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Body_DEL_QueryResponse) */

void zxwsf_e_Body_DEL_QueryResponse(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryResponse = (struct zxwsf_di_QueryResponse_s*)x->QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di_QueryResponse_s*)x->QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Body_NUM_di12_Query) */

int zxwsf_e_Body_NUM_di12_Query(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->di12_Query; y; ++n, y = (struct zxwsf_di12_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Body_GET_di12_Query) */

struct zxwsf_di12_Query_s* zxwsf_e_Body_GET_di12_Query(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di12_Query_s* y;
  if (!x) return 0;
  for (y = x->di12_Query; n>=0 && y; --n, y = (struct zxwsf_di12_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Body_POP_di12_Query) */

struct zxwsf_di12_Query_s* zxwsf_e_Body_POP_di12_Query(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_Query_s* y;
  if (!x) return 0;
  y = x->di12_Query;
  if (y)
    x->di12_Query = (struct zxwsf_di12_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Body_PUSH_di12_Query) */

void zxwsf_e_Body_PUSH_di12_Query(struct zxwsf_e_Body_s* x, struct zxwsf_di12_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->di12_Query->gg.g;
  x->di12_Query = z;
}

/* FUNC(zxwsf_e_Body_REV_di12_Query) */

void zxwsf_e_Body_REV_di12_Query(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_Query_s* nxt;
  struct zxwsf_di12_Query_s* y;
  if (!x) return;
  y = x->di12_Query;
  if (!y) return;
  x->di12_Query = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->di12_Query->gg.g;
    x->di12_Query = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Body_PUT_di12_Query) */

void zxwsf_e_Body_PUT_di12_Query(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_Query_s* z)
{
  struct zxwsf_di12_Query_s* y;
  if (!x || !z) return;
  y = x->di12_Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->di12_Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Body_ADD_di12_Query) */

void zxwsf_e_Body_ADD_di12_Query(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_Query_s* z)
{
  struct zxwsf_di12_Query_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di12_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_Query; n > 1 && y; --n, y = (struct zxwsf_di12_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Body_DEL_di12_Query) */

void zxwsf_e_Body_DEL_di12_Query(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di12_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->di12_Query = (struct zxwsf_di12_Query_s*)x->di12_Query->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Query_s*)x->di12_Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_Query; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Body_NUM_di12_QueryResponse) */

int zxwsf_e_Body_NUM_di12_QueryResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->di12_QueryResponse; y; ++n, y = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Body_GET_di12_QueryResponse) */

struct zxwsf_di12_QueryResponse_s* zxwsf_e_Body_GET_di12_QueryResponse(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di12_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->di12_QueryResponse; n>=0 && y; --n, y = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Body_POP_di12_QueryResponse) */

struct zxwsf_di12_QueryResponse_s* zxwsf_e_Body_POP_di12_QueryResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_QueryResponse_s* y;
  if (!x) return 0;
  y = x->di12_QueryResponse;
  if (y)
    x->di12_QueryResponse = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Body_PUSH_di12_QueryResponse) */

void zxwsf_e_Body_PUSH_di12_QueryResponse(struct zxwsf_e_Body_s* x, struct zxwsf_di12_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->di12_QueryResponse->gg.g;
  x->di12_QueryResponse = z;
}

/* FUNC(zxwsf_e_Body_REV_di12_QueryResponse) */

void zxwsf_e_Body_REV_di12_QueryResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_QueryResponse_s* nxt;
  struct zxwsf_di12_QueryResponse_s* y;
  if (!x) return;
  y = x->di12_QueryResponse;
  if (!y) return;
  x->di12_QueryResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->di12_QueryResponse->gg.g;
    x->di12_QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Body_PUT_di12_QueryResponse) */

void zxwsf_e_Body_PUT_di12_QueryResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_QueryResponse_s* z)
{
  struct zxwsf_di12_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->di12_QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->di12_QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Body_ADD_di12_QueryResponse) */

void zxwsf_e_Body_ADD_di12_QueryResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_QueryResponse_s* z)
{
  struct zxwsf_di12_QueryResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_QueryResponse; n > 1 && y; --n, y = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Body_DEL_di12_QueryResponse) */

void zxwsf_e_Body_DEL_di12_QueryResponse(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di12_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->di12_QueryResponse = (struct zxwsf_di12_QueryResponse_s*)x->di12_QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_QueryResponse_s*)x->di12_QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Body_NUM_Modify) */

int zxwsf_e_Body_NUM_Modify(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_Modify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Modify; y; ++n, y = (struct zxwsf_di12_Modify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Body_GET_Modify) */

struct zxwsf_di12_Modify_s* zxwsf_e_Body_GET_Modify(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di12_Modify_s* y;
  if (!x) return 0;
  for (y = x->Modify; n>=0 && y; --n, y = (struct zxwsf_di12_Modify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Body_POP_Modify) */

struct zxwsf_di12_Modify_s* zxwsf_e_Body_POP_Modify(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_Modify_s* y;
  if (!x) return 0;
  y = x->Modify;
  if (y)
    x->Modify = (struct zxwsf_di12_Modify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Body_PUSH_Modify) */

void zxwsf_e_Body_PUSH_Modify(struct zxwsf_e_Body_s* x, struct zxwsf_di12_Modify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Modify->gg.g;
  x->Modify = z;
}

/* FUNC(zxwsf_e_Body_REV_Modify) */

void zxwsf_e_Body_REV_Modify(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_Modify_s* nxt;
  struct zxwsf_di12_Modify_s* y;
  if (!x) return;
  y = x->Modify;
  if (!y) return;
  x->Modify = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Modify_s*)y->gg.g.n;
    y->gg.g.n = &x->Modify->gg.g;
    x->Modify = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Body_PUT_Modify) */

void zxwsf_e_Body_PUT_Modify(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_Modify_s* z)
{
  struct zxwsf_di12_Modify_s* y;
  if (!x || !z) return;
  y = x->Modify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Modify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Body_ADD_Modify) */

void zxwsf_e_Body_ADD_Modify(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_Modify_s* z)
{
  struct zxwsf_di12_Modify_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di12_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modify; n > 1 && y; --n, y = (struct zxwsf_di12_Modify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Body_DEL_Modify) */

void zxwsf_e_Body_DEL_Modify(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di12_Modify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Modify = (struct zxwsf_di12_Modify_s*)x->Modify->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Modify_s*)x->Modify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modify; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Body_NUM_ModifyResponse) */

int zxwsf_e_Body_NUM_ModifyResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_ModifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ModifyResponse; y; ++n, y = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Body_GET_ModifyResponse) */

struct zxwsf_di12_ModifyResponse_s* zxwsf_e_Body_GET_ModifyResponse(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di12_ModifyResponse_s* y;
  if (!x) return 0;
  for (y = x->ModifyResponse; n>=0 && y; --n, y = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Body_POP_ModifyResponse) */

struct zxwsf_di12_ModifyResponse_s* zxwsf_e_Body_POP_ModifyResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_ModifyResponse_s* y;
  if (!x) return 0;
  y = x->ModifyResponse;
  if (y)
    x->ModifyResponse = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Body_PUSH_ModifyResponse) */

void zxwsf_e_Body_PUSH_ModifyResponse(struct zxwsf_e_Body_s* x, struct zxwsf_di12_ModifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ModifyResponse->gg.g;
  x->ModifyResponse = z;
}

/* FUNC(zxwsf_e_Body_REV_ModifyResponse) */

void zxwsf_e_Body_REV_ModifyResponse(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_di12_ModifyResponse_s* nxt;
  struct zxwsf_di12_ModifyResponse_s* y;
  if (!x) return;
  y = x->ModifyResponse;
  if (!y) return;
  x->ModifyResponse = 0;
  while (y) {
    nxt = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ModifyResponse->gg.g;
    x->ModifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Body_PUT_ModifyResponse) */

void zxwsf_e_Body_PUT_ModifyResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_ModifyResponse_s* z)
{
  struct zxwsf_di12_ModifyResponse_s* y;
  if (!x || !z) return;
  y = x->ModifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ModifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Body_ADD_ModifyResponse) */

void zxwsf_e_Body_ADD_ModifyResponse(struct zxwsf_e_Body_s* x, int n, struct zxwsf_di12_ModifyResponse_s* z)
{
  struct zxwsf_di12_ModifyResponse_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ModifyResponse; n > 1 && y; --n, y = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Body_DEL_ModifyResponse) */

void zxwsf_e_Body_DEL_ModifyResponse(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_di12_ModifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ModifyResponse = (struct zxwsf_di12_ModifyResponse_s*)x->ModifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_ModifyResponse_s*)x->ModifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ModifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Body_NUM_Fault) */

int zxwsf_e_Body_NUM_Fault(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_e_Fault_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Fault; y; ++n, y = (struct zxwsf_e_Fault_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Body_GET_Fault) */

struct zxwsf_e_Fault_s* zxwsf_e_Body_GET_Fault(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_e_Fault_s* y;
  if (!x) return 0;
  for (y = x->Fault; n>=0 && y; --n, y = (struct zxwsf_e_Fault_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Body_POP_Fault) */

struct zxwsf_e_Fault_s* zxwsf_e_Body_POP_Fault(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_e_Fault_s* y;
  if (!x) return 0;
  y = x->Fault;
  if (y)
    x->Fault = (struct zxwsf_e_Fault_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Body_PUSH_Fault) */

void zxwsf_e_Body_PUSH_Fault(struct zxwsf_e_Body_s* x, struct zxwsf_e_Fault_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Fault->gg.g;
  x->Fault = z;
}

/* FUNC(zxwsf_e_Body_REV_Fault) */

void zxwsf_e_Body_REV_Fault(struct zxwsf_e_Body_s* x)
{
  struct zxwsf_e_Fault_s* nxt;
  struct zxwsf_e_Fault_s* y;
  if (!x) return;
  y = x->Fault;
  if (!y) return;
  x->Fault = 0;
  while (y) {
    nxt = (struct zxwsf_e_Fault_s*)y->gg.g.n;
    y->gg.g.n = &x->Fault->gg.g;
    x->Fault = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Body_PUT_Fault) */

void zxwsf_e_Body_PUT_Fault(struct zxwsf_e_Body_s* x, int n, struct zxwsf_e_Fault_s* z)
{
  struct zxwsf_e_Fault_s* y;
  if (!x || !z) return;
  y = x->Fault;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Fault = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Body_ADD_Fault) */

void zxwsf_e_Body_ADD_Fault(struct zxwsf_e_Body_s* x, int n, struct zxwsf_e_Fault_s* z)
{
  struct zxwsf_e_Fault_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_e_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y; --n, y = (struct zxwsf_e_Fault_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Body_DEL_Fault) */

void zxwsf_e_Body_DEL_Fault(struct zxwsf_e_Body_s* x, int n)
{
  struct zxwsf_e_Fault_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Fault = (struct zxwsf_e_Fault_s*)x->Fault->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_e_Fault_s*)x->Fault;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_e_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_e_Envelope_NUM_Header) */

int zxwsf_e_Envelope_NUM_Header(struct zxwsf_e_Envelope_s* x)
{
  struct zxwsf_e_Header_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Header; y; ++n, y = (struct zxwsf_e_Header_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Envelope_GET_Header) */

struct zxwsf_e_Header_s* zxwsf_e_Envelope_GET_Header(struct zxwsf_e_Envelope_s* x, int n)
{
  struct zxwsf_e_Header_s* y;
  if (!x) return 0;
  for (y = x->Header; n>=0 && y; --n, y = (struct zxwsf_e_Header_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Envelope_POP_Header) */

struct zxwsf_e_Header_s* zxwsf_e_Envelope_POP_Header(struct zxwsf_e_Envelope_s* x)
{
  struct zxwsf_e_Header_s* y;
  if (!x) return 0;
  y = x->Header;
  if (y)
    x->Header = (struct zxwsf_e_Header_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Envelope_PUSH_Header) */

void zxwsf_e_Envelope_PUSH_Header(struct zxwsf_e_Envelope_s* x, struct zxwsf_e_Header_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Header->gg.g;
  x->Header = z;
}

/* FUNC(zxwsf_e_Envelope_REV_Header) */

void zxwsf_e_Envelope_REV_Header(struct zxwsf_e_Envelope_s* x)
{
  struct zxwsf_e_Header_s* nxt;
  struct zxwsf_e_Header_s* y;
  if (!x) return;
  y = x->Header;
  if (!y) return;
  x->Header = 0;
  while (y) {
    nxt = (struct zxwsf_e_Header_s*)y->gg.g.n;
    y->gg.g.n = &x->Header->gg.g;
    x->Header = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Envelope_PUT_Header) */

void zxwsf_e_Envelope_PUT_Header(struct zxwsf_e_Envelope_s* x, int n, struct zxwsf_e_Header_s* z)
{
  struct zxwsf_e_Header_s* y;
  if (!x || !z) return;
  y = x->Header;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Header = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Envelope_ADD_Header) */

void zxwsf_e_Envelope_ADD_Header(struct zxwsf_e_Envelope_s* x, int n, struct zxwsf_e_Header_s* z)
{
  struct zxwsf_e_Header_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_e_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y; --n, y = (struct zxwsf_e_Header_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Envelope_DEL_Header) */

void zxwsf_e_Envelope_DEL_Header(struct zxwsf_e_Envelope_s* x, int n)
{
  struct zxwsf_e_Header_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Header = (struct zxwsf_e_Header_s*)x->Header->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_e_Header_s*)x->Header;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_e_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Envelope_NUM_Body) */

int zxwsf_e_Envelope_NUM_Body(struct zxwsf_e_Envelope_s* x)
{
  struct zxwsf_e_Body_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Body; y; ++n, y = (struct zxwsf_e_Body_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Envelope_GET_Body) */

struct zxwsf_e_Body_s* zxwsf_e_Envelope_GET_Body(struct zxwsf_e_Envelope_s* x, int n)
{
  struct zxwsf_e_Body_s* y;
  if (!x) return 0;
  for (y = x->Body; n>=0 && y; --n, y = (struct zxwsf_e_Body_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Envelope_POP_Body) */

struct zxwsf_e_Body_s* zxwsf_e_Envelope_POP_Body(struct zxwsf_e_Envelope_s* x)
{
  struct zxwsf_e_Body_s* y;
  if (!x) return 0;
  y = x->Body;
  if (y)
    x->Body = (struct zxwsf_e_Body_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Envelope_PUSH_Body) */

void zxwsf_e_Envelope_PUSH_Body(struct zxwsf_e_Envelope_s* x, struct zxwsf_e_Body_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Body->gg.g;
  x->Body = z;
}

/* FUNC(zxwsf_e_Envelope_REV_Body) */

void zxwsf_e_Envelope_REV_Body(struct zxwsf_e_Envelope_s* x)
{
  struct zxwsf_e_Body_s* nxt;
  struct zxwsf_e_Body_s* y;
  if (!x) return;
  y = x->Body;
  if (!y) return;
  x->Body = 0;
  while (y) {
    nxt = (struct zxwsf_e_Body_s*)y->gg.g.n;
    y->gg.g.n = &x->Body->gg.g;
    x->Body = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Envelope_PUT_Body) */

void zxwsf_e_Envelope_PUT_Body(struct zxwsf_e_Envelope_s* x, int n, struct zxwsf_e_Body_s* z)
{
  struct zxwsf_e_Body_s* y;
  if (!x || !z) return;
  y = x->Body;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Body = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Envelope_ADD_Body) */

void zxwsf_e_Envelope_ADD_Body(struct zxwsf_e_Envelope_s* x, int n, struct zxwsf_e_Body_s* z)
{
  struct zxwsf_e_Body_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_e_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y; --n, y = (struct zxwsf_e_Body_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Envelope_DEL_Body) */

void zxwsf_e_Envelope_DEL_Body(struct zxwsf_e_Envelope_s* x, int n)
{
  struct zxwsf_e_Body_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Body = (struct zxwsf_e_Body_s*)x->Body->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_e_Body_s*)x->Body;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_e_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_e_Fault_NUM_faultcode) */

int zxwsf_e_Fault_NUM_faultcode(struct zxwsf_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultcode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Fault_GET_faultcode) */

struct zx_elem_s* zxwsf_e_Fault_GET_faultcode(struct zxwsf_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultcode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Fault_POP_faultcode) */

struct zx_elem_s* zxwsf_e_Fault_POP_faultcode(struct zxwsf_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultcode;
  if (y)
    x->faultcode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_e_Fault_PUSH_faultcode) */

void zxwsf_e_Fault_PUSH_faultcode(struct zxwsf_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultcode->g;
  x->faultcode = z;
}

/* FUNC(zxwsf_e_Fault_REV_faultcode) */

void zxwsf_e_Fault_REV_faultcode(struct zxwsf_e_Fault_s* x)
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

/* FUNC(zxwsf_e_Fault_PUT_faultcode) */

void zxwsf_e_Fault_PUT_faultcode(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_e_Fault_ADD_faultcode) */

void zxwsf_e_Fault_ADD_faultcode(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_e_Fault_DEL_faultcode) */

void zxwsf_e_Fault_DEL_faultcode(struct zxwsf_e_Fault_s* x, int n)
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



/* FUNC(zxwsf_e_Fault_NUM_faultstring) */

int zxwsf_e_Fault_NUM_faultstring(struct zxwsf_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultstring; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Fault_GET_faultstring) */

struct zx_elem_s* zxwsf_e_Fault_GET_faultstring(struct zxwsf_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultstring; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Fault_POP_faultstring) */

struct zx_elem_s* zxwsf_e_Fault_POP_faultstring(struct zxwsf_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultstring;
  if (y)
    x->faultstring = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_e_Fault_PUSH_faultstring) */

void zxwsf_e_Fault_PUSH_faultstring(struct zxwsf_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultstring->g;
  x->faultstring = z;
}

/* FUNC(zxwsf_e_Fault_REV_faultstring) */

void zxwsf_e_Fault_REV_faultstring(struct zxwsf_e_Fault_s* x)
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

/* FUNC(zxwsf_e_Fault_PUT_faultstring) */

void zxwsf_e_Fault_PUT_faultstring(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_e_Fault_ADD_faultstring) */

void zxwsf_e_Fault_ADD_faultstring(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_e_Fault_DEL_faultstring) */

void zxwsf_e_Fault_DEL_faultstring(struct zxwsf_e_Fault_s* x, int n)
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



/* FUNC(zxwsf_e_Fault_NUM_faultactor) */

int zxwsf_e_Fault_NUM_faultactor(struct zxwsf_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultactor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Fault_GET_faultactor) */

struct zx_elem_s* zxwsf_e_Fault_GET_faultactor(struct zxwsf_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultactor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Fault_POP_faultactor) */

struct zx_elem_s* zxwsf_e_Fault_POP_faultactor(struct zxwsf_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultactor;
  if (y)
    x->faultactor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_e_Fault_PUSH_faultactor) */

void zxwsf_e_Fault_PUSH_faultactor(struct zxwsf_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultactor->g;
  x->faultactor = z;
}

/* FUNC(zxwsf_e_Fault_REV_faultactor) */

void zxwsf_e_Fault_REV_faultactor(struct zxwsf_e_Fault_s* x)
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

/* FUNC(zxwsf_e_Fault_PUT_faultactor) */

void zxwsf_e_Fault_PUT_faultactor(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_e_Fault_ADD_faultactor) */

void zxwsf_e_Fault_ADD_faultactor(struct zxwsf_e_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_e_Fault_DEL_faultactor) */

void zxwsf_e_Fault_DEL_faultactor(struct zxwsf_e_Fault_s* x, int n)
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



/* FUNC(zxwsf_e_Fault_NUM_detail) */

int zxwsf_e_Fault_NUM_detail(struct zxwsf_e_Fault_s* x)
{
  struct zxwsf_e_detail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->detail; y; ++n, y = (struct zxwsf_e_detail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Fault_GET_detail) */

struct zxwsf_e_detail_s* zxwsf_e_Fault_GET_detail(struct zxwsf_e_Fault_s* x, int n)
{
  struct zxwsf_e_detail_s* y;
  if (!x) return 0;
  for (y = x->detail; n>=0 && y; --n, y = (struct zxwsf_e_detail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Fault_POP_detail) */

struct zxwsf_e_detail_s* zxwsf_e_Fault_POP_detail(struct zxwsf_e_Fault_s* x)
{
  struct zxwsf_e_detail_s* y;
  if (!x) return 0;
  y = x->detail;
  if (y)
    x->detail = (struct zxwsf_e_detail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Fault_PUSH_detail) */

void zxwsf_e_Fault_PUSH_detail(struct zxwsf_e_Fault_s* x, struct zxwsf_e_detail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->detail->gg.g;
  x->detail = z;
}

/* FUNC(zxwsf_e_Fault_REV_detail) */

void zxwsf_e_Fault_REV_detail(struct zxwsf_e_Fault_s* x)
{
  struct zxwsf_e_detail_s* nxt;
  struct zxwsf_e_detail_s* y;
  if (!x) return;
  y = x->detail;
  if (!y) return;
  x->detail = 0;
  while (y) {
    nxt = (struct zxwsf_e_detail_s*)y->gg.g.n;
    y->gg.g.n = &x->detail->gg.g;
    x->detail = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Fault_PUT_detail) */

void zxwsf_e_Fault_PUT_detail(struct zxwsf_e_Fault_s* x, int n, struct zxwsf_e_detail_s* z)
{
  struct zxwsf_e_detail_s* y;
  if (!x || !z) return;
  y = x->detail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->detail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Fault_ADD_detail) */

void zxwsf_e_Fault_ADD_detail(struct zxwsf_e_Fault_s* x, int n, struct zxwsf_e_detail_s* z)
{
  struct zxwsf_e_detail_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_e_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y; --n, y = (struct zxwsf_e_detail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Fault_DEL_detail) */

void zxwsf_e_Fault_DEL_detail(struct zxwsf_e_Fault_s* x, int n)
{
  struct zxwsf_e_detail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->detail = (struct zxwsf_e_detail_s*)x->detail->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_e_detail_s*)x->detail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_e_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_e_Header_NUM_MessageID) */

int zxwsf_e_Header_NUM_MessageID(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_MessageID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_MessageID) */

struct zxwsf_a_MessageID_s* zxwsf_e_Header_GET_MessageID(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_MessageID_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_MessageID) */

struct zxwsf_a_MessageID_s* zxwsf_e_Header_POP_MessageID(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_MessageID_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zxwsf_a_MessageID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_MessageID) */

void zxwsf_e_Header_PUSH_MessageID(struct zxwsf_e_Header_s* x, struct zxwsf_a_MessageID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageID->gg.g;
  x->MessageID = z;
}

/* FUNC(zxwsf_e_Header_REV_MessageID) */

void zxwsf_e_Header_REV_MessageID(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_MessageID_s* nxt;
  struct zxwsf_a_MessageID_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zxwsf_a_MessageID_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageID->gg.g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_MessageID) */

void zxwsf_e_Header_PUT_MessageID(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_MessageID_s* z)
{
  struct zxwsf_a_MessageID_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_MessageID) */

void zxwsf_e_Header_ADD_MessageID(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_MessageID_s* z)
{
  struct zxwsf_a_MessageID_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_MessageID) */

void zxwsf_e_Header_DEL_MessageID(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_MessageID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zxwsf_a_MessageID_s*)x->MessageID->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_MessageID_s*)x->MessageID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_MessageID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_RelatesTo) */

int zxwsf_e_Header_NUM_RelatesTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_RelatesTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RelatesTo; y; ++n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_RelatesTo) */

struct zxwsf_a_RelatesTo_s* zxwsf_e_Header_GET_RelatesTo(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_RelatesTo_s* y;
  if (!x) return 0;
  for (y = x->RelatesTo; n>=0 && y; --n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_RelatesTo) */

struct zxwsf_a_RelatesTo_s* zxwsf_e_Header_POP_RelatesTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_RelatesTo_s* y;
  if (!x) return 0;
  y = x->RelatesTo;
  if (y)
    x->RelatesTo = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_RelatesTo) */

void zxwsf_e_Header_PUSH_RelatesTo(struct zxwsf_e_Header_s* x, struct zxwsf_a_RelatesTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RelatesTo->gg.g;
  x->RelatesTo = z;
}

/* FUNC(zxwsf_e_Header_REV_RelatesTo) */

void zxwsf_e_Header_REV_RelatesTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_RelatesTo_s* nxt;
  struct zxwsf_a_RelatesTo_s* y;
  if (!x) return;
  y = x->RelatesTo;
  if (!y) return;
  x->RelatesTo = 0;
  while (y) {
    nxt = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n;
    y->gg.g.n = &x->RelatesTo->gg.g;
    x->RelatesTo = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_RelatesTo) */

void zxwsf_e_Header_PUT_RelatesTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_RelatesTo_s* z)
{
  struct zxwsf_a_RelatesTo_s* y;
  if (!x || !z) return;
  y = x->RelatesTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RelatesTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_RelatesTo) */

void zxwsf_e_Header_ADD_RelatesTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_RelatesTo_s* z)
{
  struct zxwsf_a_RelatesTo_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelatesTo; n > 1 && y; --n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_RelatesTo) */

void zxwsf_e_Header_DEL_RelatesTo(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_RelatesTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RelatesTo = (struct zxwsf_a_RelatesTo_s*)x->RelatesTo->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_RelatesTo_s*)x->RelatesTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelatesTo; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_ReplyTo) */

int zxwsf_e_Header_NUM_ReplyTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_ReplyTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyTo; y; ++n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_ReplyTo) */

struct zxwsf_a_ReplyTo_s* zxwsf_e_Header_GET_ReplyTo(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_ReplyTo_s* y;
  if (!x) return 0;
  for (y = x->ReplyTo; n>=0 && y; --n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_ReplyTo) */

struct zxwsf_a_ReplyTo_s* zxwsf_e_Header_POP_ReplyTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_ReplyTo_s* y;
  if (!x) return 0;
  y = x->ReplyTo;
  if (y)
    x->ReplyTo = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_ReplyTo) */

void zxwsf_e_Header_PUSH_ReplyTo(struct zxwsf_e_Header_s* x, struct zxwsf_a_ReplyTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReplyTo->gg.g;
  x->ReplyTo = z;
}

/* FUNC(zxwsf_e_Header_REV_ReplyTo) */

void zxwsf_e_Header_REV_ReplyTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_ReplyTo_s* nxt;
  struct zxwsf_a_ReplyTo_s* y;
  if (!x) return;
  y = x->ReplyTo;
  if (!y) return;
  x->ReplyTo = 0;
  while (y) {
    nxt = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n;
    y->gg.g.n = &x->ReplyTo->gg.g;
    x->ReplyTo = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_ReplyTo) */

void zxwsf_e_Header_PUT_ReplyTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_ReplyTo_s* z)
{
  struct zxwsf_a_ReplyTo_s* y;
  if (!x || !z) return;
  y = x->ReplyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReplyTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_ReplyTo) */

void zxwsf_e_Header_ADD_ReplyTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_ReplyTo_s* z)
{
  struct zxwsf_a_ReplyTo_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyTo; n > 1 && y; --n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_ReplyTo) */

void zxwsf_e_Header_DEL_ReplyTo(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_ReplyTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyTo = (struct zxwsf_a_ReplyTo_s*)x->ReplyTo->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_ReplyTo_s*)x->ReplyTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyTo; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_From) */

int zxwsf_e_Header_NUM_From(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_From_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->From; y; ++n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_From) */

struct zxwsf_a_From_s* zxwsf_e_Header_GET_From(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_From_s* y;
  if (!x) return 0;
  for (y = x->From; n>=0 && y; --n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_From) */

struct zxwsf_a_From_s* zxwsf_e_Header_POP_From(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_From_s* y;
  if (!x) return 0;
  y = x->From;
  if (y)
    x->From = (struct zxwsf_a_From_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_From) */

void zxwsf_e_Header_PUSH_From(struct zxwsf_e_Header_s* x, struct zxwsf_a_From_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->From->gg.g;
  x->From = z;
}

/* FUNC(zxwsf_e_Header_REV_From) */

void zxwsf_e_Header_REV_From(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_From_s* nxt;
  struct zxwsf_a_From_s* y;
  if (!x) return;
  y = x->From;
  if (!y) return;
  x->From = 0;
  while (y) {
    nxt = (struct zxwsf_a_From_s*)y->gg.g.n;
    y->gg.g.n = &x->From->gg.g;
    x->From = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_From) */

void zxwsf_e_Header_PUT_From(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_From_s* z)
{
  struct zxwsf_a_From_s* y;
  if (!x || !z) return;
  y = x->From;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->From = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_From) */

void zxwsf_e_Header_ADD_From(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_From_s* z)
{
  struct zxwsf_a_From_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->From; n > 1 && y; --n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_From) */

void zxwsf_e_Header_DEL_From(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_From_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->From = (struct zxwsf_a_From_s*)x->From->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_From_s*)x->From;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->From; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_From_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_FaultTo) */

int zxwsf_e_Header_NUM_FaultTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_FaultTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FaultTo; y; ++n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_FaultTo) */

struct zxwsf_a_FaultTo_s* zxwsf_e_Header_GET_FaultTo(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_FaultTo_s* y;
  if (!x) return 0;
  for (y = x->FaultTo; n>=0 && y; --n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_FaultTo) */

struct zxwsf_a_FaultTo_s* zxwsf_e_Header_POP_FaultTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_FaultTo_s* y;
  if (!x) return 0;
  y = x->FaultTo;
  if (y)
    x->FaultTo = (struct zxwsf_a_FaultTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_FaultTo) */

void zxwsf_e_Header_PUSH_FaultTo(struct zxwsf_e_Header_s* x, struct zxwsf_a_FaultTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FaultTo->gg.g;
  x->FaultTo = z;
}

/* FUNC(zxwsf_e_Header_REV_FaultTo) */

void zxwsf_e_Header_REV_FaultTo(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_FaultTo_s* nxt;
  struct zxwsf_a_FaultTo_s* y;
  if (!x) return;
  y = x->FaultTo;
  if (!y) return;
  x->FaultTo = 0;
  while (y) {
    nxt = (struct zxwsf_a_FaultTo_s*)y->gg.g.n;
    y->gg.g.n = &x->FaultTo->gg.g;
    x->FaultTo = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_FaultTo) */

void zxwsf_e_Header_PUT_FaultTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_FaultTo_s* z)
{
  struct zxwsf_a_FaultTo_s* y;
  if (!x || !z) return;
  y = x->FaultTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FaultTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_FaultTo) */

void zxwsf_e_Header_ADD_FaultTo(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_FaultTo_s* z)
{
  struct zxwsf_a_FaultTo_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FaultTo; n > 1 && y; --n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_FaultTo) */

void zxwsf_e_Header_DEL_FaultTo(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_FaultTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FaultTo = (struct zxwsf_a_FaultTo_s*)x->FaultTo->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_FaultTo_s*)x->FaultTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FaultTo; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_FaultTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_To) */

int zxwsf_e_Header_NUM_To(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_To_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->To; y; ++n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_To) */

struct zxwsf_a_To_s* zxwsf_e_Header_GET_To(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_To_s* y;
  if (!x) return 0;
  for (y = x->To; n>=0 && y; --n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_To) */

struct zxwsf_a_To_s* zxwsf_e_Header_POP_To(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_To_s* y;
  if (!x) return 0;
  y = x->To;
  if (y)
    x->To = (struct zxwsf_a_To_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_To) */

void zxwsf_e_Header_PUSH_To(struct zxwsf_e_Header_s* x, struct zxwsf_a_To_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->To->gg.g;
  x->To = z;
}

/* FUNC(zxwsf_e_Header_REV_To) */

void zxwsf_e_Header_REV_To(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_To_s* nxt;
  struct zxwsf_a_To_s* y;
  if (!x) return;
  y = x->To;
  if (!y) return;
  x->To = 0;
  while (y) {
    nxt = (struct zxwsf_a_To_s*)y->gg.g.n;
    y->gg.g.n = &x->To->gg.g;
    x->To = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_To) */

void zxwsf_e_Header_PUT_To(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_To_s* z)
{
  struct zxwsf_a_To_s* y;
  if (!x || !z) return;
  y = x->To;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->To = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_To) */

void zxwsf_e_Header_ADD_To(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_To_s* z)
{
  struct zxwsf_a_To_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y; --n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_To) */

void zxwsf_e_Header_DEL_To(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_To_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->To = (struct zxwsf_a_To_s*)x->To->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_To_s*)x->To;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_Action) */

int zxwsf_e_Header_NUM_Action(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_Action) */

struct zxwsf_a_Action_s* zxwsf_e_Header_GET_Action(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_Action) */

struct zxwsf_a_Action_s* zxwsf_e_Header_POP_Action(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zxwsf_a_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_Action) */

void zxwsf_e_Header_PUSH_Action(struct zxwsf_e_Header_s* x, struct zxwsf_a_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zxwsf_e_Header_REV_Action) */

void zxwsf_e_Header_REV_Action(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_a_Action_s* nxt;
  struct zxwsf_a_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zxwsf_a_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_Action) */

void zxwsf_e_Header_PUT_Action(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_Action_s* z)
{
  struct zxwsf_a_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_Action) */

void zxwsf_e_Header_ADD_Action(struct zxwsf_e_Header_s* x, int n, struct zxwsf_a_Action_s* z)
{
  struct zxwsf_a_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_Action) */

void zxwsf_e_Header_DEL_Action(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_a_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zxwsf_a_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_a_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_Framework) */

int zxwsf_e_Header_NUM_Framework(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_sbf_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_Framework) */

struct zxwsf_sbf_Framework_s* zxwsf_e_Header_GET_Framework(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_Framework) */

struct zxwsf_sbf_Framework_s* zxwsf_e_Header_POP_Framework(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zxwsf_sbf_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_Framework) */

void zxwsf_e_Header_PUSH_Framework(struct zxwsf_e_Header_s* x, struct zxwsf_sbf_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zxwsf_e_Header_REV_Framework) */

void zxwsf_e_Header_REV_Framework(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_sbf_Framework_s* nxt;
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return;
  y = x->Framework;
  if (!y) return;
  x->Framework = 0;
  while (y) {
    nxt = (struct zxwsf_sbf_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->Framework->gg.g;
    x->Framework = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_Framework) */

void zxwsf_e_Header_PUT_Framework(struct zxwsf_e_Header_s* x, int n, struct zxwsf_sbf_Framework_s* z)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x || !z) return;
  y = x->Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_Framework) */

void zxwsf_e_Header_ADD_Framework(struct zxwsf_e_Header_s* x, int n, struct zxwsf_sbf_Framework_s* z)
{
  struct zxwsf_sbf_Framework_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_Framework) */

void zxwsf_e_Header_DEL_Framework(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_sbf_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Framework = (struct zxwsf_sbf_Framework_s*)x->Framework->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_sbf_Framework_s*)x->Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_b_Framework) */

int zxwsf_e_Header_NUM_b_Framework(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b_Framework; y; ++n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_b_Framework) */

struct zxwsf_b_Framework_s* zxwsf_e_Header_GET_b_Framework(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_Framework_s* y;
  if (!x) return 0;
  for (y = x->b_Framework; n>=0 && y; --n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_b_Framework) */

struct zxwsf_b_Framework_s* zxwsf_e_Header_POP_b_Framework(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Framework_s* y;
  if (!x) return 0;
  y = x->b_Framework;
  if (y)
    x->b_Framework = (struct zxwsf_b_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_b_Framework) */

void zxwsf_e_Header_PUSH_b_Framework(struct zxwsf_e_Header_s* x, struct zxwsf_b_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b_Framework->gg.g;
  x->b_Framework = z;
}

/* FUNC(zxwsf_e_Header_REV_b_Framework) */

void zxwsf_e_Header_REV_b_Framework(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Framework_s* nxt;
  struct zxwsf_b_Framework_s* y;
  if (!x) return;
  y = x->b_Framework;
  if (!y) return;
  x->b_Framework = 0;
  while (y) {
    nxt = (struct zxwsf_b_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->b_Framework->gg.g;
    x->b_Framework = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_b_Framework) */

void zxwsf_e_Header_PUT_b_Framework(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Framework_s* z)
{
  struct zxwsf_b_Framework_s* y;
  if (!x || !z) return;
  y = x->b_Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b_Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_b_Framework) */

void zxwsf_e_Header_ADD_b_Framework(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Framework_s* z)
{
  struct zxwsf_b_Framework_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b_Framework; n > 1 && y; --n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_b_Framework) */

void zxwsf_e_Header_DEL_b_Framework(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b_Framework = (struct zxwsf_b_Framework_s*)x->b_Framework->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_Framework_s*)x->b_Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b_Framework; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_Sender) */

int zxwsf_e_Header_NUM_Sender(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Sender_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sender; y; ++n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_Sender) */

struct zxwsf_b_Sender_s* zxwsf_e_Header_GET_Sender(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_Sender_s* y;
  if (!x) return 0;
  for (y = x->Sender; n>=0 && y; --n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_Sender) */

struct zxwsf_b_Sender_s* zxwsf_e_Header_POP_Sender(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Sender_s* y;
  if (!x) return 0;
  y = x->Sender;
  if (y)
    x->Sender = (struct zxwsf_b_Sender_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_Sender) */

void zxwsf_e_Header_PUSH_Sender(struct zxwsf_e_Header_s* x, struct zxwsf_b_Sender_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Sender->gg.g;
  x->Sender = z;
}

/* FUNC(zxwsf_e_Header_REV_Sender) */

void zxwsf_e_Header_REV_Sender(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Sender_s* nxt;
  struct zxwsf_b_Sender_s* y;
  if (!x) return;
  y = x->Sender;
  if (!y) return;
  x->Sender = 0;
  while (y) {
    nxt = (struct zxwsf_b_Sender_s*)y->gg.g.n;
    y->gg.g.n = &x->Sender->gg.g;
    x->Sender = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_Sender) */

void zxwsf_e_Header_PUT_Sender(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Sender_s* z)
{
  struct zxwsf_b_Sender_s* y;
  if (!x || !z) return;
  y = x->Sender;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Sender = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_Sender) */

void zxwsf_e_Header_ADD_Sender(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Sender_s* z)
{
  struct zxwsf_b_Sender_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y; --n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_Sender) */

void zxwsf_e_Header_DEL_Sender(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_Sender_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sender = (struct zxwsf_b_Sender_s*)x->Sender->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_Sender_s*)x->Sender;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_TargetIdentity) */

int zxwsf_e_Header_NUM_TargetIdentity(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_TargetIdentity_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TargetIdentity; y; ++n, y = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_TargetIdentity) */

struct zxwsf_b_TargetIdentity_s* zxwsf_e_Header_GET_TargetIdentity(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_TargetIdentity_s* y;
  if (!x) return 0;
  for (y = x->TargetIdentity; n>=0 && y; --n, y = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_TargetIdentity) */

struct zxwsf_b_TargetIdentity_s* zxwsf_e_Header_POP_TargetIdentity(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_TargetIdentity_s* y;
  if (!x) return 0;
  y = x->TargetIdentity;
  if (y)
    x->TargetIdentity = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_TargetIdentity) */

void zxwsf_e_Header_PUSH_TargetIdentity(struct zxwsf_e_Header_s* x, struct zxwsf_b_TargetIdentity_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TargetIdentity->gg.g;
  x->TargetIdentity = z;
}

/* FUNC(zxwsf_e_Header_REV_TargetIdentity) */

void zxwsf_e_Header_REV_TargetIdentity(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_TargetIdentity_s* nxt;
  struct zxwsf_b_TargetIdentity_s* y;
  if (!x) return;
  y = x->TargetIdentity;
  if (!y) return;
  x->TargetIdentity = 0;
  while (y) {
    nxt = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n;
    y->gg.g.n = &x->TargetIdentity->gg.g;
    x->TargetIdentity = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_TargetIdentity) */

void zxwsf_e_Header_PUT_TargetIdentity(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_TargetIdentity_s* z)
{
  struct zxwsf_b_TargetIdentity_s* y;
  if (!x || !z) return;
  y = x->TargetIdentity;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TargetIdentity = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_TargetIdentity) */

void zxwsf_e_Header_ADD_TargetIdentity(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_TargetIdentity_s* z)
{
  struct zxwsf_b_TargetIdentity_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TargetIdentity; n > 1 && y; --n, y = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_TargetIdentity) */

void zxwsf_e_Header_DEL_TargetIdentity(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_TargetIdentity_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TargetIdentity = (struct zxwsf_b_TargetIdentity_s*)x->TargetIdentity->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_TargetIdentity_s*)x->TargetIdentity;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TargetIdentity; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_CredentialsContext) */

int zxwsf_e_Header_NUM_CredentialsContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_CredentialsContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CredentialsContext; y; ++n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_CredentialsContext) */

struct zxwsf_b_CredentialsContext_s* zxwsf_e_Header_GET_CredentialsContext(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x) return 0;
  for (y = x->CredentialsContext; n>=0 && y; --n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_CredentialsContext) */

struct zxwsf_b_CredentialsContext_s* zxwsf_e_Header_POP_CredentialsContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x) return 0;
  y = x->CredentialsContext;
  if (y)
    x->CredentialsContext = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_CredentialsContext) */

void zxwsf_e_Header_PUSH_CredentialsContext(struct zxwsf_e_Header_s* x, struct zxwsf_b_CredentialsContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CredentialsContext->gg.g;
  x->CredentialsContext = z;
}

/* FUNC(zxwsf_e_Header_REV_CredentialsContext) */

void zxwsf_e_Header_REV_CredentialsContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_CredentialsContext_s* nxt;
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x) return;
  y = x->CredentialsContext;
  if (!y) return;
  x->CredentialsContext = 0;
  while (y) {
    nxt = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n;
    y->gg.g.n = &x->CredentialsContext->gg.g;
    x->CredentialsContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_CredentialsContext) */

void zxwsf_e_Header_PUT_CredentialsContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_CredentialsContext_s* z)
{
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x || !z) return;
  y = x->CredentialsContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CredentialsContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_CredentialsContext) */

void zxwsf_e_Header_ADD_CredentialsContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_CredentialsContext_s* z)
{
  struct zxwsf_b_CredentialsContext_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CredentialsContext; n > 1 && y; --n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_CredentialsContext) */

void zxwsf_e_Header_DEL_CredentialsContext(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_CredentialsContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CredentialsContext = (struct zxwsf_b_CredentialsContext_s*)x->CredentialsContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_CredentialsContext_s*)x->CredentialsContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CredentialsContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_EndpointUpdate) */

int zxwsf_e_Header_NUM_EndpointUpdate(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointUpdate; y; ++n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_EndpointUpdate) */

struct zxwsf_b_EndpointUpdate_s* zxwsf_e_Header_GET_EndpointUpdate(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x) return 0;
  for (y = x->EndpointUpdate; n>=0 && y; --n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_EndpointUpdate) */

struct zxwsf_b_EndpointUpdate_s* zxwsf_e_Header_POP_EndpointUpdate(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x) return 0;
  y = x->EndpointUpdate;
  if (y)
    x->EndpointUpdate = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_EndpointUpdate) */

void zxwsf_e_Header_PUSH_EndpointUpdate(struct zxwsf_e_Header_s* x, struct zxwsf_b_EndpointUpdate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointUpdate->gg.g;
  x->EndpointUpdate = z;
}

/* FUNC(zxwsf_e_Header_REV_EndpointUpdate) */

void zxwsf_e_Header_REV_EndpointUpdate(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_EndpointUpdate_s* nxt;
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x) return;
  y = x->EndpointUpdate;
  if (!y) return;
  x->EndpointUpdate = 0;
  while (y) {
    nxt = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointUpdate->gg.g;
    x->EndpointUpdate = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_EndpointUpdate) */

void zxwsf_e_Header_PUT_EndpointUpdate(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_EndpointUpdate_s* z)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x || !z) return;
  y = x->EndpointUpdate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointUpdate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_EndpointUpdate) */

void zxwsf_e_Header_ADD_EndpointUpdate(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_EndpointUpdate_s* z)
{
  struct zxwsf_b_EndpointUpdate_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointUpdate; n > 1 && y; --n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_EndpointUpdate) */

void zxwsf_e_Header_DEL_EndpointUpdate(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_EndpointUpdate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointUpdate = (struct zxwsf_b_EndpointUpdate_s*)x->EndpointUpdate->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_EndpointUpdate_s*)x->EndpointUpdate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointUpdate; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_Timeout) */

int zxwsf_e_Header_NUM_Timeout(struct zxwsf_e_Header_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Timeout; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_Timeout) */

struct zx_elem_s* zxwsf_e_Header_GET_Timeout(struct zxwsf_e_Header_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Timeout; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_Timeout) */

struct zx_elem_s* zxwsf_e_Header_POP_Timeout(struct zxwsf_e_Header_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Timeout;
  if (y)
    x->Timeout = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_Timeout) */

void zxwsf_e_Header_PUSH_Timeout(struct zxwsf_e_Header_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Timeout->g;
  x->Timeout = z;
}

/* FUNC(zxwsf_e_Header_REV_Timeout) */

void zxwsf_e_Header_REV_Timeout(struct zxwsf_e_Header_s* x)
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

/* FUNC(zxwsf_e_Header_PUT_Timeout) */

void zxwsf_e_Header_PUT_Timeout(struct zxwsf_e_Header_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_e_Header_ADD_Timeout) */

void zxwsf_e_Header_ADD_Timeout(struct zxwsf_e_Header_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_e_Header_DEL_Timeout) */

void zxwsf_e_Header_DEL_Timeout(struct zxwsf_e_Header_s* x, int n)
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



/* FUNC(zxwsf_e_Header_NUM_ProcessingContext) */

int zxwsf_e_Header_NUM_ProcessingContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_ProcessingContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProcessingContext; y; ++n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_ProcessingContext) */

struct zxwsf_b_ProcessingContext_s* zxwsf_e_Header_GET_ProcessingContext(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x) return 0;
  for (y = x->ProcessingContext; n>=0 && y; --n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_ProcessingContext) */

struct zxwsf_b_ProcessingContext_s* zxwsf_e_Header_POP_ProcessingContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x) return 0;
  y = x->ProcessingContext;
  if (y)
    x->ProcessingContext = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_ProcessingContext) */

void zxwsf_e_Header_PUSH_ProcessingContext(struct zxwsf_e_Header_s* x, struct zxwsf_b_ProcessingContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProcessingContext->gg.g;
  x->ProcessingContext = z;
}

/* FUNC(zxwsf_e_Header_REV_ProcessingContext) */

void zxwsf_e_Header_REV_ProcessingContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_ProcessingContext_s* nxt;
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x) return;
  y = x->ProcessingContext;
  if (!y) return;
  x->ProcessingContext = 0;
  while (y) {
    nxt = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n;
    y->gg.g.n = &x->ProcessingContext->gg.g;
    x->ProcessingContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_ProcessingContext) */

void zxwsf_e_Header_PUT_ProcessingContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_ProcessingContext_s* z)
{
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x || !z) return;
  y = x->ProcessingContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProcessingContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_ProcessingContext) */

void zxwsf_e_Header_ADD_ProcessingContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_ProcessingContext_s* z)
{
  struct zxwsf_b_ProcessingContext_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProcessingContext; n > 1 && y; --n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_ProcessingContext) */

void zxwsf_e_Header_DEL_ProcessingContext(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_ProcessingContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProcessingContext = (struct zxwsf_b_ProcessingContext_s*)x->ProcessingContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_ProcessingContext_s*)x->ProcessingContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProcessingContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_Consent) */

int zxwsf_e_Header_NUM_Consent(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Consent_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Consent; y; ++n, y = (struct zxwsf_b_Consent_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_Consent) */

struct zxwsf_b_Consent_s* zxwsf_e_Header_GET_Consent(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_Consent_s* y;
  if (!x) return 0;
  for (y = x->Consent; n>=0 && y; --n, y = (struct zxwsf_b_Consent_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_Consent) */

struct zxwsf_b_Consent_s* zxwsf_e_Header_POP_Consent(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Consent_s* y;
  if (!x) return 0;
  y = x->Consent;
  if (y)
    x->Consent = (struct zxwsf_b_Consent_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_Consent) */

void zxwsf_e_Header_PUSH_Consent(struct zxwsf_e_Header_s* x, struct zxwsf_b_Consent_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Consent->gg.g;
  x->Consent = z;
}

/* FUNC(zxwsf_e_Header_REV_Consent) */

void zxwsf_e_Header_REV_Consent(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_Consent_s* nxt;
  struct zxwsf_b_Consent_s* y;
  if (!x) return;
  y = x->Consent;
  if (!y) return;
  x->Consent = 0;
  while (y) {
    nxt = (struct zxwsf_b_Consent_s*)y->gg.g.n;
    y->gg.g.n = &x->Consent->gg.g;
    x->Consent = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_Consent) */

void zxwsf_e_Header_PUT_Consent(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Consent_s* z)
{
  struct zxwsf_b_Consent_s* y;
  if (!x || !z) return;
  y = x->Consent;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Consent = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_Consent) */

void zxwsf_e_Header_ADD_Consent(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_Consent_s* z)
{
  struct zxwsf_b_Consent_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Consent; n > 1 && y; --n, y = (struct zxwsf_b_Consent_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_Consent) */

void zxwsf_e_Header_DEL_Consent(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_Consent_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Consent = (struct zxwsf_b_Consent_s*)x->Consent->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_Consent_s*)x->Consent;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Consent; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_UsageDirective) */

int zxwsf_e_Header_NUM_UsageDirective(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_UsageDirective_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UsageDirective; y; ++n, y = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_UsageDirective) */

struct zxwsf_b_UsageDirective_s* zxwsf_e_Header_GET_UsageDirective(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_UsageDirective_s* y;
  if (!x) return 0;
  for (y = x->UsageDirective; n>=0 && y; --n, y = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_UsageDirective) */

struct zxwsf_b_UsageDirective_s* zxwsf_e_Header_POP_UsageDirective(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_UsageDirective_s* y;
  if (!x) return 0;
  y = x->UsageDirective;
  if (y)
    x->UsageDirective = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_UsageDirective) */

void zxwsf_e_Header_PUSH_UsageDirective(struct zxwsf_e_Header_s* x, struct zxwsf_b_UsageDirective_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UsageDirective->gg.g;
  x->UsageDirective = z;
}

/* FUNC(zxwsf_e_Header_REV_UsageDirective) */

void zxwsf_e_Header_REV_UsageDirective(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_UsageDirective_s* nxt;
  struct zxwsf_b_UsageDirective_s* y;
  if (!x) return;
  y = x->UsageDirective;
  if (!y) return;
  x->UsageDirective = 0;
  while (y) {
    nxt = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n;
    y->gg.g.n = &x->UsageDirective->gg.g;
    x->UsageDirective = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_UsageDirective) */

void zxwsf_e_Header_PUT_UsageDirective(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_UsageDirective_s* z)
{
  struct zxwsf_b_UsageDirective_s* y;
  if (!x || !z) return;
  y = x->UsageDirective;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UsageDirective = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_UsageDirective) */

void zxwsf_e_Header_ADD_UsageDirective(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_UsageDirective_s* z)
{
  struct zxwsf_b_UsageDirective_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UsageDirective; n > 1 && y; --n, y = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_UsageDirective) */

void zxwsf_e_Header_DEL_UsageDirective(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_UsageDirective_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UsageDirective = (struct zxwsf_b_UsageDirective_s*)x->UsageDirective->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_UsageDirective_s*)x->UsageDirective;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UsageDirective; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_ApplicationEPR) */

int zxwsf_e_Header_NUM_ApplicationEPR(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicationEPR; y; ++n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_ApplicationEPR) */

struct zxwsf_b_ApplicationEPR_s* zxwsf_e_Header_GET_ApplicationEPR(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x) return 0;
  for (y = x->ApplicationEPR; n>=0 && y; --n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_ApplicationEPR) */

struct zxwsf_b_ApplicationEPR_s* zxwsf_e_Header_POP_ApplicationEPR(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x) return 0;
  y = x->ApplicationEPR;
  if (y)
    x->ApplicationEPR = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_ApplicationEPR) */

void zxwsf_e_Header_PUSH_ApplicationEPR(struct zxwsf_e_Header_s* x, struct zxwsf_b_ApplicationEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ApplicationEPR->gg.g;
  x->ApplicationEPR = z;
}

/* FUNC(zxwsf_e_Header_REV_ApplicationEPR) */

void zxwsf_e_Header_REV_ApplicationEPR(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_ApplicationEPR_s* nxt;
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x) return;
  y = x->ApplicationEPR;
  if (!y) return;
  x->ApplicationEPR = 0;
  while (y) {
    nxt = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n;
    y->gg.g.n = &x->ApplicationEPR->gg.g;
    x->ApplicationEPR = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_ApplicationEPR) */

void zxwsf_e_Header_PUT_ApplicationEPR(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_ApplicationEPR_s* z)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x || !z) return;
  y = x->ApplicationEPR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ApplicationEPR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_ApplicationEPR) */

void zxwsf_e_Header_ADD_ApplicationEPR(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_ApplicationEPR_s* z)
{
  struct zxwsf_b_ApplicationEPR_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ApplicationEPR; n > 1 && y; --n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_ApplicationEPR) */

void zxwsf_e_Header_DEL_ApplicationEPR(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_ApplicationEPR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicationEPR = (struct zxwsf_b_ApplicationEPR_s*)x->ApplicationEPR->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_ApplicationEPR_s*)x->ApplicationEPR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ApplicationEPR; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_UserInteraction) */

int zxwsf_e_Header_NUM_UserInteraction(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_UserInteraction_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UserInteraction; y; ++n, y = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_UserInteraction) */

struct zxwsf_b_UserInteraction_s* zxwsf_e_Header_GET_UserInteraction(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_UserInteraction_s* y;
  if (!x) return 0;
  for (y = x->UserInteraction; n>=0 && y; --n, y = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_UserInteraction) */

struct zxwsf_b_UserInteraction_s* zxwsf_e_Header_POP_UserInteraction(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_UserInteraction_s* y;
  if (!x) return 0;
  y = x->UserInteraction;
  if (y)
    x->UserInteraction = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_UserInteraction) */

void zxwsf_e_Header_PUSH_UserInteraction(struct zxwsf_e_Header_s* x, struct zxwsf_b_UserInteraction_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UserInteraction->gg.g;
  x->UserInteraction = z;
}

/* FUNC(zxwsf_e_Header_REV_UserInteraction) */

void zxwsf_e_Header_REV_UserInteraction(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_UserInteraction_s* nxt;
  struct zxwsf_b_UserInteraction_s* y;
  if (!x) return;
  y = x->UserInteraction;
  if (!y) return;
  x->UserInteraction = 0;
  while (y) {
    nxt = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n;
    y->gg.g.n = &x->UserInteraction->gg.g;
    x->UserInteraction = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_UserInteraction) */

void zxwsf_e_Header_PUT_UserInteraction(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_UserInteraction_s* z)
{
  struct zxwsf_b_UserInteraction_s* y;
  if (!x || !z) return;
  y = x->UserInteraction;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UserInteraction = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_UserInteraction) */

void zxwsf_e_Header_ADD_UserInteraction(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_UserInteraction_s* z)
{
  struct zxwsf_b_UserInteraction_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UserInteraction; n > 1 && y; --n, y = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_UserInteraction) */

void zxwsf_e_Header_DEL_UserInteraction(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_UserInteraction_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UserInteraction = (struct zxwsf_b_UserInteraction_s*)x->UserInteraction->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_UserInteraction_s*)x->UserInteraction;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UserInteraction; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_RedirectRequest) */

int zxwsf_e_Header_NUM_RedirectRequest(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_RedirectRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RedirectRequest; y; ++n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_RedirectRequest) */

struct zxwsf_b_RedirectRequest_s* zxwsf_e_Header_GET_RedirectRequest(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x) return 0;
  for (y = x->RedirectRequest; n>=0 && y; --n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_RedirectRequest) */

struct zxwsf_b_RedirectRequest_s* zxwsf_e_Header_POP_RedirectRequest(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x) return 0;
  y = x->RedirectRequest;
  if (y)
    x->RedirectRequest = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_RedirectRequest) */

void zxwsf_e_Header_PUSH_RedirectRequest(struct zxwsf_e_Header_s* x, struct zxwsf_b_RedirectRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RedirectRequest->gg.g;
  x->RedirectRequest = z;
}

/* FUNC(zxwsf_e_Header_REV_RedirectRequest) */

void zxwsf_e_Header_REV_RedirectRequest(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b_RedirectRequest_s* nxt;
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x) return;
  y = x->RedirectRequest;
  if (!y) return;
  x->RedirectRequest = 0;
  while (y) {
    nxt = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RedirectRequest->gg.g;
    x->RedirectRequest = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_RedirectRequest) */

void zxwsf_e_Header_PUT_RedirectRequest(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_RedirectRequest_s* z)
{
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x || !z) return;
  y = x->RedirectRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RedirectRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_RedirectRequest) */

void zxwsf_e_Header_ADD_RedirectRequest(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b_RedirectRequest_s* z)
{
  struct zxwsf_b_RedirectRequest_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RedirectRequest; n > 1 && y; --n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_RedirectRequest) */

void zxwsf_e_Header_DEL_RedirectRequest(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b_RedirectRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RedirectRequest = (struct zxwsf_b_RedirectRequest_s*)x->RedirectRequest->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b_RedirectRequest_s*)x->RedirectRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RedirectRequest; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_Correlation) */

int zxwsf_e_Header_NUM_Correlation(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Correlation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Correlation; y; ++n, y = (struct zxwsf_b12_Correlation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_Correlation) */

struct zxwsf_b12_Correlation_s* zxwsf_e_Header_GET_Correlation(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_Correlation_s* y;
  if (!x) return 0;
  for (y = x->Correlation; n>=0 && y; --n, y = (struct zxwsf_b12_Correlation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_Correlation) */

struct zxwsf_b12_Correlation_s* zxwsf_e_Header_POP_Correlation(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Correlation_s* y;
  if (!x) return 0;
  y = x->Correlation;
  if (y)
    x->Correlation = (struct zxwsf_b12_Correlation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_Correlation) */

void zxwsf_e_Header_PUSH_Correlation(struct zxwsf_e_Header_s* x, struct zxwsf_b12_Correlation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Correlation->gg.g;
  x->Correlation = z;
}

/* FUNC(zxwsf_e_Header_REV_Correlation) */

void zxwsf_e_Header_REV_Correlation(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Correlation_s* nxt;
  struct zxwsf_b12_Correlation_s* y;
  if (!x) return;
  y = x->Correlation;
  if (!y) return;
  x->Correlation = 0;
  while (y) {
    nxt = (struct zxwsf_b12_Correlation_s*)y->gg.g.n;
    y->gg.g.n = &x->Correlation->gg.g;
    x->Correlation = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_Correlation) */

void zxwsf_e_Header_PUT_Correlation(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Correlation_s* z)
{
  struct zxwsf_b12_Correlation_s* y;
  if (!x || !z) return;
  y = x->Correlation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Correlation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_Correlation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_Correlation) */

void zxwsf_e_Header_ADD_Correlation(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Correlation_s* z)
{
  struct zxwsf_b12_Correlation_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b12_Correlation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Correlation; n > 1 && y; --n, y = (struct zxwsf_b12_Correlation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_Correlation) */

void zxwsf_e_Header_DEL_Correlation(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_Correlation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Correlation = (struct zxwsf_b12_Correlation_s*)x->Correlation->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b12_Correlation_s*)x->Correlation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b12_Correlation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Correlation; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_Correlation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_Provider) */

int zxwsf_e_Header_NUM_Provider(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Provider_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Provider; y; ++n, y = (struct zxwsf_b12_Provider_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_Provider) */

struct zxwsf_b12_Provider_s* zxwsf_e_Header_GET_Provider(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_Provider_s* y;
  if (!x) return 0;
  for (y = x->Provider; n>=0 && y; --n, y = (struct zxwsf_b12_Provider_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_Provider) */

struct zxwsf_b12_Provider_s* zxwsf_e_Header_POP_Provider(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Provider_s* y;
  if (!x) return 0;
  y = x->Provider;
  if (y)
    x->Provider = (struct zxwsf_b12_Provider_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_Provider) */

void zxwsf_e_Header_PUSH_Provider(struct zxwsf_e_Header_s* x, struct zxwsf_b12_Provider_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Provider->gg.g;
  x->Provider = z;
}

/* FUNC(zxwsf_e_Header_REV_Provider) */

void zxwsf_e_Header_REV_Provider(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Provider_s* nxt;
  struct zxwsf_b12_Provider_s* y;
  if (!x) return;
  y = x->Provider;
  if (!y) return;
  x->Provider = 0;
  while (y) {
    nxt = (struct zxwsf_b12_Provider_s*)y->gg.g.n;
    y->gg.g.n = &x->Provider->gg.g;
    x->Provider = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_Provider) */

void zxwsf_e_Header_PUT_Provider(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Provider_s* z)
{
  struct zxwsf_b12_Provider_s* y;
  if (!x || !z) return;
  y = x->Provider;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Provider = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_Provider_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_Provider) */

void zxwsf_e_Header_ADD_Provider(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Provider_s* z)
{
  struct zxwsf_b12_Provider_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b12_Provider_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Provider; n > 1 && y; --n, y = (struct zxwsf_b12_Provider_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_Provider) */

void zxwsf_e_Header_DEL_Provider(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_Provider_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Provider = (struct zxwsf_b12_Provider_s*)x->Provider->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b12_Provider_s*)x->Provider;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b12_Provider_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Provider; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_Provider_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_b12_ProcessingContext) */

int zxwsf_e_Header_NUM_b12_ProcessingContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_ProcessingContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_ProcessingContext; y; ++n, y = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_b12_ProcessingContext) */

struct zxwsf_b12_ProcessingContext_s* zxwsf_e_Header_GET_b12_ProcessingContext(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_ProcessingContext_s* y;
  if (!x) return 0;
  for (y = x->b12_ProcessingContext; n>=0 && y; --n, y = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_b12_ProcessingContext) */

struct zxwsf_b12_ProcessingContext_s* zxwsf_e_Header_POP_b12_ProcessingContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_ProcessingContext_s* y;
  if (!x) return 0;
  y = x->b12_ProcessingContext;
  if (y)
    x->b12_ProcessingContext = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_b12_ProcessingContext) */

void zxwsf_e_Header_PUSH_b12_ProcessingContext(struct zxwsf_e_Header_s* x, struct zxwsf_b12_ProcessingContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_ProcessingContext->gg.g;
  x->b12_ProcessingContext = z;
}

/* FUNC(zxwsf_e_Header_REV_b12_ProcessingContext) */

void zxwsf_e_Header_REV_b12_ProcessingContext(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_ProcessingContext_s* nxt;
  struct zxwsf_b12_ProcessingContext_s* y;
  if (!x) return;
  y = x->b12_ProcessingContext;
  if (!y) return;
  x->b12_ProcessingContext = 0;
  while (y) {
    nxt = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_ProcessingContext->gg.g;
    x->b12_ProcessingContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_b12_ProcessingContext) */

void zxwsf_e_Header_PUT_b12_ProcessingContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_ProcessingContext_s* z)
{
  struct zxwsf_b12_ProcessingContext_s* y;
  if (!x || !z) return;
  y = x->b12_ProcessingContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_ProcessingContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_b12_ProcessingContext) */

void zxwsf_e_Header_ADD_b12_ProcessingContext(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_ProcessingContext_s* z)
{
  struct zxwsf_b12_ProcessingContext_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_ProcessingContext; n > 1 && y; --n, y = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_b12_ProcessingContext) */

void zxwsf_e_Header_DEL_b12_ProcessingContext(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_ProcessingContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_ProcessingContext = (struct zxwsf_b12_ProcessingContext_s*)x->b12_ProcessingContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b12_ProcessingContext_s*)x->b12_ProcessingContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_ProcessingContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_b12_Consent) */

int zxwsf_e_Header_NUM_b12_Consent(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Consent_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_Consent; y; ++n, y = (struct zxwsf_b12_Consent_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_b12_Consent) */

struct zxwsf_b12_Consent_s* zxwsf_e_Header_GET_b12_Consent(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_Consent_s* y;
  if (!x) return 0;
  for (y = x->b12_Consent; n>=0 && y; --n, y = (struct zxwsf_b12_Consent_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_b12_Consent) */

struct zxwsf_b12_Consent_s* zxwsf_e_Header_POP_b12_Consent(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Consent_s* y;
  if (!x) return 0;
  y = x->b12_Consent;
  if (y)
    x->b12_Consent = (struct zxwsf_b12_Consent_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_b12_Consent) */

void zxwsf_e_Header_PUSH_b12_Consent(struct zxwsf_e_Header_s* x, struct zxwsf_b12_Consent_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_Consent->gg.g;
  x->b12_Consent = z;
}

/* FUNC(zxwsf_e_Header_REV_b12_Consent) */

void zxwsf_e_Header_REV_b12_Consent(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_Consent_s* nxt;
  struct zxwsf_b12_Consent_s* y;
  if (!x) return;
  y = x->b12_Consent;
  if (!y) return;
  x->b12_Consent = 0;
  while (y) {
    nxt = (struct zxwsf_b12_Consent_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_Consent->gg.g;
    x->b12_Consent = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_b12_Consent) */

void zxwsf_e_Header_PUT_b12_Consent(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Consent_s* z)
{
  struct zxwsf_b12_Consent_s* y;
  if (!x || !z) return;
  y = x->b12_Consent;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_Consent = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_b12_Consent) */

void zxwsf_e_Header_ADD_b12_Consent(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_Consent_s* z)
{
  struct zxwsf_b12_Consent_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b12_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_Consent; n > 1 && y; --n, y = (struct zxwsf_b12_Consent_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_b12_Consent) */

void zxwsf_e_Header_DEL_b12_Consent(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_Consent_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_Consent = (struct zxwsf_b12_Consent_s*)x->b12_Consent->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b12_Consent_s*)x->b12_Consent;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b12_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_Consent; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_e_Header_NUM_b12_UsageDirective) */

int zxwsf_e_Header_NUM_b12_UsageDirective(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_UsageDirective_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_UsageDirective; y; ++n, y = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_e_Header_GET_b12_UsageDirective) */

struct zxwsf_b12_UsageDirective_s* zxwsf_e_Header_GET_b12_UsageDirective(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_UsageDirective_s* y;
  if (!x) return 0;
  for (y = x->b12_UsageDirective; n>=0 && y; --n, y = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_e_Header_POP_b12_UsageDirective) */

struct zxwsf_b12_UsageDirective_s* zxwsf_e_Header_POP_b12_UsageDirective(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_UsageDirective_s* y;
  if (!x) return 0;
  y = x->b12_UsageDirective;
  if (y)
    x->b12_UsageDirective = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_e_Header_PUSH_b12_UsageDirective) */

void zxwsf_e_Header_PUSH_b12_UsageDirective(struct zxwsf_e_Header_s* x, struct zxwsf_b12_UsageDirective_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_UsageDirective->gg.g;
  x->b12_UsageDirective = z;
}

/* FUNC(zxwsf_e_Header_REV_b12_UsageDirective) */

void zxwsf_e_Header_REV_b12_UsageDirective(struct zxwsf_e_Header_s* x)
{
  struct zxwsf_b12_UsageDirective_s* nxt;
  struct zxwsf_b12_UsageDirective_s* y;
  if (!x) return;
  y = x->b12_UsageDirective;
  if (!y) return;
  x->b12_UsageDirective = 0;
  while (y) {
    nxt = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_UsageDirective->gg.g;
    x->b12_UsageDirective = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_e_Header_PUT_b12_UsageDirective) */

void zxwsf_e_Header_PUT_b12_UsageDirective(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_UsageDirective_s* z)
{
  struct zxwsf_b12_UsageDirective_s* y;
  if (!x || !z) return;
  y = x->b12_UsageDirective;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_UsageDirective = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_e_Header_ADD_b12_UsageDirective) */

void zxwsf_e_Header_ADD_b12_UsageDirective(struct zxwsf_e_Header_s* x, int n, struct zxwsf_b12_UsageDirective_s* z)
{
  struct zxwsf_b12_UsageDirective_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_UsageDirective; n > 1 && y; --n, y = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_e_Header_DEL_b12_UsageDirective) */

void zxwsf_e_Header_DEL_b12_UsageDirective(struct zxwsf_e_Header_s* x, int n)
{
  struct zxwsf_b12_UsageDirective_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_UsageDirective = (struct zxwsf_b12_UsageDirective_s*)x->b12_UsageDirective->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_b12_UsageDirective_s*)x->b12_UsageDirective;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_UsageDirective; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}













/* FUNC(zxwsf_is12_Confirm_NUM_Help) */

int zxwsf_is12_Confirm_NUM_Help(struct zxwsf_is12_Confirm_s* x)
{
  struct zxwsf_is12_Help_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Help; y; ++n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Confirm_GET_Help) */

struct zxwsf_is12_Help_s* zxwsf_is12_Confirm_GET_Help(struct zxwsf_is12_Confirm_s* x, int n)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return 0;
  for (y = x->Help; n>=0 && y; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Confirm_POP_Help) */

struct zxwsf_is12_Help_s* zxwsf_is12_Confirm_POP_Help(struct zxwsf_is12_Confirm_s* x)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return 0;
  y = x->Help;
  if (y)
    x->Help = (struct zxwsf_is12_Help_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Confirm_PUSH_Help) */

void zxwsf_is12_Confirm_PUSH_Help(struct zxwsf_is12_Confirm_s* x, struct zxwsf_is12_Help_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Help->gg.g;
  x->Help = z;
}

/* FUNC(zxwsf_is12_Confirm_REV_Help) */

void zxwsf_is12_Confirm_REV_Help(struct zxwsf_is12_Confirm_s* x)
{
  struct zxwsf_is12_Help_s* nxt;
  struct zxwsf_is12_Help_s* y;
  if (!x) return;
  y = x->Help;
  if (!y) return;
  x->Help = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Help_s*)y->gg.g.n;
    y->gg.g.n = &x->Help->gg.g;
    x->Help = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Confirm_PUT_Help) */

void zxwsf_is12_Confirm_PUT_Help(struct zxwsf_is12_Confirm_s* x, int n, struct zxwsf_is12_Help_s* z)
{
  struct zxwsf_is12_Help_s* y;
  if (!x || !z) return;
  y = x->Help;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Help = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Confirm_ADD_Help) */

void zxwsf_is12_Confirm_ADD_Help(struct zxwsf_is12_Confirm_s* x, int n, struct zxwsf_is12_Help_s* z)
{
  struct zxwsf_is12_Help_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Help->gg.g;
    x->Help = z;
    return;
  case -1:
    y = x->Help;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Confirm_DEL_Help) */

void zxwsf_is12_Confirm_DEL_Help(struct zxwsf_is12_Confirm_s* x, int n)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Help = (struct zxwsf_is12_Help_s*)x->Help->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Help_s*)x->Help;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_Confirm_NUM_Hint) */

int zxwsf_is12_Confirm_NUM_Hint(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Hint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Confirm_GET_Hint) */

struct zx_elem_s* zxwsf_is12_Confirm_GET_Hint(struct zxwsf_is12_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Hint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Confirm_POP_Hint) */

struct zx_elem_s* zxwsf_is12_Confirm_POP_Hint(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Hint;
  if (y)
    x->Hint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Confirm_PUSH_Hint) */

void zxwsf_is12_Confirm_PUSH_Hint(struct zxwsf_is12_Confirm_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Hint->g;
  x->Hint = z;
}

/* FUNC(zxwsf_is12_Confirm_REV_Hint) */

void zxwsf_is12_Confirm_REV_Hint(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Hint;
  if (!y) return;
  x->Hint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Hint->g;
    x->Hint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Confirm_PUT_Hint) */

void zxwsf_is12_Confirm_PUT_Hint(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Hint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Hint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Confirm_ADD_Hint) */

void zxwsf_is12_Confirm_ADD_Hint(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Hint->g;
    x->Hint = z;
    return;
  case -1:
    y = x->Hint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Confirm_DEL_Hint) */

void zxwsf_is12_Confirm_DEL_Hint(struct zxwsf_is12_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Hint = (struct zx_elem_s*)x->Hint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Hint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is12_Confirm_NUM_Label) */

int zxwsf_is12_Confirm_NUM_Label(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Label; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Confirm_GET_Label) */

struct zx_elem_s* zxwsf_is12_Confirm_GET_Label(struct zxwsf_is12_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Label; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Confirm_POP_Label) */

struct zx_elem_s* zxwsf_is12_Confirm_POP_Label(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Label;
  if (y)
    x->Label = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Confirm_PUSH_Label) */

void zxwsf_is12_Confirm_PUSH_Label(struct zxwsf_is12_Confirm_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Label->g;
  x->Label = z;
}

/* FUNC(zxwsf_is12_Confirm_REV_Label) */

void zxwsf_is12_Confirm_REV_Label(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Label;
  if (!y) return;
  x->Label = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Label->g;
    x->Label = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Confirm_PUT_Label) */

void zxwsf_is12_Confirm_PUT_Label(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Label;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Label = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Confirm_ADD_Label) */

void zxwsf_is12_Confirm_ADD_Label(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Label->g;
    x->Label = z;
    return;
  case -1:
    y = x->Label;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Confirm_DEL_Label) */

void zxwsf_is12_Confirm_DEL_Label(struct zxwsf_is12_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Label = (struct zx_elem_s*)x->Label->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Label;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is12_Confirm_NUM_Value) */

int zxwsf_is12_Confirm_NUM_Value(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Value; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Confirm_GET_Value) */

struct zx_elem_s* zxwsf_is12_Confirm_GET_Value(struct zxwsf_is12_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Value; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Confirm_POP_Value) */

struct zx_elem_s* zxwsf_is12_Confirm_POP_Value(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Value;
  if (y)
    x->Value = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Confirm_PUSH_Value) */

void zxwsf_is12_Confirm_PUSH_Value(struct zxwsf_is12_Confirm_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Value->g;
  x->Value = z;
}

/* FUNC(zxwsf_is12_Confirm_REV_Value) */

void zxwsf_is12_Confirm_REV_Value(struct zxwsf_is12_Confirm_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Value;
  if (!y) return;
  x->Value = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Value->g;
    x->Value = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Confirm_PUT_Value) */

void zxwsf_is12_Confirm_PUT_Value(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Value;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Value = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Confirm_ADD_Value) */

void zxwsf_is12_Confirm_ADD_Value(struct zxwsf_is12_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Value->g;
    x->Value = z;
    return;
  case -1:
    y = x->Value;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Confirm_DEL_Value) */

void zxwsf_is12_Confirm_DEL_Value(struct zxwsf_is12_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Value = (struct zx_elem_s*)x->Value->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Value;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is12_Confirm_GET_name) */
struct zx_str_s* zxwsf_is12_Confirm_GET_name(struct zxwsf_is12_Confirm_s* x) { return x->name; }
/* FUNC(zxwsf_is12_Confirm_PUT_name) */
void zxwsf_is12_Confirm_PUT_name(struct zxwsf_is12_Confirm_s* x, struct zx_str_s* y) { x->name = y; }







/* FUNC(zxwsf_is12_EncryptedResourceID_NUM_EncryptedData) */

int zxwsf_is12_EncryptedResourceID_NUM_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_GET_EncryptedData) */

struct zx_elem_s* zxwsf_is12_EncryptedResourceID_GET_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_POP_EncryptedData) */

struct zx_elem_s* zxwsf_is12_EncryptedResourceID_POP_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_PUSH_EncryptedData) */

void zxwsf_is12_EncryptedResourceID_PUSH_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptedData->g;
  x->EncryptedData = z;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_REV_EncryptedData) */

void zxwsf_is12_EncryptedResourceID_REV_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptedData->g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_EncryptedResourceID_PUT_EncryptedData) */

void zxwsf_is12_EncryptedResourceID_PUT_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_EncryptedResourceID_ADD_EncryptedData) */

void zxwsf_is12_EncryptedResourceID_ADD_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptedData->g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_DEL_EncryptedData) */

void zxwsf_is12_EncryptedResourceID_DEL_EncryptedData(struct zxwsf_is12_EncryptedResourceID_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zx_elem_s*)x->EncryptedData->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptedData;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is12_EncryptedResourceID_NUM_EncryptedKey) */

int zxwsf_is12_EncryptedResourceID_NUM_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_GET_EncryptedKey) */

struct zx_elem_s* zxwsf_is12_EncryptedResourceID_GET_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_POP_EncryptedKey) */

struct zx_elem_s* zxwsf_is12_EncryptedResourceID_POP_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_PUSH_EncryptedKey) */

void zxwsf_is12_EncryptedResourceID_PUSH_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptedKey->g;
  x->EncryptedKey = z;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_REV_EncryptedKey) */

void zxwsf_is12_EncryptedResourceID_REV_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptedKey->g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_EncryptedResourceID_PUT_EncryptedKey) */

void zxwsf_is12_EncryptedResourceID_PUT_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_EncryptedResourceID_ADD_EncryptedKey) */

void zxwsf_is12_EncryptedResourceID_ADD_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptedKey->g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_EncryptedResourceID_DEL_EncryptedKey) */

void zxwsf_is12_EncryptedResourceID_DEL_EncryptedKey(struct zxwsf_is12_EncryptedResourceID_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zx_elem_s*)x->EncryptedKey->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}











/* FUNC(zxwsf_is12_Help_GET_label) */
struct zx_str_s* zxwsf_is12_Help_GET_label(struct zxwsf_is12_Help_s* x) { return x->label; }
/* FUNC(zxwsf_is12_Help_PUT_label) */
void zxwsf_is12_Help_PUT_label(struct zxwsf_is12_Help_s* x, struct zx_str_s* y) { x->label = y; }
/* FUNC(zxwsf_is12_Help_GET_link) */
struct zx_str_s* zxwsf_is12_Help_GET_link(struct zxwsf_is12_Help_s* x) { return x->link; }
/* FUNC(zxwsf_is12_Help_PUT_link) */
void zxwsf_is12_Help_PUT_link(struct zxwsf_is12_Help_s* x, struct zx_str_s* y) { x->link = y; }
/* FUNC(zxwsf_is12_Help_GET_moreLink) */
struct zx_str_s* zxwsf_is12_Help_GET_moreLink(struct zxwsf_is12_Help_s* x) { return x->moreLink; }
/* FUNC(zxwsf_is12_Help_PUT_moreLink) */
void zxwsf_is12_Help_PUT_moreLink(struct zxwsf_is12_Help_s* x, struct zx_str_s* y) { x->moreLink = y; }







/* FUNC(zxwsf_is12_Inquiry_NUM_Help) */

int zxwsf_is12_Inquiry_NUM_Help(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Help_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Help; y; ++n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Inquiry_GET_Help) */

struct zxwsf_is12_Help_s* zxwsf_is12_Inquiry_GET_Help(struct zxwsf_is12_Inquiry_s* x, int n)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return 0;
  for (y = x->Help; n>=0 && y; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Inquiry_POP_Help) */

struct zxwsf_is12_Help_s* zxwsf_is12_Inquiry_POP_Help(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return 0;
  y = x->Help;
  if (y)
    x->Help = (struct zxwsf_is12_Help_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Inquiry_PUSH_Help) */

void zxwsf_is12_Inquiry_PUSH_Help(struct zxwsf_is12_Inquiry_s* x, struct zxwsf_is12_Help_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Help->gg.g;
  x->Help = z;
}

/* FUNC(zxwsf_is12_Inquiry_REV_Help) */

void zxwsf_is12_Inquiry_REV_Help(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Help_s* nxt;
  struct zxwsf_is12_Help_s* y;
  if (!x) return;
  y = x->Help;
  if (!y) return;
  x->Help = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Help_s*)y->gg.g.n;
    y->gg.g.n = &x->Help->gg.g;
    x->Help = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Inquiry_PUT_Help) */

void zxwsf_is12_Inquiry_PUT_Help(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Help_s* z)
{
  struct zxwsf_is12_Help_s* y;
  if (!x || !z) return;
  y = x->Help;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Help = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Inquiry_ADD_Help) */

void zxwsf_is12_Inquiry_ADD_Help(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Help_s* z)
{
  struct zxwsf_is12_Help_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Help->gg.g;
    x->Help = z;
    return;
  case -1:
    y = x->Help;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Inquiry_DEL_Help) */

void zxwsf_is12_Inquiry_DEL_Help(struct zxwsf_is12_Inquiry_s* x, int n)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Help = (struct zxwsf_is12_Help_s*)x->Help->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Help_s*)x->Help;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_Inquiry_NUM_Select) */

int zxwsf_is12_Inquiry_NUM_Select(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Select_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zxwsf_is12_Select_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Inquiry_GET_Select) */

struct zxwsf_is12_Select_s* zxwsf_is12_Inquiry_GET_Select(struct zxwsf_is12_Inquiry_s* x, int n)
{
  struct zxwsf_is12_Select_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zxwsf_is12_Select_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Inquiry_POP_Select) */

struct zxwsf_is12_Select_s* zxwsf_is12_Inquiry_POP_Select(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Select_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zxwsf_is12_Select_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Inquiry_PUSH_Select) */

void zxwsf_is12_Inquiry_PUSH_Select(struct zxwsf_is12_Inquiry_s* x, struct zxwsf_is12_Select_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Select->gg.g;
  x->Select = z;
}

/* FUNC(zxwsf_is12_Inquiry_REV_Select) */

void zxwsf_is12_Inquiry_REV_Select(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Select_s* nxt;
  struct zxwsf_is12_Select_s* y;
  if (!x) return;
  y = x->Select;
  if (!y) return;
  x->Select = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Select_s*)y->gg.g.n;
    y->gg.g.n = &x->Select->gg.g;
    x->Select = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Inquiry_PUT_Select) */

void zxwsf_is12_Inquiry_PUT_Select(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Select_s* z)
{
  struct zxwsf_is12_Select_s* y;
  if (!x || !z) return;
  y = x->Select;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Select = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Select_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Inquiry_ADD_Select) */

void zxwsf_is12_Inquiry_ADD_Select(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Select_s* z)
{
  struct zxwsf_is12_Select_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Select->gg.g;
    x->Select = z;
    return;
  case -1:
    y = x->Select;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Select_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y; --n, y = (struct zxwsf_is12_Select_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Inquiry_DEL_Select) */

void zxwsf_is12_Inquiry_DEL_Select(struct zxwsf_is12_Inquiry_s* x, int n)
{
  struct zxwsf_is12_Select_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Select = (struct zxwsf_is12_Select_s*)x->Select->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Select_s*)x->Select;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Select_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Select_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_Inquiry_NUM_Confirm) */

int zxwsf_is12_Inquiry_NUM_Confirm(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Confirm_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Confirm; y; ++n, y = (struct zxwsf_is12_Confirm_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Inquiry_GET_Confirm) */

struct zxwsf_is12_Confirm_s* zxwsf_is12_Inquiry_GET_Confirm(struct zxwsf_is12_Inquiry_s* x, int n)
{
  struct zxwsf_is12_Confirm_s* y;
  if (!x) return 0;
  for (y = x->Confirm; n>=0 && y; --n, y = (struct zxwsf_is12_Confirm_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Inquiry_POP_Confirm) */

struct zxwsf_is12_Confirm_s* zxwsf_is12_Inquiry_POP_Confirm(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Confirm_s* y;
  if (!x) return 0;
  y = x->Confirm;
  if (y)
    x->Confirm = (struct zxwsf_is12_Confirm_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Inquiry_PUSH_Confirm) */

void zxwsf_is12_Inquiry_PUSH_Confirm(struct zxwsf_is12_Inquiry_s* x, struct zxwsf_is12_Confirm_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Confirm->gg.g;
  x->Confirm = z;
}

/* FUNC(zxwsf_is12_Inquiry_REV_Confirm) */

void zxwsf_is12_Inquiry_REV_Confirm(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Confirm_s* nxt;
  struct zxwsf_is12_Confirm_s* y;
  if (!x) return;
  y = x->Confirm;
  if (!y) return;
  x->Confirm = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Confirm_s*)y->gg.g.n;
    y->gg.g.n = &x->Confirm->gg.g;
    x->Confirm = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Inquiry_PUT_Confirm) */

void zxwsf_is12_Inquiry_PUT_Confirm(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Confirm_s* z)
{
  struct zxwsf_is12_Confirm_s* y;
  if (!x || !z) return;
  y = x->Confirm;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Confirm = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Confirm_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Inquiry_ADD_Confirm) */

void zxwsf_is12_Inquiry_ADD_Confirm(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Confirm_s* z)
{
  struct zxwsf_is12_Confirm_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Confirm->gg.g;
    x->Confirm = z;
    return;
  case -1:
    y = x->Confirm;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Confirm_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Confirm; n > 1 && y; --n, y = (struct zxwsf_is12_Confirm_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Inquiry_DEL_Confirm) */

void zxwsf_is12_Inquiry_DEL_Confirm(struct zxwsf_is12_Inquiry_s* x, int n)
{
  struct zxwsf_is12_Confirm_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Confirm = (struct zxwsf_is12_Confirm_s*)x->Confirm->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Confirm_s*)x->Confirm;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Confirm_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Confirm; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Confirm_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_Inquiry_NUM_Text) */

int zxwsf_is12_Inquiry_NUM_Text(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Text_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Text; y; ++n, y = (struct zxwsf_is12_Text_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Inquiry_GET_Text) */

struct zxwsf_is12_Text_s* zxwsf_is12_Inquiry_GET_Text(struct zxwsf_is12_Inquiry_s* x, int n)
{
  struct zxwsf_is12_Text_s* y;
  if (!x) return 0;
  for (y = x->Text; n>=0 && y; --n, y = (struct zxwsf_is12_Text_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Inquiry_POP_Text) */

struct zxwsf_is12_Text_s* zxwsf_is12_Inquiry_POP_Text(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Text_s* y;
  if (!x) return 0;
  y = x->Text;
  if (y)
    x->Text = (struct zxwsf_is12_Text_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Inquiry_PUSH_Text) */

void zxwsf_is12_Inquiry_PUSH_Text(struct zxwsf_is12_Inquiry_s* x, struct zxwsf_is12_Text_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Text->gg.g;
  x->Text = z;
}

/* FUNC(zxwsf_is12_Inquiry_REV_Text) */

void zxwsf_is12_Inquiry_REV_Text(struct zxwsf_is12_Inquiry_s* x)
{
  struct zxwsf_is12_Text_s* nxt;
  struct zxwsf_is12_Text_s* y;
  if (!x) return;
  y = x->Text;
  if (!y) return;
  x->Text = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Text_s*)y->gg.g.n;
    y->gg.g.n = &x->Text->gg.g;
    x->Text = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Inquiry_PUT_Text) */

void zxwsf_is12_Inquiry_PUT_Text(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Text_s* z)
{
  struct zxwsf_is12_Text_s* y;
  if (!x || !z) return;
  y = x->Text;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Text = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Text_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Inquiry_ADD_Text) */

void zxwsf_is12_Inquiry_ADD_Text(struct zxwsf_is12_Inquiry_s* x, int n, struct zxwsf_is12_Text_s* z)
{
  struct zxwsf_is12_Text_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Text->gg.g;
    x->Text = z;
    return;
  case -1:
    y = x->Text;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Text_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Text; n > 1 && y; --n, y = (struct zxwsf_is12_Text_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Inquiry_DEL_Text) */

void zxwsf_is12_Inquiry_DEL_Text(struct zxwsf_is12_Inquiry_s* x, int n)
{
  struct zxwsf_is12_Text_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Text = (struct zxwsf_is12_Text_s*)x->Text->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Text_s*)x->Text;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Text_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Text; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Text_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_is12_Inquiry_GET_id) */
struct zx_str_s* zxwsf_is12_Inquiry_GET_id(struct zxwsf_is12_Inquiry_s* x) { return x->id; }
/* FUNC(zxwsf_is12_Inquiry_PUT_id) */
void zxwsf_is12_Inquiry_PUT_id(struct zxwsf_is12_Inquiry_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_is12_Inquiry_GET_title) */
struct zx_str_s* zxwsf_is12_Inquiry_GET_title(struct zxwsf_is12_Inquiry_s* x) { return x->title; }
/* FUNC(zxwsf_is12_Inquiry_PUT_title) */
void zxwsf_is12_Inquiry_PUT_title(struct zxwsf_is12_Inquiry_s* x, struct zx_str_s* y) { x->title = y; }







/* FUNC(zxwsf_is12_InteractionRequest_NUM_Inquiry) */

int zxwsf_is12_InteractionRequest_NUM_Inquiry(struct zxwsf_is12_InteractionRequest_s* x)
{
  struct zxwsf_is12_Inquiry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Inquiry; y; ++n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionRequest_GET_Inquiry) */

struct zxwsf_is12_Inquiry_s* zxwsf_is12_InteractionRequest_GET_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, int n)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x) return 0;
  for (y = x->Inquiry; n>=0 && y; --n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionRequest_POP_Inquiry) */

struct zxwsf_is12_Inquiry_s* zxwsf_is12_InteractionRequest_POP_Inquiry(struct zxwsf_is12_InteractionRequest_s* x)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x) return 0;
  y = x->Inquiry;
  if (y)
    x->Inquiry = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionRequest_PUSH_Inquiry) */

void zxwsf_is12_InteractionRequest_PUSH_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, struct zxwsf_is12_Inquiry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Inquiry->gg.g;
  x->Inquiry = z;
}

/* FUNC(zxwsf_is12_InteractionRequest_REV_Inquiry) */

void zxwsf_is12_InteractionRequest_REV_Inquiry(struct zxwsf_is12_InteractionRequest_s* x)
{
  struct zxwsf_is12_Inquiry_s* nxt;
  struct zxwsf_is12_Inquiry_s* y;
  if (!x) return;
  y = x->Inquiry;
  if (!y) return;
  x->Inquiry = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n;
    y->gg.g.n = &x->Inquiry->gg.g;
    x->Inquiry = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionRequest_PUT_Inquiry) */

void zxwsf_is12_InteractionRequest_PUT_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, int n, struct zxwsf_is12_Inquiry_s* z)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x || !z) return;
  y = x->Inquiry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Inquiry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_InteractionRequest_ADD_Inquiry) */

void zxwsf_is12_InteractionRequest_ADD_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, int n, struct zxwsf_is12_Inquiry_s* z)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Inquiry->gg.g;
    x->Inquiry = z;
    return;
  case -1:
    y = x->Inquiry;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Inquiry; n > 1 && y; --n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_InteractionRequest_DEL_Inquiry) */

void zxwsf_is12_InteractionRequest_DEL_Inquiry(struct zxwsf_is12_InteractionRequest_s* x, int n)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Inquiry = (struct zxwsf_is12_Inquiry_s*)x->Inquiry->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Inquiry_s*)x->Inquiry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Inquiry; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_InteractionRequest_NUM_KeyInfo) */

int zxwsf_is12_InteractionRequest_NUM_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionRequest_GET_KeyInfo) */

struct zx_elem_s* zxwsf_is12_InteractionRequest_GET_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionRequest_POP_KeyInfo) */

struct zx_elem_s* zxwsf_is12_InteractionRequest_POP_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionRequest_PUSH_KeyInfo) */

void zxwsf_is12_InteractionRequest_PUSH_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyInfo->g;
  x->KeyInfo = z;
}

/* FUNC(zxwsf_is12_InteractionRequest_REV_KeyInfo) */

void zxwsf_is12_InteractionRequest_REV_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyInfo->g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionRequest_PUT_KeyInfo) */

void zxwsf_is12_InteractionRequest_PUT_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_InteractionRequest_ADD_KeyInfo) */

void zxwsf_is12_InteractionRequest_ADD_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyInfo->g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_InteractionRequest_DEL_KeyInfo) */

void zxwsf_is12_InteractionRequest_DEL_KeyInfo(struct zxwsf_is12_InteractionRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zx_elem_s*)x->KeyInfo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyInfo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is12_InteractionRequest_GET_id) */
struct zx_str_s* zxwsf_is12_InteractionRequest_GET_id(struct zxwsf_is12_InteractionRequest_s* x) { return x->id; }
/* FUNC(zxwsf_is12_InteractionRequest_PUT_id) */
void zxwsf_is12_InteractionRequest_PUT_id(struct zxwsf_is12_InteractionRequest_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_is12_InteractionRequest_GET_language) */
struct zx_str_s* zxwsf_is12_InteractionRequest_GET_language(struct zxwsf_is12_InteractionRequest_s* x) { return x->language; }
/* FUNC(zxwsf_is12_InteractionRequest_PUT_language) */
void zxwsf_is12_InteractionRequest_PUT_language(struct zxwsf_is12_InteractionRequest_s* x, struct zx_str_s* y) { x->language = y; }
/* FUNC(zxwsf_is12_InteractionRequest_GET_maxInteractTime) */
struct zx_str_s* zxwsf_is12_InteractionRequest_GET_maxInteractTime(struct zxwsf_is12_InteractionRequest_s* x) { return x->maxInteractTime; }
/* FUNC(zxwsf_is12_InteractionRequest_PUT_maxInteractTime) */
void zxwsf_is12_InteractionRequest_PUT_maxInteractTime(struct zxwsf_is12_InteractionRequest_s* x, struct zx_str_s* y) { x->maxInteractTime = y; }
/* FUNC(zxwsf_is12_InteractionRequest_GET_signed_is_c_keyword) */
struct zx_str_s* zxwsf_is12_InteractionRequest_GET_signed_is_c_keyword(struct zxwsf_is12_InteractionRequest_s* x) { return x->signed_is_c_keyword; }
/* FUNC(zxwsf_is12_InteractionRequest_PUT_signed_is_c_keyword) */
void zxwsf_is12_InteractionRequest_PUT_signed_is_c_keyword(struct zxwsf_is12_InteractionRequest_s* x, struct zx_str_s* y) { x->signed_is_c_keyword = y; }







/* FUNC(zxwsf_is12_InteractionResponse_NUM_Status) */

int zxwsf_is12_InteractionResponse_NUM_Status(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionResponse_GET_Status) */

struct zxwsf_is12_Status_s* zxwsf_is12_InteractionResponse_GET_Status(struct zxwsf_is12_InteractionResponse_s* x, int n)
{
  struct zxwsf_is12_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionResponse_POP_Status) */

struct zxwsf_is12_Status_s* zxwsf_is12_InteractionResponse_POP_Status(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_is12_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionResponse_PUSH_Status) */

void zxwsf_is12_InteractionResponse_PUSH_Status(struct zxwsf_is12_InteractionResponse_s* x, struct zxwsf_is12_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_is12_InteractionResponse_REV_Status) */

void zxwsf_is12_InteractionResponse_REV_Status(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_Status_s* nxt;
  struct zxwsf_is12_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionResponse_PUT_Status) */

void zxwsf_is12_InteractionResponse_PUT_Status(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_Status_s* z)
{
  struct zxwsf_is12_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_InteractionResponse_ADD_Status) */

void zxwsf_is12_InteractionResponse_ADD_Status(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_Status_s* z)
{
  struct zxwsf_is12_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_InteractionResponse_DEL_Status) */

void zxwsf_is12_InteractionResponse_DEL_Status(struct zxwsf_is12_InteractionResponse_s* x, int n)
{
  struct zxwsf_is12_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_is12_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_InteractionResponse_NUM_InteractionStatement) */

int zxwsf_is12_InteractionResponse_NUM_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_InteractionStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InteractionStatement; y; ++n, y = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionResponse_GET_InteractionStatement) */

struct zxwsf_is12_InteractionStatement_s* zxwsf_is12_InteractionResponse_GET_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, int n)
{
  struct zxwsf_is12_InteractionStatement_s* y;
  if (!x) return 0;
  for (y = x->InteractionStatement; n>=0 && y; --n, y = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionResponse_POP_InteractionStatement) */

struct zxwsf_is12_InteractionStatement_s* zxwsf_is12_InteractionResponse_POP_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_InteractionStatement_s* y;
  if (!x) return 0;
  y = x->InteractionStatement;
  if (y)
    x->InteractionStatement = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionResponse_PUSH_InteractionStatement) */

void zxwsf_is12_InteractionResponse_PUSH_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, struct zxwsf_is12_InteractionStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InteractionStatement->gg.g;
  x->InteractionStatement = z;
}

/* FUNC(zxwsf_is12_InteractionResponse_REV_InteractionStatement) */

void zxwsf_is12_InteractionResponse_REV_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_InteractionStatement_s* nxt;
  struct zxwsf_is12_InteractionStatement_s* y;
  if (!x) return;
  y = x->InteractionStatement;
  if (!y) return;
  x->InteractionStatement = 0;
  while (y) {
    nxt = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n;
    y->gg.g.n = &x->InteractionStatement->gg.g;
    x->InteractionStatement = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionResponse_PUT_InteractionStatement) */

void zxwsf_is12_InteractionResponse_PUT_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_InteractionStatement_s* z)
{
  struct zxwsf_is12_InteractionStatement_s* y;
  if (!x || !z) return;
  y = x->InteractionStatement;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InteractionStatement = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_InteractionResponse_ADD_InteractionStatement) */

void zxwsf_is12_InteractionResponse_ADD_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_InteractionStatement_s* z)
{
  struct zxwsf_is12_InteractionStatement_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->InteractionStatement->gg.g;
    x->InteractionStatement = z;
    return;
  case -1:
    y = x->InteractionStatement;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InteractionStatement; n > 1 && y; --n, y = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_InteractionResponse_DEL_InteractionStatement) */

void zxwsf_is12_InteractionResponse_DEL_InteractionStatement(struct zxwsf_is12_InteractionResponse_s* x, int n)
{
  struct zxwsf_is12_InteractionStatement_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InteractionStatement = (struct zxwsf_is12_InteractionStatement_s*)x->InteractionStatement->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_InteractionStatement_s*)x->InteractionStatement;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InteractionStatement; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_InteractionStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_InteractionResponse_NUM_Parameter) */

int zxwsf_is12_InteractionResponse_NUM_Parameter(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_Parameter_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Parameter; y; ++n, y = (struct zxwsf_is12_Parameter_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionResponse_GET_Parameter) */

struct zxwsf_is12_Parameter_s* zxwsf_is12_InteractionResponse_GET_Parameter(struct zxwsf_is12_InteractionResponse_s* x, int n)
{
  struct zxwsf_is12_Parameter_s* y;
  if (!x) return 0;
  for (y = x->Parameter; n>=0 && y; --n, y = (struct zxwsf_is12_Parameter_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionResponse_POP_Parameter) */

struct zxwsf_is12_Parameter_s* zxwsf_is12_InteractionResponse_POP_Parameter(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_Parameter_s* y;
  if (!x) return 0;
  y = x->Parameter;
  if (y)
    x->Parameter = (struct zxwsf_is12_Parameter_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionResponse_PUSH_Parameter) */

void zxwsf_is12_InteractionResponse_PUSH_Parameter(struct zxwsf_is12_InteractionResponse_s* x, struct zxwsf_is12_Parameter_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Parameter->gg.g;
  x->Parameter = z;
}

/* FUNC(zxwsf_is12_InteractionResponse_REV_Parameter) */

void zxwsf_is12_InteractionResponse_REV_Parameter(struct zxwsf_is12_InteractionResponse_s* x)
{
  struct zxwsf_is12_Parameter_s* nxt;
  struct zxwsf_is12_Parameter_s* y;
  if (!x) return;
  y = x->Parameter;
  if (!y) return;
  x->Parameter = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Parameter_s*)y->gg.g.n;
    y->gg.g.n = &x->Parameter->gg.g;
    x->Parameter = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionResponse_PUT_Parameter) */

void zxwsf_is12_InteractionResponse_PUT_Parameter(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_Parameter_s* z)
{
  struct zxwsf_is12_Parameter_s* y;
  if (!x || !z) return;
  y = x->Parameter;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Parameter = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Parameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_InteractionResponse_ADD_Parameter) */

void zxwsf_is12_InteractionResponse_ADD_Parameter(struct zxwsf_is12_InteractionResponse_s* x, int n, struct zxwsf_is12_Parameter_s* z)
{
  struct zxwsf_is12_Parameter_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Parameter->gg.g;
    x->Parameter = z;
    return;
  case -1:
    y = x->Parameter;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Parameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Parameter; n > 1 && y; --n, y = (struct zxwsf_is12_Parameter_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_InteractionResponse_DEL_Parameter) */

void zxwsf_is12_InteractionResponse_DEL_Parameter(struct zxwsf_is12_InteractionResponse_s* x, int n)
{
  struct zxwsf_is12_Parameter_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Parameter = (struct zxwsf_is12_Parameter_s*)x->Parameter->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Parameter_s*)x->Parameter;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Parameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Parameter; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Parameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_is12_InteractionService_NUM_ServiceInstance) */

int zxwsf_is12_InteractionService_NUM_ServiceInstance(struct zxwsf_is12_InteractionService_s* x)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceInstance; y; ++n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionService_GET_ServiceInstance) */

struct zxwsf_di12_ServiceInstance_s* zxwsf_is12_InteractionService_GET_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, int n)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x) return 0;
  for (y = x->ServiceInstance; n>=0 && y; --n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionService_POP_ServiceInstance) */

struct zxwsf_di12_ServiceInstance_s* zxwsf_is12_InteractionService_POP_ServiceInstance(struct zxwsf_is12_InteractionService_s* x)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x) return 0;
  y = x->ServiceInstance;
  if (y)
    x->ServiceInstance = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionService_PUSH_ServiceInstance) */

void zxwsf_is12_InteractionService_PUSH_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, struct zxwsf_di12_ServiceInstance_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceInstance->gg.g;
  x->ServiceInstance = z;
}

/* FUNC(zxwsf_is12_InteractionService_REV_ServiceInstance) */

void zxwsf_is12_InteractionService_REV_ServiceInstance(struct zxwsf_is12_InteractionService_s* x)
{
  struct zxwsf_di12_ServiceInstance_s* nxt;
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x) return;
  y = x->ServiceInstance;
  if (!y) return;
  x->ServiceInstance = 0;
  while (y) {
    nxt = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceInstance->gg.g;
    x->ServiceInstance = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionService_PUT_ServiceInstance) */

void zxwsf_is12_InteractionService_PUT_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, int n, struct zxwsf_di12_ServiceInstance_s* z)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x || !z) return;
  y = x->ServiceInstance;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceInstance = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_InteractionService_ADD_ServiceInstance) */

void zxwsf_is12_InteractionService_ADD_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, int n, struct zxwsf_di12_ServiceInstance_s* z)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceInstance->gg.g;
    x->ServiceInstance = z;
    return;
  case -1:
    y = x->ServiceInstance;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceInstance; n > 1 && y; --n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_InteractionService_DEL_ServiceInstance) */

void zxwsf_is12_InteractionService_DEL_ServiceInstance(struct zxwsf_is12_InteractionService_s* x, int n)
{
  struct zxwsf_di12_ServiceInstance_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceInstance = (struct zxwsf_di12_ServiceInstance_s*)x->ServiceInstance->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_ServiceInstance_s*)x->ServiceInstance;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceInstance; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_InteractionService_NUM_Options) */

int zxwsf_is12_InteractionService_NUM_Options(struct zxwsf_is12_InteractionService_s* x)
{
  struct zxwsf_di12_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionService_GET_Options) */

struct zxwsf_di12_Options_s* zxwsf_is12_InteractionService_GET_Options(struct zxwsf_is12_InteractionService_s* x, int n)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionService_POP_Options) */

struct zxwsf_di12_Options_s* zxwsf_is12_InteractionService_POP_Options(struct zxwsf_is12_InteractionService_s* x)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zxwsf_di12_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionService_PUSH_Options) */

void zxwsf_is12_InteractionService_PUSH_Options(struct zxwsf_is12_InteractionService_s* x, struct zxwsf_di12_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zxwsf_is12_InteractionService_REV_Options) */

void zxwsf_is12_InteractionService_REV_Options(struct zxwsf_is12_InteractionService_s* x)
{
  struct zxwsf_di12_Options_s* nxt;
  struct zxwsf_di12_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zxwsf_di12_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionService_PUT_Options) */

void zxwsf_is12_InteractionService_PUT_Options(struct zxwsf_is12_InteractionService_s* x, int n, struct zxwsf_di12_Options_s* z)
{
  struct zxwsf_di12_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_InteractionService_ADD_Options) */

void zxwsf_is12_InteractionService_ADD_Options(struct zxwsf_is12_InteractionService_s* x, int n, struct zxwsf_di12_Options_s* z)
{
  struct zxwsf_di12_Options_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Options->gg.g;
    x->Options = z;
    return;
  case -1:
    y = x->Options;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_InteractionService_DEL_Options) */

void zxwsf_is12_InteractionService_DEL_Options(struct zxwsf_is12_InteractionService_s* x, int n)
{
  struct zxwsf_di12_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zxwsf_di12_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_di12_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_InteractionService_NUM_Abstract) */

int zxwsf_is12_InteractionService_NUM_Abstract(struct zxwsf_is12_InteractionService_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Abstract; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionService_GET_Abstract) */

struct zx_elem_s* zxwsf_is12_InteractionService_GET_Abstract(struct zxwsf_is12_InteractionService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Abstract; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionService_POP_Abstract) */

struct zx_elem_s* zxwsf_is12_InteractionService_POP_Abstract(struct zxwsf_is12_InteractionService_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Abstract;
  if (y)
    x->Abstract = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionService_PUSH_Abstract) */

void zxwsf_is12_InteractionService_PUSH_Abstract(struct zxwsf_is12_InteractionService_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Abstract->g;
  x->Abstract = z;
}

/* FUNC(zxwsf_is12_InteractionService_REV_Abstract) */

void zxwsf_is12_InteractionService_REV_Abstract(struct zxwsf_is12_InteractionService_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Abstract;
  if (!y) return;
  x->Abstract = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Abstract->g;
    x->Abstract = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionService_PUT_Abstract) */

void zxwsf_is12_InteractionService_PUT_Abstract(struct zxwsf_is12_InteractionService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Abstract;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Abstract = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_InteractionService_ADD_Abstract) */

void zxwsf_is12_InteractionService_ADD_Abstract(struct zxwsf_is12_InteractionService_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Abstract->g;
    x->Abstract = z;
    return;
  case -1:
    y = x->Abstract;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Abstract; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_InteractionService_DEL_Abstract) */

void zxwsf_is12_InteractionService_DEL_Abstract(struct zxwsf_is12_InteractionService_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Abstract = (struct zx_elem_s*)x->Abstract->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Abstract;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Abstract; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is12_InteractionService_GET_entryID) */
struct zx_str_s* zxwsf_is12_InteractionService_GET_entryID(struct zxwsf_is12_InteractionService_s* x) { return x->entryID; }
/* FUNC(zxwsf_is12_InteractionService_PUT_entryID) */
void zxwsf_is12_InteractionService_PUT_entryID(struct zxwsf_is12_InteractionService_s* x, struct zx_str_s* y) { x->entryID = y; }







/* FUNC(zxwsf_is12_InteractionStatement_NUM_Inquiry) */

int zxwsf_is12_InteractionStatement_NUM_Inquiry(struct zxwsf_is12_InteractionStatement_s* x)
{
  struct zxwsf_is12_Inquiry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Inquiry; y; ++n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionStatement_GET_Inquiry) */

struct zxwsf_is12_Inquiry_s* zxwsf_is12_InteractionStatement_GET_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, int n)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x) return 0;
  for (y = x->Inquiry; n>=0 && y; --n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionStatement_POP_Inquiry) */

struct zxwsf_is12_Inquiry_s* zxwsf_is12_InteractionStatement_POP_Inquiry(struct zxwsf_is12_InteractionStatement_s* x)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x) return 0;
  y = x->Inquiry;
  if (y)
    x->Inquiry = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionStatement_PUSH_Inquiry) */

void zxwsf_is12_InteractionStatement_PUSH_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, struct zxwsf_is12_Inquiry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Inquiry->gg.g;
  x->Inquiry = z;
}

/* FUNC(zxwsf_is12_InteractionStatement_REV_Inquiry) */

void zxwsf_is12_InteractionStatement_REV_Inquiry(struct zxwsf_is12_InteractionStatement_s* x)
{
  struct zxwsf_is12_Inquiry_s* nxt;
  struct zxwsf_is12_Inquiry_s* y;
  if (!x) return;
  y = x->Inquiry;
  if (!y) return;
  x->Inquiry = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n;
    y->gg.g.n = &x->Inquiry->gg.g;
    x->Inquiry = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionStatement_PUT_Inquiry) */

void zxwsf_is12_InteractionStatement_PUT_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, int n, struct zxwsf_is12_Inquiry_s* z)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x || !z) return;
  y = x->Inquiry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Inquiry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_InteractionStatement_ADD_Inquiry) */

void zxwsf_is12_InteractionStatement_ADD_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, int n, struct zxwsf_is12_Inquiry_s* z)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Inquiry->gg.g;
    x->Inquiry = z;
    return;
  case -1:
    y = x->Inquiry;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Inquiry; n > 1 && y; --n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_InteractionStatement_DEL_Inquiry) */

void zxwsf_is12_InteractionStatement_DEL_Inquiry(struct zxwsf_is12_InteractionStatement_s* x, int n)
{
  struct zxwsf_is12_Inquiry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Inquiry = (struct zxwsf_is12_Inquiry_s*)x->Inquiry->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Inquiry_s*)x->Inquiry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Inquiry; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Inquiry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_InteractionStatement_NUM_Signature) */

int zxwsf_is12_InteractionStatement_NUM_Signature(struct zxwsf_is12_InteractionStatement_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_InteractionStatement_GET_Signature) */

struct zx_elem_s* zxwsf_is12_InteractionStatement_GET_Signature(struct zxwsf_is12_InteractionStatement_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_InteractionStatement_POP_Signature) */

struct zx_elem_s* zxwsf_is12_InteractionStatement_POP_Signature(struct zxwsf_is12_InteractionStatement_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_InteractionStatement_PUSH_Signature) */

void zxwsf_is12_InteractionStatement_PUSH_Signature(struct zxwsf_is12_InteractionStatement_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Signature->g;
  x->Signature = z;
}

/* FUNC(zxwsf_is12_InteractionStatement_REV_Signature) */

void zxwsf_is12_InteractionStatement_REV_Signature(struct zxwsf_is12_InteractionStatement_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Signature->g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_InteractionStatement_PUT_Signature) */

void zxwsf_is12_InteractionStatement_PUT_Signature(struct zxwsf_is12_InteractionStatement_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_InteractionStatement_ADD_Signature) */

void zxwsf_is12_InteractionStatement_ADD_Signature(struct zxwsf_is12_InteractionStatement_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Signature->g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_InteractionStatement_DEL_Signature) */

void zxwsf_is12_InteractionStatement_DEL_Signature(struct zxwsf_is12_InteractionStatement_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_elem_s*)x->Signature->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Signature;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_is12_Item_NUM_Hint) */

int zxwsf_is12_Item_NUM_Hint(struct zxwsf_is12_Item_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Hint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Item_GET_Hint) */

struct zx_elem_s* zxwsf_is12_Item_GET_Hint(struct zxwsf_is12_Item_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Hint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Item_POP_Hint) */

struct zx_elem_s* zxwsf_is12_Item_POP_Hint(struct zxwsf_is12_Item_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Hint;
  if (y)
    x->Hint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Item_PUSH_Hint) */

void zxwsf_is12_Item_PUSH_Hint(struct zxwsf_is12_Item_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Hint->g;
  x->Hint = z;
}

/* FUNC(zxwsf_is12_Item_REV_Hint) */

void zxwsf_is12_Item_REV_Hint(struct zxwsf_is12_Item_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Hint;
  if (!y) return;
  x->Hint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Hint->g;
    x->Hint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Item_PUT_Hint) */

void zxwsf_is12_Item_PUT_Hint(struct zxwsf_is12_Item_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Hint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Hint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Item_ADD_Hint) */

void zxwsf_is12_Item_ADD_Hint(struct zxwsf_is12_Item_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Hint->g;
    x->Hint = z;
    return;
  case -1:
    y = x->Hint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Item_DEL_Hint) */

void zxwsf_is12_Item_DEL_Hint(struct zxwsf_is12_Item_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Hint = (struct zx_elem_s*)x->Hint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Hint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is12_Item_GET_label) */
struct zx_str_s* zxwsf_is12_Item_GET_label(struct zxwsf_is12_Item_s* x) { return x->label; }
/* FUNC(zxwsf_is12_Item_PUT_label) */
void zxwsf_is12_Item_PUT_label(struct zxwsf_is12_Item_s* x, struct zx_str_s* y) { x->label = y; }
/* FUNC(zxwsf_is12_Item_GET_value) */
struct zx_str_s* zxwsf_is12_Item_GET_value(struct zxwsf_is12_Item_s* x) { return x->value; }
/* FUNC(zxwsf_is12_Item_PUT_value) */
void zxwsf_is12_Item_PUT_value(struct zxwsf_is12_Item_s* x, struct zx_str_s* y) { x->value = y; }





/* FUNC(zxwsf_is12_Parameter_GET_name) */
struct zx_str_s* zxwsf_is12_Parameter_GET_name(struct zxwsf_is12_Parameter_s* x) { return x->name; }
/* FUNC(zxwsf_is12_Parameter_PUT_name) */
void zxwsf_is12_Parameter_PUT_name(struct zxwsf_is12_Parameter_s* x, struct zx_str_s* y) { x->name = y; }
/* FUNC(zxwsf_is12_Parameter_GET_value) */
struct zx_str_s* zxwsf_is12_Parameter_GET_value(struct zxwsf_is12_Parameter_s* x) { return x->value; }
/* FUNC(zxwsf_is12_Parameter_PUT_value) */
void zxwsf_is12_Parameter_PUT_value(struct zxwsf_is12_Parameter_s* x, struct zx_str_s* y) { x->value = y; }





/* FUNC(zxwsf_is12_RedirectRequest_GET_redirectURL) */
struct zx_str_s* zxwsf_is12_RedirectRequest_GET_redirectURL(struct zxwsf_is12_RedirectRequest_s* x) { return x->redirectURL; }
/* FUNC(zxwsf_is12_RedirectRequest_PUT_redirectURL) */
void zxwsf_is12_RedirectRequest_PUT_redirectURL(struct zxwsf_is12_RedirectRequest_s* x, struct zx_str_s* y) { x->redirectURL = y; }





/* FUNC(zxwsf_is12_ResourceID_GET_id) */
struct zx_str_s* zxwsf_is12_ResourceID_GET_id(struct zxwsf_is12_ResourceID_s* x) { return x->id; }
/* FUNC(zxwsf_is12_ResourceID_PUT_id) */
void zxwsf_is12_ResourceID_PUT_id(struct zxwsf_is12_ResourceID_s* x, struct zx_str_s* y) { x->id = y; }







/* FUNC(zxwsf_is12_Select_NUM_Help) */

int zxwsf_is12_Select_NUM_Help(struct zxwsf_is12_Select_s* x)
{
  struct zxwsf_is12_Help_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Help; y; ++n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Select_GET_Help) */

struct zxwsf_is12_Help_s* zxwsf_is12_Select_GET_Help(struct zxwsf_is12_Select_s* x, int n)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return 0;
  for (y = x->Help; n>=0 && y; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Select_POP_Help) */

struct zxwsf_is12_Help_s* zxwsf_is12_Select_POP_Help(struct zxwsf_is12_Select_s* x)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return 0;
  y = x->Help;
  if (y)
    x->Help = (struct zxwsf_is12_Help_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Select_PUSH_Help) */

void zxwsf_is12_Select_PUSH_Help(struct zxwsf_is12_Select_s* x, struct zxwsf_is12_Help_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Help->gg.g;
  x->Help = z;
}

/* FUNC(zxwsf_is12_Select_REV_Help) */

void zxwsf_is12_Select_REV_Help(struct zxwsf_is12_Select_s* x)
{
  struct zxwsf_is12_Help_s* nxt;
  struct zxwsf_is12_Help_s* y;
  if (!x) return;
  y = x->Help;
  if (!y) return;
  x->Help = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Help_s*)y->gg.g.n;
    y->gg.g.n = &x->Help->gg.g;
    x->Help = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Select_PUT_Help) */

void zxwsf_is12_Select_PUT_Help(struct zxwsf_is12_Select_s* x, int n, struct zxwsf_is12_Help_s* z)
{
  struct zxwsf_is12_Help_s* y;
  if (!x || !z) return;
  y = x->Help;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Help = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Select_ADD_Help) */

void zxwsf_is12_Select_ADD_Help(struct zxwsf_is12_Select_s* x, int n, struct zxwsf_is12_Help_s* z)
{
  struct zxwsf_is12_Help_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Help->gg.g;
    x->Help = z;
    return;
  case -1:
    y = x->Help;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Select_DEL_Help) */

void zxwsf_is12_Select_DEL_Help(struct zxwsf_is12_Select_s* x, int n)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Help = (struct zxwsf_is12_Help_s*)x->Help->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Help_s*)x->Help;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_Select_NUM_Hint) */

int zxwsf_is12_Select_NUM_Hint(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Hint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Select_GET_Hint) */

struct zx_elem_s* zxwsf_is12_Select_GET_Hint(struct zxwsf_is12_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Hint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Select_POP_Hint) */

struct zx_elem_s* zxwsf_is12_Select_POP_Hint(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Hint;
  if (y)
    x->Hint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Select_PUSH_Hint) */

void zxwsf_is12_Select_PUSH_Hint(struct zxwsf_is12_Select_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Hint->g;
  x->Hint = z;
}

/* FUNC(zxwsf_is12_Select_REV_Hint) */

void zxwsf_is12_Select_REV_Hint(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Hint;
  if (!y) return;
  x->Hint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Hint->g;
    x->Hint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Select_PUT_Hint) */

void zxwsf_is12_Select_PUT_Hint(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Hint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Hint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Select_ADD_Hint) */

void zxwsf_is12_Select_ADD_Hint(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Hint->g;
    x->Hint = z;
    return;
  case -1:
    y = x->Hint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Select_DEL_Hint) */

void zxwsf_is12_Select_DEL_Hint(struct zxwsf_is12_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Hint = (struct zx_elem_s*)x->Hint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Hint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is12_Select_NUM_Label) */

int zxwsf_is12_Select_NUM_Label(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Label; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Select_GET_Label) */

struct zx_elem_s* zxwsf_is12_Select_GET_Label(struct zxwsf_is12_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Label; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Select_POP_Label) */

struct zx_elem_s* zxwsf_is12_Select_POP_Label(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Label;
  if (y)
    x->Label = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Select_PUSH_Label) */

void zxwsf_is12_Select_PUSH_Label(struct zxwsf_is12_Select_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Label->g;
  x->Label = z;
}

/* FUNC(zxwsf_is12_Select_REV_Label) */

void zxwsf_is12_Select_REV_Label(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Label;
  if (!y) return;
  x->Label = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Label->g;
    x->Label = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Select_PUT_Label) */

void zxwsf_is12_Select_PUT_Label(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Label;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Label = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Select_ADD_Label) */

void zxwsf_is12_Select_ADD_Label(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Label->g;
    x->Label = z;
    return;
  case -1:
    y = x->Label;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Select_DEL_Label) */

void zxwsf_is12_Select_DEL_Label(struct zxwsf_is12_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Label = (struct zx_elem_s*)x->Label->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Label;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is12_Select_NUM_Value) */

int zxwsf_is12_Select_NUM_Value(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Value; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Select_GET_Value) */

struct zx_elem_s* zxwsf_is12_Select_GET_Value(struct zxwsf_is12_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Value; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Select_POP_Value) */

struct zx_elem_s* zxwsf_is12_Select_POP_Value(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Value;
  if (y)
    x->Value = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Select_PUSH_Value) */

void zxwsf_is12_Select_PUSH_Value(struct zxwsf_is12_Select_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Value->g;
  x->Value = z;
}

/* FUNC(zxwsf_is12_Select_REV_Value) */

void zxwsf_is12_Select_REV_Value(struct zxwsf_is12_Select_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Value;
  if (!y) return;
  x->Value = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Value->g;
    x->Value = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Select_PUT_Value) */

void zxwsf_is12_Select_PUT_Value(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Value;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Value = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Select_ADD_Value) */

void zxwsf_is12_Select_ADD_Value(struct zxwsf_is12_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Value->g;
    x->Value = z;
    return;
  case -1:
    y = x->Value;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Select_DEL_Value) */

void zxwsf_is12_Select_DEL_Value(struct zxwsf_is12_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Value = (struct zx_elem_s*)x->Value->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Value;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is12_Select_GET_name) */
struct zx_str_s* zxwsf_is12_Select_GET_name(struct zxwsf_is12_Select_s* x) { return x->name; }
/* FUNC(zxwsf_is12_Select_PUT_name) */
void zxwsf_is12_Select_PUT_name(struct zxwsf_is12_Select_s* x, struct zx_str_s* y) { x->name = y; }


/* FUNC(zxwsf_is12_Select_NUM_Item) */

int zxwsf_is12_Select_NUM_Item(struct zxwsf_is12_Select_s* x)
{
  struct zxwsf_is12_Item_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Item; y; ++n, y = (struct zxwsf_is12_Item_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Select_GET_Item) */

struct zxwsf_is12_Item_s* zxwsf_is12_Select_GET_Item(struct zxwsf_is12_Select_s* x, int n)
{
  struct zxwsf_is12_Item_s* y;
  if (!x) return 0;
  for (y = x->Item; n>=0 && y; --n, y = (struct zxwsf_is12_Item_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Select_POP_Item) */

struct zxwsf_is12_Item_s* zxwsf_is12_Select_POP_Item(struct zxwsf_is12_Select_s* x)
{
  struct zxwsf_is12_Item_s* y;
  if (!x) return 0;
  y = x->Item;
  if (y)
    x->Item = (struct zxwsf_is12_Item_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Select_PUSH_Item) */

void zxwsf_is12_Select_PUSH_Item(struct zxwsf_is12_Select_s* x, struct zxwsf_is12_Item_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Item->gg.g;
  x->Item = z;
}

/* FUNC(zxwsf_is12_Select_REV_Item) */

void zxwsf_is12_Select_REV_Item(struct zxwsf_is12_Select_s* x)
{
  struct zxwsf_is12_Item_s* nxt;
  struct zxwsf_is12_Item_s* y;
  if (!x) return;
  y = x->Item;
  if (!y) return;
  x->Item = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Item_s*)y->gg.g.n;
    y->gg.g.n = &x->Item->gg.g;
    x->Item = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Select_PUT_Item) */

void zxwsf_is12_Select_PUT_Item(struct zxwsf_is12_Select_s* x, int n, struct zxwsf_is12_Item_s* z)
{
  struct zxwsf_is12_Item_s* y;
  if (!x || !z) return;
  y = x->Item;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Item = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Item_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Select_ADD_Item) */

void zxwsf_is12_Select_ADD_Item(struct zxwsf_is12_Select_s* x, int n, struct zxwsf_is12_Item_s* z)
{
  struct zxwsf_is12_Item_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Item->gg.g;
    x->Item = z;
    return;
  case -1:
    y = x->Item;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Item_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Item; n > 1 && y; --n, y = (struct zxwsf_is12_Item_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Select_DEL_Item) */

void zxwsf_is12_Select_DEL_Item(struct zxwsf_is12_Select_s* x, int n)
{
  struct zxwsf_is12_Item_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Item = (struct zxwsf_is12_Item_s*)x->Item->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Item_s*)x->Item;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Item_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Item; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Item_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_is12_Select_GET_multiple) */
struct zx_str_s* zxwsf_is12_Select_GET_multiple(struct zxwsf_is12_Select_s* x) { return x->multiple; }
/* FUNC(zxwsf_is12_Select_PUT_multiple) */
void zxwsf_is12_Select_PUT_multiple(struct zxwsf_is12_Select_s* x, struct zx_str_s* y) { x->multiple = y; }







/* FUNC(zxwsf_is12_Status_NUM_Status) */

int zxwsf_is12_Status_NUM_Status(struct zxwsf_is12_Status_s* x)
{
  struct zxwsf_is12_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Status_GET_Status) */

struct zxwsf_is12_Status_s* zxwsf_is12_Status_GET_Status(struct zxwsf_is12_Status_s* x, int n)
{
  struct zxwsf_is12_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Status_POP_Status) */

struct zxwsf_is12_Status_s* zxwsf_is12_Status_POP_Status(struct zxwsf_is12_Status_s* x)
{
  struct zxwsf_is12_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_is12_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Status_PUSH_Status) */

void zxwsf_is12_Status_PUSH_Status(struct zxwsf_is12_Status_s* x, struct zxwsf_is12_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_is12_Status_REV_Status) */

void zxwsf_is12_Status_REV_Status(struct zxwsf_is12_Status_s* x)
{
  struct zxwsf_is12_Status_s* nxt;
  struct zxwsf_is12_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Status_PUT_Status) */

void zxwsf_is12_Status_PUT_Status(struct zxwsf_is12_Status_s* x, int n, struct zxwsf_is12_Status_s* z)
{
  struct zxwsf_is12_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Status_ADD_Status) */

void zxwsf_is12_Status_ADD_Status(struct zxwsf_is12_Status_s* x, int n, struct zxwsf_is12_Status_s* z)
{
  struct zxwsf_is12_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Status_DEL_Status) */

void zxwsf_is12_Status_DEL_Status(struct zxwsf_is12_Status_s* x, int n)
{
  struct zxwsf_is12_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_is12_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_is12_Status_GET_code) */
struct zx_str_s* zxwsf_is12_Status_GET_code(struct zxwsf_is12_Status_s* x) { return x->code; }
/* FUNC(zxwsf_is12_Status_PUT_code) */
void zxwsf_is12_Status_PUT_code(struct zxwsf_is12_Status_s* x, struct zx_str_s* y) { x->code = y; }
/* FUNC(zxwsf_is12_Status_GET_ref) */
struct zx_str_s* zxwsf_is12_Status_GET_ref(struct zxwsf_is12_Status_s* x) { return x->ref; }
/* FUNC(zxwsf_is12_Status_PUT_ref) */
void zxwsf_is12_Status_PUT_ref(struct zxwsf_is12_Status_s* x, struct zx_str_s* y) { x->ref = y; }
/* FUNC(zxwsf_is12_Status_GET_comment) */
struct zx_str_s* zxwsf_is12_Status_GET_comment(struct zxwsf_is12_Status_s* x) { return x->comment; }
/* FUNC(zxwsf_is12_Status_PUT_comment) */
void zxwsf_is12_Status_PUT_comment(struct zxwsf_is12_Status_s* x, struct zx_str_s* y) { x->comment = y; }







/* FUNC(zxwsf_is12_Text_NUM_Help) */

int zxwsf_is12_Text_NUM_Help(struct zxwsf_is12_Text_s* x)
{
  struct zxwsf_is12_Help_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Help; y; ++n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Text_GET_Help) */

struct zxwsf_is12_Help_s* zxwsf_is12_Text_GET_Help(struct zxwsf_is12_Text_s* x, int n)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return 0;
  for (y = x->Help; n>=0 && y; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Text_POP_Help) */

struct zxwsf_is12_Help_s* zxwsf_is12_Text_POP_Help(struct zxwsf_is12_Text_s* x)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return 0;
  y = x->Help;
  if (y)
    x->Help = (struct zxwsf_is12_Help_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_Text_PUSH_Help) */

void zxwsf_is12_Text_PUSH_Help(struct zxwsf_is12_Text_s* x, struct zxwsf_is12_Help_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Help->gg.g;
  x->Help = z;
}

/* FUNC(zxwsf_is12_Text_REV_Help) */

void zxwsf_is12_Text_REV_Help(struct zxwsf_is12_Text_s* x)
{
  struct zxwsf_is12_Help_s* nxt;
  struct zxwsf_is12_Help_s* y;
  if (!x) return;
  y = x->Help;
  if (!y) return;
  x->Help = 0;
  while (y) {
    nxt = (struct zxwsf_is12_Help_s*)y->gg.g.n;
    y->gg.g.n = &x->Help->gg.g;
    x->Help = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Text_PUT_Help) */

void zxwsf_is12_Text_PUT_Help(struct zxwsf_is12_Text_s* x, int n, struct zxwsf_is12_Help_s* z)
{
  struct zxwsf_is12_Help_s* y;
  if (!x || !z) return;
  y = x->Help;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Help = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_Text_ADD_Help) */

void zxwsf_is12_Text_ADD_Help(struct zxwsf_is12_Text_s* x, int n, struct zxwsf_is12_Help_s* z)
{
  struct zxwsf_is12_Help_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Help->gg.g;
    x->Help = z;
    return;
  case -1:
    y = x->Help;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_Text_DEL_Help) */

void zxwsf_is12_Text_DEL_Help(struct zxwsf_is12_Text_s* x, int n)
{
  struct zxwsf_is12_Help_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Help = (struct zxwsf_is12_Help_s*)x->Help->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_Help_s*)x->Help;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is12_Text_NUM_Hint) */

int zxwsf_is12_Text_NUM_Hint(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Hint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Text_GET_Hint) */

struct zx_elem_s* zxwsf_is12_Text_GET_Hint(struct zxwsf_is12_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Hint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Text_POP_Hint) */

struct zx_elem_s* zxwsf_is12_Text_POP_Hint(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Hint;
  if (y)
    x->Hint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Text_PUSH_Hint) */

void zxwsf_is12_Text_PUSH_Hint(struct zxwsf_is12_Text_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Hint->g;
  x->Hint = z;
}

/* FUNC(zxwsf_is12_Text_REV_Hint) */

void zxwsf_is12_Text_REV_Hint(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Hint;
  if (!y) return;
  x->Hint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Hint->g;
    x->Hint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Text_PUT_Hint) */

void zxwsf_is12_Text_PUT_Hint(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Hint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Hint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Text_ADD_Hint) */

void zxwsf_is12_Text_ADD_Hint(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Hint->g;
    x->Hint = z;
    return;
  case -1:
    y = x->Hint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Text_DEL_Hint) */

void zxwsf_is12_Text_DEL_Hint(struct zxwsf_is12_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Hint = (struct zx_elem_s*)x->Hint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Hint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is12_Text_NUM_Label) */

int zxwsf_is12_Text_NUM_Label(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Label; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Text_GET_Label) */

struct zx_elem_s* zxwsf_is12_Text_GET_Label(struct zxwsf_is12_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Label; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Text_POP_Label) */

struct zx_elem_s* zxwsf_is12_Text_POP_Label(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Label;
  if (y)
    x->Label = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Text_PUSH_Label) */

void zxwsf_is12_Text_PUSH_Label(struct zxwsf_is12_Text_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Label->g;
  x->Label = z;
}

/* FUNC(zxwsf_is12_Text_REV_Label) */

void zxwsf_is12_Text_REV_Label(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Label;
  if (!y) return;
  x->Label = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Label->g;
    x->Label = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Text_PUT_Label) */

void zxwsf_is12_Text_PUT_Label(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Label;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Label = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Text_ADD_Label) */

void zxwsf_is12_Text_ADD_Label(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Label->g;
    x->Label = z;
    return;
  case -1:
    y = x->Label;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Text_DEL_Label) */

void zxwsf_is12_Text_DEL_Label(struct zxwsf_is12_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Label = (struct zx_elem_s*)x->Label->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Label;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is12_Text_NUM_Value) */

int zxwsf_is12_Text_NUM_Value(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Value; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_Text_GET_Value) */

struct zx_elem_s* zxwsf_is12_Text_GET_Value(struct zxwsf_is12_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Value; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_Text_POP_Value) */

struct zx_elem_s* zxwsf_is12_Text_POP_Value(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Value;
  if (y)
    x->Value = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is12_Text_PUSH_Value) */

void zxwsf_is12_Text_PUSH_Value(struct zxwsf_is12_Text_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Value->g;
  x->Value = z;
}

/* FUNC(zxwsf_is12_Text_REV_Value) */

void zxwsf_is12_Text_REV_Value(struct zxwsf_is12_Text_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Value;
  if (!y) return;
  x->Value = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Value->g;
    x->Value = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_Text_PUT_Value) */

void zxwsf_is12_Text_PUT_Value(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Value;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Value = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is12_Text_ADD_Value) */

void zxwsf_is12_Text_ADD_Value(struct zxwsf_is12_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Value->g;
    x->Value = z;
    return;
  case -1:
    y = x->Value;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is12_Text_DEL_Value) */

void zxwsf_is12_Text_DEL_Value(struct zxwsf_is12_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Value = (struct zx_elem_s*)x->Value->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Value;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is12_Text_GET_name) */
struct zx_str_s* zxwsf_is12_Text_GET_name(struct zxwsf_is12_Text_s* x) { return x->name; }
/* FUNC(zxwsf_is12_Text_PUT_name) */
void zxwsf_is12_Text_PUT_name(struct zxwsf_is12_Text_s* x, struct zx_str_s* y) { x->name = y; }
/* FUNC(zxwsf_is12_Text_GET_minChars) */
struct zx_str_s* zxwsf_is12_Text_GET_minChars(struct zxwsf_is12_Text_s* x) { return x->minChars; }
/* FUNC(zxwsf_is12_Text_PUT_minChars) */
void zxwsf_is12_Text_PUT_minChars(struct zxwsf_is12_Text_s* x, struct zx_str_s* y) { x->minChars = y; }
/* FUNC(zxwsf_is12_Text_GET_maxChars) */
struct zx_str_s* zxwsf_is12_Text_GET_maxChars(struct zxwsf_is12_Text_s* x) { return x->maxChars; }
/* FUNC(zxwsf_is12_Text_PUT_maxChars) */
void zxwsf_is12_Text_PUT_maxChars(struct zxwsf_is12_Text_s* x, struct zx_str_s* y) { x->maxChars = y; }
/* FUNC(zxwsf_is12_Text_GET_format) */
struct zx_str_s* zxwsf_is12_Text_GET_format(struct zxwsf_is12_Text_s* x) { return x->format; }
/* FUNC(zxwsf_is12_Text_PUT_format) */
void zxwsf_is12_Text_PUT_format(struct zxwsf_is12_Text_s* x, struct zx_str_s* y) { x->format = y; }







/* FUNC(zxwsf_is12_UserInteraction_NUM_InteractionService) */

int zxwsf_is12_UserInteraction_NUM_InteractionService(struct zxwsf_is12_UserInteraction_s* x)
{
  struct zxwsf_is12_InteractionService_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InteractionService; y; ++n, y = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is12_UserInteraction_GET_InteractionService) */

struct zxwsf_is12_InteractionService_s* zxwsf_is12_UserInteraction_GET_InteractionService(struct zxwsf_is12_UserInteraction_s* x, int n)
{
  struct zxwsf_is12_InteractionService_s* y;
  if (!x) return 0;
  for (y = x->InteractionService; n>=0 && y; --n, y = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is12_UserInteraction_POP_InteractionService) */

struct zxwsf_is12_InteractionService_s* zxwsf_is12_UserInteraction_POP_InteractionService(struct zxwsf_is12_UserInteraction_s* x)
{
  struct zxwsf_is12_InteractionService_s* y;
  if (!x) return 0;
  y = x->InteractionService;
  if (y)
    x->InteractionService = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is12_UserInteraction_PUSH_InteractionService) */

void zxwsf_is12_UserInteraction_PUSH_InteractionService(struct zxwsf_is12_UserInteraction_s* x, struct zxwsf_is12_InteractionService_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InteractionService->gg.g;
  x->InteractionService = z;
}

/* FUNC(zxwsf_is12_UserInteraction_REV_InteractionService) */

void zxwsf_is12_UserInteraction_REV_InteractionService(struct zxwsf_is12_UserInteraction_s* x)
{
  struct zxwsf_is12_InteractionService_s* nxt;
  struct zxwsf_is12_InteractionService_s* y;
  if (!x) return;
  y = x->InteractionService;
  if (!y) return;
  x->InteractionService = 0;
  while (y) {
    nxt = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n;
    y->gg.g.n = &x->InteractionService->gg.g;
    x->InteractionService = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is12_UserInteraction_PUT_InteractionService) */

void zxwsf_is12_UserInteraction_PUT_InteractionService(struct zxwsf_is12_UserInteraction_s* x, int n, struct zxwsf_is12_InteractionService_s* z)
{
  struct zxwsf_is12_InteractionService_s* y;
  if (!x || !z) return;
  y = x->InteractionService;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InteractionService = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is12_UserInteraction_ADD_InteractionService) */

void zxwsf_is12_UserInteraction_ADD_InteractionService(struct zxwsf_is12_UserInteraction_s* x, int n, struct zxwsf_is12_InteractionService_s* z)
{
  struct zxwsf_is12_InteractionService_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->InteractionService->gg.g;
    x->InteractionService = z;
    return;
  case -1:
    y = x->InteractionService;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InteractionService; n > 1 && y; --n, y = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is12_UserInteraction_DEL_InteractionService) */

void zxwsf_is12_UserInteraction_DEL_InteractionService(struct zxwsf_is12_UserInteraction_s* x, int n)
{
  struct zxwsf_is12_InteractionService_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InteractionService = (struct zxwsf_is12_InteractionService_s*)x->InteractionService->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is12_InteractionService_s*)x->InteractionService;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InteractionService; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is12_InteractionService_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_is12_UserInteraction_GET_id) */
struct zx_str_s* zxwsf_is12_UserInteraction_GET_id(struct zxwsf_is12_UserInteraction_s* x) { return x->id; }
/* FUNC(zxwsf_is12_UserInteraction_PUT_id) */
void zxwsf_is12_UserInteraction_PUT_id(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_is12_UserInteraction_GET_interact) */
struct zx_str_s* zxwsf_is12_UserInteraction_GET_interact(struct zxwsf_is12_UserInteraction_s* x) { return x->interact; }
/* FUNC(zxwsf_is12_UserInteraction_PUT_interact) */
void zxwsf_is12_UserInteraction_PUT_interact(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y) { x->interact = y; }
/* FUNC(zxwsf_is12_UserInteraction_GET_language) */
struct zx_str_s* zxwsf_is12_UserInteraction_GET_language(struct zxwsf_is12_UserInteraction_s* x) { return x->language; }
/* FUNC(zxwsf_is12_UserInteraction_PUT_language) */
void zxwsf_is12_UserInteraction_PUT_language(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y) { x->language = y; }
/* FUNC(zxwsf_is12_UserInteraction_GET_redirect) */
struct zx_str_s* zxwsf_is12_UserInteraction_GET_redirect(struct zxwsf_is12_UserInteraction_s* x) { return x->redirect; }
/* FUNC(zxwsf_is12_UserInteraction_PUT_redirect) */
void zxwsf_is12_UserInteraction_PUT_redirect(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y) { x->redirect = y; }
/* FUNC(zxwsf_is12_UserInteraction_GET_maxInteractTime) */
struct zx_str_s* zxwsf_is12_UserInteraction_GET_maxInteractTime(struct zxwsf_is12_UserInteraction_s* x) { return x->maxInteractTime; }
/* FUNC(zxwsf_is12_UserInteraction_PUT_maxInteractTime) */
void zxwsf_is12_UserInteraction_PUT_maxInteractTime(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y) { x->maxInteractTime = y; }
/* FUNC(zxwsf_is12_UserInteraction_GET_actor) */
struct zx_str_s* zxwsf_is12_UserInteraction_GET_actor(struct zxwsf_is12_UserInteraction_s* x) { return x->actor; }
/* FUNC(zxwsf_is12_UserInteraction_PUT_actor) */
void zxwsf_is12_UserInteraction_PUT_actor(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y) { x->actor = y; }
/* FUNC(zxwsf_is12_UserInteraction_GET_mustUnderstand) */
struct zx_str_s* zxwsf_is12_UserInteraction_GET_mustUnderstand(struct zxwsf_is12_UserInteraction_s* x) { return x->mustUnderstand; }
/* FUNC(zxwsf_is12_UserInteraction_PUT_mustUnderstand) */
void zxwsf_is12_UserInteraction_PUT_mustUnderstand(struct zxwsf_is12_UserInteraction_s* x, struct zx_str_s* y) { x->mustUnderstand = y; }







/* FUNC(zxwsf_is_Confirm_NUM_Help) */

int zxwsf_is_Confirm_NUM_Help(struct zxwsf_is_Confirm_s* x)
{
  struct zxwsf_is_Help_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Help; y; ++n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Confirm_GET_Help) */

struct zxwsf_is_Help_s* zxwsf_is_Confirm_GET_Help(struct zxwsf_is_Confirm_s* x, int n)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return 0;
  for (y = x->Help; n>=0 && y; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Confirm_POP_Help) */

struct zxwsf_is_Help_s* zxwsf_is_Confirm_POP_Help(struct zxwsf_is_Confirm_s* x)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return 0;
  y = x->Help;
  if (y)
    x->Help = (struct zxwsf_is_Help_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_Confirm_PUSH_Help) */

void zxwsf_is_Confirm_PUSH_Help(struct zxwsf_is_Confirm_s* x, struct zxwsf_is_Help_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Help->gg.g;
  x->Help = z;
}

/* FUNC(zxwsf_is_Confirm_REV_Help) */

void zxwsf_is_Confirm_REV_Help(struct zxwsf_is_Confirm_s* x)
{
  struct zxwsf_is_Help_s* nxt;
  struct zxwsf_is_Help_s* y;
  if (!x) return;
  y = x->Help;
  if (!y) return;
  x->Help = 0;
  while (y) {
    nxt = (struct zxwsf_is_Help_s*)y->gg.g.n;
    y->gg.g.n = &x->Help->gg.g;
    x->Help = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Confirm_PUT_Help) */

void zxwsf_is_Confirm_PUT_Help(struct zxwsf_is_Confirm_s* x, int n, struct zxwsf_is_Help_s* z)
{
  struct zxwsf_is_Help_s* y;
  if (!x || !z) return;
  y = x->Help;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Help = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_Confirm_ADD_Help) */

void zxwsf_is_Confirm_ADD_Help(struct zxwsf_is_Confirm_s* x, int n, struct zxwsf_is_Help_s* z)
{
  struct zxwsf_is_Help_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Help->gg.g;
    x->Help = z;
    return;
  case -1:
    y = x->Help;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_Confirm_DEL_Help) */

void zxwsf_is_Confirm_DEL_Help(struct zxwsf_is_Confirm_s* x, int n)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Help = (struct zxwsf_is_Help_s*)x->Help->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Help_s*)x->Help;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_Confirm_NUM_Hint) */

int zxwsf_is_Confirm_NUM_Hint(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Hint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Confirm_GET_Hint) */

struct zx_elem_s* zxwsf_is_Confirm_GET_Hint(struct zxwsf_is_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Hint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Confirm_POP_Hint) */

struct zx_elem_s* zxwsf_is_Confirm_POP_Hint(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Hint;
  if (y)
    x->Hint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Confirm_PUSH_Hint) */

void zxwsf_is_Confirm_PUSH_Hint(struct zxwsf_is_Confirm_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Hint->g;
  x->Hint = z;
}

/* FUNC(zxwsf_is_Confirm_REV_Hint) */

void zxwsf_is_Confirm_REV_Hint(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Hint;
  if (!y) return;
  x->Hint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Hint->g;
    x->Hint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Confirm_PUT_Hint) */

void zxwsf_is_Confirm_PUT_Hint(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Hint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Hint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Confirm_ADD_Hint) */

void zxwsf_is_Confirm_ADD_Hint(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Hint->g;
    x->Hint = z;
    return;
  case -1:
    y = x->Hint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Confirm_DEL_Hint) */

void zxwsf_is_Confirm_DEL_Hint(struct zxwsf_is_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Hint = (struct zx_elem_s*)x->Hint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Hint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is_Confirm_NUM_Label) */

int zxwsf_is_Confirm_NUM_Label(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Label; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Confirm_GET_Label) */

struct zx_elem_s* zxwsf_is_Confirm_GET_Label(struct zxwsf_is_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Label; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Confirm_POP_Label) */

struct zx_elem_s* zxwsf_is_Confirm_POP_Label(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Label;
  if (y)
    x->Label = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Confirm_PUSH_Label) */

void zxwsf_is_Confirm_PUSH_Label(struct zxwsf_is_Confirm_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Label->g;
  x->Label = z;
}

/* FUNC(zxwsf_is_Confirm_REV_Label) */

void zxwsf_is_Confirm_REV_Label(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Label;
  if (!y) return;
  x->Label = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Label->g;
    x->Label = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Confirm_PUT_Label) */

void zxwsf_is_Confirm_PUT_Label(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Label;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Label = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Confirm_ADD_Label) */

void zxwsf_is_Confirm_ADD_Label(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Label->g;
    x->Label = z;
    return;
  case -1:
    y = x->Label;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Confirm_DEL_Label) */

void zxwsf_is_Confirm_DEL_Label(struct zxwsf_is_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Label = (struct zx_elem_s*)x->Label->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Label;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is_Confirm_NUM_Value) */

int zxwsf_is_Confirm_NUM_Value(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Value; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Confirm_GET_Value) */

struct zx_elem_s* zxwsf_is_Confirm_GET_Value(struct zxwsf_is_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Value; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Confirm_POP_Value) */

struct zx_elem_s* zxwsf_is_Confirm_POP_Value(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Value;
  if (y)
    x->Value = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Confirm_PUSH_Value) */

void zxwsf_is_Confirm_PUSH_Value(struct zxwsf_is_Confirm_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Value->g;
  x->Value = z;
}

/* FUNC(zxwsf_is_Confirm_REV_Value) */

void zxwsf_is_Confirm_REV_Value(struct zxwsf_is_Confirm_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Value;
  if (!y) return;
  x->Value = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Value->g;
    x->Value = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Confirm_PUT_Value) */

void zxwsf_is_Confirm_PUT_Value(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Value;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Value = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Confirm_ADD_Value) */

void zxwsf_is_Confirm_ADD_Value(struct zxwsf_is_Confirm_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Value->g;
    x->Value = z;
    return;
  case -1:
    y = x->Value;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Confirm_DEL_Value) */

void zxwsf_is_Confirm_DEL_Value(struct zxwsf_is_Confirm_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Value = (struct zx_elem_s*)x->Value->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Value;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is_Confirm_GET_name) */
struct zx_str_s* zxwsf_is_Confirm_GET_name(struct zxwsf_is_Confirm_s* x) { return x->name; }
/* FUNC(zxwsf_is_Confirm_PUT_name) */
void zxwsf_is_Confirm_PUT_name(struct zxwsf_is_Confirm_s* x, struct zx_str_s* y) { x->name = y; }





/* FUNC(zxwsf_is_Help_GET_label) */
struct zx_str_s* zxwsf_is_Help_GET_label(struct zxwsf_is_Help_s* x) { return x->label; }
/* FUNC(zxwsf_is_Help_PUT_label) */
void zxwsf_is_Help_PUT_label(struct zxwsf_is_Help_s* x, struct zx_str_s* y) { x->label = y; }
/* FUNC(zxwsf_is_Help_GET_link) */
struct zx_str_s* zxwsf_is_Help_GET_link(struct zxwsf_is_Help_s* x) { return x->link; }
/* FUNC(zxwsf_is_Help_PUT_link) */
void zxwsf_is_Help_PUT_link(struct zxwsf_is_Help_s* x, struct zx_str_s* y) { x->link = y; }
/* FUNC(zxwsf_is_Help_GET_moreLink) */
struct zx_str_s* zxwsf_is_Help_GET_moreLink(struct zxwsf_is_Help_s* x) { return x->moreLink; }
/* FUNC(zxwsf_is_Help_PUT_moreLink) */
void zxwsf_is_Help_PUT_moreLink(struct zxwsf_is_Help_s* x, struct zx_str_s* y) { x->moreLink = y; }







/* FUNC(zxwsf_is_Inquiry_NUM_Help) */

int zxwsf_is_Inquiry_NUM_Help(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Help_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Help; y; ++n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Inquiry_GET_Help) */

struct zxwsf_is_Help_s* zxwsf_is_Inquiry_GET_Help(struct zxwsf_is_Inquiry_s* x, int n)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return 0;
  for (y = x->Help; n>=0 && y; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Inquiry_POP_Help) */

struct zxwsf_is_Help_s* zxwsf_is_Inquiry_POP_Help(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return 0;
  y = x->Help;
  if (y)
    x->Help = (struct zxwsf_is_Help_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_Inquiry_PUSH_Help) */

void zxwsf_is_Inquiry_PUSH_Help(struct zxwsf_is_Inquiry_s* x, struct zxwsf_is_Help_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Help->gg.g;
  x->Help = z;
}

/* FUNC(zxwsf_is_Inquiry_REV_Help) */

void zxwsf_is_Inquiry_REV_Help(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Help_s* nxt;
  struct zxwsf_is_Help_s* y;
  if (!x) return;
  y = x->Help;
  if (!y) return;
  x->Help = 0;
  while (y) {
    nxt = (struct zxwsf_is_Help_s*)y->gg.g.n;
    y->gg.g.n = &x->Help->gg.g;
    x->Help = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Inquiry_PUT_Help) */

void zxwsf_is_Inquiry_PUT_Help(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Help_s* z)
{
  struct zxwsf_is_Help_s* y;
  if (!x || !z) return;
  y = x->Help;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Help = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_Inquiry_ADD_Help) */

void zxwsf_is_Inquiry_ADD_Help(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Help_s* z)
{
  struct zxwsf_is_Help_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Help->gg.g;
    x->Help = z;
    return;
  case -1:
    y = x->Help;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_Inquiry_DEL_Help) */

void zxwsf_is_Inquiry_DEL_Help(struct zxwsf_is_Inquiry_s* x, int n)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Help = (struct zxwsf_is_Help_s*)x->Help->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Help_s*)x->Help;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_Inquiry_NUM_Select) */

int zxwsf_is_Inquiry_NUM_Select(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Select_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zxwsf_is_Select_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Inquiry_GET_Select) */

struct zxwsf_is_Select_s* zxwsf_is_Inquiry_GET_Select(struct zxwsf_is_Inquiry_s* x, int n)
{
  struct zxwsf_is_Select_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zxwsf_is_Select_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Inquiry_POP_Select) */

struct zxwsf_is_Select_s* zxwsf_is_Inquiry_POP_Select(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Select_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zxwsf_is_Select_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_Inquiry_PUSH_Select) */

void zxwsf_is_Inquiry_PUSH_Select(struct zxwsf_is_Inquiry_s* x, struct zxwsf_is_Select_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Select->gg.g;
  x->Select = z;
}

/* FUNC(zxwsf_is_Inquiry_REV_Select) */

void zxwsf_is_Inquiry_REV_Select(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Select_s* nxt;
  struct zxwsf_is_Select_s* y;
  if (!x) return;
  y = x->Select;
  if (!y) return;
  x->Select = 0;
  while (y) {
    nxt = (struct zxwsf_is_Select_s*)y->gg.g.n;
    y->gg.g.n = &x->Select->gg.g;
    x->Select = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Inquiry_PUT_Select) */

void zxwsf_is_Inquiry_PUT_Select(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Select_s* z)
{
  struct zxwsf_is_Select_s* y;
  if (!x || !z) return;
  y = x->Select;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Select = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Select_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_Inquiry_ADD_Select) */

void zxwsf_is_Inquiry_ADD_Select(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Select_s* z)
{
  struct zxwsf_is_Select_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Select->gg.g;
    x->Select = z;
    return;
  case -1:
    y = x->Select;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Select_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y; --n, y = (struct zxwsf_is_Select_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_Inquiry_DEL_Select) */

void zxwsf_is_Inquiry_DEL_Select(struct zxwsf_is_Inquiry_s* x, int n)
{
  struct zxwsf_is_Select_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Select = (struct zxwsf_is_Select_s*)x->Select->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Select_s*)x->Select;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Select_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Select_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_Inquiry_NUM_Confirm) */

int zxwsf_is_Inquiry_NUM_Confirm(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Confirm_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Confirm; y; ++n, y = (struct zxwsf_is_Confirm_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Inquiry_GET_Confirm) */

struct zxwsf_is_Confirm_s* zxwsf_is_Inquiry_GET_Confirm(struct zxwsf_is_Inquiry_s* x, int n)
{
  struct zxwsf_is_Confirm_s* y;
  if (!x) return 0;
  for (y = x->Confirm; n>=0 && y; --n, y = (struct zxwsf_is_Confirm_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Inquiry_POP_Confirm) */

struct zxwsf_is_Confirm_s* zxwsf_is_Inquiry_POP_Confirm(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Confirm_s* y;
  if (!x) return 0;
  y = x->Confirm;
  if (y)
    x->Confirm = (struct zxwsf_is_Confirm_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_Inquiry_PUSH_Confirm) */

void zxwsf_is_Inquiry_PUSH_Confirm(struct zxwsf_is_Inquiry_s* x, struct zxwsf_is_Confirm_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Confirm->gg.g;
  x->Confirm = z;
}

/* FUNC(zxwsf_is_Inquiry_REV_Confirm) */

void zxwsf_is_Inquiry_REV_Confirm(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Confirm_s* nxt;
  struct zxwsf_is_Confirm_s* y;
  if (!x) return;
  y = x->Confirm;
  if (!y) return;
  x->Confirm = 0;
  while (y) {
    nxt = (struct zxwsf_is_Confirm_s*)y->gg.g.n;
    y->gg.g.n = &x->Confirm->gg.g;
    x->Confirm = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Inquiry_PUT_Confirm) */

void zxwsf_is_Inquiry_PUT_Confirm(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Confirm_s* z)
{
  struct zxwsf_is_Confirm_s* y;
  if (!x || !z) return;
  y = x->Confirm;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Confirm = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Confirm_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_Inquiry_ADD_Confirm) */

void zxwsf_is_Inquiry_ADD_Confirm(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Confirm_s* z)
{
  struct zxwsf_is_Confirm_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Confirm->gg.g;
    x->Confirm = z;
    return;
  case -1:
    y = x->Confirm;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Confirm_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Confirm; n > 1 && y; --n, y = (struct zxwsf_is_Confirm_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_Inquiry_DEL_Confirm) */

void zxwsf_is_Inquiry_DEL_Confirm(struct zxwsf_is_Inquiry_s* x, int n)
{
  struct zxwsf_is_Confirm_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Confirm = (struct zxwsf_is_Confirm_s*)x->Confirm->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Confirm_s*)x->Confirm;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Confirm_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Confirm; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Confirm_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_Inquiry_NUM_Text) */

int zxwsf_is_Inquiry_NUM_Text(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Text_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Text; y; ++n, y = (struct zxwsf_is_Text_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Inquiry_GET_Text) */

struct zxwsf_is_Text_s* zxwsf_is_Inquiry_GET_Text(struct zxwsf_is_Inquiry_s* x, int n)
{
  struct zxwsf_is_Text_s* y;
  if (!x) return 0;
  for (y = x->Text; n>=0 && y; --n, y = (struct zxwsf_is_Text_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Inquiry_POP_Text) */

struct zxwsf_is_Text_s* zxwsf_is_Inquiry_POP_Text(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Text_s* y;
  if (!x) return 0;
  y = x->Text;
  if (y)
    x->Text = (struct zxwsf_is_Text_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_Inquiry_PUSH_Text) */

void zxwsf_is_Inquiry_PUSH_Text(struct zxwsf_is_Inquiry_s* x, struct zxwsf_is_Text_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Text->gg.g;
  x->Text = z;
}

/* FUNC(zxwsf_is_Inquiry_REV_Text) */

void zxwsf_is_Inquiry_REV_Text(struct zxwsf_is_Inquiry_s* x)
{
  struct zxwsf_is_Text_s* nxt;
  struct zxwsf_is_Text_s* y;
  if (!x) return;
  y = x->Text;
  if (!y) return;
  x->Text = 0;
  while (y) {
    nxt = (struct zxwsf_is_Text_s*)y->gg.g.n;
    y->gg.g.n = &x->Text->gg.g;
    x->Text = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Inquiry_PUT_Text) */

void zxwsf_is_Inquiry_PUT_Text(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Text_s* z)
{
  struct zxwsf_is_Text_s* y;
  if (!x || !z) return;
  y = x->Text;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Text = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Text_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_Inquiry_ADD_Text) */

void zxwsf_is_Inquiry_ADD_Text(struct zxwsf_is_Inquiry_s* x, int n, struct zxwsf_is_Text_s* z)
{
  struct zxwsf_is_Text_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Text->gg.g;
    x->Text = z;
    return;
  case -1:
    y = x->Text;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Text_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Text; n > 1 && y; --n, y = (struct zxwsf_is_Text_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_Inquiry_DEL_Text) */

void zxwsf_is_Inquiry_DEL_Text(struct zxwsf_is_Inquiry_s* x, int n)
{
  struct zxwsf_is_Text_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Text = (struct zxwsf_is_Text_s*)x->Text->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Text_s*)x->Text;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Text_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Text; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Text_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_is_Inquiry_GET_id) */
struct zx_str_s* zxwsf_is_Inquiry_GET_id(struct zxwsf_is_Inquiry_s* x) { return x->id; }
/* FUNC(zxwsf_is_Inquiry_PUT_id) */
void zxwsf_is_Inquiry_PUT_id(struct zxwsf_is_Inquiry_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_is_Inquiry_GET_title) */
struct zx_str_s* zxwsf_is_Inquiry_GET_title(struct zxwsf_is_Inquiry_s* x) { return x->title; }
/* FUNC(zxwsf_is_Inquiry_PUT_title) */
void zxwsf_is_Inquiry_PUT_title(struct zxwsf_is_Inquiry_s* x, struct zx_str_s* y) { x->title = y; }







/* FUNC(zxwsf_is_InteractionRequest_NUM_Inquiry) */

int zxwsf_is_InteractionRequest_NUM_Inquiry(struct zxwsf_is_InteractionRequest_s* x)
{
  struct zxwsf_is_Inquiry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Inquiry; y; ++n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_InteractionRequest_GET_Inquiry) */

struct zxwsf_is_Inquiry_s* zxwsf_is_InteractionRequest_GET_Inquiry(struct zxwsf_is_InteractionRequest_s* x, int n)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x) return 0;
  for (y = x->Inquiry; n>=0 && y; --n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_InteractionRequest_POP_Inquiry) */

struct zxwsf_is_Inquiry_s* zxwsf_is_InteractionRequest_POP_Inquiry(struct zxwsf_is_InteractionRequest_s* x)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x) return 0;
  y = x->Inquiry;
  if (y)
    x->Inquiry = (struct zxwsf_is_Inquiry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_InteractionRequest_PUSH_Inquiry) */

void zxwsf_is_InteractionRequest_PUSH_Inquiry(struct zxwsf_is_InteractionRequest_s* x, struct zxwsf_is_Inquiry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Inquiry->gg.g;
  x->Inquiry = z;
}

/* FUNC(zxwsf_is_InteractionRequest_REV_Inquiry) */

void zxwsf_is_InteractionRequest_REV_Inquiry(struct zxwsf_is_InteractionRequest_s* x)
{
  struct zxwsf_is_Inquiry_s* nxt;
  struct zxwsf_is_Inquiry_s* y;
  if (!x) return;
  y = x->Inquiry;
  if (!y) return;
  x->Inquiry = 0;
  while (y) {
    nxt = (struct zxwsf_is_Inquiry_s*)y->gg.g.n;
    y->gg.g.n = &x->Inquiry->gg.g;
    x->Inquiry = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_InteractionRequest_PUT_Inquiry) */

void zxwsf_is_InteractionRequest_PUT_Inquiry(struct zxwsf_is_InteractionRequest_s* x, int n, struct zxwsf_is_Inquiry_s* z)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x || !z) return;
  y = x->Inquiry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Inquiry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_InteractionRequest_ADD_Inquiry) */

void zxwsf_is_InteractionRequest_ADD_Inquiry(struct zxwsf_is_InteractionRequest_s* x, int n, struct zxwsf_is_Inquiry_s* z)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Inquiry->gg.g;
    x->Inquiry = z;
    return;
  case -1:
    y = x->Inquiry;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Inquiry; n > 1 && y; --n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_InteractionRequest_DEL_Inquiry) */

void zxwsf_is_InteractionRequest_DEL_Inquiry(struct zxwsf_is_InteractionRequest_s* x, int n)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Inquiry = (struct zxwsf_is_Inquiry_s*)x->Inquiry->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Inquiry_s*)x->Inquiry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Inquiry; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_InteractionRequest_NUM_KeyInfo) */

int zxwsf_is_InteractionRequest_NUM_KeyInfo(struct zxwsf_is_InteractionRequest_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyInfo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_InteractionRequest_GET_KeyInfo) */

struct zx_elem_s* zxwsf_is_InteractionRequest_GET_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyInfo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_InteractionRequest_POP_KeyInfo) */

struct zx_elem_s* zxwsf_is_InteractionRequest_POP_KeyInfo(struct zxwsf_is_InteractionRequest_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyInfo;
  if (y)
    x->KeyInfo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_InteractionRequest_PUSH_KeyInfo) */

void zxwsf_is_InteractionRequest_PUSH_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyInfo->g;
  x->KeyInfo = z;
}

/* FUNC(zxwsf_is_InteractionRequest_REV_KeyInfo) */

void zxwsf_is_InteractionRequest_REV_KeyInfo(struct zxwsf_is_InteractionRequest_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyInfo;
  if (!y) return;
  x->KeyInfo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyInfo->g;
    x->KeyInfo = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_InteractionRequest_PUT_KeyInfo) */

void zxwsf_is_InteractionRequest_PUT_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyInfo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_InteractionRequest_ADD_KeyInfo) */

void zxwsf_is_InteractionRequest_ADD_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyInfo->g;
    x->KeyInfo = z;
    return;
  case -1:
    y = x->KeyInfo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_InteractionRequest_DEL_KeyInfo) */

void zxwsf_is_InteractionRequest_DEL_KeyInfo(struct zxwsf_is_InteractionRequest_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyInfo = (struct zx_elem_s*)x->KeyInfo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyInfo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyInfo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is_InteractionRequest_GET_id) */
struct zx_str_s* zxwsf_is_InteractionRequest_GET_id(struct zxwsf_is_InteractionRequest_s* x) { return x->id; }
/* FUNC(zxwsf_is_InteractionRequest_PUT_id) */
void zxwsf_is_InteractionRequest_PUT_id(struct zxwsf_is_InteractionRequest_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_is_InteractionRequest_GET_language) */
struct zx_str_s* zxwsf_is_InteractionRequest_GET_language(struct zxwsf_is_InteractionRequest_s* x) { return x->language; }
/* FUNC(zxwsf_is_InteractionRequest_PUT_language) */
void zxwsf_is_InteractionRequest_PUT_language(struct zxwsf_is_InteractionRequest_s* x, struct zx_str_s* y) { x->language = y; }
/* FUNC(zxwsf_is_InteractionRequest_GET_maxInteractTime) */
struct zx_str_s* zxwsf_is_InteractionRequest_GET_maxInteractTime(struct zxwsf_is_InteractionRequest_s* x) { return x->maxInteractTime; }
/* FUNC(zxwsf_is_InteractionRequest_PUT_maxInteractTime) */
void zxwsf_is_InteractionRequest_PUT_maxInteractTime(struct zxwsf_is_InteractionRequest_s* x, struct zx_str_s* y) { x->maxInteractTime = y; }
/* FUNC(zxwsf_is_InteractionRequest_GET_signed_is_c_keyword) */
struct zx_str_s* zxwsf_is_InteractionRequest_GET_signed_is_c_keyword(struct zxwsf_is_InteractionRequest_s* x) { return x->signed_is_c_keyword; }
/* FUNC(zxwsf_is_InteractionRequest_PUT_signed_is_c_keyword) */
void zxwsf_is_InteractionRequest_PUT_signed_is_c_keyword(struct zxwsf_is_InteractionRequest_s* x, struct zx_str_s* y) { x->signed_is_c_keyword = y; }







/* FUNC(zxwsf_is_InteractionResponse_NUM_Status) */

int zxwsf_is_InteractionResponse_NUM_Status(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_InteractionResponse_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_is_InteractionResponse_GET_Status(struct zxwsf_is_InteractionResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_InteractionResponse_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_is_InteractionResponse_POP_Status(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_InteractionResponse_PUSH_Status) */

void zxwsf_is_InteractionResponse_PUSH_Status(struct zxwsf_is_InteractionResponse_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_is_InteractionResponse_REV_Status) */

void zxwsf_is_InteractionResponse_REV_Status(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_InteractionResponse_PUT_Status) */

void zxwsf_is_InteractionResponse_PUT_Status(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_InteractionResponse_ADD_Status) */

void zxwsf_is_InteractionResponse_ADD_Status(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_InteractionResponse_DEL_Status) */

void zxwsf_is_InteractionResponse_DEL_Status(struct zxwsf_is_InteractionResponse_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_InteractionResponse_NUM_InteractionStatement) */

int zxwsf_is_InteractionResponse_NUM_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_is_InteractionStatement_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InteractionStatement; y; ++n, y = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_InteractionResponse_GET_InteractionStatement) */

struct zxwsf_is_InteractionStatement_s* zxwsf_is_InteractionResponse_GET_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, int n)
{
  struct zxwsf_is_InteractionStatement_s* y;
  if (!x) return 0;
  for (y = x->InteractionStatement; n>=0 && y; --n, y = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_InteractionResponse_POP_InteractionStatement) */

struct zxwsf_is_InteractionStatement_s* zxwsf_is_InteractionResponse_POP_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_is_InteractionStatement_s* y;
  if (!x) return 0;
  y = x->InteractionStatement;
  if (y)
    x->InteractionStatement = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_InteractionResponse_PUSH_InteractionStatement) */

void zxwsf_is_InteractionResponse_PUSH_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, struct zxwsf_is_InteractionStatement_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InteractionStatement->gg.g;
  x->InteractionStatement = z;
}

/* FUNC(zxwsf_is_InteractionResponse_REV_InteractionStatement) */

void zxwsf_is_InteractionResponse_REV_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_is_InteractionStatement_s* nxt;
  struct zxwsf_is_InteractionStatement_s* y;
  if (!x) return;
  y = x->InteractionStatement;
  if (!y) return;
  x->InteractionStatement = 0;
  while (y) {
    nxt = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n;
    y->gg.g.n = &x->InteractionStatement->gg.g;
    x->InteractionStatement = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_InteractionResponse_PUT_InteractionStatement) */

void zxwsf_is_InteractionResponse_PUT_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_is_InteractionStatement_s* z)
{
  struct zxwsf_is_InteractionStatement_s* y;
  if (!x || !z) return;
  y = x->InteractionStatement;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InteractionStatement = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_InteractionResponse_ADD_InteractionStatement) */

void zxwsf_is_InteractionResponse_ADD_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_is_InteractionStatement_s* z)
{
  struct zxwsf_is_InteractionStatement_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->InteractionStatement->gg.g;
    x->InteractionStatement = z;
    return;
  case -1:
    y = x->InteractionStatement;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InteractionStatement; n > 1 && y; --n, y = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_InteractionResponse_DEL_InteractionStatement) */

void zxwsf_is_InteractionResponse_DEL_InteractionStatement(struct zxwsf_is_InteractionResponse_s* x, int n)
{
  struct zxwsf_is_InteractionStatement_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InteractionStatement = (struct zxwsf_is_InteractionStatement_s*)x->InteractionStatement->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_InteractionStatement_s*)x->InteractionStatement;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InteractionStatement; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_InteractionStatement_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_InteractionResponse_NUM_Parameter) */

int zxwsf_is_InteractionResponse_NUM_Parameter(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_is_Parameter_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Parameter; y; ++n, y = (struct zxwsf_is_Parameter_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_InteractionResponse_GET_Parameter) */

struct zxwsf_is_Parameter_s* zxwsf_is_InteractionResponse_GET_Parameter(struct zxwsf_is_InteractionResponse_s* x, int n)
{
  struct zxwsf_is_Parameter_s* y;
  if (!x) return 0;
  for (y = x->Parameter; n>=0 && y; --n, y = (struct zxwsf_is_Parameter_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_InteractionResponse_POP_Parameter) */

struct zxwsf_is_Parameter_s* zxwsf_is_InteractionResponse_POP_Parameter(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_is_Parameter_s* y;
  if (!x) return 0;
  y = x->Parameter;
  if (y)
    x->Parameter = (struct zxwsf_is_Parameter_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_InteractionResponse_PUSH_Parameter) */

void zxwsf_is_InteractionResponse_PUSH_Parameter(struct zxwsf_is_InteractionResponse_s* x, struct zxwsf_is_Parameter_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Parameter->gg.g;
  x->Parameter = z;
}

/* FUNC(zxwsf_is_InteractionResponse_REV_Parameter) */

void zxwsf_is_InteractionResponse_REV_Parameter(struct zxwsf_is_InteractionResponse_s* x)
{
  struct zxwsf_is_Parameter_s* nxt;
  struct zxwsf_is_Parameter_s* y;
  if (!x) return;
  y = x->Parameter;
  if (!y) return;
  x->Parameter = 0;
  while (y) {
    nxt = (struct zxwsf_is_Parameter_s*)y->gg.g.n;
    y->gg.g.n = &x->Parameter->gg.g;
    x->Parameter = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_InteractionResponse_PUT_Parameter) */

void zxwsf_is_InteractionResponse_PUT_Parameter(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_is_Parameter_s* z)
{
  struct zxwsf_is_Parameter_s* y;
  if (!x || !z) return;
  y = x->Parameter;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Parameter = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Parameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_InteractionResponse_ADD_Parameter) */

void zxwsf_is_InteractionResponse_ADD_Parameter(struct zxwsf_is_InteractionResponse_s* x, int n, struct zxwsf_is_Parameter_s* z)
{
  struct zxwsf_is_Parameter_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Parameter->gg.g;
    x->Parameter = z;
    return;
  case -1:
    y = x->Parameter;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Parameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Parameter; n > 1 && y; --n, y = (struct zxwsf_is_Parameter_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_InteractionResponse_DEL_Parameter) */

void zxwsf_is_InteractionResponse_DEL_Parameter(struct zxwsf_is_InteractionResponse_s* x, int n)
{
  struct zxwsf_is_Parameter_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Parameter = (struct zxwsf_is_Parameter_s*)x->Parameter->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Parameter_s*)x->Parameter;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Parameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Parameter; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Parameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_is_InteractionStatement_NUM_Inquiry) */

int zxwsf_is_InteractionStatement_NUM_Inquiry(struct zxwsf_is_InteractionStatement_s* x)
{
  struct zxwsf_is_Inquiry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Inquiry; y; ++n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_InteractionStatement_GET_Inquiry) */

struct zxwsf_is_Inquiry_s* zxwsf_is_InteractionStatement_GET_Inquiry(struct zxwsf_is_InteractionStatement_s* x, int n)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x) return 0;
  for (y = x->Inquiry; n>=0 && y; --n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_InteractionStatement_POP_Inquiry) */

struct zxwsf_is_Inquiry_s* zxwsf_is_InteractionStatement_POP_Inquiry(struct zxwsf_is_InteractionStatement_s* x)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x) return 0;
  y = x->Inquiry;
  if (y)
    x->Inquiry = (struct zxwsf_is_Inquiry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_InteractionStatement_PUSH_Inquiry) */

void zxwsf_is_InteractionStatement_PUSH_Inquiry(struct zxwsf_is_InteractionStatement_s* x, struct zxwsf_is_Inquiry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Inquiry->gg.g;
  x->Inquiry = z;
}

/* FUNC(zxwsf_is_InteractionStatement_REV_Inquiry) */

void zxwsf_is_InteractionStatement_REV_Inquiry(struct zxwsf_is_InteractionStatement_s* x)
{
  struct zxwsf_is_Inquiry_s* nxt;
  struct zxwsf_is_Inquiry_s* y;
  if (!x) return;
  y = x->Inquiry;
  if (!y) return;
  x->Inquiry = 0;
  while (y) {
    nxt = (struct zxwsf_is_Inquiry_s*)y->gg.g.n;
    y->gg.g.n = &x->Inquiry->gg.g;
    x->Inquiry = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_InteractionStatement_PUT_Inquiry) */

void zxwsf_is_InteractionStatement_PUT_Inquiry(struct zxwsf_is_InteractionStatement_s* x, int n, struct zxwsf_is_Inquiry_s* z)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x || !z) return;
  y = x->Inquiry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Inquiry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_InteractionStatement_ADD_Inquiry) */

void zxwsf_is_InteractionStatement_ADD_Inquiry(struct zxwsf_is_InteractionStatement_s* x, int n, struct zxwsf_is_Inquiry_s* z)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Inquiry->gg.g;
    x->Inquiry = z;
    return;
  case -1:
    y = x->Inquiry;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Inquiry; n > 1 && y; --n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_InteractionStatement_DEL_Inquiry) */

void zxwsf_is_InteractionStatement_DEL_Inquiry(struct zxwsf_is_InteractionStatement_s* x, int n)
{
  struct zxwsf_is_Inquiry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Inquiry = (struct zxwsf_is_Inquiry_s*)x->Inquiry->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Inquiry_s*)x->Inquiry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Inquiry; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Inquiry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_InteractionStatement_NUM_Signature) */

int zxwsf_is_InteractionStatement_NUM_Signature(struct zxwsf_is_InteractionStatement_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_InteractionStatement_GET_Signature) */

struct zx_elem_s* zxwsf_is_InteractionStatement_GET_Signature(struct zxwsf_is_InteractionStatement_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_InteractionStatement_POP_Signature) */

struct zx_elem_s* zxwsf_is_InteractionStatement_POP_Signature(struct zxwsf_is_InteractionStatement_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_InteractionStatement_PUSH_Signature) */

void zxwsf_is_InteractionStatement_PUSH_Signature(struct zxwsf_is_InteractionStatement_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Signature->g;
  x->Signature = z;
}

/* FUNC(zxwsf_is_InteractionStatement_REV_Signature) */

void zxwsf_is_InteractionStatement_REV_Signature(struct zxwsf_is_InteractionStatement_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Signature->g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_InteractionStatement_PUT_Signature) */

void zxwsf_is_InteractionStatement_PUT_Signature(struct zxwsf_is_InteractionStatement_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_InteractionStatement_ADD_Signature) */

void zxwsf_is_InteractionStatement_ADD_Signature(struct zxwsf_is_InteractionStatement_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Signature->g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_InteractionStatement_DEL_Signature) */

void zxwsf_is_InteractionStatement_DEL_Signature(struct zxwsf_is_InteractionStatement_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_elem_s*)x->Signature->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Signature;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}








/* FUNC(zxwsf_is_Item_NUM_Hint) */

int zxwsf_is_Item_NUM_Hint(struct zxwsf_is_Item_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Hint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Item_GET_Hint) */

struct zx_elem_s* zxwsf_is_Item_GET_Hint(struct zxwsf_is_Item_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Hint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Item_POP_Hint) */

struct zx_elem_s* zxwsf_is_Item_POP_Hint(struct zxwsf_is_Item_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Hint;
  if (y)
    x->Hint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Item_PUSH_Hint) */

void zxwsf_is_Item_PUSH_Hint(struct zxwsf_is_Item_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Hint->g;
  x->Hint = z;
}

/* FUNC(zxwsf_is_Item_REV_Hint) */

void zxwsf_is_Item_REV_Hint(struct zxwsf_is_Item_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Hint;
  if (!y) return;
  x->Hint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Hint->g;
    x->Hint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Item_PUT_Hint) */

void zxwsf_is_Item_PUT_Hint(struct zxwsf_is_Item_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Hint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Hint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Item_ADD_Hint) */

void zxwsf_is_Item_ADD_Hint(struct zxwsf_is_Item_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Hint->g;
    x->Hint = z;
    return;
  case -1:
    y = x->Hint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Item_DEL_Hint) */

void zxwsf_is_Item_DEL_Hint(struct zxwsf_is_Item_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Hint = (struct zx_elem_s*)x->Hint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Hint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is_Item_GET_label) */
struct zx_str_s* zxwsf_is_Item_GET_label(struct zxwsf_is_Item_s* x) { return x->label; }
/* FUNC(zxwsf_is_Item_PUT_label) */
void zxwsf_is_Item_PUT_label(struct zxwsf_is_Item_s* x, struct zx_str_s* y) { x->label = y; }
/* FUNC(zxwsf_is_Item_GET_value) */
struct zx_str_s* zxwsf_is_Item_GET_value(struct zxwsf_is_Item_s* x) { return x->value; }
/* FUNC(zxwsf_is_Item_PUT_value) */
void zxwsf_is_Item_PUT_value(struct zxwsf_is_Item_s* x, struct zx_str_s* y) { x->value = y; }





/* FUNC(zxwsf_is_Parameter_GET_name) */
struct zx_str_s* zxwsf_is_Parameter_GET_name(struct zxwsf_is_Parameter_s* x) { return x->name; }
/* FUNC(zxwsf_is_Parameter_PUT_name) */
void zxwsf_is_Parameter_PUT_name(struct zxwsf_is_Parameter_s* x, struct zx_str_s* y) { x->name = y; }
/* FUNC(zxwsf_is_Parameter_GET_value) */
struct zx_str_s* zxwsf_is_Parameter_GET_value(struct zxwsf_is_Parameter_s* x) { return x->value; }
/* FUNC(zxwsf_is_Parameter_PUT_value) */
void zxwsf_is_Parameter_PUT_value(struct zxwsf_is_Parameter_s* x, struct zx_str_s* y) { x->value = y; }







/* FUNC(zxwsf_is_Select_NUM_Help) */

int zxwsf_is_Select_NUM_Help(struct zxwsf_is_Select_s* x)
{
  struct zxwsf_is_Help_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Help; y; ++n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Select_GET_Help) */

struct zxwsf_is_Help_s* zxwsf_is_Select_GET_Help(struct zxwsf_is_Select_s* x, int n)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return 0;
  for (y = x->Help; n>=0 && y; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Select_POP_Help) */

struct zxwsf_is_Help_s* zxwsf_is_Select_POP_Help(struct zxwsf_is_Select_s* x)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return 0;
  y = x->Help;
  if (y)
    x->Help = (struct zxwsf_is_Help_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_Select_PUSH_Help) */

void zxwsf_is_Select_PUSH_Help(struct zxwsf_is_Select_s* x, struct zxwsf_is_Help_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Help->gg.g;
  x->Help = z;
}

/* FUNC(zxwsf_is_Select_REV_Help) */

void zxwsf_is_Select_REV_Help(struct zxwsf_is_Select_s* x)
{
  struct zxwsf_is_Help_s* nxt;
  struct zxwsf_is_Help_s* y;
  if (!x) return;
  y = x->Help;
  if (!y) return;
  x->Help = 0;
  while (y) {
    nxt = (struct zxwsf_is_Help_s*)y->gg.g.n;
    y->gg.g.n = &x->Help->gg.g;
    x->Help = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Select_PUT_Help) */

void zxwsf_is_Select_PUT_Help(struct zxwsf_is_Select_s* x, int n, struct zxwsf_is_Help_s* z)
{
  struct zxwsf_is_Help_s* y;
  if (!x || !z) return;
  y = x->Help;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Help = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_Select_ADD_Help) */

void zxwsf_is_Select_ADD_Help(struct zxwsf_is_Select_s* x, int n, struct zxwsf_is_Help_s* z)
{
  struct zxwsf_is_Help_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Help->gg.g;
    x->Help = z;
    return;
  case -1:
    y = x->Help;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_Select_DEL_Help) */

void zxwsf_is_Select_DEL_Help(struct zxwsf_is_Select_s* x, int n)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Help = (struct zxwsf_is_Help_s*)x->Help->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Help_s*)x->Help;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_Select_NUM_Hint) */

int zxwsf_is_Select_NUM_Hint(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Hint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Select_GET_Hint) */

struct zx_elem_s* zxwsf_is_Select_GET_Hint(struct zxwsf_is_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Hint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Select_POP_Hint) */

struct zx_elem_s* zxwsf_is_Select_POP_Hint(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Hint;
  if (y)
    x->Hint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Select_PUSH_Hint) */

void zxwsf_is_Select_PUSH_Hint(struct zxwsf_is_Select_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Hint->g;
  x->Hint = z;
}

/* FUNC(zxwsf_is_Select_REV_Hint) */

void zxwsf_is_Select_REV_Hint(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Hint;
  if (!y) return;
  x->Hint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Hint->g;
    x->Hint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Select_PUT_Hint) */

void zxwsf_is_Select_PUT_Hint(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Hint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Hint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Select_ADD_Hint) */

void zxwsf_is_Select_ADD_Hint(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Hint->g;
    x->Hint = z;
    return;
  case -1:
    y = x->Hint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Select_DEL_Hint) */

void zxwsf_is_Select_DEL_Hint(struct zxwsf_is_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Hint = (struct zx_elem_s*)x->Hint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Hint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is_Select_NUM_Label) */

int zxwsf_is_Select_NUM_Label(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Label; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Select_GET_Label) */

struct zx_elem_s* zxwsf_is_Select_GET_Label(struct zxwsf_is_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Label; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Select_POP_Label) */

struct zx_elem_s* zxwsf_is_Select_POP_Label(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Label;
  if (y)
    x->Label = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Select_PUSH_Label) */

void zxwsf_is_Select_PUSH_Label(struct zxwsf_is_Select_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Label->g;
  x->Label = z;
}

/* FUNC(zxwsf_is_Select_REV_Label) */

void zxwsf_is_Select_REV_Label(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Label;
  if (!y) return;
  x->Label = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Label->g;
    x->Label = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Select_PUT_Label) */

void zxwsf_is_Select_PUT_Label(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Label;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Label = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Select_ADD_Label) */

void zxwsf_is_Select_ADD_Label(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Label->g;
    x->Label = z;
    return;
  case -1:
    y = x->Label;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Select_DEL_Label) */

void zxwsf_is_Select_DEL_Label(struct zxwsf_is_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Label = (struct zx_elem_s*)x->Label->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Label;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is_Select_NUM_Value) */

int zxwsf_is_Select_NUM_Value(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Value; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Select_GET_Value) */

struct zx_elem_s* zxwsf_is_Select_GET_Value(struct zxwsf_is_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Value; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Select_POP_Value) */

struct zx_elem_s* zxwsf_is_Select_POP_Value(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Value;
  if (y)
    x->Value = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Select_PUSH_Value) */

void zxwsf_is_Select_PUSH_Value(struct zxwsf_is_Select_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Value->g;
  x->Value = z;
}

/* FUNC(zxwsf_is_Select_REV_Value) */

void zxwsf_is_Select_REV_Value(struct zxwsf_is_Select_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Value;
  if (!y) return;
  x->Value = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Value->g;
    x->Value = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Select_PUT_Value) */

void zxwsf_is_Select_PUT_Value(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Value;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Value = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Select_ADD_Value) */

void zxwsf_is_Select_ADD_Value(struct zxwsf_is_Select_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Value->g;
    x->Value = z;
    return;
  case -1:
    y = x->Value;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Select_DEL_Value) */

void zxwsf_is_Select_DEL_Value(struct zxwsf_is_Select_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Value = (struct zx_elem_s*)x->Value->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Value;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is_Select_GET_name) */
struct zx_str_s* zxwsf_is_Select_GET_name(struct zxwsf_is_Select_s* x) { return x->name; }
/* FUNC(zxwsf_is_Select_PUT_name) */
void zxwsf_is_Select_PUT_name(struct zxwsf_is_Select_s* x, struct zx_str_s* y) { x->name = y; }


/* FUNC(zxwsf_is_Select_NUM_Item) */

int zxwsf_is_Select_NUM_Item(struct zxwsf_is_Select_s* x)
{
  struct zxwsf_is_Item_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Item; y; ++n, y = (struct zxwsf_is_Item_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Select_GET_Item) */

struct zxwsf_is_Item_s* zxwsf_is_Select_GET_Item(struct zxwsf_is_Select_s* x, int n)
{
  struct zxwsf_is_Item_s* y;
  if (!x) return 0;
  for (y = x->Item; n>=0 && y; --n, y = (struct zxwsf_is_Item_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Select_POP_Item) */

struct zxwsf_is_Item_s* zxwsf_is_Select_POP_Item(struct zxwsf_is_Select_s* x)
{
  struct zxwsf_is_Item_s* y;
  if (!x) return 0;
  y = x->Item;
  if (y)
    x->Item = (struct zxwsf_is_Item_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_Select_PUSH_Item) */

void zxwsf_is_Select_PUSH_Item(struct zxwsf_is_Select_s* x, struct zxwsf_is_Item_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Item->gg.g;
  x->Item = z;
}

/* FUNC(zxwsf_is_Select_REV_Item) */

void zxwsf_is_Select_REV_Item(struct zxwsf_is_Select_s* x)
{
  struct zxwsf_is_Item_s* nxt;
  struct zxwsf_is_Item_s* y;
  if (!x) return;
  y = x->Item;
  if (!y) return;
  x->Item = 0;
  while (y) {
    nxt = (struct zxwsf_is_Item_s*)y->gg.g.n;
    y->gg.g.n = &x->Item->gg.g;
    x->Item = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Select_PUT_Item) */

void zxwsf_is_Select_PUT_Item(struct zxwsf_is_Select_s* x, int n, struct zxwsf_is_Item_s* z)
{
  struct zxwsf_is_Item_s* y;
  if (!x || !z) return;
  y = x->Item;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Item = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Item_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_Select_ADD_Item) */

void zxwsf_is_Select_ADD_Item(struct zxwsf_is_Select_s* x, int n, struct zxwsf_is_Item_s* z)
{
  struct zxwsf_is_Item_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Item->gg.g;
    x->Item = z;
    return;
  case -1:
    y = x->Item;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Item_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Item; n > 1 && y; --n, y = (struct zxwsf_is_Item_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_Select_DEL_Item) */

void zxwsf_is_Select_DEL_Item(struct zxwsf_is_Select_s* x, int n)
{
  struct zxwsf_is_Item_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Item = (struct zxwsf_is_Item_s*)x->Item->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Item_s*)x->Item;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Item_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Item; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Item_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_is_Select_GET_multiple) */
struct zx_str_s* zxwsf_is_Select_GET_multiple(struct zxwsf_is_Select_s* x) { return x->multiple; }
/* FUNC(zxwsf_is_Select_PUT_multiple) */
void zxwsf_is_Select_PUT_multiple(struct zxwsf_is_Select_s* x, struct zx_str_s* y) { x->multiple = y; }







/* FUNC(zxwsf_is_Text_NUM_Help) */

int zxwsf_is_Text_NUM_Help(struct zxwsf_is_Text_s* x)
{
  struct zxwsf_is_Help_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Help; y; ++n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Text_GET_Help) */

struct zxwsf_is_Help_s* zxwsf_is_Text_GET_Help(struct zxwsf_is_Text_s* x, int n)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return 0;
  for (y = x->Help; n>=0 && y; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Text_POP_Help) */

struct zxwsf_is_Help_s* zxwsf_is_Text_POP_Help(struct zxwsf_is_Text_s* x)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return 0;
  y = x->Help;
  if (y)
    x->Help = (struct zxwsf_is_Help_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_is_Text_PUSH_Help) */

void zxwsf_is_Text_PUSH_Help(struct zxwsf_is_Text_s* x, struct zxwsf_is_Help_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Help->gg.g;
  x->Help = z;
}

/* FUNC(zxwsf_is_Text_REV_Help) */

void zxwsf_is_Text_REV_Help(struct zxwsf_is_Text_s* x)
{
  struct zxwsf_is_Help_s* nxt;
  struct zxwsf_is_Help_s* y;
  if (!x) return;
  y = x->Help;
  if (!y) return;
  x->Help = 0;
  while (y) {
    nxt = (struct zxwsf_is_Help_s*)y->gg.g.n;
    y->gg.g.n = &x->Help->gg.g;
    x->Help = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Text_PUT_Help) */

void zxwsf_is_Text_PUT_Help(struct zxwsf_is_Text_s* x, int n, struct zxwsf_is_Help_s* z)
{
  struct zxwsf_is_Help_s* y;
  if (!x || !z) return;
  y = x->Help;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Help = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_is_Text_ADD_Help) */

void zxwsf_is_Text_ADD_Help(struct zxwsf_is_Text_s* x, int n, struct zxwsf_is_Help_s* z)
{
  struct zxwsf_is_Help_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Help->gg.g;
    x->Help = z;
    return;
  case -1:
    y = x->Help;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_is_Text_DEL_Help) */

void zxwsf_is_Text_DEL_Help(struct zxwsf_is_Text_s* x, int n)
{
  struct zxwsf_is_Help_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Help = (struct zxwsf_is_Help_s*)x->Help->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_is_Help_s*)x->Help;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Help; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_is_Help_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_is_Text_NUM_Hint) */

int zxwsf_is_Text_NUM_Hint(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Hint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Text_GET_Hint) */

struct zx_elem_s* zxwsf_is_Text_GET_Hint(struct zxwsf_is_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Hint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Text_POP_Hint) */

struct zx_elem_s* zxwsf_is_Text_POP_Hint(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Hint;
  if (y)
    x->Hint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Text_PUSH_Hint) */

void zxwsf_is_Text_PUSH_Hint(struct zxwsf_is_Text_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Hint->g;
  x->Hint = z;
}

/* FUNC(zxwsf_is_Text_REV_Hint) */

void zxwsf_is_Text_REV_Hint(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Hint;
  if (!y) return;
  x->Hint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Hint->g;
    x->Hint = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Text_PUT_Hint) */

void zxwsf_is_Text_PUT_Hint(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Hint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Hint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Text_ADD_Hint) */

void zxwsf_is_Text_ADD_Hint(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Hint->g;
    x->Hint = z;
    return;
  case -1:
    y = x->Hint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Text_DEL_Hint) */

void zxwsf_is_Text_DEL_Hint(struct zxwsf_is_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Hint = (struct zx_elem_s*)x->Hint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Hint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Hint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is_Text_NUM_Label) */

int zxwsf_is_Text_NUM_Label(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Label; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Text_GET_Label) */

struct zx_elem_s* zxwsf_is_Text_GET_Label(struct zxwsf_is_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Label; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Text_POP_Label) */

struct zx_elem_s* zxwsf_is_Text_POP_Label(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Label;
  if (y)
    x->Label = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Text_PUSH_Label) */

void zxwsf_is_Text_PUSH_Label(struct zxwsf_is_Text_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Label->g;
  x->Label = z;
}

/* FUNC(zxwsf_is_Text_REV_Label) */

void zxwsf_is_Text_REV_Label(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Label;
  if (!y) return;
  x->Label = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Label->g;
    x->Label = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Text_PUT_Label) */

void zxwsf_is_Text_PUT_Label(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Label;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Label = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Text_ADD_Label) */

void zxwsf_is_Text_ADD_Label(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Label->g;
    x->Label = z;
    return;
  case -1:
    y = x->Label;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Text_DEL_Label) */

void zxwsf_is_Text_DEL_Label(struct zxwsf_is_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Label = (struct zx_elem_s*)x->Label->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Label;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Label; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_is_Text_NUM_Value) */

int zxwsf_is_Text_NUM_Value(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Value; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_is_Text_GET_Value) */

struct zx_elem_s* zxwsf_is_Text_GET_Value(struct zxwsf_is_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Value; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_is_Text_POP_Value) */

struct zx_elem_s* zxwsf_is_Text_POP_Value(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Value;
  if (y)
    x->Value = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_is_Text_PUSH_Value) */

void zxwsf_is_Text_PUSH_Value(struct zxwsf_is_Text_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Value->g;
  x->Value = z;
}

/* FUNC(zxwsf_is_Text_REV_Value) */

void zxwsf_is_Text_REV_Value(struct zxwsf_is_Text_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Value;
  if (!y) return;
  x->Value = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Value->g;
    x->Value = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_is_Text_PUT_Value) */

void zxwsf_is_Text_PUT_Value(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Value;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Value = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_is_Text_ADD_Value) */

void zxwsf_is_Text_ADD_Value(struct zxwsf_is_Text_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Value->g;
    x->Value = z;
    return;
  case -1:
    y = x->Value;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_is_Text_DEL_Value) */

void zxwsf_is_Text_DEL_Value(struct zxwsf_is_Text_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Value = (struct zx_elem_s*)x->Value->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Value;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Value; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_is_Text_GET_name) */
struct zx_str_s* zxwsf_is_Text_GET_name(struct zxwsf_is_Text_s* x) { return x->name; }
/* FUNC(zxwsf_is_Text_PUT_name) */
void zxwsf_is_Text_PUT_name(struct zxwsf_is_Text_s* x, struct zx_str_s* y) { x->name = y; }
/* FUNC(zxwsf_is_Text_GET_minChars) */
struct zx_str_s* zxwsf_is_Text_GET_minChars(struct zxwsf_is_Text_s* x) { return x->minChars; }
/* FUNC(zxwsf_is_Text_PUT_minChars) */
void zxwsf_is_Text_PUT_minChars(struct zxwsf_is_Text_s* x, struct zx_str_s* y) { x->minChars = y; }
/* FUNC(zxwsf_is_Text_GET_maxChars) */
struct zx_str_s* zxwsf_is_Text_GET_maxChars(struct zxwsf_is_Text_s* x) { return x->maxChars; }
/* FUNC(zxwsf_is_Text_PUT_maxChars) */
void zxwsf_is_Text_PUT_maxChars(struct zxwsf_is_Text_s* x, struct zx_str_s* y) { x->maxChars = y; }
/* FUNC(zxwsf_is_Text_GET_format) */
struct zx_str_s* zxwsf_is_Text_GET_format(struct zxwsf_is_Text_s* x) { return x->format; }
/* FUNC(zxwsf_is_Text_PUT_format) */
void zxwsf_is_Text_PUT_format(struct zxwsf_is_Text_s* x, struct zx_str_s* y) { x->format = y; }












/* FUNC(zxwsf_lu_Status_NUM_Status) */

int zxwsf_lu_Status_NUM_Status(struct zxwsf_lu_Status_s* x)
{
  struct zxwsf_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_lu_Status_GET_Status) */

struct zxwsf_lu_Status_s* zxwsf_lu_Status_GET_Status(struct zxwsf_lu_Status_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_lu_Status_POP_Status) */

struct zxwsf_lu_Status_s* zxwsf_lu_Status_POP_Status(struct zxwsf_lu_Status_s* x)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zxwsf_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_lu_Status_PUSH_Status) */

void zxwsf_lu_Status_PUSH_Status(struct zxwsf_lu_Status_s* x, struct zxwsf_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zxwsf_lu_Status_REV_Status) */

void zxwsf_lu_Status_REV_Status(struct zxwsf_lu_Status_s* x)
{
  struct zxwsf_lu_Status_s* nxt;
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zxwsf_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_lu_Status_PUT_Status) */

void zxwsf_lu_Status_PUT_Status(struct zxwsf_lu_Status_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_lu_Status_ADD_Status) */

void zxwsf_lu_Status_ADD_Status(struct zxwsf_lu_Status_s* x, int n, struct zxwsf_lu_Status_s* z)
{
  struct zxwsf_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_lu_Status_DEL_Status) */

void zxwsf_lu_Status_DEL_Status(struct zxwsf_lu_Status_s* x, int n)
{
  struct zxwsf_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zxwsf_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_lu_Status_GET_code) */
struct zx_str_s* zxwsf_lu_Status_GET_code(struct zxwsf_lu_Status_s* x) { return x->code; }
/* FUNC(zxwsf_lu_Status_PUT_code) */
void zxwsf_lu_Status_PUT_code(struct zxwsf_lu_Status_s* x, struct zx_str_s* y) { x->code = y; }
/* FUNC(zxwsf_lu_Status_GET_ref) */
struct zx_str_s* zxwsf_lu_Status_GET_ref(struct zxwsf_lu_Status_s* x) { return x->ref; }
/* FUNC(zxwsf_lu_Status_PUT_ref) */
void zxwsf_lu_Status_PUT_ref(struct zxwsf_lu_Status_s* x, struct zx_str_s* y) { x->ref = y; }
/* FUNC(zxwsf_lu_Status_GET_comment) */
struct zx_str_s* zxwsf_lu_Status_GET_comment(struct zxwsf_lu_Status_s* x) { return x->comment; }
/* FUNC(zxwsf_lu_Status_PUT_comment) */
void zxwsf_lu_Status_PUT_comment(struct zxwsf_lu_Status_s* x, struct zx_str_s* y) { x->comment = y; }





/* FUNC(zxwsf_lu_TestResult_GET_itemIDRef) */
struct zx_str_s* zxwsf_lu_TestResult_GET_itemIDRef(struct zxwsf_lu_TestResult_s* x) { return x->itemIDRef; }
/* FUNC(zxwsf_lu_TestResult_PUT_itemIDRef) */
void zxwsf_lu_TestResult_PUT_itemIDRef(struct zxwsf_lu_TestResult_s* x, struct zx_str_s* y) { x->itemIDRef = y; }





/* FUNC(zxwsf_sbf_Framework_GET_version) */
struct zx_str_s* zxwsf_sbf_Framework_GET_version(struct zxwsf_sbf_Framework_s* x) { return x->version; }
/* FUNC(zxwsf_sbf_Framework_PUT_version) */
void zxwsf_sbf_Framework_PUT_version(struct zxwsf_sbf_Framework_s* x, struct zx_str_s* y) { x->version = y; }







/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_NUM_AssertionIDReference) */

int zxwsf_sec12_ProxyInfoConfirmationData_NUM_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDReference; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_GET_AssertionIDReference) */

struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDReference; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_POP_AssertionIDReference) */

struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_POP_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDReference;
  if (y)
    x->AssertionIDReference = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUSH_AssertionIDReference) */

void zxwsf_sec12_ProxyInfoConfirmationData_PUSH_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDReference->g;
  x->AssertionIDReference = z;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_REV_AssertionIDReference) */

void zxwsf_sec12_ProxyInfoConfirmationData_REV_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionIDReference;
  if (!y) return;
  x->AssertionIDReference = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionIDReference->g;
    x->AssertionIDReference = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUT_AssertionIDReference) */

void zxwsf_sec12_ProxyInfoConfirmationData_PUT_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionIDReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionIDReference = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_ADD_AssertionIDReference) */

void zxwsf_sec12_ProxyInfoConfirmationData_ADD_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionIDReference->g;
    x->AssertionIDReference = z;
    return;
  case -1:
    y = x->AssertionIDReference;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDReference; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_DEL_AssertionIDReference) */

void zxwsf_sec12_ProxyInfoConfirmationData_DEL_AssertionIDReference(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDReference = (struct zx_elem_s*)x->AssertionIDReference->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionIDReference;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDReference; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_NUM_Issuer) */

int zxwsf_sec12_ProxyInfoConfirmationData_NUM_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_GET_Issuer) */

struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_POP_Issuer) */

struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_POP_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Issuer) */

void zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Issuer->g;
  x->Issuer = z;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_REV_Issuer) */

void zxwsf_sec12_ProxyInfoConfirmationData_REV_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Issuer->g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUT_Issuer) */

void zxwsf_sec12_ProxyInfoConfirmationData_PUT_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_ADD_Issuer) */

void zxwsf_sec12_ProxyInfoConfirmationData_ADD_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Issuer->g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_DEL_Issuer) */

void zxwsf_sec12_ProxyInfoConfirmationData_DEL_Issuer(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_elem_s*)x->Issuer->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Issuer;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_NUM_IssueInstant) */

int zxwsf_sec12_ProxyInfoConfirmationData_NUM_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IssueInstant; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_GET_IssueInstant) */

struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->IssueInstant; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_POP_IssueInstant) */

struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_POP_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->IssueInstant;
  if (y)
    x->IssueInstant = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUSH_IssueInstant) */

void zxwsf_sec12_ProxyInfoConfirmationData_PUSH_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->IssueInstant->g;
  x->IssueInstant = z;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_REV_IssueInstant) */

void zxwsf_sec12_ProxyInfoConfirmationData_REV_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->IssueInstant;
  if (!y) return;
  x->IssueInstant = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->IssueInstant->g;
    x->IssueInstant = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUT_IssueInstant) */

void zxwsf_sec12_ProxyInfoConfirmationData_PUT_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->IssueInstant;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->IssueInstant = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_ADD_IssueInstant) */

void zxwsf_sec12_ProxyInfoConfirmationData_ADD_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->IssueInstant->g;
    x->IssueInstant = z;
    return;
  case -1:
    y = x->IssueInstant;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->IssueInstant; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_DEL_IssueInstant) */

void zxwsf_sec12_ProxyInfoConfirmationData_DEL_IssueInstant(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IssueInstant = (struct zx_elem_s*)x->IssueInstant->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->IssueInstant;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->IssueInstant; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_NUM_Signature) */

int zxwsf_sec12_ProxyInfoConfirmationData_NUM_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_GET_Signature) */

struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_POP_Signature) */

struct zx_elem_s* zxwsf_sec12_ProxyInfoConfirmationData_POP_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Signature) */

void zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Signature->g;
  x->Signature = z;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_REV_Signature) */

void zxwsf_sec12_ProxyInfoConfirmationData_REV_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Signature->g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUT_Signature) */

void zxwsf_sec12_ProxyInfoConfirmationData_PUT_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_ADD_Signature) */

void zxwsf_sec12_ProxyInfoConfirmationData_ADD_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Signature->g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_DEL_Signature) */

void zxwsf_sec12_ProxyInfoConfirmationData_DEL_Signature(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_elem_s*)x->Signature->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Signature;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_GET_id) */
struct zx_str_s* zxwsf_sec12_ProxyInfoConfirmationData_GET_id(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x) { return x->id; }
/* FUNC(zxwsf_sec12_ProxyInfoConfirmationData_PUT_id) */
void zxwsf_sec12_ProxyInfoConfirmationData_PUT_id(struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, struct zx_str_s* y) { x->id = y; }







/* FUNC(zxwsf_sec12_ResourceAccessStatement_NUM_ProxySubject) */

int zxwsf_sec12_ResourceAccessStatement_NUM_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxySubject; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_GET_ProxySubject) */

struct zx_elem_s* zxwsf_sec12_ResourceAccessStatement_GET_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProxySubject; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_POP_ProxySubject) */

struct zx_elem_s* zxwsf_sec12_ResourceAccessStatement_POP_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProxySubject;
  if (y)
    x->ProxySubject = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_PUSH_ProxySubject) */

void zxwsf_sec12_ResourceAccessStatement_PUSH_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProxySubject->g;
  x->ProxySubject = z;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_REV_ProxySubject) */

void zxwsf_sec12_ResourceAccessStatement_REV_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ProxySubject;
  if (!y) return;
  x->ProxySubject = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ProxySubject->g;
    x->ProxySubject = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_PUT_ProxySubject) */

void zxwsf_sec12_ResourceAccessStatement_PUT_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ProxySubject;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ProxySubject = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_ADD_ProxySubject) */

void zxwsf_sec12_ResourceAccessStatement_ADD_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ProxySubject->g;
    x->ProxySubject = z;
    return;
  case -1:
    y = x->ProxySubject;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProxySubject; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_DEL_ProxySubject) */

void zxwsf_sec12_ResourceAccessStatement_DEL_ProxySubject(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxySubject = (struct zx_elem_s*)x->ProxySubject->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ProxySubject;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProxySubject; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_sec12_ResourceAccessStatement_NUM_SessionContext) */

int zxwsf_sec12_ResourceAccessStatement_NUM_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x)
{
  struct zxwsf_sec12_SessionContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SessionContext; y; ++n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_GET_SessionContext) */

struct zxwsf_sec12_SessionContext_s* zxwsf_sec12_ResourceAccessStatement_GET_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x) return 0;
  for (y = x->SessionContext; n>=0 && y; --n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_POP_SessionContext) */

struct zxwsf_sec12_SessionContext_s* zxwsf_sec12_ResourceAccessStatement_POP_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x) return 0;
  y = x->SessionContext;
  if (y)
    x->SessionContext = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_PUSH_SessionContext) */

void zxwsf_sec12_ResourceAccessStatement_PUSH_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, struct zxwsf_sec12_SessionContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SessionContext->gg.g;
  x->SessionContext = z;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_REV_SessionContext) */

void zxwsf_sec12_ResourceAccessStatement_REV_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x)
{
  struct zxwsf_sec12_SessionContext_s* nxt;
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x) return;
  y = x->SessionContext;
  if (!y) return;
  x->SessionContext = 0;
  while (y) {
    nxt = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n;
    y->gg.g.n = &x->SessionContext->gg.g;
    x->SessionContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_PUT_SessionContext) */

void zxwsf_sec12_ResourceAccessStatement_PUT_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n, struct zxwsf_sec12_SessionContext_s* z)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x || !z) return;
  y = x->SessionContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SessionContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_ADD_SessionContext) */

void zxwsf_sec12_ResourceAccessStatement_ADD_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n, struct zxwsf_sec12_SessionContext_s* z)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SessionContext->gg.g;
    x->SessionContext = z;
    return;
  case -1:
    y = x->SessionContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionContext; n > 1 && y; --n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_sec12_ResourceAccessStatement_DEL_SessionContext) */

void zxwsf_sec12_ResourceAccessStatement_DEL_SessionContext(struct zxwsf_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SessionContext = (struct zxwsf_sec12_SessionContext_s*)x->SessionContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_sec12_SessionContext_s*)x->SessionContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_sec12_SessionContext_NUM_SessionSubject) */

int zxwsf_sec12_SessionContext_NUM_SessionSubject(struct zxwsf_sec12_SessionContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SessionSubject; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_SessionContext_GET_SessionSubject) */

struct zx_elem_s* zxwsf_sec12_SessionContext_GET_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SessionSubject; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContext_POP_SessionSubject) */

struct zx_elem_s* zxwsf_sec12_SessionContext_POP_SessionSubject(struct zxwsf_sec12_SessionContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SessionSubject;
  if (y)
    x->SessionSubject = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContext_PUSH_SessionSubject) */

void zxwsf_sec12_SessionContext_PUSH_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SessionSubject->g;
  x->SessionSubject = z;
}

/* FUNC(zxwsf_sec12_SessionContext_REV_SessionSubject) */

void zxwsf_sec12_SessionContext_REV_SessionSubject(struct zxwsf_sec12_SessionContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SessionSubject;
  if (!y) return;
  x->SessionSubject = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SessionSubject->g;
    x->SessionSubject = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_SessionContext_PUT_SessionSubject) */

void zxwsf_sec12_SessionContext_PUT_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SessionSubject;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SessionSubject = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_SessionContext_ADD_SessionSubject) */

void zxwsf_sec12_SessionContext_ADD_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SessionSubject->g;
    x->SessionSubject = z;
    return;
  case -1:
    y = x->SessionSubject;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SessionSubject; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_SessionContext_DEL_SessionSubject) */

void zxwsf_sec12_SessionContext_DEL_SessionSubject(struct zxwsf_sec12_SessionContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SessionSubject = (struct zx_elem_s*)x->SessionSubject->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SessionSubject;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SessionSubject; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_sec12_SessionContext_NUM_ProviderID) */

int zxwsf_sec12_SessionContext_NUM_ProviderID(struct zxwsf_sec12_SessionContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_SessionContext_GET_ProviderID) */

struct zx_elem_s* zxwsf_sec12_SessionContext_GET_ProviderID(struct zxwsf_sec12_SessionContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContext_POP_ProviderID) */

struct zx_elem_s* zxwsf_sec12_SessionContext_POP_ProviderID(struct zxwsf_sec12_SessionContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContext_PUSH_ProviderID) */

void zxwsf_sec12_SessionContext_PUSH_ProviderID(struct zxwsf_sec12_SessionContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zxwsf_sec12_SessionContext_REV_ProviderID) */

void zxwsf_sec12_SessionContext_REV_ProviderID(struct zxwsf_sec12_SessionContext_s* x)
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

/* FUNC(zxwsf_sec12_SessionContext_PUT_ProviderID) */

void zxwsf_sec12_SessionContext_PUT_ProviderID(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_sec12_SessionContext_ADD_ProviderID) */

void zxwsf_sec12_SessionContext_ADD_ProviderID(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zxwsf_sec12_SessionContext_DEL_ProviderID) */

void zxwsf_sec12_SessionContext_DEL_ProviderID(struct zxwsf_sec12_SessionContext_s* x, int n)
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



/* FUNC(zxwsf_sec12_SessionContext_NUM_RequestAuthnContext) */

int zxwsf_sec12_SessionContext_NUM_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestAuthnContext; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_SessionContext_GET_RequestAuthnContext) */

struct zx_elem_s* zxwsf_sec12_SessionContext_GET_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RequestAuthnContext; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContext_POP_RequestAuthnContext) */

struct zx_elem_s* zxwsf_sec12_SessionContext_POP_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RequestAuthnContext;
  if (y)
    x->RequestAuthnContext = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContext_PUSH_RequestAuthnContext) */

void zxwsf_sec12_SessionContext_PUSH_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RequestAuthnContext->g;
  x->RequestAuthnContext = z;
}

/* FUNC(zxwsf_sec12_SessionContext_REV_RequestAuthnContext) */

void zxwsf_sec12_SessionContext_REV_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RequestAuthnContext;
  if (!y) return;
  x->RequestAuthnContext = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RequestAuthnContext->g;
    x->RequestAuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_SessionContext_PUT_RequestAuthnContext) */

void zxwsf_sec12_SessionContext_PUT_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RequestAuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RequestAuthnContext = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_SessionContext_ADD_RequestAuthnContext) */

void zxwsf_sec12_SessionContext_ADD_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RequestAuthnContext->g;
    x->RequestAuthnContext = z;
    return;
  case -1:
    y = x->RequestAuthnContext;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestAuthnContext; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_SessionContext_DEL_RequestAuthnContext) */

void zxwsf_sec12_SessionContext_DEL_RequestAuthnContext(struct zxwsf_sec12_SessionContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestAuthnContext = (struct zx_elem_s*)x->RequestAuthnContext->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RequestAuthnContext;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestAuthnContext; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

/* FUNC(zxwsf_sec12_SessionContext_GET_SessionIndex) */
struct zx_str_s* zxwsf_sec12_SessionContext_GET_SessionIndex(struct zxwsf_sec12_SessionContext_s* x) { return x->SessionIndex; }
/* FUNC(zxwsf_sec12_SessionContext_PUT_SessionIndex) */
void zxwsf_sec12_SessionContext_PUT_SessionIndex(struct zxwsf_sec12_SessionContext_s* x, struct zx_str_s* y) { x->SessionIndex = y; }
/* FUNC(zxwsf_sec12_SessionContext_GET_AuthenticationInstant) */
struct zx_str_s* zxwsf_sec12_SessionContext_GET_AuthenticationInstant(struct zxwsf_sec12_SessionContext_s* x) { return x->AuthenticationInstant; }
/* FUNC(zxwsf_sec12_SessionContext_PUT_AuthenticationInstant) */
void zxwsf_sec12_SessionContext_PUT_AuthenticationInstant(struct zxwsf_sec12_SessionContext_s* x, struct zx_str_s* y) { x->AuthenticationInstant = y; }
/* FUNC(zxwsf_sec12_SessionContext_GET_AssertionIssueInstant) */
struct zx_str_s* zxwsf_sec12_SessionContext_GET_AssertionIssueInstant(struct zxwsf_sec12_SessionContext_s* x) { return x->AssertionIssueInstant; }
/* FUNC(zxwsf_sec12_SessionContext_PUT_AssertionIssueInstant) */
void zxwsf_sec12_SessionContext_PUT_AssertionIssueInstant(struct zxwsf_sec12_SessionContext_s* x, struct zx_str_s* y) { x->AssertionIssueInstant = y; }







/* FUNC(zxwsf_sec12_SessionContextStatement_NUM_ProxySubject) */

int zxwsf_sec12_SessionContextStatement_NUM_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxySubject; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_GET_ProxySubject) */

struct zx_elem_s* zxwsf_sec12_SessionContextStatement_GET_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProxySubject; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_POP_ProxySubject) */

struct zx_elem_s* zxwsf_sec12_SessionContextStatement_POP_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProxySubject;
  if (y)
    x->ProxySubject = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_PUSH_ProxySubject) */

void zxwsf_sec12_SessionContextStatement_PUSH_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProxySubject->g;
  x->ProxySubject = z;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_REV_ProxySubject) */

void zxwsf_sec12_SessionContextStatement_REV_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ProxySubject;
  if (!y) return;
  x->ProxySubject = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ProxySubject->g;
    x->ProxySubject = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_SessionContextStatement_PUT_ProxySubject) */

void zxwsf_sec12_SessionContextStatement_PUT_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ProxySubject;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ProxySubject = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_SessionContextStatement_ADD_ProxySubject) */

void zxwsf_sec12_SessionContextStatement_ADD_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ProxySubject->g;
    x->ProxySubject = z;
    return;
  case -1:
    y = x->ProxySubject;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProxySubject; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_DEL_ProxySubject) */

void zxwsf_sec12_SessionContextStatement_DEL_ProxySubject(struct zxwsf_sec12_SessionContextStatement_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxySubject = (struct zx_elem_s*)x->ProxySubject->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ProxySubject;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProxySubject; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}



/* FUNC(zxwsf_sec12_SessionContextStatement_NUM_SessionContext) */

int zxwsf_sec12_SessionContextStatement_NUM_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x)
{
  struct zxwsf_sec12_SessionContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SessionContext; y; ++n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_GET_SessionContext) */

struct zxwsf_sec12_SessionContext_s* zxwsf_sec12_SessionContextStatement_GET_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, int n)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x) return 0;
  for (y = x->SessionContext; n>=0 && y; --n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_POP_SessionContext) */

struct zxwsf_sec12_SessionContext_s* zxwsf_sec12_SessionContextStatement_POP_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x) return 0;
  y = x->SessionContext;
  if (y)
    x->SessionContext = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_PUSH_SessionContext) */

void zxwsf_sec12_SessionContextStatement_PUSH_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, struct zxwsf_sec12_SessionContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SessionContext->gg.g;
  x->SessionContext = z;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_REV_SessionContext) */

void zxwsf_sec12_SessionContextStatement_REV_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x)
{
  struct zxwsf_sec12_SessionContext_s* nxt;
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x) return;
  y = x->SessionContext;
  if (!y) return;
  x->SessionContext = 0;
  while (y) {
    nxt = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n;
    y->gg.g.n = &x->SessionContext->gg.g;
    x->SessionContext = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_SessionContextStatement_PUT_SessionContext) */

void zxwsf_sec12_SessionContextStatement_PUT_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, int n, struct zxwsf_sec12_SessionContext_s* z)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x || !z) return;
  y = x->SessionContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SessionContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_sec12_SessionContextStatement_ADD_SessionContext) */

void zxwsf_sec12_SessionContextStatement_ADD_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, int n, struct zxwsf_sec12_SessionContext_s* z)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SessionContext->gg.g;
    x->SessionContext = z;
    return;
  case -1:
    y = x->SessionContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionContext; n > 1 && y; --n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_sec12_SessionContextStatement_DEL_SessionContext) */

void zxwsf_sec12_SessionContextStatement_DEL_SessionContext(struct zxwsf_sec12_SessionContextStatement_s* x, int n)
{
  struct zxwsf_sec12_SessionContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SessionContext = (struct zxwsf_sec12_SessionContext_s*)x->SessionContext->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_sec12_SessionContext_s*)x->SessionContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionContext; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zxwsf_sec12_ValidityRestrictionCondition_NUM_NumberOfUses) */

int zxwsf_sec12_ValidityRestrictionCondition_NUM_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NumberOfUses; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zxwsf_sec12_ValidityRestrictionCondition_GET_NumberOfUses) */

struct zx_elem_s* zxwsf_sec12_ValidityRestrictionCondition_GET_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NumberOfUses; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zxwsf_sec12_ValidityRestrictionCondition_POP_NumberOfUses) */

struct zx_elem_s* zxwsf_sec12_ValidityRestrictionCondition_POP_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NumberOfUses;
  if (y)
    x->NumberOfUses = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zxwsf_sec12_ValidityRestrictionCondition_PUSH_NumberOfUses) */

void zxwsf_sec12_ValidityRestrictionCondition_PUSH_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NumberOfUses->g;
  x->NumberOfUses = z;
}

/* FUNC(zxwsf_sec12_ValidityRestrictionCondition_REV_NumberOfUses) */

void zxwsf_sec12_ValidityRestrictionCondition_REV_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NumberOfUses;
  if (!y) return;
  x->NumberOfUses = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NumberOfUses->g;
    x->NumberOfUses = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec12_ValidityRestrictionCondition_PUT_NumberOfUses) */

void zxwsf_sec12_ValidityRestrictionCondition_PUT_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NumberOfUses;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NumberOfUses = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zxwsf_sec12_ValidityRestrictionCondition_ADD_NumberOfUses) */

void zxwsf_sec12_ValidityRestrictionCondition_ADD_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NumberOfUses->g;
    x->NumberOfUses = z;
    return;
  case -1:
    y = x->NumberOfUses;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NumberOfUses; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zxwsf_sec12_ValidityRestrictionCondition_DEL_NumberOfUses) */

void zxwsf_sec12_ValidityRestrictionCondition_DEL_NumberOfUses(struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NumberOfUses = (struct zx_elem_s*)x->NumberOfUses->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NumberOfUses;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NumberOfUses; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}






/* FUNC(zxwsf_sec_Token_GET_id) */
struct zx_str_s* zxwsf_sec_Token_GET_id(struct zxwsf_sec_Token_s* x) { return x->id; }
/* FUNC(zxwsf_sec_Token_PUT_id) */
void zxwsf_sec_Token_PUT_id(struct zxwsf_sec_Token_s* x, struct zx_str_s* y) { x->id = y; }
/* FUNC(zxwsf_sec_Token_GET_ref) */
struct zx_str_s* zxwsf_sec_Token_GET_ref(struct zxwsf_sec_Token_s* x) { return x->ref; }
/* FUNC(zxwsf_sec_Token_PUT_ref) */
void zxwsf_sec_Token_PUT_ref(struct zxwsf_sec_Token_s* x, struct zx_str_s* y) { x->ref = y; }
/* FUNC(zxwsf_sec_Token_GET_usage) */
struct zx_str_s* zxwsf_sec_Token_GET_usage(struct zxwsf_sec_Token_s* x) { return x->usage; }
/* FUNC(zxwsf_sec_Token_PUT_usage) */
void zxwsf_sec_Token_PUT_usage(struct zxwsf_sec_Token_s* x, struct zx_str_s* y) { x->usage = y; }





/* FUNC(zxwsf_sec_TokenPolicy_GET_validUntil) */
struct zx_str_s* zxwsf_sec_TokenPolicy_GET_validUntil(struct zxwsf_sec_TokenPolicy_s* x) { return x->validUntil; }
/* FUNC(zxwsf_sec_TokenPolicy_PUT_validUntil) */
void zxwsf_sec_TokenPolicy_PUT_validUntil(struct zxwsf_sec_TokenPolicy_s* x, struct zx_str_s* y) { x->validUntil = y; }
/* FUNC(zxwsf_sec_TokenPolicy_GET_issueTo) */
struct zx_str_s* zxwsf_sec_TokenPolicy_GET_issueTo(struct zxwsf_sec_TokenPolicy_s* x) { return x->issueTo; }
/* FUNC(zxwsf_sec_TokenPolicy_PUT_issueTo) */
void zxwsf_sec_TokenPolicy_PUT_issueTo(struct zxwsf_sec_TokenPolicy_s* x, struct zx_str_s* y) { x->issueTo = y; }
/* FUNC(zxwsf_sec_TokenPolicy_GET_type) */
struct zx_str_s* zxwsf_sec_TokenPolicy_GET_type(struct zxwsf_sec_TokenPolicy_s* x) { return x->type; }
/* FUNC(zxwsf_sec_TokenPolicy_PUT_type) */
void zxwsf_sec_TokenPolicy_PUT_type(struct zxwsf_sec_TokenPolicy_s* x, struct zx_str_s* y) { x->type = y; }
/* FUNC(zxwsf_sec_TokenPolicy_GET_wantDSEPR) */
struct zx_str_s* zxwsf_sec_TokenPolicy_GET_wantDSEPR(struct zxwsf_sec_TokenPolicy_s* x) { return x->wantDSEPR; }
/* FUNC(zxwsf_sec_TokenPolicy_PUT_wantDSEPR) */
void zxwsf_sec_TokenPolicy_PUT_wantDSEPR(struct zxwsf_sec_TokenPolicy_s* x, struct zx_str_s* y) { x->wantDSEPR = y; }





/* FUNC(zxwsf_sec_TransitedProvider_GET_timeStamp) */
struct zx_str_s* zxwsf_sec_TransitedProvider_GET_timeStamp(struct zxwsf_sec_TransitedProvider_s* x) { return x->timeStamp; }
/* FUNC(zxwsf_sec_TransitedProvider_PUT_timeStamp) */
void zxwsf_sec_TransitedProvider_PUT_timeStamp(struct zxwsf_sec_TransitedProvider_s* x, struct zx_str_s* y) { x->timeStamp = y; }
/* FUNC(zxwsf_sec_TransitedProvider_GET_confirmationURI) */
struct zx_str_s* zxwsf_sec_TransitedProvider_GET_confirmationURI(struct zxwsf_sec_TransitedProvider_s* x) { return x->confirmationURI; }
/* FUNC(zxwsf_sec_TransitedProvider_PUT_confirmationURI) */
void zxwsf_sec_TransitedProvider_PUT_confirmationURI(struct zxwsf_sec_TransitedProvider_s* x, struct zx_str_s* y) { x->confirmationURI = y; }







/* FUNC(zxwsf_sec_TransitedProviderPath_NUM_TransitedProvider) */

int zxwsf_sec_TransitedProviderPath_NUM_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x)
{
  struct zxwsf_sec_TransitedProvider_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TransitedProvider; y; ++n, y = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_sec_TransitedProviderPath_GET_TransitedProvider) */

struct zxwsf_sec_TransitedProvider_s* zxwsf_sec_TransitedProviderPath_GET_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, int n)
{
  struct zxwsf_sec_TransitedProvider_s* y;
  if (!x) return 0;
  for (y = x->TransitedProvider; n>=0 && y; --n, y = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_sec_TransitedProviderPath_POP_TransitedProvider) */

struct zxwsf_sec_TransitedProvider_s* zxwsf_sec_TransitedProviderPath_POP_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x)
{
  struct zxwsf_sec_TransitedProvider_s* y;
  if (!x) return 0;
  y = x->TransitedProvider;
  if (y)
    x->TransitedProvider = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_sec_TransitedProviderPath_PUSH_TransitedProvider) */

void zxwsf_sec_TransitedProviderPath_PUSH_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, struct zxwsf_sec_TransitedProvider_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TransitedProvider->gg.g;
  x->TransitedProvider = z;
}

/* FUNC(zxwsf_sec_TransitedProviderPath_REV_TransitedProvider) */

void zxwsf_sec_TransitedProviderPath_REV_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x)
{
  struct zxwsf_sec_TransitedProvider_s* nxt;
  struct zxwsf_sec_TransitedProvider_s* y;
  if (!x) return;
  y = x->TransitedProvider;
  if (!y) return;
  x->TransitedProvider = 0;
  while (y) {
    nxt = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n;
    y->gg.g.n = &x->TransitedProvider->gg.g;
    x->TransitedProvider = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_sec_TransitedProviderPath_PUT_TransitedProvider) */

void zxwsf_sec_TransitedProviderPath_PUT_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, int n, struct zxwsf_sec_TransitedProvider_s* z)
{
  struct zxwsf_sec_TransitedProvider_s* y;
  if (!x || !z) return;
  y = x->TransitedProvider;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TransitedProvider = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_sec_TransitedProviderPath_ADD_TransitedProvider) */

void zxwsf_sec_TransitedProviderPath_ADD_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, int n, struct zxwsf_sec_TransitedProvider_s* z)
{
  struct zxwsf_sec_TransitedProvider_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TransitedProvider->gg.g;
    x->TransitedProvider = z;
    return;
  case -1:
    y = x->TransitedProvider;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TransitedProvider; n > 1 && y; --n, y = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_sec_TransitedProviderPath_DEL_TransitedProvider) */

void zxwsf_sec_TransitedProviderPath_DEL_TransitedProvider(struct zxwsf_sec_TransitedProviderPath_s* x, int n)
{
  struct zxwsf_sec_TransitedProvider_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TransitedProvider = (struct zxwsf_sec_TransitedProvider_s*)x->TransitedProvider->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_sec_TransitedProvider_s*)x->TransitedProvider;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TransitedProvider; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_sec_TransitedProvider_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}






/* FUNC(zxwsf_wsse_BinarySecurityToken_GET_Id) */
struct zx_str_s* zxwsf_wsse_BinarySecurityToken_GET_Id(struct zxwsf_wsse_BinarySecurityToken_s* x) { return x->Id; }
/* FUNC(zxwsf_wsse_BinarySecurityToken_PUT_Id) */
void zxwsf_wsse_BinarySecurityToken_PUT_Id(struct zxwsf_wsse_BinarySecurityToken_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxwsf_wsse_BinarySecurityToken_GET_EncodingType) */
struct zx_str_s* zxwsf_wsse_BinarySecurityToken_GET_EncodingType(struct zxwsf_wsse_BinarySecurityToken_s* x) { return x->EncodingType; }
/* FUNC(zxwsf_wsse_BinarySecurityToken_PUT_EncodingType) */
void zxwsf_wsse_BinarySecurityToken_PUT_EncodingType(struct zxwsf_wsse_BinarySecurityToken_s* x, struct zx_str_s* y) { x->EncodingType = y; }
/* FUNC(zxwsf_wsse_BinarySecurityToken_GET_ValueType) */
struct zx_str_s* zxwsf_wsse_BinarySecurityToken_GET_ValueType(struct zxwsf_wsse_BinarySecurityToken_s* x) { return x->ValueType; }
/* FUNC(zxwsf_wsse_BinarySecurityToken_PUT_ValueType) */
void zxwsf_wsse_BinarySecurityToken_PUT_ValueType(struct zxwsf_wsse_BinarySecurityToken_s* x, struct zx_str_s* y) { x->ValueType = y; }





/* FUNC(zxwsf_wsse_Embedded_GET_ValueType) */
struct zx_str_s* zxwsf_wsse_Embedded_GET_ValueType(struct zxwsf_wsse_Embedded_s* x) { return x->ValueType; }
/* FUNC(zxwsf_wsse_Embedded_PUT_ValueType) */
void zxwsf_wsse_Embedded_PUT_ValueType(struct zxwsf_wsse_Embedded_s* x, struct zx_str_s* y) { x->ValueType = y; }





/* FUNC(zxwsf_wsse_KeyIdentifier_GET_Id) */
struct zx_str_s* zxwsf_wsse_KeyIdentifier_GET_Id(struct zxwsf_wsse_KeyIdentifier_s* x) { return x->Id; }
/* FUNC(zxwsf_wsse_KeyIdentifier_PUT_Id) */
void zxwsf_wsse_KeyIdentifier_PUT_Id(struct zxwsf_wsse_KeyIdentifier_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxwsf_wsse_KeyIdentifier_GET_EncodingType) */
struct zx_str_s* zxwsf_wsse_KeyIdentifier_GET_EncodingType(struct zxwsf_wsse_KeyIdentifier_s* x) { return x->EncodingType; }
/* FUNC(zxwsf_wsse_KeyIdentifier_PUT_EncodingType) */
void zxwsf_wsse_KeyIdentifier_PUT_EncodingType(struct zxwsf_wsse_KeyIdentifier_s* x, struct zx_str_s* y) { x->EncodingType = y; }
/* FUNC(zxwsf_wsse_KeyIdentifier_GET_ValueType) */
struct zx_str_s* zxwsf_wsse_KeyIdentifier_GET_ValueType(struct zxwsf_wsse_KeyIdentifier_s* x) { return x->ValueType; }
/* FUNC(zxwsf_wsse_KeyIdentifier_PUT_ValueType) */
void zxwsf_wsse_KeyIdentifier_PUT_ValueType(struct zxwsf_wsse_KeyIdentifier_s* x, struct zx_str_s* y) { x->ValueType = y; }





/* FUNC(zxwsf_wsse_Nonce_GET_Id) */
struct zx_str_s* zxwsf_wsse_Nonce_GET_Id(struct zxwsf_wsse_Nonce_s* x) { return x->Id; }
/* FUNC(zxwsf_wsse_Nonce_PUT_Id) */
void zxwsf_wsse_Nonce_PUT_Id(struct zxwsf_wsse_Nonce_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxwsf_wsse_Nonce_GET_EncodingType) */
struct zx_str_s* zxwsf_wsse_Nonce_GET_EncodingType(struct zxwsf_wsse_Nonce_s* x) { return x->EncodingType; }
/* FUNC(zxwsf_wsse_Nonce_PUT_EncodingType) */
void zxwsf_wsse_Nonce_PUT_EncodingType(struct zxwsf_wsse_Nonce_s* x, struct zx_str_s* y) { x->EncodingType = y; }





/* FUNC(zxwsf_wsse_Password_GET_Id) */
struct zx_str_s* zxwsf_wsse_Password_GET_Id(struct zxwsf_wsse_Password_s* x) { return x->Id; }
/* FUNC(zxwsf_wsse_Password_PUT_Id) */
void zxwsf_wsse_Password_PUT_Id(struct zxwsf_wsse_Password_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxwsf_wsse_Password_GET_Type) */
struct zx_str_s* zxwsf_wsse_Password_GET_Type(struct zxwsf_wsse_Password_s* x) { return x->Type; }
/* FUNC(zxwsf_wsse_Password_PUT_Type) */
void zxwsf_wsse_Password_PUT_Type(struct zxwsf_wsse_Password_s* x, struct zx_str_s* y) { x->Type = y; }





/* FUNC(zxwsf_wsse_Reference_GET_URI) */
struct zx_str_s* zxwsf_wsse_Reference_GET_URI(struct zxwsf_wsse_Reference_s* x) { return x->URI; }
/* FUNC(zxwsf_wsse_Reference_PUT_URI) */
void zxwsf_wsse_Reference_PUT_URI(struct zxwsf_wsse_Reference_s* x, struct zx_str_s* y) { x->URI = y; }
/* FUNC(zxwsf_wsse_Reference_GET_ValueType) */
struct zx_str_s* zxwsf_wsse_Reference_GET_ValueType(struct zxwsf_wsse_Reference_s* x) { return x->ValueType; }
/* FUNC(zxwsf_wsse_Reference_PUT_ValueType) */
void zxwsf_wsse_Reference_PUT_ValueType(struct zxwsf_wsse_Reference_s* x, struct zx_str_s* y) { x->ValueType = y; }










/* FUNC(zxwsf_wsse_SecurityTokenReference_GET_Id) */
struct zx_str_s* zxwsf_wsse_SecurityTokenReference_GET_Id(struct zxwsf_wsse_SecurityTokenReference_s* x) { return x->Id; }
/* FUNC(zxwsf_wsse_SecurityTokenReference_PUT_Id) */
void zxwsf_wsse_SecurityTokenReference_PUT_Id(struct zxwsf_wsse_SecurityTokenReference_s* x, struct zx_str_s* y) { x->Id = y; }
/* FUNC(zxwsf_wsse_SecurityTokenReference_GET_Usage) */
struct zx_str_s* zxwsf_wsse_SecurityTokenReference_GET_Usage(struct zxwsf_wsse_SecurityTokenReference_s* x) { return x->Usage; }
/* FUNC(zxwsf_wsse_SecurityTokenReference_PUT_Usage) */
void zxwsf_wsse_SecurityTokenReference_PUT_Usage(struct zxwsf_wsse_SecurityTokenReference_s* x, struct zx_str_s* y) { x->Usage = y; }










/* FUNC(zxwsf_wsse_Username_GET_Id) */
struct zx_str_s* zxwsf_wsse_Username_GET_Id(struct zxwsf_wsse_Username_s* x) { return x->Id; }
/* FUNC(zxwsf_wsse_Username_PUT_Id) */
void zxwsf_wsse_Username_PUT_Id(struct zxwsf_wsse_Username_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxwsf_wsse_UsernameToken_NUM_Username) */

int zxwsf_wsse_UsernameToken_NUM_Username(struct zxwsf_wsse_UsernameToken_s* x)
{
  struct zxwsf_wsse_Username_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Username; y; ++n, y = (struct zxwsf_wsse_Username_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_wsse_UsernameToken_GET_Username) */

struct zxwsf_wsse_Username_s* zxwsf_wsse_UsernameToken_GET_Username(struct zxwsf_wsse_UsernameToken_s* x, int n)
{
  struct zxwsf_wsse_Username_s* y;
  if (!x) return 0;
  for (y = x->Username; n>=0 && y; --n, y = (struct zxwsf_wsse_Username_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_wsse_UsernameToken_POP_Username) */

struct zxwsf_wsse_Username_s* zxwsf_wsse_UsernameToken_POP_Username(struct zxwsf_wsse_UsernameToken_s* x)
{
  struct zxwsf_wsse_Username_s* y;
  if (!x) return 0;
  y = x->Username;
  if (y)
    x->Username = (struct zxwsf_wsse_Username_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_wsse_UsernameToken_PUSH_Username) */

void zxwsf_wsse_UsernameToken_PUSH_Username(struct zxwsf_wsse_UsernameToken_s* x, struct zxwsf_wsse_Username_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Username->gg.g;
  x->Username = z;
}

/* FUNC(zxwsf_wsse_UsernameToken_REV_Username) */

void zxwsf_wsse_UsernameToken_REV_Username(struct zxwsf_wsse_UsernameToken_s* x)
{
  struct zxwsf_wsse_Username_s* nxt;
  struct zxwsf_wsse_Username_s* y;
  if (!x) return;
  y = x->Username;
  if (!y) return;
  x->Username = 0;
  while (y) {
    nxt = (struct zxwsf_wsse_Username_s*)y->gg.g.n;
    y->gg.g.n = &x->Username->gg.g;
    x->Username = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_wsse_UsernameToken_PUT_Username) */

void zxwsf_wsse_UsernameToken_PUT_Username(struct zxwsf_wsse_UsernameToken_s* x, int n, struct zxwsf_wsse_Username_s* z)
{
  struct zxwsf_wsse_Username_s* y;
  if (!x || !z) return;
  y = x->Username;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Username = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_wsse_Username_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_wsse_UsernameToken_ADD_Username) */

void zxwsf_wsse_UsernameToken_ADD_Username(struct zxwsf_wsse_UsernameToken_s* x, int n, struct zxwsf_wsse_Username_s* z)
{
  struct zxwsf_wsse_Username_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Username->gg.g;
    x->Username = z;
    return;
  case -1:
    y = x->Username;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_wsse_Username_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Username; n > 1 && y; --n, y = (struct zxwsf_wsse_Username_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_wsse_UsernameToken_DEL_Username) */

void zxwsf_wsse_UsernameToken_DEL_Username(struct zxwsf_wsse_UsernameToken_s* x, int n)
{
  struct zxwsf_wsse_Username_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Username = (struct zxwsf_wsse_Username_s*)x->Username->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_wsse_Username_s*)x->Username;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_wsse_Username_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Username; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_wsse_Username_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_wsse_UsernameToken_GET_Id) */
struct zx_str_s* zxwsf_wsse_UsernameToken_GET_Id(struct zxwsf_wsse_UsernameToken_s* x) { return x->Id; }
/* FUNC(zxwsf_wsse_UsernameToken_PUT_Id) */
void zxwsf_wsse_UsernameToken_PUT_Id(struct zxwsf_wsse_UsernameToken_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zxwsf_wsu_Created_GET_Id) */
struct zx_str_s* zxwsf_wsu_Created_GET_Id(struct zxwsf_wsu_Created_s* x) { return x->Id; }
/* FUNC(zxwsf_wsu_Created_PUT_Id) */
void zxwsf_wsu_Created_PUT_Id(struct zxwsf_wsu_Created_s* x, struct zx_str_s* y) { x->Id = y; }





/* FUNC(zxwsf_wsu_Expires_GET_Id) */
struct zx_str_s* zxwsf_wsu_Expires_GET_Id(struct zxwsf_wsu_Expires_s* x) { return x->Id; }
/* FUNC(zxwsf_wsu_Expires_PUT_Id) */
void zxwsf_wsu_Expires_PUT_Id(struct zxwsf_wsu_Expires_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxwsf_wsu_Timestamp_NUM_Created) */

int zxwsf_wsu_Timestamp_NUM_Created(struct zxwsf_wsu_Timestamp_s* x)
{
  struct zxwsf_wsu_Created_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Created; y; ++n, y = (struct zxwsf_wsu_Created_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_wsu_Timestamp_GET_Created) */

struct zxwsf_wsu_Created_s* zxwsf_wsu_Timestamp_GET_Created(struct zxwsf_wsu_Timestamp_s* x, int n)
{
  struct zxwsf_wsu_Created_s* y;
  if (!x) return 0;
  for (y = x->Created; n>=0 && y; --n, y = (struct zxwsf_wsu_Created_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_wsu_Timestamp_POP_Created) */

struct zxwsf_wsu_Created_s* zxwsf_wsu_Timestamp_POP_Created(struct zxwsf_wsu_Timestamp_s* x)
{
  struct zxwsf_wsu_Created_s* y;
  if (!x) return 0;
  y = x->Created;
  if (y)
    x->Created = (struct zxwsf_wsu_Created_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_wsu_Timestamp_PUSH_Created) */

void zxwsf_wsu_Timestamp_PUSH_Created(struct zxwsf_wsu_Timestamp_s* x, struct zxwsf_wsu_Created_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Created->gg.g;
  x->Created = z;
}

/* FUNC(zxwsf_wsu_Timestamp_REV_Created) */

void zxwsf_wsu_Timestamp_REV_Created(struct zxwsf_wsu_Timestamp_s* x)
{
  struct zxwsf_wsu_Created_s* nxt;
  struct zxwsf_wsu_Created_s* y;
  if (!x) return;
  y = x->Created;
  if (!y) return;
  x->Created = 0;
  while (y) {
    nxt = (struct zxwsf_wsu_Created_s*)y->gg.g.n;
    y->gg.g.n = &x->Created->gg.g;
    x->Created = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_wsu_Timestamp_PUT_Created) */

void zxwsf_wsu_Timestamp_PUT_Created(struct zxwsf_wsu_Timestamp_s* x, int n, struct zxwsf_wsu_Created_s* z)
{
  struct zxwsf_wsu_Created_s* y;
  if (!x || !z) return;
  y = x->Created;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Created = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_wsu_Created_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_wsu_Timestamp_ADD_Created) */

void zxwsf_wsu_Timestamp_ADD_Created(struct zxwsf_wsu_Timestamp_s* x, int n, struct zxwsf_wsu_Created_s* z)
{
  struct zxwsf_wsu_Created_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Created->gg.g;
    x->Created = z;
    return;
  case -1:
    y = x->Created;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_wsu_Created_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Created; n > 1 && y; --n, y = (struct zxwsf_wsu_Created_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_wsu_Timestamp_DEL_Created) */

void zxwsf_wsu_Timestamp_DEL_Created(struct zxwsf_wsu_Timestamp_s* x, int n)
{
  struct zxwsf_wsu_Created_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Created = (struct zxwsf_wsu_Created_s*)x->Created->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_wsu_Created_s*)x->Created;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_wsu_Created_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Created; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_wsu_Created_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_wsu_Timestamp_NUM_Expires) */

int zxwsf_wsu_Timestamp_NUM_Expires(struct zxwsf_wsu_Timestamp_s* x)
{
  struct zxwsf_wsu_Expires_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Expires; y; ++n, y = (struct zxwsf_wsu_Expires_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_wsu_Timestamp_GET_Expires) */

struct zxwsf_wsu_Expires_s* zxwsf_wsu_Timestamp_GET_Expires(struct zxwsf_wsu_Timestamp_s* x, int n)
{
  struct zxwsf_wsu_Expires_s* y;
  if (!x) return 0;
  for (y = x->Expires; n>=0 && y; --n, y = (struct zxwsf_wsu_Expires_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_wsu_Timestamp_POP_Expires) */

struct zxwsf_wsu_Expires_s* zxwsf_wsu_Timestamp_POP_Expires(struct zxwsf_wsu_Timestamp_s* x)
{
  struct zxwsf_wsu_Expires_s* y;
  if (!x) return 0;
  y = x->Expires;
  if (y)
    x->Expires = (struct zxwsf_wsu_Expires_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_wsu_Timestamp_PUSH_Expires) */

void zxwsf_wsu_Timestamp_PUSH_Expires(struct zxwsf_wsu_Timestamp_s* x, struct zxwsf_wsu_Expires_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Expires->gg.g;
  x->Expires = z;
}

/* FUNC(zxwsf_wsu_Timestamp_REV_Expires) */

void zxwsf_wsu_Timestamp_REV_Expires(struct zxwsf_wsu_Timestamp_s* x)
{
  struct zxwsf_wsu_Expires_s* nxt;
  struct zxwsf_wsu_Expires_s* y;
  if (!x) return;
  y = x->Expires;
  if (!y) return;
  x->Expires = 0;
  while (y) {
    nxt = (struct zxwsf_wsu_Expires_s*)y->gg.g.n;
    y->gg.g.n = &x->Expires->gg.g;
    x->Expires = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_wsu_Timestamp_PUT_Expires) */

void zxwsf_wsu_Timestamp_PUT_Expires(struct zxwsf_wsu_Timestamp_s* x, int n, struct zxwsf_wsu_Expires_s* z)
{
  struct zxwsf_wsu_Expires_s* y;
  if (!x || !z) return;
  y = x->Expires;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Expires = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_wsu_Expires_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_wsu_Timestamp_ADD_Expires) */

void zxwsf_wsu_Timestamp_ADD_Expires(struct zxwsf_wsu_Timestamp_s* x, int n, struct zxwsf_wsu_Expires_s* z)
{
  struct zxwsf_wsu_Expires_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Expires->gg.g;
    x->Expires = z;
    return;
  case -1:
    y = x->Expires;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_wsu_Expires_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Expires; n > 1 && y; --n, y = (struct zxwsf_wsu_Expires_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_wsu_Timestamp_DEL_Expires) */

void zxwsf_wsu_Timestamp_DEL_Expires(struct zxwsf_wsu_Timestamp_s* x, int n)
{
  struct zxwsf_wsu_Expires_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Expires = (struct zxwsf_wsu_Expires_s*)x->Expires->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_wsu_Expires_s*)x->Expires;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_wsu_Expires_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Expires; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_wsu_Expires_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zxwsf_wsu_Timestamp_GET_Id) */
struct zx_str_s* zxwsf_wsu_Timestamp_GET_Id(struct zxwsf_wsu_Timestamp_s* x) { return x->Id; }
/* FUNC(zxwsf_wsu_Timestamp_PUT_Id) */
void zxwsf_wsu_Timestamp_PUT_Id(struct zxwsf_wsu_Timestamp_s* x, struct zx_str_s* y) { x->Id = y; }







/* FUNC(zxwsf_root_NUM_Envelope) */

int zxwsf_root_NUM_Envelope(struct zxwsf_root_s* x)
{
  struct zxwsf_e_Envelope_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Envelope; y; ++n, y = (struct zxwsf_e_Envelope_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_root_GET_Envelope) */

struct zxwsf_e_Envelope_s* zxwsf_root_GET_Envelope(struct zxwsf_root_s* x, int n)
{
  struct zxwsf_e_Envelope_s* y;
  if (!x) return 0;
  for (y = x->Envelope; n>=0 && y; --n, y = (struct zxwsf_e_Envelope_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_root_POP_Envelope) */

struct zxwsf_e_Envelope_s* zxwsf_root_POP_Envelope(struct zxwsf_root_s* x)
{
  struct zxwsf_e_Envelope_s* y;
  if (!x) return 0;
  y = x->Envelope;
  if (y)
    x->Envelope = (struct zxwsf_e_Envelope_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_root_PUSH_Envelope) */

void zxwsf_root_PUSH_Envelope(struct zxwsf_root_s* x, struct zxwsf_e_Envelope_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Envelope->gg.g;
  x->Envelope = z;
}

/* FUNC(zxwsf_root_REV_Envelope) */

void zxwsf_root_REV_Envelope(struct zxwsf_root_s* x)
{
  struct zxwsf_e_Envelope_s* nxt;
  struct zxwsf_e_Envelope_s* y;
  if (!x) return;
  y = x->Envelope;
  if (!y) return;
  x->Envelope = 0;
  while (y) {
    nxt = (struct zxwsf_e_Envelope_s*)y->gg.g.n;
    y->gg.g.n = &x->Envelope->gg.g;
    x->Envelope = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_root_PUT_Envelope) */

void zxwsf_root_PUT_Envelope(struct zxwsf_root_s* x, int n, struct zxwsf_e_Envelope_s* z)
{
  struct zxwsf_e_Envelope_s* y;
  if (!x || !z) return;
  y = x->Envelope;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Envelope = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_Envelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_root_ADD_Envelope) */

void zxwsf_root_ADD_Envelope(struct zxwsf_root_s* x, int n, struct zxwsf_e_Envelope_s* z)
{
  struct zxwsf_e_Envelope_s* y;
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
    for (; y->gg.g.n; y = (struct zxwsf_e_Envelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Envelope; n > 1 && y; --n, y = (struct zxwsf_e_Envelope_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_root_DEL_Envelope) */

void zxwsf_root_DEL_Envelope(struct zxwsf_root_s* x, int n)
{
  struct zxwsf_e_Envelope_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Envelope = (struct zxwsf_e_Envelope_s*)x->Envelope->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_e_Envelope_s*)x->Envelope;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_e_Envelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Envelope; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_e_Envelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zxwsf_root_NUM_dise_Envelope) */

int zxwsf_root_NUM_dise_Envelope(struct zxwsf_root_s* x)
{
  struct zxwsf_dise_Envelope_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->dise_Envelope; y; ++n, y = (struct zxwsf_dise_Envelope_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zxwsf_root_GET_dise_Envelope) */

struct zxwsf_dise_Envelope_s* zxwsf_root_GET_dise_Envelope(struct zxwsf_root_s* x, int n)
{
  struct zxwsf_dise_Envelope_s* y;
  if (!x) return 0;
  for (y = x->dise_Envelope; n>=0 && y; --n, y = (struct zxwsf_dise_Envelope_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zxwsf_root_POP_dise_Envelope) */

struct zxwsf_dise_Envelope_s* zxwsf_root_POP_dise_Envelope(struct zxwsf_root_s* x)
{
  struct zxwsf_dise_Envelope_s* y;
  if (!x) return 0;
  y = x->dise_Envelope;
  if (y)
    x->dise_Envelope = (struct zxwsf_dise_Envelope_s*)y->gg.g.n;
  return y;
}

/* FUNC(zxwsf_root_PUSH_dise_Envelope) */

void zxwsf_root_PUSH_dise_Envelope(struct zxwsf_root_s* x, struct zxwsf_dise_Envelope_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->dise_Envelope->gg.g;
  x->dise_Envelope = z;
}

/* FUNC(zxwsf_root_REV_dise_Envelope) */

void zxwsf_root_REV_dise_Envelope(struct zxwsf_root_s* x)
{
  struct zxwsf_dise_Envelope_s* nxt;
  struct zxwsf_dise_Envelope_s* y;
  if (!x) return;
  y = x->dise_Envelope;
  if (!y) return;
  x->dise_Envelope = 0;
  while (y) {
    nxt = (struct zxwsf_dise_Envelope_s*)y->gg.g.n;
    y->gg.g.n = &x->dise_Envelope->gg.g;
    x->dise_Envelope = y;
    y = nxt;
  }
}

/* FUNC(zxwsf_root_PUT_dise_Envelope) */

void zxwsf_root_PUT_dise_Envelope(struct zxwsf_root_s* x, int n, struct zxwsf_dise_Envelope_s* z)
{
  struct zxwsf_dise_Envelope_s* y;
  if (!x || !z) return;
  y = x->dise_Envelope;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->dise_Envelope = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_Envelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zxwsf_root_ADD_dise_Envelope) */

void zxwsf_root_ADD_dise_Envelope(struct zxwsf_root_s* x, int n, struct zxwsf_dise_Envelope_s* z)
{
  struct zxwsf_dise_Envelope_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->dise_Envelope->gg.g;
    x->dise_Envelope = z;
    return;
  case -1:
    y = x->dise_Envelope;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zxwsf_dise_Envelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dise_Envelope; n > 1 && y; --n, y = (struct zxwsf_dise_Envelope_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zxwsf_root_DEL_dise_Envelope) */

void zxwsf_root_DEL_dise_Envelope(struct zxwsf_root_s* x, int n)
{
  struct zxwsf_dise_Envelope_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->dise_Envelope = (struct zxwsf_dise_Envelope_s*)x->dise_Envelope->gg.g.n;
    return;
  case -1:
    y = (struct zxwsf_dise_Envelope_s*)x->dise_Envelope;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zxwsf_dise_Envelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dise_Envelope; n > 1 && y->gg.g.n; --n, y = (struct zxwsf_dise_Envelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}











