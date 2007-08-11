/* c/zx-xenc-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-xenc-data.h"



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif

/* FUNC(zx_xenc_AgreementMethod_GET_Algorithm) */
struct zx_str* zx_xenc_AgreementMethod_GET_Algorithm(struct zx_xenc_AgreementMethod_s* x) { return x->Algorithm; }
/* FUNC(zx_xenc_AgreementMethod_PUT_Algorithm) */
void zx_xenc_AgreementMethod_PUT_Algorithm(struct zx_xenc_AgreementMethod_s* x, struct zx_str* y) { x->Algorithm = y; }







#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif








#ifdef ZX_ENA_GETPUT

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

#endif

/* FUNC(zx_xenc_CipherReference_GET_URI) */
struct zx_str* zx_xenc_CipherReference_GET_URI(struct zx_xenc_CipherReference_s* x) { return x->URI; }
/* FUNC(zx_xenc_CipherReference_PUT_URI) */
void zx_xenc_CipherReference_PUT_URI(struct zx_xenc_CipherReference_s* x, struct zx_str* y) { x->URI = y; }





/* FUNC(zx_xenc_DataReference_GET_URI) */
struct zx_str* zx_xenc_DataReference_GET_URI(struct zx_xenc_DataReference_s* x) { return x->URI; }
/* FUNC(zx_xenc_DataReference_PUT_URI) */
void zx_xenc_DataReference_PUT_URI(struct zx_xenc_DataReference_s* x, struct zx_str* y) { x->URI = y; }







#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif

/* FUNC(zx_xenc_EncryptedData_GET_Id) */
struct zx_str* zx_xenc_EncryptedData_GET_Id(struct zx_xenc_EncryptedData_s* x) { return x->Id; }
/* FUNC(zx_xenc_EncryptedData_PUT_Id) */
void zx_xenc_EncryptedData_PUT_Id(struct zx_xenc_EncryptedData_s* x, struct zx_str* y) { x->Id = y; }
/* FUNC(zx_xenc_EncryptedData_GET_Type) */
struct zx_str* zx_xenc_EncryptedData_GET_Type(struct zx_xenc_EncryptedData_s* x) { return x->Type; }
/* FUNC(zx_xenc_EncryptedData_PUT_Type) */
void zx_xenc_EncryptedData_PUT_Type(struct zx_xenc_EncryptedData_s* x, struct zx_str* y) { x->Type = y; }
/* FUNC(zx_xenc_EncryptedData_GET_MimeType) */
struct zx_str* zx_xenc_EncryptedData_GET_MimeType(struct zx_xenc_EncryptedData_s* x) { return x->MimeType; }
/* FUNC(zx_xenc_EncryptedData_PUT_MimeType) */
void zx_xenc_EncryptedData_PUT_MimeType(struct zx_xenc_EncryptedData_s* x, struct zx_str* y) { x->MimeType = y; }
/* FUNC(zx_xenc_EncryptedData_GET_Encoding) */
struct zx_str* zx_xenc_EncryptedData_GET_Encoding(struct zx_xenc_EncryptedData_s* x) { return x->Encoding; }
/* FUNC(zx_xenc_EncryptedData_PUT_Encoding) */
void zx_xenc_EncryptedData_PUT_Encoding(struct zx_xenc_EncryptedData_s* x, struct zx_str* y) { x->Encoding = y; }







#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif

/* FUNC(zx_xenc_EncryptedKey_GET_Id) */
struct zx_str* zx_xenc_EncryptedKey_GET_Id(struct zx_xenc_EncryptedKey_s* x) { return x->Id; }
/* FUNC(zx_xenc_EncryptedKey_PUT_Id) */
void zx_xenc_EncryptedKey_PUT_Id(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y) { x->Id = y; }
/* FUNC(zx_xenc_EncryptedKey_GET_Type) */
struct zx_str* zx_xenc_EncryptedKey_GET_Type(struct zx_xenc_EncryptedKey_s* x) { return x->Type; }
/* FUNC(zx_xenc_EncryptedKey_PUT_Type) */
void zx_xenc_EncryptedKey_PUT_Type(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y) { x->Type = y; }
/* FUNC(zx_xenc_EncryptedKey_GET_MimeType) */
struct zx_str* zx_xenc_EncryptedKey_GET_MimeType(struct zx_xenc_EncryptedKey_s* x) { return x->MimeType; }
/* FUNC(zx_xenc_EncryptedKey_PUT_MimeType) */
void zx_xenc_EncryptedKey_PUT_MimeType(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y) { x->MimeType = y; }
/* FUNC(zx_xenc_EncryptedKey_GET_Encoding) */
struct zx_str* zx_xenc_EncryptedKey_GET_Encoding(struct zx_xenc_EncryptedKey_s* x) { return x->Encoding; }
/* FUNC(zx_xenc_EncryptedKey_PUT_Encoding) */
void zx_xenc_EncryptedKey_PUT_Encoding(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y) { x->Encoding = y; }
/* FUNC(zx_xenc_EncryptedKey_GET_Recipient) */
struct zx_str* zx_xenc_EncryptedKey_GET_Recipient(struct zx_xenc_EncryptedKey_s* x) { return x->Recipient; }
/* FUNC(zx_xenc_EncryptedKey_PUT_Recipient) */
void zx_xenc_EncryptedKey_PUT_Recipient(struct zx_xenc_EncryptedKey_s* x, struct zx_str* y) { x->Recipient = y; }







#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif

/* FUNC(zx_xenc_EncryptionMethod_GET_Algorithm) */
struct zx_str* zx_xenc_EncryptionMethod_GET_Algorithm(struct zx_xenc_EncryptionMethod_s* x) { return x->Algorithm; }
/* FUNC(zx_xenc_EncryptionMethod_PUT_Algorithm) */
void zx_xenc_EncryptionMethod_PUT_Algorithm(struct zx_xenc_EncryptionMethod_s* x, struct zx_str* y) { x->Algorithm = y; }







#ifdef ZX_ENA_GETPUT

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

#endif

/* FUNC(zx_xenc_EncryptionProperties_GET_Id) */
struct zx_str* zx_xenc_EncryptionProperties_GET_Id(struct zx_xenc_EncryptionProperties_s* x) { return x->Id; }
/* FUNC(zx_xenc_EncryptionProperties_PUT_Id) */
void zx_xenc_EncryptionProperties_PUT_Id(struct zx_xenc_EncryptionProperties_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_xenc_EncryptionProperty_GET_Target) */
struct zx_str* zx_xenc_EncryptionProperty_GET_Target(struct zx_xenc_EncryptionProperty_s* x) { return x->Target; }
/* FUNC(zx_xenc_EncryptionProperty_PUT_Target) */
void zx_xenc_EncryptionProperty_PUT_Target(struct zx_xenc_EncryptionProperty_s* x, struct zx_str* y) { x->Target = y; }
/* FUNC(zx_xenc_EncryptionProperty_GET_Id) */
struct zx_str* zx_xenc_EncryptionProperty_GET_Id(struct zx_xenc_EncryptionProperty_s* x) { return x->Id; }
/* FUNC(zx_xenc_EncryptionProperty_PUT_Id) */
void zx_xenc_EncryptionProperty_PUT_Id(struct zx_xenc_EncryptionProperty_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_xenc_KeyReference_GET_URI) */
struct zx_str* zx_xenc_KeyReference_GET_URI(struct zx_xenc_KeyReference_s* x) { return x->URI; }
/* FUNC(zx_xenc_KeyReference_PUT_URI) */
void zx_xenc_KeyReference_PUT_URI(struct zx_xenc_KeyReference_s* x, struct zx_str* y) { x->URI = y; }







#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif

/* FUNC(zx_xenc_OriginatorKeyInfo_GET_Id) */
struct zx_str* zx_xenc_OriginatorKeyInfo_GET_Id(struct zx_xenc_OriginatorKeyInfo_s* x) { return x->Id; }
/* FUNC(zx_xenc_OriginatorKeyInfo_PUT_Id) */
void zx_xenc_OriginatorKeyInfo_PUT_Id(struct zx_xenc_OriginatorKeyInfo_s* x, struct zx_str* y) { x->Id = y; }







#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif

/* FUNC(zx_xenc_RecipientKeyInfo_GET_Id) */
struct zx_str* zx_xenc_RecipientKeyInfo_GET_Id(struct zx_xenc_RecipientKeyInfo_s* x) { return x->Id; }
/* FUNC(zx_xenc_RecipientKeyInfo_PUT_Id) */
void zx_xenc_RecipientKeyInfo_PUT_Id(struct zx_xenc_RecipientKeyInfo_s* x, struct zx_str* y) { x->Id = y; }







#ifdef ZX_ENA_GETPUT

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

#endif



#ifdef ZX_ENA_GETPUT

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

#endif








#ifdef ZX_ENA_GETPUT

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

#endif






/* EOF -- c/zx-xenc-getput.c */
