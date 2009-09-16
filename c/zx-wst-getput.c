/* c/zx-wst-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-wst-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_Authenticator_NUM_CombinedHash) */

int zx_wst_Authenticator_NUM_CombinedHash(struct zx_wst_Authenticator_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CombinedHash; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_Authenticator_GET_CombinedHash) */

struct zx_elem_s* zx_wst_Authenticator_GET_CombinedHash(struct zx_wst_Authenticator_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CombinedHash; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_Authenticator_POP_CombinedHash) */

struct zx_elem_s* zx_wst_Authenticator_POP_CombinedHash(struct zx_wst_Authenticator_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CombinedHash;
  if (y)
    x->CombinedHash = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_Authenticator_PUSH_CombinedHash) */

void zx_wst_Authenticator_PUSH_CombinedHash(struct zx_wst_Authenticator_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CombinedHash->g;
  x->CombinedHash = z;
}

/* FUNC(zx_wst_Authenticator_REV_CombinedHash) */

void zx_wst_Authenticator_REV_CombinedHash(struct zx_wst_Authenticator_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CombinedHash;
  if (!y) return;
  x->CombinedHash = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CombinedHash->g;
    x->CombinedHash = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_Authenticator_PUT_CombinedHash) */

void zx_wst_Authenticator_PUT_CombinedHash(struct zx_wst_Authenticator_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CombinedHash;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CombinedHash = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_Authenticator_ADD_CombinedHash) */

void zx_wst_Authenticator_ADD_CombinedHash(struct zx_wst_Authenticator_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CombinedHash->g;
    x->CombinedHash = z;
    return;
  case -1:
    y = x->CombinedHash;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CombinedHash; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_Authenticator_DEL_CombinedHash) */

void zx_wst_Authenticator_DEL_CombinedHash(struct zx_wst_Authenticator_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CombinedHash = (struct zx_elem_s*)x->CombinedHash->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CombinedHash;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CombinedHash; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif






/* FUNC(zx_wst_BinaryExchange_GET_EncodingType) */
struct zx_str* zx_wst_BinaryExchange_GET_EncodingType(struct zx_wst_BinaryExchange_s* x) { return x->EncodingType; }
/* FUNC(zx_wst_BinaryExchange_PUT_EncodingType) */
void zx_wst_BinaryExchange_PUT_EncodingType(struct zx_wst_BinaryExchange_s* x, struct zx_str* y) { x->EncodingType = y; }
/* FUNC(zx_wst_BinaryExchange_GET_ValueType) */
struct zx_str* zx_wst_BinaryExchange_GET_ValueType(struct zx_wst_BinaryExchange_s* x) { return x->ValueType; }
/* FUNC(zx_wst_BinaryExchange_PUT_ValueType) */
void zx_wst_BinaryExchange_PUT_ValueType(struct zx_wst_BinaryExchange_s* x, struct zx_str* y) { x->ValueType = y; }





/* FUNC(zx_wst_BinarySecret_GET_Type) */
struct zx_str* zx_wst_BinarySecret_GET_Type(struct zx_wst_BinarySecret_s* x) { return x->Type; }
/* FUNC(zx_wst_BinarySecret_PUT_Type) */
void zx_wst_BinarySecret_PUT_Type(struct zx_wst_BinarySecret_s* x, struct zx_str* y) { x->Type = y; }










/* FUNC(zx_wst_Claims_GET_Dialect) */
struct zx_str* zx_wst_Claims_GET_Dialect(struct zx_wst_Claims_s* x) { return x->Dialect; }
/* FUNC(zx_wst_Claims_PUT_Dialect) */
void zx_wst_Claims_PUT_Dialect(struct zx_wst_Claims_s* x, struct zx_str* y) { x->Dialect = y; }






















#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_IssuedTokens_NUM_RequestSecurityTokenResponse) */

int zx_wst_IssuedTokens_NUM_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestSecurityTokenResponse; y; ++n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_IssuedTokens_GET_RequestSecurityTokenResponse) */

struct zx_wst_RequestSecurityTokenResponse_s* zx_wst_IssuedTokens_GET_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, int n)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x) return 0;
  for (y = x->RequestSecurityTokenResponse; n>=0 && y; --n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_IssuedTokens_POP_RequestSecurityTokenResponse) */

struct zx_wst_RequestSecurityTokenResponse_s* zx_wst_IssuedTokens_POP_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x) return 0;
  y = x->RequestSecurityTokenResponse;
  if (y)
    x->RequestSecurityTokenResponse = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_IssuedTokens_PUSH_RequestSecurityTokenResponse) */

void zx_wst_IssuedTokens_PUSH_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, struct zx_wst_RequestSecurityTokenResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestSecurityTokenResponse->gg.g;
  x->RequestSecurityTokenResponse = z;
}

/* FUNC(zx_wst_IssuedTokens_REV_RequestSecurityTokenResponse) */

void zx_wst_IssuedTokens_REV_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x)
{
  struct zx_wst_RequestSecurityTokenResponse_s* nxt;
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x) return;
  y = x->RequestSecurityTokenResponse;
  if (!y) return;
  x->RequestSecurityTokenResponse = 0;
  while (y) {
    nxt = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestSecurityTokenResponse->gg.g;
    x->RequestSecurityTokenResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_IssuedTokens_PUT_RequestSecurityTokenResponse) */

void zx_wst_IssuedTokens_PUT_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, int n, struct zx_wst_RequestSecurityTokenResponse_s* z)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x || !z) return;
  y = x->RequestSecurityTokenResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestSecurityTokenResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_IssuedTokens_ADD_RequestSecurityTokenResponse) */

void zx_wst_IssuedTokens_ADD_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, int n, struct zx_wst_RequestSecurityTokenResponse_s* z)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestSecurityTokenResponse->gg.g;
    x->RequestSecurityTokenResponse = z;
    return;
  case -1:
    y = x->RequestSecurityTokenResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestSecurityTokenResponse; n > 1 && y; --n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_IssuedTokens_DEL_RequestSecurityTokenResponse) */

void zx_wst_IssuedTokens_DEL_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, int n)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestSecurityTokenResponse = (struct zx_wst_RequestSecurityTokenResponse_s*)x->RequestSecurityTokenResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_RequestSecurityTokenResponse_s*)x->RequestSecurityTokenResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestSecurityTokenResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_Issuer_NUM_Address) */

int zx_wst_Issuer_NUM_Address(struct zx_wst_Issuer_s* x)
{
  struct zx_a_Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Address; y; ++n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_Issuer_GET_Address) */

struct zx_a_Address_s* zx_wst_Issuer_GET_Address(struct zx_wst_Issuer_s* x, int n)
{
  struct zx_a_Address_s* y;
  if (!x) return 0;
  for (y = x->Address; n>=0 && y; --n, y = (struct zx_a_Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_Issuer_POP_Address) */

struct zx_a_Address_s* zx_wst_Issuer_POP_Address(struct zx_wst_Issuer_s* x)
{
  struct zx_a_Address_s* y;
  if (!x) return 0;
  y = x->Address;
  if (y)
    x->Address = (struct zx_a_Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_Issuer_PUSH_Address) */

void zx_wst_Issuer_PUSH_Address(struct zx_wst_Issuer_s* x, struct zx_a_Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Address->gg.g;
  x->Address = z;
}

/* FUNC(zx_wst_Issuer_REV_Address) */

void zx_wst_Issuer_REV_Address(struct zx_wst_Issuer_s* x)
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

/* FUNC(zx_wst_Issuer_PUT_Address) */

void zx_wst_Issuer_PUT_Address(struct zx_wst_Issuer_s* x, int n, struct zx_a_Address_s* z)
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

/* FUNC(zx_wst_Issuer_ADD_Address) */

void zx_wst_Issuer_ADD_Address(struct zx_wst_Issuer_s* x, int n, struct zx_a_Address_s* z)
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

/* FUNC(zx_wst_Issuer_DEL_Address) */

void zx_wst_Issuer_DEL_Address(struct zx_wst_Issuer_s* x, int n)
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

/* FUNC(zx_wst_Issuer_NUM_ReferenceParameters) */

int zx_wst_Issuer_NUM_ReferenceParameters(struct zx_wst_Issuer_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_Issuer_GET_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_wst_Issuer_GET_ReferenceParameters(struct zx_wst_Issuer_s* x, int n)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_Issuer_POP_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_wst_Issuer_POP_ReferenceParameters(struct zx_wst_Issuer_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_Issuer_PUSH_ReferenceParameters) */

void zx_wst_Issuer_PUSH_ReferenceParameters(struct zx_wst_Issuer_s* x, struct zx_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zx_wst_Issuer_REV_ReferenceParameters) */

void zx_wst_Issuer_REV_ReferenceParameters(struct zx_wst_Issuer_s* x)
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

/* FUNC(zx_wst_Issuer_PUT_ReferenceParameters) */

void zx_wst_Issuer_PUT_ReferenceParameters(struct zx_wst_Issuer_s* x, int n, struct zx_a_ReferenceParameters_s* z)
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

/* FUNC(zx_wst_Issuer_ADD_ReferenceParameters) */

void zx_wst_Issuer_ADD_ReferenceParameters(struct zx_wst_Issuer_s* x, int n, struct zx_a_ReferenceParameters_s* z)
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

/* FUNC(zx_wst_Issuer_DEL_ReferenceParameters) */

void zx_wst_Issuer_DEL_ReferenceParameters(struct zx_wst_Issuer_s* x, int n)
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

/* FUNC(zx_wst_Issuer_NUM_Metadata) */

int zx_wst_Issuer_NUM_Metadata(struct zx_wst_Issuer_s* x)
{
  struct zx_a_Metadata_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Metadata; y; ++n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_Issuer_GET_Metadata) */

struct zx_a_Metadata_s* zx_wst_Issuer_GET_Metadata(struct zx_wst_Issuer_s* x, int n)
{
  struct zx_a_Metadata_s* y;
  if (!x) return 0;
  for (y = x->Metadata; n>=0 && y; --n, y = (struct zx_a_Metadata_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_Issuer_POP_Metadata) */

struct zx_a_Metadata_s* zx_wst_Issuer_POP_Metadata(struct zx_wst_Issuer_s* x)
{
  struct zx_a_Metadata_s* y;
  if (!x) return 0;
  y = x->Metadata;
  if (y)
    x->Metadata = (struct zx_a_Metadata_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_Issuer_PUSH_Metadata) */

void zx_wst_Issuer_PUSH_Metadata(struct zx_wst_Issuer_s* x, struct zx_a_Metadata_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Metadata->gg.g;
  x->Metadata = z;
}

/* FUNC(zx_wst_Issuer_REV_Metadata) */

void zx_wst_Issuer_REV_Metadata(struct zx_wst_Issuer_s* x)
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

/* FUNC(zx_wst_Issuer_PUT_Metadata) */

void zx_wst_Issuer_PUT_Metadata(struct zx_wst_Issuer_s* x, int n, struct zx_a_Metadata_s* z)
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

/* FUNC(zx_wst_Issuer_ADD_Metadata) */

void zx_wst_Issuer_ADD_Metadata(struct zx_wst_Issuer_s* x, int n, struct zx_a_Metadata_s* z)
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

/* FUNC(zx_wst_Issuer_DEL_Metadata) */

void zx_wst_Issuer_DEL_Metadata(struct zx_wst_Issuer_s* x, int n)
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

/* FUNC(zx_wst_Issuer_GET_ID) */
struct zx_str* zx_wst_Issuer_GET_ID(struct zx_wst_Issuer_s* x) { return x->ID; }
/* FUNC(zx_wst_Issuer_PUT_ID) */
void zx_wst_Issuer_PUT_ID(struct zx_wst_Issuer_s* x, struct zx_str* y) { x->ID = y; }
/* FUNC(zx_wst_Issuer_GET_id) */
struct zx_str* zx_wst_Issuer_GET_id(struct zx_wst_Issuer_s* x) { return x->id; }
/* FUNC(zx_wst_Issuer_PUT_id) */
void zx_wst_Issuer_PUT_id(struct zx_wst_Issuer_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_wst_Issuer_GET_notOnOrAfter) */
struct zx_str* zx_wst_Issuer_GET_notOnOrAfter(struct zx_wst_Issuer_s* x) { return x->notOnOrAfter; }
/* FUNC(zx_wst_Issuer_PUT_notOnOrAfter) */
void zx_wst_Issuer_PUT_notOnOrAfter(struct zx_wst_Issuer_s* x, struct zx_str* y) { x->notOnOrAfter = y; }
/* FUNC(zx_wst_Issuer_GET_Id) */
struct zx_str* zx_wst_Issuer_GET_Id(struct zx_wst_Issuer_s* x) { return x->Id; }
/* FUNC(zx_wst_Issuer_PUT_Id) */
void zx_wst_Issuer_PUT_Id(struct zx_wst_Issuer_s* x, struct zx_str* y) { x->Id = y; }
/* FUNC(zx_wst_Issuer_GET_actor) */
struct zx_str* zx_wst_Issuer_GET_actor(struct zx_wst_Issuer_s* x) { return x->actor; }
/* FUNC(zx_wst_Issuer_PUT_actor) */
void zx_wst_Issuer_PUT_actor(struct zx_wst_Issuer_s* x, struct zx_str* y) { x->actor = y; }
/* FUNC(zx_wst_Issuer_GET_mustUnderstand) */
struct zx_str* zx_wst_Issuer_GET_mustUnderstand(struct zx_wst_Issuer_s* x) { return x->mustUnderstand; }
/* FUNC(zx_wst_Issuer_PUT_mustUnderstand) */
void zx_wst_Issuer_PUT_mustUnderstand(struct zx_wst_Issuer_s* x, struct zx_str* y) { x->mustUnderstand = y; }












#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_Lifetime_NUM_Created) */

int zx_wst_Lifetime_NUM_Created(struct zx_wst_Lifetime_s* x)
{
  struct zx_wsu_Created_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Created; y; ++n, y = (struct zx_wsu_Created_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_Lifetime_GET_Created) */

struct zx_wsu_Created_s* zx_wst_Lifetime_GET_Created(struct zx_wst_Lifetime_s* x, int n)
{
  struct zx_wsu_Created_s* y;
  if (!x) return 0;
  for (y = x->Created; n>=0 && y; --n, y = (struct zx_wsu_Created_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_Lifetime_POP_Created) */

struct zx_wsu_Created_s* zx_wst_Lifetime_POP_Created(struct zx_wst_Lifetime_s* x)
{
  struct zx_wsu_Created_s* y;
  if (!x) return 0;
  y = x->Created;
  if (y)
    x->Created = (struct zx_wsu_Created_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_Lifetime_PUSH_Created) */

void zx_wst_Lifetime_PUSH_Created(struct zx_wst_Lifetime_s* x, struct zx_wsu_Created_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Created->gg.g;
  x->Created = z;
}

/* FUNC(zx_wst_Lifetime_REV_Created) */

void zx_wst_Lifetime_REV_Created(struct zx_wst_Lifetime_s* x)
{
  struct zx_wsu_Created_s* nxt;
  struct zx_wsu_Created_s* y;
  if (!x) return;
  y = x->Created;
  if (!y) return;
  x->Created = 0;
  while (y) {
    nxt = (struct zx_wsu_Created_s*)y->gg.g.n;
    y->gg.g.n = &x->Created->gg.g;
    x->Created = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_Lifetime_PUT_Created) */

void zx_wst_Lifetime_PUT_Created(struct zx_wst_Lifetime_s* x, int n, struct zx_wsu_Created_s* z)
{
  struct zx_wsu_Created_s* y;
  if (!x || !z) return;
  y = x->Created;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Created = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsu_Created_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_Lifetime_ADD_Created) */

void zx_wst_Lifetime_ADD_Created(struct zx_wst_Lifetime_s* x, int n, struct zx_wsu_Created_s* z)
{
  struct zx_wsu_Created_s* y;
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
    for (; y->gg.g.n; y = (struct zx_wsu_Created_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Created; n > 1 && y; --n, y = (struct zx_wsu_Created_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_Lifetime_DEL_Created) */

void zx_wst_Lifetime_DEL_Created(struct zx_wst_Lifetime_s* x, int n)
{
  struct zx_wsu_Created_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Created = (struct zx_wsu_Created_s*)x->Created->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsu_Created_s*)x->Created;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsu_Created_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Created; n > 1 && y->gg.g.n; --n, y = (struct zx_wsu_Created_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_Lifetime_NUM_Expires) */

int zx_wst_Lifetime_NUM_Expires(struct zx_wst_Lifetime_s* x)
{
  struct zx_wsu_Expires_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Expires; y; ++n, y = (struct zx_wsu_Expires_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_Lifetime_GET_Expires) */

struct zx_wsu_Expires_s* zx_wst_Lifetime_GET_Expires(struct zx_wst_Lifetime_s* x, int n)
{
  struct zx_wsu_Expires_s* y;
  if (!x) return 0;
  for (y = x->Expires; n>=0 && y; --n, y = (struct zx_wsu_Expires_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_Lifetime_POP_Expires) */

struct zx_wsu_Expires_s* zx_wst_Lifetime_POP_Expires(struct zx_wst_Lifetime_s* x)
{
  struct zx_wsu_Expires_s* y;
  if (!x) return 0;
  y = x->Expires;
  if (y)
    x->Expires = (struct zx_wsu_Expires_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_Lifetime_PUSH_Expires) */

void zx_wst_Lifetime_PUSH_Expires(struct zx_wst_Lifetime_s* x, struct zx_wsu_Expires_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Expires->gg.g;
  x->Expires = z;
}

/* FUNC(zx_wst_Lifetime_REV_Expires) */

void zx_wst_Lifetime_REV_Expires(struct zx_wst_Lifetime_s* x)
{
  struct zx_wsu_Expires_s* nxt;
  struct zx_wsu_Expires_s* y;
  if (!x) return;
  y = x->Expires;
  if (!y) return;
  x->Expires = 0;
  while (y) {
    nxt = (struct zx_wsu_Expires_s*)y->gg.g.n;
    y->gg.g.n = &x->Expires->gg.g;
    x->Expires = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_Lifetime_PUT_Expires) */

void zx_wst_Lifetime_PUT_Expires(struct zx_wst_Lifetime_s* x, int n, struct zx_wsu_Expires_s* z)
{
  struct zx_wsu_Expires_s* y;
  if (!x || !z) return;
  y = x->Expires;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Expires = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsu_Expires_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_Lifetime_ADD_Expires) */

void zx_wst_Lifetime_ADD_Expires(struct zx_wst_Lifetime_s* x, int n, struct zx_wsu_Expires_s* z)
{
  struct zx_wsu_Expires_s* y;
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
    for (; y->gg.g.n; y = (struct zx_wsu_Expires_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Expires; n > 1 && y; --n, y = (struct zx_wsu_Expires_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_Lifetime_DEL_Expires) */

void zx_wst_Lifetime_DEL_Expires(struct zx_wst_Lifetime_s* x, int n)
{
  struct zx_wsu_Expires_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Expires = (struct zx_wsu_Expires_s*)x->Expires->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsu_Expires_s*)x->Expires;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsu_Expires_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Expires; n > 1 && y->gg.g.n; --n, y = (struct zx_wsu_Expires_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif


















#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_Participants_NUM_Primary) */

int zx_wst_Participants_NUM_Primary(struct zx_wst_Participants_s* x)
{
  struct zx_wst_Primary_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Primary; y; ++n, y = (struct zx_wst_Primary_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_Participants_GET_Primary) */

struct zx_wst_Primary_s* zx_wst_Participants_GET_Primary(struct zx_wst_Participants_s* x, int n)
{
  struct zx_wst_Primary_s* y;
  if (!x) return 0;
  for (y = x->Primary; n>=0 && y; --n, y = (struct zx_wst_Primary_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_Participants_POP_Primary) */

struct zx_wst_Primary_s* zx_wst_Participants_POP_Primary(struct zx_wst_Participants_s* x)
{
  struct zx_wst_Primary_s* y;
  if (!x) return 0;
  y = x->Primary;
  if (y)
    x->Primary = (struct zx_wst_Primary_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_Participants_PUSH_Primary) */

void zx_wst_Participants_PUSH_Primary(struct zx_wst_Participants_s* x, struct zx_wst_Primary_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Primary->gg.g;
  x->Primary = z;
}

/* FUNC(zx_wst_Participants_REV_Primary) */

void zx_wst_Participants_REV_Primary(struct zx_wst_Participants_s* x)
{
  struct zx_wst_Primary_s* nxt;
  struct zx_wst_Primary_s* y;
  if (!x) return;
  y = x->Primary;
  if (!y) return;
  x->Primary = 0;
  while (y) {
    nxt = (struct zx_wst_Primary_s*)y->gg.g.n;
    y->gg.g.n = &x->Primary->gg.g;
    x->Primary = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_Participants_PUT_Primary) */

void zx_wst_Participants_PUT_Primary(struct zx_wst_Participants_s* x, int n, struct zx_wst_Primary_s* z)
{
  struct zx_wst_Primary_s* y;
  if (!x || !z) return;
  y = x->Primary;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Primary = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Primary_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_Participants_ADD_Primary) */

void zx_wst_Participants_ADD_Primary(struct zx_wst_Participants_s* x, int n, struct zx_wst_Primary_s* z)
{
  struct zx_wst_Primary_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Primary->gg.g;
    x->Primary = z;
    return;
  case -1:
    y = x->Primary;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Primary_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Primary; n > 1 && y; --n, y = (struct zx_wst_Primary_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_Participants_DEL_Primary) */

void zx_wst_Participants_DEL_Primary(struct zx_wst_Participants_s* x, int n)
{
  struct zx_wst_Primary_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Primary = (struct zx_wst_Primary_s*)x->Primary->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Primary_s*)x->Primary;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Primary_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Primary; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Primary_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_Participants_NUM_Participant) */

int zx_wst_Participants_NUM_Participant(struct zx_wst_Participants_s* x)
{
  struct zx_wst_Participant_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Participant; y; ++n, y = (struct zx_wst_Participant_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_Participants_GET_Participant) */

struct zx_wst_Participant_s* zx_wst_Participants_GET_Participant(struct zx_wst_Participants_s* x, int n)
{
  struct zx_wst_Participant_s* y;
  if (!x) return 0;
  for (y = x->Participant; n>=0 && y; --n, y = (struct zx_wst_Participant_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_Participants_POP_Participant) */

struct zx_wst_Participant_s* zx_wst_Participants_POP_Participant(struct zx_wst_Participants_s* x)
{
  struct zx_wst_Participant_s* y;
  if (!x) return 0;
  y = x->Participant;
  if (y)
    x->Participant = (struct zx_wst_Participant_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_Participants_PUSH_Participant) */

void zx_wst_Participants_PUSH_Participant(struct zx_wst_Participants_s* x, struct zx_wst_Participant_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Participant->gg.g;
  x->Participant = z;
}

/* FUNC(zx_wst_Participants_REV_Participant) */

void zx_wst_Participants_REV_Participant(struct zx_wst_Participants_s* x)
{
  struct zx_wst_Participant_s* nxt;
  struct zx_wst_Participant_s* y;
  if (!x) return;
  y = x->Participant;
  if (!y) return;
  x->Participant = 0;
  while (y) {
    nxt = (struct zx_wst_Participant_s*)y->gg.g.n;
    y->gg.g.n = &x->Participant->gg.g;
    x->Participant = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_Participants_PUT_Participant) */

void zx_wst_Participants_PUT_Participant(struct zx_wst_Participants_s* x, int n, struct zx_wst_Participant_s* z)
{
  struct zx_wst_Participant_s* y;
  if (!x || !z) return;
  y = x->Participant;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Participant = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Participant_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_Participants_ADD_Participant) */

void zx_wst_Participants_ADD_Participant(struct zx_wst_Participants_s* x, int n, struct zx_wst_Participant_s* z)
{
  struct zx_wst_Participant_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Participant->gg.g;
    x->Participant = z;
    return;
  case -1:
    y = x->Participant;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Participant_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Participant; n > 1 && y; --n, y = (struct zx_wst_Participant_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_Participants_DEL_Participant) */

void zx_wst_Participants_DEL_Participant(struct zx_wst_Participants_s* x, int n)
{
  struct zx_wst_Participant_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Participant = (struct zx_wst_Participant_s*)x->Participant->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Participant_s*)x->Participant;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Participant_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Participant; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Participant_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif





















/* FUNC(zx_wst_Renewing_GET_Allow) */
struct zx_str* zx_wst_Renewing_GET_Allow(struct zx_wst_Renewing_s* x) { return x->Allow; }
/* FUNC(zx_wst_Renewing_PUT_Allow) */
void zx_wst_Renewing_PUT_Allow(struct zx_wst_Renewing_s* x, struct zx_str* y) { x->Allow = y; }
/* FUNC(zx_wst_Renewing_GET_OK) */
struct zx_str* zx_wst_Renewing_GET_OK(struct zx_wst_Renewing_s* x) { return x->OK; }
/* FUNC(zx_wst_Renewing_PUT_OK) */
void zx_wst_Renewing_PUT_OK(struct zx_wst_Renewing_s* x, struct zx_str* y) { x->OK = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_TokenType) */

int zx_wst_RequestSecurityToken_NUM_TokenType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TokenType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_TokenType) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_TokenType(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TokenType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_TokenType) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_TokenType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TokenType;
  if (y)
    x->TokenType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_TokenType) */

void zx_wst_RequestSecurityToken_PUSH_TokenType(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TokenType->g;
  x->TokenType = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_TokenType) */

void zx_wst_RequestSecurityToken_REV_TokenType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TokenType;
  if (!y) return;
  x->TokenType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TokenType->g;
    x->TokenType = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_TokenType) */

void zx_wst_RequestSecurityToken_PUT_TokenType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TokenType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TokenType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_TokenType) */

void zx_wst_RequestSecurityToken_ADD_TokenType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TokenType->g;
    x->TokenType = z;
    return;
  case -1:
    y = x->TokenType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TokenType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_TokenType) */

void zx_wst_RequestSecurityToken_DEL_TokenType(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TokenType = (struct zx_elem_s*)x->TokenType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TokenType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TokenType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_RequestType) */

int zx_wst_RequestSecurityToken_NUM_RequestType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_RequestType) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_RequestType(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RequestType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_RequestType) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_RequestType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RequestType;
  if (y)
    x->RequestType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_RequestType) */

void zx_wst_RequestSecurityToken_PUSH_RequestType(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RequestType->g;
  x->RequestType = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_RequestType) */

void zx_wst_RequestSecurityToken_REV_RequestType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RequestType;
  if (!y) return;
  x->RequestType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RequestType->g;
    x->RequestType = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_RequestType) */

void zx_wst_RequestSecurityToken_PUT_RequestType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RequestType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RequestType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_RequestType) */

void zx_wst_RequestSecurityToken_ADD_RequestType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RequestType->g;
    x->RequestType = z;
    return;
  case -1:
    y = x->RequestType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_RequestType) */

void zx_wst_RequestSecurityToken_DEL_RequestType(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestType = (struct zx_elem_s*)x->RequestType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RequestType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_AppliesTo) */

int zx_wst_RequestSecurityToken_NUM_AppliesTo(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wsp_AppliesTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AppliesTo; y; ++n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_AppliesTo) */

struct zx_wsp_AppliesTo_s* zx_wst_RequestSecurityToken_GET_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x) return 0;
  for (y = x->AppliesTo; n>=0 && y; --n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_AppliesTo) */

struct zx_wsp_AppliesTo_s* zx_wst_RequestSecurityToken_POP_AppliesTo(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x) return 0;
  y = x->AppliesTo;
  if (y)
    x->AppliesTo = (struct zx_wsp_AppliesTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_AppliesTo) */

void zx_wst_RequestSecurityToken_PUSH_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, struct zx_wsp_AppliesTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AppliesTo->gg.g;
  x->AppliesTo = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_AppliesTo) */

void zx_wst_RequestSecurityToken_REV_AppliesTo(struct zx_wst_RequestSecurityToken_s* x)
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

/* FUNC(zx_wst_RequestSecurityToken_PUT_AppliesTo) */

void zx_wst_RequestSecurityToken_PUT_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_AppliesTo_s* z)
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

/* FUNC(zx_wst_RequestSecurityToken_ADD_AppliesTo) */

void zx_wst_RequestSecurityToken_ADD_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_AppliesTo_s* z)
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

/* FUNC(zx_wst_RequestSecurityToken_DEL_AppliesTo) */

void zx_wst_RequestSecurityToken_DEL_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, int n)
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

/* FUNC(zx_wst_RequestSecurityToken_NUM_Claims) */

int zx_wst_RequestSecurityToken_NUM_Claims(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Claims_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Claims; y; ++n, y = (struct zx_wst_Claims_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Claims) */

struct zx_wst_Claims_s* zx_wst_RequestSecurityToken_GET_Claims(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Claims_s* y;
  if (!x) return 0;
  for (y = x->Claims; n>=0 && y; --n, y = (struct zx_wst_Claims_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Claims) */

struct zx_wst_Claims_s* zx_wst_RequestSecurityToken_POP_Claims(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Claims_s* y;
  if (!x) return 0;
  y = x->Claims;
  if (y)
    x->Claims = (struct zx_wst_Claims_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Claims) */

void zx_wst_RequestSecurityToken_PUSH_Claims(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Claims_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Claims->gg.g;
  x->Claims = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Claims) */

void zx_wst_RequestSecurityToken_REV_Claims(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Claims_s* nxt;
  struct zx_wst_Claims_s* y;
  if (!x) return;
  y = x->Claims;
  if (!y) return;
  x->Claims = 0;
  while (y) {
    nxt = (struct zx_wst_Claims_s*)y->gg.g.n;
    y->gg.g.n = &x->Claims->gg.g;
    x->Claims = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_Claims) */

void zx_wst_RequestSecurityToken_PUT_Claims(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Claims_s* z)
{
  struct zx_wst_Claims_s* y;
  if (!x || !z) return;
  y = x->Claims;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Claims = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Claims_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_Claims) */

void zx_wst_RequestSecurityToken_ADD_Claims(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Claims_s* z)
{
  struct zx_wst_Claims_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Claims->gg.g;
    x->Claims = z;
    return;
  case -1:
    y = x->Claims;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Claims_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Claims; n > 1 && y; --n, y = (struct zx_wst_Claims_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_Claims) */

void zx_wst_RequestSecurityToken_DEL_Claims(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Claims_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Claims = (struct zx_wst_Claims_s*)x->Claims->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Claims_s*)x->Claims;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Claims_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Claims; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Claims_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_Entropy) */

int zx_wst_RequestSecurityToken_NUM_Entropy(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Entropy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Entropy; y; ++n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Entropy) */

struct zx_wst_Entropy_s* zx_wst_RequestSecurityToken_GET_Entropy(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Entropy_s* y;
  if (!x) return 0;
  for (y = x->Entropy; n>=0 && y; --n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Entropy) */

struct zx_wst_Entropy_s* zx_wst_RequestSecurityToken_POP_Entropy(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Entropy_s* y;
  if (!x) return 0;
  y = x->Entropy;
  if (y)
    x->Entropy = (struct zx_wst_Entropy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Entropy) */

void zx_wst_RequestSecurityToken_PUSH_Entropy(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Entropy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Entropy->gg.g;
  x->Entropy = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Entropy) */

void zx_wst_RequestSecurityToken_REV_Entropy(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Entropy_s* nxt;
  struct zx_wst_Entropy_s* y;
  if (!x) return;
  y = x->Entropy;
  if (!y) return;
  x->Entropy = 0;
  while (y) {
    nxt = (struct zx_wst_Entropy_s*)y->gg.g.n;
    y->gg.g.n = &x->Entropy->gg.g;
    x->Entropy = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_Entropy) */

void zx_wst_RequestSecurityToken_PUT_Entropy(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Entropy_s* z)
{
  struct zx_wst_Entropy_s* y;
  if (!x || !z) return;
  y = x->Entropy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Entropy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_Entropy) */

void zx_wst_RequestSecurityToken_ADD_Entropy(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Entropy_s* z)
{
  struct zx_wst_Entropy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Entropy->gg.g;
    x->Entropy = z;
    return;
  case -1:
    y = x->Entropy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Entropy; n > 1 && y; --n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_Entropy) */

void zx_wst_RequestSecurityToken_DEL_Entropy(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Entropy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Entropy = (struct zx_wst_Entropy_s*)x->Entropy->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Entropy_s*)x->Entropy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Entropy; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_Lifetime) */

int zx_wst_RequestSecurityToken_NUM_Lifetime(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Lifetime_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Lifetime; y; ++n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Lifetime) */

struct zx_wst_Lifetime_s* zx_wst_RequestSecurityToken_GET_Lifetime(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Lifetime_s* y;
  if (!x) return 0;
  for (y = x->Lifetime; n>=0 && y; --n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Lifetime) */

struct zx_wst_Lifetime_s* zx_wst_RequestSecurityToken_POP_Lifetime(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Lifetime_s* y;
  if (!x) return 0;
  y = x->Lifetime;
  if (y)
    x->Lifetime = (struct zx_wst_Lifetime_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Lifetime) */

void zx_wst_RequestSecurityToken_PUSH_Lifetime(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Lifetime_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Lifetime->gg.g;
  x->Lifetime = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Lifetime) */

void zx_wst_RequestSecurityToken_REV_Lifetime(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Lifetime_s* nxt;
  struct zx_wst_Lifetime_s* y;
  if (!x) return;
  y = x->Lifetime;
  if (!y) return;
  x->Lifetime = 0;
  while (y) {
    nxt = (struct zx_wst_Lifetime_s*)y->gg.g.n;
    y->gg.g.n = &x->Lifetime->gg.g;
    x->Lifetime = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_Lifetime) */

void zx_wst_RequestSecurityToken_PUT_Lifetime(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Lifetime_s* z)
{
  struct zx_wst_Lifetime_s* y;
  if (!x || !z) return;
  y = x->Lifetime;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Lifetime = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_Lifetime) */

void zx_wst_RequestSecurityToken_ADD_Lifetime(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Lifetime_s* z)
{
  struct zx_wst_Lifetime_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Lifetime->gg.g;
    x->Lifetime = z;
    return;
  case -1:
    y = x->Lifetime;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Lifetime; n > 1 && y; --n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_Lifetime) */

void zx_wst_RequestSecurityToken_DEL_Lifetime(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Lifetime_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Lifetime = (struct zx_wst_Lifetime_s*)x->Lifetime->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Lifetime_s*)x->Lifetime;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Lifetime; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_AllowPostdating) */

int zx_wst_RequestSecurityToken_NUM_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AllowPostdating; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_AllowPostdating) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AllowPostdating; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_AllowPostdating) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AllowPostdating;
  if (y)
    x->AllowPostdating = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_AllowPostdating) */

void zx_wst_RequestSecurityToken_PUSH_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AllowPostdating->g;
  x->AllowPostdating = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_AllowPostdating) */

void zx_wst_RequestSecurityToken_REV_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AllowPostdating;
  if (!y) return;
  x->AllowPostdating = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AllowPostdating->g;
    x->AllowPostdating = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_AllowPostdating) */

void zx_wst_RequestSecurityToken_PUT_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AllowPostdating;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AllowPostdating = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_AllowPostdating) */

void zx_wst_RequestSecurityToken_ADD_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AllowPostdating->g;
    x->AllowPostdating = z;
    return;
  case -1:
    y = x->AllowPostdating;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AllowPostdating; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_AllowPostdating) */

void zx_wst_RequestSecurityToken_DEL_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AllowPostdating = (struct zx_elem_s*)x->AllowPostdating->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AllowPostdating;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AllowPostdating; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_Renewing) */

int zx_wst_RequestSecurityToken_NUM_Renewing(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Renewing_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Renewing; y; ++n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Renewing) */

struct zx_wst_Renewing_s* zx_wst_RequestSecurityToken_GET_Renewing(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Renewing_s* y;
  if (!x) return 0;
  for (y = x->Renewing; n>=0 && y; --n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Renewing) */

struct zx_wst_Renewing_s* zx_wst_RequestSecurityToken_POP_Renewing(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Renewing_s* y;
  if (!x) return 0;
  y = x->Renewing;
  if (y)
    x->Renewing = (struct zx_wst_Renewing_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Renewing) */

void zx_wst_RequestSecurityToken_PUSH_Renewing(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Renewing_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Renewing->gg.g;
  x->Renewing = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Renewing) */

void zx_wst_RequestSecurityToken_REV_Renewing(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Renewing_s* nxt;
  struct zx_wst_Renewing_s* y;
  if (!x) return;
  y = x->Renewing;
  if (!y) return;
  x->Renewing = 0;
  while (y) {
    nxt = (struct zx_wst_Renewing_s*)y->gg.g.n;
    y->gg.g.n = &x->Renewing->gg.g;
    x->Renewing = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_Renewing) */

void zx_wst_RequestSecurityToken_PUT_Renewing(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Renewing_s* z)
{
  struct zx_wst_Renewing_s* y;
  if (!x || !z) return;
  y = x->Renewing;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Renewing = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_Renewing) */

void zx_wst_RequestSecurityToken_ADD_Renewing(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Renewing_s* z)
{
  struct zx_wst_Renewing_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Renewing->gg.g;
    x->Renewing = z;
    return;
  case -1:
    y = x->Renewing;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Renewing; n > 1 && y; --n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_Renewing) */

void zx_wst_RequestSecurityToken_DEL_Renewing(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Renewing_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Renewing = (struct zx_wst_Renewing_s*)x->Renewing->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Renewing_s*)x->Renewing;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Renewing; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_OnBehalfOf) */

int zx_wst_RequestSecurityToken_NUM_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_OnBehalfOf_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OnBehalfOf; y; ++n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_OnBehalfOf) */

struct zx_wst_OnBehalfOf_s* zx_wst_RequestSecurityToken_GET_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x) return 0;
  for (y = x->OnBehalfOf; n>=0 && y; --n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_OnBehalfOf) */

struct zx_wst_OnBehalfOf_s* zx_wst_RequestSecurityToken_POP_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x) return 0;
  y = x->OnBehalfOf;
  if (y)
    x->OnBehalfOf = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_OnBehalfOf) */

void zx_wst_RequestSecurityToken_PUSH_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_OnBehalfOf_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OnBehalfOf->gg.g;
  x->OnBehalfOf = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_OnBehalfOf) */

void zx_wst_RequestSecurityToken_REV_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_OnBehalfOf_s* nxt;
  struct zx_wst_OnBehalfOf_s* y;
  if (!x) return;
  y = x->OnBehalfOf;
  if (!y) return;
  x->OnBehalfOf = 0;
  while (y) {
    nxt = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n;
    y->gg.g.n = &x->OnBehalfOf->gg.g;
    x->OnBehalfOf = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_OnBehalfOf) */

void zx_wst_RequestSecurityToken_PUT_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_OnBehalfOf_s* z)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x || !z) return;
  y = x->OnBehalfOf;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OnBehalfOf = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_OnBehalfOf) */

void zx_wst_RequestSecurityToken_ADD_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_OnBehalfOf_s* z)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OnBehalfOf->gg.g;
    x->OnBehalfOf = z;
    return;
  case -1:
    y = x->OnBehalfOf;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OnBehalfOf; n > 1 && y; --n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_OnBehalfOf) */

void zx_wst_RequestSecurityToken_DEL_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OnBehalfOf = (struct zx_wst_OnBehalfOf_s*)x->OnBehalfOf->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_OnBehalfOf_s*)x->OnBehalfOf;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OnBehalfOf; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_Issuer) */

int zx_wst_RequestSecurityToken_NUM_Issuer(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Issuer) */

struct zx_wst_Issuer_s* zx_wst_RequestSecurityToken_GET_Issuer(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Issuer) */

struct zx_wst_Issuer_s* zx_wst_RequestSecurityToken_POP_Issuer(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_wst_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Issuer) */

void zx_wst_RequestSecurityToken_PUSH_Issuer(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Issuer) */

void zx_wst_RequestSecurityToken_REV_Issuer(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Issuer_s* nxt;
  struct zx_wst_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_wst_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_Issuer) */

void zx_wst_RequestSecurityToken_PUT_Issuer(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Issuer_s* z)
{
  struct zx_wst_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_Issuer) */

void zx_wst_RequestSecurityToken_ADD_Issuer(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Issuer_s* z)
{
  struct zx_wst_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_Issuer) */

void zx_wst_RequestSecurityToken_DEL_Issuer(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_wst_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_AuthenticationType) */

int zx_wst_RequestSecurityToken_NUM_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthenticationType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_AuthenticationType) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthenticationType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_AuthenticationType) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthenticationType;
  if (y)
    x->AuthenticationType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_AuthenticationType) */

void zx_wst_RequestSecurityToken_PUSH_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthenticationType->g;
  x->AuthenticationType = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_AuthenticationType) */

void zx_wst_RequestSecurityToken_REV_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthenticationType;
  if (!y) return;
  x->AuthenticationType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthenticationType->g;
    x->AuthenticationType = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_AuthenticationType) */

void zx_wst_RequestSecurityToken_PUT_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthenticationType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthenticationType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_AuthenticationType) */

void zx_wst_RequestSecurityToken_ADD_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthenticationType->g;
    x->AuthenticationType = z;
    return;
  case -1:
    y = x->AuthenticationType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthenticationType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_AuthenticationType) */

void zx_wst_RequestSecurityToken_DEL_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthenticationType = (struct zx_elem_s*)x->AuthenticationType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthenticationType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthenticationType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_KeyType) */

int zx_wst_RequestSecurityToken_NUM_KeyType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_KeyType) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_KeyType(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_KeyType) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_KeyType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyType;
  if (y)
    x->KeyType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_KeyType) */

void zx_wst_RequestSecurityToken_PUSH_KeyType(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyType->g;
  x->KeyType = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_KeyType) */

void zx_wst_RequestSecurityToken_REV_KeyType(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyType;
  if (!y) return;
  x->KeyType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyType->g;
    x->KeyType = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_KeyType) */

void zx_wst_RequestSecurityToken_PUT_KeyType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_KeyType) */

void zx_wst_RequestSecurityToken_ADD_KeyType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyType->g;
    x->KeyType = z;
    return;
  case -1:
    y = x->KeyType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_KeyType) */

void zx_wst_RequestSecurityToken_DEL_KeyType(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyType = (struct zx_elem_s*)x->KeyType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_KeySize) */

int zx_wst_RequestSecurityToken_NUM_KeySize(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeySize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_KeySize) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_KeySize(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeySize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_KeySize) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_KeySize(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeySize;
  if (y)
    x->KeySize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_KeySize) */

void zx_wst_RequestSecurityToken_PUSH_KeySize(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeySize->g;
  x->KeySize = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_KeySize) */

void zx_wst_RequestSecurityToken_REV_KeySize(struct zx_wst_RequestSecurityToken_s* x)
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

/* FUNC(zx_wst_RequestSecurityToken_PUT_KeySize) */

void zx_wst_RequestSecurityToken_PUT_KeySize(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_wst_RequestSecurityToken_ADD_KeySize) */

void zx_wst_RequestSecurityToken_ADD_KeySize(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_wst_RequestSecurityToken_DEL_KeySize) */

void zx_wst_RequestSecurityToken_DEL_KeySize(struct zx_wst_RequestSecurityToken_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_SignatureAlgorithm) */

int zx_wst_RequestSecurityToken_NUM_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignatureAlgorithm; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_SignatureAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SignatureAlgorithm; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_SignatureAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SignatureAlgorithm;
  if (y)
    x->SignatureAlgorithm = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_SignatureAlgorithm) */

void zx_wst_RequestSecurityToken_PUSH_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SignatureAlgorithm->g;
  x->SignatureAlgorithm = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_SignatureAlgorithm) */

void zx_wst_RequestSecurityToken_REV_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SignatureAlgorithm;
  if (!y) return;
  x->SignatureAlgorithm = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SignatureAlgorithm->g;
    x->SignatureAlgorithm = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_SignatureAlgorithm) */

void zx_wst_RequestSecurityToken_PUT_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SignatureAlgorithm;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SignatureAlgorithm = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_SignatureAlgorithm) */

void zx_wst_RequestSecurityToken_ADD_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SignatureAlgorithm->g;
    x->SignatureAlgorithm = z;
    return;
  case -1:
    y = x->SignatureAlgorithm;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SignatureAlgorithm; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_SignatureAlgorithm) */

void zx_wst_RequestSecurityToken_DEL_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignatureAlgorithm = (struct zx_elem_s*)x->SignatureAlgorithm->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SignatureAlgorithm;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SignatureAlgorithm; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_Encryption) */

int zx_wst_RequestSecurityToken_NUM_Encryption(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Encryption_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Encryption; y; ++n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Encryption) */

struct zx_wst_Encryption_s* zx_wst_RequestSecurityToken_GET_Encryption(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Encryption_s* y;
  if (!x) return 0;
  for (y = x->Encryption; n>=0 && y; --n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Encryption) */

struct zx_wst_Encryption_s* zx_wst_RequestSecurityToken_POP_Encryption(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Encryption_s* y;
  if (!x) return 0;
  y = x->Encryption;
  if (y)
    x->Encryption = (struct zx_wst_Encryption_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Encryption) */

void zx_wst_RequestSecurityToken_PUSH_Encryption(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Encryption_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Encryption->gg.g;
  x->Encryption = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Encryption) */

void zx_wst_RequestSecurityToken_REV_Encryption(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_Encryption_s* nxt;
  struct zx_wst_Encryption_s* y;
  if (!x) return;
  y = x->Encryption;
  if (!y) return;
  x->Encryption = 0;
  while (y) {
    nxt = (struct zx_wst_Encryption_s*)y->gg.g.n;
    y->gg.g.n = &x->Encryption->gg.g;
    x->Encryption = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_Encryption) */

void zx_wst_RequestSecurityToken_PUT_Encryption(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Encryption_s* z)
{
  struct zx_wst_Encryption_s* y;
  if (!x || !z) return;
  y = x->Encryption;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Encryption = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_Encryption) */

void zx_wst_RequestSecurityToken_ADD_Encryption(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Encryption_s* z)
{
  struct zx_wst_Encryption_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Encryption->gg.g;
    x->Encryption = z;
    return;
  case -1:
    y = x->Encryption;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Encryption; n > 1 && y; --n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_Encryption) */

void zx_wst_RequestSecurityToken_DEL_Encryption(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_Encryption_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Encryption = (struct zx_wst_Encryption_s*)x->Encryption->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Encryption_s*)x->Encryption;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Encryption; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_EncryptionAlgorithm) */

int zx_wst_RequestSecurityToken_NUM_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionAlgorithm; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_EncryptionAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptionAlgorithm; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_EncryptionAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptionAlgorithm;
  if (y)
    x->EncryptionAlgorithm = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_EncryptionAlgorithm) */

void zx_wst_RequestSecurityToken_PUSH_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptionAlgorithm->g;
  x->EncryptionAlgorithm = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_EncryptionAlgorithm) */

void zx_wst_RequestSecurityToken_REV_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptionAlgorithm;
  if (!y) return;
  x->EncryptionAlgorithm = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptionAlgorithm->g;
    x->EncryptionAlgorithm = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_EncryptionAlgorithm) */

void zx_wst_RequestSecurityToken_PUT_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptionAlgorithm;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptionAlgorithm = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_EncryptionAlgorithm) */

void zx_wst_RequestSecurityToken_ADD_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptionAlgorithm->g;
    x->EncryptionAlgorithm = z;
    return;
  case -1:
    y = x->EncryptionAlgorithm;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptionAlgorithm; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_EncryptionAlgorithm) */

void zx_wst_RequestSecurityToken_DEL_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionAlgorithm = (struct zx_elem_s*)x->EncryptionAlgorithm->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptionAlgorithm;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptionAlgorithm; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_CanonicalizationAlgorithm) */

int zx_wst_RequestSecurityToken_NUM_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CanonicalizationAlgorithm; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_CanonicalizationAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CanonicalizationAlgorithm; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_CanonicalizationAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CanonicalizationAlgorithm;
  if (y)
    x->CanonicalizationAlgorithm = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityToken_PUSH_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CanonicalizationAlgorithm->g;
  x->CanonicalizationAlgorithm = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityToken_REV_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CanonicalizationAlgorithm;
  if (!y) return;
  x->CanonicalizationAlgorithm = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CanonicalizationAlgorithm->g;
    x->CanonicalizationAlgorithm = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityToken_PUT_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CanonicalizationAlgorithm;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CanonicalizationAlgorithm = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityToken_ADD_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CanonicalizationAlgorithm->g;
    x->CanonicalizationAlgorithm = z;
    return;
  case -1:
    y = x->CanonicalizationAlgorithm;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CanonicalizationAlgorithm; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityToken_DEL_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CanonicalizationAlgorithm = (struct zx_elem_s*)x->CanonicalizationAlgorithm->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CanonicalizationAlgorithm;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CanonicalizationAlgorithm; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_ProofEncryption) */

int zx_wst_RequestSecurityToken_NUM_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_ProofEncryption_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProofEncryption; y; ++n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_ProofEncryption) */

struct zx_wst_ProofEncryption_s* zx_wst_RequestSecurityToken_GET_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x) return 0;
  for (y = x->ProofEncryption; n>=0 && y; --n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_ProofEncryption) */

struct zx_wst_ProofEncryption_s* zx_wst_RequestSecurityToken_POP_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x) return 0;
  y = x->ProofEncryption;
  if (y)
    x->ProofEncryption = (struct zx_wst_ProofEncryption_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_ProofEncryption) */

void zx_wst_RequestSecurityToken_PUSH_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_ProofEncryption_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProofEncryption->gg.g;
  x->ProofEncryption = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_ProofEncryption) */

void zx_wst_RequestSecurityToken_REV_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_ProofEncryption_s* nxt;
  struct zx_wst_ProofEncryption_s* y;
  if (!x) return;
  y = x->ProofEncryption;
  if (!y) return;
  x->ProofEncryption = 0;
  while (y) {
    nxt = (struct zx_wst_ProofEncryption_s*)y->gg.g.n;
    y->gg.g.n = &x->ProofEncryption->gg.g;
    x->ProofEncryption = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_ProofEncryption) */

void zx_wst_RequestSecurityToken_PUT_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_ProofEncryption_s* z)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x || !z) return;
  y = x->ProofEncryption;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProofEncryption = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_ProofEncryption) */

void zx_wst_RequestSecurityToken_ADD_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_ProofEncryption_s* z)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProofEncryption->gg.g;
    x->ProofEncryption = z;
    return;
  case -1:
    y = x->ProofEncryption;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProofEncryption; n > 1 && y; --n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_ProofEncryption) */

void zx_wst_RequestSecurityToken_DEL_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProofEncryption = (struct zx_wst_ProofEncryption_s*)x->ProofEncryption->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_ProofEncryption_s*)x->ProofEncryption;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProofEncryption; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_UseKey) */

int zx_wst_RequestSecurityToken_NUM_UseKey(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_UseKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UseKey; y; ++n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_UseKey) */

struct zx_wst_UseKey_s* zx_wst_RequestSecurityToken_GET_UseKey(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_UseKey_s* y;
  if (!x) return 0;
  for (y = x->UseKey; n>=0 && y; --n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_UseKey) */

struct zx_wst_UseKey_s* zx_wst_RequestSecurityToken_POP_UseKey(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_UseKey_s* y;
  if (!x) return 0;
  y = x->UseKey;
  if (y)
    x->UseKey = (struct zx_wst_UseKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_UseKey) */

void zx_wst_RequestSecurityToken_PUSH_UseKey(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_UseKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UseKey->gg.g;
  x->UseKey = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_UseKey) */

void zx_wst_RequestSecurityToken_REV_UseKey(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_UseKey_s* nxt;
  struct zx_wst_UseKey_s* y;
  if (!x) return;
  y = x->UseKey;
  if (!y) return;
  x->UseKey = 0;
  while (y) {
    nxt = (struct zx_wst_UseKey_s*)y->gg.g.n;
    y->gg.g.n = &x->UseKey->gg.g;
    x->UseKey = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_UseKey) */

void zx_wst_RequestSecurityToken_PUT_UseKey(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_UseKey_s* z)
{
  struct zx_wst_UseKey_s* y;
  if (!x || !z) return;
  y = x->UseKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UseKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_UseKey) */

void zx_wst_RequestSecurityToken_ADD_UseKey(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_UseKey_s* z)
{
  struct zx_wst_UseKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UseKey->gg.g;
    x->UseKey = z;
    return;
  case -1:
    y = x->UseKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UseKey; n > 1 && y; --n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_UseKey) */

void zx_wst_RequestSecurityToken_DEL_UseKey(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_UseKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UseKey = (struct zx_wst_UseKey_s*)x->UseKey->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_UseKey_s*)x->UseKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UseKey; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_SignWith) */

int zx_wst_RequestSecurityToken_NUM_SignWith(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignWith; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_SignWith) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_SignWith(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SignWith; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_SignWith) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_SignWith(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SignWith;
  if (y)
    x->SignWith = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_SignWith) */

void zx_wst_RequestSecurityToken_PUSH_SignWith(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SignWith->g;
  x->SignWith = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_SignWith) */

void zx_wst_RequestSecurityToken_REV_SignWith(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SignWith;
  if (!y) return;
  x->SignWith = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SignWith->g;
    x->SignWith = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_SignWith) */

void zx_wst_RequestSecurityToken_PUT_SignWith(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SignWith;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SignWith = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_SignWith) */

void zx_wst_RequestSecurityToken_ADD_SignWith(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SignWith->g;
    x->SignWith = z;
    return;
  case -1:
    y = x->SignWith;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SignWith; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_SignWith) */

void zx_wst_RequestSecurityToken_DEL_SignWith(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignWith = (struct zx_elem_s*)x->SignWith->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SignWith;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SignWith; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_EncryptWith) */

int zx_wst_RequestSecurityToken_NUM_EncryptWith(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptWith; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_EncryptWith) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptWith; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_EncryptWith) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_EncryptWith(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptWith;
  if (y)
    x->EncryptWith = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_EncryptWith) */

void zx_wst_RequestSecurityToken_PUSH_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptWith->g;
  x->EncryptWith = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_EncryptWith) */

void zx_wst_RequestSecurityToken_REV_EncryptWith(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptWith;
  if (!y) return;
  x->EncryptWith = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptWith->g;
    x->EncryptWith = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_EncryptWith) */

void zx_wst_RequestSecurityToken_PUT_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptWith;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptWith = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_EncryptWith) */

void zx_wst_RequestSecurityToken_ADD_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptWith->g;
    x->EncryptWith = z;
    return;
  case -1:
    y = x->EncryptWith;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptWith; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_EncryptWith) */

void zx_wst_RequestSecurityToken_DEL_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptWith = (struct zx_elem_s*)x->EncryptWith->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptWith;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptWith; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_DelegateTo) */

int zx_wst_RequestSecurityToken_NUM_DelegateTo(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_DelegateTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DelegateTo; y; ++n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_DelegateTo) */

struct zx_wst_DelegateTo_s* zx_wst_RequestSecurityToken_GET_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x) return 0;
  for (y = x->DelegateTo; n>=0 && y; --n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_DelegateTo) */

struct zx_wst_DelegateTo_s* zx_wst_RequestSecurityToken_POP_DelegateTo(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x) return 0;
  y = x->DelegateTo;
  if (y)
    x->DelegateTo = (struct zx_wst_DelegateTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_DelegateTo) */

void zx_wst_RequestSecurityToken_PUSH_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_DelegateTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DelegateTo->gg.g;
  x->DelegateTo = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_DelegateTo) */

void zx_wst_RequestSecurityToken_REV_DelegateTo(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wst_DelegateTo_s* nxt;
  struct zx_wst_DelegateTo_s* y;
  if (!x) return;
  y = x->DelegateTo;
  if (!y) return;
  x->DelegateTo = 0;
  while (y) {
    nxt = (struct zx_wst_DelegateTo_s*)y->gg.g.n;
    y->gg.g.n = &x->DelegateTo->gg.g;
    x->DelegateTo = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_DelegateTo) */

void zx_wst_RequestSecurityToken_PUT_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_DelegateTo_s* z)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x || !z) return;
  y = x->DelegateTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DelegateTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_DelegateTo) */

void zx_wst_RequestSecurityToken_ADD_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_DelegateTo_s* z)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DelegateTo->gg.g;
    x->DelegateTo = z;
    return;
  case -1:
    y = x->DelegateTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DelegateTo; n > 1 && y; --n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_DelegateTo) */

void zx_wst_RequestSecurityToken_DEL_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DelegateTo = (struct zx_wst_DelegateTo_s*)x->DelegateTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_DelegateTo_s*)x->DelegateTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DelegateTo; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_Forwardable) */

int zx_wst_RequestSecurityToken_NUM_Forwardable(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Forwardable; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Forwardable) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_Forwardable(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Forwardable; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Forwardable) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_Forwardable(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Forwardable;
  if (y)
    x->Forwardable = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Forwardable) */

void zx_wst_RequestSecurityToken_PUSH_Forwardable(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Forwardable->g;
  x->Forwardable = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Forwardable) */

void zx_wst_RequestSecurityToken_REV_Forwardable(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Forwardable;
  if (!y) return;
  x->Forwardable = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Forwardable->g;
    x->Forwardable = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_Forwardable) */

void zx_wst_RequestSecurityToken_PUT_Forwardable(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Forwardable;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Forwardable = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_Forwardable) */

void zx_wst_RequestSecurityToken_ADD_Forwardable(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Forwardable->g;
    x->Forwardable = z;
    return;
  case -1:
    y = x->Forwardable;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Forwardable; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_Forwardable) */

void zx_wst_RequestSecurityToken_DEL_Forwardable(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Forwardable = (struct zx_elem_s*)x->Forwardable->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Forwardable;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Forwardable; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_Delegatable) */

int zx_wst_RequestSecurityToken_NUM_Delegatable(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Delegatable; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Delegatable) */

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_Delegatable(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Delegatable; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Delegatable) */

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_Delegatable(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Delegatable;
  if (y)
    x->Delegatable = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Delegatable) */

void zx_wst_RequestSecurityToken_PUSH_Delegatable(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Delegatable->g;
  x->Delegatable = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Delegatable) */

void zx_wst_RequestSecurityToken_REV_Delegatable(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Delegatable;
  if (!y) return;
  x->Delegatable = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Delegatable->g;
    x->Delegatable = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_PUT_Delegatable) */

void zx_wst_RequestSecurityToken_PUT_Delegatable(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Delegatable;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Delegatable = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityToken_ADD_Delegatable) */

void zx_wst_RequestSecurityToken_ADD_Delegatable(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Delegatable->g;
    x->Delegatable = z;
    return;
  case -1:
    y = x->Delegatable;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Delegatable; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityToken_DEL_Delegatable) */

void zx_wst_RequestSecurityToken_DEL_Delegatable(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Delegatable = (struct zx_elem_s*)x->Delegatable->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Delegatable;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Delegatable; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityToken_NUM_Policy) */

int zx_wst_RequestSecurityToken_NUM_Policy(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wsp_Policy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Policy; y; ++n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_Policy) */

struct zx_wsp_Policy_s* zx_wst_RequestSecurityToken_GET_Policy(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  for (y = x->Policy; n>=0 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_Policy) */

struct zx_wsp_Policy_s* zx_wst_RequestSecurityToken_POP_Policy(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  y = x->Policy;
  if (y)
    x->Policy = (struct zx_wsp_Policy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_Policy) */

void zx_wst_RequestSecurityToken_PUSH_Policy(struct zx_wst_RequestSecurityToken_s* x, struct zx_wsp_Policy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Policy->gg.g;
  x->Policy = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_Policy) */

void zx_wst_RequestSecurityToken_REV_Policy(struct zx_wst_RequestSecurityToken_s* x)
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

/* FUNC(zx_wst_RequestSecurityToken_PUT_Policy) */

void zx_wst_RequestSecurityToken_PUT_Policy(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_Policy_s* z)
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

/* FUNC(zx_wst_RequestSecurityToken_ADD_Policy) */

void zx_wst_RequestSecurityToken_ADD_Policy(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_Policy_s* z)
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

/* FUNC(zx_wst_RequestSecurityToken_DEL_Policy) */

void zx_wst_RequestSecurityToken_DEL_Policy(struct zx_wst_RequestSecurityToken_s* x, int n)
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

/* FUNC(zx_wst_RequestSecurityToken_NUM_PolicyReference) */

int zx_wst_RequestSecurityToken_NUM_PolicyReference(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyReference; y; ++n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityToken_GET_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wst_RequestSecurityToken_GET_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  for (y = x->PolicyReference; n>=0 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_POP_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wst_RequestSecurityToken_POP_PolicyReference(struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  y = x->PolicyReference;
  if (y)
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityToken_PUSH_PolicyReference) */

void zx_wst_RequestSecurityToken_PUSH_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, struct zx_wsp_PolicyReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyReference->gg.g;
  x->PolicyReference = z;
}

/* FUNC(zx_wst_RequestSecurityToken_REV_PolicyReference) */

void zx_wst_RequestSecurityToken_REV_PolicyReference(struct zx_wst_RequestSecurityToken_s* x)
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

/* FUNC(zx_wst_RequestSecurityToken_PUT_PolicyReference) */

void zx_wst_RequestSecurityToken_PUT_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_PolicyReference_s* z)
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

/* FUNC(zx_wst_RequestSecurityToken_ADD_PolicyReference) */

void zx_wst_RequestSecurityToken_ADD_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_PolicyReference_s* z)
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

/* FUNC(zx_wst_RequestSecurityToken_DEL_PolicyReference) */

void zx_wst_RequestSecurityToken_DEL_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, int n)
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

/* FUNC(zx_wst_RequestSecurityToken_GET_Context) */
struct zx_str* zx_wst_RequestSecurityToken_GET_Context(struct zx_wst_RequestSecurityToken_s* x) { return x->Context; }
/* FUNC(zx_wst_RequestSecurityToken_PUT_Context) */
void zx_wst_RequestSecurityToken_PUT_Context(struct zx_wst_RequestSecurityToken_s* x, struct zx_str* y) { x->Context = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenCollection_NUM_RequestSecurityToken) */

int zx_wst_RequestSecurityTokenCollection_NUM_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x)
{
  struct zx_wst_RequestSecurityToken_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestSecurityToken; y; ++n, y = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenCollection_GET_RequestSecurityToken) */

struct zx_wst_RequestSecurityToken_s* zx_wst_RequestSecurityTokenCollection_GET_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, int n)
{
  struct zx_wst_RequestSecurityToken_s* y;
  if (!x) return 0;
  for (y = x->RequestSecurityToken; n>=0 && y; --n, y = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenCollection_POP_RequestSecurityToken) */

struct zx_wst_RequestSecurityToken_s* zx_wst_RequestSecurityTokenCollection_POP_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x)
{
  struct zx_wst_RequestSecurityToken_s* y;
  if (!x) return 0;
  y = x->RequestSecurityToken;
  if (y)
    x->RequestSecurityToken = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenCollection_PUSH_RequestSecurityToken) */

void zx_wst_RequestSecurityTokenCollection_PUSH_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, struct zx_wst_RequestSecurityToken_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestSecurityToken->gg.g;
  x->RequestSecurityToken = z;
}

/* FUNC(zx_wst_RequestSecurityTokenCollection_REV_RequestSecurityToken) */

void zx_wst_RequestSecurityTokenCollection_REV_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x)
{
  struct zx_wst_RequestSecurityToken_s* nxt;
  struct zx_wst_RequestSecurityToken_s* y;
  if (!x) return;
  y = x->RequestSecurityToken;
  if (!y) return;
  x->RequestSecurityToken = 0;
  while (y) {
    nxt = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestSecurityToken->gg.g;
    x->RequestSecurityToken = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenCollection_PUT_RequestSecurityToken) */

void zx_wst_RequestSecurityTokenCollection_PUT_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, int n, struct zx_wst_RequestSecurityToken_s* z)
{
  struct zx_wst_RequestSecurityToken_s* y;
  if (!x || !z) return;
  y = x->RequestSecurityToken;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestSecurityToken = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenCollection_ADD_RequestSecurityToken) */

void zx_wst_RequestSecurityTokenCollection_ADD_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, int n, struct zx_wst_RequestSecurityToken_s* z)
{
  struct zx_wst_RequestSecurityToken_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestSecurityToken->gg.g;
    x->RequestSecurityToken = z;
    return;
  case -1:
    y = x->RequestSecurityToken;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestSecurityToken; n > 1 && y; --n, y = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenCollection_DEL_RequestSecurityToken) */

void zx_wst_RequestSecurityTokenCollection_DEL_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, int n)
{
  struct zx_wst_RequestSecurityToken_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestSecurityToken = (struct zx_wst_RequestSecurityToken_s*)x->RequestSecurityToken->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_RequestSecurityToken_s*)x->RequestSecurityToken;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestSecurityToken; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestSecurityToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_TokenType) */

int zx_wst_RequestSecurityTokenResponse_NUM_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TokenType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_TokenType) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TokenType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_TokenType) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TokenType;
  if (y)
    x->TokenType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_TokenType) */

void zx_wst_RequestSecurityTokenResponse_PUSH_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TokenType->g;
  x->TokenType = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_TokenType) */

void zx_wst_RequestSecurityTokenResponse_REV_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TokenType;
  if (!y) return;
  x->TokenType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TokenType->g;
    x->TokenType = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_TokenType) */

void zx_wst_RequestSecurityTokenResponse_PUT_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TokenType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TokenType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_TokenType) */

void zx_wst_RequestSecurityTokenResponse_ADD_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TokenType->g;
    x->TokenType = z;
    return;
  case -1:
    y = x->TokenType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TokenType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_TokenType) */

void zx_wst_RequestSecurityTokenResponse_DEL_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TokenType = (struct zx_elem_s*)x->TokenType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TokenType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TokenType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_RequestType) */

int zx_wst_RequestSecurityTokenResponse_NUM_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_RequestType) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RequestType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_RequestType) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RequestType;
  if (y)
    x->RequestType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_RequestType) */

void zx_wst_RequestSecurityTokenResponse_PUSH_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RequestType->g;
  x->RequestType = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_RequestType) */

void zx_wst_RequestSecurityTokenResponse_REV_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RequestType;
  if (!y) return;
  x->RequestType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RequestType->g;
    x->RequestType = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_RequestType) */

void zx_wst_RequestSecurityTokenResponse_PUT_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RequestType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RequestType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_RequestType) */

void zx_wst_RequestSecurityTokenResponse_ADD_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RequestType->g;
    x->RequestType = z;
    return;
  case -1:
    y = x->RequestType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_RequestType) */

void zx_wst_RequestSecurityTokenResponse_DEL_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestType = (struct zx_elem_s*)x->RequestType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RequestType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RequestType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_RequestedSecurityToken) */

int zx_wst_RequestSecurityTokenResponse_NUM_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedSecurityToken_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedSecurityToken; y; ++n, y = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_RequestedSecurityToken) */

struct zx_wst_RequestedSecurityToken_s* zx_wst_RequestSecurityTokenResponse_GET_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_RequestedSecurityToken_s* y;
  if (!x) return 0;
  for (y = x->RequestedSecurityToken; n>=0 && y; --n, y = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_RequestedSecurityToken) */

struct zx_wst_RequestedSecurityToken_s* zx_wst_RequestSecurityTokenResponse_POP_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedSecurityToken_s* y;
  if (!x) return 0;
  y = x->RequestedSecurityToken;
  if (y)
    x->RequestedSecurityToken = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_RequestedSecurityToken) */

void zx_wst_RequestSecurityTokenResponse_PUSH_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_RequestedSecurityToken_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedSecurityToken->gg.g;
  x->RequestedSecurityToken = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_RequestedSecurityToken) */

void zx_wst_RequestSecurityTokenResponse_REV_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedSecurityToken_s* nxt;
  struct zx_wst_RequestedSecurityToken_s* y;
  if (!x) return;
  y = x->RequestedSecurityToken;
  if (!y) return;
  x->RequestedSecurityToken = 0;
  while (y) {
    nxt = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedSecurityToken->gg.g;
    x->RequestedSecurityToken = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_RequestedSecurityToken) */

void zx_wst_RequestSecurityTokenResponse_PUT_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedSecurityToken_s* z)
{
  struct zx_wst_RequestedSecurityToken_s* y;
  if (!x || !z) return;
  y = x->RequestedSecurityToken;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedSecurityToken = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_RequestedSecurityToken) */

void zx_wst_RequestSecurityTokenResponse_ADD_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedSecurityToken_s* z)
{
  struct zx_wst_RequestedSecurityToken_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedSecurityToken->gg.g;
    x->RequestedSecurityToken = z;
    return;
  case -1:
    y = x->RequestedSecurityToken;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedSecurityToken; n > 1 && y; --n, y = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_RequestedSecurityToken) */

void zx_wst_RequestSecurityTokenResponse_DEL_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_RequestedSecurityToken_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedSecurityToken = (struct zx_wst_RequestedSecurityToken_s*)x->RequestedSecurityToken->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_RequestedSecurityToken_s*)x->RequestedSecurityToken;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedSecurityToken; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestedSecurityToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_AppliesTo) */

int zx_wst_RequestSecurityTokenResponse_NUM_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wsp_AppliesTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AppliesTo; y; ++n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_AppliesTo) */

struct zx_wsp_AppliesTo_s* zx_wst_RequestSecurityTokenResponse_GET_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x) return 0;
  for (y = x->AppliesTo; n>=0 && y; --n, y = (struct zx_wsp_AppliesTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_AppliesTo) */

struct zx_wsp_AppliesTo_s* zx_wst_RequestSecurityTokenResponse_POP_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wsp_AppliesTo_s* y;
  if (!x) return 0;
  y = x->AppliesTo;
  if (y)
    x->AppliesTo = (struct zx_wsp_AppliesTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_AppliesTo) */

void zx_wst_RequestSecurityTokenResponse_PUSH_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wsp_AppliesTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AppliesTo->gg.g;
  x->AppliesTo = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_AppliesTo) */

void zx_wst_RequestSecurityTokenResponse_REV_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_AppliesTo) */

void zx_wst_RequestSecurityTokenResponse_PUT_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_AppliesTo_s* z)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_AppliesTo) */

void zx_wst_RequestSecurityTokenResponse_ADD_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_AppliesTo_s* z)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_AppliesTo) */

void zx_wst_RequestSecurityTokenResponse_DEL_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_RequestedAttachedReference) */

int zx_wst_RequestSecurityTokenResponse_NUM_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedAttachedReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedAttachedReference; y; ++n, y = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_RequestedAttachedReference) */

struct zx_wst_RequestedAttachedReference_s* zx_wst_RequestSecurityTokenResponse_GET_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_RequestedAttachedReference_s* y;
  if (!x) return 0;
  for (y = x->RequestedAttachedReference; n>=0 && y; --n, y = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_RequestedAttachedReference) */

struct zx_wst_RequestedAttachedReference_s* zx_wst_RequestSecurityTokenResponse_POP_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedAttachedReference_s* y;
  if (!x) return 0;
  y = x->RequestedAttachedReference;
  if (y)
    x->RequestedAttachedReference = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_RequestedAttachedReference) */

void zx_wst_RequestSecurityTokenResponse_PUSH_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_RequestedAttachedReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedAttachedReference->gg.g;
  x->RequestedAttachedReference = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_RequestedAttachedReference) */

void zx_wst_RequestSecurityTokenResponse_REV_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedAttachedReference_s* nxt;
  struct zx_wst_RequestedAttachedReference_s* y;
  if (!x) return;
  y = x->RequestedAttachedReference;
  if (!y) return;
  x->RequestedAttachedReference = 0;
  while (y) {
    nxt = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedAttachedReference->gg.g;
    x->RequestedAttachedReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_RequestedAttachedReference) */

void zx_wst_RequestSecurityTokenResponse_PUT_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedAttachedReference_s* z)
{
  struct zx_wst_RequestedAttachedReference_s* y;
  if (!x || !z) return;
  y = x->RequestedAttachedReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedAttachedReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_RequestedAttachedReference) */

void zx_wst_RequestSecurityTokenResponse_ADD_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedAttachedReference_s* z)
{
  struct zx_wst_RequestedAttachedReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedAttachedReference->gg.g;
    x->RequestedAttachedReference = z;
    return;
  case -1:
    y = x->RequestedAttachedReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAttachedReference; n > 1 && y; --n, y = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_RequestedAttachedReference) */

void zx_wst_RequestSecurityTokenResponse_DEL_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_RequestedAttachedReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedAttachedReference = (struct zx_wst_RequestedAttachedReference_s*)x->RequestedAttachedReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_RequestedAttachedReference_s*)x->RequestedAttachedReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedAttachedReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestedAttachedReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_RequestedUnattachedReference) */

int zx_wst_RequestSecurityTokenResponse_NUM_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedUnattachedReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedUnattachedReference; y; ++n, y = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_RequestedUnattachedReference) */

struct zx_wst_RequestedUnattachedReference_s* zx_wst_RequestSecurityTokenResponse_GET_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_RequestedUnattachedReference_s* y;
  if (!x) return 0;
  for (y = x->RequestedUnattachedReference; n>=0 && y; --n, y = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_RequestedUnattachedReference) */

struct zx_wst_RequestedUnattachedReference_s* zx_wst_RequestSecurityTokenResponse_POP_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedUnattachedReference_s* y;
  if (!x) return 0;
  y = x->RequestedUnattachedReference;
  if (y)
    x->RequestedUnattachedReference = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_RequestedUnattachedReference) */

void zx_wst_RequestSecurityTokenResponse_PUSH_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_RequestedUnattachedReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedUnattachedReference->gg.g;
  x->RequestedUnattachedReference = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_RequestedUnattachedReference) */

void zx_wst_RequestSecurityTokenResponse_REV_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedUnattachedReference_s* nxt;
  struct zx_wst_RequestedUnattachedReference_s* y;
  if (!x) return;
  y = x->RequestedUnattachedReference;
  if (!y) return;
  x->RequestedUnattachedReference = 0;
  while (y) {
    nxt = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedUnattachedReference->gg.g;
    x->RequestedUnattachedReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_RequestedUnattachedReference) */

void zx_wst_RequestSecurityTokenResponse_PUT_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedUnattachedReference_s* z)
{
  struct zx_wst_RequestedUnattachedReference_s* y;
  if (!x || !z) return;
  y = x->RequestedUnattachedReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedUnattachedReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_RequestedUnattachedReference) */

void zx_wst_RequestSecurityTokenResponse_ADD_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedUnattachedReference_s* z)
{
  struct zx_wst_RequestedUnattachedReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedUnattachedReference->gg.g;
    x->RequestedUnattachedReference = z;
    return;
  case -1:
    y = x->RequestedUnattachedReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedUnattachedReference; n > 1 && y; --n, y = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_RequestedUnattachedReference) */

void zx_wst_RequestSecurityTokenResponse_DEL_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_RequestedUnattachedReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedUnattachedReference = (struct zx_wst_RequestedUnattachedReference_s*)x->RequestedUnattachedReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_RequestedUnattachedReference_s*)x->RequestedUnattachedReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedUnattachedReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestedUnattachedReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_RequestedProofToken) */

int zx_wst_RequestSecurityTokenResponse_NUM_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedProofToken_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestedProofToken; y; ++n, y = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_RequestedProofToken) */

struct zx_wst_RequestedProofToken_s* zx_wst_RequestSecurityTokenResponse_GET_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_RequestedProofToken_s* y;
  if (!x) return 0;
  for (y = x->RequestedProofToken; n>=0 && y; --n, y = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_RequestedProofToken) */

struct zx_wst_RequestedProofToken_s* zx_wst_RequestSecurityTokenResponse_POP_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedProofToken_s* y;
  if (!x) return 0;
  y = x->RequestedProofToken;
  if (y)
    x->RequestedProofToken = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_RequestedProofToken) */

void zx_wst_RequestSecurityTokenResponse_PUSH_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_RequestedProofToken_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestedProofToken->gg.g;
  x->RequestedProofToken = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_RequestedProofToken) */

void zx_wst_RequestSecurityTokenResponse_REV_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_RequestedProofToken_s* nxt;
  struct zx_wst_RequestedProofToken_s* y;
  if (!x) return;
  y = x->RequestedProofToken;
  if (!y) return;
  x->RequestedProofToken = 0;
  while (y) {
    nxt = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestedProofToken->gg.g;
    x->RequestedProofToken = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_RequestedProofToken) */

void zx_wst_RequestSecurityTokenResponse_PUT_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedProofToken_s* z)
{
  struct zx_wst_RequestedProofToken_s* y;
  if (!x || !z) return;
  y = x->RequestedProofToken;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestedProofToken = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_RequestedProofToken) */

void zx_wst_RequestSecurityTokenResponse_ADD_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedProofToken_s* z)
{
  struct zx_wst_RequestedProofToken_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestedProofToken->gg.g;
    x->RequestedProofToken = z;
    return;
  case -1:
    y = x->RequestedProofToken;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedProofToken; n > 1 && y; --n, y = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_RequestedProofToken) */

void zx_wst_RequestSecurityTokenResponse_DEL_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_RequestedProofToken_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestedProofToken = (struct zx_wst_RequestedProofToken_s*)x->RequestedProofToken->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_RequestedProofToken_s*)x->RequestedProofToken;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestedProofToken; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestedProofToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Entropy) */

int zx_wst_RequestSecurityTokenResponse_NUM_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Entropy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Entropy; y; ++n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Entropy) */

struct zx_wst_Entropy_s* zx_wst_RequestSecurityTokenResponse_GET_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Entropy_s* y;
  if (!x) return 0;
  for (y = x->Entropy; n>=0 && y; --n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Entropy) */

struct zx_wst_Entropy_s* zx_wst_RequestSecurityTokenResponse_POP_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Entropy_s* y;
  if (!x) return 0;
  y = x->Entropy;
  if (y)
    x->Entropy = (struct zx_wst_Entropy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Entropy) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Entropy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Entropy->gg.g;
  x->Entropy = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Entropy) */

void zx_wst_RequestSecurityTokenResponse_REV_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Entropy_s* nxt;
  struct zx_wst_Entropy_s* y;
  if (!x) return;
  y = x->Entropy;
  if (!y) return;
  x->Entropy = 0;
  while (y) {
    nxt = (struct zx_wst_Entropy_s*)y->gg.g.n;
    y->gg.g.n = &x->Entropy->gg.g;
    x->Entropy = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Entropy) */

void zx_wst_RequestSecurityTokenResponse_PUT_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Entropy_s* z)
{
  struct zx_wst_Entropy_s* y;
  if (!x || !z) return;
  y = x->Entropy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Entropy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Entropy) */

void zx_wst_RequestSecurityTokenResponse_ADD_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Entropy_s* z)
{
  struct zx_wst_Entropy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Entropy->gg.g;
    x->Entropy = z;
    return;
  case -1:
    y = x->Entropy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Entropy; n > 1 && y; --n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Entropy) */

void zx_wst_RequestSecurityTokenResponse_DEL_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Entropy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Entropy = (struct zx_wst_Entropy_s*)x->Entropy->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Entropy_s*)x->Entropy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Entropy; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Entropy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Lifetime) */

int zx_wst_RequestSecurityTokenResponse_NUM_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Lifetime_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Lifetime; y; ++n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Lifetime) */

struct zx_wst_Lifetime_s* zx_wst_RequestSecurityTokenResponse_GET_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Lifetime_s* y;
  if (!x) return 0;
  for (y = x->Lifetime; n>=0 && y; --n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Lifetime) */

struct zx_wst_Lifetime_s* zx_wst_RequestSecurityTokenResponse_POP_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Lifetime_s* y;
  if (!x) return 0;
  y = x->Lifetime;
  if (y)
    x->Lifetime = (struct zx_wst_Lifetime_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Lifetime) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Lifetime_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Lifetime->gg.g;
  x->Lifetime = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Lifetime) */

void zx_wst_RequestSecurityTokenResponse_REV_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Lifetime_s* nxt;
  struct zx_wst_Lifetime_s* y;
  if (!x) return;
  y = x->Lifetime;
  if (!y) return;
  x->Lifetime = 0;
  while (y) {
    nxt = (struct zx_wst_Lifetime_s*)y->gg.g.n;
    y->gg.g.n = &x->Lifetime->gg.g;
    x->Lifetime = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Lifetime) */

void zx_wst_RequestSecurityTokenResponse_PUT_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Lifetime_s* z)
{
  struct zx_wst_Lifetime_s* y;
  if (!x || !z) return;
  y = x->Lifetime;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Lifetime = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Lifetime) */

void zx_wst_RequestSecurityTokenResponse_ADD_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Lifetime_s* z)
{
  struct zx_wst_Lifetime_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Lifetime->gg.g;
    x->Lifetime = z;
    return;
  case -1:
    y = x->Lifetime;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Lifetime; n > 1 && y; --n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Lifetime) */

void zx_wst_RequestSecurityTokenResponse_DEL_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Lifetime_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Lifetime = (struct zx_wst_Lifetime_s*)x->Lifetime->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Lifetime_s*)x->Lifetime;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Lifetime; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Lifetime_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Status) */

int zx_wst_RequestSecurityTokenResponse_NUM_Status(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_wst_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Status) */

struct zx_wst_Status_s* zx_wst_RequestSecurityTokenResponse_GET_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_wst_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Status) */

struct zx_wst_Status_s* zx_wst_RequestSecurityTokenResponse_POP_Status(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_wst_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Status) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Status) */

void zx_wst_RequestSecurityTokenResponse_REV_Status(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Status_s* nxt;
  struct zx_wst_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_wst_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Status) */

void zx_wst_RequestSecurityTokenResponse_PUT_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Status_s* z)
{
  struct zx_wst_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Status) */

void zx_wst_RequestSecurityTokenResponse_ADD_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Status_s* z)
{
  struct zx_wst_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_wst_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_wst_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Status) */

void zx_wst_RequestSecurityTokenResponse_DEL_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_wst_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_AllowPostdating) */

int zx_wst_RequestSecurityTokenResponse_NUM_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AllowPostdating; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_AllowPostdating) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AllowPostdating; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_AllowPostdating) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AllowPostdating;
  if (y)
    x->AllowPostdating = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_AllowPostdating) */

void zx_wst_RequestSecurityTokenResponse_PUSH_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AllowPostdating->g;
  x->AllowPostdating = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_AllowPostdating) */

void zx_wst_RequestSecurityTokenResponse_REV_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AllowPostdating;
  if (!y) return;
  x->AllowPostdating = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AllowPostdating->g;
    x->AllowPostdating = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_AllowPostdating) */

void zx_wst_RequestSecurityTokenResponse_PUT_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AllowPostdating;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AllowPostdating = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_AllowPostdating) */

void zx_wst_RequestSecurityTokenResponse_ADD_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AllowPostdating->g;
    x->AllowPostdating = z;
    return;
  case -1:
    y = x->AllowPostdating;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AllowPostdating; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_AllowPostdating) */

void zx_wst_RequestSecurityTokenResponse_DEL_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AllowPostdating = (struct zx_elem_s*)x->AllowPostdating->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AllowPostdating;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AllowPostdating; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Renewing) */

int zx_wst_RequestSecurityTokenResponse_NUM_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Renewing_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Renewing; y; ++n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Renewing) */

struct zx_wst_Renewing_s* zx_wst_RequestSecurityTokenResponse_GET_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Renewing_s* y;
  if (!x) return 0;
  for (y = x->Renewing; n>=0 && y; --n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Renewing) */

struct zx_wst_Renewing_s* zx_wst_RequestSecurityTokenResponse_POP_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Renewing_s* y;
  if (!x) return 0;
  y = x->Renewing;
  if (y)
    x->Renewing = (struct zx_wst_Renewing_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Renewing) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Renewing_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Renewing->gg.g;
  x->Renewing = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Renewing) */

void zx_wst_RequestSecurityTokenResponse_REV_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Renewing_s* nxt;
  struct zx_wst_Renewing_s* y;
  if (!x) return;
  y = x->Renewing;
  if (!y) return;
  x->Renewing = 0;
  while (y) {
    nxt = (struct zx_wst_Renewing_s*)y->gg.g.n;
    y->gg.g.n = &x->Renewing->gg.g;
    x->Renewing = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Renewing) */

void zx_wst_RequestSecurityTokenResponse_PUT_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Renewing_s* z)
{
  struct zx_wst_Renewing_s* y;
  if (!x || !z) return;
  y = x->Renewing;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Renewing = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Renewing) */

void zx_wst_RequestSecurityTokenResponse_ADD_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Renewing_s* z)
{
  struct zx_wst_Renewing_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Renewing->gg.g;
    x->Renewing = z;
    return;
  case -1:
    y = x->Renewing;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Renewing; n > 1 && y; --n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Renewing) */

void zx_wst_RequestSecurityTokenResponse_DEL_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Renewing_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Renewing = (struct zx_wst_Renewing_s*)x->Renewing->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Renewing_s*)x->Renewing;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Renewing; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Renewing_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_OnBehalfOf) */

int zx_wst_RequestSecurityTokenResponse_NUM_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_OnBehalfOf_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->OnBehalfOf; y; ++n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_OnBehalfOf) */

struct zx_wst_OnBehalfOf_s* zx_wst_RequestSecurityTokenResponse_GET_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x) return 0;
  for (y = x->OnBehalfOf; n>=0 && y; --n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_OnBehalfOf) */

struct zx_wst_OnBehalfOf_s* zx_wst_RequestSecurityTokenResponse_POP_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x) return 0;
  y = x->OnBehalfOf;
  if (y)
    x->OnBehalfOf = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_OnBehalfOf) */

void zx_wst_RequestSecurityTokenResponse_PUSH_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_OnBehalfOf_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->OnBehalfOf->gg.g;
  x->OnBehalfOf = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_OnBehalfOf) */

void zx_wst_RequestSecurityTokenResponse_REV_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_OnBehalfOf_s* nxt;
  struct zx_wst_OnBehalfOf_s* y;
  if (!x) return;
  y = x->OnBehalfOf;
  if (!y) return;
  x->OnBehalfOf = 0;
  while (y) {
    nxt = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n;
    y->gg.g.n = &x->OnBehalfOf->gg.g;
    x->OnBehalfOf = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_OnBehalfOf) */

void zx_wst_RequestSecurityTokenResponse_PUT_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_OnBehalfOf_s* z)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x || !z) return;
  y = x->OnBehalfOf;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->OnBehalfOf = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_OnBehalfOf) */

void zx_wst_RequestSecurityTokenResponse_ADD_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_OnBehalfOf_s* z)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->OnBehalfOf->gg.g;
    x->OnBehalfOf = z;
    return;
  case -1:
    y = x->OnBehalfOf;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OnBehalfOf; n > 1 && y; --n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_OnBehalfOf) */

void zx_wst_RequestSecurityTokenResponse_DEL_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_OnBehalfOf_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->OnBehalfOf = (struct zx_wst_OnBehalfOf_s*)x->OnBehalfOf->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_OnBehalfOf_s*)x->OnBehalfOf;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->OnBehalfOf; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_OnBehalfOf_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Issuer) */

int zx_wst_RequestSecurityTokenResponse_NUM_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Issuer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Issuer) */

struct zx_wst_Issuer_s* zx_wst_RequestSecurityTokenResponse_GET_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Issuer_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Issuer) */

struct zx_wst_Issuer_s* zx_wst_RequestSecurityTokenResponse_POP_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Issuer_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_wst_Issuer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Issuer) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Issuer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Issuer->gg.g;
  x->Issuer = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Issuer) */

void zx_wst_RequestSecurityTokenResponse_REV_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Issuer_s* nxt;
  struct zx_wst_Issuer_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_wst_Issuer_s*)y->gg.g.n;
    y->gg.g.n = &x->Issuer->gg.g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Issuer) */

void zx_wst_RequestSecurityTokenResponse_PUT_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Issuer_s* z)
{
  struct zx_wst_Issuer_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Issuer) */

void zx_wst_RequestSecurityTokenResponse_ADD_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Issuer_s* z)
{
  struct zx_wst_Issuer_s* y;
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
    for (; y->gg.g.n; y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Issuer) */

void zx_wst_RequestSecurityTokenResponse_DEL_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Issuer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_wst_Issuer_s*)x->Issuer->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Issuer_s*)x->Issuer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Issuer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_AuthenticationType) */

int zx_wst_RequestSecurityTokenResponse_NUM_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthenticationType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_AuthenticationType) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuthenticationType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_AuthenticationType) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuthenticationType;
  if (y)
    x->AuthenticationType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_AuthenticationType) */

void zx_wst_RequestSecurityTokenResponse_PUSH_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuthenticationType->g;
  x->AuthenticationType = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_AuthenticationType) */

void zx_wst_RequestSecurityTokenResponse_REV_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuthenticationType;
  if (!y) return;
  x->AuthenticationType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuthenticationType->g;
    x->AuthenticationType = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_AuthenticationType) */

void zx_wst_RequestSecurityTokenResponse_PUT_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuthenticationType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuthenticationType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_AuthenticationType) */

void zx_wst_RequestSecurityTokenResponse_ADD_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuthenticationType->g;
    x->AuthenticationType = z;
    return;
  case -1:
    y = x->AuthenticationType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthenticationType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_AuthenticationType) */

void zx_wst_RequestSecurityTokenResponse_DEL_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthenticationType = (struct zx_elem_s*)x->AuthenticationType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuthenticationType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuthenticationType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Authenticator) */

int zx_wst_RequestSecurityTokenResponse_NUM_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Authenticator_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Authenticator; y; ++n, y = (struct zx_wst_Authenticator_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Authenticator) */

struct zx_wst_Authenticator_s* zx_wst_RequestSecurityTokenResponse_GET_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Authenticator_s* y;
  if (!x) return 0;
  for (y = x->Authenticator; n>=0 && y; --n, y = (struct zx_wst_Authenticator_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Authenticator) */

struct zx_wst_Authenticator_s* zx_wst_RequestSecurityTokenResponse_POP_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Authenticator_s* y;
  if (!x) return 0;
  y = x->Authenticator;
  if (y)
    x->Authenticator = (struct zx_wst_Authenticator_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Authenticator) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Authenticator_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Authenticator->gg.g;
  x->Authenticator = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Authenticator) */

void zx_wst_RequestSecurityTokenResponse_REV_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Authenticator_s* nxt;
  struct zx_wst_Authenticator_s* y;
  if (!x) return;
  y = x->Authenticator;
  if (!y) return;
  x->Authenticator = 0;
  while (y) {
    nxt = (struct zx_wst_Authenticator_s*)y->gg.g.n;
    y->gg.g.n = &x->Authenticator->gg.g;
    x->Authenticator = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Authenticator) */

void zx_wst_RequestSecurityTokenResponse_PUT_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Authenticator_s* z)
{
  struct zx_wst_Authenticator_s* y;
  if (!x || !z) return;
  y = x->Authenticator;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Authenticator = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Authenticator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Authenticator) */

void zx_wst_RequestSecurityTokenResponse_ADD_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Authenticator_s* z)
{
  struct zx_wst_Authenticator_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Authenticator->gg.g;
    x->Authenticator = z;
    return;
  case -1:
    y = x->Authenticator;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Authenticator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Authenticator; n > 1 && y; --n, y = (struct zx_wst_Authenticator_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Authenticator) */

void zx_wst_RequestSecurityTokenResponse_DEL_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Authenticator_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Authenticator = (struct zx_wst_Authenticator_s*)x->Authenticator->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Authenticator_s*)x->Authenticator;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Authenticator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Authenticator; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Authenticator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_KeyType) */

int zx_wst_RequestSecurityTokenResponse_NUM_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeyType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_KeyType) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeyType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_KeyType) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeyType;
  if (y)
    x->KeyType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_KeyType) */

void zx_wst_RequestSecurityTokenResponse_PUSH_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeyType->g;
  x->KeyType = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_KeyType) */

void zx_wst_RequestSecurityTokenResponse_REV_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->KeyType;
  if (!y) return;
  x->KeyType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->KeyType->g;
    x->KeyType = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_KeyType) */

void zx_wst_RequestSecurityTokenResponse_PUT_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->KeyType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->KeyType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_KeyType) */

void zx_wst_RequestSecurityTokenResponse_ADD_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->KeyType->g;
    x->KeyType = z;
    return;
  case -1:
    y = x->KeyType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_KeyType) */

void zx_wst_RequestSecurityTokenResponse_DEL_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->KeyType = (struct zx_elem_s*)x->KeyType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->KeyType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->KeyType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_KeySize) */

int zx_wst_RequestSecurityTokenResponse_NUM_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->KeySize; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_KeySize) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->KeySize; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_KeySize) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->KeySize;
  if (y)
    x->KeySize = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_KeySize) */

void zx_wst_RequestSecurityTokenResponse_PUSH_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->KeySize->g;
  x->KeySize = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_KeySize) */

void zx_wst_RequestSecurityTokenResponse_REV_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_KeySize) */

void zx_wst_RequestSecurityTokenResponse_PUT_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_KeySize) */

void zx_wst_RequestSecurityTokenResponse_ADD_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_KeySize) */

void zx_wst_RequestSecurityTokenResponse_DEL_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_SignatureAlgorithm) */

int zx_wst_RequestSecurityTokenResponse_NUM_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignatureAlgorithm; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_SignatureAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SignatureAlgorithm; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_SignatureAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SignatureAlgorithm;
  if (y)
    x->SignatureAlgorithm = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_SignatureAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_PUSH_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SignatureAlgorithm->g;
  x->SignatureAlgorithm = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_SignatureAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_REV_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SignatureAlgorithm;
  if (!y) return;
  x->SignatureAlgorithm = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SignatureAlgorithm->g;
    x->SignatureAlgorithm = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_SignatureAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_PUT_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SignatureAlgorithm;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SignatureAlgorithm = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_SignatureAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_ADD_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SignatureAlgorithm->g;
    x->SignatureAlgorithm = z;
    return;
  case -1:
    y = x->SignatureAlgorithm;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SignatureAlgorithm; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_SignatureAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_DEL_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignatureAlgorithm = (struct zx_elem_s*)x->SignatureAlgorithm->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SignatureAlgorithm;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SignatureAlgorithm; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Encryption) */

int zx_wst_RequestSecurityTokenResponse_NUM_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Encryption_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Encryption; y; ++n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Encryption) */

struct zx_wst_Encryption_s* zx_wst_RequestSecurityTokenResponse_GET_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Encryption_s* y;
  if (!x) return 0;
  for (y = x->Encryption; n>=0 && y; --n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Encryption) */

struct zx_wst_Encryption_s* zx_wst_RequestSecurityTokenResponse_POP_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Encryption_s* y;
  if (!x) return 0;
  y = x->Encryption;
  if (y)
    x->Encryption = (struct zx_wst_Encryption_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Encryption) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Encryption_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Encryption->gg.g;
  x->Encryption = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Encryption) */

void zx_wst_RequestSecurityTokenResponse_REV_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_Encryption_s* nxt;
  struct zx_wst_Encryption_s* y;
  if (!x) return;
  y = x->Encryption;
  if (!y) return;
  x->Encryption = 0;
  while (y) {
    nxt = (struct zx_wst_Encryption_s*)y->gg.g.n;
    y->gg.g.n = &x->Encryption->gg.g;
    x->Encryption = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Encryption) */

void zx_wst_RequestSecurityTokenResponse_PUT_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Encryption_s* z)
{
  struct zx_wst_Encryption_s* y;
  if (!x || !z) return;
  y = x->Encryption;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Encryption = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Encryption) */

void zx_wst_RequestSecurityTokenResponse_ADD_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Encryption_s* z)
{
  struct zx_wst_Encryption_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Encryption->gg.g;
    x->Encryption = z;
    return;
  case -1:
    y = x->Encryption;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Encryption; n > 1 && y; --n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Encryption) */

void zx_wst_RequestSecurityTokenResponse_DEL_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_Encryption_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Encryption = (struct zx_wst_Encryption_s*)x->Encryption->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_Encryption_s*)x->Encryption;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Encryption; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_Encryption_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_EncryptionAlgorithm) */

int zx_wst_RequestSecurityTokenResponse_NUM_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptionAlgorithm; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_EncryptionAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptionAlgorithm; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_EncryptionAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptionAlgorithm;
  if (y)
    x->EncryptionAlgorithm = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_EncryptionAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_PUSH_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptionAlgorithm->g;
  x->EncryptionAlgorithm = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_EncryptionAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_REV_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptionAlgorithm;
  if (!y) return;
  x->EncryptionAlgorithm = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptionAlgorithm->g;
    x->EncryptionAlgorithm = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_EncryptionAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_PUT_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptionAlgorithm;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptionAlgorithm = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_EncryptionAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_ADD_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptionAlgorithm->g;
    x->EncryptionAlgorithm = z;
    return;
  case -1:
    y = x->EncryptionAlgorithm;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptionAlgorithm; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_EncryptionAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_DEL_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptionAlgorithm = (struct zx_elem_s*)x->EncryptionAlgorithm->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptionAlgorithm;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptionAlgorithm; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_CanonicalizationAlgorithm) */

int zx_wst_RequestSecurityTokenResponse_NUM_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CanonicalizationAlgorithm; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_CanonicalizationAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CanonicalizationAlgorithm; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_CanonicalizationAlgorithm) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CanonicalizationAlgorithm;
  if (y)
    x->CanonicalizationAlgorithm = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_PUSH_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CanonicalizationAlgorithm->g;
  x->CanonicalizationAlgorithm = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_REV_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CanonicalizationAlgorithm;
  if (!y) return;
  x->CanonicalizationAlgorithm = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CanonicalizationAlgorithm->g;
    x->CanonicalizationAlgorithm = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_PUT_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CanonicalizationAlgorithm;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CanonicalizationAlgorithm = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_ADD_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CanonicalizationAlgorithm->g;
    x->CanonicalizationAlgorithm = z;
    return;
  case -1:
    y = x->CanonicalizationAlgorithm;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CanonicalizationAlgorithm; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_CanonicalizationAlgorithm) */

void zx_wst_RequestSecurityTokenResponse_DEL_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CanonicalizationAlgorithm = (struct zx_elem_s*)x->CanonicalizationAlgorithm->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CanonicalizationAlgorithm;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CanonicalizationAlgorithm; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_ProofEncryption) */

int zx_wst_RequestSecurityTokenResponse_NUM_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_ProofEncryption_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProofEncryption; y; ++n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_ProofEncryption) */

struct zx_wst_ProofEncryption_s* zx_wst_RequestSecurityTokenResponse_GET_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x) return 0;
  for (y = x->ProofEncryption; n>=0 && y; --n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_ProofEncryption) */

struct zx_wst_ProofEncryption_s* zx_wst_RequestSecurityTokenResponse_POP_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x) return 0;
  y = x->ProofEncryption;
  if (y)
    x->ProofEncryption = (struct zx_wst_ProofEncryption_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_ProofEncryption) */

void zx_wst_RequestSecurityTokenResponse_PUSH_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_ProofEncryption_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProofEncryption->gg.g;
  x->ProofEncryption = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_ProofEncryption) */

void zx_wst_RequestSecurityTokenResponse_REV_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_ProofEncryption_s* nxt;
  struct zx_wst_ProofEncryption_s* y;
  if (!x) return;
  y = x->ProofEncryption;
  if (!y) return;
  x->ProofEncryption = 0;
  while (y) {
    nxt = (struct zx_wst_ProofEncryption_s*)y->gg.g.n;
    y->gg.g.n = &x->ProofEncryption->gg.g;
    x->ProofEncryption = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_ProofEncryption) */

void zx_wst_RequestSecurityTokenResponse_PUT_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_ProofEncryption_s* z)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x || !z) return;
  y = x->ProofEncryption;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProofEncryption = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_ProofEncryption) */

void zx_wst_RequestSecurityTokenResponse_ADD_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_ProofEncryption_s* z)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProofEncryption->gg.g;
    x->ProofEncryption = z;
    return;
  case -1:
    y = x->ProofEncryption;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProofEncryption; n > 1 && y; --n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_ProofEncryption) */

void zx_wst_RequestSecurityTokenResponse_DEL_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_ProofEncryption_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProofEncryption = (struct zx_wst_ProofEncryption_s*)x->ProofEncryption->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_ProofEncryption_s*)x->ProofEncryption;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProofEncryption; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_ProofEncryption_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_UseKey) */

int zx_wst_RequestSecurityTokenResponse_NUM_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_UseKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UseKey; y; ++n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_UseKey) */

struct zx_wst_UseKey_s* zx_wst_RequestSecurityTokenResponse_GET_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_UseKey_s* y;
  if (!x) return 0;
  for (y = x->UseKey; n>=0 && y; --n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_UseKey) */

struct zx_wst_UseKey_s* zx_wst_RequestSecurityTokenResponse_POP_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_UseKey_s* y;
  if (!x) return 0;
  y = x->UseKey;
  if (y)
    x->UseKey = (struct zx_wst_UseKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_UseKey) */

void zx_wst_RequestSecurityTokenResponse_PUSH_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_UseKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UseKey->gg.g;
  x->UseKey = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_UseKey) */

void zx_wst_RequestSecurityTokenResponse_REV_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_UseKey_s* nxt;
  struct zx_wst_UseKey_s* y;
  if (!x) return;
  y = x->UseKey;
  if (!y) return;
  x->UseKey = 0;
  while (y) {
    nxt = (struct zx_wst_UseKey_s*)y->gg.g.n;
    y->gg.g.n = &x->UseKey->gg.g;
    x->UseKey = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_UseKey) */

void zx_wst_RequestSecurityTokenResponse_PUT_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_UseKey_s* z)
{
  struct zx_wst_UseKey_s* y;
  if (!x || !z) return;
  y = x->UseKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UseKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_UseKey) */

void zx_wst_RequestSecurityTokenResponse_ADD_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_UseKey_s* z)
{
  struct zx_wst_UseKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UseKey->gg.g;
    x->UseKey = z;
    return;
  case -1:
    y = x->UseKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UseKey; n > 1 && y; --n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_UseKey) */

void zx_wst_RequestSecurityTokenResponse_DEL_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_UseKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UseKey = (struct zx_wst_UseKey_s*)x->UseKey->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_UseKey_s*)x->UseKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UseKey; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_UseKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_SignWith) */

int zx_wst_RequestSecurityTokenResponse_NUM_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SignWith; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_SignWith) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SignWith; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_SignWith) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SignWith;
  if (y)
    x->SignWith = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_SignWith) */

void zx_wst_RequestSecurityTokenResponse_PUSH_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SignWith->g;
  x->SignWith = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_SignWith) */

void zx_wst_RequestSecurityTokenResponse_REV_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SignWith;
  if (!y) return;
  x->SignWith = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SignWith->g;
    x->SignWith = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_SignWith) */

void zx_wst_RequestSecurityTokenResponse_PUT_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SignWith;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SignWith = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_SignWith) */

void zx_wst_RequestSecurityTokenResponse_ADD_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SignWith->g;
    x->SignWith = z;
    return;
  case -1:
    y = x->SignWith;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SignWith; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_SignWith) */

void zx_wst_RequestSecurityTokenResponse_DEL_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SignWith = (struct zx_elem_s*)x->SignWith->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SignWith;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SignWith; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_EncryptWith) */

int zx_wst_RequestSecurityTokenResponse_NUM_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptWith; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_EncryptWith) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EncryptWith; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_EncryptWith) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EncryptWith;
  if (y)
    x->EncryptWith = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_EncryptWith) */

void zx_wst_RequestSecurityTokenResponse_PUSH_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EncryptWith->g;
  x->EncryptWith = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_EncryptWith) */

void zx_wst_RequestSecurityTokenResponse_REV_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EncryptWith;
  if (!y) return;
  x->EncryptWith = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EncryptWith->g;
    x->EncryptWith = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_EncryptWith) */

void zx_wst_RequestSecurityTokenResponse_PUT_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EncryptWith;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EncryptWith = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_EncryptWith) */

void zx_wst_RequestSecurityTokenResponse_ADD_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EncryptWith->g;
    x->EncryptWith = z;
    return;
  case -1:
    y = x->EncryptWith;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptWith; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_EncryptWith) */

void zx_wst_RequestSecurityTokenResponse_DEL_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptWith = (struct zx_elem_s*)x->EncryptWith->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EncryptWith;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EncryptWith; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_DelegateTo) */

int zx_wst_RequestSecurityTokenResponse_NUM_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_DelegateTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DelegateTo; y; ++n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_DelegateTo) */

struct zx_wst_DelegateTo_s* zx_wst_RequestSecurityTokenResponse_GET_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x) return 0;
  for (y = x->DelegateTo; n>=0 && y; --n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_DelegateTo) */

struct zx_wst_DelegateTo_s* zx_wst_RequestSecurityTokenResponse_POP_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x) return 0;
  y = x->DelegateTo;
  if (y)
    x->DelegateTo = (struct zx_wst_DelegateTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_DelegateTo) */

void zx_wst_RequestSecurityTokenResponse_PUSH_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_DelegateTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DelegateTo->gg.g;
  x->DelegateTo = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_DelegateTo) */

void zx_wst_RequestSecurityTokenResponse_REV_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wst_DelegateTo_s* nxt;
  struct zx_wst_DelegateTo_s* y;
  if (!x) return;
  y = x->DelegateTo;
  if (!y) return;
  x->DelegateTo = 0;
  while (y) {
    nxt = (struct zx_wst_DelegateTo_s*)y->gg.g.n;
    y->gg.g.n = &x->DelegateTo->gg.g;
    x->DelegateTo = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_DelegateTo) */

void zx_wst_RequestSecurityTokenResponse_PUT_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_DelegateTo_s* z)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x || !z) return;
  y = x->DelegateTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DelegateTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_DelegateTo) */

void zx_wst_RequestSecurityTokenResponse_ADD_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_DelegateTo_s* z)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DelegateTo->gg.g;
    x->DelegateTo = z;
    return;
  case -1:
    y = x->DelegateTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DelegateTo; n > 1 && y; --n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_DelegateTo) */

void zx_wst_RequestSecurityTokenResponse_DEL_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wst_DelegateTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DelegateTo = (struct zx_wst_DelegateTo_s*)x->DelegateTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_DelegateTo_s*)x->DelegateTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DelegateTo; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_DelegateTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Forwardable) */

int zx_wst_RequestSecurityTokenResponse_NUM_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Forwardable; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Forwardable) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Forwardable; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Forwardable) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Forwardable;
  if (y)
    x->Forwardable = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Forwardable) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Forwardable->g;
  x->Forwardable = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Forwardable) */

void zx_wst_RequestSecurityTokenResponse_REV_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Forwardable;
  if (!y) return;
  x->Forwardable = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Forwardable->g;
    x->Forwardable = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Forwardable) */

void zx_wst_RequestSecurityTokenResponse_PUT_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Forwardable;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Forwardable = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Forwardable) */

void zx_wst_RequestSecurityTokenResponse_ADD_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Forwardable->g;
    x->Forwardable = z;
    return;
  case -1:
    y = x->Forwardable;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Forwardable; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Forwardable) */

void zx_wst_RequestSecurityTokenResponse_DEL_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Forwardable = (struct zx_elem_s*)x->Forwardable->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Forwardable;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Forwardable; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Delegatable) */

int zx_wst_RequestSecurityTokenResponse_NUM_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Delegatable; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Delegatable) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Delegatable; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Delegatable) */

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Delegatable;
  if (y)
    x->Delegatable = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Delegatable) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Delegatable->g;
  x->Delegatable = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Delegatable) */

void zx_wst_RequestSecurityTokenResponse_REV_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Delegatable;
  if (!y) return;
  x->Delegatable = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Delegatable->g;
    x->Delegatable = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Delegatable) */

void zx_wst_RequestSecurityTokenResponse_PUT_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Delegatable;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Delegatable = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Delegatable) */

void zx_wst_RequestSecurityTokenResponse_ADD_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Delegatable->g;
    x->Delegatable = z;
    return;
  case -1:
    y = x->Delegatable;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Delegatable; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Delegatable) */

void zx_wst_RequestSecurityTokenResponse_DEL_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Delegatable = (struct zx_elem_s*)x->Delegatable->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Delegatable;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Delegatable; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_Policy) */

int zx_wst_RequestSecurityTokenResponse_NUM_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wsp_Policy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Policy; y; ++n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Policy) */

struct zx_wsp_Policy_s* zx_wst_RequestSecurityTokenResponse_GET_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  for (y = x->Policy; n>=0 && y; --n, y = (struct zx_wsp_Policy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_Policy) */

struct zx_wsp_Policy_s* zx_wst_RequestSecurityTokenResponse_POP_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wsp_Policy_s* y;
  if (!x) return 0;
  y = x->Policy;
  if (y)
    x->Policy = (struct zx_wsp_Policy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_Policy) */

void zx_wst_RequestSecurityTokenResponse_PUSH_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wsp_Policy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Policy->gg.g;
  x->Policy = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_Policy) */

void zx_wst_RequestSecurityTokenResponse_REV_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Policy) */

void zx_wst_RequestSecurityTokenResponse_PUT_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_Policy_s* z)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_Policy) */

void zx_wst_RequestSecurityTokenResponse_ADD_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_Policy_s* z)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_Policy) */

void zx_wst_RequestSecurityTokenResponse_DEL_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_NUM_PolicyReference) */

int zx_wst_RequestSecurityTokenResponse_NUM_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyReference; y; ++n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wst_RequestSecurityTokenResponse_GET_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  for (y = x->PolicyReference; n>=0 && y; --n, y = (struct zx_wsp_PolicyReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_POP_PolicyReference) */

struct zx_wsp_PolicyReference_s* zx_wst_RequestSecurityTokenResponse_POP_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_wsp_PolicyReference_s* y;
  if (!x) return 0;
  y = x->PolicyReference;
  if (y)
    x->PolicyReference = (struct zx_wsp_PolicyReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUSH_PolicyReference) */

void zx_wst_RequestSecurityTokenResponse_PUSH_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wsp_PolicyReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyReference->gg.g;
  x->PolicyReference = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponse_REV_PolicyReference) */

void zx_wst_RequestSecurityTokenResponse_REV_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_PolicyReference) */

void zx_wst_RequestSecurityTokenResponse_PUT_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_PolicyReference_s* z)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_ADD_PolicyReference) */

void zx_wst_RequestSecurityTokenResponse_ADD_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_PolicyReference_s* z)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_DEL_PolicyReference) */

void zx_wst_RequestSecurityTokenResponse_DEL_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n)
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

/* FUNC(zx_wst_RequestSecurityTokenResponse_GET_Context) */
struct zx_str* zx_wst_RequestSecurityTokenResponse_GET_Context(struct zx_wst_RequestSecurityTokenResponse_s* x) { return x->Context; }
/* FUNC(zx_wst_RequestSecurityTokenResponse_PUT_Context) */
void zx_wst_RequestSecurityTokenResponse_PUT_Context(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_str* y) { x->Context = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestSecurityTokenResponseCollection_NUM_RequestSecurityTokenResponse) */

int zx_wst_RequestSecurityTokenResponseCollection_NUM_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestSecurityTokenResponse; y; ++n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestSecurityTokenResponseCollection_GET_RequestSecurityTokenResponse) */

struct zx_wst_RequestSecurityTokenResponse_s* zx_wst_RequestSecurityTokenResponseCollection_GET_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int n)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x) return 0;
  for (y = x->RequestSecurityTokenResponse; n>=0 && y; --n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponseCollection_POP_RequestSecurityTokenResponse) */

struct zx_wst_RequestSecurityTokenResponse_s* zx_wst_RequestSecurityTokenResponseCollection_POP_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x) return 0;
  y = x->RequestSecurityTokenResponse;
  if (y)
    x->RequestSecurityTokenResponse = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestSecurityTokenResponseCollection_PUSH_RequestSecurityTokenResponse) */

void zx_wst_RequestSecurityTokenResponseCollection_PUSH_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, struct zx_wst_RequestSecurityTokenResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestSecurityTokenResponse->gg.g;
  x->RequestSecurityTokenResponse = z;
}

/* FUNC(zx_wst_RequestSecurityTokenResponseCollection_REV_RequestSecurityTokenResponse) */

void zx_wst_RequestSecurityTokenResponseCollection_REV_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x)
{
  struct zx_wst_RequestSecurityTokenResponse_s* nxt;
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x) return;
  y = x->RequestSecurityTokenResponse;
  if (!y) return;
  x->RequestSecurityTokenResponse = 0;
  while (y) {
    nxt = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestSecurityTokenResponse->gg.g;
    x->RequestSecurityTokenResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponseCollection_PUT_RequestSecurityTokenResponse) */

void zx_wst_RequestSecurityTokenResponseCollection_PUT_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int n, struct zx_wst_RequestSecurityTokenResponse_s* z)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x || !z) return;
  y = x->RequestSecurityTokenResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestSecurityTokenResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestSecurityTokenResponseCollection_ADD_RequestSecurityTokenResponse) */

void zx_wst_RequestSecurityTokenResponseCollection_ADD_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int n, struct zx_wst_RequestSecurityTokenResponse_s* z)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestSecurityTokenResponse->gg.g;
    x->RequestSecurityTokenResponse = z;
    return;
  case -1:
    y = x->RequestSecurityTokenResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestSecurityTokenResponse; n > 1 && y; --n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestSecurityTokenResponseCollection_DEL_RequestSecurityTokenResponse) */

void zx_wst_RequestSecurityTokenResponseCollection_DEL_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int n)
{
  struct zx_wst_RequestSecurityTokenResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestSecurityTokenResponse = (struct zx_wst_RequestSecurityTokenResponse_s*)x->RequestSecurityTokenResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_wst_RequestSecurityTokenResponse_s*)x->RequestSecurityTokenResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestSecurityTokenResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_wst_RequestSecurityTokenResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestedAttachedReference_NUM_SecurityTokenReference) */

int zx_wst_RequestedAttachedReference_NUM_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityTokenReference; y; ++n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestedAttachedReference_GET_SecurityTokenReference) */

struct zx_wsse_SecurityTokenReference_s* zx_wst_RequestedAttachedReference_GET_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, int n)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return 0;
  for (y = x->SecurityTokenReference; n>=0 && y; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestedAttachedReference_POP_SecurityTokenReference) */

struct zx_wsse_SecurityTokenReference_s* zx_wst_RequestedAttachedReference_POP_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return 0;
  y = x->SecurityTokenReference;
  if (y)
    x->SecurityTokenReference = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestedAttachedReference_PUSH_SecurityTokenReference) */

void zx_wst_RequestedAttachedReference_PUSH_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, struct zx_wsse_SecurityTokenReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SecurityTokenReference->gg.g;
  x->SecurityTokenReference = z;
}

/* FUNC(zx_wst_RequestedAttachedReference_REV_SecurityTokenReference) */

void zx_wst_RequestedAttachedReference_REV_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* nxt;
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return;
  y = x->SecurityTokenReference;
  if (!y) return;
  x->SecurityTokenReference = 0;
  while (y) {
    nxt = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n;
    y->gg.g.n = &x->SecurityTokenReference->gg.g;
    x->SecurityTokenReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestedAttachedReference_PUT_SecurityTokenReference) */

void zx_wst_RequestedAttachedReference_PUT_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x || !z) return;
  y = x->SecurityTokenReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SecurityTokenReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestedAttachedReference_ADD_SecurityTokenReference) */

void zx_wst_RequestedAttachedReference_ADD_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SecurityTokenReference->gg.g;
    x->SecurityTokenReference = z;
    return;
  case -1:
    y = x->SecurityTokenReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SecurityTokenReference; n > 1 && y; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestedAttachedReference_DEL_SecurityTokenReference) */

void zx_wst_RequestedAttachedReference_DEL_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, int n)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityTokenReference = (struct zx_wsse_SecurityTokenReference_s*)x->SecurityTokenReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsse_SecurityTokenReference_s*)x->SecurityTokenReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SecurityTokenReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif


















#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_RequestedUnattachedReference_NUM_SecurityTokenReference) */

int zx_wst_RequestedUnattachedReference_NUM_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityTokenReference; y; ++n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wst_RequestedUnattachedReference_GET_SecurityTokenReference) */

struct zx_wsse_SecurityTokenReference_s* zx_wst_RequestedUnattachedReference_GET_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, int n)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return 0;
  for (y = x->SecurityTokenReference; n>=0 && y; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wst_RequestedUnattachedReference_POP_SecurityTokenReference) */

struct zx_wsse_SecurityTokenReference_s* zx_wst_RequestedUnattachedReference_POP_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return 0;
  y = x->SecurityTokenReference;
  if (y)
    x->SecurityTokenReference = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wst_RequestedUnattachedReference_PUSH_SecurityTokenReference) */

void zx_wst_RequestedUnattachedReference_PUSH_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, struct zx_wsse_SecurityTokenReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SecurityTokenReference->gg.g;
  x->SecurityTokenReference = z;
}

/* FUNC(zx_wst_RequestedUnattachedReference_REV_SecurityTokenReference) */

void zx_wst_RequestedUnattachedReference_REV_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x)
{
  struct zx_wsse_SecurityTokenReference_s* nxt;
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return;
  y = x->SecurityTokenReference;
  if (!y) return;
  x->SecurityTokenReference = 0;
  while (y) {
    nxt = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n;
    y->gg.g.n = &x->SecurityTokenReference->gg.g;
    x->SecurityTokenReference = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_RequestedUnattachedReference_PUT_SecurityTokenReference) */

void zx_wst_RequestedUnattachedReference_PUT_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x || !z) return;
  y = x->SecurityTokenReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SecurityTokenReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wst_RequestedUnattachedReference_ADD_SecurityTokenReference) */

void zx_wst_RequestedUnattachedReference_ADD_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SecurityTokenReference->gg.g;
    x->SecurityTokenReference = z;
    return;
  case -1:
    y = x->SecurityTokenReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SecurityTokenReference; n > 1 && y; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wst_RequestedUnattachedReference_DEL_SecurityTokenReference) */

void zx_wst_RequestedUnattachedReference_DEL_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, int n)
{
  struct zx_wsse_SecurityTokenReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityTokenReference = (struct zx_wsse_SecurityTokenReference_s*)x->SecurityTokenReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsse_SecurityTokenReference_s*)x->SecurityTokenReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SecurityTokenReference; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_SecurityTokenReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_SignChallenge_NUM_Challenge) */

int zx_wst_SignChallenge_NUM_Challenge(struct zx_wst_SignChallenge_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Challenge; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_SignChallenge_GET_Challenge) */

struct zx_elem_s* zx_wst_SignChallenge_GET_Challenge(struct zx_wst_SignChallenge_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Challenge; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_SignChallenge_POP_Challenge) */

struct zx_elem_s* zx_wst_SignChallenge_POP_Challenge(struct zx_wst_SignChallenge_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Challenge;
  if (y)
    x->Challenge = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_SignChallenge_PUSH_Challenge) */

void zx_wst_SignChallenge_PUSH_Challenge(struct zx_wst_SignChallenge_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Challenge->g;
  x->Challenge = z;
}

/* FUNC(zx_wst_SignChallenge_REV_Challenge) */

void zx_wst_SignChallenge_REV_Challenge(struct zx_wst_SignChallenge_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Challenge;
  if (!y) return;
  x->Challenge = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Challenge->g;
    x->Challenge = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_SignChallenge_PUT_Challenge) */

void zx_wst_SignChallenge_PUT_Challenge(struct zx_wst_SignChallenge_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Challenge;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Challenge = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_SignChallenge_ADD_Challenge) */

void zx_wst_SignChallenge_ADD_Challenge(struct zx_wst_SignChallenge_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Challenge->g;
    x->Challenge = z;
    return;
  case -1:
    y = x->Challenge;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Challenge; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_SignChallenge_DEL_Challenge) */

void zx_wst_SignChallenge_DEL_Challenge(struct zx_wst_SignChallenge_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Challenge = (struct zx_elem_s*)x->Challenge->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Challenge;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Challenge; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_SignChallengeResponse_NUM_Challenge) */

int zx_wst_SignChallengeResponse_NUM_Challenge(struct zx_wst_SignChallengeResponse_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Challenge; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_SignChallengeResponse_GET_Challenge) */

struct zx_elem_s* zx_wst_SignChallengeResponse_GET_Challenge(struct zx_wst_SignChallengeResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Challenge; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_SignChallengeResponse_POP_Challenge) */

struct zx_elem_s* zx_wst_SignChallengeResponse_POP_Challenge(struct zx_wst_SignChallengeResponse_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Challenge;
  if (y)
    x->Challenge = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_SignChallengeResponse_PUSH_Challenge) */

void zx_wst_SignChallengeResponse_PUSH_Challenge(struct zx_wst_SignChallengeResponse_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Challenge->g;
  x->Challenge = z;
}

/* FUNC(zx_wst_SignChallengeResponse_REV_Challenge) */

void zx_wst_SignChallengeResponse_REV_Challenge(struct zx_wst_SignChallengeResponse_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Challenge;
  if (!y) return;
  x->Challenge = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Challenge->g;
    x->Challenge = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_SignChallengeResponse_PUT_Challenge) */

void zx_wst_SignChallengeResponse_PUT_Challenge(struct zx_wst_SignChallengeResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Challenge;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Challenge = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_SignChallengeResponse_ADD_Challenge) */

void zx_wst_SignChallengeResponse_ADD_Challenge(struct zx_wst_SignChallengeResponse_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Challenge->g;
    x->Challenge = z;
    return;
  case -1:
    y = x->Challenge;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Challenge; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_SignChallengeResponse_DEL_Challenge) */

void zx_wst_SignChallengeResponse_DEL_Challenge(struct zx_wst_SignChallengeResponse_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Challenge = (struct zx_elem_s*)x->Challenge->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Challenge;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Challenge; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_Status_NUM_Code) */

int zx_wst_Status_NUM_Code(struct zx_wst_Status_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Code; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_Status_GET_Code) */

struct zx_elem_s* zx_wst_Status_GET_Code(struct zx_wst_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Code; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_Status_POP_Code) */

struct zx_elem_s* zx_wst_Status_POP_Code(struct zx_wst_Status_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Code;
  if (y)
    x->Code = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_Status_PUSH_Code) */

void zx_wst_Status_PUSH_Code(struct zx_wst_Status_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Code->g;
  x->Code = z;
}

/* FUNC(zx_wst_Status_REV_Code) */

void zx_wst_Status_REV_Code(struct zx_wst_Status_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Code;
  if (!y) return;
  x->Code = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Code->g;
    x->Code = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_Status_PUT_Code) */

void zx_wst_Status_PUT_Code(struct zx_wst_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Code;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Code = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_Status_ADD_Code) */

void zx_wst_Status_ADD_Code(struct zx_wst_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Code->g;
    x->Code = z;
    return;
  case -1:
    y = x->Code;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Code; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_Status_DEL_Code) */

void zx_wst_Status_DEL_Code(struct zx_wst_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Code = (struct zx_elem_s*)x->Code->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Code;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Code; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_wst_Status_NUM_Reason) */

int zx_wst_Status_NUM_Reason(struct zx_wst_Status_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Reason; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_wst_Status_GET_Reason) */

struct zx_elem_s* zx_wst_Status_GET_Reason(struct zx_wst_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Reason; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_wst_Status_POP_Reason) */

struct zx_elem_s* zx_wst_Status_POP_Reason(struct zx_wst_Status_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Reason;
  if (y)
    x->Reason = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_wst_Status_PUSH_Reason) */

void zx_wst_Status_PUSH_Reason(struct zx_wst_Status_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Reason->g;
  x->Reason = z;
}

/* FUNC(zx_wst_Status_REV_Reason) */

void zx_wst_Status_REV_Reason(struct zx_wst_Status_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Reason;
  if (!y) return;
  x->Reason = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Reason->g;
    x->Reason = y;
    y = nxt;
  }
}

/* FUNC(zx_wst_Status_PUT_Reason) */

void zx_wst_Status_PUT_Reason(struct zx_wst_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Reason;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Reason = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_wst_Status_ADD_Reason) */

void zx_wst_Status_ADD_Reason(struct zx_wst_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Reason->g;
    x->Reason = z;
    return;
  case -1:
    y = x->Reason;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Reason; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_wst_Status_DEL_Reason) */

void zx_wst_Status_DEL_Reason(struct zx_wst_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Reason = (struct zx_elem_s*)x->Reason->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Reason;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Reason; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif






/* FUNC(zx_wst_UseKey_GET_Sig) */
struct zx_str* zx_wst_UseKey_GET_Sig(struct zx_wst_UseKey_s* x) { return x->Sig; }
/* FUNC(zx_wst_UseKey_PUT_Sig) */
void zx_wst_UseKey_PUT_Sig(struct zx_wst_UseKey_s* x, struct zx_str* y) { x->Sig = y; }










/* EOF -- c/zx-wst-getput.c */
