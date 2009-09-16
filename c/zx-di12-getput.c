/* c/zx-di12-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
 ** Id: getput-templ.c,v 1.8 2009-08-30 15:09:26 sampo Exp $
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
#include "c/zx-di12-data.h"

/* FUNC(zx_di12_AuthenticateRequester_GET_descriptionIDRefs) */
struct zx_str* zx_di12_AuthenticateRequester_GET_descriptionIDRefs(struct zx_di12_AuthenticateRequester_s* x) { return x->descriptionIDRefs; }
/* FUNC(zx_di12_AuthenticateRequester_PUT_descriptionIDRefs) */
void zx_di12_AuthenticateRequester_PUT_descriptionIDRefs(struct zx_di12_AuthenticateRequester_s* x, struct zx_str* y) { x->descriptionIDRefs = y; }





/* FUNC(zx_di12_AuthenticateSessionContext_GET_descriptionIDRefs) */
struct zx_str* zx_di12_AuthenticateSessionContext_GET_descriptionIDRefs(struct zx_di12_AuthenticateSessionContext_s* x) { return x->descriptionIDRefs; }
/* FUNC(zx_di12_AuthenticateSessionContext_PUT_descriptionIDRefs) */
void zx_di12_AuthenticateSessionContext_PUT_descriptionIDRefs(struct zx_di12_AuthenticateSessionContext_s* x, struct zx_str* y) { x->descriptionIDRefs = y; }





/* FUNC(zx_di12_AuthorizeRequester_GET_descriptionIDRefs) */
struct zx_str* zx_di12_AuthorizeRequester_GET_descriptionIDRefs(struct zx_di12_AuthorizeRequester_s* x) { return x->descriptionIDRefs; }
/* FUNC(zx_di12_AuthorizeRequester_PUT_descriptionIDRefs) */
void zx_di12_AuthorizeRequester_PUT_descriptionIDRefs(struct zx_di12_AuthorizeRequester_s* x, struct zx_str* y) { x->descriptionIDRefs = y; }












#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Description_NUM_SecurityMechID) */

int zx_di12_Description_NUM_SecurityMechID(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_Description_GET_SecurityMechID) */

struct zx_elem_s* zx_di12_Description_GET_SecurityMechID(struct zx_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_Description_POP_SecurityMechID) */

struct zx_elem_s* zx_di12_Description_POP_SecurityMechID(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_Description_PUSH_SecurityMechID) */

void zx_di12_Description_PUSH_SecurityMechID(struct zx_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_di12_Description_REV_SecurityMechID) */

void zx_di12_Description_REV_SecurityMechID(struct zx_di12_Description_s* x)
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

/* FUNC(zx_di12_Description_PUT_SecurityMechID) */

void zx_di12_Description_PUT_SecurityMechID(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_ADD_SecurityMechID) */

void zx_di12_Description_ADD_SecurityMechID(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_DEL_SecurityMechID) */

void zx_di12_Description_DEL_SecurityMechID(struct zx_di12_Description_s* x, int n)
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

/* FUNC(zx_di12_Description_NUM_CredentialRef) */

int zx_di12_Description_NUM_CredentialRef(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CredentialRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_Description_GET_CredentialRef) */

struct zx_elem_s* zx_di12_Description_GET_CredentialRef(struct zx_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CredentialRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_Description_POP_CredentialRef) */

struct zx_elem_s* zx_di12_Description_POP_CredentialRef(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CredentialRef;
  if (y)
    x->CredentialRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_Description_PUSH_CredentialRef) */

void zx_di12_Description_PUSH_CredentialRef(struct zx_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CredentialRef->g;
  x->CredentialRef = z;
}

/* FUNC(zx_di12_Description_REV_CredentialRef) */

void zx_di12_Description_REV_CredentialRef(struct zx_di12_Description_s* x)
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

/* FUNC(zx_di12_Description_PUT_CredentialRef) */

void zx_di12_Description_PUT_CredentialRef(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_ADD_CredentialRef) */

void zx_di12_Description_ADD_CredentialRef(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_DEL_CredentialRef) */

void zx_di12_Description_DEL_CredentialRef(struct zx_di12_Description_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Description_NUM_WsdlURI) */

int zx_di12_Description_NUM_WsdlURI(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->WsdlURI; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_Description_GET_WsdlURI) */

struct zx_elem_s* zx_di12_Description_GET_WsdlURI(struct zx_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->WsdlURI; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_Description_POP_WsdlURI) */

struct zx_elem_s* zx_di12_Description_POP_WsdlURI(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->WsdlURI;
  if (y)
    x->WsdlURI = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_Description_PUSH_WsdlURI) */

void zx_di12_Description_PUSH_WsdlURI(struct zx_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->WsdlURI->g;
  x->WsdlURI = z;
}

/* FUNC(zx_di12_Description_REV_WsdlURI) */

void zx_di12_Description_REV_WsdlURI(struct zx_di12_Description_s* x)
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

/* FUNC(zx_di12_Description_PUT_WsdlURI) */

void zx_di12_Description_PUT_WsdlURI(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_ADD_WsdlURI) */

void zx_di12_Description_ADD_WsdlURI(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_DEL_WsdlURI) */

void zx_di12_Description_DEL_WsdlURI(struct zx_di12_Description_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Description_NUM_ServiceNameRef) */

int zx_di12_Description_NUM_ServiceNameRef(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceNameRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_Description_GET_ServiceNameRef) */

struct zx_elem_s* zx_di12_Description_GET_ServiceNameRef(struct zx_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceNameRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_Description_POP_ServiceNameRef) */

struct zx_elem_s* zx_di12_Description_POP_ServiceNameRef(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceNameRef;
  if (y)
    x->ServiceNameRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_Description_PUSH_ServiceNameRef) */

void zx_di12_Description_PUSH_ServiceNameRef(struct zx_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceNameRef->g;
  x->ServiceNameRef = z;
}

/* FUNC(zx_di12_Description_REV_ServiceNameRef) */

void zx_di12_Description_REV_ServiceNameRef(struct zx_di12_Description_s* x)
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

/* FUNC(zx_di12_Description_PUT_ServiceNameRef) */

void zx_di12_Description_PUT_ServiceNameRef(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_ADD_ServiceNameRef) */

void zx_di12_Description_ADD_ServiceNameRef(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_DEL_ServiceNameRef) */

void zx_di12_Description_DEL_ServiceNameRef(struct zx_di12_Description_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Description_NUM_Endpoint) */

int zx_di12_Description_NUM_Endpoint(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Endpoint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_Description_GET_Endpoint) */

struct zx_elem_s* zx_di12_Description_GET_Endpoint(struct zx_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Endpoint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_Description_POP_Endpoint) */

struct zx_elem_s* zx_di12_Description_POP_Endpoint(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Endpoint;
  if (y)
    x->Endpoint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_Description_PUSH_Endpoint) */

void zx_di12_Description_PUSH_Endpoint(struct zx_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Endpoint->g;
  x->Endpoint = z;
}

/* FUNC(zx_di12_Description_REV_Endpoint) */

void zx_di12_Description_REV_Endpoint(struct zx_di12_Description_s* x)
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

/* FUNC(zx_di12_Description_PUT_Endpoint) */

void zx_di12_Description_PUT_Endpoint(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_ADD_Endpoint) */

void zx_di12_Description_ADD_Endpoint(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_DEL_Endpoint) */

void zx_di12_Description_DEL_Endpoint(struct zx_di12_Description_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Description_NUM_SoapAction) */

int zx_di12_Description_NUM_SoapAction(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SoapAction; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_Description_GET_SoapAction) */

struct zx_elem_s* zx_di12_Description_GET_SoapAction(struct zx_di12_Description_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SoapAction; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_Description_POP_SoapAction) */

struct zx_elem_s* zx_di12_Description_POP_SoapAction(struct zx_di12_Description_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SoapAction;
  if (y)
    x->SoapAction = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_Description_PUSH_SoapAction) */

void zx_di12_Description_PUSH_SoapAction(struct zx_di12_Description_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SoapAction->g;
  x->SoapAction = z;
}

/* FUNC(zx_di12_Description_REV_SoapAction) */

void zx_di12_Description_REV_SoapAction(struct zx_di12_Description_s* x)
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

/* FUNC(zx_di12_Description_PUT_SoapAction) */

void zx_di12_Description_PUT_SoapAction(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_ADD_SoapAction) */

void zx_di12_Description_ADD_SoapAction(struct zx_di12_Description_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Description_DEL_SoapAction) */

void zx_di12_Description_DEL_SoapAction(struct zx_di12_Description_s* x, int n)
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

#endif

/* FUNC(zx_di12_Description_GET_id) */
struct zx_str* zx_di12_Description_GET_id(struct zx_di12_Description_s* x) { return x->id; }
/* FUNC(zx_di12_Description_PUT_id) */
void zx_di12_Description_PUT_id(struct zx_di12_Description_s* x, struct zx_str* y) { x->id = y; }





/* FUNC(zx_di12_EncryptResourceID_GET_descriptionIDRefs) */
struct zx_str* zx_di12_EncryptResourceID_GET_descriptionIDRefs(struct zx_di12_EncryptResourceID_s* x) { return x->descriptionIDRefs; }
/* FUNC(zx_di12_EncryptResourceID_PUT_descriptionIDRefs) */
void zx_di12_EncryptResourceID_PUT_descriptionIDRefs(struct zx_di12_EncryptResourceID_s* x, struct zx_str* y) { x->descriptionIDRefs = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_EncryptedResourceID_NUM_EncryptedData) */

int zx_di12_EncryptedResourceID_NUM_EncryptedData(struct zx_di12_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_EncryptedResourceID_GET_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_di12_EncryptedResourceID_GET_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_EncryptedResourceID_POP_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_di12_EncryptedResourceID_POP_EncryptedData(struct zx_di12_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_EncryptedResourceID_PUSH_EncryptedData) */

void zx_di12_EncryptedResourceID_PUSH_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, struct zx_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zx_di12_EncryptedResourceID_REV_EncryptedData) */

void zx_di12_EncryptedResourceID_REV_EncryptedData(struct zx_di12_EncryptedResourceID_s* x)
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

/* FUNC(zx_di12_EncryptedResourceID_PUT_EncryptedData) */

void zx_di12_EncryptedResourceID_PUT_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
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

/* FUNC(zx_di12_EncryptedResourceID_ADD_EncryptedData) */

void zx_di12_EncryptedResourceID_ADD_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
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

/* FUNC(zx_di12_EncryptedResourceID_DEL_EncryptedData) */

void zx_di12_EncryptedResourceID_DEL_EncryptedData(struct zx_di12_EncryptedResourceID_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_EncryptedResourceID_NUM_EncryptedKey) */

int zx_di12_EncryptedResourceID_NUM_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_EncryptedResourceID_GET_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_di12_EncryptedResourceID_GET_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_EncryptedResourceID_POP_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_di12_EncryptedResourceID_POP_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_EncryptedResourceID_PUSH_EncryptedKey) */

void zx_di12_EncryptedResourceID_PUSH_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, struct zx_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zx_di12_EncryptedResourceID_REV_EncryptedKey) */

void zx_di12_EncryptedResourceID_REV_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x)
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

/* FUNC(zx_di12_EncryptedResourceID_PUT_EncryptedKey) */

void zx_di12_EncryptedResourceID_PUT_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
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

/* FUNC(zx_di12_EncryptedResourceID_ADD_EncryptedKey) */

void zx_di12_EncryptedResourceID_ADD_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
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

/* FUNC(zx_di12_EncryptedResourceID_DEL_EncryptedKey) */

void zx_di12_EncryptedResourceID_DEL_EncryptedKey(struct zx_di12_EncryptedResourceID_s* x, int n)
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

#endif













#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_InsertEntry_NUM_ResourceOffering) */

int zx_di12_InsertEntry_NUM_ResourceOffering(struct zx_di12_InsertEntry_s* x)
{
  struct zx_di12_ResourceOffering_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceOffering; y; ++n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_InsertEntry_GET_ResourceOffering) */

struct zx_di12_ResourceOffering_s* zx_di12_InsertEntry_GET_ResourceOffering(struct zx_di12_InsertEntry_s* x, int n)
{
  struct zx_di12_ResourceOffering_s* y;
  if (!x) return 0;
  for (y = x->ResourceOffering; n>=0 && y; --n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_InsertEntry_POP_ResourceOffering) */

struct zx_di12_ResourceOffering_s* zx_di12_InsertEntry_POP_ResourceOffering(struct zx_di12_InsertEntry_s* x)
{
  struct zx_di12_ResourceOffering_s* y;
  if (!x) return 0;
  y = x->ResourceOffering;
  if (y)
    x->ResourceOffering = (struct zx_di12_ResourceOffering_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_InsertEntry_PUSH_ResourceOffering) */

void zx_di12_InsertEntry_PUSH_ResourceOffering(struct zx_di12_InsertEntry_s* x, struct zx_di12_ResourceOffering_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceOffering->gg.g;
  x->ResourceOffering = z;
}

/* FUNC(zx_di12_InsertEntry_REV_ResourceOffering) */

void zx_di12_InsertEntry_REV_ResourceOffering(struct zx_di12_InsertEntry_s* x)
{
  struct zx_di12_ResourceOffering_s* nxt;
  struct zx_di12_ResourceOffering_s* y;
  if (!x) return;
  y = x->ResourceOffering;
  if (!y) return;
  x->ResourceOffering = 0;
  while (y) {
    nxt = (struct zx_di12_ResourceOffering_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceOffering->gg.g;
    x->ResourceOffering = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_InsertEntry_PUT_ResourceOffering) */

void zx_di12_InsertEntry_PUT_ResourceOffering(struct zx_di12_InsertEntry_s* x, int n, struct zx_di12_ResourceOffering_s* z)
{
  struct zx_di12_ResourceOffering_s* y;
  if (!x || !z) return;
  y = x->ResourceOffering;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceOffering = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_InsertEntry_ADD_ResourceOffering) */

void zx_di12_InsertEntry_ADD_ResourceOffering(struct zx_di12_InsertEntry_s* x, int n, struct zx_di12_ResourceOffering_s* z)
{
  struct zx_di12_ResourceOffering_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceOffering; n > 1 && y; --n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_InsertEntry_DEL_ResourceOffering) */

void zx_di12_InsertEntry_DEL_ResourceOffering(struct zx_di12_InsertEntry_s* x, int n)
{
  struct zx_di12_ResourceOffering_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceOffering = (struct zx_di12_ResourceOffering_s*)x->ResourceOffering->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ResourceOffering_s*)x->ResourceOffering;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceOffering; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Modify_NUM_ResourceID) */

int zx_di12_Modify_NUM_ResourceID(struct zx_di12_Modify_s* x)
{
  struct zx_di12_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_Modify_GET_ResourceID) */

struct zx_di12_ResourceID_s* zx_di12_Modify_GET_ResourceID(struct zx_di12_Modify_s* x, int n)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_Modify_POP_ResourceID) */

struct zx_di12_ResourceID_s* zx_di12_Modify_POP_ResourceID(struct zx_di12_Modify_s* x)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_di12_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_Modify_PUSH_ResourceID) */

void zx_di12_Modify_PUSH_ResourceID(struct zx_di12_Modify_s* x, struct zx_di12_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_di12_Modify_REV_ResourceID) */

void zx_di12_Modify_REV_ResourceID(struct zx_di12_Modify_s* x)
{
  struct zx_di12_ResourceID_s* nxt;
  struct zx_di12_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_di12_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_Modify_PUT_ResourceID) */

void zx_di12_Modify_PUT_ResourceID(struct zx_di12_Modify_s* x, int n, struct zx_di12_ResourceID_s* z)
{
  struct zx_di12_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_Modify_ADD_ResourceID) */

void zx_di12_Modify_ADD_ResourceID(struct zx_di12_Modify_s* x, int n, struct zx_di12_ResourceID_s* z)
{
  struct zx_di12_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_Modify_DEL_ResourceID) */

void zx_di12_Modify_DEL_ResourceID(struct zx_di12_Modify_s* x, int n)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_di12_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Modify_NUM_EncryptedResourceID) */

int zx_di12_Modify_NUM_EncryptedResourceID(struct zx_di12_Modify_s* x)
{
  struct zx_di12_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_Modify_GET_EncryptedResourceID) */

struct zx_di12_EncryptedResourceID_s* zx_di12_Modify_GET_EncryptedResourceID(struct zx_di12_Modify_s* x, int n)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_Modify_POP_EncryptedResourceID) */

struct zx_di12_EncryptedResourceID_s* zx_di12_Modify_POP_EncryptedResourceID(struct zx_di12_Modify_s* x)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_Modify_PUSH_EncryptedResourceID) */

void zx_di12_Modify_PUSH_EncryptedResourceID(struct zx_di12_Modify_s* x, struct zx_di12_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_di12_Modify_REV_EncryptedResourceID) */

void zx_di12_Modify_REV_EncryptedResourceID(struct zx_di12_Modify_s* x)
{
  struct zx_di12_EncryptedResourceID_s* nxt;
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_Modify_PUT_EncryptedResourceID) */

void zx_di12_Modify_PUT_EncryptedResourceID(struct zx_di12_Modify_s* x, int n, struct zx_di12_EncryptedResourceID_s* z)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_Modify_ADD_EncryptedResourceID) */

void zx_di12_Modify_ADD_EncryptedResourceID(struct zx_di12_Modify_s* x, int n, struct zx_di12_EncryptedResourceID_s* z)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_Modify_DEL_EncryptedResourceID) */

void zx_di12_Modify_DEL_EncryptedResourceID(struct zx_di12_Modify_s* x, int n)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Modify_NUM_InsertEntry) */

int zx_di12_Modify_NUM_InsertEntry(struct zx_di12_Modify_s* x)
{
  struct zx_di12_InsertEntry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InsertEntry; y; ++n, y = (struct zx_di12_InsertEntry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_Modify_GET_InsertEntry) */

struct zx_di12_InsertEntry_s* zx_di12_Modify_GET_InsertEntry(struct zx_di12_Modify_s* x, int n)
{
  struct zx_di12_InsertEntry_s* y;
  if (!x) return 0;
  for (y = x->InsertEntry; n>=0 && y; --n, y = (struct zx_di12_InsertEntry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_Modify_POP_InsertEntry) */

struct zx_di12_InsertEntry_s* zx_di12_Modify_POP_InsertEntry(struct zx_di12_Modify_s* x)
{
  struct zx_di12_InsertEntry_s* y;
  if (!x) return 0;
  y = x->InsertEntry;
  if (y)
    x->InsertEntry = (struct zx_di12_InsertEntry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_Modify_PUSH_InsertEntry) */

void zx_di12_Modify_PUSH_InsertEntry(struct zx_di12_Modify_s* x, struct zx_di12_InsertEntry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InsertEntry->gg.g;
  x->InsertEntry = z;
}

/* FUNC(zx_di12_Modify_REV_InsertEntry) */

void zx_di12_Modify_REV_InsertEntry(struct zx_di12_Modify_s* x)
{
  struct zx_di12_InsertEntry_s* nxt;
  struct zx_di12_InsertEntry_s* y;
  if (!x) return;
  y = x->InsertEntry;
  if (!y) return;
  x->InsertEntry = 0;
  while (y) {
    nxt = (struct zx_di12_InsertEntry_s*)y->gg.g.n;
    y->gg.g.n = &x->InsertEntry->gg.g;
    x->InsertEntry = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_Modify_PUT_InsertEntry) */

void zx_di12_Modify_PUT_InsertEntry(struct zx_di12_Modify_s* x, int n, struct zx_di12_InsertEntry_s* z)
{
  struct zx_di12_InsertEntry_s* y;
  if (!x || !z) return;
  y = x->InsertEntry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InsertEntry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_InsertEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_Modify_ADD_InsertEntry) */

void zx_di12_Modify_ADD_InsertEntry(struct zx_di12_Modify_s* x, int n, struct zx_di12_InsertEntry_s* z)
{
  struct zx_di12_InsertEntry_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_InsertEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InsertEntry; n > 1 && y; --n, y = (struct zx_di12_InsertEntry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_Modify_DEL_InsertEntry) */

void zx_di12_Modify_DEL_InsertEntry(struct zx_di12_Modify_s* x, int n)
{
  struct zx_di12_InsertEntry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InsertEntry = (struct zx_di12_InsertEntry_s*)x->InsertEntry->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_InsertEntry_s*)x->InsertEntry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_InsertEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InsertEntry; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_InsertEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Modify_NUM_RemoveEntry) */

int zx_di12_Modify_NUM_RemoveEntry(struct zx_di12_Modify_s* x)
{
  struct zx_di12_RemoveEntry_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RemoveEntry; y; ++n, y = (struct zx_di12_RemoveEntry_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_Modify_GET_RemoveEntry) */

struct zx_di12_RemoveEntry_s* zx_di12_Modify_GET_RemoveEntry(struct zx_di12_Modify_s* x, int n)
{
  struct zx_di12_RemoveEntry_s* y;
  if (!x) return 0;
  for (y = x->RemoveEntry; n>=0 && y; --n, y = (struct zx_di12_RemoveEntry_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_Modify_POP_RemoveEntry) */

struct zx_di12_RemoveEntry_s* zx_di12_Modify_POP_RemoveEntry(struct zx_di12_Modify_s* x)
{
  struct zx_di12_RemoveEntry_s* y;
  if (!x) return 0;
  y = x->RemoveEntry;
  if (y)
    x->RemoveEntry = (struct zx_di12_RemoveEntry_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_Modify_PUSH_RemoveEntry) */

void zx_di12_Modify_PUSH_RemoveEntry(struct zx_di12_Modify_s* x, struct zx_di12_RemoveEntry_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RemoveEntry->gg.g;
  x->RemoveEntry = z;
}

/* FUNC(zx_di12_Modify_REV_RemoveEntry) */

void zx_di12_Modify_REV_RemoveEntry(struct zx_di12_Modify_s* x)
{
  struct zx_di12_RemoveEntry_s* nxt;
  struct zx_di12_RemoveEntry_s* y;
  if (!x) return;
  y = x->RemoveEntry;
  if (!y) return;
  x->RemoveEntry = 0;
  while (y) {
    nxt = (struct zx_di12_RemoveEntry_s*)y->gg.g.n;
    y->gg.g.n = &x->RemoveEntry->gg.g;
    x->RemoveEntry = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_Modify_PUT_RemoveEntry) */

void zx_di12_Modify_PUT_RemoveEntry(struct zx_di12_Modify_s* x, int n, struct zx_di12_RemoveEntry_s* z)
{
  struct zx_di12_RemoveEntry_s* y;
  if (!x || !z) return;
  y = x->RemoveEntry;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RemoveEntry = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_RemoveEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_Modify_ADD_RemoveEntry) */

void zx_di12_Modify_ADD_RemoveEntry(struct zx_di12_Modify_s* x, int n, struct zx_di12_RemoveEntry_s* z)
{
  struct zx_di12_RemoveEntry_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_RemoveEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveEntry; n > 1 && y; --n, y = (struct zx_di12_RemoveEntry_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_Modify_DEL_RemoveEntry) */

void zx_di12_Modify_DEL_RemoveEntry(struct zx_di12_Modify_s* x, int n)
{
  struct zx_di12_RemoveEntry_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RemoveEntry = (struct zx_di12_RemoveEntry_s*)x->RemoveEntry->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_RemoveEntry_s*)x->RemoveEntry;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_RemoveEntry_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveEntry; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_RemoveEntry_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_di12_Modify_GET_id) */
struct zx_str* zx_di12_Modify_GET_id(struct zx_di12_Modify_s* x) { return x->id; }
/* FUNC(zx_di12_Modify_PUT_id) */
void zx_di12_Modify_PUT_id(struct zx_di12_Modify_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ModifyResponse_NUM_Status) */

int zx_di12_ModifyResponse_NUM_Status(struct zx_di12_ModifyResponse_s* x)
{
  struct zx_di12_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_ModifyResponse_GET_Status) */

struct zx_di12_Status_s* zx_di12_ModifyResponse_GET_Status(struct zx_di12_ModifyResponse_s* x, int n)
{
  struct zx_di12_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_ModifyResponse_POP_Status) */

struct zx_di12_Status_s* zx_di12_ModifyResponse_POP_Status(struct zx_di12_ModifyResponse_s* x)
{
  struct zx_di12_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_di12_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_ModifyResponse_PUSH_Status) */

void zx_di12_ModifyResponse_PUSH_Status(struct zx_di12_ModifyResponse_s* x, struct zx_di12_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di12_ModifyResponse_REV_Status) */

void zx_di12_ModifyResponse_REV_Status(struct zx_di12_ModifyResponse_s* x)
{
  struct zx_di12_Status_s* nxt;
  struct zx_di12_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_di12_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_ModifyResponse_PUT_Status) */

void zx_di12_ModifyResponse_PUT_Status(struct zx_di12_ModifyResponse_s* x, int n, struct zx_di12_Status_s* z)
{
  struct zx_di12_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_ModifyResponse_ADD_Status) */

void zx_di12_ModifyResponse_ADD_Status(struct zx_di12_ModifyResponse_s* x, int n, struct zx_di12_Status_s* z)
{
  struct zx_di12_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_ModifyResponse_DEL_Status) */

void zx_di12_ModifyResponse_DEL_Status(struct zx_di12_ModifyResponse_s* x, int n)
{
  struct zx_di12_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_di12_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ModifyResponse_NUM_Extension) */

int zx_di12_ModifyResponse_NUM_Extension(struct zx_di12_ModifyResponse_s* x)
{
  struct zx_di12_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_di12_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_ModifyResponse_GET_Extension) */

struct zx_di12_Extension_s* zx_di12_ModifyResponse_GET_Extension(struct zx_di12_ModifyResponse_s* x, int n)
{
  struct zx_di12_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_di12_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_ModifyResponse_POP_Extension) */

struct zx_di12_Extension_s* zx_di12_ModifyResponse_POP_Extension(struct zx_di12_ModifyResponse_s* x)
{
  struct zx_di12_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_di12_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_ModifyResponse_PUSH_Extension) */

void zx_di12_ModifyResponse_PUSH_Extension(struct zx_di12_ModifyResponse_s* x, struct zx_di12_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_di12_ModifyResponse_REV_Extension) */

void zx_di12_ModifyResponse_REV_Extension(struct zx_di12_ModifyResponse_s* x)
{
  struct zx_di12_Extension_s* nxt;
  struct zx_di12_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_di12_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_ModifyResponse_PUT_Extension) */

void zx_di12_ModifyResponse_PUT_Extension(struct zx_di12_ModifyResponse_s* x, int n, struct zx_di12_Extension_s* z)
{
  struct zx_di12_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_ModifyResponse_ADD_Extension) */

void zx_di12_ModifyResponse_ADD_Extension(struct zx_di12_ModifyResponse_s* x, int n, struct zx_di12_Extension_s* z)
{
  struct zx_di12_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_di12_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_ModifyResponse_DEL_Extension) */

void zx_di12_ModifyResponse_DEL_Extension(struct zx_di12_ModifyResponse_s* x, int n)
{
  struct zx_di12_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_di12_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_di12_ModifyResponse_GET_id) */
struct zx_str* zx_di12_ModifyResponse_GET_id(struct zx_di12_ModifyResponse_s* x) { return x->id; }
/* FUNC(zx_di12_ModifyResponse_PUT_id) */
void zx_di12_ModifyResponse_PUT_id(struct zx_di12_ModifyResponse_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_di12_ModifyResponse_GET_newEntryIDs) */
struct zx_str* zx_di12_ModifyResponse_GET_newEntryIDs(struct zx_di12_ModifyResponse_s* x) { return x->newEntryIDs; }
/* FUNC(zx_di12_ModifyResponse_PUT_newEntryIDs) */
void zx_di12_ModifyResponse_PUT_newEntryIDs(struct zx_di12_ModifyResponse_s* x, struct zx_str* y) { x->newEntryIDs = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Options_NUM_Option) */

int zx_di12_Options_NUM_Option(struct zx_di12_Options_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Option; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_Options_GET_Option) */

struct zx_elem_s* zx_di12_Options_GET_Option(struct zx_di12_Options_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Option; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_Options_POP_Option) */

struct zx_elem_s* zx_di12_Options_POP_Option(struct zx_di12_Options_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Option;
  if (y)
    x->Option = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_Options_PUSH_Option) */

void zx_di12_Options_PUSH_Option(struct zx_di12_Options_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Option->g;
  x->Option = z;
}

/* FUNC(zx_di12_Options_REV_Option) */

void zx_di12_Options_REV_Option(struct zx_di12_Options_s* x)
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

/* FUNC(zx_di12_Options_PUT_Option) */

void zx_di12_Options_PUT_Option(struct zx_di12_Options_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Options_ADD_Option) */

void zx_di12_Options_ADD_Option(struct zx_di12_Options_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_Options_DEL_Option) */

void zx_di12_Options_DEL_Option(struct zx_di12_Options_s* x, int n)
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

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Query_NUM_ResourceID) */

int zx_di12_Query_NUM_ResourceID(struct zx_di12_Query_s* x)
{
  struct zx_di12_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_Query_GET_ResourceID) */

struct zx_di12_ResourceID_s* zx_di12_Query_GET_ResourceID(struct zx_di12_Query_s* x, int n)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_Query_POP_ResourceID) */

struct zx_di12_ResourceID_s* zx_di12_Query_POP_ResourceID(struct zx_di12_Query_s* x)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_di12_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_Query_PUSH_ResourceID) */

void zx_di12_Query_PUSH_ResourceID(struct zx_di12_Query_s* x, struct zx_di12_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_di12_Query_REV_ResourceID) */

void zx_di12_Query_REV_ResourceID(struct zx_di12_Query_s* x)
{
  struct zx_di12_ResourceID_s* nxt;
  struct zx_di12_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_di12_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_Query_PUT_ResourceID) */

void zx_di12_Query_PUT_ResourceID(struct zx_di12_Query_s* x, int n, struct zx_di12_ResourceID_s* z)
{
  struct zx_di12_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_Query_ADD_ResourceID) */

void zx_di12_Query_ADD_ResourceID(struct zx_di12_Query_s* x, int n, struct zx_di12_ResourceID_s* z)
{
  struct zx_di12_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_Query_DEL_ResourceID) */

void zx_di12_Query_DEL_ResourceID(struct zx_di12_Query_s* x, int n)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_di12_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Query_NUM_EncryptedResourceID) */

int zx_di12_Query_NUM_EncryptedResourceID(struct zx_di12_Query_s* x)
{
  struct zx_di12_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_Query_GET_EncryptedResourceID) */

struct zx_di12_EncryptedResourceID_s* zx_di12_Query_GET_EncryptedResourceID(struct zx_di12_Query_s* x, int n)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_Query_POP_EncryptedResourceID) */

struct zx_di12_EncryptedResourceID_s* zx_di12_Query_POP_EncryptedResourceID(struct zx_di12_Query_s* x)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_Query_PUSH_EncryptedResourceID) */

void zx_di12_Query_PUSH_EncryptedResourceID(struct zx_di12_Query_s* x, struct zx_di12_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_di12_Query_REV_EncryptedResourceID) */

void zx_di12_Query_REV_EncryptedResourceID(struct zx_di12_Query_s* x)
{
  struct zx_di12_EncryptedResourceID_s* nxt;
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_Query_PUT_EncryptedResourceID) */

void zx_di12_Query_PUT_EncryptedResourceID(struct zx_di12_Query_s* x, int n, struct zx_di12_EncryptedResourceID_s* z)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_Query_ADD_EncryptedResourceID) */

void zx_di12_Query_ADD_EncryptedResourceID(struct zx_di12_Query_s* x, int n, struct zx_di12_EncryptedResourceID_s* z)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_Query_DEL_EncryptedResourceID) */

void zx_di12_Query_DEL_EncryptedResourceID(struct zx_di12_Query_s* x, int n)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Query_NUM_RequestedServiceType) */

int zx_di12_Query_NUM_RequestedServiceType(struct zx_di12_Query_s* x)
{
  struct zx_di12_RequestedServiceType_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedServiceType; y; ++n, y = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_Query_GET_RequestedServiceType) */

struct zx_di12_RequestedServiceType_s* zx_di12_Query_GET_RequestedServiceType(struct zx_di12_Query_s* x, int n)
{
  struct zx_di12_RequestedServiceType_s* y;
  if (!x) return 0;
  for (y = x->RequestedServiceType; n>=0 && y; --n, y = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_Query_POP_RequestedServiceType) */

struct zx_di12_RequestedServiceType_s* zx_di12_Query_POP_RequestedServiceType(struct zx_di12_Query_s* x)
{
  struct zx_di12_RequestedServiceType_s* y;
  if (!x) return 0;
  y = x->RequestedServiceType;
  if (y)
    x->RequestedServiceType = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_Query_PUSH_RequestedServiceType) */

void zx_di12_Query_PUSH_RequestedServiceType(struct zx_di12_Query_s* x, struct zx_di12_RequestedServiceType_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedServiceType->gg.g;
  x->RequestedServiceType = z;
}

/* FUNC(zx_di12_Query_REV_RequestedServiceType) */

void zx_di12_Query_REV_RequestedServiceType(struct zx_di12_Query_s* x)
{
  struct zx_di12_RequestedServiceType_s* nxt;
  struct zx_di12_RequestedServiceType_s* y;
  if (!x) return;
  y = x->RequestedServiceType;
  if (!y) return;
  x->RequestedServiceType = 0;
  while (y) {
    nxt = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedServiceType->gg.g;
    x->RequestedServiceType = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_Query_PUT_RequestedServiceType) */

void zx_di12_Query_PUT_RequestedServiceType(struct zx_di12_Query_s* x, int n, struct zx_di12_RequestedServiceType_s* z)
{
  struct zx_di12_RequestedServiceType_s* y;
  if (!x || !z) return;
  y = x->RequestedServiceType;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedServiceType = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_Query_ADD_RequestedServiceType) */

void zx_di12_Query_ADD_RequestedServiceType(struct zx_di12_Query_s* x, int n, struct zx_di12_RequestedServiceType_s* z)
{
  struct zx_di12_RequestedServiceType_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedServiceType; n > 1 && y; --n, y = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_Query_DEL_RequestedServiceType) */

void zx_di12_Query_DEL_RequestedServiceType(struct zx_di12_Query_s* x, int n)
{
  struct zx_di12_RequestedServiceType_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedServiceType = (struct zx_di12_RequestedServiceType_s*)x->RequestedServiceType->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_RequestedServiceType_s*)x->RequestedServiceType;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedServiceType; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_RequestedServiceType_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_di12_Query_GET_id) */
struct zx_str* zx_di12_Query_GET_id(struct zx_di12_Query_s* x) { return x->id; }
/* FUNC(zx_di12_Query_PUT_id) */
void zx_di12_Query_PUT_id(struct zx_di12_Query_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_QueryResponse_NUM_Status) */

int zx_di12_QueryResponse_NUM_Status(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_QueryResponse_GET_Status) */

struct zx_di12_Status_s* zx_di12_QueryResponse_GET_Status(struct zx_di12_QueryResponse_s* x, int n)
{
  struct zx_di12_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_QueryResponse_POP_Status) */

struct zx_di12_Status_s* zx_di12_QueryResponse_POP_Status(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_di12_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_QueryResponse_PUSH_Status) */

void zx_di12_QueryResponse_PUSH_Status(struct zx_di12_QueryResponse_s* x, struct zx_di12_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di12_QueryResponse_REV_Status) */

void zx_di12_QueryResponse_REV_Status(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_Status_s* nxt;
  struct zx_di12_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_di12_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_QueryResponse_PUT_Status) */

void zx_di12_QueryResponse_PUT_Status(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_Status_s* z)
{
  struct zx_di12_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_QueryResponse_ADD_Status) */

void zx_di12_QueryResponse_ADD_Status(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_Status_s* z)
{
  struct zx_di12_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_QueryResponse_DEL_Status) */

void zx_di12_QueryResponse_DEL_Status(struct zx_di12_QueryResponse_s* x, int n)
{
  struct zx_di12_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_di12_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_QueryResponse_NUM_ResourceOffering) */

int zx_di12_QueryResponse_NUM_ResourceOffering(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_ResourceOffering_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceOffering; y; ++n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_QueryResponse_GET_ResourceOffering) */

struct zx_di12_ResourceOffering_s* zx_di12_QueryResponse_GET_ResourceOffering(struct zx_di12_QueryResponse_s* x, int n)
{
  struct zx_di12_ResourceOffering_s* y;
  if (!x) return 0;
  for (y = x->ResourceOffering; n>=0 && y; --n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_QueryResponse_POP_ResourceOffering) */

struct zx_di12_ResourceOffering_s* zx_di12_QueryResponse_POP_ResourceOffering(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_ResourceOffering_s* y;
  if (!x) return 0;
  y = x->ResourceOffering;
  if (y)
    x->ResourceOffering = (struct zx_di12_ResourceOffering_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_QueryResponse_PUSH_ResourceOffering) */

void zx_di12_QueryResponse_PUSH_ResourceOffering(struct zx_di12_QueryResponse_s* x, struct zx_di12_ResourceOffering_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceOffering->gg.g;
  x->ResourceOffering = z;
}

/* FUNC(zx_di12_QueryResponse_REV_ResourceOffering) */

void zx_di12_QueryResponse_REV_ResourceOffering(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_ResourceOffering_s* nxt;
  struct zx_di12_ResourceOffering_s* y;
  if (!x) return;
  y = x->ResourceOffering;
  if (!y) return;
  x->ResourceOffering = 0;
  while (y) {
    nxt = (struct zx_di12_ResourceOffering_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceOffering->gg.g;
    x->ResourceOffering = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_QueryResponse_PUT_ResourceOffering) */

void zx_di12_QueryResponse_PUT_ResourceOffering(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_ResourceOffering_s* z)
{
  struct zx_di12_ResourceOffering_s* y;
  if (!x || !z) return;
  y = x->ResourceOffering;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceOffering = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_QueryResponse_ADD_ResourceOffering) */

void zx_di12_QueryResponse_ADD_ResourceOffering(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_ResourceOffering_s* z)
{
  struct zx_di12_ResourceOffering_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceOffering; n > 1 && y; --n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_QueryResponse_DEL_ResourceOffering) */

void zx_di12_QueryResponse_DEL_ResourceOffering(struct zx_di12_QueryResponse_s* x, int n)
{
  struct zx_di12_ResourceOffering_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceOffering = (struct zx_di12_ResourceOffering_s*)x->ResourceOffering->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ResourceOffering_s*)x->ResourceOffering;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceOffering; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceOffering_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_QueryResponse_NUM_Credentials) */

int zx_di12_QueryResponse_NUM_Credentials(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_Credentials_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Credentials; y; ++n, y = (struct zx_di12_Credentials_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_QueryResponse_GET_Credentials) */

struct zx_di12_Credentials_s* zx_di12_QueryResponse_GET_Credentials(struct zx_di12_QueryResponse_s* x, int n)
{
  struct zx_di12_Credentials_s* y;
  if (!x) return 0;
  for (y = x->Credentials; n>=0 && y; --n, y = (struct zx_di12_Credentials_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_QueryResponse_POP_Credentials) */

struct zx_di12_Credentials_s* zx_di12_QueryResponse_POP_Credentials(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_Credentials_s* y;
  if (!x) return 0;
  y = x->Credentials;
  if (y)
    x->Credentials = (struct zx_di12_Credentials_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_QueryResponse_PUSH_Credentials) */

void zx_di12_QueryResponse_PUSH_Credentials(struct zx_di12_QueryResponse_s* x, struct zx_di12_Credentials_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Credentials->gg.g;
  x->Credentials = z;
}

/* FUNC(zx_di12_QueryResponse_REV_Credentials) */

void zx_di12_QueryResponse_REV_Credentials(struct zx_di12_QueryResponse_s* x)
{
  struct zx_di12_Credentials_s* nxt;
  struct zx_di12_Credentials_s* y;
  if (!x) return;
  y = x->Credentials;
  if (!y) return;
  x->Credentials = 0;
  while (y) {
    nxt = (struct zx_di12_Credentials_s*)y->gg.g.n;
    y->gg.g.n = &x->Credentials->gg.g;
    x->Credentials = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_QueryResponse_PUT_Credentials) */

void zx_di12_QueryResponse_PUT_Credentials(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_Credentials_s* z)
{
  struct zx_di12_Credentials_s* y;
  if (!x || !z) return;
  y = x->Credentials;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Credentials = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Credentials_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_QueryResponse_ADD_Credentials) */

void zx_di12_QueryResponse_ADD_Credentials(struct zx_di12_QueryResponse_s* x, int n, struct zx_di12_Credentials_s* z)
{
  struct zx_di12_Credentials_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_Credentials_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credentials; n > 1 && y; --n, y = (struct zx_di12_Credentials_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_QueryResponse_DEL_Credentials) */

void zx_di12_QueryResponse_DEL_Credentials(struct zx_di12_QueryResponse_s* x, int n)
{
  struct zx_di12_Credentials_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Credentials = (struct zx_di12_Credentials_s*)x->Credentials->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Credentials_s*)x->Credentials;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Credentials_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credentials; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Credentials_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_di12_QueryResponse_GET_id) */
struct zx_str* zx_di12_QueryResponse_GET_id(struct zx_di12_QueryResponse_s* x) { return x->id; }
/* FUNC(zx_di12_QueryResponse_PUT_id) */
void zx_di12_QueryResponse_PUT_id(struct zx_di12_QueryResponse_s* x, struct zx_str* y) { x->id = y; }





/* FUNC(zx_di12_RemoveEntry_GET_entryID) */
struct zx_str* zx_di12_RemoveEntry_GET_entryID(struct zx_di12_RemoveEntry_s* x) { return x->entryID; }
/* FUNC(zx_di12_RemoveEntry_PUT_entryID) */
void zx_di12_RemoveEntry_PUT_entryID(struct zx_di12_RemoveEntry_s* x, struct zx_str* y) { x->entryID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_RequestedServiceType_NUM_ServiceType) */

int zx_di12_RequestedServiceType_NUM_ServiceType(struct zx_di12_RequestedServiceType_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_RequestedServiceType_GET_ServiceType) */

struct zx_elem_s* zx_di12_RequestedServiceType_GET_ServiceType(struct zx_di12_RequestedServiceType_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_RequestedServiceType_POP_ServiceType) */

struct zx_elem_s* zx_di12_RequestedServiceType_POP_ServiceType(struct zx_di12_RequestedServiceType_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceType;
  if (y)
    x->ServiceType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_RequestedServiceType_PUSH_ServiceType) */

void zx_di12_RequestedServiceType_PUSH_ServiceType(struct zx_di12_RequestedServiceType_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceType->g;
  x->ServiceType = z;
}

/* FUNC(zx_di12_RequestedServiceType_REV_ServiceType) */

void zx_di12_RequestedServiceType_REV_ServiceType(struct zx_di12_RequestedServiceType_s* x)
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

/* FUNC(zx_di12_RequestedServiceType_PUT_ServiceType) */

void zx_di12_RequestedServiceType_PUT_ServiceType(struct zx_di12_RequestedServiceType_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_RequestedServiceType_ADD_ServiceType) */

void zx_di12_RequestedServiceType_ADD_ServiceType(struct zx_di12_RequestedServiceType_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_RequestedServiceType_DEL_ServiceType) */

void zx_di12_RequestedServiceType_DEL_ServiceType(struct zx_di12_RequestedServiceType_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_RequestedServiceType_NUM_Options) */

int zx_di12_RequestedServiceType_NUM_Options(struct zx_di12_RequestedServiceType_s* x)
{
  struct zx_di12_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_RequestedServiceType_GET_Options) */

struct zx_di12_Options_s* zx_di12_RequestedServiceType_GET_Options(struct zx_di12_RequestedServiceType_s* x, int n)
{
  struct zx_di12_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_RequestedServiceType_POP_Options) */

struct zx_di12_Options_s* zx_di12_RequestedServiceType_POP_Options(struct zx_di12_RequestedServiceType_s* x)
{
  struct zx_di12_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zx_di12_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_RequestedServiceType_PUSH_Options) */

void zx_di12_RequestedServiceType_PUSH_Options(struct zx_di12_RequestedServiceType_s* x, struct zx_di12_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zx_di12_RequestedServiceType_REV_Options) */

void zx_di12_RequestedServiceType_REV_Options(struct zx_di12_RequestedServiceType_s* x)
{
  struct zx_di12_Options_s* nxt;
  struct zx_di12_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zx_di12_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_RequestedServiceType_PUT_Options) */

void zx_di12_RequestedServiceType_PUT_Options(struct zx_di12_RequestedServiceType_s* x, int n, struct zx_di12_Options_s* z)
{
  struct zx_di12_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_RequestedServiceType_ADD_Options) */

void zx_di12_RequestedServiceType_ADD_Options(struct zx_di12_RequestedServiceType_s* x, int n, struct zx_di12_Options_s* z)
{
  struct zx_di12_Options_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_RequestedServiceType_DEL_Options) */

void zx_di12_RequestedServiceType_DEL_Options(struct zx_di12_RequestedServiceType_s* x, int n)
{
  struct zx_di12_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zx_di12_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_di12_ResourceID_GET_id) */
struct zx_str* zx_di12_ResourceID_GET_id(struct zx_di12_ResourceID_s* x) { return x->id; }
/* FUNC(zx_di12_ResourceID_PUT_id) */
void zx_di12_ResourceID_PUT_id(struct zx_di12_ResourceID_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ResourceOffering_NUM_ResourceID) */

int zx_di12_ResourceOffering_NUM_ResourceID(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_ResourceOffering_GET_ResourceID) */

struct zx_di12_ResourceID_s* zx_di12_ResourceOffering_GET_ResourceID(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_POP_ResourceID) */

struct zx_di12_ResourceID_s* zx_di12_ResourceOffering_POP_ResourceID(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_di12_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_PUSH_ResourceID) */

void zx_di12_ResourceOffering_PUSH_ResourceID(struct zx_di12_ResourceOffering_s* x, struct zx_di12_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_di12_ResourceOffering_REV_ResourceID) */

void zx_di12_ResourceOffering_REV_ResourceID(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_ResourceID_s* nxt;
  struct zx_di12_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_di12_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_ResourceOffering_PUT_ResourceID) */

void zx_di12_ResourceOffering_PUT_ResourceID(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_ResourceID_s* z)
{
  struct zx_di12_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_ResourceOffering_ADD_ResourceID) */

void zx_di12_ResourceOffering_ADD_ResourceID(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_ResourceID_s* z)
{
  struct zx_di12_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_ResourceOffering_DEL_ResourceID) */

void zx_di12_ResourceOffering_DEL_ResourceID(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_di12_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ResourceOffering_NUM_EncryptedResourceID) */

int zx_di12_ResourceOffering_NUM_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_ResourceOffering_GET_EncryptedResourceID) */

struct zx_di12_EncryptedResourceID_s* zx_di12_ResourceOffering_GET_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_POP_EncryptedResourceID) */

struct zx_di12_EncryptedResourceID_s* zx_di12_ResourceOffering_POP_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_PUSH_EncryptedResourceID) */

void zx_di12_ResourceOffering_PUSH_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, struct zx_di12_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_di12_ResourceOffering_REV_EncryptedResourceID) */

void zx_di12_ResourceOffering_REV_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_EncryptedResourceID_s* nxt;
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_ResourceOffering_PUT_EncryptedResourceID) */

void zx_di12_ResourceOffering_PUT_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_EncryptedResourceID_s* z)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_ResourceOffering_ADD_EncryptedResourceID) */

void zx_di12_ResourceOffering_ADD_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_EncryptedResourceID_s* z)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_ResourceOffering_DEL_EncryptedResourceID) */

void zx_di12_ResourceOffering_DEL_EncryptedResourceID(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ResourceOffering_NUM_ServiceInstance) */

int zx_di12_ResourceOffering_NUM_ServiceInstance(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_ServiceInstance_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceInstance; y; ++n, y = (struct zx_di12_ServiceInstance_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_ResourceOffering_GET_ServiceInstance) */

struct zx_di12_ServiceInstance_s* zx_di12_ResourceOffering_GET_ServiceInstance(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_di12_ServiceInstance_s* y;
  if (!x) return 0;
  for (y = x->ServiceInstance; n>=0 && y; --n, y = (struct zx_di12_ServiceInstance_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_POP_ServiceInstance) */

struct zx_di12_ServiceInstance_s* zx_di12_ResourceOffering_POP_ServiceInstance(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_ServiceInstance_s* y;
  if (!x) return 0;
  y = x->ServiceInstance;
  if (y)
    x->ServiceInstance = (struct zx_di12_ServiceInstance_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_PUSH_ServiceInstance) */

void zx_di12_ResourceOffering_PUSH_ServiceInstance(struct zx_di12_ResourceOffering_s* x, struct zx_di12_ServiceInstance_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceInstance->gg.g;
  x->ServiceInstance = z;
}

/* FUNC(zx_di12_ResourceOffering_REV_ServiceInstance) */

void zx_di12_ResourceOffering_REV_ServiceInstance(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_ServiceInstance_s* nxt;
  struct zx_di12_ServiceInstance_s* y;
  if (!x) return;
  y = x->ServiceInstance;
  if (!y) return;
  x->ServiceInstance = 0;
  while (y) {
    nxt = (struct zx_di12_ServiceInstance_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceInstance->gg.g;
    x->ServiceInstance = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_ResourceOffering_PUT_ServiceInstance) */

void zx_di12_ResourceOffering_PUT_ServiceInstance(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_ServiceInstance_s* z)
{
  struct zx_di12_ServiceInstance_s* y;
  if (!x || !z) return;
  y = x->ServiceInstance;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceInstance = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_ResourceOffering_ADD_ServiceInstance) */

void zx_di12_ResourceOffering_ADD_ServiceInstance(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_ServiceInstance_s* z)
{
  struct zx_di12_ServiceInstance_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_ServiceInstance_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceInstance; n > 1 && y; --n, y = (struct zx_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_ResourceOffering_DEL_ServiceInstance) */

void zx_di12_ResourceOffering_DEL_ServiceInstance(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_di12_ServiceInstance_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceInstance = (struct zx_di12_ServiceInstance_s*)x->ServiceInstance->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ServiceInstance_s*)x->ServiceInstance;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ServiceInstance_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceInstance; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ServiceInstance_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ResourceOffering_NUM_Options) */

int zx_di12_ResourceOffering_NUM_Options(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_Options_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Options; y; ++n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_ResourceOffering_GET_Options) */

struct zx_di12_Options_s* zx_di12_ResourceOffering_GET_Options(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_di12_Options_s* y;
  if (!x) return 0;
  for (y = x->Options; n>=0 && y; --n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_POP_Options) */

struct zx_di12_Options_s* zx_di12_ResourceOffering_POP_Options(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_Options_s* y;
  if (!x) return 0;
  y = x->Options;
  if (y)
    x->Options = (struct zx_di12_Options_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_PUSH_Options) */

void zx_di12_ResourceOffering_PUSH_Options(struct zx_di12_ResourceOffering_s* x, struct zx_di12_Options_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Options->gg.g;
  x->Options = z;
}

/* FUNC(zx_di12_ResourceOffering_REV_Options) */

void zx_di12_ResourceOffering_REV_Options(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_di12_Options_s* nxt;
  struct zx_di12_Options_s* y;
  if (!x) return;
  y = x->Options;
  if (!y) return;
  x->Options = 0;
  while (y) {
    nxt = (struct zx_di12_Options_s*)y->gg.g.n;
    y->gg.g.n = &x->Options->gg.g;
    x->Options = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_ResourceOffering_PUT_Options) */

void zx_di12_ResourceOffering_PUT_Options(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_Options_s* z)
{
  struct zx_di12_Options_s* y;
  if (!x || !z) return;
  y = x->Options;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Options = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_ResourceOffering_ADD_Options) */

void zx_di12_ResourceOffering_ADD_Options(struct zx_di12_ResourceOffering_s* x, int n, struct zx_di12_Options_s* z)
{
  struct zx_di12_Options_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y; --n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_ResourceOffering_DEL_Options) */

void zx_di12_ResourceOffering_DEL_Options(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_di12_Options_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Options = (struct zx_di12_Options_s*)x->Options->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Options_s*)x->Options;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Options; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Options_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ResourceOffering_NUM_Abstract) */

int zx_di12_ResourceOffering_NUM_Abstract(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Abstract; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_ResourceOffering_GET_Abstract) */

struct zx_elem_s* zx_di12_ResourceOffering_GET_Abstract(struct zx_di12_ResourceOffering_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Abstract; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_POP_Abstract) */

struct zx_elem_s* zx_di12_ResourceOffering_POP_Abstract(struct zx_di12_ResourceOffering_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Abstract;
  if (y)
    x->Abstract = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_ResourceOffering_PUSH_Abstract) */

void zx_di12_ResourceOffering_PUSH_Abstract(struct zx_di12_ResourceOffering_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Abstract->g;
  x->Abstract = z;
}

/* FUNC(zx_di12_ResourceOffering_REV_Abstract) */

void zx_di12_ResourceOffering_REV_Abstract(struct zx_di12_ResourceOffering_s* x)
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

/* FUNC(zx_di12_ResourceOffering_PUT_Abstract) */

void zx_di12_ResourceOffering_PUT_Abstract(struct zx_di12_ResourceOffering_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_ResourceOffering_ADD_Abstract) */

void zx_di12_ResourceOffering_ADD_Abstract(struct zx_di12_ResourceOffering_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_ResourceOffering_DEL_Abstract) */

void zx_di12_ResourceOffering_DEL_Abstract(struct zx_di12_ResourceOffering_s* x, int n)
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

#endif

/* FUNC(zx_di12_ResourceOffering_GET_entryID) */
struct zx_str* zx_di12_ResourceOffering_GET_entryID(struct zx_di12_ResourceOffering_s* x) { return x->entryID; }
/* FUNC(zx_di12_ResourceOffering_PUT_entryID) */
void zx_di12_ResourceOffering_PUT_entryID(struct zx_di12_ResourceOffering_s* x, struct zx_str* y) { x->entryID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ServiceInstance_NUM_ServiceType) */

int zx_di12_ServiceInstance_NUM_ServiceType(struct zx_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_ServiceInstance_GET_ServiceType) */

struct zx_elem_s* zx_di12_ServiceInstance_GET_ServiceType(struct zx_di12_ServiceInstance_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ServiceType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_ServiceInstance_POP_ServiceType) */

struct zx_elem_s* zx_di12_ServiceInstance_POP_ServiceType(struct zx_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ServiceType;
  if (y)
    x->ServiceType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_ServiceInstance_PUSH_ServiceType) */

void zx_di12_ServiceInstance_PUSH_ServiceType(struct zx_di12_ServiceInstance_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ServiceType->g;
  x->ServiceType = z;
}

/* FUNC(zx_di12_ServiceInstance_REV_ServiceType) */

void zx_di12_ServiceInstance_REV_ServiceType(struct zx_di12_ServiceInstance_s* x)
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

/* FUNC(zx_di12_ServiceInstance_PUT_ServiceType) */

void zx_di12_ServiceInstance_PUT_ServiceType(struct zx_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_ServiceInstance_ADD_ServiceType) */

void zx_di12_ServiceInstance_ADD_ServiceType(struct zx_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_ServiceInstance_DEL_ServiceType) */

void zx_di12_ServiceInstance_DEL_ServiceType(struct zx_di12_ServiceInstance_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ServiceInstance_NUM_ProviderID) */

int zx_di12_ServiceInstance_NUM_ProviderID(struct zx_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_di12_ServiceInstance_GET_ProviderID) */

struct zx_elem_s* zx_di12_ServiceInstance_GET_ProviderID(struct zx_di12_ServiceInstance_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_di12_ServiceInstance_POP_ProviderID) */

struct zx_elem_s* zx_di12_ServiceInstance_POP_ProviderID(struct zx_di12_ServiceInstance_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_di12_ServiceInstance_PUSH_ProviderID) */

void zx_di12_ServiceInstance_PUSH_ProviderID(struct zx_di12_ServiceInstance_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zx_di12_ServiceInstance_REV_ProviderID) */

void zx_di12_ServiceInstance_REV_ProviderID(struct zx_di12_ServiceInstance_s* x)
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

/* FUNC(zx_di12_ServiceInstance_PUT_ProviderID) */

void zx_di12_ServiceInstance_PUT_ProviderID(struct zx_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_ServiceInstance_ADD_ProviderID) */

void zx_di12_ServiceInstance_ADD_ProviderID(struct zx_di12_ServiceInstance_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_di12_ServiceInstance_DEL_ProviderID) */

void zx_di12_ServiceInstance_DEL_ProviderID(struct zx_di12_ServiceInstance_s* x, int n)
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



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_ServiceInstance_NUM_Description) */

int zx_di12_ServiceInstance_NUM_Description(struct zx_di12_ServiceInstance_s* x)
{
  struct zx_di12_Description_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Description; y; ++n, y = (struct zx_di12_Description_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_ServiceInstance_GET_Description) */

struct zx_di12_Description_s* zx_di12_ServiceInstance_GET_Description(struct zx_di12_ServiceInstance_s* x, int n)
{
  struct zx_di12_Description_s* y;
  if (!x) return 0;
  for (y = x->Description; n>=0 && y; --n, y = (struct zx_di12_Description_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_ServiceInstance_POP_Description) */

struct zx_di12_Description_s* zx_di12_ServiceInstance_POP_Description(struct zx_di12_ServiceInstance_s* x)
{
  struct zx_di12_Description_s* y;
  if (!x) return 0;
  y = x->Description;
  if (y)
    x->Description = (struct zx_di12_Description_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_ServiceInstance_PUSH_Description) */

void zx_di12_ServiceInstance_PUSH_Description(struct zx_di12_ServiceInstance_s* x, struct zx_di12_Description_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Description->gg.g;
  x->Description = z;
}

/* FUNC(zx_di12_ServiceInstance_REV_Description) */

void zx_di12_ServiceInstance_REV_Description(struct zx_di12_ServiceInstance_s* x)
{
  struct zx_di12_Description_s* nxt;
  struct zx_di12_Description_s* y;
  if (!x) return;
  y = x->Description;
  if (!y) return;
  x->Description = 0;
  while (y) {
    nxt = (struct zx_di12_Description_s*)y->gg.g.n;
    y->gg.g.n = &x->Description->gg.g;
    x->Description = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_ServiceInstance_PUT_Description) */

void zx_di12_ServiceInstance_PUT_Description(struct zx_di12_ServiceInstance_s* x, int n, struct zx_di12_Description_s* z)
{
  struct zx_di12_Description_s* y;
  if (!x || !z) return;
  y = x->Description;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Description = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Description_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_ServiceInstance_ADD_Description) */

void zx_di12_ServiceInstance_ADD_Description(struct zx_di12_ServiceInstance_s* x, int n, struct zx_di12_Description_s* z)
{
  struct zx_di12_Description_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_Description_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y; --n, y = (struct zx_di12_Description_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_ServiceInstance_DEL_Description) */

void zx_di12_ServiceInstance_DEL_Description(struct zx_di12_ServiceInstance_s* x, int n)
{
  struct zx_di12_Description_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Description = (struct zx_di12_Description_s*)x->Description->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Description_s*)x->Description;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Description_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Description_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_di12_Status_NUM_Status) */

int zx_di12_Status_NUM_Status(struct zx_di12_Status_s* x)
{
  struct zx_di12_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_di12_Status_GET_Status) */

struct zx_di12_Status_s* zx_di12_Status_GET_Status(struct zx_di12_Status_s* x, int n)
{
  struct zx_di12_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_di12_Status_POP_Status) */

struct zx_di12_Status_s* zx_di12_Status_POP_Status(struct zx_di12_Status_s* x)
{
  struct zx_di12_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_di12_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_di12_Status_PUSH_Status) */

void zx_di12_Status_PUSH_Status(struct zx_di12_Status_s* x, struct zx_di12_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_di12_Status_REV_Status) */

void zx_di12_Status_REV_Status(struct zx_di12_Status_s* x)
{
  struct zx_di12_Status_s* nxt;
  struct zx_di12_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_di12_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_di12_Status_PUT_Status) */

void zx_di12_Status_PUT_Status(struct zx_di12_Status_s* x, int n, struct zx_di12_Status_s* z)
{
  struct zx_di12_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_di12_Status_ADD_Status) */

void zx_di12_Status_ADD_Status(struct zx_di12_Status_s* x, int n, struct zx_di12_Status_s* z)
{
  struct zx_di12_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_di12_Status_DEL_Status) */

void zx_di12_Status_DEL_Status(struct zx_di12_Status_s* x, int n)
{
  struct zx_di12_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_di12_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_di12_Status_GET_code) */
struct zx_str* zx_di12_Status_GET_code(struct zx_di12_Status_s* x) { return x->code; }
/* FUNC(zx_di12_Status_PUT_code) */
void zx_di12_Status_PUT_code(struct zx_di12_Status_s* x, struct zx_str* y) { x->code = y; }
/* FUNC(zx_di12_Status_GET_comment) */
struct zx_str* zx_di12_Status_GET_comment(struct zx_di12_Status_s* x) { return x->comment; }
/* FUNC(zx_di12_Status_PUT_comment) */
void zx_di12_Status_PUT_comment(struct zx_di12_Status_s* x, struct zx_str* y) { x->comment = y; }
/* FUNC(zx_di12_Status_GET_ref) */
struct zx_str* zx_di12_Status_GET_ref(struct zx_di12_Status_s* x) { return x->ref; }
/* FUNC(zx_di12_Status_PUT_ref) */
void zx_di12_Status_PUT_ref(struct zx_di12_Status_s* x, struct zx_str* y) { x->ref = y; }





/* EOF -- c/zx-di12-getput.c */
