/* c/zx-mm7-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-mm7-data.h"

/* FUNC(zx_mm7_AdditionalInformation_GET_href) */
struct zx_str* zx_mm7_AdditionalInformation_GET_href(struct zx_mm7_AdditionalInformation_s* x) { return x->href; }
/* FUNC(zx_mm7_AdditionalInformation_PUT_href) */
void zx_mm7_AdditionalInformation_PUT_href(struct zx_mm7_AdditionalInformation_s* x, struct zx_str* y) { x->href = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Bcc_NUM_RFC2822Address) */

int zx_mm7_Bcc_NUM_RFC2822Address(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RFC2822Address; y; ++n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Bcc_GET_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_Bcc_GET_RFC2822Address(struct zx_mm7_Bcc_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  for (y = x->RFC2822Address; n>=0 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Bcc_POP_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_Bcc_POP_RFC2822Address(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  y = x->RFC2822Address;
  if (y)
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Bcc_PUSH_RFC2822Address) */

void zx_mm7_Bcc_PUSH_RFC2822Address(struct zx_mm7_Bcc_s* x, struct zx_mm7_RFC2822Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RFC2822Address->gg.g;
  x->RFC2822Address = z;
}

/* FUNC(zx_mm7_Bcc_REV_RFC2822Address) */

void zx_mm7_Bcc_REV_RFC2822Address(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_RFC2822Address_s* nxt;
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  y = x->RFC2822Address;
  if (!y) return;
  x->RFC2822Address = 0;
  while (y) {
    nxt = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
    y->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Bcc_PUT_RFC2822Address) */

void zx_mm7_Bcc_PUT_RFC2822Address(struct zx_mm7_Bcc_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  y = x->RFC2822Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RFC2822Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Bcc_ADD_RFC2822Address) */

void zx_mm7_Bcc_ADD_RFC2822Address(struct zx_mm7_Bcc_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = z;
    return;
  case -1:
    y = x->RFC2822Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Bcc_DEL_RFC2822Address) */

void zx_mm7_Bcc_DEL_RFC2822Address(struct zx_mm7_Bcc_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Bcc_NUM_Number) */

int zx_mm7_Bcc_NUM_Number(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_Number_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Number; y; ++n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Bcc_GET_Number) */

struct zx_mm7_Number_s* zx_mm7_Bcc_GET_Number(struct zx_mm7_Bcc_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  for (y = x->Number; n>=0 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Bcc_POP_Number) */

struct zx_mm7_Number_s* zx_mm7_Bcc_POP_Number(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  y = x->Number;
  if (y)
    x->Number = (struct zx_mm7_Number_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Bcc_PUSH_Number) */

void zx_mm7_Bcc_PUSH_Number(struct zx_mm7_Bcc_s* x, struct zx_mm7_Number_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Number->gg.g;
  x->Number = z;
}

/* FUNC(zx_mm7_Bcc_REV_Number) */

void zx_mm7_Bcc_REV_Number(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_Number_s* nxt;
  struct zx_mm7_Number_s* y;
  if (!x) return;
  y = x->Number;
  if (!y) return;
  x->Number = 0;
  while (y) {
    nxt = (struct zx_mm7_Number_s*)y->gg.g.n;
    y->gg.g.n = &x->Number->gg.g;
    x->Number = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Bcc_PUT_Number) */

void zx_mm7_Bcc_PUT_Number(struct zx_mm7_Bcc_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  y = x->Number;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Number = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Bcc_ADD_Number) */

void zx_mm7_Bcc_ADD_Number(struct zx_mm7_Bcc_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Number->gg.g;
    x->Number = z;
    return;
  case -1:
    y = x->Number;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Bcc_DEL_Number) */

void zx_mm7_Bcc_DEL_Number(struct zx_mm7_Bcc_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Number = (struct zx_mm7_Number_s*)x->Number->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Number_s*)x->Number;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Bcc_NUM_ShortCode) */

int zx_mm7_Bcc_NUM_ShortCode(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ShortCode; y; ++n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Bcc_GET_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_Bcc_GET_ShortCode(struct zx_mm7_Bcc_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  for (y = x->ShortCode; n>=0 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Bcc_POP_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_Bcc_POP_ShortCode(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  y = x->ShortCode;
  if (y)
    x->ShortCode = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Bcc_PUSH_ShortCode) */

void zx_mm7_Bcc_PUSH_ShortCode(struct zx_mm7_Bcc_s* x, struct zx_mm7_ShortCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ShortCode->gg.g;
  x->ShortCode = z;
}

/* FUNC(zx_mm7_Bcc_REV_ShortCode) */

void zx_mm7_Bcc_REV_ShortCode(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_ShortCode_s* nxt;
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  y = x->ShortCode;
  if (!y) return;
  x->ShortCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Bcc_PUT_ShortCode) */

void zx_mm7_Bcc_PUT_ShortCode(struct zx_mm7_Bcc_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  y = x->ShortCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ShortCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Bcc_ADD_ShortCode) */

void zx_mm7_Bcc_ADD_ShortCode(struct zx_mm7_Bcc_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = z;
    return;
  case -1:
    y = x->ShortCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Bcc_DEL_ShortCode) */

void zx_mm7_Bcc_DEL_ShortCode(struct zx_mm7_Bcc_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ShortCode = (struct zx_mm7_ShortCode_s*)x->ShortCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ShortCode_s*)x->ShortCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Bcc_NUM_Extension) */

int zx_mm7_Bcc_NUM_Extension(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Bcc_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_Bcc_GET_Extension(struct zx_mm7_Bcc_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Bcc_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_Bcc_POP_Extension(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Bcc_PUSH_Extension) */

void zx_mm7_Bcc_PUSH_Extension(struct zx_mm7_Bcc_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_Bcc_REV_Extension) */

void zx_mm7_Bcc_REV_Extension(struct zx_mm7_Bcc_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Bcc_PUT_Extension) */

void zx_mm7_Bcc_PUT_Extension(struct zx_mm7_Bcc_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Bcc_ADD_Extension) */

void zx_mm7_Bcc_ADD_Extension(struct zx_mm7_Bcc_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Bcc_DEL_Extension) */

void zx_mm7_Bcc_DEL_Extension(struct zx_mm7_Bcc_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelReq_NUM_MM7Version) */

int zx_mm7_CancelReq_NUM_MM7Version(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_CancelReq_GET_MM7Version(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_CancelReq_POP_MM7Version(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_CancelReq_PUSH_MM7Version) */

void zx_mm7_CancelReq_PUSH_MM7Version(struct zx_mm7_CancelReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_CancelReq_REV_MM7Version) */

void zx_mm7_CancelReq_REV_MM7Version(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelReq_PUT_MM7Version) */

void zx_mm7_CancelReq_PUT_MM7Version(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_CancelReq_ADD_MM7Version) */

void zx_mm7_CancelReq_ADD_MM7Version(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_CancelReq_DEL_MM7Version) */

void zx_mm7_CancelReq_DEL_MM7Version(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelReq_NUM_SenderIdentification) */

int zx_mm7_CancelReq_NUM_SenderIdentification(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SenderIdentification; y; ++n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelReq_GET_SenderIdentification) */

struct zx_mm7_SenderIdentification_s* zx_mm7_CancelReq_GET_SenderIdentification(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return 0;
  for (y = x->SenderIdentification; n>=0 && y; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelReq_POP_SenderIdentification) */

struct zx_mm7_SenderIdentification_s* zx_mm7_CancelReq_POP_SenderIdentification(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return 0;
  y = x->SenderIdentification;
  if (y)
    x->SenderIdentification = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_CancelReq_PUSH_SenderIdentification) */

void zx_mm7_CancelReq_PUSH_SenderIdentification(struct zx_mm7_CancelReq_s* x, struct zx_mm7_SenderIdentification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SenderIdentification->gg.g;
  x->SenderIdentification = z;
}

/* FUNC(zx_mm7_CancelReq_REV_SenderIdentification) */

void zx_mm7_CancelReq_REV_SenderIdentification(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* nxt;
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return;
  y = x->SenderIdentification;
  if (!y) return;
  x->SenderIdentification = 0;
  while (y) {
    nxt = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n;
    y->gg.g.n = &x->SenderIdentification->gg.g;
    x->SenderIdentification = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelReq_PUT_SenderIdentification) */

void zx_mm7_CancelReq_PUT_SenderIdentification(struct zx_mm7_CancelReq_s* x, int n, struct zx_mm7_SenderIdentification_s* z)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x || !z) return;
  y = x->SenderIdentification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SenderIdentification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_CancelReq_ADD_SenderIdentification) */

void zx_mm7_CancelReq_ADD_SenderIdentification(struct zx_mm7_CancelReq_s* x, int n, struct zx_mm7_SenderIdentification_s* z)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SenderIdentification->gg.g;
    x->SenderIdentification = z;
    return;
  case -1:
    y = x->SenderIdentification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderIdentification; n > 1 && y; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_CancelReq_DEL_SenderIdentification) */

void zx_mm7_CancelReq_DEL_SenderIdentification(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SenderIdentification = (struct zx_mm7_SenderIdentification_s*)x->SenderIdentification->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_SenderIdentification_s*)x->SenderIdentification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderIdentification; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelReq_NUM_Extension) */

int zx_mm7_CancelReq_NUM_Extension(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelReq_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_CancelReq_GET_Extension(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelReq_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_CancelReq_POP_Extension(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_CancelReq_PUSH_Extension) */

void zx_mm7_CancelReq_PUSH_Extension(struct zx_mm7_CancelReq_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_CancelReq_REV_Extension) */

void zx_mm7_CancelReq_REV_Extension(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelReq_PUT_Extension) */

void zx_mm7_CancelReq_PUT_Extension(struct zx_mm7_CancelReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_CancelReq_ADD_Extension) */

void zx_mm7_CancelReq_ADD_Extension(struct zx_mm7_CancelReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_CancelReq_DEL_Extension) */

void zx_mm7_CancelReq_DEL_Extension(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelReq_NUM_MessageID) */

int zx_mm7_CancelReq_NUM_MessageID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelReq_GET_MessageID) */

struct zx_elem_s* zx_mm7_CancelReq_GET_MessageID(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelReq_POP_MessageID) */

struct zx_elem_s* zx_mm7_CancelReq_POP_MessageID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_CancelReq_PUSH_MessageID) */

void zx_mm7_CancelReq_PUSH_MessageID(struct zx_mm7_CancelReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageID->g;
  x->MessageID = z;
}

/* FUNC(zx_mm7_CancelReq_REV_MessageID) */

void zx_mm7_CancelReq_REV_MessageID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageID->g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelReq_PUT_MessageID) */

void zx_mm7_CancelReq_PUT_MessageID(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_CancelReq_ADD_MessageID) */

void zx_mm7_CancelReq_ADD_MessageID(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageID->g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_CancelReq_DEL_MessageID) */

void zx_mm7_CancelReq_DEL_MessageID(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_elem_s*)x->MessageID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelReq_NUM_Recipients) */

int zx_mm7_CancelReq_NUM_Recipients(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_Recipients_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Recipients; y; ++n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelReq_GET_Recipients) */

struct zx_mm7_Recipients_s* zx_mm7_CancelReq_GET_Recipients(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return 0;
  for (y = x->Recipients; n>=0 && y; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelReq_POP_Recipients) */

struct zx_mm7_Recipients_s* zx_mm7_CancelReq_POP_Recipients(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return 0;
  y = x->Recipients;
  if (y)
    x->Recipients = (struct zx_mm7_Recipients_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_CancelReq_PUSH_Recipients) */

void zx_mm7_CancelReq_PUSH_Recipients(struct zx_mm7_CancelReq_s* x, struct zx_mm7_Recipients_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Recipients->gg.g;
  x->Recipients = z;
}

/* FUNC(zx_mm7_CancelReq_REV_Recipients) */

void zx_mm7_CancelReq_REV_Recipients(struct zx_mm7_CancelReq_s* x)
{
  struct zx_mm7_Recipients_s* nxt;
  struct zx_mm7_Recipients_s* y;
  if (!x) return;
  y = x->Recipients;
  if (!y) return;
  x->Recipients = 0;
  while (y) {
    nxt = (struct zx_mm7_Recipients_s*)y->gg.g.n;
    y->gg.g.n = &x->Recipients->gg.g;
    x->Recipients = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelReq_PUT_Recipients) */

void zx_mm7_CancelReq_PUT_Recipients(struct zx_mm7_CancelReq_s* x, int n, struct zx_mm7_Recipients_s* z)
{
  struct zx_mm7_Recipients_s* y;
  if (!x || !z) return;
  y = x->Recipients;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Recipients = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_CancelReq_ADD_Recipients) */

void zx_mm7_CancelReq_ADD_Recipients(struct zx_mm7_CancelReq_s* x, int n, struct zx_mm7_Recipients_s* z)
{
  struct zx_mm7_Recipients_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Recipients->gg.g;
    x->Recipients = z;
    return;
  case -1:
    y = x->Recipients;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipients; n > 1 && y; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_CancelReq_DEL_Recipients) */

void zx_mm7_CancelReq_DEL_Recipients(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Recipients = (struct zx_mm7_Recipients_s*)x->Recipients->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Recipients_s*)x->Recipients;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipients; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelReq_NUM_ApplicID) */

int zx_mm7_CancelReq_NUM_ApplicID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelReq_GET_ApplicID) */

struct zx_elem_s* zx_mm7_CancelReq_GET_ApplicID(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelReq_POP_ApplicID) */

struct zx_elem_s* zx_mm7_CancelReq_POP_ApplicID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ApplicID;
  if (y)
    x->ApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_CancelReq_PUSH_ApplicID) */

void zx_mm7_CancelReq_PUSH_ApplicID(struct zx_mm7_CancelReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ApplicID->g;
  x->ApplicID = z;
}

/* FUNC(zx_mm7_CancelReq_REV_ApplicID) */

void zx_mm7_CancelReq_REV_ApplicID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ApplicID;
  if (!y) return;
  x->ApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ApplicID->g;
    x->ApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelReq_PUT_ApplicID) */

void zx_mm7_CancelReq_PUT_ApplicID(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_CancelReq_ADD_ApplicID) */

void zx_mm7_CancelReq_ADD_ApplicID(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ApplicID->g;
    x->ApplicID = z;
    return;
  case -1:
    y = x->ApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_CancelReq_DEL_ApplicID) */

void zx_mm7_CancelReq_DEL_ApplicID(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicID = (struct zx_elem_s*)x->ApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelReq_NUM_ReplyApplicID) */

int zx_mm7_CancelReq_NUM_ReplyApplicID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelReq_GET_ReplyApplicID) */

struct zx_elem_s* zx_mm7_CancelReq_GET_ReplyApplicID(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReplyApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelReq_POP_ReplyApplicID) */

struct zx_elem_s* zx_mm7_CancelReq_POP_ReplyApplicID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReplyApplicID;
  if (y)
    x->ReplyApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_CancelReq_PUSH_ReplyApplicID) */

void zx_mm7_CancelReq_PUSH_ReplyApplicID(struct zx_mm7_CancelReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReplyApplicID->g;
  x->ReplyApplicID = z;
}

/* FUNC(zx_mm7_CancelReq_REV_ReplyApplicID) */

void zx_mm7_CancelReq_REV_ReplyApplicID(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReplyApplicID;
  if (!y) return;
  x->ReplyApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelReq_PUT_ReplyApplicID) */

void zx_mm7_CancelReq_PUT_ReplyApplicID(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReplyApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReplyApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_CancelReq_ADD_ReplyApplicID) */

void zx_mm7_CancelReq_ADD_ReplyApplicID(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = z;
    return;
  case -1:
    y = x->ReplyApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_CancelReq_DEL_ReplyApplicID) */

void zx_mm7_CancelReq_DEL_ReplyApplicID(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyApplicID = (struct zx_elem_s*)x->ReplyApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReplyApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelReq_NUM_AuxApplicInfo) */

int zx_mm7_CancelReq_NUM_AuxApplicInfo(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelReq_GET_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_CancelReq_GET_AuxApplicInfo(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelReq_POP_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_CancelReq_POP_AuxApplicInfo(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuxApplicInfo;
  if (y)
    x->AuxApplicInfo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_CancelReq_PUSH_AuxApplicInfo) */

void zx_mm7_CancelReq_PUSH_AuxApplicInfo(struct zx_mm7_CancelReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuxApplicInfo->g;
  x->AuxApplicInfo = z;
}

/* FUNC(zx_mm7_CancelReq_REV_AuxApplicInfo) */

void zx_mm7_CancelReq_REV_AuxApplicInfo(struct zx_mm7_CancelReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  x->AuxApplicInfo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelReq_PUT_AuxApplicInfo) */

void zx_mm7_CancelReq_PUT_AuxApplicInfo(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuxApplicInfo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_CancelReq_ADD_AuxApplicInfo) */

void zx_mm7_CancelReq_ADD_AuxApplicInfo(struct zx_mm7_CancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = z;
    return;
  case -1:
    y = x->AuxApplicInfo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_CancelReq_DEL_AuxApplicInfo) */

void zx_mm7_CancelReq_DEL_AuxApplicInfo(struct zx_mm7_CancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuxApplicInfo = (struct zx_elem_s*)x->AuxApplicInfo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuxApplicInfo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelRsp_NUM_MM7Version) */

int zx_mm7_CancelRsp_NUM_MM7Version(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_CancelRsp_GET_MM7Version(struct zx_mm7_CancelRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_CancelRsp_POP_MM7Version(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_CancelRsp_PUSH_MM7Version) */

void zx_mm7_CancelRsp_PUSH_MM7Version(struct zx_mm7_CancelRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_CancelRsp_REV_MM7Version) */

void zx_mm7_CancelRsp_REV_MM7Version(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelRsp_PUT_MM7Version) */

void zx_mm7_CancelRsp_PUT_MM7Version(struct zx_mm7_CancelRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_CancelRsp_ADD_MM7Version) */

void zx_mm7_CancelRsp_ADD_MM7Version(struct zx_mm7_CancelRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_CancelRsp_DEL_MM7Version) */

void zx_mm7_CancelRsp_DEL_MM7Version(struct zx_mm7_CancelRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelRsp_NUM_Status) */

int zx_mm7_CancelRsp_NUM_Status(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_CancelRsp_GET_Status(struct zx_mm7_CancelRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_CancelRsp_POP_Status(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_CancelRsp_PUSH_Status) */

void zx_mm7_CancelRsp_PUSH_Status(struct zx_mm7_CancelRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_CancelRsp_REV_Status) */

void zx_mm7_CancelRsp_REV_Status(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelRsp_PUT_Status) */

void zx_mm7_CancelRsp_PUT_Status(struct zx_mm7_CancelRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_CancelRsp_ADD_Status) */

void zx_mm7_CancelRsp_ADD_Status(struct zx_mm7_CancelRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_CancelRsp_DEL_Status) */

void zx_mm7_CancelRsp_DEL_Status(struct zx_mm7_CancelRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_CancelRsp_NUM_Extension) */

int zx_mm7_CancelRsp_NUM_Extension(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_CancelRsp_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_CancelRsp_GET_Extension(struct zx_mm7_CancelRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_CancelRsp_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_CancelRsp_POP_Extension(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_CancelRsp_PUSH_Extension) */

void zx_mm7_CancelRsp_PUSH_Extension(struct zx_mm7_CancelRsp_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_CancelRsp_REV_Extension) */

void zx_mm7_CancelRsp_REV_Extension(struct zx_mm7_CancelRsp_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_CancelRsp_PUT_Extension) */

void zx_mm7_CancelRsp_PUT_Extension(struct zx_mm7_CancelRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_CancelRsp_ADD_Extension) */

void zx_mm7_CancelRsp_ADD_Extension(struct zx_mm7_CancelRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_CancelRsp_DEL_Extension) */

void zx_mm7_CancelRsp_DEL_Extension(struct zx_mm7_CancelRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Cc_NUM_RFC2822Address) */

int zx_mm7_Cc_NUM_RFC2822Address(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RFC2822Address; y; ++n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Cc_GET_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_Cc_GET_RFC2822Address(struct zx_mm7_Cc_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  for (y = x->RFC2822Address; n>=0 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Cc_POP_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_Cc_POP_RFC2822Address(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  y = x->RFC2822Address;
  if (y)
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Cc_PUSH_RFC2822Address) */

void zx_mm7_Cc_PUSH_RFC2822Address(struct zx_mm7_Cc_s* x, struct zx_mm7_RFC2822Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RFC2822Address->gg.g;
  x->RFC2822Address = z;
}

/* FUNC(zx_mm7_Cc_REV_RFC2822Address) */

void zx_mm7_Cc_REV_RFC2822Address(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_RFC2822Address_s* nxt;
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  y = x->RFC2822Address;
  if (!y) return;
  x->RFC2822Address = 0;
  while (y) {
    nxt = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
    y->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Cc_PUT_RFC2822Address) */

void zx_mm7_Cc_PUT_RFC2822Address(struct zx_mm7_Cc_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  y = x->RFC2822Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RFC2822Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Cc_ADD_RFC2822Address) */

void zx_mm7_Cc_ADD_RFC2822Address(struct zx_mm7_Cc_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = z;
    return;
  case -1:
    y = x->RFC2822Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Cc_DEL_RFC2822Address) */

void zx_mm7_Cc_DEL_RFC2822Address(struct zx_mm7_Cc_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Cc_NUM_Number) */

int zx_mm7_Cc_NUM_Number(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_Number_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Number; y; ++n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Cc_GET_Number) */

struct zx_mm7_Number_s* zx_mm7_Cc_GET_Number(struct zx_mm7_Cc_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  for (y = x->Number; n>=0 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Cc_POP_Number) */

struct zx_mm7_Number_s* zx_mm7_Cc_POP_Number(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  y = x->Number;
  if (y)
    x->Number = (struct zx_mm7_Number_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Cc_PUSH_Number) */

void zx_mm7_Cc_PUSH_Number(struct zx_mm7_Cc_s* x, struct zx_mm7_Number_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Number->gg.g;
  x->Number = z;
}

/* FUNC(zx_mm7_Cc_REV_Number) */

void zx_mm7_Cc_REV_Number(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_Number_s* nxt;
  struct zx_mm7_Number_s* y;
  if (!x) return;
  y = x->Number;
  if (!y) return;
  x->Number = 0;
  while (y) {
    nxt = (struct zx_mm7_Number_s*)y->gg.g.n;
    y->gg.g.n = &x->Number->gg.g;
    x->Number = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Cc_PUT_Number) */

void zx_mm7_Cc_PUT_Number(struct zx_mm7_Cc_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  y = x->Number;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Number = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Cc_ADD_Number) */

void zx_mm7_Cc_ADD_Number(struct zx_mm7_Cc_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Number->gg.g;
    x->Number = z;
    return;
  case -1:
    y = x->Number;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Cc_DEL_Number) */

void zx_mm7_Cc_DEL_Number(struct zx_mm7_Cc_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Number = (struct zx_mm7_Number_s*)x->Number->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Number_s*)x->Number;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Cc_NUM_ShortCode) */

int zx_mm7_Cc_NUM_ShortCode(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ShortCode; y; ++n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Cc_GET_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_Cc_GET_ShortCode(struct zx_mm7_Cc_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  for (y = x->ShortCode; n>=0 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Cc_POP_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_Cc_POP_ShortCode(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  y = x->ShortCode;
  if (y)
    x->ShortCode = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Cc_PUSH_ShortCode) */

void zx_mm7_Cc_PUSH_ShortCode(struct zx_mm7_Cc_s* x, struct zx_mm7_ShortCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ShortCode->gg.g;
  x->ShortCode = z;
}

/* FUNC(zx_mm7_Cc_REV_ShortCode) */

void zx_mm7_Cc_REV_ShortCode(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_ShortCode_s* nxt;
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  y = x->ShortCode;
  if (!y) return;
  x->ShortCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Cc_PUT_ShortCode) */

void zx_mm7_Cc_PUT_ShortCode(struct zx_mm7_Cc_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  y = x->ShortCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ShortCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Cc_ADD_ShortCode) */

void zx_mm7_Cc_ADD_ShortCode(struct zx_mm7_Cc_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = z;
    return;
  case -1:
    y = x->ShortCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Cc_DEL_ShortCode) */

void zx_mm7_Cc_DEL_ShortCode(struct zx_mm7_Cc_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ShortCode = (struct zx_mm7_ShortCode_s*)x->ShortCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ShortCode_s*)x->ShortCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Cc_NUM_Extension) */

int zx_mm7_Cc_NUM_Extension(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Cc_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_Cc_GET_Extension(struct zx_mm7_Cc_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Cc_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_Cc_POP_Extension(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Cc_PUSH_Extension) */

void zx_mm7_Cc_PUSH_Extension(struct zx_mm7_Cc_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_Cc_REV_Extension) */

void zx_mm7_Cc_REV_Extension(struct zx_mm7_Cc_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Cc_PUT_Extension) */

void zx_mm7_Cc_PUT_Extension(struct zx_mm7_Cc_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Cc_ADD_Extension) */

void zx_mm7_Cc_ADD_Extension(struct zx_mm7_Cc_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Cc_DEL_Extension) */

void zx_mm7_Cc_DEL_Extension(struct zx_mm7_Cc_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_mm7_Content_GET_allowAdaptations) */
struct zx_str* zx_mm7_Content_GET_allowAdaptations(struct zx_mm7_Content_s* x) { return x->allowAdaptations; }
/* FUNC(zx_mm7_Content_PUT_allowAdaptations) */
void zx_mm7_Content_PUT_allowAdaptations(struct zx_mm7_Content_s* x, struct zx_str* y) { x->allowAdaptations = y; }
/* FUNC(zx_mm7_Content_GET_href) */
struct zx_str* zx_mm7_Content_GET_href(struct zx_mm7_Content_s* x) { return x->href; }
/* FUNC(zx_mm7_Content_PUT_href) */
void zx_mm7_Content_PUT_href(struct zx_mm7_Content_s* x, struct zx_str* y) { x->href = y; }
/* FUNC(zx_mm7_Content_GET_type) */
struct zx_str* zx_mm7_Content_GET_type(struct zx_mm7_Content_s* x) { return x->type; }
/* FUNC(zx_mm7_Content_PUT_type) */
void zx_mm7_Content_PUT_type(struct zx_mm7_Content_s* x, struct zx_str* y) { x->type = y; }





/* FUNC(zx_mm7_DateTime_GET_sequence) */
struct zx_str* zx_mm7_DateTime_GET_sequence(struct zx_mm7_DateTime_s* x) { return x->sequence; }
/* FUNC(zx_mm7_DateTime_PUT_sequence) */
void zx_mm7_DateTime_PUT_sequence(struct zx_mm7_DateTime_s* x, struct zx_str* y) { x->sequence = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_MM7Version) */

int zx_mm7_DeliverReq_NUM_MM7Version(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_MM7Version(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_MM7Version(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_MM7Version) */

void zx_mm7_DeliverReq_PUSH_MM7Version(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_MM7Version) */

void zx_mm7_DeliverReq_REV_MM7Version(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_MM7Version) */

void zx_mm7_DeliverReq_PUT_MM7Version(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_MM7Version) */

void zx_mm7_DeliverReq_ADD_MM7Version(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_MM7Version) */

void zx_mm7_DeliverReq_DEL_MM7Version(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_MMSRelayServerID) */

int zx_mm7_DeliverReq_NUM_MMSRelayServerID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MMSRelayServerID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_MMSRelayServerID) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_MMSRelayServerID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MMSRelayServerID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_MMSRelayServerID) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_MMSRelayServerID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MMSRelayServerID;
  if (y)
    x->MMSRelayServerID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_MMSRelayServerID) */

void zx_mm7_DeliverReq_PUSH_MMSRelayServerID(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MMSRelayServerID->g;
  x->MMSRelayServerID = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_MMSRelayServerID) */

void zx_mm7_DeliverReq_REV_MMSRelayServerID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MMSRelayServerID;
  if (!y) return;
  x->MMSRelayServerID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MMSRelayServerID->g;
    x->MMSRelayServerID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_MMSRelayServerID) */

void zx_mm7_DeliverReq_PUT_MMSRelayServerID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MMSRelayServerID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MMSRelayServerID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_MMSRelayServerID) */

void zx_mm7_DeliverReq_ADD_MMSRelayServerID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MMSRelayServerID->g;
    x->MMSRelayServerID = z;
    return;
  case -1:
    y = x->MMSRelayServerID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMSRelayServerID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_MMSRelayServerID) */

void zx_mm7_DeliverReq_DEL_MMSRelayServerID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MMSRelayServerID = (struct zx_elem_s*)x->MMSRelayServerID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MMSRelayServerID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMSRelayServerID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_Extension) */

int zx_mm7_DeliverReq_NUM_Extension(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_DeliverReq_GET_Extension(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_DeliverReq_POP_Extension(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_Extension) */

void zx_mm7_DeliverReq_PUSH_Extension(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_Extension) */

void zx_mm7_DeliverReq_REV_Extension(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_Extension) */

void zx_mm7_DeliverReq_PUT_Extension(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_Extension) */

void zx_mm7_DeliverReq_ADD_Extension(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_Extension) */

void zx_mm7_DeliverReq_DEL_Extension(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_VASPID) */

int zx_mm7_DeliverReq_NUM_VASPID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASPID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_VASPID) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_VASPID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VASPID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_VASPID) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_VASPID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VASPID;
  if (y)
    x->VASPID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_VASPID) */

void zx_mm7_DeliverReq_PUSH_VASPID(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VASPID->g;
  x->VASPID = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_VASPID) */

void zx_mm7_DeliverReq_REV_VASPID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VASPID;
  if (!y) return;
  x->VASPID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VASPID->g;
    x->VASPID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_VASPID) */

void zx_mm7_DeliverReq_PUT_VASPID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VASPID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VASPID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_VASPID) */

void zx_mm7_DeliverReq_ADD_VASPID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VASPID->g;
    x->VASPID = z;
    return;
  case -1:
    y = x->VASPID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASPID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_VASPID) */

void zx_mm7_DeliverReq_DEL_VASPID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASPID = (struct zx_elem_s*)x->VASPID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VASPID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASPID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_VASID) */

int zx_mm7_DeliverReq_NUM_VASID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_VASID) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_VASID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VASID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_VASID) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_VASID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VASID;
  if (y)
    x->VASID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_VASID) */

void zx_mm7_DeliverReq_PUSH_VASID(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VASID->g;
  x->VASID = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_VASID) */

void zx_mm7_DeliverReq_REV_VASID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VASID;
  if (!y) return;
  x->VASID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VASID->g;
    x->VASID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_VASID) */

void zx_mm7_DeliverReq_PUT_VASID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VASID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VASID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_VASID) */

void zx_mm7_DeliverReq_ADD_VASID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VASID->g;
    x->VASID = z;
    return;
  case -1:
    y = x->VASID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_VASID) */

void zx_mm7_DeliverReq_DEL_VASID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASID = (struct zx_elem_s*)x->VASID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VASID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_LinkedID) */

int zx_mm7_DeliverReq_NUM_LinkedID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LinkedID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_LinkedID) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_LinkedID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->LinkedID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_LinkedID) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_LinkedID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->LinkedID;
  if (y)
    x->LinkedID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_LinkedID) */

void zx_mm7_DeliverReq_PUSH_LinkedID(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->LinkedID->g;
  x->LinkedID = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_LinkedID) */

void zx_mm7_DeliverReq_REV_LinkedID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->LinkedID;
  if (!y) return;
  x->LinkedID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->LinkedID->g;
    x->LinkedID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_LinkedID) */

void zx_mm7_DeliverReq_PUT_LinkedID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->LinkedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->LinkedID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_LinkedID) */

void zx_mm7_DeliverReq_ADD_LinkedID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->LinkedID->g;
    x->LinkedID = z;
    return;
  case -1:
    y = x->LinkedID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->LinkedID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_LinkedID) */

void zx_mm7_DeliverReq_DEL_LinkedID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LinkedID = (struct zx_elem_s*)x->LinkedID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->LinkedID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->LinkedID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_Sender) */

int zx_mm7_DeliverReq_NUM_Sender(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Sender_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sender; y; ++n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_Sender) */

struct zx_mm7_Sender_s* zx_mm7_DeliverReq_GET_Sender(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return 0;
  for (y = x->Sender; n>=0 && y; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_Sender) */

struct zx_mm7_Sender_s* zx_mm7_DeliverReq_POP_Sender(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return 0;
  y = x->Sender;
  if (y)
    x->Sender = (struct zx_mm7_Sender_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_Sender) */

void zx_mm7_DeliverReq_PUSH_Sender(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_Sender_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Sender->gg.g;
  x->Sender = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_Sender) */

void zx_mm7_DeliverReq_REV_Sender(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Sender_s* nxt;
  struct zx_mm7_Sender_s* y;
  if (!x) return;
  y = x->Sender;
  if (!y) return;
  x->Sender = 0;
  while (y) {
    nxt = (struct zx_mm7_Sender_s*)y->gg.g.n;
    y->gg.g.n = &x->Sender->gg.g;
    x->Sender = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_Sender) */

void zx_mm7_DeliverReq_PUT_Sender(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Sender_s* z)
{
  struct zx_mm7_Sender_s* y;
  if (!x || !z) return;
  y = x->Sender;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Sender = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_Sender) */

void zx_mm7_DeliverReq_ADD_Sender(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Sender_s* z)
{
  struct zx_mm7_Sender_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_Sender) */

void zx_mm7_DeliverReq_DEL_Sender(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sender = (struct zx_mm7_Sender_s*)x->Sender->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Sender_s*)x->Sender;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_Recipients) */

int zx_mm7_DeliverReq_NUM_Recipients(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Recipients_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Recipients; y; ++n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_Recipients) */

struct zx_mm7_Recipients_s* zx_mm7_DeliverReq_GET_Recipients(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return 0;
  for (y = x->Recipients; n>=0 && y; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_Recipients) */

struct zx_mm7_Recipients_s* zx_mm7_DeliverReq_POP_Recipients(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return 0;
  y = x->Recipients;
  if (y)
    x->Recipients = (struct zx_mm7_Recipients_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_Recipients) */

void zx_mm7_DeliverReq_PUSH_Recipients(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_Recipients_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Recipients->gg.g;
  x->Recipients = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_Recipients) */

void zx_mm7_DeliverReq_REV_Recipients(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Recipients_s* nxt;
  struct zx_mm7_Recipients_s* y;
  if (!x) return;
  y = x->Recipients;
  if (!y) return;
  x->Recipients = 0;
  while (y) {
    nxt = (struct zx_mm7_Recipients_s*)y->gg.g.n;
    y->gg.g.n = &x->Recipients->gg.g;
    x->Recipients = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_Recipients) */

void zx_mm7_DeliverReq_PUT_Recipients(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Recipients_s* z)
{
  struct zx_mm7_Recipients_s* y;
  if (!x || !z) return;
  y = x->Recipients;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Recipients = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_Recipients) */

void zx_mm7_DeliverReq_ADD_Recipients(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Recipients_s* z)
{
  struct zx_mm7_Recipients_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Recipients->gg.g;
    x->Recipients = z;
    return;
  case -1:
    y = x->Recipients;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipients; n > 1 && y; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_Recipients) */

void zx_mm7_DeliverReq_DEL_Recipients(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Recipients = (struct zx_mm7_Recipients_s*)x->Recipients->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Recipients_s*)x->Recipients;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipients; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_Previouslysentby) */

int zx_mm7_DeliverReq_NUM_Previouslysentby(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Previouslysentby_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Previouslysentby; y; ++n, y = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_Previouslysentby) */

struct zx_mm7_Previouslysentby_s* zx_mm7_DeliverReq_GET_Previouslysentby(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Previouslysentby_s* y;
  if (!x) return 0;
  for (y = x->Previouslysentby; n>=0 && y; --n, y = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_Previouslysentby) */

struct zx_mm7_Previouslysentby_s* zx_mm7_DeliverReq_POP_Previouslysentby(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Previouslysentby_s* y;
  if (!x) return 0;
  y = x->Previouslysentby;
  if (y)
    x->Previouslysentby = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_Previouslysentby) */

void zx_mm7_DeliverReq_PUSH_Previouslysentby(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_Previouslysentby_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Previouslysentby->gg.g;
  x->Previouslysentby = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_Previouslysentby) */

void zx_mm7_DeliverReq_REV_Previouslysentby(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Previouslysentby_s* nxt;
  struct zx_mm7_Previouslysentby_s* y;
  if (!x) return;
  y = x->Previouslysentby;
  if (!y) return;
  x->Previouslysentby = 0;
  while (y) {
    nxt = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n;
    y->gg.g.n = &x->Previouslysentby->gg.g;
    x->Previouslysentby = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_Previouslysentby) */

void zx_mm7_DeliverReq_PUT_Previouslysentby(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Previouslysentby_s* z)
{
  struct zx_mm7_Previouslysentby_s* y;
  if (!x || !z) return;
  y = x->Previouslysentby;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Previouslysentby = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_Previouslysentby) */

void zx_mm7_DeliverReq_ADD_Previouslysentby(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Previouslysentby_s* z)
{
  struct zx_mm7_Previouslysentby_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Previouslysentby->gg.g;
    x->Previouslysentby = z;
    return;
  case -1:
    y = x->Previouslysentby;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Previouslysentby; n > 1 && y; --n, y = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_Previouslysentby) */

void zx_mm7_DeliverReq_DEL_Previouslysentby(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Previouslysentby_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Previouslysentby = (struct zx_mm7_Previouslysentby_s*)x->Previouslysentby->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Previouslysentby_s*)x->Previouslysentby;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Previouslysentby; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Previouslysentby_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_Previouslysentdateandtime) */

int zx_mm7_DeliverReq_NUM_Previouslysentdateandtime(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Previouslysentdateandtime_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Previouslysentdateandtime; y; ++n, y = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_Previouslysentdateandtime) */

struct zx_mm7_Previouslysentdateandtime_s* zx_mm7_DeliverReq_GET_Previouslysentdateandtime(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Previouslysentdateandtime_s* y;
  if (!x) return 0;
  for (y = x->Previouslysentdateandtime; n>=0 && y; --n, y = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_Previouslysentdateandtime) */

struct zx_mm7_Previouslysentdateandtime_s* zx_mm7_DeliverReq_POP_Previouslysentdateandtime(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Previouslysentdateandtime_s* y;
  if (!x) return 0;
  y = x->Previouslysentdateandtime;
  if (y)
    x->Previouslysentdateandtime = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_Previouslysentdateandtime) */

void zx_mm7_DeliverReq_PUSH_Previouslysentdateandtime(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_Previouslysentdateandtime_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Previouslysentdateandtime->gg.g;
  x->Previouslysentdateandtime = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_Previouslysentdateandtime) */

void zx_mm7_DeliverReq_REV_Previouslysentdateandtime(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Previouslysentdateandtime_s* nxt;
  struct zx_mm7_Previouslysentdateandtime_s* y;
  if (!x) return;
  y = x->Previouslysentdateandtime;
  if (!y) return;
  x->Previouslysentdateandtime = 0;
  while (y) {
    nxt = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n;
    y->gg.g.n = &x->Previouslysentdateandtime->gg.g;
    x->Previouslysentdateandtime = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_Previouslysentdateandtime) */

void zx_mm7_DeliverReq_PUT_Previouslysentdateandtime(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Previouslysentdateandtime_s* z)
{
  struct zx_mm7_Previouslysentdateandtime_s* y;
  if (!x || !z) return;
  y = x->Previouslysentdateandtime;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Previouslysentdateandtime = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_Previouslysentdateandtime) */

void zx_mm7_DeliverReq_ADD_Previouslysentdateandtime(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Previouslysentdateandtime_s* z)
{
  struct zx_mm7_Previouslysentdateandtime_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Previouslysentdateandtime->gg.g;
    x->Previouslysentdateandtime = z;
    return;
  case -1:
    y = x->Previouslysentdateandtime;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Previouslysentdateandtime; n > 1 && y; --n, y = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_Previouslysentdateandtime) */

void zx_mm7_DeliverReq_DEL_Previouslysentdateandtime(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Previouslysentdateandtime_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Previouslysentdateandtime = (struct zx_mm7_Previouslysentdateandtime_s*)x->Previouslysentdateandtime->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Previouslysentdateandtime_s*)x->Previouslysentdateandtime;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Previouslysentdateandtime; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Previouslysentdateandtime_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_SenderSPI) */

int zx_mm7_DeliverReq_NUM_SenderSPI(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SenderSPI; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_SenderSPI) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_SenderSPI(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SenderSPI; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_SenderSPI) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_SenderSPI(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SenderSPI;
  if (y)
    x->SenderSPI = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_SenderSPI) */

void zx_mm7_DeliverReq_PUSH_SenderSPI(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SenderSPI->g;
  x->SenderSPI = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_SenderSPI) */

void zx_mm7_DeliverReq_REV_SenderSPI(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SenderSPI;
  if (!y) return;
  x->SenderSPI = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SenderSPI->g;
    x->SenderSPI = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_SenderSPI) */

void zx_mm7_DeliverReq_PUT_SenderSPI(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SenderSPI;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SenderSPI = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_SenderSPI) */

void zx_mm7_DeliverReq_ADD_SenderSPI(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SenderSPI->g;
    x->SenderSPI = z;
    return;
  case -1:
    y = x->SenderSPI;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SenderSPI; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_SenderSPI) */

void zx_mm7_DeliverReq_DEL_SenderSPI(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SenderSPI = (struct zx_elem_s*)x->SenderSPI->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SenderSPI;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SenderSPI; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_RecipientSPI) */

int zx_mm7_DeliverReq_NUM_RecipientSPI(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RecipientSPI; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_RecipientSPI) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_RecipientSPI(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->RecipientSPI; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_RecipientSPI) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_RecipientSPI(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->RecipientSPI;
  if (y)
    x->RecipientSPI = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_RecipientSPI) */

void zx_mm7_DeliverReq_PUSH_RecipientSPI(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->RecipientSPI->g;
  x->RecipientSPI = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_RecipientSPI) */

void zx_mm7_DeliverReq_REV_RecipientSPI(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->RecipientSPI;
  if (!y) return;
  x->RecipientSPI = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->RecipientSPI->g;
    x->RecipientSPI = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_RecipientSPI) */

void zx_mm7_DeliverReq_PUT_RecipientSPI(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->RecipientSPI;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->RecipientSPI = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_RecipientSPI) */

void zx_mm7_DeliverReq_ADD_RecipientSPI(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->RecipientSPI->g;
    x->RecipientSPI = z;
    return;
  case -1:
    y = x->RecipientSPI;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RecipientSPI; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_RecipientSPI) */

void zx_mm7_DeliverReq_DEL_RecipientSPI(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RecipientSPI = (struct zx_elem_s*)x->RecipientSPI->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->RecipientSPI;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->RecipientSPI; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_TimeStamp) */

int zx_mm7_DeliverReq_NUM_TimeStamp(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TimeStamp; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_TimeStamp) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_TimeStamp(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TimeStamp; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_TimeStamp) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_TimeStamp(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TimeStamp;
  if (y)
    x->TimeStamp = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_TimeStamp) */

void zx_mm7_DeliverReq_PUSH_TimeStamp(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TimeStamp->g;
  x->TimeStamp = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_TimeStamp) */

void zx_mm7_DeliverReq_REV_TimeStamp(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TimeStamp;
  if (!y) return;
  x->TimeStamp = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TimeStamp->g;
    x->TimeStamp = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_TimeStamp) */

void zx_mm7_DeliverReq_PUT_TimeStamp(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TimeStamp;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TimeStamp = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_TimeStamp) */

void zx_mm7_DeliverReq_ADD_TimeStamp(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TimeStamp->g;
    x->TimeStamp = z;
    return;
  case -1:
    y = x->TimeStamp;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_TimeStamp) */

void zx_mm7_DeliverReq_DEL_TimeStamp(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TimeStamp = (struct zx_elem_s*)x->TimeStamp->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TimeStamp;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_ReplyChargingID) */

int zx_mm7_DeliverReq_NUM_ReplyChargingID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyChargingID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_ReplyChargingID) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_ReplyChargingID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReplyChargingID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_ReplyChargingID) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_ReplyChargingID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReplyChargingID;
  if (y)
    x->ReplyChargingID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_ReplyChargingID) */

void zx_mm7_DeliverReq_PUSH_ReplyChargingID(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReplyChargingID->g;
  x->ReplyChargingID = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_ReplyChargingID) */

void zx_mm7_DeliverReq_REV_ReplyChargingID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReplyChargingID;
  if (!y) return;
  x->ReplyChargingID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReplyChargingID->g;
    x->ReplyChargingID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_ReplyChargingID) */

void zx_mm7_DeliverReq_PUT_ReplyChargingID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReplyChargingID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReplyChargingID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_ReplyChargingID) */

void zx_mm7_DeliverReq_ADD_ReplyChargingID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReplyChargingID->g;
    x->ReplyChargingID = z;
    return;
  case -1:
    y = x->ReplyChargingID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyChargingID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_ReplyChargingID) */

void zx_mm7_DeliverReq_DEL_ReplyChargingID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyChargingID = (struct zx_elem_s*)x->ReplyChargingID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReplyChargingID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyChargingID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_Priority) */

int zx_mm7_DeliverReq_NUM_Priority(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Priority; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_Priority) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_Priority(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Priority; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_Priority) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_Priority(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Priority;
  if (y)
    x->Priority = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_Priority) */

void zx_mm7_DeliverReq_PUSH_Priority(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Priority->g;
  x->Priority = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_Priority) */

void zx_mm7_DeliverReq_REV_Priority(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Priority;
  if (!y) return;
  x->Priority = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Priority->g;
    x->Priority = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_Priority) */

void zx_mm7_DeliverReq_PUT_Priority(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Priority;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Priority = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_Priority) */

void zx_mm7_DeliverReq_ADD_Priority(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Priority->g;
    x->Priority = z;
    return;
  case -1:
    y = x->Priority;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Priority; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_Priority) */

void zx_mm7_DeliverReq_DEL_Priority(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Priority = (struct zx_elem_s*)x->Priority->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Priority;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Priority; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_Subject) */

int zx_mm7_DeliverReq_NUM_Subject(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_Subject) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_Subject(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_Subject) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_Subject(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_Subject) */

void zx_mm7_DeliverReq_PUSH_Subject(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Subject->g;
  x->Subject = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_Subject) */

void zx_mm7_DeliverReq_REV_Subject(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Subject->g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_Subject) */

void zx_mm7_DeliverReq_PUT_Subject(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_Subject) */

void zx_mm7_DeliverReq_ADD_Subject(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Subject->g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_Subject) */

void zx_mm7_DeliverReq_DEL_Subject(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_elem_s*)x->Subject->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Subject;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_ApplicID) */

int zx_mm7_DeliverReq_NUM_ApplicID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_ApplicID) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_ApplicID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_ApplicID) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_ApplicID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ApplicID;
  if (y)
    x->ApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_ApplicID) */

void zx_mm7_DeliverReq_PUSH_ApplicID(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ApplicID->g;
  x->ApplicID = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_ApplicID) */

void zx_mm7_DeliverReq_REV_ApplicID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ApplicID;
  if (!y) return;
  x->ApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ApplicID->g;
    x->ApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_ApplicID) */

void zx_mm7_DeliverReq_PUT_ApplicID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_ApplicID) */

void zx_mm7_DeliverReq_ADD_ApplicID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ApplicID->g;
    x->ApplicID = z;
    return;
  case -1:
    y = x->ApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_ApplicID) */

void zx_mm7_DeliverReq_DEL_ApplicID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicID = (struct zx_elem_s*)x->ApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_ReplyApplicID) */

int zx_mm7_DeliverReq_NUM_ReplyApplicID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_ReplyApplicID) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_ReplyApplicID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReplyApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_ReplyApplicID) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_ReplyApplicID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReplyApplicID;
  if (y)
    x->ReplyApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_ReplyApplicID) */

void zx_mm7_DeliverReq_PUSH_ReplyApplicID(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReplyApplicID->g;
  x->ReplyApplicID = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_ReplyApplicID) */

void zx_mm7_DeliverReq_REV_ReplyApplicID(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReplyApplicID;
  if (!y) return;
  x->ReplyApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_ReplyApplicID) */

void zx_mm7_DeliverReq_PUT_ReplyApplicID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReplyApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReplyApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_ReplyApplicID) */

void zx_mm7_DeliverReq_ADD_ReplyApplicID(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = z;
    return;
  case -1:
    y = x->ReplyApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_ReplyApplicID) */

void zx_mm7_DeliverReq_DEL_ReplyApplicID(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyApplicID = (struct zx_elem_s*)x->ReplyApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReplyApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_AuxApplicInfo) */

int zx_mm7_DeliverReq_NUM_AuxApplicInfo(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_DeliverReq_GET_AuxApplicInfo(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_DeliverReq_POP_AuxApplicInfo(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuxApplicInfo;
  if (y)
    x->AuxApplicInfo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_AuxApplicInfo) */

void zx_mm7_DeliverReq_PUSH_AuxApplicInfo(struct zx_mm7_DeliverReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuxApplicInfo->g;
  x->AuxApplicInfo = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_AuxApplicInfo) */

void zx_mm7_DeliverReq_REV_AuxApplicInfo(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  x->AuxApplicInfo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_AuxApplicInfo) */

void zx_mm7_DeliverReq_PUT_AuxApplicInfo(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuxApplicInfo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_AuxApplicInfo) */

void zx_mm7_DeliverReq_ADD_AuxApplicInfo(struct zx_mm7_DeliverReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = z;
    return;
  case -1:
    y = x->AuxApplicInfo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_AuxApplicInfo) */

void zx_mm7_DeliverReq_DEL_AuxApplicInfo(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuxApplicInfo = (struct zx_elem_s*)x->AuxApplicInfo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuxApplicInfo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_UACapabilities) */

int zx_mm7_DeliverReq_NUM_UACapabilities(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_UACapabilities_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UACapabilities; y; ++n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_UACapabilities) */

struct zx_mm7_UACapabilities_s* zx_mm7_DeliverReq_GET_UACapabilities(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x) return 0;
  for (y = x->UACapabilities; n>=0 && y; --n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_UACapabilities) */

struct zx_mm7_UACapabilities_s* zx_mm7_DeliverReq_POP_UACapabilities(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x) return 0;
  y = x->UACapabilities;
  if (y)
    x->UACapabilities = (struct zx_mm7_UACapabilities_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_UACapabilities) */

void zx_mm7_DeliverReq_PUSH_UACapabilities(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_UACapabilities_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UACapabilities->gg.g;
  x->UACapabilities = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_UACapabilities) */

void zx_mm7_DeliverReq_REV_UACapabilities(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_UACapabilities_s* nxt;
  struct zx_mm7_UACapabilities_s* y;
  if (!x) return;
  y = x->UACapabilities;
  if (!y) return;
  x->UACapabilities = 0;
  while (y) {
    nxt = (struct zx_mm7_UACapabilities_s*)y->gg.g.n;
    y->gg.g.n = &x->UACapabilities->gg.g;
    x->UACapabilities = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_UACapabilities) */

void zx_mm7_DeliverReq_PUT_UACapabilities(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_UACapabilities_s* z)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x || !z) return;
  y = x->UACapabilities;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UACapabilities = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_UACapabilities) */

void zx_mm7_DeliverReq_ADD_UACapabilities(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_UACapabilities_s* z)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UACapabilities->gg.g;
    x->UACapabilities = z;
    return;
  case -1:
    y = x->UACapabilities;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UACapabilities; n > 1 && y; --n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_UACapabilities) */

void zx_mm7_DeliverReq_DEL_UACapabilities(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UACapabilities = (struct zx_mm7_UACapabilities_s*)x->UACapabilities->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_UACapabilities_s*)x->UACapabilities;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UACapabilities; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_Content) */

int zx_mm7_DeliverReq_NUM_Content(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Content_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Content; y; ++n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_Content) */

struct zx_mm7_Content_s* zx_mm7_DeliverReq_GET_Content(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Content_s* y;
  if (!x) return 0;
  for (y = x->Content; n>=0 && y; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_Content) */

struct zx_mm7_Content_s* zx_mm7_DeliverReq_POP_Content(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Content_s* y;
  if (!x) return 0;
  y = x->Content;
  if (y)
    x->Content = (struct zx_mm7_Content_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_Content) */

void zx_mm7_DeliverReq_PUSH_Content(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_Content_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Content->gg.g;
  x->Content = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_Content) */

void zx_mm7_DeliverReq_REV_Content(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_Content_s* nxt;
  struct zx_mm7_Content_s* y;
  if (!x) return;
  y = x->Content;
  if (!y) return;
  x->Content = 0;
  while (y) {
    nxt = (struct zx_mm7_Content_s*)y->gg.g.n;
    y->gg.g.n = &x->Content->gg.g;
    x->Content = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_Content) */

void zx_mm7_DeliverReq_PUT_Content(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Content_s* z)
{
  struct zx_mm7_Content_s* y;
  if (!x || !z) return;
  y = x->Content;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Content = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_Content) */

void zx_mm7_DeliverReq_ADD_Content(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_Content_s* z)
{
  struct zx_mm7_Content_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Content->gg.g;
    x->Content = z;
    return;
  case -1:
    y = x->Content;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Content; n > 1 && y; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_Content) */

void zx_mm7_DeliverReq_DEL_Content(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_Content_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Content = (struct zx_mm7_Content_s*)x->Content->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Content_s*)x->Content;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Content; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_AdditionalInformation) */

int zx_mm7_DeliverReq_NUM_AdditionalInformation(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AdditionalInformation; y; ++n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_AdditionalInformation) */

struct zx_mm7_AdditionalInformation_s* zx_mm7_DeliverReq_GET_AdditionalInformation(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return 0;
  for (y = x->AdditionalInformation; n>=0 && y; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_AdditionalInformation) */

struct zx_mm7_AdditionalInformation_s* zx_mm7_DeliverReq_POP_AdditionalInformation(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return 0;
  y = x->AdditionalInformation;
  if (y)
    x->AdditionalInformation = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_AdditionalInformation) */

void zx_mm7_DeliverReq_PUSH_AdditionalInformation(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_AdditionalInformation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AdditionalInformation->gg.g;
  x->AdditionalInformation = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_AdditionalInformation) */

void zx_mm7_DeliverReq_REV_AdditionalInformation(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* nxt;
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return;
  y = x->AdditionalInformation;
  if (!y) return;
  x->AdditionalInformation = 0;
  while (y) {
    nxt = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n;
    y->gg.g.n = &x->AdditionalInformation->gg.g;
    x->AdditionalInformation = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_AdditionalInformation) */

void zx_mm7_DeliverReq_PUT_AdditionalInformation(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_AdditionalInformation_s* z)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x || !z) return;
  y = x->AdditionalInformation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AdditionalInformation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_AdditionalInformation) */

void zx_mm7_DeliverReq_ADD_AdditionalInformation(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_AdditionalInformation_s* z)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AdditionalInformation->gg.g;
    x->AdditionalInformation = z;
    return;
  case -1:
    y = x->AdditionalInformation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalInformation; n > 1 && y; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_AdditionalInformation) */

void zx_mm7_DeliverReq_DEL_AdditionalInformation(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AdditionalInformation = (struct zx_mm7_AdditionalInformation_s*)x->AdditionalInformation->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_AdditionalInformation_s*)x->AdditionalInformation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalInformation; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverReq_NUM_MessageExtraData) */

int zx_mm7_DeliverReq_NUM_MessageExtraData(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageExtraData; y; ++n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverReq_GET_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_DeliverReq_GET_MessageExtraData(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  for (y = x->MessageExtraData; n>=0 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_POP_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_DeliverReq_POP_MessageExtraData(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  y = x->MessageExtraData;
  if (y)
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverReq_PUSH_MessageExtraData) */

void zx_mm7_DeliverReq_PUSH_MessageExtraData(struct zx_mm7_DeliverReq_s* x, struct zx_mm7_MessageExtraData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageExtraData->gg.g;
  x->MessageExtraData = z;
}

/* FUNC(zx_mm7_DeliverReq_REV_MessageExtraData) */

void zx_mm7_DeliverReq_REV_MessageExtraData(struct zx_mm7_DeliverReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* nxt;
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  y = x->MessageExtraData;
  if (!y) return;
  x->MessageExtraData = 0;
  while (y) {
    nxt = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverReq_PUT_MessageExtraData) */

void zx_mm7_DeliverReq_PUT_MessageExtraData(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  y = x->MessageExtraData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageExtraData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverReq_ADD_MessageExtraData) */

void zx_mm7_DeliverReq_ADD_MessageExtraData(struct zx_mm7_DeliverReq_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = z;
    return;
  case -1:
    y = x->MessageExtraData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverReq_DEL_MessageExtraData) */

void zx_mm7_DeliverReq_DEL_MessageExtraData(struct zx_mm7_DeliverReq_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverRsp_NUM_MM7Version) */

int zx_mm7_DeliverRsp_NUM_MM7Version(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_DeliverRsp_GET_MM7Version(struct zx_mm7_DeliverRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_DeliverRsp_POP_MM7Version(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverRsp_PUSH_MM7Version) */

void zx_mm7_DeliverRsp_PUSH_MM7Version(struct zx_mm7_DeliverRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_DeliverRsp_REV_MM7Version) */

void zx_mm7_DeliverRsp_REV_MM7Version(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverRsp_PUT_MM7Version) */

void zx_mm7_DeliverRsp_PUT_MM7Version(struct zx_mm7_DeliverRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliverRsp_ADD_MM7Version) */

void zx_mm7_DeliverRsp_ADD_MM7Version(struct zx_mm7_DeliverRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliverRsp_DEL_MM7Version) */

void zx_mm7_DeliverRsp_DEL_MM7Version(struct zx_mm7_DeliverRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverRsp_NUM_Status) */

int zx_mm7_DeliverRsp_NUM_Status(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_DeliverRsp_GET_Status(struct zx_mm7_DeliverRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_DeliverRsp_POP_Status(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverRsp_PUSH_Status) */

void zx_mm7_DeliverRsp_PUSH_Status(struct zx_mm7_DeliverRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_DeliverRsp_REV_Status) */

void zx_mm7_DeliverRsp_REV_Status(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverRsp_PUT_Status) */

void zx_mm7_DeliverRsp_PUT_Status(struct zx_mm7_DeliverRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverRsp_ADD_Status) */

void zx_mm7_DeliverRsp_ADD_Status(struct zx_mm7_DeliverRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverRsp_DEL_Status) */

void zx_mm7_DeliverRsp_DEL_Status(struct zx_mm7_DeliverRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverRsp_NUM_Extension) */

int zx_mm7_DeliverRsp_NUM_Extension(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverRsp_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_DeliverRsp_GET_Extension(struct zx_mm7_DeliverRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverRsp_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_DeliverRsp_POP_Extension(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverRsp_PUSH_Extension) */

void zx_mm7_DeliverRsp_PUSH_Extension(struct zx_mm7_DeliverRsp_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_DeliverRsp_REV_Extension) */

void zx_mm7_DeliverRsp_REV_Extension(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverRsp_PUT_Extension) */

void zx_mm7_DeliverRsp_PUT_Extension(struct zx_mm7_DeliverRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverRsp_ADD_Extension) */

void zx_mm7_DeliverRsp_ADD_Extension(struct zx_mm7_DeliverRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverRsp_DEL_Extension) */

void zx_mm7_DeliverRsp_DEL_Extension(struct zx_mm7_DeliverRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliverRsp_NUM_ServiceCode) */

int zx_mm7_DeliverRsp_NUM_ServiceCode(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_ServiceCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceCode; y; ++n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliverRsp_GET_ServiceCode) */

struct zx_mm7_ServiceCode_s* zx_mm7_DeliverRsp_GET_ServiceCode(struct zx_mm7_DeliverRsp_s* x, int n)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return 0;
  for (y = x->ServiceCode; n>=0 && y; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliverRsp_POP_ServiceCode) */

struct zx_mm7_ServiceCode_s* zx_mm7_DeliverRsp_POP_ServiceCode(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return 0;
  y = x->ServiceCode;
  if (y)
    x->ServiceCode = (struct zx_mm7_ServiceCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliverRsp_PUSH_ServiceCode) */

void zx_mm7_DeliverRsp_PUSH_ServiceCode(struct zx_mm7_DeliverRsp_s* x, struct zx_mm7_ServiceCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceCode->gg.g;
  x->ServiceCode = z;
}

/* FUNC(zx_mm7_DeliverRsp_REV_ServiceCode) */

void zx_mm7_DeliverRsp_REV_ServiceCode(struct zx_mm7_DeliverRsp_s* x)
{
  struct zx_mm7_ServiceCode_s* nxt;
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return;
  y = x->ServiceCode;
  if (!y) return;
  x->ServiceCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ServiceCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceCode->gg.g;
    x->ServiceCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliverRsp_PUT_ServiceCode) */

void zx_mm7_DeliverRsp_PUT_ServiceCode(struct zx_mm7_DeliverRsp_s* x, int n, struct zx_mm7_ServiceCode_s* z)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x || !z) return;
  y = x->ServiceCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliverRsp_ADD_ServiceCode) */

void zx_mm7_DeliverRsp_ADD_ServiceCode(struct zx_mm7_DeliverRsp_s* x, int n, struct zx_mm7_ServiceCode_s* z)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceCode->gg.g;
    x->ServiceCode = z;
    return;
  case -1:
    y = x->ServiceCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceCode; n > 1 && y; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliverRsp_DEL_ServiceCode) */

void zx_mm7_DeliverRsp_DEL_ServiceCode(struct zx_mm7_DeliverRsp_s* x, int n)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceCode = (struct zx_mm7_ServiceCode_s*)x->ServiceCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ServiceCode_s*)x->ServiceCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryCondition_NUM_DC) */

int zx_mm7_DeliveryCondition_NUM_DC(struct zx_mm7_DeliveryCondition_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DC; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryCondition_GET_DC) */

struct zx_elem_s* zx_mm7_DeliveryCondition_GET_DC(struct zx_mm7_DeliveryCondition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DC; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryCondition_POP_DC) */

struct zx_elem_s* zx_mm7_DeliveryCondition_POP_DC(struct zx_mm7_DeliveryCondition_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DC;
  if (y)
    x->DC = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryCondition_PUSH_DC) */

void zx_mm7_DeliveryCondition_PUSH_DC(struct zx_mm7_DeliveryCondition_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DC->g;
  x->DC = z;
}

/* FUNC(zx_mm7_DeliveryCondition_REV_DC) */

void zx_mm7_DeliveryCondition_REV_DC(struct zx_mm7_DeliveryCondition_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DC;
  if (!y) return;
  x->DC = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DC->g;
    x->DC = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryCondition_PUT_DC) */

void zx_mm7_DeliveryCondition_PUT_DC(struct zx_mm7_DeliveryCondition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DC;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DC = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryCondition_ADD_DC) */

void zx_mm7_DeliveryCondition_ADD_DC(struct zx_mm7_DeliveryCondition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DC->g;
    x->DC = z;
    return;
  case -1:
    y = x->DC;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DC; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryCondition_DEL_DC) */

void zx_mm7_DeliveryCondition_DEL_DC(struct zx_mm7_DeliveryCondition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DC = (struct zx_elem_s*)x->DC->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DC;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DC; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_MM7Version) */

int zx_mm7_DeliveryReportReq_NUM_MM7Version(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_MM7Version(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_MM7Version(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_MM7Version) */

void zx_mm7_DeliveryReportReq_PUSH_MM7Version(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_MM7Version) */

void zx_mm7_DeliveryReportReq_REV_MM7Version(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_MM7Version) */

void zx_mm7_DeliveryReportReq_PUT_MM7Version(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_MM7Version) */

void zx_mm7_DeliveryReportReq_ADD_MM7Version(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_MM7Version) */

void zx_mm7_DeliveryReportReq_DEL_MM7Version(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_MMSRelayServerID) */

int zx_mm7_DeliveryReportReq_NUM_MMSRelayServerID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MMSRelayServerID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_MMSRelayServerID) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_MMSRelayServerID(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MMSRelayServerID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_MMSRelayServerID) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_MMSRelayServerID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MMSRelayServerID;
  if (y)
    x->MMSRelayServerID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_MMSRelayServerID) */

void zx_mm7_DeliveryReportReq_PUSH_MMSRelayServerID(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MMSRelayServerID->g;
  x->MMSRelayServerID = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_MMSRelayServerID) */

void zx_mm7_DeliveryReportReq_REV_MMSRelayServerID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MMSRelayServerID;
  if (!y) return;
  x->MMSRelayServerID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MMSRelayServerID->g;
    x->MMSRelayServerID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_MMSRelayServerID) */

void zx_mm7_DeliveryReportReq_PUT_MMSRelayServerID(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MMSRelayServerID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MMSRelayServerID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_MMSRelayServerID) */

void zx_mm7_DeliveryReportReq_ADD_MMSRelayServerID(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MMSRelayServerID->g;
    x->MMSRelayServerID = z;
    return;
  case -1:
    y = x->MMSRelayServerID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMSRelayServerID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_MMSRelayServerID) */

void zx_mm7_DeliveryReportReq_DEL_MMSRelayServerID(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MMSRelayServerID = (struct zx_elem_s*)x->MMSRelayServerID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MMSRelayServerID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMSRelayServerID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_Extension) */

int zx_mm7_DeliveryReportReq_NUM_Extension(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_DeliveryReportReq_GET_Extension(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_DeliveryReportReq_POP_Extension(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_Extension) */

void zx_mm7_DeliveryReportReq_PUSH_Extension(struct zx_mm7_DeliveryReportReq_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_Extension) */

void zx_mm7_DeliveryReportReq_REV_Extension(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_Extension) */

void zx_mm7_DeliveryReportReq_PUT_Extension(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_Extension) */

void zx_mm7_DeliveryReportReq_ADD_Extension(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_Extension) */

void zx_mm7_DeliveryReportReq_DEL_Extension(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_MessageID) */

int zx_mm7_DeliveryReportReq_NUM_MessageID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_MessageID) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_MessageID(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_MessageID) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_MessageID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_MessageID) */

void zx_mm7_DeliveryReportReq_PUSH_MessageID(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageID->g;
  x->MessageID = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_MessageID) */

void zx_mm7_DeliveryReportReq_REV_MessageID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageID->g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_MessageID) */

void zx_mm7_DeliveryReportReq_PUT_MessageID(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_MessageID) */

void zx_mm7_DeliveryReportReq_ADD_MessageID(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageID->g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_MessageID) */

void zx_mm7_DeliveryReportReq_DEL_MessageID(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_elem_s*)x->MessageID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_Recipient) */

int zx_mm7_DeliveryReportReq_NUM_Recipient(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Recipient_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Recipient; y; ++n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_Recipient) */

struct zx_mm7_Recipient_s* zx_mm7_DeliveryReportReq_GET_Recipient(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_mm7_Recipient_s* y;
  if (!x) return 0;
  for (y = x->Recipient; n>=0 && y; --n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_Recipient) */

struct zx_mm7_Recipient_s* zx_mm7_DeliveryReportReq_POP_Recipient(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Recipient_s* y;
  if (!x) return 0;
  y = x->Recipient;
  if (y)
    x->Recipient = (struct zx_mm7_Recipient_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_Recipient) */

void zx_mm7_DeliveryReportReq_PUSH_Recipient(struct zx_mm7_DeliveryReportReq_s* x, struct zx_mm7_Recipient_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Recipient->gg.g;
  x->Recipient = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_Recipient) */

void zx_mm7_DeliveryReportReq_REV_Recipient(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Recipient_s* nxt;
  struct zx_mm7_Recipient_s* y;
  if (!x) return;
  y = x->Recipient;
  if (!y) return;
  x->Recipient = 0;
  while (y) {
    nxt = (struct zx_mm7_Recipient_s*)y->gg.g.n;
    y->gg.g.n = &x->Recipient->gg.g;
    x->Recipient = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_Recipient) */

void zx_mm7_DeliveryReportReq_PUT_Recipient(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_mm7_Recipient_s* z)
{
  struct zx_mm7_Recipient_s* y;
  if (!x || !z) return;
  y = x->Recipient;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Recipient = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_Recipient) */

void zx_mm7_DeliveryReportReq_ADD_Recipient(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_mm7_Recipient_s* z)
{
  struct zx_mm7_Recipient_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Recipient->gg.g;
    x->Recipient = z;
    return;
  case -1:
    y = x->Recipient;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipient; n > 1 && y; --n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_Recipient) */

void zx_mm7_DeliveryReportReq_DEL_Recipient(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_mm7_Recipient_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Recipient = (struct zx_mm7_Recipient_s*)x->Recipient->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Recipient_s*)x->Recipient;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipient; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_Sender) */

int zx_mm7_DeliveryReportReq_NUM_Sender(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Sender_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sender; y; ++n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_Sender) */

struct zx_mm7_Sender_s* zx_mm7_DeliveryReportReq_GET_Sender(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return 0;
  for (y = x->Sender; n>=0 && y; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_Sender) */

struct zx_mm7_Sender_s* zx_mm7_DeliveryReportReq_POP_Sender(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return 0;
  y = x->Sender;
  if (y)
    x->Sender = (struct zx_mm7_Sender_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_Sender) */

void zx_mm7_DeliveryReportReq_PUSH_Sender(struct zx_mm7_DeliveryReportReq_s* x, struct zx_mm7_Sender_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Sender->gg.g;
  x->Sender = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_Sender) */

void zx_mm7_DeliveryReportReq_REV_Sender(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_Sender_s* nxt;
  struct zx_mm7_Sender_s* y;
  if (!x) return;
  y = x->Sender;
  if (!y) return;
  x->Sender = 0;
  while (y) {
    nxt = (struct zx_mm7_Sender_s*)y->gg.g.n;
    y->gg.g.n = &x->Sender->gg.g;
    x->Sender = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_Sender) */

void zx_mm7_DeliveryReportReq_PUT_Sender(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_mm7_Sender_s* z)
{
  struct zx_mm7_Sender_s* y;
  if (!x || !z) return;
  y = x->Sender;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Sender = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_Sender) */

void zx_mm7_DeliveryReportReq_ADD_Sender(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_mm7_Sender_s* z)
{
  struct zx_mm7_Sender_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_Sender) */

void zx_mm7_DeliveryReportReq_DEL_Sender(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sender = (struct zx_mm7_Sender_s*)x->Sender->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Sender_s*)x->Sender;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_Date) */

int zx_mm7_DeliveryReportReq_NUM_Date(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Date; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_Date) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_Date(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Date; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_Date) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_Date(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Date;
  if (y)
    x->Date = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_Date) */

void zx_mm7_DeliveryReportReq_PUSH_Date(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Date->g;
  x->Date = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_Date) */

void zx_mm7_DeliveryReportReq_REV_Date(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Date;
  if (!y) return;
  x->Date = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Date->g;
    x->Date = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_Date) */

void zx_mm7_DeliveryReportReq_PUT_Date(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Date;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Date = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_Date) */

void zx_mm7_DeliveryReportReq_ADD_Date(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Date->g;
    x->Date = z;
    return;
  case -1:
    y = x->Date;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Date; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_Date) */

void zx_mm7_DeliveryReportReq_DEL_Date(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Date = (struct zx_elem_s*)x->Date->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Date;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Date; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_MMStatus) */

int zx_mm7_DeliveryReportReq_NUM_MMStatus(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MMStatus; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_MMStatus) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_MMStatus(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MMStatus; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_MMStatus) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_MMStatus(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MMStatus;
  if (y)
    x->MMStatus = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_MMStatus) */

void zx_mm7_DeliveryReportReq_PUSH_MMStatus(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MMStatus->g;
  x->MMStatus = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_MMStatus) */

void zx_mm7_DeliveryReportReq_REV_MMStatus(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MMStatus;
  if (!y) return;
  x->MMStatus = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MMStatus->g;
    x->MMStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_MMStatus) */

void zx_mm7_DeliveryReportReq_PUT_MMStatus(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MMStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MMStatus = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_MMStatus) */

void zx_mm7_DeliveryReportReq_ADD_MMStatus(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MMStatus->g;
    x->MMStatus = z;
    return;
  case -1:
    y = x->MMStatus;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMStatus; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_MMStatus) */

void zx_mm7_DeliveryReportReq_DEL_MMStatus(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MMStatus = (struct zx_elem_s*)x->MMStatus->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MMStatus;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMStatus; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_MMStatusExtension) */

int zx_mm7_DeliveryReportReq_NUM_MMStatusExtension(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MMStatusExtension; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_MMStatusExtension) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_MMStatusExtension(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MMStatusExtension; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_MMStatusExtension) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_MMStatusExtension(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MMStatusExtension;
  if (y)
    x->MMStatusExtension = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_MMStatusExtension) */

void zx_mm7_DeliveryReportReq_PUSH_MMStatusExtension(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MMStatusExtension->g;
  x->MMStatusExtension = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_MMStatusExtension) */

void zx_mm7_DeliveryReportReq_REV_MMStatusExtension(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MMStatusExtension;
  if (!y) return;
  x->MMStatusExtension = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MMStatusExtension->g;
    x->MMStatusExtension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_MMStatusExtension) */

void zx_mm7_DeliveryReportReq_PUT_MMStatusExtension(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MMStatusExtension;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MMStatusExtension = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_MMStatusExtension) */

void zx_mm7_DeliveryReportReq_ADD_MMStatusExtension(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MMStatusExtension->g;
    x->MMStatusExtension = z;
    return;
  case -1:
    y = x->MMStatusExtension;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMStatusExtension; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_MMStatusExtension) */

void zx_mm7_DeliveryReportReq_DEL_MMStatusExtension(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MMStatusExtension = (struct zx_elem_s*)x->MMStatusExtension->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MMStatusExtension;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMStatusExtension; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_StatusText) */

int zx_mm7_DeliveryReportReq_NUM_StatusText(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusText; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_StatusText) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_StatusText(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusText; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_StatusText) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_StatusText(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusText;
  if (y)
    x->StatusText = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_StatusText) */

void zx_mm7_DeliveryReportReq_PUSH_StatusText(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusText->g;
  x->StatusText = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_StatusText) */

void zx_mm7_DeliveryReportReq_REV_StatusText(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->StatusText;
  if (!y) return;
  x->StatusText = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->StatusText->g;
    x->StatusText = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_StatusText) */

void zx_mm7_DeliveryReportReq_PUT_StatusText(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->StatusText;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->StatusText = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_StatusText) */

void zx_mm7_DeliveryReportReq_ADD_StatusText(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->StatusText->g;
    x->StatusText = z;
    return;
  case -1:
    y = x->StatusText;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusText; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_StatusText) */

void zx_mm7_DeliveryReportReq_DEL_StatusText(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusText = (struct zx_elem_s*)x->StatusText->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->StatusText;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusText; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_ApplicID) */

int zx_mm7_DeliveryReportReq_NUM_ApplicID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_ApplicID) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_ApplicID(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_ApplicID) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_ApplicID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ApplicID;
  if (y)
    x->ApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_ApplicID) */

void zx_mm7_DeliveryReportReq_PUSH_ApplicID(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ApplicID->g;
  x->ApplicID = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_ApplicID) */

void zx_mm7_DeliveryReportReq_REV_ApplicID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ApplicID;
  if (!y) return;
  x->ApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ApplicID->g;
    x->ApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_ApplicID) */

void zx_mm7_DeliveryReportReq_PUT_ApplicID(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_ApplicID) */

void zx_mm7_DeliveryReportReq_ADD_ApplicID(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ApplicID->g;
    x->ApplicID = z;
    return;
  case -1:
    y = x->ApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_ApplicID) */

void zx_mm7_DeliveryReportReq_DEL_ApplicID(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicID = (struct zx_elem_s*)x->ApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_ReplyApplicID) */

int zx_mm7_DeliveryReportReq_NUM_ReplyApplicID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_ReplyApplicID) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_ReplyApplicID(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReplyApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_ReplyApplicID) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_ReplyApplicID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReplyApplicID;
  if (y)
    x->ReplyApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_ReplyApplicID) */

void zx_mm7_DeliveryReportReq_PUSH_ReplyApplicID(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReplyApplicID->g;
  x->ReplyApplicID = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_ReplyApplicID) */

void zx_mm7_DeliveryReportReq_REV_ReplyApplicID(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReplyApplicID;
  if (!y) return;
  x->ReplyApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_ReplyApplicID) */

void zx_mm7_DeliveryReportReq_PUT_ReplyApplicID(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReplyApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReplyApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_ReplyApplicID) */

void zx_mm7_DeliveryReportReq_ADD_ReplyApplicID(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = z;
    return;
  case -1:
    y = x->ReplyApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_ReplyApplicID) */

void zx_mm7_DeliveryReportReq_DEL_ReplyApplicID(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyApplicID = (struct zx_elem_s*)x->ReplyApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReplyApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_AuxApplicInfo) */

int zx_mm7_DeliveryReportReq_NUM_AuxApplicInfo(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_GET_AuxApplicInfo(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_DeliveryReportReq_POP_AuxApplicInfo(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuxApplicInfo;
  if (y)
    x->AuxApplicInfo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_AuxApplicInfo) */

void zx_mm7_DeliveryReportReq_PUSH_AuxApplicInfo(struct zx_mm7_DeliveryReportReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuxApplicInfo->g;
  x->AuxApplicInfo = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_AuxApplicInfo) */

void zx_mm7_DeliveryReportReq_REV_AuxApplicInfo(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  x->AuxApplicInfo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_AuxApplicInfo) */

void zx_mm7_DeliveryReportReq_PUT_AuxApplicInfo(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuxApplicInfo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_AuxApplicInfo) */

void zx_mm7_DeliveryReportReq_ADD_AuxApplicInfo(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = z;
    return;
  case -1:
    y = x->AuxApplicInfo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_AuxApplicInfo) */

void zx_mm7_DeliveryReportReq_DEL_AuxApplicInfo(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuxApplicInfo = (struct zx_elem_s*)x->AuxApplicInfo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuxApplicInfo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportReq_NUM_UACapabilities) */

int zx_mm7_DeliveryReportReq_NUM_UACapabilities(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_UACapabilities_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UACapabilities; y; ++n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportReq_GET_UACapabilities) */

struct zx_mm7_UACapabilities_s* zx_mm7_DeliveryReportReq_GET_UACapabilities(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x) return 0;
  for (y = x->UACapabilities; n>=0 && y; --n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_POP_UACapabilities) */

struct zx_mm7_UACapabilities_s* zx_mm7_DeliveryReportReq_POP_UACapabilities(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x) return 0;
  y = x->UACapabilities;
  if (y)
    x->UACapabilities = (struct zx_mm7_UACapabilities_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportReq_PUSH_UACapabilities) */

void zx_mm7_DeliveryReportReq_PUSH_UACapabilities(struct zx_mm7_DeliveryReportReq_s* x, struct zx_mm7_UACapabilities_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UACapabilities->gg.g;
  x->UACapabilities = z;
}

/* FUNC(zx_mm7_DeliveryReportReq_REV_UACapabilities) */

void zx_mm7_DeliveryReportReq_REV_UACapabilities(struct zx_mm7_DeliveryReportReq_s* x)
{
  struct zx_mm7_UACapabilities_s* nxt;
  struct zx_mm7_UACapabilities_s* y;
  if (!x) return;
  y = x->UACapabilities;
  if (!y) return;
  x->UACapabilities = 0;
  while (y) {
    nxt = (struct zx_mm7_UACapabilities_s*)y->gg.g.n;
    y->gg.g.n = &x->UACapabilities->gg.g;
    x->UACapabilities = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_PUT_UACapabilities) */

void zx_mm7_DeliveryReportReq_PUT_UACapabilities(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_mm7_UACapabilities_s* z)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x || !z) return;
  y = x->UACapabilities;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UACapabilities = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliveryReportReq_ADD_UACapabilities) */

void zx_mm7_DeliveryReportReq_ADD_UACapabilities(struct zx_mm7_DeliveryReportReq_s* x, int n, struct zx_mm7_UACapabilities_s* z)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UACapabilities->gg.g;
    x->UACapabilities = z;
    return;
  case -1:
    y = x->UACapabilities;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UACapabilities; n > 1 && y; --n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliveryReportReq_DEL_UACapabilities) */

void zx_mm7_DeliveryReportReq_DEL_UACapabilities(struct zx_mm7_DeliveryReportReq_s* x, int n)
{
  struct zx_mm7_UACapabilities_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UACapabilities = (struct zx_mm7_UACapabilities_s*)x->UACapabilities->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_UACapabilities_s*)x->UACapabilities;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UACapabilities; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_UACapabilities_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportRsp_NUM_MM7Version) */

int zx_mm7_DeliveryReportRsp_NUM_MM7Version(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_DeliveryReportRsp_GET_MM7Version(struct zx_mm7_DeliveryReportRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_DeliveryReportRsp_POP_MM7Version(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportRsp_PUSH_MM7Version) */

void zx_mm7_DeliveryReportRsp_PUSH_MM7Version(struct zx_mm7_DeliveryReportRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_DeliveryReportRsp_REV_MM7Version) */

void zx_mm7_DeliveryReportRsp_REV_MM7Version(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportRsp_PUT_MM7Version) */

void zx_mm7_DeliveryReportRsp_PUT_MM7Version(struct zx_mm7_DeliveryReportRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_DeliveryReportRsp_ADD_MM7Version) */

void zx_mm7_DeliveryReportRsp_ADD_MM7Version(struct zx_mm7_DeliveryReportRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_DeliveryReportRsp_DEL_MM7Version) */

void zx_mm7_DeliveryReportRsp_DEL_MM7Version(struct zx_mm7_DeliveryReportRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportRsp_NUM_Status) */

int zx_mm7_DeliveryReportRsp_NUM_Status(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_DeliveryReportRsp_GET_Status(struct zx_mm7_DeliveryReportRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_DeliveryReportRsp_POP_Status(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportRsp_PUSH_Status) */

void zx_mm7_DeliveryReportRsp_PUSH_Status(struct zx_mm7_DeliveryReportRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_DeliveryReportRsp_REV_Status) */

void zx_mm7_DeliveryReportRsp_REV_Status(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportRsp_PUT_Status) */

void zx_mm7_DeliveryReportRsp_PUT_Status(struct zx_mm7_DeliveryReportRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliveryReportRsp_ADD_Status) */

void zx_mm7_DeliveryReportRsp_ADD_Status(struct zx_mm7_DeliveryReportRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliveryReportRsp_DEL_Status) */

void zx_mm7_DeliveryReportRsp_DEL_Status(struct zx_mm7_DeliveryReportRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_DeliveryReportRsp_NUM_Extension) */

int zx_mm7_DeliveryReportRsp_NUM_Extension(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_DeliveryReportRsp_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_DeliveryReportRsp_GET_Extension(struct zx_mm7_DeliveryReportRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportRsp_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_DeliveryReportRsp_POP_Extension(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_DeliveryReportRsp_PUSH_Extension) */

void zx_mm7_DeliveryReportRsp_PUSH_Extension(struct zx_mm7_DeliveryReportRsp_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_DeliveryReportRsp_REV_Extension) */

void zx_mm7_DeliveryReportRsp_REV_Extension(struct zx_mm7_DeliveryReportRsp_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_DeliveryReportRsp_PUT_Extension) */

void zx_mm7_DeliveryReportRsp_PUT_Extension(struct zx_mm7_DeliveryReportRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_DeliveryReportRsp_ADD_Extension) */

void zx_mm7_DeliveryReportRsp_ADD_Extension(struct zx_mm7_DeliveryReportRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_DeliveryReportRsp_DEL_Extension) */

void zx_mm7_DeliveryReportRsp_DEL_Extension(struct zx_mm7_DeliveryReportRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif













#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Extension_NUM_IdentityAddressingToken) */

int zx_mm7_Extension_NUM_IdentityAddressingToken(struct zx_mm7_Extension_s* x)
{
  struct zx_mm7_IdentityAddressingToken_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IdentityAddressingToken; y; ++n, y = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Extension_GET_IdentityAddressingToken) */

struct zx_mm7_IdentityAddressingToken_s* zx_mm7_Extension_GET_IdentityAddressingToken(struct zx_mm7_Extension_s* x, int n)
{
  struct zx_mm7_IdentityAddressingToken_s* y;
  if (!x) return 0;
  for (y = x->IdentityAddressingToken; n>=0 && y; --n, y = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Extension_POP_IdentityAddressingToken) */

struct zx_mm7_IdentityAddressingToken_s* zx_mm7_Extension_POP_IdentityAddressingToken(struct zx_mm7_Extension_s* x)
{
  struct zx_mm7_IdentityAddressingToken_s* y;
  if (!x) return 0;
  y = x->IdentityAddressingToken;
  if (y)
    x->IdentityAddressingToken = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Extension_PUSH_IdentityAddressingToken) */

void zx_mm7_Extension_PUSH_IdentityAddressingToken(struct zx_mm7_Extension_s* x, struct zx_mm7_IdentityAddressingToken_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IdentityAddressingToken->gg.g;
  x->IdentityAddressingToken = z;
}

/* FUNC(zx_mm7_Extension_REV_IdentityAddressingToken) */

void zx_mm7_Extension_REV_IdentityAddressingToken(struct zx_mm7_Extension_s* x)
{
  struct zx_mm7_IdentityAddressingToken_s* nxt;
  struct zx_mm7_IdentityAddressingToken_s* y;
  if (!x) return;
  y = x->IdentityAddressingToken;
  if (!y) return;
  x->IdentityAddressingToken = 0;
  while (y) {
    nxt = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n;
    y->gg.g.n = &x->IdentityAddressingToken->gg.g;
    x->IdentityAddressingToken = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Extension_PUT_IdentityAddressingToken) */

void zx_mm7_Extension_PUT_IdentityAddressingToken(struct zx_mm7_Extension_s* x, int n, struct zx_mm7_IdentityAddressingToken_s* z)
{
  struct zx_mm7_IdentityAddressingToken_s* y;
  if (!x || !z) return;
  y = x->IdentityAddressingToken;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IdentityAddressingToken = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Extension_ADD_IdentityAddressingToken) */

void zx_mm7_Extension_ADD_IdentityAddressingToken(struct zx_mm7_Extension_s* x, int n, struct zx_mm7_IdentityAddressingToken_s* z)
{
  struct zx_mm7_IdentityAddressingToken_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IdentityAddressingToken->gg.g;
    x->IdentityAddressingToken = z;
    return;
  case -1:
    y = x->IdentityAddressingToken;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IdentityAddressingToken; n > 1 && y; --n, y = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Extension_DEL_IdentityAddressingToken) */

void zx_mm7_Extension_DEL_IdentityAddressingToken(struct zx_mm7_Extension_s* x, int n)
{
  struct zx_mm7_IdentityAddressingToken_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IdentityAddressingToken = (struct zx_mm7_IdentityAddressingToken_s*)x->IdentityAddressingToken->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_IdentityAddressingToken_s*)x->IdentityAddressingToken;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IdentityAddressingToken; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_IdentityAddressingToken_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Extension_NUM_MessageExtraData) */

int zx_mm7_Extension_NUM_MessageExtraData(struct zx_mm7_Extension_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageExtraData; y; ++n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Extension_GET_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_Extension_GET_MessageExtraData(struct zx_mm7_Extension_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  for (y = x->MessageExtraData; n>=0 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Extension_POP_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_Extension_POP_MessageExtraData(struct zx_mm7_Extension_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  y = x->MessageExtraData;
  if (y)
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Extension_PUSH_MessageExtraData) */

void zx_mm7_Extension_PUSH_MessageExtraData(struct zx_mm7_Extension_s* x, struct zx_mm7_MessageExtraData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageExtraData->gg.g;
  x->MessageExtraData = z;
}

/* FUNC(zx_mm7_Extension_REV_MessageExtraData) */

void zx_mm7_Extension_REV_MessageExtraData(struct zx_mm7_Extension_s* x)
{
  struct zx_mm7_MessageExtraData_s* nxt;
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  y = x->MessageExtraData;
  if (!y) return;
  x->MessageExtraData = 0;
  while (y) {
    nxt = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Extension_PUT_MessageExtraData) */

void zx_mm7_Extension_PUT_MessageExtraData(struct zx_mm7_Extension_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  y = x->MessageExtraData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageExtraData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Extension_ADD_MessageExtraData) */

void zx_mm7_Extension_ADD_MessageExtraData(struct zx_mm7_Extension_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = z;
    return;
  case -1:
    y = x->MessageExtraData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Extension_DEL_MessageExtraData) */

void zx_mm7_Extension_DEL_MessageExtraData(struct zx_mm7_Extension_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_IdentityAddressingToken_NUM_CredentialRef) */

int zx_mm7_IdentityAddressingToken_NUM_CredentialRef(struct zx_mm7_IdentityAddressingToken_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CredentialRef; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_IdentityAddressingToken_GET_CredentialRef) */

struct zx_elem_s* zx_mm7_IdentityAddressingToken_GET_CredentialRef(struct zx_mm7_IdentityAddressingToken_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CredentialRef; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_IdentityAddressingToken_POP_CredentialRef) */

struct zx_elem_s* zx_mm7_IdentityAddressingToken_POP_CredentialRef(struct zx_mm7_IdentityAddressingToken_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CredentialRef;
  if (y)
    x->CredentialRef = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_IdentityAddressingToken_PUSH_CredentialRef) */

void zx_mm7_IdentityAddressingToken_PUSH_CredentialRef(struct zx_mm7_IdentityAddressingToken_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CredentialRef->g;
  x->CredentialRef = z;
}

/* FUNC(zx_mm7_IdentityAddressingToken_REV_CredentialRef) */

void zx_mm7_IdentityAddressingToken_REV_CredentialRef(struct zx_mm7_IdentityAddressingToken_s* x)
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

/* FUNC(zx_mm7_IdentityAddressingToken_PUT_CredentialRef) */

void zx_mm7_IdentityAddressingToken_PUT_CredentialRef(struct zx_mm7_IdentityAddressingToken_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_mm7_IdentityAddressingToken_ADD_CredentialRef) */

void zx_mm7_IdentityAddressingToken_ADD_CredentialRef(struct zx_mm7_IdentityAddressingToken_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_mm7_IdentityAddressingToken_DEL_CredentialRef) */

void zx_mm7_IdentityAddressingToken_DEL_CredentialRef(struct zx_mm7_IdentityAddressingToken_s* x, int n)
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

/* FUNC(zx_mm7_MessageExtraData_NUM_element) */

int zx_mm7_MessageExtraData_NUM_element(struct zx_mm7_MessageExtraData_s* x)
{
  struct zx_mm7_element_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->element; y; ++n, y = (struct zx_mm7_element_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_MessageExtraData_GET_element) */

struct zx_mm7_element_s* zx_mm7_MessageExtraData_GET_element(struct zx_mm7_MessageExtraData_s* x, int n)
{
  struct zx_mm7_element_s* y;
  if (!x) return 0;
  for (y = x->element; n>=0 && y; --n, y = (struct zx_mm7_element_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_MessageExtraData_POP_element) */

struct zx_mm7_element_s* zx_mm7_MessageExtraData_POP_element(struct zx_mm7_MessageExtraData_s* x)
{
  struct zx_mm7_element_s* y;
  if (!x) return 0;
  y = x->element;
  if (y)
    x->element = (struct zx_mm7_element_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_MessageExtraData_PUSH_element) */

void zx_mm7_MessageExtraData_PUSH_element(struct zx_mm7_MessageExtraData_s* x, struct zx_mm7_element_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->element->gg.g;
  x->element = z;
}

/* FUNC(zx_mm7_MessageExtraData_REV_element) */

void zx_mm7_MessageExtraData_REV_element(struct zx_mm7_MessageExtraData_s* x)
{
  struct zx_mm7_element_s* nxt;
  struct zx_mm7_element_s* y;
  if (!x) return;
  y = x->element;
  if (!y) return;
  x->element = 0;
  while (y) {
    nxt = (struct zx_mm7_element_s*)y->gg.g.n;
    y->gg.g.n = &x->element->gg.g;
    x->element = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_MessageExtraData_PUT_element) */

void zx_mm7_MessageExtraData_PUT_element(struct zx_mm7_MessageExtraData_s* x, int n, struct zx_mm7_element_s* z)
{
  struct zx_mm7_element_s* y;
  if (!x || !z) return;
  y = x->element;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->element = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_element_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_MessageExtraData_ADD_element) */

void zx_mm7_MessageExtraData_ADD_element(struct zx_mm7_MessageExtraData_s* x, int n, struct zx_mm7_element_s* z)
{
  struct zx_mm7_element_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->element->gg.g;
    x->element = z;
    return;
  case -1:
    y = x->element;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_element_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->element; n > 1 && y; --n, y = (struct zx_mm7_element_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_MessageExtraData_DEL_element) */

void zx_mm7_MessageExtraData_DEL_element(struct zx_mm7_MessageExtraData_s* x, int n)
{
  struct zx_mm7_element_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->element = (struct zx_mm7_element_s*)x->element->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_element_s*)x->element;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_element_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->element; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_element_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_mm7_Number_GET_addressCoding) */
struct zx_str* zx_mm7_Number_GET_addressCoding(struct zx_mm7_Number_s* x) { return x->addressCoding; }
/* FUNC(zx_mm7_Number_PUT_addressCoding) */
void zx_mm7_Number_PUT_addressCoding(struct zx_mm7_Number_s* x, struct zx_str* y) { x->addressCoding = y; }
/* FUNC(zx_mm7_Number_GET_displayOnly) */
struct zx_str* zx_mm7_Number_GET_displayOnly(struct zx_mm7_Number_s* x) { return x->displayOnly; }
/* FUNC(zx_mm7_Number_PUT_displayOnly) */
void zx_mm7_Number_PUT_displayOnly(struct zx_mm7_Number_s* x, struct zx_str* y) { x->displayOnly = y; }
/* FUNC(zx_mm7_Number_GET_id) */
struct zx_str* zx_mm7_Number_GET_id(struct zx_mm7_Number_s* x) { return x->id; }
/* FUNC(zx_mm7_Number_PUT_id) */
void zx_mm7_Number_PUT_id(struct zx_mm7_Number_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_PreferredChannels_NUM_DeliverUsing) */

int zx_mm7_PreferredChannels_NUM_DeliverUsing(struct zx_mm7_PreferredChannels_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeliverUsing; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_PreferredChannels_GET_DeliverUsing) */

struct zx_elem_s* zx_mm7_PreferredChannels_GET_DeliverUsing(struct zx_mm7_PreferredChannels_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DeliverUsing; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_PreferredChannels_POP_DeliverUsing) */

struct zx_elem_s* zx_mm7_PreferredChannels_POP_DeliverUsing(struct zx_mm7_PreferredChannels_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DeliverUsing;
  if (y)
    x->DeliverUsing = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_PreferredChannels_PUSH_DeliverUsing) */

void zx_mm7_PreferredChannels_PUSH_DeliverUsing(struct zx_mm7_PreferredChannels_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DeliverUsing->g;
  x->DeliverUsing = z;
}

/* FUNC(zx_mm7_PreferredChannels_REV_DeliverUsing) */

void zx_mm7_PreferredChannels_REV_DeliverUsing(struct zx_mm7_PreferredChannels_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DeliverUsing;
  if (!y) return;
  x->DeliverUsing = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DeliverUsing->g;
    x->DeliverUsing = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_PreferredChannels_PUT_DeliverUsing) */

void zx_mm7_PreferredChannels_PUT_DeliverUsing(struct zx_mm7_PreferredChannels_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DeliverUsing;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DeliverUsing = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_PreferredChannels_ADD_DeliverUsing) */

void zx_mm7_PreferredChannels_ADD_DeliverUsing(struct zx_mm7_PreferredChannels_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DeliverUsing->g;
    x->DeliverUsing = z;
    return;
  case -1:
    y = x->DeliverUsing;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DeliverUsing; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_PreferredChannels_DEL_DeliverUsing) */

void zx_mm7_PreferredChannels_DEL_DeliverUsing(struct zx_mm7_PreferredChannels_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeliverUsing = (struct zx_elem_s*)x->DeliverUsing->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DeliverUsing;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DeliverUsing; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Previouslysentby_NUM_UserAgent) */

int zx_mm7_Previouslysentby_NUM_UserAgent(struct zx_mm7_Previouslysentby_s* x)
{
  struct zx_mm7_UserAgent_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UserAgent; y; ++n, y = (struct zx_mm7_UserAgent_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Previouslysentby_GET_UserAgent) */

struct zx_mm7_UserAgent_s* zx_mm7_Previouslysentby_GET_UserAgent(struct zx_mm7_Previouslysentby_s* x, int n)
{
  struct zx_mm7_UserAgent_s* y;
  if (!x) return 0;
  for (y = x->UserAgent; n>=0 && y; --n, y = (struct zx_mm7_UserAgent_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Previouslysentby_POP_UserAgent) */

struct zx_mm7_UserAgent_s* zx_mm7_Previouslysentby_POP_UserAgent(struct zx_mm7_Previouslysentby_s* x)
{
  struct zx_mm7_UserAgent_s* y;
  if (!x) return 0;
  y = x->UserAgent;
  if (y)
    x->UserAgent = (struct zx_mm7_UserAgent_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Previouslysentby_PUSH_UserAgent) */

void zx_mm7_Previouslysentby_PUSH_UserAgent(struct zx_mm7_Previouslysentby_s* x, struct zx_mm7_UserAgent_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UserAgent->gg.g;
  x->UserAgent = z;
}

/* FUNC(zx_mm7_Previouslysentby_REV_UserAgent) */

void zx_mm7_Previouslysentby_REV_UserAgent(struct zx_mm7_Previouslysentby_s* x)
{
  struct zx_mm7_UserAgent_s* nxt;
  struct zx_mm7_UserAgent_s* y;
  if (!x) return;
  y = x->UserAgent;
  if (!y) return;
  x->UserAgent = 0;
  while (y) {
    nxt = (struct zx_mm7_UserAgent_s*)y->gg.g.n;
    y->gg.g.n = &x->UserAgent->gg.g;
    x->UserAgent = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Previouslysentby_PUT_UserAgent) */

void zx_mm7_Previouslysentby_PUT_UserAgent(struct zx_mm7_Previouslysentby_s* x, int n, struct zx_mm7_UserAgent_s* z)
{
  struct zx_mm7_UserAgent_s* y;
  if (!x || !z) return;
  y = x->UserAgent;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UserAgent = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_UserAgent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Previouslysentby_ADD_UserAgent) */

void zx_mm7_Previouslysentby_ADD_UserAgent(struct zx_mm7_Previouslysentby_s* x, int n, struct zx_mm7_UserAgent_s* z)
{
  struct zx_mm7_UserAgent_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UserAgent->gg.g;
    x->UserAgent = z;
    return;
  case -1:
    y = x->UserAgent;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_UserAgent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UserAgent; n > 1 && y; --n, y = (struct zx_mm7_UserAgent_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Previouslysentby_DEL_UserAgent) */

void zx_mm7_Previouslysentby_DEL_UserAgent(struct zx_mm7_Previouslysentby_s* x, int n)
{
  struct zx_mm7_UserAgent_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UserAgent = (struct zx_mm7_UserAgent_s*)x->UserAgent->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_UserAgent_s*)x->UserAgent;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_UserAgent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UserAgent; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_UserAgent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Previouslysentdateandtime_NUM_DateTime) */

int zx_mm7_Previouslysentdateandtime_NUM_DateTime(struct zx_mm7_Previouslysentdateandtime_s* x)
{
  struct zx_mm7_DateTime_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DateTime; y; ++n, y = (struct zx_mm7_DateTime_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Previouslysentdateandtime_GET_DateTime) */

struct zx_mm7_DateTime_s* zx_mm7_Previouslysentdateandtime_GET_DateTime(struct zx_mm7_Previouslysentdateandtime_s* x, int n)
{
  struct zx_mm7_DateTime_s* y;
  if (!x) return 0;
  for (y = x->DateTime; n>=0 && y; --n, y = (struct zx_mm7_DateTime_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Previouslysentdateandtime_POP_DateTime) */

struct zx_mm7_DateTime_s* zx_mm7_Previouslysentdateandtime_POP_DateTime(struct zx_mm7_Previouslysentdateandtime_s* x)
{
  struct zx_mm7_DateTime_s* y;
  if (!x) return 0;
  y = x->DateTime;
  if (y)
    x->DateTime = (struct zx_mm7_DateTime_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Previouslysentdateandtime_PUSH_DateTime) */

void zx_mm7_Previouslysentdateandtime_PUSH_DateTime(struct zx_mm7_Previouslysentdateandtime_s* x, struct zx_mm7_DateTime_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DateTime->gg.g;
  x->DateTime = z;
}

/* FUNC(zx_mm7_Previouslysentdateandtime_REV_DateTime) */

void zx_mm7_Previouslysentdateandtime_REV_DateTime(struct zx_mm7_Previouslysentdateandtime_s* x)
{
  struct zx_mm7_DateTime_s* nxt;
  struct zx_mm7_DateTime_s* y;
  if (!x) return;
  y = x->DateTime;
  if (!y) return;
  x->DateTime = 0;
  while (y) {
    nxt = (struct zx_mm7_DateTime_s*)y->gg.g.n;
    y->gg.g.n = &x->DateTime->gg.g;
    x->DateTime = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Previouslysentdateandtime_PUT_DateTime) */

void zx_mm7_Previouslysentdateandtime_PUT_DateTime(struct zx_mm7_Previouslysentdateandtime_s* x, int n, struct zx_mm7_DateTime_s* z)
{
  struct zx_mm7_DateTime_s* y;
  if (!x || !z) return;
  y = x->DateTime;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DateTime = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DateTime_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Previouslysentdateandtime_ADD_DateTime) */

void zx_mm7_Previouslysentdateandtime_ADD_DateTime(struct zx_mm7_Previouslysentdateandtime_s* x, int n, struct zx_mm7_DateTime_s* z)
{
  struct zx_mm7_DateTime_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DateTime->gg.g;
    x->DateTime = z;
    return;
  case -1:
    y = x->DateTime;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_DateTime_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DateTime; n > 1 && y; --n, y = (struct zx_mm7_DateTime_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Previouslysentdateandtime_DEL_DateTime) */

void zx_mm7_Previouslysentdateandtime_DEL_DateTime(struct zx_mm7_Previouslysentdateandtime_s* x, int n)
{
  struct zx_mm7_DateTime_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DateTime = (struct zx_mm7_DateTime_s*)x->DateTime->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_DateTime_s*)x->DateTime;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_DateTime_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DateTime; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DateTime_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusReq_NUM_TransactionID) */

int zx_mm7_QueryStatusReq_NUM_TransactionID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_mm7_TransactionID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TransactionID; y; ++n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusReq_GET_TransactionID) */

struct zx_mm7_TransactionID_s* zx_mm7_QueryStatusReq_GET_TransactionID(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return 0;
  for (y = x->TransactionID; n>=0 && y; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_POP_TransactionID) */

struct zx_mm7_TransactionID_s* zx_mm7_QueryStatusReq_POP_TransactionID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return 0;
  y = x->TransactionID;
  if (y)
    x->TransactionID = (struct zx_mm7_TransactionID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_PUSH_TransactionID) */

void zx_mm7_QueryStatusReq_PUSH_TransactionID(struct zx_mm7_QueryStatusReq_s* x, struct zx_mm7_TransactionID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TransactionID->gg.g;
  x->TransactionID = z;
}

/* FUNC(zx_mm7_QueryStatusReq_REV_TransactionID) */

void zx_mm7_QueryStatusReq_REV_TransactionID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_mm7_TransactionID_s* nxt;
  struct zx_mm7_TransactionID_s* y;
  if (!x) return;
  y = x->TransactionID;
  if (!y) return;
  x->TransactionID = 0;
  while (y) {
    nxt = (struct zx_mm7_TransactionID_s*)y->gg.g.n;
    y->gg.g.n = &x->TransactionID->gg.g;
    x->TransactionID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_PUT_TransactionID) */

void zx_mm7_QueryStatusReq_PUT_TransactionID(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_mm7_TransactionID_s* z)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x || !z) return;
  y = x->TransactionID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TransactionID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_ADD_TransactionID) */

void zx_mm7_QueryStatusReq_ADD_TransactionID(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_mm7_TransactionID_s* z)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TransactionID->gg.g;
    x->TransactionID = z;
    return;
  case -1:
    y = x->TransactionID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TransactionID; n > 1 && y; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_QueryStatusReq_DEL_TransactionID) */

void zx_mm7_QueryStatusReq_DEL_TransactionID(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TransactionID = (struct zx_mm7_TransactionID_s*)x->TransactionID->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_TransactionID_s*)x->TransactionID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TransactionID; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusReq_NUM_MessageType) */

int zx_mm7_QueryStatusReq_NUM_MessageType(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusReq_GET_MessageType) */

struct zx_elem_s* zx_mm7_QueryStatusReq_GET_MessageType(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_POP_MessageType) */

struct zx_elem_s* zx_mm7_QueryStatusReq_POP_MessageType(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageType;
  if (y)
    x->MessageType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_PUSH_MessageType) */

void zx_mm7_QueryStatusReq_PUSH_MessageType(struct zx_mm7_QueryStatusReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageType->g;
  x->MessageType = z;
}

/* FUNC(zx_mm7_QueryStatusReq_REV_MessageType) */

void zx_mm7_QueryStatusReq_REV_MessageType(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageType;
  if (!y) return;
  x->MessageType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageType->g;
    x->MessageType = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_PUT_MessageType) */

void zx_mm7_QueryStatusReq_PUT_MessageType(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_ADD_MessageType) */

void zx_mm7_QueryStatusReq_ADD_MessageType(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageType->g;
    x->MessageType = z;
    return;
  case -1:
    y = x->MessageType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusReq_DEL_MessageType) */

void zx_mm7_QueryStatusReq_DEL_MessageType(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageType = (struct zx_elem_s*)x->MessageType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusReq_NUM_MM7Version) */

int zx_mm7_QueryStatusReq_NUM_MM7Version(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_QueryStatusReq_GET_MM7Version(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_QueryStatusReq_POP_MM7Version(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_PUSH_MM7Version) */

void zx_mm7_QueryStatusReq_PUSH_MM7Version(struct zx_mm7_QueryStatusReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_QueryStatusReq_REV_MM7Version) */

void zx_mm7_QueryStatusReq_REV_MM7Version(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_PUT_MM7Version) */

void zx_mm7_QueryStatusReq_PUT_MM7Version(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_ADD_MM7Version) */

void zx_mm7_QueryStatusReq_ADD_MM7Version(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusReq_DEL_MM7Version) */

void zx_mm7_QueryStatusReq_DEL_MM7Version(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusReq_NUM_VASPID) */

int zx_mm7_QueryStatusReq_NUM_VASPID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASPID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusReq_GET_VASPID) */

struct zx_elem_s* zx_mm7_QueryStatusReq_GET_VASPID(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VASPID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_POP_VASPID) */

struct zx_elem_s* zx_mm7_QueryStatusReq_POP_VASPID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VASPID;
  if (y)
    x->VASPID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_PUSH_VASPID) */

void zx_mm7_QueryStatusReq_PUSH_VASPID(struct zx_mm7_QueryStatusReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VASPID->g;
  x->VASPID = z;
}

/* FUNC(zx_mm7_QueryStatusReq_REV_VASPID) */

void zx_mm7_QueryStatusReq_REV_VASPID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VASPID;
  if (!y) return;
  x->VASPID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VASPID->g;
    x->VASPID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_PUT_VASPID) */

void zx_mm7_QueryStatusReq_PUT_VASPID(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VASPID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VASPID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_ADD_VASPID) */

void zx_mm7_QueryStatusReq_ADD_VASPID(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VASPID->g;
    x->VASPID = z;
    return;
  case -1:
    y = x->VASPID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASPID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusReq_DEL_VASPID) */

void zx_mm7_QueryStatusReq_DEL_VASPID(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASPID = (struct zx_elem_s*)x->VASPID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VASPID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASPID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusReq_NUM_VASID) */

int zx_mm7_QueryStatusReq_NUM_VASID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusReq_GET_VASID) */

struct zx_elem_s* zx_mm7_QueryStatusReq_GET_VASID(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VASID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_POP_VASID) */

struct zx_elem_s* zx_mm7_QueryStatusReq_POP_VASID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VASID;
  if (y)
    x->VASID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_PUSH_VASID) */

void zx_mm7_QueryStatusReq_PUSH_VASID(struct zx_mm7_QueryStatusReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VASID->g;
  x->VASID = z;
}

/* FUNC(zx_mm7_QueryStatusReq_REV_VASID) */

void zx_mm7_QueryStatusReq_REV_VASID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VASID;
  if (!y) return;
  x->VASID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VASID->g;
    x->VASID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_PUT_VASID) */

void zx_mm7_QueryStatusReq_PUT_VASID(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VASID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VASID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_ADD_VASID) */

void zx_mm7_QueryStatusReq_ADD_VASID(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VASID->g;
    x->VASID = z;
    return;
  case -1:
    y = x->VASID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusReq_DEL_VASID) */

void zx_mm7_QueryStatusReq_DEL_VASID(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASID = (struct zx_elem_s*)x->VASID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VASID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusReq_NUM_MessageID) */

int zx_mm7_QueryStatusReq_NUM_MessageID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusReq_GET_MessageID) */

struct zx_elem_s* zx_mm7_QueryStatusReq_GET_MessageID(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_POP_MessageID) */

struct zx_elem_s* zx_mm7_QueryStatusReq_POP_MessageID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusReq_PUSH_MessageID) */

void zx_mm7_QueryStatusReq_PUSH_MessageID(struct zx_mm7_QueryStatusReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageID->g;
  x->MessageID = z;
}

/* FUNC(zx_mm7_QueryStatusReq_REV_MessageID) */

void zx_mm7_QueryStatusReq_REV_MessageID(struct zx_mm7_QueryStatusReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageID->g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_PUT_MessageID) */

void zx_mm7_QueryStatusReq_PUT_MessageID(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusReq_ADD_MessageID) */

void zx_mm7_QueryStatusReq_ADD_MessageID(struct zx_mm7_QueryStatusReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageID->g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusReq_DEL_MessageID) */

void zx_mm7_QueryStatusReq_DEL_MessageID(struct zx_mm7_QueryStatusReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_elem_s*)x->MessageID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusRsp_NUM_TransactionID) */

int zx_mm7_QueryStatusRsp_NUM_TransactionID(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_mm7_TransactionID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TransactionID; y; ++n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusRsp_GET_TransactionID) */

struct zx_mm7_TransactionID_s* zx_mm7_QueryStatusRsp_GET_TransactionID(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return 0;
  for (y = x->TransactionID; n>=0 && y; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_POP_TransactionID) */

struct zx_mm7_TransactionID_s* zx_mm7_QueryStatusRsp_POP_TransactionID(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return 0;
  y = x->TransactionID;
  if (y)
    x->TransactionID = (struct zx_mm7_TransactionID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_PUSH_TransactionID) */

void zx_mm7_QueryStatusRsp_PUSH_TransactionID(struct zx_mm7_QueryStatusRsp_s* x, struct zx_mm7_TransactionID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TransactionID->gg.g;
  x->TransactionID = z;
}

/* FUNC(zx_mm7_QueryStatusRsp_REV_TransactionID) */

void zx_mm7_QueryStatusRsp_REV_TransactionID(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_mm7_TransactionID_s* nxt;
  struct zx_mm7_TransactionID_s* y;
  if (!x) return;
  y = x->TransactionID;
  if (!y) return;
  x->TransactionID = 0;
  while (y) {
    nxt = (struct zx_mm7_TransactionID_s*)y->gg.g.n;
    y->gg.g.n = &x->TransactionID->gg.g;
    x->TransactionID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_PUT_TransactionID) */

void zx_mm7_QueryStatusRsp_PUT_TransactionID(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_mm7_TransactionID_s* z)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x || !z) return;
  y = x->TransactionID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TransactionID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_ADD_TransactionID) */

void zx_mm7_QueryStatusRsp_ADD_TransactionID(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_mm7_TransactionID_s* z)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TransactionID->gg.g;
    x->TransactionID = z;
    return;
  case -1:
    y = x->TransactionID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TransactionID; n > 1 && y; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_QueryStatusRsp_DEL_TransactionID) */

void zx_mm7_QueryStatusRsp_DEL_TransactionID(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TransactionID = (struct zx_mm7_TransactionID_s*)x->TransactionID->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_TransactionID_s*)x->TransactionID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TransactionID; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusRsp_NUM_MessageType) */

int zx_mm7_QueryStatusRsp_NUM_MessageType(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageType; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusRsp_GET_MessageType) */

struct zx_elem_s* zx_mm7_QueryStatusRsp_GET_MessageType(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageType; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_POP_MessageType) */

struct zx_elem_s* zx_mm7_QueryStatusRsp_POP_MessageType(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageType;
  if (y)
    x->MessageType = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_PUSH_MessageType) */

void zx_mm7_QueryStatusRsp_PUSH_MessageType(struct zx_mm7_QueryStatusRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageType->g;
  x->MessageType = z;
}

/* FUNC(zx_mm7_QueryStatusRsp_REV_MessageType) */

void zx_mm7_QueryStatusRsp_REV_MessageType(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageType;
  if (!y) return;
  x->MessageType = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageType->g;
    x->MessageType = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_PUT_MessageType) */

void zx_mm7_QueryStatusRsp_PUT_MessageType(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageType;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageType = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_ADD_MessageType) */

void zx_mm7_QueryStatusRsp_ADD_MessageType(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageType->g;
    x->MessageType = z;
    return;
  case -1:
    y = x->MessageType;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageType; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusRsp_DEL_MessageType) */

void zx_mm7_QueryStatusRsp_DEL_MessageType(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageType = (struct zx_elem_s*)x->MessageType->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageType;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageType; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusRsp_NUM_MM7Version) */

int zx_mm7_QueryStatusRsp_NUM_MM7Version(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_QueryStatusRsp_GET_MM7Version(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_QueryStatusRsp_POP_MM7Version(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_PUSH_MM7Version) */

void zx_mm7_QueryStatusRsp_PUSH_MM7Version(struct zx_mm7_QueryStatusRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_QueryStatusRsp_REV_MM7Version) */

void zx_mm7_QueryStatusRsp_REV_MM7Version(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_PUT_MM7Version) */

void zx_mm7_QueryStatusRsp_PUT_MM7Version(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_ADD_MM7Version) */

void zx_mm7_QueryStatusRsp_ADD_MM7Version(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusRsp_DEL_MM7Version) */

void zx_mm7_QueryStatusRsp_DEL_MM7Version(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusRsp_NUM_StatusCode) */

int zx_mm7_QueryStatusRsp_NUM_StatusCode(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusRsp_GET_StatusCode) */

struct zx_elem_s* zx_mm7_QueryStatusRsp_GET_StatusCode(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_POP_StatusCode) */

struct zx_elem_s* zx_mm7_QueryStatusRsp_POP_StatusCode(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_PUSH_StatusCode) */

void zx_mm7_QueryStatusRsp_PUSH_StatusCode(struct zx_mm7_QueryStatusRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusCode->g;
  x->StatusCode = z;
}

/* FUNC(zx_mm7_QueryStatusRsp_REV_StatusCode) */

void zx_mm7_QueryStatusRsp_REV_StatusCode(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->StatusCode->g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_PUT_StatusCode) */

void zx_mm7_QueryStatusRsp_PUT_StatusCode(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_ADD_StatusCode) */

void zx_mm7_QueryStatusRsp_ADD_StatusCode(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->StatusCode->g;
    x->StatusCode = z;
    return;
  case -1:
    y = x->StatusCode;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusRsp_DEL_StatusCode) */

void zx_mm7_QueryStatusRsp_DEL_StatusCode(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_elem_s*)x->StatusCode->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->StatusCode;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusRsp_NUM_StatusText) */

int zx_mm7_QueryStatusRsp_NUM_StatusText(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusText; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusRsp_GET_StatusText) */

struct zx_elem_s* zx_mm7_QueryStatusRsp_GET_StatusText(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusText; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_POP_StatusText) */

struct zx_elem_s* zx_mm7_QueryStatusRsp_POP_StatusText(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusText;
  if (y)
    x->StatusText = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_PUSH_StatusText) */

void zx_mm7_QueryStatusRsp_PUSH_StatusText(struct zx_mm7_QueryStatusRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusText->g;
  x->StatusText = z;
}

/* FUNC(zx_mm7_QueryStatusRsp_REV_StatusText) */

void zx_mm7_QueryStatusRsp_REV_StatusText(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->StatusText;
  if (!y) return;
  x->StatusText = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->StatusText->g;
    x->StatusText = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_PUT_StatusText) */

void zx_mm7_QueryStatusRsp_PUT_StatusText(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->StatusText;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->StatusText = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_ADD_StatusText) */

void zx_mm7_QueryStatusRsp_ADD_StatusText(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->StatusText->g;
    x->StatusText = z;
    return;
  case -1:
    y = x->StatusText;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusText; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_QueryStatusRsp_DEL_StatusText) */

void zx_mm7_QueryStatusRsp_DEL_StatusText(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusText = (struct zx_elem_s*)x->StatusText->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->StatusText;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusText; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_QueryStatusRsp_NUM_Details) */

int zx_mm7_QueryStatusRsp_NUM_Details(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_mm7_Details_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Details; y; ++n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_QueryStatusRsp_GET_Details) */

struct zx_mm7_Details_s* zx_mm7_QueryStatusRsp_GET_Details(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_mm7_Details_s* y;
  if (!x) return 0;
  for (y = x->Details; n>=0 && y; --n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_POP_Details) */

struct zx_mm7_Details_s* zx_mm7_QueryStatusRsp_POP_Details(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_mm7_Details_s* y;
  if (!x) return 0;
  y = x->Details;
  if (y)
    x->Details = (struct zx_mm7_Details_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_QueryStatusRsp_PUSH_Details) */

void zx_mm7_QueryStatusRsp_PUSH_Details(struct zx_mm7_QueryStatusRsp_s* x, struct zx_mm7_Details_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Details->gg.g;
  x->Details = z;
}

/* FUNC(zx_mm7_QueryStatusRsp_REV_Details) */

void zx_mm7_QueryStatusRsp_REV_Details(struct zx_mm7_QueryStatusRsp_s* x)
{
  struct zx_mm7_Details_s* nxt;
  struct zx_mm7_Details_s* y;
  if (!x) return;
  y = x->Details;
  if (!y) return;
  x->Details = 0;
  while (y) {
    nxt = (struct zx_mm7_Details_s*)y->gg.g.n;
    y->gg.g.n = &x->Details->gg.g;
    x->Details = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_PUT_Details) */

void zx_mm7_QueryStatusRsp_PUT_Details(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_mm7_Details_s* z)
{
  struct zx_mm7_Details_s* y;
  if (!x || !z) return;
  y = x->Details;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Details = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_QueryStatusRsp_ADD_Details) */

void zx_mm7_QueryStatusRsp_ADD_Details(struct zx_mm7_QueryStatusRsp_s* x, int n, struct zx_mm7_Details_s* z)
{
  struct zx_mm7_Details_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Details->gg.g;
    x->Details = z;
    return;
  case -1:
    y = x->Details;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Details; n > 1 && y; --n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_QueryStatusRsp_DEL_Details) */

void zx_mm7_QueryStatusRsp_DEL_Details(struct zx_mm7_QueryStatusRsp_s* x, int n)
{
  struct zx_mm7_Details_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Details = (struct zx_mm7_Details_s*)x->Details->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Details_s*)x->Details;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Details; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_mm7_RFC2822Address_GET_addressCoding) */
struct zx_str* zx_mm7_RFC2822Address_GET_addressCoding(struct zx_mm7_RFC2822Address_s* x) { return x->addressCoding; }
/* FUNC(zx_mm7_RFC2822Address_PUT_addressCoding) */
void zx_mm7_RFC2822Address_PUT_addressCoding(struct zx_mm7_RFC2822Address_s* x, struct zx_str* y) { x->addressCoding = y; }
/* FUNC(zx_mm7_RFC2822Address_GET_displayOnly) */
struct zx_str* zx_mm7_RFC2822Address_GET_displayOnly(struct zx_mm7_RFC2822Address_s* x) { return x->displayOnly; }
/* FUNC(zx_mm7_RFC2822Address_PUT_displayOnly) */
void zx_mm7_RFC2822Address_PUT_displayOnly(struct zx_mm7_RFC2822Address_s* x, struct zx_str* y) { x->displayOnly = y; }
/* FUNC(zx_mm7_RFC2822Address_GET_id) */
struct zx_str* zx_mm7_RFC2822Address_GET_id(struct zx_mm7_RFC2822Address_s* x) { return x->id; }
/* FUNC(zx_mm7_RFC2822Address_PUT_id) */
void zx_mm7_RFC2822Address_PUT_id(struct zx_mm7_RFC2822Address_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_RSErrorRsp_NUM_MM7Version) */

int zx_mm7_RSErrorRsp_NUM_MM7Version(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_RSErrorRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_RSErrorRsp_GET_MM7Version(struct zx_mm7_RSErrorRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_RSErrorRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_RSErrorRsp_POP_MM7Version(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_RSErrorRsp_PUSH_MM7Version) */

void zx_mm7_RSErrorRsp_PUSH_MM7Version(struct zx_mm7_RSErrorRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_RSErrorRsp_REV_MM7Version) */

void zx_mm7_RSErrorRsp_REV_MM7Version(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_RSErrorRsp_PUT_MM7Version) */

void zx_mm7_RSErrorRsp_PUT_MM7Version(struct zx_mm7_RSErrorRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_RSErrorRsp_ADD_MM7Version) */

void zx_mm7_RSErrorRsp_ADD_MM7Version(struct zx_mm7_RSErrorRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_RSErrorRsp_DEL_MM7Version) */

void zx_mm7_RSErrorRsp_DEL_MM7Version(struct zx_mm7_RSErrorRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_RSErrorRsp_NUM_Status) */

int zx_mm7_RSErrorRsp_NUM_Status(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_RSErrorRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_RSErrorRsp_GET_Status(struct zx_mm7_RSErrorRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_RSErrorRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_RSErrorRsp_POP_Status(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_RSErrorRsp_PUSH_Status) */

void zx_mm7_RSErrorRsp_PUSH_Status(struct zx_mm7_RSErrorRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_RSErrorRsp_REV_Status) */

void zx_mm7_RSErrorRsp_REV_Status(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_RSErrorRsp_PUT_Status) */

void zx_mm7_RSErrorRsp_PUT_Status(struct zx_mm7_RSErrorRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_RSErrorRsp_ADD_Status) */

void zx_mm7_RSErrorRsp_ADD_Status(struct zx_mm7_RSErrorRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_RSErrorRsp_DEL_Status) */

void zx_mm7_RSErrorRsp_DEL_Status(struct zx_mm7_RSErrorRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_RSErrorRsp_NUM_Extension) */

int zx_mm7_RSErrorRsp_NUM_Extension(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_RSErrorRsp_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_RSErrorRsp_GET_Extension(struct zx_mm7_RSErrorRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_RSErrorRsp_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_RSErrorRsp_POP_Extension(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_RSErrorRsp_PUSH_Extension) */

void zx_mm7_RSErrorRsp_PUSH_Extension(struct zx_mm7_RSErrorRsp_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_RSErrorRsp_REV_Extension) */

void zx_mm7_RSErrorRsp_REV_Extension(struct zx_mm7_RSErrorRsp_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_RSErrorRsp_PUT_Extension) */

void zx_mm7_RSErrorRsp_PUT_Extension(struct zx_mm7_RSErrorRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_RSErrorRsp_ADD_Extension) */

void zx_mm7_RSErrorRsp_ADD_Extension(struct zx_mm7_RSErrorRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_RSErrorRsp_DEL_Extension) */

void zx_mm7_RSErrorRsp_DEL_Extension(struct zx_mm7_RSErrorRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_MM7Version) */

int zx_mm7_ReadReplyReq_NUM_MM7Version(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_MM7Version(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_MM7Version(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_MM7Version) */

void zx_mm7_ReadReplyReq_PUSH_MM7Version(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_MM7Version) */

void zx_mm7_ReadReplyReq_REV_MM7Version(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_MM7Version) */

void zx_mm7_ReadReplyReq_PUT_MM7Version(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_MM7Version) */

void zx_mm7_ReadReplyReq_ADD_MM7Version(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_MM7Version) */

void zx_mm7_ReadReplyReq_DEL_MM7Version(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_MMSRelayServerID) */

int zx_mm7_ReadReplyReq_NUM_MMSRelayServerID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MMSRelayServerID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_MMSRelayServerID) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_MMSRelayServerID(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MMSRelayServerID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_MMSRelayServerID) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_MMSRelayServerID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MMSRelayServerID;
  if (y)
    x->MMSRelayServerID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_MMSRelayServerID) */

void zx_mm7_ReadReplyReq_PUSH_MMSRelayServerID(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MMSRelayServerID->g;
  x->MMSRelayServerID = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_MMSRelayServerID) */

void zx_mm7_ReadReplyReq_REV_MMSRelayServerID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MMSRelayServerID;
  if (!y) return;
  x->MMSRelayServerID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MMSRelayServerID->g;
    x->MMSRelayServerID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_MMSRelayServerID) */

void zx_mm7_ReadReplyReq_PUT_MMSRelayServerID(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MMSRelayServerID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MMSRelayServerID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_MMSRelayServerID) */

void zx_mm7_ReadReplyReq_ADD_MMSRelayServerID(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MMSRelayServerID->g;
    x->MMSRelayServerID = z;
    return;
  case -1:
    y = x->MMSRelayServerID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMSRelayServerID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_MMSRelayServerID) */

void zx_mm7_ReadReplyReq_DEL_MMSRelayServerID(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MMSRelayServerID = (struct zx_elem_s*)x->MMSRelayServerID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MMSRelayServerID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMSRelayServerID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_Extension) */

int zx_mm7_ReadReplyReq_NUM_Extension(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ReadReplyReq_GET_Extension(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ReadReplyReq_POP_Extension(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_Extension) */

void zx_mm7_ReadReplyReq_PUSH_Extension(struct zx_mm7_ReadReplyReq_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_Extension) */

void zx_mm7_ReadReplyReq_REV_Extension(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_Extension) */

void zx_mm7_ReadReplyReq_PUT_Extension(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_Extension) */

void zx_mm7_ReadReplyReq_ADD_Extension(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_Extension) */

void zx_mm7_ReadReplyReq_DEL_Extension(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_MessageID) */

int zx_mm7_ReadReplyReq_NUM_MessageID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_MessageID) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_MessageID(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_MessageID) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_MessageID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_MessageID) */

void zx_mm7_ReadReplyReq_PUSH_MessageID(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageID->g;
  x->MessageID = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_MessageID) */

void zx_mm7_ReadReplyReq_REV_MessageID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageID->g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_MessageID) */

void zx_mm7_ReadReplyReq_PUT_MessageID(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_MessageID) */

void zx_mm7_ReadReplyReq_ADD_MessageID(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageID->g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_MessageID) */

void zx_mm7_ReadReplyReq_DEL_MessageID(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_elem_s*)x->MessageID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_Recipient) */

int zx_mm7_ReadReplyReq_NUM_Recipient(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Recipient_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Recipient; y; ++n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_Recipient) */

struct zx_mm7_Recipient_s* zx_mm7_ReadReplyReq_GET_Recipient(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_mm7_Recipient_s* y;
  if (!x) return 0;
  for (y = x->Recipient; n>=0 && y; --n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_Recipient) */

struct zx_mm7_Recipient_s* zx_mm7_ReadReplyReq_POP_Recipient(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Recipient_s* y;
  if (!x) return 0;
  y = x->Recipient;
  if (y)
    x->Recipient = (struct zx_mm7_Recipient_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_Recipient) */

void zx_mm7_ReadReplyReq_PUSH_Recipient(struct zx_mm7_ReadReplyReq_s* x, struct zx_mm7_Recipient_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Recipient->gg.g;
  x->Recipient = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_Recipient) */

void zx_mm7_ReadReplyReq_REV_Recipient(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Recipient_s* nxt;
  struct zx_mm7_Recipient_s* y;
  if (!x) return;
  y = x->Recipient;
  if (!y) return;
  x->Recipient = 0;
  while (y) {
    nxt = (struct zx_mm7_Recipient_s*)y->gg.g.n;
    y->gg.g.n = &x->Recipient->gg.g;
    x->Recipient = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_Recipient) */

void zx_mm7_ReadReplyReq_PUT_Recipient(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_mm7_Recipient_s* z)
{
  struct zx_mm7_Recipient_s* y;
  if (!x || !z) return;
  y = x->Recipient;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Recipient = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_Recipient) */

void zx_mm7_ReadReplyReq_ADD_Recipient(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_mm7_Recipient_s* z)
{
  struct zx_mm7_Recipient_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Recipient->gg.g;
    x->Recipient = z;
    return;
  case -1:
    y = x->Recipient;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipient; n > 1 && y; --n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_Recipient) */

void zx_mm7_ReadReplyReq_DEL_Recipient(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_mm7_Recipient_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Recipient = (struct zx_mm7_Recipient_s*)x->Recipient->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Recipient_s*)x->Recipient;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipient; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipient_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_Sender) */

int zx_mm7_ReadReplyReq_NUM_Sender(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Sender_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sender; y; ++n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_Sender) */

struct zx_mm7_Sender_s* zx_mm7_ReadReplyReq_GET_Sender(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return 0;
  for (y = x->Sender; n>=0 && y; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_Sender) */

struct zx_mm7_Sender_s* zx_mm7_ReadReplyReq_POP_Sender(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return 0;
  y = x->Sender;
  if (y)
    x->Sender = (struct zx_mm7_Sender_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_Sender) */

void zx_mm7_ReadReplyReq_PUSH_Sender(struct zx_mm7_ReadReplyReq_s* x, struct zx_mm7_Sender_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Sender->gg.g;
  x->Sender = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_Sender) */

void zx_mm7_ReadReplyReq_REV_Sender(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_mm7_Sender_s* nxt;
  struct zx_mm7_Sender_s* y;
  if (!x) return;
  y = x->Sender;
  if (!y) return;
  x->Sender = 0;
  while (y) {
    nxt = (struct zx_mm7_Sender_s*)y->gg.g.n;
    y->gg.g.n = &x->Sender->gg.g;
    x->Sender = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_Sender) */

void zx_mm7_ReadReplyReq_PUT_Sender(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_mm7_Sender_s* z)
{
  struct zx_mm7_Sender_s* y;
  if (!x || !z) return;
  y = x->Sender;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Sender = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_Sender) */

void zx_mm7_ReadReplyReq_ADD_Sender(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_mm7_Sender_s* z)
{
  struct zx_mm7_Sender_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_Sender) */

void zx_mm7_ReadReplyReq_DEL_Sender(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_mm7_Sender_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sender = (struct zx_mm7_Sender_s*)x->Sender->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Sender_s*)x->Sender;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_TimeStamp) */

int zx_mm7_ReadReplyReq_NUM_TimeStamp(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TimeStamp; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_TimeStamp) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_TimeStamp(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TimeStamp; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_TimeStamp) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_TimeStamp(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TimeStamp;
  if (y)
    x->TimeStamp = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_TimeStamp) */

void zx_mm7_ReadReplyReq_PUSH_TimeStamp(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TimeStamp->g;
  x->TimeStamp = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_TimeStamp) */

void zx_mm7_ReadReplyReq_REV_TimeStamp(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TimeStamp;
  if (!y) return;
  x->TimeStamp = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TimeStamp->g;
    x->TimeStamp = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_TimeStamp) */

void zx_mm7_ReadReplyReq_PUT_TimeStamp(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TimeStamp;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TimeStamp = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_TimeStamp) */

void zx_mm7_ReadReplyReq_ADD_TimeStamp(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TimeStamp->g;
    x->TimeStamp = z;
    return;
  case -1:
    y = x->TimeStamp;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_TimeStamp) */

void zx_mm7_ReadReplyReq_DEL_TimeStamp(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TimeStamp = (struct zx_elem_s*)x->TimeStamp->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TimeStamp;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_MMStatus) */

int zx_mm7_ReadReplyReq_NUM_MMStatus(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MMStatus; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_MMStatus) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_MMStatus(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MMStatus; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_MMStatus) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_MMStatus(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MMStatus;
  if (y)
    x->MMStatus = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_MMStatus) */

void zx_mm7_ReadReplyReq_PUSH_MMStatus(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MMStatus->g;
  x->MMStatus = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_MMStatus) */

void zx_mm7_ReadReplyReq_REV_MMStatus(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MMStatus;
  if (!y) return;
  x->MMStatus = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MMStatus->g;
    x->MMStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_MMStatus) */

void zx_mm7_ReadReplyReq_PUT_MMStatus(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MMStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MMStatus = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_MMStatus) */

void zx_mm7_ReadReplyReq_ADD_MMStatus(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MMStatus->g;
    x->MMStatus = z;
    return;
  case -1:
    y = x->MMStatus;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMStatus; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_MMStatus) */

void zx_mm7_ReadReplyReq_DEL_MMStatus(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MMStatus = (struct zx_elem_s*)x->MMStatus->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MMStatus;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MMStatus; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_StatusText) */

int zx_mm7_ReadReplyReq_NUM_StatusText(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusText; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_StatusText) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_StatusText(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusText; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_StatusText) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_StatusText(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusText;
  if (y)
    x->StatusText = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_StatusText) */

void zx_mm7_ReadReplyReq_PUSH_StatusText(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusText->g;
  x->StatusText = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_StatusText) */

void zx_mm7_ReadReplyReq_REV_StatusText(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->StatusText;
  if (!y) return;
  x->StatusText = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->StatusText->g;
    x->StatusText = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_StatusText) */

void zx_mm7_ReadReplyReq_PUT_StatusText(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->StatusText;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->StatusText = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_StatusText) */

void zx_mm7_ReadReplyReq_ADD_StatusText(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->StatusText->g;
    x->StatusText = z;
    return;
  case -1:
    y = x->StatusText;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusText; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_StatusText) */

void zx_mm7_ReadReplyReq_DEL_StatusText(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusText = (struct zx_elem_s*)x->StatusText->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->StatusText;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusText; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_ApplicID) */

int zx_mm7_ReadReplyReq_NUM_ApplicID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_ApplicID) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_ApplicID(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_ApplicID) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_ApplicID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ApplicID;
  if (y)
    x->ApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_ApplicID) */

void zx_mm7_ReadReplyReq_PUSH_ApplicID(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ApplicID->g;
  x->ApplicID = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_ApplicID) */

void zx_mm7_ReadReplyReq_REV_ApplicID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ApplicID;
  if (!y) return;
  x->ApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ApplicID->g;
    x->ApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_ApplicID) */

void zx_mm7_ReadReplyReq_PUT_ApplicID(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_ApplicID) */

void zx_mm7_ReadReplyReq_ADD_ApplicID(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ApplicID->g;
    x->ApplicID = z;
    return;
  case -1:
    y = x->ApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_ApplicID) */

void zx_mm7_ReadReplyReq_DEL_ApplicID(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicID = (struct zx_elem_s*)x->ApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_ReplyApplicID) */

int zx_mm7_ReadReplyReq_NUM_ReplyApplicID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_ReplyApplicID) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_ReplyApplicID(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReplyApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_ReplyApplicID) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_ReplyApplicID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReplyApplicID;
  if (y)
    x->ReplyApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_ReplyApplicID) */

void zx_mm7_ReadReplyReq_PUSH_ReplyApplicID(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReplyApplicID->g;
  x->ReplyApplicID = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_ReplyApplicID) */

void zx_mm7_ReadReplyReq_REV_ReplyApplicID(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReplyApplicID;
  if (!y) return;
  x->ReplyApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_ReplyApplicID) */

void zx_mm7_ReadReplyReq_PUT_ReplyApplicID(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReplyApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReplyApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_ReplyApplicID) */

void zx_mm7_ReadReplyReq_ADD_ReplyApplicID(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = z;
    return;
  case -1:
    y = x->ReplyApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_ReplyApplicID) */

void zx_mm7_ReadReplyReq_DEL_ReplyApplicID(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyApplicID = (struct zx_elem_s*)x->ReplyApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReplyApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyReq_NUM_AuxApplicInfo) */

int zx_mm7_ReadReplyReq_NUM_AuxApplicInfo(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyReq_GET_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_ReadReplyReq_GET_AuxApplicInfo(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_POP_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_ReadReplyReq_POP_AuxApplicInfo(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuxApplicInfo;
  if (y)
    x->AuxApplicInfo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyReq_PUSH_AuxApplicInfo) */

void zx_mm7_ReadReplyReq_PUSH_AuxApplicInfo(struct zx_mm7_ReadReplyReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuxApplicInfo->g;
  x->AuxApplicInfo = z;
}

/* FUNC(zx_mm7_ReadReplyReq_REV_AuxApplicInfo) */

void zx_mm7_ReadReplyReq_REV_AuxApplicInfo(struct zx_mm7_ReadReplyReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  x->AuxApplicInfo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_PUT_AuxApplicInfo) */

void zx_mm7_ReadReplyReq_PUT_AuxApplicInfo(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuxApplicInfo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyReq_ADD_AuxApplicInfo) */

void zx_mm7_ReadReplyReq_ADD_AuxApplicInfo(struct zx_mm7_ReadReplyReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = z;
    return;
  case -1:
    y = x->AuxApplicInfo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyReq_DEL_AuxApplicInfo) */

void zx_mm7_ReadReplyReq_DEL_AuxApplicInfo(struct zx_mm7_ReadReplyReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuxApplicInfo = (struct zx_elem_s*)x->AuxApplicInfo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuxApplicInfo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyRsp_NUM_MM7Version) */

int zx_mm7_ReadReplyRsp_NUM_MM7Version(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_ReadReplyRsp_GET_MM7Version(struct zx_mm7_ReadReplyRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_ReadReplyRsp_POP_MM7Version(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyRsp_PUSH_MM7Version) */

void zx_mm7_ReadReplyRsp_PUSH_MM7Version(struct zx_mm7_ReadReplyRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_ReadReplyRsp_REV_MM7Version) */

void zx_mm7_ReadReplyRsp_REV_MM7Version(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyRsp_PUT_MM7Version) */

void zx_mm7_ReadReplyRsp_PUT_MM7Version(struct zx_mm7_ReadReplyRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReadReplyRsp_ADD_MM7Version) */

void zx_mm7_ReadReplyRsp_ADD_MM7Version(struct zx_mm7_ReadReplyRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReadReplyRsp_DEL_MM7Version) */

void zx_mm7_ReadReplyRsp_DEL_MM7Version(struct zx_mm7_ReadReplyRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyRsp_NUM_Status) */

int zx_mm7_ReadReplyRsp_NUM_Status(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_ReadReplyRsp_GET_Status(struct zx_mm7_ReadReplyRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_ReadReplyRsp_POP_Status(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyRsp_PUSH_Status) */

void zx_mm7_ReadReplyRsp_PUSH_Status(struct zx_mm7_ReadReplyRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_ReadReplyRsp_REV_Status) */

void zx_mm7_ReadReplyRsp_REV_Status(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyRsp_PUT_Status) */

void zx_mm7_ReadReplyRsp_PUT_Status(struct zx_mm7_ReadReplyRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReadReplyRsp_ADD_Status) */

void zx_mm7_ReadReplyRsp_ADD_Status(struct zx_mm7_ReadReplyRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReadReplyRsp_DEL_Status) */

void zx_mm7_ReadReplyRsp_DEL_Status(struct zx_mm7_ReadReplyRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReadReplyRsp_NUM_Extension) */

int zx_mm7_ReadReplyRsp_NUM_Extension(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReadReplyRsp_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ReadReplyRsp_GET_Extension(struct zx_mm7_ReadReplyRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReadReplyRsp_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ReadReplyRsp_POP_Extension(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReadReplyRsp_PUSH_Extension) */

void zx_mm7_ReadReplyRsp_PUSH_Extension(struct zx_mm7_ReadReplyRsp_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_ReadReplyRsp_REV_Extension) */

void zx_mm7_ReadReplyRsp_REV_Extension(struct zx_mm7_ReadReplyRsp_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReadReplyRsp_PUT_Extension) */

void zx_mm7_ReadReplyRsp_PUT_Extension(struct zx_mm7_ReadReplyRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReadReplyRsp_ADD_Extension) */

void zx_mm7_ReadReplyRsp_ADD_Extension(struct zx_mm7_ReadReplyRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReadReplyRsp_DEL_Extension) */

void zx_mm7_ReadReplyRsp_DEL_Extension(struct zx_mm7_ReadReplyRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Recipient_NUM_RFC2822Address) */

int zx_mm7_Recipient_NUM_RFC2822Address(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RFC2822Address; y; ++n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Recipient_GET_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_Recipient_GET_RFC2822Address(struct zx_mm7_Recipient_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  for (y = x->RFC2822Address; n>=0 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Recipient_POP_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_Recipient_POP_RFC2822Address(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  y = x->RFC2822Address;
  if (y)
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Recipient_PUSH_RFC2822Address) */

void zx_mm7_Recipient_PUSH_RFC2822Address(struct zx_mm7_Recipient_s* x, struct zx_mm7_RFC2822Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RFC2822Address->gg.g;
  x->RFC2822Address = z;
}

/* FUNC(zx_mm7_Recipient_REV_RFC2822Address) */

void zx_mm7_Recipient_REV_RFC2822Address(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_RFC2822Address_s* nxt;
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  y = x->RFC2822Address;
  if (!y) return;
  x->RFC2822Address = 0;
  while (y) {
    nxt = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
    y->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Recipient_PUT_RFC2822Address) */

void zx_mm7_Recipient_PUT_RFC2822Address(struct zx_mm7_Recipient_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  y = x->RFC2822Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RFC2822Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Recipient_ADD_RFC2822Address) */

void zx_mm7_Recipient_ADD_RFC2822Address(struct zx_mm7_Recipient_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = z;
    return;
  case -1:
    y = x->RFC2822Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Recipient_DEL_RFC2822Address) */

void zx_mm7_Recipient_DEL_RFC2822Address(struct zx_mm7_Recipient_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Recipient_NUM_Number) */

int zx_mm7_Recipient_NUM_Number(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_Number_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Number; y; ++n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Recipient_GET_Number) */

struct zx_mm7_Number_s* zx_mm7_Recipient_GET_Number(struct zx_mm7_Recipient_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  for (y = x->Number; n>=0 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Recipient_POP_Number) */

struct zx_mm7_Number_s* zx_mm7_Recipient_POP_Number(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  y = x->Number;
  if (y)
    x->Number = (struct zx_mm7_Number_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Recipient_PUSH_Number) */

void zx_mm7_Recipient_PUSH_Number(struct zx_mm7_Recipient_s* x, struct zx_mm7_Number_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Number->gg.g;
  x->Number = z;
}

/* FUNC(zx_mm7_Recipient_REV_Number) */

void zx_mm7_Recipient_REV_Number(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_Number_s* nxt;
  struct zx_mm7_Number_s* y;
  if (!x) return;
  y = x->Number;
  if (!y) return;
  x->Number = 0;
  while (y) {
    nxt = (struct zx_mm7_Number_s*)y->gg.g.n;
    y->gg.g.n = &x->Number->gg.g;
    x->Number = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Recipient_PUT_Number) */

void zx_mm7_Recipient_PUT_Number(struct zx_mm7_Recipient_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  y = x->Number;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Number = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Recipient_ADD_Number) */

void zx_mm7_Recipient_ADD_Number(struct zx_mm7_Recipient_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Number->gg.g;
    x->Number = z;
    return;
  case -1:
    y = x->Number;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Recipient_DEL_Number) */

void zx_mm7_Recipient_DEL_Number(struct zx_mm7_Recipient_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Number = (struct zx_mm7_Number_s*)x->Number->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Number_s*)x->Number;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Recipient_NUM_ShortCode) */

int zx_mm7_Recipient_NUM_ShortCode(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ShortCode; y; ++n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Recipient_GET_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_Recipient_GET_ShortCode(struct zx_mm7_Recipient_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  for (y = x->ShortCode; n>=0 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Recipient_POP_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_Recipient_POP_ShortCode(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  y = x->ShortCode;
  if (y)
    x->ShortCode = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Recipient_PUSH_ShortCode) */

void zx_mm7_Recipient_PUSH_ShortCode(struct zx_mm7_Recipient_s* x, struct zx_mm7_ShortCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ShortCode->gg.g;
  x->ShortCode = z;
}

/* FUNC(zx_mm7_Recipient_REV_ShortCode) */

void zx_mm7_Recipient_REV_ShortCode(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_ShortCode_s* nxt;
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  y = x->ShortCode;
  if (!y) return;
  x->ShortCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Recipient_PUT_ShortCode) */

void zx_mm7_Recipient_PUT_ShortCode(struct zx_mm7_Recipient_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  y = x->ShortCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ShortCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Recipient_ADD_ShortCode) */

void zx_mm7_Recipient_ADD_ShortCode(struct zx_mm7_Recipient_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = z;
    return;
  case -1:
    y = x->ShortCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Recipient_DEL_ShortCode) */

void zx_mm7_Recipient_DEL_ShortCode(struct zx_mm7_Recipient_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ShortCode = (struct zx_mm7_ShortCode_s*)x->ShortCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ShortCode_s*)x->ShortCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Recipient_NUM_Extension) */

int zx_mm7_Recipient_NUM_Extension(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Recipient_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_Recipient_GET_Extension(struct zx_mm7_Recipient_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Recipient_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_Recipient_POP_Extension(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Recipient_PUSH_Extension) */

void zx_mm7_Recipient_PUSH_Extension(struct zx_mm7_Recipient_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_Recipient_REV_Extension) */

void zx_mm7_Recipient_REV_Extension(struct zx_mm7_Recipient_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Recipient_PUT_Extension) */

void zx_mm7_Recipient_PUT_Extension(struct zx_mm7_Recipient_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Recipient_ADD_Extension) */

void zx_mm7_Recipient_ADD_Extension(struct zx_mm7_Recipient_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Recipient_DEL_Extension) */

void zx_mm7_Recipient_DEL_Extension(struct zx_mm7_Recipient_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Recipients_NUM_To) */

int zx_mm7_Recipients_NUM_To(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_To_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->To; y; ++n, y = (struct zx_mm7_To_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Recipients_GET_To) */

struct zx_mm7_To_s* zx_mm7_Recipients_GET_To(struct zx_mm7_Recipients_s* x, int n)
{
  struct zx_mm7_To_s* y;
  if (!x) return 0;
  for (y = x->To; n>=0 && y; --n, y = (struct zx_mm7_To_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Recipients_POP_To) */

struct zx_mm7_To_s* zx_mm7_Recipients_POP_To(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_To_s* y;
  if (!x) return 0;
  y = x->To;
  if (y)
    x->To = (struct zx_mm7_To_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Recipients_PUSH_To) */

void zx_mm7_Recipients_PUSH_To(struct zx_mm7_Recipients_s* x, struct zx_mm7_To_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->To->gg.g;
  x->To = z;
}

/* FUNC(zx_mm7_Recipients_REV_To) */

void zx_mm7_Recipients_REV_To(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_To_s* nxt;
  struct zx_mm7_To_s* y;
  if (!x) return;
  y = x->To;
  if (!y) return;
  x->To = 0;
  while (y) {
    nxt = (struct zx_mm7_To_s*)y->gg.g.n;
    y->gg.g.n = &x->To->gg.g;
    x->To = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Recipients_PUT_To) */

void zx_mm7_Recipients_PUT_To(struct zx_mm7_Recipients_s* x, int n, struct zx_mm7_To_s* z)
{
  struct zx_mm7_To_s* y;
  if (!x || !z) return;
  y = x->To;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->To = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Recipients_ADD_To) */

void zx_mm7_Recipients_ADD_To(struct zx_mm7_Recipients_s* x, int n, struct zx_mm7_To_s* z)
{
  struct zx_mm7_To_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y; --n, y = (struct zx_mm7_To_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Recipients_DEL_To) */

void zx_mm7_Recipients_DEL_To(struct zx_mm7_Recipients_s* x, int n)
{
  struct zx_mm7_To_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->To = (struct zx_mm7_To_s*)x->To->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_To_s*)x->To;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Recipients_NUM_Cc) */

int zx_mm7_Recipients_NUM_Cc(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_Cc_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Cc; y; ++n, y = (struct zx_mm7_Cc_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Recipients_GET_Cc) */

struct zx_mm7_Cc_s* zx_mm7_Recipients_GET_Cc(struct zx_mm7_Recipients_s* x, int n)
{
  struct zx_mm7_Cc_s* y;
  if (!x) return 0;
  for (y = x->Cc; n>=0 && y; --n, y = (struct zx_mm7_Cc_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Recipients_POP_Cc) */

struct zx_mm7_Cc_s* zx_mm7_Recipients_POP_Cc(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_Cc_s* y;
  if (!x) return 0;
  y = x->Cc;
  if (y)
    x->Cc = (struct zx_mm7_Cc_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Recipients_PUSH_Cc) */

void zx_mm7_Recipients_PUSH_Cc(struct zx_mm7_Recipients_s* x, struct zx_mm7_Cc_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Cc->gg.g;
  x->Cc = z;
}

/* FUNC(zx_mm7_Recipients_REV_Cc) */

void zx_mm7_Recipients_REV_Cc(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_Cc_s* nxt;
  struct zx_mm7_Cc_s* y;
  if (!x) return;
  y = x->Cc;
  if (!y) return;
  x->Cc = 0;
  while (y) {
    nxt = (struct zx_mm7_Cc_s*)y->gg.g.n;
    y->gg.g.n = &x->Cc->gg.g;
    x->Cc = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Recipients_PUT_Cc) */

void zx_mm7_Recipients_PUT_Cc(struct zx_mm7_Recipients_s* x, int n, struct zx_mm7_Cc_s* z)
{
  struct zx_mm7_Cc_s* y;
  if (!x || !z) return;
  y = x->Cc;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Cc = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Cc_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Recipients_ADD_Cc) */

void zx_mm7_Recipients_ADD_Cc(struct zx_mm7_Recipients_s* x, int n, struct zx_mm7_Cc_s* z)
{
  struct zx_mm7_Cc_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Cc->gg.g;
    x->Cc = z;
    return;
  case -1:
    y = x->Cc;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Cc_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Cc; n > 1 && y; --n, y = (struct zx_mm7_Cc_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Recipients_DEL_Cc) */

void zx_mm7_Recipients_DEL_Cc(struct zx_mm7_Recipients_s* x, int n)
{
  struct zx_mm7_Cc_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Cc = (struct zx_mm7_Cc_s*)x->Cc->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Cc_s*)x->Cc;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Cc_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Cc; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Cc_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Recipients_NUM_Bcc) */

int zx_mm7_Recipients_NUM_Bcc(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_Bcc_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Bcc; y; ++n, y = (struct zx_mm7_Bcc_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Recipients_GET_Bcc) */

struct zx_mm7_Bcc_s* zx_mm7_Recipients_GET_Bcc(struct zx_mm7_Recipients_s* x, int n)
{
  struct zx_mm7_Bcc_s* y;
  if (!x) return 0;
  for (y = x->Bcc; n>=0 && y; --n, y = (struct zx_mm7_Bcc_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Recipients_POP_Bcc) */

struct zx_mm7_Bcc_s* zx_mm7_Recipients_POP_Bcc(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_Bcc_s* y;
  if (!x) return 0;
  y = x->Bcc;
  if (y)
    x->Bcc = (struct zx_mm7_Bcc_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Recipients_PUSH_Bcc) */

void zx_mm7_Recipients_PUSH_Bcc(struct zx_mm7_Recipients_s* x, struct zx_mm7_Bcc_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Bcc->gg.g;
  x->Bcc = z;
}

/* FUNC(zx_mm7_Recipients_REV_Bcc) */

void zx_mm7_Recipients_REV_Bcc(struct zx_mm7_Recipients_s* x)
{
  struct zx_mm7_Bcc_s* nxt;
  struct zx_mm7_Bcc_s* y;
  if (!x) return;
  y = x->Bcc;
  if (!y) return;
  x->Bcc = 0;
  while (y) {
    nxt = (struct zx_mm7_Bcc_s*)y->gg.g.n;
    y->gg.g.n = &x->Bcc->gg.g;
    x->Bcc = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Recipients_PUT_Bcc) */

void zx_mm7_Recipients_PUT_Bcc(struct zx_mm7_Recipients_s* x, int n, struct zx_mm7_Bcc_s* z)
{
  struct zx_mm7_Bcc_s* y;
  if (!x || !z) return;
  y = x->Bcc;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Bcc = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Bcc_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Recipients_ADD_Bcc) */

void zx_mm7_Recipients_ADD_Bcc(struct zx_mm7_Recipients_s* x, int n, struct zx_mm7_Bcc_s* z)
{
  struct zx_mm7_Bcc_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Bcc->gg.g;
    x->Bcc = z;
    return;
  case -1:
    y = x->Bcc;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Bcc_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Bcc; n > 1 && y; --n, y = (struct zx_mm7_Bcc_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Recipients_DEL_Bcc) */

void zx_mm7_Recipients_DEL_Bcc(struct zx_mm7_Recipients_s* x, int n)
{
  struct zx_mm7_Bcc_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Bcc = (struct zx_mm7_Bcc_s*)x->Bcc->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Bcc_s*)x->Bcc;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Bcc_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Bcc; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Bcc_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_MM7Version) */

int zx_mm7_ReplaceReq_NUM_MM7Version(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_MM7Version(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_MM7Version(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_MM7Version) */

void zx_mm7_ReplaceReq_PUSH_MM7Version(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_MM7Version) */

void zx_mm7_ReplaceReq_REV_MM7Version(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_MM7Version) */

void zx_mm7_ReplaceReq_PUT_MM7Version(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_MM7Version) */

void zx_mm7_ReplaceReq_ADD_MM7Version(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_MM7Version) */

void zx_mm7_ReplaceReq_DEL_MM7Version(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_SenderIdentification) */

int zx_mm7_ReplaceReq_NUM_SenderIdentification(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SenderIdentification; y; ++n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_SenderIdentification) */

struct zx_mm7_SenderIdentification_s* zx_mm7_ReplaceReq_GET_SenderIdentification(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return 0;
  for (y = x->SenderIdentification; n>=0 && y; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_SenderIdentification) */

struct zx_mm7_SenderIdentification_s* zx_mm7_ReplaceReq_POP_SenderIdentification(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return 0;
  y = x->SenderIdentification;
  if (y)
    x->SenderIdentification = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_SenderIdentification) */

void zx_mm7_ReplaceReq_PUSH_SenderIdentification(struct zx_mm7_ReplaceReq_s* x, struct zx_mm7_SenderIdentification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SenderIdentification->gg.g;
  x->SenderIdentification = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_SenderIdentification) */

void zx_mm7_ReplaceReq_REV_SenderIdentification(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* nxt;
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return;
  y = x->SenderIdentification;
  if (!y) return;
  x->SenderIdentification = 0;
  while (y) {
    nxt = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n;
    y->gg.g.n = &x->SenderIdentification->gg.g;
    x->SenderIdentification = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_SenderIdentification) */

void zx_mm7_ReplaceReq_PUT_SenderIdentification(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_SenderIdentification_s* z)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x || !z) return;
  y = x->SenderIdentification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SenderIdentification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_SenderIdentification) */

void zx_mm7_ReplaceReq_ADD_SenderIdentification(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_SenderIdentification_s* z)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SenderIdentification->gg.g;
    x->SenderIdentification = z;
    return;
  case -1:
    y = x->SenderIdentification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderIdentification; n > 1 && y; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_SenderIdentification) */

void zx_mm7_ReplaceReq_DEL_SenderIdentification(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SenderIdentification = (struct zx_mm7_SenderIdentification_s*)x->SenderIdentification->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_SenderIdentification_s*)x->SenderIdentification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderIdentification; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_Extension) */

int zx_mm7_ReplaceReq_NUM_Extension(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ReplaceReq_GET_Extension(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ReplaceReq_POP_Extension(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_Extension) */

void zx_mm7_ReplaceReq_PUSH_Extension(struct zx_mm7_ReplaceReq_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_Extension) */

void zx_mm7_ReplaceReq_REV_Extension(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_Extension) */

void zx_mm7_ReplaceReq_PUT_Extension(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_Extension) */

void zx_mm7_ReplaceReq_ADD_Extension(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_Extension) */

void zx_mm7_ReplaceReq_DEL_Extension(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_MessageID) */

int zx_mm7_ReplaceReq_NUM_MessageID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_MessageID) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_MessageID(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_MessageID) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_MessageID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_MessageID) */

void zx_mm7_ReplaceReq_PUSH_MessageID(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageID->g;
  x->MessageID = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_MessageID) */

void zx_mm7_ReplaceReq_REV_MessageID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageID->g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_MessageID) */

void zx_mm7_ReplaceReq_PUT_MessageID(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_MessageID) */

void zx_mm7_ReplaceReq_ADD_MessageID(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageID->g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_MessageID) */

void zx_mm7_ReplaceReq_DEL_MessageID(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_elem_s*)x->MessageID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_ServiceCode) */

int zx_mm7_ReplaceReq_NUM_ServiceCode(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_ServiceCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceCode; y; ++n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_ServiceCode) */

struct zx_mm7_ServiceCode_s* zx_mm7_ReplaceReq_GET_ServiceCode(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return 0;
  for (y = x->ServiceCode; n>=0 && y; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_ServiceCode) */

struct zx_mm7_ServiceCode_s* zx_mm7_ReplaceReq_POP_ServiceCode(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return 0;
  y = x->ServiceCode;
  if (y)
    x->ServiceCode = (struct zx_mm7_ServiceCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_ServiceCode) */

void zx_mm7_ReplaceReq_PUSH_ServiceCode(struct zx_mm7_ReplaceReq_s* x, struct zx_mm7_ServiceCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceCode->gg.g;
  x->ServiceCode = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_ServiceCode) */

void zx_mm7_ReplaceReq_REV_ServiceCode(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_ServiceCode_s* nxt;
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return;
  y = x->ServiceCode;
  if (!y) return;
  x->ServiceCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ServiceCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceCode->gg.g;
    x->ServiceCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_ServiceCode) */

void zx_mm7_ReplaceReq_PUT_ServiceCode(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_ServiceCode_s* z)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x || !z) return;
  y = x->ServiceCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_ServiceCode) */

void zx_mm7_ReplaceReq_ADD_ServiceCode(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_ServiceCode_s* z)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceCode->gg.g;
    x->ServiceCode = z;
    return;
  case -1:
    y = x->ServiceCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceCode; n > 1 && y; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_ServiceCode) */

void zx_mm7_ReplaceReq_DEL_ServiceCode(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceCode = (struct zx_mm7_ServiceCode_s*)x->ServiceCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ServiceCode_s*)x->ServiceCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_TimeStamp) */

int zx_mm7_ReplaceReq_NUM_TimeStamp(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TimeStamp; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_TimeStamp) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_TimeStamp(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TimeStamp; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_TimeStamp) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_TimeStamp(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TimeStamp;
  if (y)
    x->TimeStamp = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_TimeStamp) */

void zx_mm7_ReplaceReq_PUSH_TimeStamp(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TimeStamp->g;
  x->TimeStamp = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_TimeStamp) */

void zx_mm7_ReplaceReq_REV_TimeStamp(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TimeStamp;
  if (!y) return;
  x->TimeStamp = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TimeStamp->g;
    x->TimeStamp = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_TimeStamp) */

void zx_mm7_ReplaceReq_PUT_TimeStamp(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TimeStamp;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TimeStamp = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_TimeStamp) */

void zx_mm7_ReplaceReq_ADD_TimeStamp(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TimeStamp->g;
    x->TimeStamp = z;
    return;
  case -1:
    y = x->TimeStamp;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_TimeStamp) */

void zx_mm7_ReplaceReq_DEL_TimeStamp(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TimeStamp = (struct zx_elem_s*)x->TimeStamp->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TimeStamp;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_ReadReply) */

int zx_mm7_ReplaceReq_NUM_ReadReply(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReadReply; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_ReadReply) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_ReadReply(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReadReply; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_ReadReply) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_ReadReply(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReadReply;
  if (y)
    x->ReadReply = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_ReadReply) */

void zx_mm7_ReplaceReq_PUSH_ReadReply(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReadReply->g;
  x->ReadReply = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_ReadReply) */

void zx_mm7_ReplaceReq_REV_ReadReply(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReadReply;
  if (!y) return;
  x->ReadReply = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReadReply->g;
    x->ReadReply = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_ReadReply) */

void zx_mm7_ReplaceReq_PUT_ReadReply(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReadReply;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReadReply = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_ReadReply) */

void zx_mm7_ReplaceReq_ADD_ReadReply(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReadReply->g;
    x->ReadReply = z;
    return;
  case -1:
    y = x->ReadReply;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReadReply; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_ReadReply) */

void zx_mm7_ReplaceReq_DEL_ReadReply(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReadReply = (struct zx_elem_s*)x->ReadReply->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReadReply;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReadReply; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_EarliestDeliveryTime) */

int zx_mm7_ReplaceReq_NUM_EarliestDeliveryTime(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EarliestDeliveryTime; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_EarliestDeliveryTime) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_EarliestDeliveryTime(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EarliestDeliveryTime; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_EarliestDeliveryTime) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_EarliestDeliveryTime(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EarliestDeliveryTime;
  if (y)
    x->EarliestDeliveryTime = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_EarliestDeliveryTime) */

void zx_mm7_ReplaceReq_PUSH_EarliestDeliveryTime(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EarliestDeliveryTime->g;
  x->EarliestDeliveryTime = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_EarliestDeliveryTime) */

void zx_mm7_ReplaceReq_REV_EarliestDeliveryTime(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EarliestDeliveryTime;
  if (!y) return;
  x->EarliestDeliveryTime = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EarliestDeliveryTime->g;
    x->EarliestDeliveryTime = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_EarliestDeliveryTime) */

void zx_mm7_ReplaceReq_PUT_EarliestDeliveryTime(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EarliestDeliveryTime;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EarliestDeliveryTime = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_EarliestDeliveryTime) */

void zx_mm7_ReplaceReq_ADD_EarliestDeliveryTime(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EarliestDeliveryTime->g;
    x->EarliestDeliveryTime = z;
    return;
  case -1:
    y = x->EarliestDeliveryTime;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EarliestDeliveryTime; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_EarliestDeliveryTime) */

void zx_mm7_ReplaceReq_DEL_EarliestDeliveryTime(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EarliestDeliveryTime = (struct zx_elem_s*)x->EarliestDeliveryTime->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EarliestDeliveryTime;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EarliestDeliveryTime; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_DistributionIndicator) */

int zx_mm7_ReplaceReq_NUM_DistributionIndicator(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DistributionIndicator; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_DistributionIndicator) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_DistributionIndicator(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DistributionIndicator; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_DistributionIndicator) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_DistributionIndicator(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DistributionIndicator;
  if (y)
    x->DistributionIndicator = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_DistributionIndicator) */

void zx_mm7_ReplaceReq_PUSH_DistributionIndicator(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DistributionIndicator->g;
  x->DistributionIndicator = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_DistributionIndicator) */

void zx_mm7_ReplaceReq_REV_DistributionIndicator(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DistributionIndicator;
  if (!y) return;
  x->DistributionIndicator = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DistributionIndicator->g;
    x->DistributionIndicator = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_DistributionIndicator) */

void zx_mm7_ReplaceReq_PUT_DistributionIndicator(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DistributionIndicator;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DistributionIndicator = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_DistributionIndicator) */

void zx_mm7_ReplaceReq_ADD_DistributionIndicator(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DistributionIndicator->g;
    x->DistributionIndicator = z;
    return;
  case -1:
    y = x->DistributionIndicator;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DistributionIndicator; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_DistributionIndicator) */

void zx_mm7_ReplaceReq_DEL_DistributionIndicator(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DistributionIndicator = (struct zx_elem_s*)x->DistributionIndicator->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DistributionIndicator;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DistributionIndicator; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_ContentClass) */

int zx_mm7_ReplaceReq_NUM_ContentClass(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContentClass; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_ContentClass) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_ContentClass(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ContentClass; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_ContentClass) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_ContentClass(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ContentClass;
  if (y)
    x->ContentClass = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_ContentClass) */

void zx_mm7_ReplaceReq_PUSH_ContentClass(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ContentClass->g;
  x->ContentClass = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_ContentClass) */

void zx_mm7_ReplaceReq_REV_ContentClass(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ContentClass;
  if (!y) return;
  x->ContentClass = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ContentClass->g;
    x->ContentClass = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_ContentClass) */

void zx_mm7_ReplaceReq_PUT_ContentClass(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ContentClass;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ContentClass = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_ContentClass) */

void zx_mm7_ReplaceReq_ADD_ContentClass(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ContentClass->g;
    x->ContentClass = z;
    return;
  case -1:
    y = x->ContentClass;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ContentClass; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_ContentClass) */

void zx_mm7_ReplaceReq_DEL_ContentClass(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContentClass = (struct zx_elem_s*)x->ContentClass->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ContentClass;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ContentClass; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_DRMContent) */

int zx_mm7_ReplaceReq_NUM_DRMContent(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DRMContent; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_DRMContent) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_DRMContent(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DRMContent; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_DRMContent) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_DRMContent(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DRMContent;
  if (y)
    x->DRMContent = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_DRMContent) */

void zx_mm7_ReplaceReq_PUSH_DRMContent(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DRMContent->g;
  x->DRMContent = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_DRMContent) */

void zx_mm7_ReplaceReq_REV_DRMContent(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DRMContent;
  if (!y) return;
  x->DRMContent = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DRMContent->g;
    x->DRMContent = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_DRMContent) */

void zx_mm7_ReplaceReq_PUT_DRMContent(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DRMContent;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DRMContent = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_DRMContent) */

void zx_mm7_ReplaceReq_ADD_DRMContent(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DRMContent->g;
    x->DRMContent = z;
    return;
  case -1:
    y = x->DRMContent;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DRMContent; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_DRMContent) */

void zx_mm7_ReplaceReq_DEL_DRMContent(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DRMContent = (struct zx_elem_s*)x->DRMContent->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DRMContent;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DRMContent; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_ApplicID) */

int zx_mm7_ReplaceReq_NUM_ApplicID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_ApplicID) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_ApplicID(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_ApplicID) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_ApplicID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ApplicID;
  if (y)
    x->ApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_ApplicID) */

void zx_mm7_ReplaceReq_PUSH_ApplicID(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ApplicID->g;
  x->ApplicID = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_ApplicID) */

void zx_mm7_ReplaceReq_REV_ApplicID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ApplicID;
  if (!y) return;
  x->ApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ApplicID->g;
    x->ApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_ApplicID) */

void zx_mm7_ReplaceReq_PUT_ApplicID(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_ApplicID) */

void zx_mm7_ReplaceReq_ADD_ApplicID(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ApplicID->g;
    x->ApplicID = z;
    return;
  case -1:
    y = x->ApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_ApplicID) */

void zx_mm7_ReplaceReq_DEL_ApplicID(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicID = (struct zx_elem_s*)x->ApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_ReplyApplicID) */

int zx_mm7_ReplaceReq_NUM_ReplyApplicID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_ReplyApplicID) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_ReplyApplicID(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReplyApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_ReplyApplicID) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_ReplyApplicID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReplyApplicID;
  if (y)
    x->ReplyApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_ReplyApplicID) */

void zx_mm7_ReplaceReq_PUSH_ReplyApplicID(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReplyApplicID->g;
  x->ReplyApplicID = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_ReplyApplicID) */

void zx_mm7_ReplaceReq_REV_ReplyApplicID(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReplyApplicID;
  if (!y) return;
  x->ReplyApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_ReplyApplicID) */

void zx_mm7_ReplaceReq_PUT_ReplyApplicID(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReplyApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReplyApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_ReplyApplicID) */

void zx_mm7_ReplaceReq_ADD_ReplyApplicID(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = z;
    return;
  case -1:
    y = x->ReplyApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_ReplyApplicID) */

void zx_mm7_ReplaceReq_DEL_ReplyApplicID(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyApplicID = (struct zx_elem_s*)x->ReplyApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReplyApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_AuxApplicInfo) */

int zx_mm7_ReplaceReq_NUM_AuxApplicInfo(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_ReplaceReq_GET_AuxApplicInfo(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_ReplaceReq_POP_AuxApplicInfo(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuxApplicInfo;
  if (y)
    x->AuxApplicInfo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_AuxApplicInfo) */

void zx_mm7_ReplaceReq_PUSH_AuxApplicInfo(struct zx_mm7_ReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuxApplicInfo->g;
  x->AuxApplicInfo = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_AuxApplicInfo) */

void zx_mm7_ReplaceReq_REV_AuxApplicInfo(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  x->AuxApplicInfo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_AuxApplicInfo) */

void zx_mm7_ReplaceReq_PUT_AuxApplicInfo(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuxApplicInfo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_AuxApplicInfo) */

void zx_mm7_ReplaceReq_ADD_AuxApplicInfo(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = z;
    return;
  case -1:
    y = x->AuxApplicInfo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_AuxApplicInfo) */

void zx_mm7_ReplaceReq_DEL_AuxApplicInfo(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuxApplicInfo = (struct zx_elem_s*)x->AuxApplicInfo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuxApplicInfo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_Content) */

int zx_mm7_ReplaceReq_NUM_Content(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_Content_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Content; y; ++n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_Content) */

struct zx_mm7_Content_s* zx_mm7_ReplaceReq_GET_Content(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_Content_s* y;
  if (!x) return 0;
  for (y = x->Content; n>=0 && y; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_Content) */

struct zx_mm7_Content_s* zx_mm7_ReplaceReq_POP_Content(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_Content_s* y;
  if (!x) return 0;
  y = x->Content;
  if (y)
    x->Content = (struct zx_mm7_Content_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_Content) */

void zx_mm7_ReplaceReq_PUSH_Content(struct zx_mm7_ReplaceReq_s* x, struct zx_mm7_Content_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Content->gg.g;
  x->Content = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_Content) */

void zx_mm7_ReplaceReq_REV_Content(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_Content_s* nxt;
  struct zx_mm7_Content_s* y;
  if (!x) return;
  y = x->Content;
  if (!y) return;
  x->Content = 0;
  while (y) {
    nxt = (struct zx_mm7_Content_s*)y->gg.g.n;
    y->gg.g.n = &x->Content->gg.g;
    x->Content = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_Content) */

void zx_mm7_ReplaceReq_PUT_Content(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_Content_s* z)
{
  struct zx_mm7_Content_s* y;
  if (!x || !z) return;
  y = x->Content;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Content = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_Content) */

void zx_mm7_ReplaceReq_ADD_Content(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_Content_s* z)
{
  struct zx_mm7_Content_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Content->gg.g;
    x->Content = z;
    return;
  case -1:
    y = x->Content;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Content; n > 1 && y; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_Content) */

void zx_mm7_ReplaceReq_DEL_Content(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_Content_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Content = (struct zx_mm7_Content_s*)x->Content->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Content_s*)x->Content;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Content; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_AdditionalInformation) */

int zx_mm7_ReplaceReq_NUM_AdditionalInformation(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AdditionalInformation; y; ++n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_AdditionalInformation) */

struct zx_mm7_AdditionalInformation_s* zx_mm7_ReplaceReq_GET_AdditionalInformation(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return 0;
  for (y = x->AdditionalInformation; n>=0 && y; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_AdditionalInformation) */

struct zx_mm7_AdditionalInformation_s* zx_mm7_ReplaceReq_POP_AdditionalInformation(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return 0;
  y = x->AdditionalInformation;
  if (y)
    x->AdditionalInformation = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_AdditionalInformation) */

void zx_mm7_ReplaceReq_PUSH_AdditionalInformation(struct zx_mm7_ReplaceReq_s* x, struct zx_mm7_AdditionalInformation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AdditionalInformation->gg.g;
  x->AdditionalInformation = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_AdditionalInformation) */

void zx_mm7_ReplaceReq_REV_AdditionalInformation(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* nxt;
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return;
  y = x->AdditionalInformation;
  if (!y) return;
  x->AdditionalInformation = 0;
  while (y) {
    nxt = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n;
    y->gg.g.n = &x->AdditionalInformation->gg.g;
    x->AdditionalInformation = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_AdditionalInformation) */

void zx_mm7_ReplaceReq_PUT_AdditionalInformation(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_AdditionalInformation_s* z)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x || !z) return;
  y = x->AdditionalInformation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AdditionalInformation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_AdditionalInformation) */

void zx_mm7_ReplaceReq_ADD_AdditionalInformation(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_AdditionalInformation_s* z)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AdditionalInformation->gg.g;
    x->AdditionalInformation = z;
    return;
  case -1:
    y = x->AdditionalInformation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalInformation; n > 1 && y; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_AdditionalInformation) */

void zx_mm7_ReplaceReq_DEL_AdditionalInformation(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AdditionalInformation = (struct zx_mm7_AdditionalInformation_s*)x->AdditionalInformation->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_AdditionalInformation_s*)x->AdditionalInformation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalInformation; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceReq_NUM_MessageExtraData) */

int zx_mm7_ReplaceReq_NUM_MessageExtraData(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageExtraData; y; ++n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceReq_GET_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_ReplaceReq_GET_MessageExtraData(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  for (y = x->MessageExtraData; n>=0 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_POP_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_ReplaceReq_POP_MessageExtraData(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  y = x->MessageExtraData;
  if (y)
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceReq_PUSH_MessageExtraData) */

void zx_mm7_ReplaceReq_PUSH_MessageExtraData(struct zx_mm7_ReplaceReq_s* x, struct zx_mm7_MessageExtraData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageExtraData->gg.g;
  x->MessageExtraData = z;
}

/* FUNC(zx_mm7_ReplaceReq_REV_MessageExtraData) */

void zx_mm7_ReplaceReq_REV_MessageExtraData(struct zx_mm7_ReplaceReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* nxt;
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  y = x->MessageExtraData;
  if (!y) return;
  x->MessageExtraData = 0;
  while (y) {
    nxt = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceReq_PUT_MessageExtraData) */

void zx_mm7_ReplaceReq_PUT_MessageExtraData(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  y = x->MessageExtraData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageExtraData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReplaceReq_ADD_MessageExtraData) */

void zx_mm7_ReplaceReq_ADD_MessageExtraData(struct zx_mm7_ReplaceReq_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = z;
    return;
  case -1:
    y = x->MessageExtraData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReplaceReq_DEL_MessageExtraData) */

void zx_mm7_ReplaceReq_DEL_MessageExtraData(struct zx_mm7_ReplaceReq_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceRsp_NUM_MM7Version) */

int zx_mm7_ReplaceRsp_NUM_MM7Version(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_ReplaceRsp_GET_MM7Version(struct zx_mm7_ReplaceRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_ReplaceRsp_POP_MM7Version(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceRsp_PUSH_MM7Version) */

void zx_mm7_ReplaceRsp_PUSH_MM7Version(struct zx_mm7_ReplaceRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_ReplaceRsp_REV_MM7Version) */

void zx_mm7_ReplaceRsp_REV_MM7Version(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceRsp_PUT_MM7Version) */

void zx_mm7_ReplaceRsp_PUT_MM7Version(struct zx_mm7_ReplaceRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_ReplaceRsp_ADD_MM7Version) */

void zx_mm7_ReplaceRsp_ADD_MM7Version(struct zx_mm7_ReplaceRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_ReplaceRsp_DEL_MM7Version) */

void zx_mm7_ReplaceRsp_DEL_MM7Version(struct zx_mm7_ReplaceRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceRsp_NUM_Status) */

int zx_mm7_ReplaceRsp_NUM_Status(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_ReplaceRsp_GET_Status(struct zx_mm7_ReplaceRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_ReplaceRsp_POP_Status(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceRsp_PUSH_Status) */

void zx_mm7_ReplaceRsp_PUSH_Status(struct zx_mm7_ReplaceRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_ReplaceRsp_REV_Status) */

void zx_mm7_ReplaceRsp_REV_Status(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceRsp_PUT_Status) */

void zx_mm7_ReplaceRsp_PUT_Status(struct zx_mm7_ReplaceRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReplaceRsp_ADD_Status) */

void zx_mm7_ReplaceRsp_ADD_Status(struct zx_mm7_ReplaceRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReplaceRsp_DEL_Status) */

void zx_mm7_ReplaceRsp_DEL_Status(struct zx_mm7_ReplaceRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ReplaceRsp_NUM_Extension) */

int zx_mm7_ReplaceRsp_NUM_Extension(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ReplaceRsp_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ReplaceRsp_GET_Extension(struct zx_mm7_ReplaceRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ReplaceRsp_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ReplaceRsp_POP_Extension(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ReplaceRsp_PUSH_Extension) */

void zx_mm7_ReplaceRsp_PUSH_Extension(struct zx_mm7_ReplaceRsp_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_ReplaceRsp_REV_Extension) */

void zx_mm7_ReplaceRsp_REV_Extension(struct zx_mm7_ReplaceRsp_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ReplaceRsp_PUT_Extension) */

void zx_mm7_ReplaceRsp_PUT_Extension(struct zx_mm7_ReplaceRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ReplaceRsp_ADD_Extension) */

void zx_mm7_ReplaceRsp_ADD_Extension(struct zx_mm7_ReplaceRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ReplaceRsp_DEL_Extension) */

void zx_mm7_ReplaceRsp_DEL_Extension(struct zx_mm7_ReplaceRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_mm7_ReplyCharging_GET_replyChargingSize) */
struct zx_str* zx_mm7_ReplyCharging_GET_replyChargingSize(struct zx_mm7_ReplyCharging_s* x) { return x->replyChargingSize; }
/* FUNC(zx_mm7_ReplyCharging_PUT_replyChargingSize) */
void zx_mm7_ReplyCharging_PUT_replyChargingSize(struct zx_mm7_ReplyCharging_s* x, struct zx_str* y) { x->replyChargingSize = y; }
/* FUNC(zx_mm7_ReplyCharging_GET_replyDeadline) */
struct zx_str* zx_mm7_ReplyCharging_GET_replyDeadline(struct zx_mm7_ReplyCharging_s* x) { return x->replyDeadline; }
/* FUNC(zx_mm7_ReplyCharging_PUT_replyDeadline) */
void zx_mm7_ReplyCharging_PUT_replyDeadline(struct zx_mm7_ReplyCharging_s* x, struct zx_str* y) { x->replyDeadline = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Sender_NUM_RFC2822Address) */

int zx_mm7_Sender_NUM_RFC2822Address(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RFC2822Address; y; ++n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Sender_GET_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_Sender_GET_RFC2822Address(struct zx_mm7_Sender_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  for (y = x->RFC2822Address; n>=0 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Sender_POP_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_Sender_POP_RFC2822Address(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  y = x->RFC2822Address;
  if (y)
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Sender_PUSH_RFC2822Address) */

void zx_mm7_Sender_PUSH_RFC2822Address(struct zx_mm7_Sender_s* x, struct zx_mm7_RFC2822Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RFC2822Address->gg.g;
  x->RFC2822Address = z;
}

/* FUNC(zx_mm7_Sender_REV_RFC2822Address) */

void zx_mm7_Sender_REV_RFC2822Address(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_RFC2822Address_s* nxt;
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  y = x->RFC2822Address;
  if (!y) return;
  x->RFC2822Address = 0;
  while (y) {
    nxt = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
    y->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Sender_PUT_RFC2822Address) */

void zx_mm7_Sender_PUT_RFC2822Address(struct zx_mm7_Sender_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  y = x->RFC2822Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RFC2822Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Sender_ADD_RFC2822Address) */

void zx_mm7_Sender_ADD_RFC2822Address(struct zx_mm7_Sender_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = z;
    return;
  case -1:
    y = x->RFC2822Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Sender_DEL_RFC2822Address) */

void zx_mm7_Sender_DEL_RFC2822Address(struct zx_mm7_Sender_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Sender_NUM_Number) */

int zx_mm7_Sender_NUM_Number(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_Number_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Number; y; ++n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Sender_GET_Number) */

struct zx_mm7_Number_s* zx_mm7_Sender_GET_Number(struct zx_mm7_Sender_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  for (y = x->Number; n>=0 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Sender_POP_Number) */

struct zx_mm7_Number_s* zx_mm7_Sender_POP_Number(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  y = x->Number;
  if (y)
    x->Number = (struct zx_mm7_Number_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Sender_PUSH_Number) */

void zx_mm7_Sender_PUSH_Number(struct zx_mm7_Sender_s* x, struct zx_mm7_Number_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Number->gg.g;
  x->Number = z;
}

/* FUNC(zx_mm7_Sender_REV_Number) */

void zx_mm7_Sender_REV_Number(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_Number_s* nxt;
  struct zx_mm7_Number_s* y;
  if (!x) return;
  y = x->Number;
  if (!y) return;
  x->Number = 0;
  while (y) {
    nxt = (struct zx_mm7_Number_s*)y->gg.g.n;
    y->gg.g.n = &x->Number->gg.g;
    x->Number = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Sender_PUT_Number) */

void zx_mm7_Sender_PUT_Number(struct zx_mm7_Sender_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  y = x->Number;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Number = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Sender_ADD_Number) */

void zx_mm7_Sender_ADD_Number(struct zx_mm7_Sender_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Number->gg.g;
    x->Number = z;
    return;
  case -1:
    y = x->Number;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Sender_DEL_Number) */

void zx_mm7_Sender_DEL_Number(struct zx_mm7_Sender_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Number = (struct zx_mm7_Number_s*)x->Number->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Number_s*)x->Number;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Sender_NUM_ShortCode) */

int zx_mm7_Sender_NUM_ShortCode(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ShortCode; y; ++n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Sender_GET_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_Sender_GET_ShortCode(struct zx_mm7_Sender_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  for (y = x->ShortCode; n>=0 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Sender_POP_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_Sender_POP_ShortCode(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  y = x->ShortCode;
  if (y)
    x->ShortCode = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Sender_PUSH_ShortCode) */

void zx_mm7_Sender_PUSH_ShortCode(struct zx_mm7_Sender_s* x, struct zx_mm7_ShortCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ShortCode->gg.g;
  x->ShortCode = z;
}

/* FUNC(zx_mm7_Sender_REV_ShortCode) */

void zx_mm7_Sender_REV_ShortCode(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_ShortCode_s* nxt;
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  y = x->ShortCode;
  if (!y) return;
  x->ShortCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Sender_PUT_ShortCode) */

void zx_mm7_Sender_PUT_ShortCode(struct zx_mm7_Sender_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  y = x->ShortCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ShortCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Sender_ADD_ShortCode) */

void zx_mm7_Sender_ADD_ShortCode(struct zx_mm7_Sender_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = z;
    return;
  case -1:
    y = x->ShortCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Sender_DEL_ShortCode) */

void zx_mm7_Sender_DEL_ShortCode(struct zx_mm7_Sender_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ShortCode = (struct zx_mm7_ShortCode_s*)x->ShortCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ShortCode_s*)x->ShortCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Sender_NUM_Extension) */

int zx_mm7_Sender_NUM_Extension(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Sender_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_Sender_GET_Extension(struct zx_mm7_Sender_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Sender_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_Sender_POP_Extension(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Sender_PUSH_Extension) */

void zx_mm7_Sender_PUSH_Extension(struct zx_mm7_Sender_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_Sender_REV_Extension) */

void zx_mm7_Sender_REV_Extension(struct zx_mm7_Sender_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Sender_PUT_Extension) */

void zx_mm7_Sender_PUT_Extension(struct zx_mm7_Sender_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Sender_ADD_Extension) */

void zx_mm7_Sender_ADD_Extension(struct zx_mm7_Sender_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Sender_DEL_Extension) */

void zx_mm7_Sender_DEL_Extension(struct zx_mm7_Sender_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SenderAddress_NUM_RFC2822Address) */

int zx_mm7_SenderAddress_NUM_RFC2822Address(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RFC2822Address; y; ++n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SenderAddress_GET_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_SenderAddress_GET_RFC2822Address(struct zx_mm7_SenderAddress_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  for (y = x->RFC2822Address; n>=0 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SenderAddress_POP_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_SenderAddress_POP_RFC2822Address(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  y = x->RFC2822Address;
  if (y)
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SenderAddress_PUSH_RFC2822Address) */

void zx_mm7_SenderAddress_PUSH_RFC2822Address(struct zx_mm7_SenderAddress_s* x, struct zx_mm7_RFC2822Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RFC2822Address->gg.g;
  x->RFC2822Address = z;
}

/* FUNC(zx_mm7_SenderAddress_REV_RFC2822Address) */

void zx_mm7_SenderAddress_REV_RFC2822Address(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_RFC2822Address_s* nxt;
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  y = x->RFC2822Address;
  if (!y) return;
  x->RFC2822Address = 0;
  while (y) {
    nxt = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
    y->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SenderAddress_PUT_RFC2822Address) */

void zx_mm7_SenderAddress_PUT_RFC2822Address(struct zx_mm7_SenderAddress_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  y = x->RFC2822Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RFC2822Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SenderAddress_ADD_RFC2822Address) */

void zx_mm7_SenderAddress_ADD_RFC2822Address(struct zx_mm7_SenderAddress_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = z;
    return;
  case -1:
    y = x->RFC2822Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SenderAddress_DEL_RFC2822Address) */

void zx_mm7_SenderAddress_DEL_RFC2822Address(struct zx_mm7_SenderAddress_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SenderAddress_NUM_Number) */

int zx_mm7_SenderAddress_NUM_Number(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_Number_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Number; y; ++n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SenderAddress_GET_Number) */

struct zx_mm7_Number_s* zx_mm7_SenderAddress_GET_Number(struct zx_mm7_SenderAddress_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  for (y = x->Number; n>=0 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SenderAddress_POP_Number) */

struct zx_mm7_Number_s* zx_mm7_SenderAddress_POP_Number(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  y = x->Number;
  if (y)
    x->Number = (struct zx_mm7_Number_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SenderAddress_PUSH_Number) */

void zx_mm7_SenderAddress_PUSH_Number(struct zx_mm7_SenderAddress_s* x, struct zx_mm7_Number_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Number->gg.g;
  x->Number = z;
}

/* FUNC(zx_mm7_SenderAddress_REV_Number) */

void zx_mm7_SenderAddress_REV_Number(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_Number_s* nxt;
  struct zx_mm7_Number_s* y;
  if (!x) return;
  y = x->Number;
  if (!y) return;
  x->Number = 0;
  while (y) {
    nxt = (struct zx_mm7_Number_s*)y->gg.g.n;
    y->gg.g.n = &x->Number->gg.g;
    x->Number = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SenderAddress_PUT_Number) */

void zx_mm7_SenderAddress_PUT_Number(struct zx_mm7_SenderAddress_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  y = x->Number;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Number = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SenderAddress_ADD_Number) */

void zx_mm7_SenderAddress_ADD_Number(struct zx_mm7_SenderAddress_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Number->gg.g;
    x->Number = z;
    return;
  case -1:
    y = x->Number;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SenderAddress_DEL_Number) */

void zx_mm7_SenderAddress_DEL_Number(struct zx_mm7_SenderAddress_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Number = (struct zx_mm7_Number_s*)x->Number->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Number_s*)x->Number;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SenderAddress_NUM_ShortCode) */

int zx_mm7_SenderAddress_NUM_ShortCode(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ShortCode; y; ++n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SenderAddress_GET_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_SenderAddress_GET_ShortCode(struct zx_mm7_SenderAddress_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  for (y = x->ShortCode; n>=0 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SenderAddress_POP_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_SenderAddress_POP_ShortCode(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  y = x->ShortCode;
  if (y)
    x->ShortCode = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SenderAddress_PUSH_ShortCode) */

void zx_mm7_SenderAddress_PUSH_ShortCode(struct zx_mm7_SenderAddress_s* x, struct zx_mm7_ShortCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ShortCode->gg.g;
  x->ShortCode = z;
}

/* FUNC(zx_mm7_SenderAddress_REV_ShortCode) */

void zx_mm7_SenderAddress_REV_ShortCode(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_ShortCode_s* nxt;
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  y = x->ShortCode;
  if (!y) return;
  x->ShortCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SenderAddress_PUT_ShortCode) */

void zx_mm7_SenderAddress_PUT_ShortCode(struct zx_mm7_SenderAddress_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  y = x->ShortCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ShortCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SenderAddress_ADD_ShortCode) */

void zx_mm7_SenderAddress_ADD_ShortCode(struct zx_mm7_SenderAddress_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = z;
    return;
  case -1:
    y = x->ShortCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SenderAddress_DEL_ShortCode) */

void zx_mm7_SenderAddress_DEL_ShortCode(struct zx_mm7_SenderAddress_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ShortCode = (struct zx_mm7_ShortCode_s*)x->ShortCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ShortCode_s*)x->ShortCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SenderAddress_NUM_Extension) */

int zx_mm7_SenderAddress_NUM_Extension(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SenderAddress_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_SenderAddress_GET_Extension(struct zx_mm7_SenderAddress_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SenderAddress_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_SenderAddress_POP_Extension(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SenderAddress_PUSH_Extension) */

void zx_mm7_SenderAddress_PUSH_Extension(struct zx_mm7_SenderAddress_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_SenderAddress_REV_Extension) */

void zx_mm7_SenderAddress_REV_Extension(struct zx_mm7_SenderAddress_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SenderAddress_PUT_Extension) */

void zx_mm7_SenderAddress_PUT_Extension(struct zx_mm7_SenderAddress_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SenderAddress_ADD_Extension) */

void zx_mm7_SenderAddress_ADD_Extension(struct zx_mm7_SenderAddress_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SenderAddress_DEL_Extension) */

void zx_mm7_SenderAddress_DEL_Extension(struct zx_mm7_SenderAddress_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SenderIdentification_NUM_VASPID) */

int zx_mm7_SenderIdentification_NUM_VASPID(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASPID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SenderIdentification_GET_VASPID) */

struct zx_elem_s* zx_mm7_SenderIdentification_GET_VASPID(struct zx_mm7_SenderIdentification_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VASPID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SenderIdentification_POP_VASPID) */

struct zx_elem_s* zx_mm7_SenderIdentification_POP_VASPID(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VASPID;
  if (y)
    x->VASPID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SenderIdentification_PUSH_VASPID) */

void zx_mm7_SenderIdentification_PUSH_VASPID(struct zx_mm7_SenderIdentification_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VASPID->g;
  x->VASPID = z;
}

/* FUNC(zx_mm7_SenderIdentification_REV_VASPID) */

void zx_mm7_SenderIdentification_REV_VASPID(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VASPID;
  if (!y) return;
  x->VASPID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VASPID->g;
    x->VASPID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SenderIdentification_PUT_VASPID) */

void zx_mm7_SenderIdentification_PUT_VASPID(struct zx_mm7_SenderIdentification_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VASPID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VASPID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SenderIdentification_ADD_VASPID) */

void zx_mm7_SenderIdentification_ADD_VASPID(struct zx_mm7_SenderIdentification_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VASPID->g;
    x->VASPID = z;
    return;
  case -1:
    y = x->VASPID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASPID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SenderIdentification_DEL_VASPID) */

void zx_mm7_SenderIdentification_DEL_VASPID(struct zx_mm7_SenderIdentification_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASPID = (struct zx_elem_s*)x->VASPID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VASPID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASPID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SenderIdentification_NUM_VASID) */

int zx_mm7_SenderIdentification_NUM_VASID(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SenderIdentification_GET_VASID) */

struct zx_elem_s* zx_mm7_SenderIdentification_GET_VASID(struct zx_mm7_SenderIdentification_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VASID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SenderIdentification_POP_VASID) */

struct zx_elem_s* zx_mm7_SenderIdentification_POP_VASID(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VASID;
  if (y)
    x->VASID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SenderIdentification_PUSH_VASID) */

void zx_mm7_SenderIdentification_PUSH_VASID(struct zx_mm7_SenderIdentification_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VASID->g;
  x->VASID = z;
}

/* FUNC(zx_mm7_SenderIdentification_REV_VASID) */

void zx_mm7_SenderIdentification_REV_VASID(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VASID;
  if (!y) return;
  x->VASID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VASID->g;
    x->VASID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SenderIdentification_PUT_VASID) */

void zx_mm7_SenderIdentification_PUT_VASID(struct zx_mm7_SenderIdentification_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VASID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VASID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SenderIdentification_ADD_VASID) */

void zx_mm7_SenderIdentification_ADD_VASID(struct zx_mm7_SenderIdentification_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VASID->g;
    x->VASID = z;
    return;
  case -1:
    y = x->VASID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SenderIdentification_DEL_VASID) */

void zx_mm7_SenderIdentification_DEL_VASID(struct zx_mm7_SenderIdentification_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASID = (struct zx_elem_s*)x->VASID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VASID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SenderIdentification_NUM_SenderAddress) */

int zx_mm7_SenderIdentification_NUM_SenderAddress(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_mm7_SenderAddress_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SenderAddress; y; ++n, y = (struct zx_mm7_SenderAddress_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SenderIdentification_GET_SenderAddress) */

struct zx_mm7_SenderAddress_s* zx_mm7_SenderIdentification_GET_SenderAddress(struct zx_mm7_SenderIdentification_s* x, int n)
{
  struct zx_mm7_SenderAddress_s* y;
  if (!x) return 0;
  for (y = x->SenderAddress; n>=0 && y; --n, y = (struct zx_mm7_SenderAddress_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SenderIdentification_POP_SenderAddress) */

struct zx_mm7_SenderAddress_s* zx_mm7_SenderIdentification_POP_SenderAddress(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_mm7_SenderAddress_s* y;
  if (!x) return 0;
  y = x->SenderAddress;
  if (y)
    x->SenderAddress = (struct zx_mm7_SenderAddress_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SenderIdentification_PUSH_SenderAddress) */

void zx_mm7_SenderIdentification_PUSH_SenderAddress(struct zx_mm7_SenderIdentification_s* x, struct zx_mm7_SenderAddress_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SenderAddress->gg.g;
  x->SenderAddress = z;
}

/* FUNC(zx_mm7_SenderIdentification_REV_SenderAddress) */

void zx_mm7_SenderIdentification_REV_SenderAddress(struct zx_mm7_SenderIdentification_s* x)
{
  struct zx_mm7_SenderAddress_s* nxt;
  struct zx_mm7_SenderAddress_s* y;
  if (!x) return;
  y = x->SenderAddress;
  if (!y) return;
  x->SenderAddress = 0;
  while (y) {
    nxt = (struct zx_mm7_SenderAddress_s*)y->gg.g.n;
    y->gg.g.n = &x->SenderAddress->gg.g;
    x->SenderAddress = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SenderIdentification_PUT_SenderAddress) */

void zx_mm7_SenderIdentification_PUT_SenderAddress(struct zx_mm7_SenderIdentification_s* x, int n, struct zx_mm7_SenderAddress_s* z)
{
  struct zx_mm7_SenderAddress_s* y;
  if (!x || !z) return;
  y = x->SenderAddress;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SenderAddress = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderAddress_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SenderIdentification_ADD_SenderAddress) */

void zx_mm7_SenderIdentification_ADD_SenderAddress(struct zx_mm7_SenderIdentification_s* x, int n, struct zx_mm7_SenderAddress_s* z)
{
  struct zx_mm7_SenderAddress_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SenderAddress->gg.g;
    x->SenderAddress = z;
    return;
  case -1:
    y = x->SenderAddress;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderAddress_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderAddress; n > 1 && y; --n, y = (struct zx_mm7_SenderAddress_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SenderIdentification_DEL_SenderAddress) */

void zx_mm7_SenderIdentification_DEL_SenderAddress(struct zx_mm7_SenderIdentification_s* x, int n)
{
  struct zx_mm7_SenderAddress_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SenderAddress = (struct zx_mm7_SenderAddress_s*)x->SenderAddress->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_SenderAddress_s*)x->SenderAddress;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderAddress_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderAddress; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderAddress_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif











/* FUNC(zx_mm7_ShortCode_GET_addressCoding) */
struct zx_str* zx_mm7_ShortCode_GET_addressCoding(struct zx_mm7_ShortCode_s* x) { return x->addressCoding; }
/* FUNC(zx_mm7_ShortCode_PUT_addressCoding) */
void zx_mm7_ShortCode_PUT_addressCoding(struct zx_mm7_ShortCode_s* x, struct zx_str* y) { x->addressCoding = y; }
/* FUNC(zx_mm7_ShortCode_GET_displayOnly) */
struct zx_str* zx_mm7_ShortCode_GET_displayOnly(struct zx_mm7_ShortCode_s* x) { return x->displayOnly; }
/* FUNC(zx_mm7_ShortCode_PUT_displayOnly) */
void zx_mm7_ShortCode_PUT_displayOnly(struct zx_mm7_ShortCode_s* x, struct zx_str* y) { x->displayOnly = y; }
/* FUNC(zx_mm7_ShortCode_GET_id) */
struct zx_str* zx_mm7_ShortCode_GET_id(struct zx_mm7_ShortCode_s* x) { return x->id; }
/* FUNC(zx_mm7_ShortCode_PUT_id) */
void zx_mm7_ShortCode_PUT_id(struct zx_mm7_ShortCode_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Status_NUM_StatusCode) */

int zx_mm7_Status_NUM_StatusCode(struct zx_mm7_Status_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_Status_GET_StatusCode) */

struct zx_elem_s* zx_mm7_Status_GET_StatusCode(struct zx_mm7_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_Status_POP_StatusCode) */

struct zx_elem_s* zx_mm7_Status_POP_StatusCode(struct zx_mm7_Status_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_Status_PUSH_StatusCode) */

void zx_mm7_Status_PUSH_StatusCode(struct zx_mm7_Status_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusCode->g;
  x->StatusCode = z;
}

/* FUNC(zx_mm7_Status_REV_StatusCode) */

void zx_mm7_Status_REV_StatusCode(struct zx_mm7_Status_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->StatusCode->g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Status_PUT_StatusCode) */

void zx_mm7_Status_PUT_StatusCode(struct zx_mm7_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_Status_ADD_StatusCode) */

void zx_mm7_Status_ADD_StatusCode(struct zx_mm7_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->StatusCode->g;
    x->StatusCode = z;
    return;
  case -1:
    y = x->StatusCode;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_Status_DEL_StatusCode) */

void zx_mm7_Status_DEL_StatusCode(struct zx_mm7_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_elem_s*)x->StatusCode->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->StatusCode;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Status_NUM_StatusText) */

int zx_mm7_Status_NUM_StatusText(struct zx_mm7_Status_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusText; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_Status_GET_StatusText) */

struct zx_elem_s* zx_mm7_Status_GET_StatusText(struct zx_mm7_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusText; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_Status_POP_StatusText) */

struct zx_elem_s* zx_mm7_Status_POP_StatusText(struct zx_mm7_Status_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusText;
  if (y)
    x->StatusText = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_Status_PUSH_StatusText) */

void zx_mm7_Status_PUSH_StatusText(struct zx_mm7_Status_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusText->g;
  x->StatusText = z;
}

/* FUNC(zx_mm7_Status_REV_StatusText) */

void zx_mm7_Status_REV_StatusText(struct zx_mm7_Status_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->StatusText;
  if (!y) return;
  x->StatusText = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->StatusText->g;
    x->StatusText = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Status_PUT_StatusText) */

void zx_mm7_Status_PUT_StatusText(struct zx_mm7_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->StatusText;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->StatusText = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_Status_ADD_StatusText) */

void zx_mm7_Status_ADD_StatusText(struct zx_mm7_Status_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->StatusText->g;
    x->StatusText = z;
    return;
  case -1:
    y = x->StatusText;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusText; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_Status_DEL_StatusText) */

void zx_mm7_Status_DEL_StatusText(struct zx_mm7_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusText = (struct zx_elem_s*)x->StatusText->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->StatusText;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->StatusText; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_Status_NUM_Details) */

int zx_mm7_Status_NUM_Details(struct zx_mm7_Status_s* x)
{
  struct zx_mm7_Details_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Details; y; ++n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_Status_GET_Details) */

struct zx_mm7_Details_s* zx_mm7_Status_GET_Details(struct zx_mm7_Status_s* x, int n)
{
  struct zx_mm7_Details_s* y;
  if (!x) return 0;
  for (y = x->Details; n>=0 && y; --n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_Status_POP_Details) */

struct zx_mm7_Details_s* zx_mm7_Status_POP_Details(struct zx_mm7_Status_s* x)
{
  struct zx_mm7_Details_s* y;
  if (!x) return 0;
  y = x->Details;
  if (y)
    x->Details = (struct zx_mm7_Details_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_Status_PUSH_Details) */

void zx_mm7_Status_PUSH_Details(struct zx_mm7_Status_s* x, struct zx_mm7_Details_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Details->gg.g;
  x->Details = z;
}

/* FUNC(zx_mm7_Status_REV_Details) */

void zx_mm7_Status_REV_Details(struct zx_mm7_Status_s* x)
{
  struct zx_mm7_Details_s* nxt;
  struct zx_mm7_Details_s* y;
  if (!x) return;
  y = x->Details;
  if (!y) return;
  x->Details = 0;
  while (y) {
    nxt = (struct zx_mm7_Details_s*)y->gg.g.n;
    y->gg.g.n = &x->Details->gg.g;
    x->Details = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_Status_PUT_Details) */

void zx_mm7_Status_PUT_Details(struct zx_mm7_Status_s* x, int n, struct zx_mm7_Details_s* z)
{
  struct zx_mm7_Details_s* y;
  if (!x || !z) return;
  y = x->Details;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Details = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_Status_ADD_Details) */

void zx_mm7_Status_ADD_Details(struct zx_mm7_Status_s* x, int n, struct zx_mm7_Details_s* z)
{
  struct zx_mm7_Details_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Details->gg.g;
    x->Details = z;
    return;
  case -1:
    y = x->Details;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Details; n > 1 && y; --n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_Status_DEL_Details) */

void zx_mm7_Status_DEL_Details(struct zx_mm7_Status_s* x, int n)
{
  struct zx_mm7_Details_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Details = (struct zx_mm7_Details_s*)x->Details->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Details_s*)x->Details;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Details; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Details_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_MM7Version) */

int zx_mm7_SubmitReq_NUM_MM7Version(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_MM7Version(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_MM7Version(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_MM7Version) */

void zx_mm7_SubmitReq_PUSH_MM7Version(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_MM7Version) */

void zx_mm7_SubmitReq_REV_MM7Version(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_MM7Version) */

void zx_mm7_SubmitReq_PUT_MM7Version(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_MM7Version) */

void zx_mm7_SubmitReq_ADD_MM7Version(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_MM7Version) */

void zx_mm7_SubmitReq_DEL_MM7Version(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_SenderIdentification) */

int zx_mm7_SubmitReq_NUM_SenderIdentification(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SenderIdentification; y; ++n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_SenderIdentification) */

struct zx_mm7_SenderIdentification_s* zx_mm7_SubmitReq_GET_SenderIdentification(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return 0;
  for (y = x->SenderIdentification; n>=0 && y; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_SenderIdentification) */

struct zx_mm7_SenderIdentification_s* zx_mm7_SubmitReq_POP_SenderIdentification(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return 0;
  y = x->SenderIdentification;
  if (y)
    x->SenderIdentification = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_SenderIdentification) */

void zx_mm7_SubmitReq_PUSH_SenderIdentification(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_SenderIdentification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SenderIdentification->gg.g;
  x->SenderIdentification = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_SenderIdentification) */

void zx_mm7_SubmitReq_REV_SenderIdentification(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* nxt;
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return;
  y = x->SenderIdentification;
  if (!y) return;
  x->SenderIdentification = 0;
  while (y) {
    nxt = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n;
    y->gg.g.n = &x->SenderIdentification->gg.g;
    x->SenderIdentification = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_SenderIdentification) */

void zx_mm7_SubmitReq_PUT_SenderIdentification(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_SenderIdentification_s* z)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x || !z) return;
  y = x->SenderIdentification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SenderIdentification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_SenderIdentification) */

void zx_mm7_SubmitReq_ADD_SenderIdentification(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_SenderIdentification_s* z)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SenderIdentification->gg.g;
    x->SenderIdentification = z;
    return;
  case -1:
    y = x->SenderIdentification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderIdentification; n > 1 && y; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_SenderIdentification) */

void zx_mm7_SubmitReq_DEL_SenderIdentification(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SenderIdentification = (struct zx_mm7_SenderIdentification_s*)x->SenderIdentification->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_SenderIdentification_s*)x->SenderIdentification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderIdentification; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_Extension) */

int zx_mm7_SubmitReq_NUM_Extension(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_SubmitReq_GET_Extension(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_SubmitReq_POP_Extension(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_Extension) */

void zx_mm7_SubmitReq_PUSH_Extension(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_Extension) */

void zx_mm7_SubmitReq_REV_Extension(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_Extension) */

void zx_mm7_SubmitReq_PUT_Extension(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_Extension) */

void zx_mm7_SubmitReq_ADD_Extension(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_Extension) */

void zx_mm7_SubmitReq_DEL_Extension(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_Recipients) */

int zx_mm7_SubmitReq_NUM_Recipients(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Recipients_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Recipients; y; ++n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_Recipients) */

struct zx_mm7_Recipients_s* zx_mm7_SubmitReq_GET_Recipients(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return 0;
  for (y = x->Recipients; n>=0 && y; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_Recipients) */

struct zx_mm7_Recipients_s* zx_mm7_SubmitReq_POP_Recipients(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return 0;
  y = x->Recipients;
  if (y)
    x->Recipients = (struct zx_mm7_Recipients_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_Recipients) */

void zx_mm7_SubmitReq_PUSH_Recipients(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_Recipients_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Recipients->gg.g;
  x->Recipients = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_Recipients) */

void zx_mm7_SubmitReq_REV_Recipients(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Recipients_s* nxt;
  struct zx_mm7_Recipients_s* y;
  if (!x) return;
  y = x->Recipients;
  if (!y) return;
  x->Recipients = 0;
  while (y) {
    nxt = (struct zx_mm7_Recipients_s*)y->gg.g.n;
    y->gg.g.n = &x->Recipients->gg.g;
    x->Recipients = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_Recipients) */

void zx_mm7_SubmitReq_PUT_Recipients(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_Recipients_s* z)
{
  struct zx_mm7_Recipients_s* y;
  if (!x || !z) return;
  y = x->Recipients;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Recipients = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_Recipients) */

void zx_mm7_SubmitReq_ADD_Recipients(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_Recipients_s* z)
{
  struct zx_mm7_Recipients_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Recipients->gg.g;
    x->Recipients = z;
    return;
  case -1:
    y = x->Recipients;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipients; n > 1 && y; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_Recipients) */

void zx_mm7_SubmitReq_DEL_Recipients(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_Recipients_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Recipients = (struct zx_mm7_Recipients_s*)x->Recipients->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Recipients_s*)x->Recipients;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Recipients; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Recipients_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_PreferredChannels) */

int zx_mm7_SubmitReq_NUM_PreferredChannels(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_PreferredChannels_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PreferredChannels; y; ++n, y = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_PreferredChannels) */

struct zx_mm7_PreferredChannels_s* zx_mm7_SubmitReq_GET_PreferredChannels(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_PreferredChannels_s* y;
  if (!x) return 0;
  for (y = x->PreferredChannels; n>=0 && y; --n, y = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_PreferredChannels) */

struct zx_mm7_PreferredChannels_s* zx_mm7_SubmitReq_POP_PreferredChannels(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_PreferredChannels_s* y;
  if (!x) return 0;
  y = x->PreferredChannels;
  if (y)
    x->PreferredChannels = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_PreferredChannels) */

void zx_mm7_SubmitReq_PUSH_PreferredChannels(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_PreferredChannels_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PreferredChannels->gg.g;
  x->PreferredChannels = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_PreferredChannels) */

void zx_mm7_SubmitReq_REV_PreferredChannels(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_PreferredChannels_s* nxt;
  struct zx_mm7_PreferredChannels_s* y;
  if (!x) return;
  y = x->PreferredChannels;
  if (!y) return;
  x->PreferredChannels = 0;
  while (y) {
    nxt = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n;
    y->gg.g.n = &x->PreferredChannels->gg.g;
    x->PreferredChannels = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_PreferredChannels) */

void zx_mm7_SubmitReq_PUT_PreferredChannels(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_PreferredChannels_s* z)
{
  struct zx_mm7_PreferredChannels_s* y;
  if (!x || !z) return;
  y = x->PreferredChannels;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PreferredChannels = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_PreferredChannels) */

void zx_mm7_SubmitReq_ADD_PreferredChannels(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_PreferredChannels_s* z)
{
  struct zx_mm7_PreferredChannels_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PreferredChannels->gg.g;
    x->PreferredChannels = z;
    return;
  case -1:
    y = x->PreferredChannels;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PreferredChannels; n > 1 && y; --n, y = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_PreferredChannels) */

void zx_mm7_SubmitReq_DEL_PreferredChannels(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_PreferredChannels_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PreferredChannels = (struct zx_mm7_PreferredChannels_s*)x->PreferredChannels->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_PreferredChannels_s*)x->PreferredChannels;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PreferredChannels; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_PreferredChannels_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ServiceCode) */

int zx_mm7_SubmitReq_NUM_ServiceCode(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ServiceCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceCode; y; ++n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ServiceCode) */

struct zx_mm7_ServiceCode_s* zx_mm7_SubmitReq_GET_ServiceCode(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return 0;
  for (y = x->ServiceCode; n>=0 && y; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ServiceCode) */

struct zx_mm7_ServiceCode_s* zx_mm7_SubmitReq_POP_ServiceCode(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return 0;
  y = x->ServiceCode;
  if (y)
    x->ServiceCode = (struct zx_mm7_ServiceCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ServiceCode) */

void zx_mm7_SubmitReq_PUSH_ServiceCode(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_ServiceCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceCode->gg.g;
  x->ServiceCode = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ServiceCode) */

void zx_mm7_SubmitReq_REV_ServiceCode(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ServiceCode_s* nxt;
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return;
  y = x->ServiceCode;
  if (!y) return;
  x->ServiceCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ServiceCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceCode->gg.g;
    x->ServiceCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ServiceCode) */

void zx_mm7_SubmitReq_PUT_ServiceCode(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_ServiceCode_s* z)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x || !z) return;
  y = x->ServiceCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ServiceCode) */

void zx_mm7_SubmitReq_ADD_ServiceCode(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_ServiceCode_s* z)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceCode->gg.g;
    x->ServiceCode = z;
    return;
  case -1:
    y = x->ServiceCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceCode; n > 1 && y; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ServiceCode) */

void zx_mm7_SubmitReq_DEL_ServiceCode(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceCode = (struct zx_mm7_ServiceCode_s*)x->ServiceCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ServiceCode_s*)x->ServiceCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_LinkedID) */

int zx_mm7_SubmitReq_NUM_LinkedID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LinkedID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_LinkedID) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_LinkedID(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->LinkedID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_LinkedID) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_LinkedID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->LinkedID;
  if (y)
    x->LinkedID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_LinkedID) */

void zx_mm7_SubmitReq_PUSH_LinkedID(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->LinkedID->g;
  x->LinkedID = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_LinkedID) */

void zx_mm7_SubmitReq_REV_LinkedID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->LinkedID;
  if (!y) return;
  x->LinkedID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->LinkedID->g;
    x->LinkedID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_LinkedID) */

void zx_mm7_SubmitReq_PUT_LinkedID(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->LinkedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->LinkedID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_LinkedID) */

void zx_mm7_SubmitReq_ADD_LinkedID(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->LinkedID->g;
    x->LinkedID = z;
    return;
  case -1:
    y = x->LinkedID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->LinkedID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_LinkedID) */

void zx_mm7_SubmitReq_DEL_LinkedID(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LinkedID = (struct zx_elem_s*)x->LinkedID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->LinkedID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->LinkedID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_MessageClass) */

int zx_mm7_SubmitReq_NUM_MessageClass(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageClass; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_MessageClass) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_MessageClass(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageClass; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_MessageClass) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_MessageClass(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageClass;
  if (y)
    x->MessageClass = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_MessageClass) */

void zx_mm7_SubmitReq_PUSH_MessageClass(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageClass->g;
  x->MessageClass = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_MessageClass) */

void zx_mm7_SubmitReq_REV_MessageClass(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageClass;
  if (!y) return;
  x->MessageClass = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageClass->g;
    x->MessageClass = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_MessageClass) */

void zx_mm7_SubmitReq_PUT_MessageClass(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageClass;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageClass = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_MessageClass) */

void zx_mm7_SubmitReq_ADD_MessageClass(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageClass->g;
    x->MessageClass = z;
    return;
  case -1:
    y = x->MessageClass;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageClass; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_MessageClass) */

void zx_mm7_SubmitReq_DEL_MessageClass(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageClass = (struct zx_elem_s*)x->MessageClass->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageClass;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageClass; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_TimeStamp) */

int zx_mm7_SubmitReq_NUM_TimeStamp(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TimeStamp; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_TimeStamp) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_TimeStamp(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TimeStamp; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_TimeStamp) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_TimeStamp(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TimeStamp;
  if (y)
    x->TimeStamp = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_TimeStamp) */

void zx_mm7_SubmitReq_PUSH_TimeStamp(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TimeStamp->g;
  x->TimeStamp = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_TimeStamp) */

void zx_mm7_SubmitReq_REV_TimeStamp(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TimeStamp;
  if (!y) return;
  x->TimeStamp = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TimeStamp->g;
    x->TimeStamp = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_TimeStamp) */

void zx_mm7_SubmitReq_PUT_TimeStamp(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TimeStamp;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TimeStamp = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_TimeStamp) */

void zx_mm7_SubmitReq_ADD_TimeStamp(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TimeStamp->g;
    x->TimeStamp = z;
    return;
  case -1:
    y = x->TimeStamp;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_TimeStamp) */

void zx_mm7_SubmitReq_DEL_TimeStamp(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TimeStamp = (struct zx_elem_s*)x->TimeStamp->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TimeStamp;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ReplyCharging) */

int zx_mm7_SubmitReq_NUM_ReplyCharging(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ReplyCharging_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyCharging; y; ++n, y = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ReplyCharging) */

struct zx_mm7_ReplyCharging_s* zx_mm7_SubmitReq_GET_ReplyCharging(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_ReplyCharging_s* y;
  if (!x) return 0;
  for (y = x->ReplyCharging; n>=0 && y; --n, y = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ReplyCharging) */

struct zx_mm7_ReplyCharging_s* zx_mm7_SubmitReq_POP_ReplyCharging(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ReplyCharging_s* y;
  if (!x) return 0;
  y = x->ReplyCharging;
  if (y)
    x->ReplyCharging = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ReplyCharging) */

void zx_mm7_SubmitReq_PUSH_ReplyCharging(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_ReplyCharging_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReplyCharging->gg.g;
  x->ReplyCharging = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ReplyCharging) */

void zx_mm7_SubmitReq_REV_ReplyCharging(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ReplyCharging_s* nxt;
  struct zx_mm7_ReplyCharging_s* y;
  if (!x) return;
  y = x->ReplyCharging;
  if (!y) return;
  x->ReplyCharging = 0;
  while (y) {
    nxt = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n;
    y->gg.g.n = &x->ReplyCharging->gg.g;
    x->ReplyCharging = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ReplyCharging) */

void zx_mm7_SubmitReq_PUT_ReplyCharging(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_ReplyCharging_s* z)
{
  struct zx_mm7_ReplyCharging_s* y;
  if (!x || !z) return;
  y = x->ReplyCharging;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReplyCharging = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ReplyCharging) */

void zx_mm7_SubmitReq_ADD_ReplyCharging(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_ReplyCharging_s* z)
{
  struct zx_mm7_ReplyCharging_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReplyCharging->gg.g;
    x->ReplyCharging = z;
    return;
  case -1:
    y = x->ReplyCharging;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyCharging; n > 1 && y; --n, y = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ReplyCharging) */

void zx_mm7_SubmitReq_DEL_ReplyCharging(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_ReplyCharging_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyCharging = (struct zx_mm7_ReplyCharging_s*)x->ReplyCharging->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ReplyCharging_s*)x->ReplyCharging;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyCharging; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReplyCharging_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_EarliestDeliveryTime) */

int zx_mm7_SubmitReq_NUM_EarliestDeliveryTime(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EarliestDeliveryTime; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_EarliestDeliveryTime) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_EarliestDeliveryTime(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EarliestDeliveryTime; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_EarliestDeliveryTime) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_EarliestDeliveryTime(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EarliestDeliveryTime;
  if (y)
    x->EarliestDeliveryTime = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_EarliestDeliveryTime) */

void zx_mm7_SubmitReq_PUSH_EarliestDeliveryTime(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EarliestDeliveryTime->g;
  x->EarliestDeliveryTime = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_EarliestDeliveryTime) */

void zx_mm7_SubmitReq_REV_EarliestDeliveryTime(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EarliestDeliveryTime;
  if (!y) return;
  x->EarliestDeliveryTime = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EarliestDeliveryTime->g;
    x->EarliestDeliveryTime = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_EarliestDeliveryTime) */

void zx_mm7_SubmitReq_PUT_EarliestDeliveryTime(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EarliestDeliveryTime;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EarliestDeliveryTime = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_EarliestDeliveryTime) */

void zx_mm7_SubmitReq_ADD_EarliestDeliveryTime(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EarliestDeliveryTime->g;
    x->EarliestDeliveryTime = z;
    return;
  case -1:
    y = x->EarliestDeliveryTime;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EarliestDeliveryTime; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_EarliestDeliveryTime) */

void zx_mm7_SubmitReq_DEL_EarliestDeliveryTime(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EarliestDeliveryTime = (struct zx_elem_s*)x->EarliestDeliveryTime->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EarliestDeliveryTime;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EarliestDeliveryTime; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ExpiryDate) */

int zx_mm7_SubmitReq_NUM_ExpiryDate(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ExpiryDate; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ExpiryDate) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_ExpiryDate(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ExpiryDate; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ExpiryDate) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_ExpiryDate(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ExpiryDate;
  if (y)
    x->ExpiryDate = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ExpiryDate) */

void zx_mm7_SubmitReq_PUSH_ExpiryDate(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ExpiryDate->g;
  x->ExpiryDate = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ExpiryDate) */

void zx_mm7_SubmitReq_REV_ExpiryDate(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ExpiryDate;
  if (!y) return;
  x->ExpiryDate = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ExpiryDate->g;
    x->ExpiryDate = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ExpiryDate) */

void zx_mm7_SubmitReq_PUT_ExpiryDate(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ExpiryDate;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ExpiryDate = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ExpiryDate) */

void zx_mm7_SubmitReq_ADD_ExpiryDate(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ExpiryDate->g;
    x->ExpiryDate = z;
    return;
  case -1:
    y = x->ExpiryDate;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ExpiryDate; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ExpiryDate) */

void zx_mm7_SubmitReq_DEL_ExpiryDate(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ExpiryDate = (struct zx_elem_s*)x->ExpiryDate->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ExpiryDate;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ExpiryDate; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_DeliveryReport) */

int zx_mm7_SubmitReq_NUM_DeliveryReport(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeliveryReport; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_DeliveryReport) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_DeliveryReport(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DeliveryReport; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_DeliveryReport) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_DeliveryReport(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DeliveryReport;
  if (y)
    x->DeliveryReport = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_DeliveryReport) */

void zx_mm7_SubmitReq_PUSH_DeliveryReport(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DeliveryReport->g;
  x->DeliveryReport = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_DeliveryReport) */

void zx_mm7_SubmitReq_REV_DeliveryReport(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DeliveryReport;
  if (!y) return;
  x->DeliveryReport = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DeliveryReport->g;
    x->DeliveryReport = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_DeliveryReport) */

void zx_mm7_SubmitReq_PUT_DeliveryReport(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DeliveryReport;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DeliveryReport = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_DeliveryReport) */

void zx_mm7_SubmitReq_ADD_DeliveryReport(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DeliveryReport->g;
    x->DeliveryReport = z;
    return;
  case -1:
    y = x->DeliveryReport;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DeliveryReport; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_DeliveryReport) */

void zx_mm7_SubmitReq_DEL_DeliveryReport(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeliveryReport = (struct zx_elem_s*)x->DeliveryReport->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DeliveryReport;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DeliveryReport; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ReadReply) */

int zx_mm7_SubmitReq_NUM_ReadReply(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReadReply; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ReadReply) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_ReadReply(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReadReply; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ReadReply) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_ReadReply(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReadReply;
  if (y)
    x->ReadReply = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ReadReply) */

void zx_mm7_SubmitReq_PUSH_ReadReply(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReadReply->g;
  x->ReadReply = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ReadReply) */

void zx_mm7_SubmitReq_REV_ReadReply(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReadReply;
  if (!y) return;
  x->ReadReply = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReadReply->g;
    x->ReadReply = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ReadReply) */

void zx_mm7_SubmitReq_PUT_ReadReply(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReadReply;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReadReply = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ReadReply) */

void zx_mm7_SubmitReq_ADD_ReadReply(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReadReply->g;
    x->ReadReply = z;
    return;
  case -1:
    y = x->ReadReply;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReadReply; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ReadReply) */

void zx_mm7_SubmitReq_DEL_ReadReply(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReadReply = (struct zx_elem_s*)x->ReadReply->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReadReply;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReadReply; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_Priority) */

int zx_mm7_SubmitReq_NUM_Priority(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Priority; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_Priority) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_Priority(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Priority; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_Priority) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_Priority(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Priority;
  if (y)
    x->Priority = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_Priority) */

void zx_mm7_SubmitReq_PUSH_Priority(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Priority->g;
  x->Priority = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_Priority) */

void zx_mm7_SubmitReq_REV_Priority(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Priority;
  if (!y) return;
  x->Priority = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Priority->g;
    x->Priority = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_Priority) */

void zx_mm7_SubmitReq_PUT_Priority(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Priority;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Priority = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_Priority) */

void zx_mm7_SubmitReq_ADD_Priority(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Priority->g;
    x->Priority = z;
    return;
  case -1:
    y = x->Priority;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Priority; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_Priority) */

void zx_mm7_SubmitReq_DEL_Priority(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Priority = (struct zx_elem_s*)x->Priority->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Priority;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Priority; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_Subject) */

int zx_mm7_SubmitReq_NUM_Subject(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_Subject) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_Subject(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_Subject) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_Subject(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_Subject) */

void zx_mm7_SubmitReq_PUSH_Subject(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Subject->g;
  x->Subject = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_Subject) */

void zx_mm7_SubmitReq_REV_Subject(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Subject->g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_Subject) */

void zx_mm7_SubmitReq_PUT_Subject(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_Subject) */

void zx_mm7_SubmitReq_ADD_Subject(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Subject->g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_Subject) */

void zx_mm7_SubmitReq_DEL_Subject(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_elem_s*)x->Subject->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Subject;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ChargedParty) */

int zx_mm7_SubmitReq_NUM_ChargedParty(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ChargedParty; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ChargedParty) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_ChargedParty(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ChargedParty; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ChargedParty) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_ChargedParty(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ChargedParty;
  if (y)
    x->ChargedParty = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ChargedParty) */

void zx_mm7_SubmitReq_PUSH_ChargedParty(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ChargedParty->g;
  x->ChargedParty = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ChargedParty) */

void zx_mm7_SubmitReq_REV_ChargedParty(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ChargedParty;
  if (!y) return;
  x->ChargedParty = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ChargedParty->g;
    x->ChargedParty = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ChargedParty) */

void zx_mm7_SubmitReq_PUT_ChargedParty(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ChargedParty;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ChargedParty = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ChargedParty) */

void zx_mm7_SubmitReq_ADD_ChargedParty(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ChargedParty->g;
    x->ChargedParty = z;
    return;
  case -1:
    y = x->ChargedParty;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ChargedParty; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ChargedParty) */

void zx_mm7_SubmitReq_DEL_ChargedParty(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ChargedParty = (struct zx_elem_s*)x->ChargedParty->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ChargedParty;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ChargedParty; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ChargedPartyID) */

int zx_mm7_SubmitReq_NUM_ChargedPartyID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ChargedPartyID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ChargedPartyID) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_ChargedPartyID(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ChargedPartyID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ChargedPartyID) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_ChargedPartyID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ChargedPartyID;
  if (y)
    x->ChargedPartyID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ChargedPartyID) */

void zx_mm7_SubmitReq_PUSH_ChargedPartyID(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ChargedPartyID->g;
  x->ChargedPartyID = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ChargedPartyID) */

void zx_mm7_SubmitReq_REV_ChargedPartyID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ChargedPartyID;
  if (!y) return;
  x->ChargedPartyID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ChargedPartyID->g;
    x->ChargedPartyID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ChargedPartyID) */

void zx_mm7_SubmitReq_PUT_ChargedPartyID(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ChargedPartyID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ChargedPartyID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ChargedPartyID) */

void zx_mm7_SubmitReq_ADD_ChargedPartyID(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ChargedPartyID->g;
    x->ChargedPartyID = z;
    return;
  case -1:
    y = x->ChargedPartyID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ChargedPartyID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ChargedPartyID) */

void zx_mm7_SubmitReq_DEL_ChargedPartyID(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ChargedPartyID = (struct zx_elem_s*)x->ChargedPartyID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ChargedPartyID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ChargedPartyID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ThirdPartyPayer) */

int zx_mm7_SubmitReq_NUM_ThirdPartyPayer(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ThirdPartyPayer_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ThirdPartyPayer; y; ++n, y = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ThirdPartyPayer) */

struct zx_mm7_ThirdPartyPayer_s* zx_mm7_SubmitReq_GET_ThirdPartyPayer(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_ThirdPartyPayer_s* y;
  if (!x) return 0;
  for (y = x->ThirdPartyPayer; n>=0 && y; --n, y = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ThirdPartyPayer) */

struct zx_mm7_ThirdPartyPayer_s* zx_mm7_SubmitReq_POP_ThirdPartyPayer(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ThirdPartyPayer_s* y;
  if (!x) return 0;
  y = x->ThirdPartyPayer;
  if (y)
    x->ThirdPartyPayer = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ThirdPartyPayer) */

void zx_mm7_SubmitReq_PUSH_ThirdPartyPayer(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_ThirdPartyPayer_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ThirdPartyPayer->gg.g;
  x->ThirdPartyPayer = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ThirdPartyPayer) */

void zx_mm7_SubmitReq_REV_ThirdPartyPayer(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_ThirdPartyPayer_s* nxt;
  struct zx_mm7_ThirdPartyPayer_s* y;
  if (!x) return;
  y = x->ThirdPartyPayer;
  if (!y) return;
  x->ThirdPartyPayer = 0;
  while (y) {
    nxt = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n;
    y->gg.g.n = &x->ThirdPartyPayer->gg.g;
    x->ThirdPartyPayer = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ThirdPartyPayer) */

void zx_mm7_SubmitReq_PUT_ThirdPartyPayer(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_ThirdPartyPayer_s* z)
{
  struct zx_mm7_ThirdPartyPayer_s* y;
  if (!x || !z) return;
  y = x->ThirdPartyPayer;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ThirdPartyPayer = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ThirdPartyPayer) */

void zx_mm7_SubmitReq_ADD_ThirdPartyPayer(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_ThirdPartyPayer_s* z)
{
  struct zx_mm7_ThirdPartyPayer_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ThirdPartyPayer->gg.g;
    x->ThirdPartyPayer = z;
    return;
  case -1:
    y = x->ThirdPartyPayer;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ThirdPartyPayer; n > 1 && y; --n, y = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ThirdPartyPayer) */

void zx_mm7_SubmitReq_DEL_ThirdPartyPayer(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_ThirdPartyPayer_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ThirdPartyPayer = (struct zx_mm7_ThirdPartyPayer_s*)x->ThirdPartyPayer->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ThirdPartyPayer_s*)x->ThirdPartyPayer;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ThirdPartyPayer; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ThirdPartyPayer_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_DistributionIndicator) */

int zx_mm7_SubmitReq_NUM_DistributionIndicator(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DistributionIndicator; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_DistributionIndicator) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_DistributionIndicator(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DistributionIndicator; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_DistributionIndicator) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_DistributionIndicator(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DistributionIndicator;
  if (y)
    x->DistributionIndicator = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_DistributionIndicator) */

void zx_mm7_SubmitReq_PUSH_DistributionIndicator(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DistributionIndicator->g;
  x->DistributionIndicator = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_DistributionIndicator) */

void zx_mm7_SubmitReq_REV_DistributionIndicator(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DistributionIndicator;
  if (!y) return;
  x->DistributionIndicator = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DistributionIndicator->g;
    x->DistributionIndicator = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_DistributionIndicator) */

void zx_mm7_SubmitReq_PUT_DistributionIndicator(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DistributionIndicator;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DistributionIndicator = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_DistributionIndicator) */

void zx_mm7_SubmitReq_ADD_DistributionIndicator(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DistributionIndicator->g;
    x->DistributionIndicator = z;
    return;
  case -1:
    y = x->DistributionIndicator;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DistributionIndicator; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_DistributionIndicator) */

void zx_mm7_SubmitReq_DEL_DistributionIndicator(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DistributionIndicator = (struct zx_elem_s*)x->DistributionIndicator->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DistributionIndicator;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DistributionIndicator; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_DeliveryCondition) */

int zx_mm7_SubmitReq_NUM_DeliveryCondition(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_DeliveryCondition_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeliveryCondition; y; ++n, y = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_DeliveryCondition) */

struct zx_mm7_DeliveryCondition_s* zx_mm7_SubmitReq_GET_DeliveryCondition(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_DeliveryCondition_s* y;
  if (!x) return 0;
  for (y = x->DeliveryCondition; n>=0 && y; --n, y = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_DeliveryCondition) */

struct zx_mm7_DeliveryCondition_s* zx_mm7_SubmitReq_POP_DeliveryCondition(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_DeliveryCondition_s* y;
  if (!x) return 0;
  y = x->DeliveryCondition;
  if (y)
    x->DeliveryCondition = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_DeliveryCondition) */

void zx_mm7_SubmitReq_PUSH_DeliveryCondition(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_DeliveryCondition_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeliveryCondition->gg.g;
  x->DeliveryCondition = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_DeliveryCondition) */

void zx_mm7_SubmitReq_REV_DeliveryCondition(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_DeliveryCondition_s* nxt;
  struct zx_mm7_DeliveryCondition_s* y;
  if (!x) return;
  y = x->DeliveryCondition;
  if (!y) return;
  x->DeliveryCondition = 0;
  while (y) {
    nxt = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n;
    y->gg.g.n = &x->DeliveryCondition->gg.g;
    x->DeliveryCondition = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_DeliveryCondition) */

void zx_mm7_SubmitReq_PUT_DeliveryCondition(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_DeliveryCondition_s* z)
{
  struct zx_mm7_DeliveryCondition_s* y;
  if (!x || !z) return;
  y = x->DeliveryCondition;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeliveryCondition = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_DeliveryCondition) */

void zx_mm7_SubmitReq_ADD_DeliveryCondition(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_DeliveryCondition_s* z)
{
  struct zx_mm7_DeliveryCondition_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeliveryCondition->gg.g;
    x->DeliveryCondition = z;
    return;
  case -1:
    y = x->DeliveryCondition;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliveryCondition; n > 1 && y; --n, y = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_DeliveryCondition) */

void zx_mm7_SubmitReq_DEL_DeliveryCondition(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_DeliveryCondition_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeliveryCondition = (struct zx_mm7_DeliveryCondition_s*)x->DeliveryCondition->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_DeliveryCondition_s*)x->DeliveryCondition;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliveryCondition; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliveryCondition_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ApplicID) */

int zx_mm7_SubmitReq_NUM_ApplicID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ApplicID) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_ApplicID(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ApplicID) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_ApplicID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ApplicID;
  if (y)
    x->ApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ApplicID) */

void zx_mm7_SubmitReq_PUSH_ApplicID(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ApplicID->g;
  x->ApplicID = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ApplicID) */

void zx_mm7_SubmitReq_REV_ApplicID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ApplicID;
  if (!y) return;
  x->ApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ApplicID->g;
    x->ApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ApplicID) */

void zx_mm7_SubmitReq_PUT_ApplicID(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ApplicID) */

void zx_mm7_SubmitReq_ADD_ApplicID(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ApplicID->g;
    x->ApplicID = z;
    return;
  case -1:
    y = x->ApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ApplicID) */

void zx_mm7_SubmitReq_DEL_ApplicID(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicID = (struct zx_elem_s*)x->ApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ReplyApplicID) */

int zx_mm7_SubmitReq_NUM_ReplyApplicID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyApplicID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ReplyApplicID) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_ReplyApplicID(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReplyApplicID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ReplyApplicID) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_ReplyApplicID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReplyApplicID;
  if (y)
    x->ReplyApplicID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ReplyApplicID) */

void zx_mm7_SubmitReq_PUSH_ReplyApplicID(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReplyApplicID->g;
  x->ReplyApplicID = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ReplyApplicID) */

void zx_mm7_SubmitReq_REV_ReplyApplicID(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReplyApplicID;
  if (!y) return;
  x->ReplyApplicID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ReplyApplicID) */

void zx_mm7_SubmitReq_PUT_ReplyApplicID(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReplyApplicID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReplyApplicID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ReplyApplicID) */

void zx_mm7_SubmitReq_ADD_ReplyApplicID(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReplyApplicID->g;
    x->ReplyApplicID = z;
    return;
  case -1:
    y = x->ReplyApplicID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ReplyApplicID) */

void zx_mm7_SubmitReq_DEL_ReplyApplicID(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyApplicID = (struct zx_elem_s*)x->ReplyApplicID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReplyApplicID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplyApplicID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_AuxApplicInfo) */

int zx_mm7_SubmitReq_NUM_AuxApplicInfo(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_AuxApplicInfo(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AuxApplicInfo; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_AuxApplicInfo) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_AuxApplicInfo(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AuxApplicInfo;
  if (y)
    x->AuxApplicInfo = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_AuxApplicInfo) */

void zx_mm7_SubmitReq_PUSH_AuxApplicInfo(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AuxApplicInfo->g;
  x->AuxApplicInfo = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_AuxApplicInfo) */

void zx_mm7_SubmitReq_REV_AuxApplicInfo(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  x->AuxApplicInfo = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_AuxApplicInfo) */

void zx_mm7_SubmitReq_PUT_AuxApplicInfo(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AuxApplicInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AuxApplicInfo = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_AuxApplicInfo) */

void zx_mm7_SubmitReq_ADD_AuxApplicInfo(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AuxApplicInfo->g;
    x->AuxApplicInfo = z;
    return;
  case -1:
    y = x->AuxApplicInfo;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_AuxApplicInfo) */

void zx_mm7_SubmitReq_DEL_AuxApplicInfo(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuxApplicInfo = (struct zx_elem_s*)x->AuxApplicInfo->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AuxApplicInfo;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AuxApplicInfo; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_ContentClass) */

int zx_mm7_SubmitReq_NUM_ContentClass(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ContentClass; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_ContentClass) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_ContentClass(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ContentClass; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_ContentClass) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_ContentClass(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ContentClass;
  if (y)
    x->ContentClass = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_ContentClass) */

void zx_mm7_SubmitReq_PUSH_ContentClass(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ContentClass->g;
  x->ContentClass = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_ContentClass) */

void zx_mm7_SubmitReq_REV_ContentClass(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ContentClass;
  if (!y) return;
  x->ContentClass = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ContentClass->g;
    x->ContentClass = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_ContentClass) */

void zx_mm7_SubmitReq_PUT_ContentClass(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ContentClass;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ContentClass = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_ContentClass) */

void zx_mm7_SubmitReq_ADD_ContentClass(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ContentClass->g;
    x->ContentClass = z;
    return;
  case -1:
    y = x->ContentClass;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ContentClass; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_ContentClass) */

void zx_mm7_SubmitReq_DEL_ContentClass(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ContentClass = (struct zx_elem_s*)x->ContentClass->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ContentClass;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ContentClass; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_DRMContent) */

int zx_mm7_SubmitReq_NUM_DRMContent(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DRMContent; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_DRMContent) */

struct zx_elem_s* zx_mm7_SubmitReq_GET_DRMContent(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DRMContent; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_DRMContent) */

struct zx_elem_s* zx_mm7_SubmitReq_POP_DRMContent(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DRMContent;
  if (y)
    x->DRMContent = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_DRMContent) */

void zx_mm7_SubmitReq_PUSH_DRMContent(struct zx_mm7_SubmitReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DRMContent->g;
  x->DRMContent = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_DRMContent) */

void zx_mm7_SubmitReq_REV_DRMContent(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DRMContent;
  if (!y) return;
  x->DRMContent = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DRMContent->g;
    x->DRMContent = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_DRMContent) */

void zx_mm7_SubmitReq_PUT_DRMContent(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DRMContent;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DRMContent = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_DRMContent) */

void zx_mm7_SubmitReq_ADD_DRMContent(struct zx_mm7_SubmitReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DRMContent->g;
    x->DRMContent = z;
    return;
  case -1:
    y = x->DRMContent;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DRMContent; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_DRMContent) */

void zx_mm7_SubmitReq_DEL_DRMContent(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DRMContent = (struct zx_elem_s*)x->DRMContent->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DRMContent;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DRMContent; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_Content) */

int zx_mm7_SubmitReq_NUM_Content(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Content_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Content; y; ++n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_Content) */

struct zx_mm7_Content_s* zx_mm7_SubmitReq_GET_Content(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_Content_s* y;
  if (!x) return 0;
  for (y = x->Content; n>=0 && y; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_Content) */

struct zx_mm7_Content_s* zx_mm7_SubmitReq_POP_Content(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Content_s* y;
  if (!x) return 0;
  y = x->Content;
  if (y)
    x->Content = (struct zx_mm7_Content_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_Content) */

void zx_mm7_SubmitReq_PUSH_Content(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_Content_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Content->gg.g;
  x->Content = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_Content) */

void zx_mm7_SubmitReq_REV_Content(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_Content_s* nxt;
  struct zx_mm7_Content_s* y;
  if (!x) return;
  y = x->Content;
  if (!y) return;
  x->Content = 0;
  while (y) {
    nxt = (struct zx_mm7_Content_s*)y->gg.g.n;
    y->gg.g.n = &x->Content->gg.g;
    x->Content = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_Content) */

void zx_mm7_SubmitReq_PUT_Content(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_Content_s* z)
{
  struct zx_mm7_Content_s* y;
  if (!x || !z) return;
  y = x->Content;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Content = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_Content) */

void zx_mm7_SubmitReq_ADD_Content(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_Content_s* z)
{
  struct zx_mm7_Content_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Content->gg.g;
    x->Content = z;
    return;
  case -1:
    y = x->Content;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Content; n > 1 && y; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_Content) */

void zx_mm7_SubmitReq_DEL_Content(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_Content_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Content = (struct zx_mm7_Content_s*)x->Content->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Content_s*)x->Content;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Content; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_AdditionalInformation) */

int zx_mm7_SubmitReq_NUM_AdditionalInformation(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AdditionalInformation; y; ++n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_AdditionalInformation) */

struct zx_mm7_AdditionalInformation_s* zx_mm7_SubmitReq_GET_AdditionalInformation(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return 0;
  for (y = x->AdditionalInformation; n>=0 && y; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_AdditionalInformation) */

struct zx_mm7_AdditionalInformation_s* zx_mm7_SubmitReq_POP_AdditionalInformation(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return 0;
  y = x->AdditionalInformation;
  if (y)
    x->AdditionalInformation = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_AdditionalInformation) */

void zx_mm7_SubmitReq_PUSH_AdditionalInformation(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_AdditionalInformation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AdditionalInformation->gg.g;
  x->AdditionalInformation = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_AdditionalInformation) */

void zx_mm7_SubmitReq_REV_AdditionalInformation(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* nxt;
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return;
  y = x->AdditionalInformation;
  if (!y) return;
  x->AdditionalInformation = 0;
  while (y) {
    nxt = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n;
    y->gg.g.n = &x->AdditionalInformation->gg.g;
    x->AdditionalInformation = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_AdditionalInformation) */

void zx_mm7_SubmitReq_PUT_AdditionalInformation(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_AdditionalInformation_s* z)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x || !z) return;
  y = x->AdditionalInformation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AdditionalInformation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_AdditionalInformation) */

void zx_mm7_SubmitReq_ADD_AdditionalInformation(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_AdditionalInformation_s* z)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AdditionalInformation->gg.g;
    x->AdditionalInformation = z;
    return;
  case -1:
    y = x->AdditionalInformation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalInformation; n > 1 && y; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_AdditionalInformation) */

void zx_mm7_SubmitReq_DEL_AdditionalInformation(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AdditionalInformation = (struct zx_mm7_AdditionalInformation_s*)x->AdditionalInformation->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_AdditionalInformation_s*)x->AdditionalInformation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalInformation; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitReq_NUM_MessageExtraData) */

int zx_mm7_SubmitReq_NUM_MessageExtraData(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageExtraData; y; ++n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitReq_GET_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_SubmitReq_GET_MessageExtraData(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  for (y = x->MessageExtraData; n>=0 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_POP_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_SubmitReq_POP_MessageExtraData(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  y = x->MessageExtraData;
  if (y)
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitReq_PUSH_MessageExtraData) */

void zx_mm7_SubmitReq_PUSH_MessageExtraData(struct zx_mm7_SubmitReq_s* x, struct zx_mm7_MessageExtraData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageExtraData->gg.g;
  x->MessageExtraData = z;
}

/* FUNC(zx_mm7_SubmitReq_REV_MessageExtraData) */

void zx_mm7_SubmitReq_REV_MessageExtraData(struct zx_mm7_SubmitReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* nxt;
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  y = x->MessageExtraData;
  if (!y) return;
  x->MessageExtraData = 0;
  while (y) {
    nxt = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitReq_PUT_MessageExtraData) */

void zx_mm7_SubmitReq_PUT_MessageExtraData(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  y = x->MessageExtraData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageExtraData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitReq_ADD_MessageExtraData) */

void zx_mm7_SubmitReq_ADD_MessageExtraData(struct zx_mm7_SubmitReq_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = z;
    return;
  case -1:
    y = x->MessageExtraData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitReq_DEL_MessageExtraData) */

void zx_mm7_SubmitReq_DEL_MessageExtraData(struct zx_mm7_SubmitReq_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitRsp_NUM_MM7Version) */

int zx_mm7_SubmitRsp_NUM_MM7Version(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_SubmitRsp_GET_MM7Version(struct zx_mm7_SubmitRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_SubmitRsp_POP_MM7Version(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitRsp_PUSH_MM7Version) */

void zx_mm7_SubmitRsp_PUSH_MM7Version(struct zx_mm7_SubmitRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_SubmitRsp_REV_MM7Version) */

void zx_mm7_SubmitRsp_REV_MM7Version(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitRsp_PUT_MM7Version) */

void zx_mm7_SubmitRsp_PUT_MM7Version(struct zx_mm7_SubmitRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitRsp_ADD_MM7Version) */

void zx_mm7_SubmitRsp_ADD_MM7Version(struct zx_mm7_SubmitRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitRsp_DEL_MM7Version) */

void zx_mm7_SubmitRsp_DEL_MM7Version(struct zx_mm7_SubmitRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitRsp_NUM_Status) */

int zx_mm7_SubmitRsp_NUM_Status(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_SubmitRsp_GET_Status(struct zx_mm7_SubmitRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_SubmitRsp_POP_Status(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitRsp_PUSH_Status) */

void zx_mm7_SubmitRsp_PUSH_Status(struct zx_mm7_SubmitRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_SubmitRsp_REV_Status) */

void zx_mm7_SubmitRsp_REV_Status(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitRsp_PUT_Status) */

void zx_mm7_SubmitRsp_PUT_Status(struct zx_mm7_SubmitRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitRsp_ADD_Status) */

void zx_mm7_SubmitRsp_ADD_Status(struct zx_mm7_SubmitRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitRsp_DEL_Status) */

void zx_mm7_SubmitRsp_DEL_Status(struct zx_mm7_SubmitRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitRsp_NUM_Extension) */

int zx_mm7_SubmitRsp_NUM_Extension(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitRsp_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_SubmitRsp_GET_Extension(struct zx_mm7_SubmitRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitRsp_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_SubmitRsp_POP_Extension(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitRsp_PUSH_Extension) */

void zx_mm7_SubmitRsp_PUSH_Extension(struct zx_mm7_SubmitRsp_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_SubmitRsp_REV_Extension) */

void zx_mm7_SubmitRsp_REV_Extension(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitRsp_PUT_Extension) */

void zx_mm7_SubmitRsp_PUT_Extension(struct zx_mm7_SubmitRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_SubmitRsp_ADD_Extension) */

void zx_mm7_SubmitRsp_ADD_Extension(struct zx_mm7_SubmitRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_SubmitRsp_DEL_Extension) */

void zx_mm7_SubmitRsp_DEL_Extension(struct zx_mm7_SubmitRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_SubmitRsp_NUM_MessageID) */

int zx_mm7_SubmitRsp_NUM_MessageID(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_SubmitRsp_GET_MessageID) */

struct zx_elem_s* zx_mm7_SubmitRsp_GET_MessageID(struct zx_mm7_SubmitRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_SubmitRsp_POP_MessageID) */

struct zx_elem_s* zx_mm7_SubmitRsp_POP_MessageID(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_SubmitRsp_PUSH_MessageID) */

void zx_mm7_SubmitRsp_PUSH_MessageID(struct zx_mm7_SubmitRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageID->g;
  x->MessageID = z;
}

/* FUNC(zx_mm7_SubmitRsp_REV_MessageID) */

void zx_mm7_SubmitRsp_REV_MessageID(struct zx_mm7_SubmitRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageID->g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_SubmitRsp_PUT_MessageID) */

void zx_mm7_SubmitRsp_PUT_MessageID(struct zx_mm7_SubmitRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_SubmitRsp_ADD_MessageID) */

void zx_mm7_SubmitRsp_ADD_MessageID(struct zx_mm7_SubmitRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageID->g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_SubmitRsp_DEL_MessageID) */

void zx_mm7_SubmitRsp_DEL_MessageID(struct zx_mm7_SubmitRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_elem_s*)x->MessageID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ThirdPartyPayer_NUM_RFC2822Address) */

int zx_mm7_ThirdPartyPayer_NUM_RFC2822Address(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RFC2822Address; y; ++n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ThirdPartyPayer_GET_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_ThirdPartyPayer_GET_RFC2822Address(struct zx_mm7_ThirdPartyPayer_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  for (y = x->RFC2822Address; n>=0 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ThirdPartyPayer_POP_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_ThirdPartyPayer_POP_RFC2822Address(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  y = x->RFC2822Address;
  if (y)
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ThirdPartyPayer_PUSH_RFC2822Address) */

void zx_mm7_ThirdPartyPayer_PUSH_RFC2822Address(struct zx_mm7_ThirdPartyPayer_s* x, struct zx_mm7_RFC2822Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RFC2822Address->gg.g;
  x->RFC2822Address = z;
}

/* FUNC(zx_mm7_ThirdPartyPayer_REV_RFC2822Address) */

void zx_mm7_ThirdPartyPayer_REV_RFC2822Address(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_RFC2822Address_s* nxt;
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  y = x->RFC2822Address;
  if (!y) return;
  x->RFC2822Address = 0;
  while (y) {
    nxt = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
    y->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ThirdPartyPayer_PUT_RFC2822Address) */

void zx_mm7_ThirdPartyPayer_PUT_RFC2822Address(struct zx_mm7_ThirdPartyPayer_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  y = x->RFC2822Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RFC2822Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ThirdPartyPayer_ADD_RFC2822Address) */

void zx_mm7_ThirdPartyPayer_ADD_RFC2822Address(struct zx_mm7_ThirdPartyPayer_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = z;
    return;
  case -1:
    y = x->RFC2822Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ThirdPartyPayer_DEL_RFC2822Address) */

void zx_mm7_ThirdPartyPayer_DEL_RFC2822Address(struct zx_mm7_ThirdPartyPayer_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ThirdPartyPayer_NUM_Number) */

int zx_mm7_ThirdPartyPayer_NUM_Number(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_Number_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Number; y; ++n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ThirdPartyPayer_GET_Number) */

struct zx_mm7_Number_s* zx_mm7_ThirdPartyPayer_GET_Number(struct zx_mm7_ThirdPartyPayer_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  for (y = x->Number; n>=0 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ThirdPartyPayer_POP_Number) */

struct zx_mm7_Number_s* zx_mm7_ThirdPartyPayer_POP_Number(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  y = x->Number;
  if (y)
    x->Number = (struct zx_mm7_Number_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ThirdPartyPayer_PUSH_Number) */

void zx_mm7_ThirdPartyPayer_PUSH_Number(struct zx_mm7_ThirdPartyPayer_s* x, struct zx_mm7_Number_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Number->gg.g;
  x->Number = z;
}

/* FUNC(zx_mm7_ThirdPartyPayer_REV_Number) */

void zx_mm7_ThirdPartyPayer_REV_Number(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_Number_s* nxt;
  struct zx_mm7_Number_s* y;
  if (!x) return;
  y = x->Number;
  if (!y) return;
  x->Number = 0;
  while (y) {
    nxt = (struct zx_mm7_Number_s*)y->gg.g.n;
    y->gg.g.n = &x->Number->gg.g;
    x->Number = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ThirdPartyPayer_PUT_Number) */

void zx_mm7_ThirdPartyPayer_PUT_Number(struct zx_mm7_ThirdPartyPayer_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  y = x->Number;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Number = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ThirdPartyPayer_ADD_Number) */

void zx_mm7_ThirdPartyPayer_ADD_Number(struct zx_mm7_ThirdPartyPayer_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Number->gg.g;
    x->Number = z;
    return;
  case -1:
    y = x->Number;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ThirdPartyPayer_DEL_Number) */

void zx_mm7_ThirdPartyPayer_DEL_Number(struct zx_mm7_ThirdPartyPayer_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Number = (struct zx_mm7_Number_s*)x->Number->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Number_s*)x->Number;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ThirdPartyPayer_NUM_ShortCode) */

int zx_mm7_ThirdPartyPayer_NUM_ShortCode(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ShortCode; y; ++n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ThirdPartyPayer_GET_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_ThirdPartyPayer_GET_ShortCode(struct zx_mm7_ThirdPartyPayer_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  for (y = x->ShortCode; n>=0 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ThirdPartyPayer_POP_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_ThirdPartyPayer_POP_ShortCode(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  y = x->ShortCode;
  if (y)
    x->ShortCode = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ThirdPartyPayer_PUSH_ShortCode) */

void zx_mm7_ThirdPartyPayer_PUSH_ShortCode(struct zx_mm7_ThirdPartyPayer_s* x, struct zx_mm7_ShortCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ShortCode->gg.g;
  x->ShortCode = z;
}

/* FUNC(zx_mm7_ThirdPartyPayer_REV_ShortCode) */

void zx_mm7_ThirdPartyPayer_REV_ShortCode(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_ShortCode_s* nxt;
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  y = x->ShortCode;
  if (!y) return;
  x->ShortCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ThirdPartyPayer_PUT_ShortCode) */

void zx_mm7_ThirdPartyPayer_PUT_ShortCode(struct zx_mm7_ThirdPartyPayer_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  y = x->ShortCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ShortCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ThirdPartyPayer_ADD_ShortCode) */

void zx_mm7_ThirdPartyPayer_ADD_ShortCode(struct zx_mm7_ThirdPartyPayer_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = z;
    return;
  case -1:
    y = x->ShortCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ThirdPartyPayer_DEL_ShortCode) */

void zx_mm7_ThirdPartyPayer_DEL_ShortCode(struct zx_mm7_ThirdPartyPayer_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ShortCode = (struct zx_mm7_ShortCode_s*)x->ShortCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ShortCode_s*)x->ShortCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_ThirdPartyPayer_NUM_Extension) */

int zx_mm7_ThirdPartyPayer_NUM_Extension(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_ThirdPartyPayer_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ThirdPartyPayer_GET_Extension(struct zx_mm7_ThirdPartyPayer_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_ThirdPartyPayer_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_ThirdPartyPayer_POP_Extension(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_ThirdPartyPayer_PUSH_Extension) */

void zx_mm7_ThirdPartyPayer_PUSH_Extension(struct zx_mm7_ThirdPartyPayer_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_ThirdPartyPayer_REV_Extension) */

void zx_mm7_ThirdPartyPayer_REV_Extension(struct zx_mm7_ThirdPartyPayer_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_ThirdPartyPayer_PUT_Extension) */

void zx_mm7_ThirdPartyPayer_PUT_Extension(struct zx_mm7_ThirdPartyPayer_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_ThirdPartyPayer_ADD_Extension) */

void zx_mm7_ThirdPartyPayer_ADD_Extension(struct zx_mm7_ThirdPartyPayer_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_ThirdPartyPayer_DEL_Extension) */

void zx_mm7_ThirdPartyPayer_DEL_Extension(struct zx_mm7_ThirdPartyPayer_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_To_NUM_RFC2822Address) */

int zx_mm7_To_NUM_RFC2822Address(struct zx_mm7_To_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RFC2822Address; y; ++n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_To_GET_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_To_GET_RFC2822Address(struct zx_mm7_To_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  for (y = x->RFC2822Address; n>=0 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_To_POP_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_To_POP_RFC2822Address(struct zx_mm7_To_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  y = x->RFC2822Address;
  if (y)
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_To_PUSH_RFC2822Address) */

void zx_mm7_To_PUSH_RFC2822Address(struct zx_mm7_To_s* x, struct zx_mm7_RFC2822Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RFC2822Address->gg.g;
  x->RFC2822Address = z;
}

/* FUNC(zx_mm7_To_REV_RFC2822Address) */

void zx_mm7_To_REV_RFC2822Address(struct zx_mm7_To_s* x)
{
  struct zx_mm7_RFC2822Address_s* nxt;
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  y = x->RFC2822Address;
  if (!y) return;
  x->RFC2822Address = 0;
  while (y) {
    nxt = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
    y->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_To_PUT_RFC2822Address) */

void zx_mm7_To_PUT_RFC2822Address(struct zx_mm7_To_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  y = x->RFC2822Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RFC2822Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_To_ADD_RFC2822Address) */

void zx_mm7_To_ADD_RFC2822Address(struct zx_mm7_To_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = z;
    return;
  case -1:
    y = x->RFC2822Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_To_DEL_RFC2822Address) */

void zx_mm7_To_DEL_RFC2822Address(struct zx_mm7_To_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_To_NUM_Number) */

int zx_mm7_To_NUM_Number(struct zx_mm7_To_s* x)
{
  struct zx_mm7_Number_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Number; y; ++n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_To_GET_Number) */

struct zx_mm7_Number_s* zx_mm7_To_GET_Number(struct zx_mm7_To_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  for (y = x->Number; n>=0 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_To_POP_Number) */

struct zx_mm7_Number_s* zx_mm7_To_POP_Number(struct zx_mm7_To_s* x)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  y = x->Number;
  if (y)
    x->Number = (struct zx_mm7_Number_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_To_PUSH_Number) */

void zx_mm7_To_PUSH_Number(struct zx_mm7_To_s* x, struct zx_mm7_Number_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Number->gg.g;
  x->Number = z;
}

/* FUNC(zx_mm7_To_REV_Number) */

void zx_mm7_To_REV_Number(struct zx_mm7_To_s* x)
{
  struct zx_mm7_Number_s* nxt;
  struct zx_mm7_Number_s* y;
  if (!x) return;
  y = x->Number;
  if (!y) return;
  x->Number = 0;
  while (y) {
    nxt = (struct zx_mm7_Number_s*)y->gg.g.n;
    y->gg.g.n = &x->Number->gg.g;
    x->Number = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_To_PUT_Number) */

void zx_mm7_To_PUT_Number(struct zx_mm7_To_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  y = x->Number;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Number = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_To_ADD_Number) */

void zx_mm7_To_ADD_Number(struct zx_mm7_To_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Number->gg.g;
    x->Number = z;
    return;
  case -1:
    y = x->Number;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_To_DEL_Number) */

void zx_mm7_To_DEL_Number(struct zx_mm7_To_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Number = (struct zx_mm7_Number_s*)x->Number->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Number_s*)x->Number;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_To_NUM_ShortCode) */

int zx_mm7_To_NUM_ShortCode(struct zx_mm7_To_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ShortCode; y; ++n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_To_GET_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_To_GET_ShortCode(struct zx_mm7_To_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  for (y = x->ShortCode; n>=0 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_To_POP_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_To_POP_ShortCode(struct zx_mm7_To_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  y = x->ShortCode;
  if (y)
    x->ShortCode = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_To_PUSH_ShortCode) */

void zx_mm7_To_PUSH_ShortCode(struct zx_mm7_To_s* x, struct zx_mm7_ShortCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ShortCode->gg.g;
  x->ShortCode = z;
}

/* FUNC(zx_mm7_To_REV_ShortCode) */

void zx_mm7_To_REV_ShortCode(struct zx_mm7_To_s* x)
{
  struct zx_mm7_ShortCode_s* nxt;
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  y = x->ShortCode;
  if (!y) return;
  x->ShortCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_To_PUT_ShortCode) */

void zx_mm7_To_PUT_ShortCode(struct zx_mm7_To_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  y = x->ShortCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ShortCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_To_ADD_ShortCode) */

void zx_mm7_To_ADD_ShortCode(struct zx_mm7_To_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = z;
    return;
  case -1:
    y = x->ShortCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_To_DEL_ShortCode) */

void zx_mm7_To_DEL_ShortCode(struct zx_mm7_To_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ShortCode = (struct zx_mm7_ShortCode_s*)x->ShortCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ShortCode_s*)x->ShortCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_To_NUM_Extension) */

int zx_mm7_To_NUM_Extension(struct zx_mm7_To_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_To_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_To_GET_Extension(struct zx_mm7_To_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_To_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_To_POP_Extension(struct zx_mm7_To_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_To_PUSH_Extension) */

void zx_mm7_To_PUSH_Extension(struct zx_mm7_To_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_To_REV_Extension) */

void zx_mm7_To_REV_Extension(struct zx_mm7_To_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_To_PUT_Extension) */

void zx_mm7_To_PUT_Extension(struct zx_mm7_To_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_To_ADD_Extension) */

void zx_mm7_To_ADD_Extension(struct zx_mm7_To_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_To_DEL_Extension) */

void zx_mm7_To_DEL_Extension(struct zx_mm7_To_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_mm7_TransactionID_GET_actor) */
struct zx_str* zx_mm7_TransactionID_GET_actor(struct zx_mm7_TransactionID_s* x) { return x->actor; }
/* FUNC(zx_mm7_TransactionID_PUT_actor) */
void zx_mm7_TransactionID_PUT_actor(struct zx_mm7_TransactionID_s* x, struct zx_str* y) { x->actor = y; }
/* FUNC(zx_mm7_TransactionID_GET_encodingStyle) */
struct zx_str* zx_mm7_TransactionID_GET_encodingStyle(struct zx_mm7_TransactionID_s* x) { return x->encodingStyle; }
/* FUNC(zx_mm7_TransactionID_PUT_encodingStyle) */
void zx_mm7_TransactionID_PUT_encodingStyle(struct zx_mm7_TransactionID_s* x, struct zx_str* y) { x->encodingStyle = y; }
/* FUNC(zx_mm7_TransactionID_GET_mustUnderstand) */
struct zx_str* zx_mm7_TransactionID_GET_mustUnderstand(struct zx_mm7_TransactionID_s* x) { return x->mustUnderstand; }
/* FUNC(zx_mm7_TransactionID_PUT_mustUnderstand) */
void zx_mm7_TransactionID_PUT_mustUnderstand(struct zx_mm7_TransactionID_s* x, struct zx_str* y) { x->mustUnderstand = y; }





/* FUNC(zx_mm7_UACapabilities_GET_TimeStamp) */
struct zx_str* zx_mm7_UACapabilities_GET_TimeStamp(struct zx_mm7_UACapabilities_s* x) { return x->TimeStamp; }
/* FUNC(zx_mm7_UACapabilities_PUT_TimeStamp) */
void zx_mm7_UACapabilities_PUT_TimeStamp(struct zx_mm7_UACapabilities_s* x, struct zx_str* y) { x->TimeStamp = y; }
/* FUNC(zx_mm7_UACapabilities_GET_UAProf) */
struct zx_str* zx_mm7_UACapabilities_GET_UAProf(struct zx_mm7_UACapabilities_s* x) { return x->UAProf; }
/* FUNC(zx_mm7_UACapabilities_PUT_UAProf) */
void zx_mm7_UACapabilities_PUT_UAProf(struct zx_mm7_UACapabilities_s* x, struct zx_str* y) { x->UAProf = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_UserAgent_NUM_RFC2822Address) */

int zx_mm7_UserAgent_NUM_RFC2822Address(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RFC2822Address; y; ++n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_UserAgent_GET_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_UserAgent_GET_RFC2822Address(struct zx_mm7_UserAgent_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  for (y = x->RFC2822Address; n>=0 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_UserAgent_POP_RFC2822Address) */

struct zx_mm7_RFC2822Address_s* zx_mm7_UserAgent_POP_RFC2822Address(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return 0;
  y = x->RFC2822Address;
  if (y)
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_UserAgent_PUSH_RFC2822Address) */

void zx_mm7_UserAgent_PUSH_RFC2822Address(struct zx_mm7_UserAgent_s* x, struct zx_mm7_RFC2822Address_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RFC2822Address->gg.g;
  x->RFC2822Address = z;
}

/* FUNC(zx_mm7_UserAgent_REV_RFC2822Address) */

void zx_mm7_UserAgent_REV_RFC2822Address(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_RFC2822Address_s* nxt;
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  y = x->RFC2822Address;
  if (!y) return;
  x->RFC2822Address = 0;
  while (y) {
    nxt = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n;
    y->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_UserAgent_PUT_RFC2822Address) */

void zx_mm7_UserAgent_PUT_RFC2822Address(struct zx_mm7_UserAgent_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  y = x->RFC2822Address;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RFC2822Address = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_UserAgent_ADD_RFC2822Address) */

void zx_mm7_UserAgent_ADD_RFC2822Address(struct zx_mm7_UserAgent_s* x, int n, struct zx_mm7_RFC2822Address_s* z)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RFC2822Address->gg.g;
    x->RFC2822Address = z;
    return;
  case -1:
    y = x->RFC2822Address;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_UserAgent_DEL_RFC2822Address) */

void zx_mm7_UserAgent_DEL_RFC2822Address(struct zx_mm7_UserAgent_s* x, int n)
{
  struct zx_mm7_RFC2822Address_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RFC2822Address = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RFC2822Address_s*)x->RFC2822Address;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RFC2822Address; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RFC2822Address_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_UserAgent_NUM_Number) */

int zx_mm7_UserAgent_NUM_Number(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_Number_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Number; y; ++n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_UserAgent_GET_Number) */

struct zx_mm7_Number_s* zx_mm7_UserAgent_GET_Number(struct zx_mm7_UserAgent_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  for (y = x->Number; n>=0 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_UserAgent_POP_Number) */

struct zx_mm7_Number_s* zx_mm7_UserAgent_POP_Number(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_Number_s* y;
  if (!x) return 0;
  y = x->Number;
  if (y)
    x->Number = (struct zx_mm7_Number_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_UserAgent_PUSH_Number) */

void zx_mm7_UserAgent_PUSH_Number(struct zx_mm7_UserAgent_s* x, struct zx_mm7_Number_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Number->gg.g;
  x->Number = z;
}

/* FUNC(zx_mm7_UserAgent_REV_Number) */

void zx_mm7_UserAgent_REV_Number(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_Number_s* nxt;
  struct zx_mm7_Number_s* y;
  if (!x) return;
  y = x->Number;
  if (!y) return;
  x->Number = 0;
  while (y) {
    nxt = (struct zx_mm7_Number_s*)y->gg.g.n;
    y->gg.g.n = &x->Number->gg.g;
    x->Number = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_UserAgent_PUT_Number) */

void zx_mm7_UserAgent_PUT_Number(struct zx_mm7_UserAgent_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  y = x->Number;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Number = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_UserAgent_ADD_Number) */

void zx_mm7_UserAgent_ADD_Number(struct zx_mm7_UserAgent_s* x, int n, struct zx_mm7_Number_s* z)
{
  struct zx_mm7_Number_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Number->gg.g;
    x->Number = z;
    return;
  case -1:
    y = x->Number;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_UserAgent_DEL_Number) */

void zx_mm7_UserAgent_DEL_Number(struct zx_mm7_UserAgent_s* x, int n)
{
  struct zx_mm7_Number_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Number = (struct zx_mm7_Number_s*)x->Number->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Number_s*)x->Number;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Number; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Number_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_UserAgent_NUM_ShortCode) */

int zx_mm7_UserAgent_NUM_ShortCode(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ShortCode; y; ++n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_UserAgent_GET_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_UserAgent_GET_ShortCode(struct zx_mm7_UserAgent_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  for (y = x->ShortCode; n>=0 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_UserAgent_POP_ShortCode) */

struct zx_mm7_ShortCode_s* zx_mm7_UserAgent_POP_ShortCode(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return 0;
  y = x->ShortCode;
  if (y)
    x->ShortCode = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_UserAgent_PUSH_ShortCode) */

void zx_mm7_UserAgent_PUSH_ShortCode(struct zx_mm7_UserAgent_s* x, struct zx_mm7_ShortCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ShortCode->gg.g;
  x->ShortCode = z;
}

/* FUNC(zx_mm7_UserAgent_REV_ShortCode) */

void zx_mm7_UserAgent_REV_ShortCode(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_ShortCode_s* nxt;
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  y = x->ShortCode;
  if (!y) return;
  x->ShortCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ShortCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_UserAgent_PUT_ShortCode) */

void zx_mm7_UserAgent_PUT_ShortCode(struct zx_mm7_UserAgent_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  y = x->ShortCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ShortCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_UserAgent_ADD_ShortCode) */

void zx_mm7_UserAgent_ADD_ShortCode(struct zx_mm7_UserAgent_s* x, int n, struct zx_mm7_ShortCode_s* z)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ShortCode->gg.g;
    x->ShortCode = z;
    return;
  case -1:
    y = x->ShortCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_UserAgent_DEL_ShortCode) */

void zx_mm7_UserAgent_DEL_ShortCode(struct zx_mm7_UserAgent_s* x, int n)
{
  struct zx_mm7_ShortCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ShortCode = (struct zx_mm7_ShortCode_s*)x->ShortCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ShortCode_s*)x->ShortCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ShortCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ShortCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_UserAgent_NUM_Extension) */

int zx_mm7_UserAgent_NUM_Extension(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_UserAgent_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_UserAgent_GET_Extension(struct zx_mm7_UserAgent_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_UserAgent_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_UserAgent_POP_Extension(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_UserAgent_PUSH_Extension) */

void zx_mm7_UserAgent_PUSH_Extension(struct zx_mm7_UserAgent_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_UserAgent_REV_Extension) */

void zx_mm7_UserAgent_REV_Extension(struct zx_mm7_UserAgent_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_UserAgent_PUT_Extension) */

void zx_mm7_UserAgent_PUT_Extension(struct zx_mm7_UserAgent_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_UserAgent_ADD_Extension) */

void zx_mm7_UserAgent_ADD_Extension(struct zx_mm7_UserAgent_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_UserAgent_DEL_Extension) */

void zx_mm7_UserAgent_DEL_Extension(struct zx_mm7_UserAgent_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_mm7_UserAgent_GET_sequence) */
struct zx_str* zx_mm7_UserAgent_GET_sequence(struct zx_mm7_UserAgent_s* x) { return x->sequence; }
/* FUNC(zx_mm7_UserAgent_PUT_sequence) */
void zx_mm7_UserAgent_PUT_sequence(struct zx_mm7_UserAgent_s* x, struct zx_str* y) { x->sequence = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_VASPErrorRsp_NUM_MM7Version) */

int zx_mm7_VASPErrorRsp_NUM_MM7Version(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_VASPErrorRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_VASPErrorRsp_GET_MM7Version(struct zx_mm7_VASPErrorRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_VASPErrorRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_VASPErrorRsp_POP_MM7Version(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_VASPErrorRsp_PUSH_MM7Version) */

void zx_mm7_VASPErrorRsp_PUSH_MM7Version(struct zx_mm7_VASPErrorRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_VASPErrorRsp_REV_MM7Version) */

void zx_mm7_VASPErrorRsp_REV_MM7Version(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_VASPErrorRsp_PUT_MM7Version) */

void zx_mm7_VASPErrorRsp_PUT_MM7Version(struct zx_mm7_VASPErrorRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_VASPErrorRsp_ADD_MM7Version) */

void zx_mm7_VASPErrorRsp_ADD_MM7Version(struct zx_mm7_VASPErrorRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_VASPErrorRsp_DEL_MM7Version) */

void zx_mm7_VASPErrorRsp_DEL_MM7Version(struct zx_mm7_VASPErrorRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_VASPErrorRsp_NUM_Status) */

int zx_mm7_VASPErrorRsp_NUM_Status(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_VASPErrorRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_VASPErrorRsp_GET_Status(struct zx_mm7_VASPErrorRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_VASPErrorRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_VASPErrorRsp_POP_Status(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_VASPErrorRsp_PUSH_Status) */

void zx_mm7_VASPErrorRsp_PUSH_Status(struct zx_mm7_VASPErrorRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_VASPErrorRsp_REV_Status) */

void zx_mm7_VASPErrorRsp_REV_Status(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_VASPErrorRsp_PUT_Status) */

void zx_mm7_VASPErrorRsp_PUT_Status(struct zx_mm7_VASPErrorRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_VASPErrorRsp_ADD_Status) */

void zx_mm7_VASPErrorRsp_ADD_Status(struct zx_mm7_VASPErrorRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_VASPErrorRsp_DEL_Status) */

void zx_mm7_VASPErrorRsp_DEL_Status(struct zx_mm7_VASPErrorRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_VASPErrorRsp_NUM_Extension) */

int zx_mm7_VASPErrorRsp_NUM_Extension(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_VASPErrorRsp_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_VASPErrorRsp_GET_Extension(struct zx_mm7_VASPErrorRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_VASPErrorRsp_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_VASPErrorRsp_POP_Extension(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_VASPErrorRsp_PUSH_Extension) */

void zx_mm7_VASPErrorRsp_PUSH_Extension(struct zx_mm7_VASPErrorRsp_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_VASPErrorRsp_REV_Extension) */

void zx_mm7_VASPErrorRsp_REV_Extension(struct zx_mm7_VASPErrorRsp_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_VASPErrorRsp_PUT_Extension) */

void zx_mm7_VASPErrorRsp_PUT_Extension(struct zx_mm7_VASPErrorRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_VASPErrorRsp_ADD_Extension) */

void zx_mm7_VASPErrorRsp_ADD_Extension(struct zx_mm7_VASPErrorRsp_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_VASPErrorRsp_DEL_Extension) */

void zx_mm7_VASPErrorRsp_DEL_Extension(struct zx_mm7_VASPErrorRsp_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_element_NUM_key) */

int zx_mm7_element_NUM_key(struct zx_mm7_element_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->key; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_element_GET_key) */

struct zx_elem_s* zx_mm7_element_GET_key(struct zx_mm7_element_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->key; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_element_POP_key) */

struct zx_elem_s* zx_mm7_element_POP_key(struct zx_mm7_element_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->key;
  if (y)
    x->key = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_element_PUSH_key) */

void zx_mm7_element_PUSH_key(struct zx_mm7_element_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->key->g;
  x->key = z;
}

/* FUNC(zx_mm7_element_REV_key) */

void zx_mm7_element_REV_key(struct zx_mm7_element_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->key;
  if (!y) return;
  x->key = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->key->g;
    x->key = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_element_PUT_key) */

void zx_mm7_element_PUT_key(struct zx_mm7_element_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->key;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->key = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_element_ADD_key) */

void zx_mm7_element_ADD_key(struct zx_mm7_element_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->key->g;
    x->key = z;
    return;
  case -1:
    y = x->key;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->key; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_element_DEL_key) */

void zx_mm7_element_DEL_key(struct zx_mm7_element_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->key = (struct zx_elem_s*)x->key->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->key;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->key; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_element_NUM_value) */

int zx_mm7_element_NUM_value(struct zx_mm7_element_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->value; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_element_GET_value) */

struct zx_elem_s* zx_mm7_element_GET_value(struct zx_mm7_element_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->value; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_element_POP_value) */

struct zx_elem_s* zx_mm7_element_POP_value(struct zx_mm7_element_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->value;
  if (y)
    x->value = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_element_PUSH_value) */

void zx_mm7_element_PUSH_value(struct zx_mm7_element_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->value->g;
  x->value = z;
}

/* FUNC(zx_mm7_element_REV_value) */

void zx_mm7_element_REV_value(struct zx_mm7_element_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->value;
  if (!y) return;
  x->value = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->value->g;
    x->value = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_element_PUT_value) */

void zx_mm7_element_PUT_value(struct zx_mm7_element_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->value;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->value = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_element_ADD_value) */

void zx_mm7_element_ADD_value(struct zx_mm7_element_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->value->g;
    x->value = z;
    return;
  case -1:
    y = x->value;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->value; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_element_DEL_value) */

void zx_mm7_element_DEL_value(struct zx_mm7_element_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->value = (struct zx_elem_s*)x->value->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->value;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->value; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedCancelReq_NUM_MM7Version) */

int zx_mm7_extendedCancelReq_NUM_MM7Version(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedCancelReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_extendedCancelReq_GET_MM7Version(struct zx_mm7_extendedCancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedCancelReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_extendedCancelReq_POP_MM7Version(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedCancelReq_PUSH_MM7Version) */

void zx_mm7_extendedCancelReq_PUSH_MM7Version(struct zx_mm7_extendedCancelReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_extendedCancelReq_REV_MM7Version) */

void zx_mm7_extendedCancelReq_REV_MM7Version(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedCancelReq_PUT_MM7Version) */

void zx_mm7_extendedCancelReq_PUT_MM7Version(struct zx_mm7_extendedCancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedCancelReq_ADD_MM7Version) */

void zx_mm7_extendedCancelReq_ADD_MM7Version(struct zx_mm7_extendedCancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedCancelReq_DEL_MM7Version) */

void zx_mm7_extendedCancelReq_DEL_MM7Version(struct zx_mm7_extendedCancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedCancelReq_NUM_SenderIdentification) */

int zx_mm7_extendedCancelReq_NUM_SenderIdentification(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SenderIdentification; y; ++n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedCancelReq_GET_SenderIdentification) */

struct zx_mm7_SenderIdentification_s* zx_mm7_extendedCancelReq_GET_SenderIdentification(struct zx_mm7_extendedCancelReq_s* x, int n)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return 0;
  for (y = x->SenderIdentification; n>=0 && y; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedCancelReq_POP_SenderIdentification) */

struct zx_mm7_SenderIdentification_s* zx_mm7_extendedCancelReq_POP_SenderIdentification(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return 0;
  y = x->SenderIdentification;
  if (y)
    x->SenderIdentification = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_extendedCancelReq_PUSH_SenderIdentification) */

void zx_mm7_extendedCancelReq_PUSH_SenderIdentification(struct zx_mm7_extendedCancelReq_s* x, struct zx_mm7_SenderIdentification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SenderIdentification->gg.g;
  x->SenderIdentification = z;
}

/* FUNC(zx_mm7_extendedCancelReq_REV_SenderIdentification) */

void zx_mm7_extendedCancelReq_REV_SenderIdentification(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_mm7_SenderIdentification_s* nxt;
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return;
  y = x->SenderIdentification;
  if (!y) return;
  x->SenderIdentification = 0;
  while (y) {
    nxt = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n;
    y->gg.g.n = &x->SenderIdentification->gg.g;
    x->SenderIdentification = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedCancelReq_PUT_SenderIdentification) */

void zx_mm7_extendedCancelReq_PUT_SenderIdentification(struct zx_mm7_extendedCancelReq_s* x, int n, struct zx_mm7_SenderIdentification_s* z)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x || !z) return;
  y = x->SenderIdentification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SenderIdentification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_extendedCancelReq_ADD_SenderIdentification) */

void zx_mm7_extendedCancelReq_ADD_SenderIdentification(struct zx_mm7_extendedCancelReq_s* x, int n, struct zx_mm7_SenderIdentification_s* z)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SenderIdentification->gg.g;
    x->SenderIdentification = z;
    return;
  case -1:
    y = x->SenderIdentification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderIdentification; n > 1 && y; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_extendedCancelReq_DEL_SenderIdentification) */

void zx_mm7_extendedCancelReq_DEL_SenderIdentification(struct zx_mm7_extendedCancelReq_s* x, int n)
{
  struct zx_mm7_SenderIdentification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SenderIdentification = (struct zx_mm7_SenderIdentification_s*)x->SenderIdentification->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_SenderIdentification_s*)x->SenderIdentification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SenderIdentification; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SenderIdentification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedCancelReq_NUM_Extension) */

int zx_mm7_extendedCancelReq_NUM_Extension(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedCancelReq_GET_Extension) */

struct zx_mm7_Extension_s* zx_mm7_extendedCancelReq_GET_Extension(struct zx_mm7_extendedCancelReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedCancelReq_POP_Extension) */

struct zx_mm7_Extension_s* zx_mm7_extendedCancelReq_POP_Extension(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_mm7_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_extendedCancelReq_PUSH_Extension) */

void zx_mm7_extendedCancelReq_PUSH_Extension(struct zx_mm7_extendedCancelReq_s* x, struct zx_mm7_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_mm7_extendedCancelReq_REV_Extension) */

void zx_mm7_extendedCancelReq_REV_Extension(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_mm7_Extension_s* nxt;
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_mm7_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedCancelReq_PUT_Extension) */

void zx_mm7_extendedCancelReq_PUT_Extension(struct zx_mm7_extendedCancelReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_extendedCancelReq_ADD_Extension) */

void zx_mm7_extendedCancelReq_ADD_Extension(struct zx_mm7_extendedCancelReq_s* x, int n, struct zx_mm7_Extension_s* z)
{
  struct zx_mm7_Extension_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_extendedCancelReq_DEL_Extension) */

void zx_mm7_extendedCancelReq_DEL_Extension(struct zx_mm7_extendedCancelReq_s* x, int n)
{
  struct zx_mm7_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_mm7_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedCancelReq_NUM_CancelID) */

int zx_mm7_extendedCancelReq_NUM_CancelID(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CancelID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedCancelReq_GET_CancelID) */

struct zx_elem_s* zx_mm7_extendedCancelReq_GET_CancelID(struct zx_mm7_extendedCancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->CancelID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedCancelReq_POP_CancelID) */

struct zx_elem_s* zx_mm7_extendedCancelReq_POP_CancelID(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->CancelID;
  if (y)
    x->CancelID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedCancelReq_PUSH_CancelID) */

void zx_mm7_extendedCancelReq_PUSH_CancelID(struct zx_mm7_extendedCancelReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->CancelID->g;
  x->CancelID = z;
}

/* FUNC(zx_mm7_extendedCancelReq_REV_CancelID) */

void zx_mm7_extendedCancelReq_REV_CancelID(struct zx_mm7_extendedCancelReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->CancelID;
  if (!y) return;
  x->CancelID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->CancelID->g;
    x->CancelID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedCancelReq_PUT_CancelID) */

void zx_mm7_extendedCancelReq_PUT_CancelID(struct zx_mm7_extendedCancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->CancelID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->CancelID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedCancelReq_ADD_CancelID) */

void zx_mm7_extendedCancelReq_ADD_CancelID(struct zx_mm7_extendedCancelReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->CancelID->g;
    x->CancelID = z;
    return;
  case -1:
    y = x->CancelID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CancelID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedCancelReq_DEL_CancelID) */

void zx_mm7_extendedCancelReq_DEL_CancelID(struct zx_mm7_extendedCancelReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CancelID = (struct zx_elem_s*)x->CancelID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->CancelID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->CancelID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedCancelRsp_NUM_MM7Version) */

int zx_mm7_extendedCancelRsp_NUM_MM7Version(struct zx_mm7_extendedCancelRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedCancelRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_extendedCancelRsp_GET_MM7Version(struct zx_mm7_extendedCancelRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedCancelRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_extendedCancelRsp_POP_MM7Version(struct zx_mm7_extendedCancelRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedCancelRsp_PUSH_MM7Version) */

void zx_mm7_extendedCancelRsp_PUSH_MM7Version(struct zx_mm7_extendedCancelRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_extendedCancelRsp_REV_MM7Version) */

void zx_mm7_extendedCancelRsp_REV_MM7Version(struct zx_mm7_extendedCancelRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedCancelRsp_PUT_MM7Version) */

void zx_mm7_extendedCancelRsp_PUT_MM7Version(struct zx_mm7_extendedCancelRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedCancelRsp_ADD_MM7Version) */

void zx_mm7_extendedCancelRsp_ADD_MM7Version(struct zx_mm7_extendedCancelRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedCancelRsp_DEL_MM7Version) */

void zx_mm7_extendedCancelRsp_DEL_MM7Version(struct zx_mm7_extendedCancelRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedCancelRsp_NUM_Status) */

int zx_mm7_extendedCancelRsp_NUM_Status(struct zx_mm7_extendedCancelRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedCancelRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_extendedCancelRsp_GET_Status(struct zx_mm7_extendedCancelRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedCancelRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_extendedCancelRsp_POP_Status(struct zx_mm7_extendedCancelRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_extendedCancelRsp_PUSH_Status) */

void zx_mm7_extendedCancelRsp_PUSH_Status(struct zx_mm7_extendedCancelRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_extendedCancelRsp_REV_Status) */

void zx_mm7_extendedCancelRsp_REV_Status(struct zx_mm7_extendedCancelRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedCancelRsp_PUT_Status) */

void zx_mm7_extendedCancelRsp_PUT_Status(struct zx_mm7_extendedCancelRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_extendedCancelRsp_ADD_Status) */

void zx_mm7_extendedCancelRsp_ADD_Status(struct zx_mm7_extendedCancelRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_extendedCancelRsp_DEL_Status) */

void zx_mm7_extendedCancelRsp_DEL_Status(struct zx_mm7_extendedCancelRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_MM7Version) */

int zx_mm7_extendedReplaceReq_NUM_MM7Version(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_MM7Version) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_MM7Version(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_MM7Version) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_MM7Version(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_MM7Version) */

void zx_mm7_extendedReplaceReq_PUSH_MM7Version(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_MM7Version) */

void zx_mm7_extendedReplaceReq_REV_MM7Version(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_MM7Version) */

void zx_mm7_extendedReplaceReq_PUT_MM7Version(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_MM7Version) */

void zx_mm7_extendedReplaceReq_ADD_MM7Version(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_MM7Version) */

void zx_mm7_extendedReplaceReq_DEL_MM7Version(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_VASPID) */

int zx_mm7_extendedReplaceReq_NUM_VASPID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASPID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_VASPID) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_VASPID(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VASPID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_VASPID) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_VASPID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VASPID;
  if (y)
    x->VASPID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_VASPID) */

void zx_mm7_extendedReplaceReq_PUSH_VASPID(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VASPID->g;
  x->VASPID = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_VASPID) */

void zx_mm7_extendedReplaceReq_REV_VASPID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VASPID;
  if (!y) return;
  x->VASPID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VASPID->g;
    x->VASPID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_VASPID) */

void zx_mm7_extendedReplaceReq_PUT_VASPID(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VASPID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VASPID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_VASPID) */

void zx_mm7_extendedReplaceReq_ADD_VASPID(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VASPID->g;
    x->VASPID = z;
    return;
  case -1:
    y = x->VASPID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASPID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_VASPID) */

void zx_mm7_extendedReplaceReq_DEL_VASPID(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASPID = (struct zx_elem_s*)x->VASPID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VASPID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASPID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_VASID) */

int zx_mm7_extendedReplaceReq_NUM_VASID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_VASID) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_VASID(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->VASID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_VASID) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_VASID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->VASID;
  if (y)
    x->VASID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_VASID) */

void zx_mm7_extendedReplaceReq_PUSH_VASID(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->VASID->g;
  x->VASID = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_VASID) */

void zx_mm7_extendedReplaceReq_REV_VASID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->VASID;
  if (!y) return;
  x->VASID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->VASID->g;
    x->VASID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_VASID) */

void zx_mm7_extendedReplaceReq_PUT_VASID(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->VASID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->VASID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_VASID) */

void zx_mm7_extendedReplaceReq_ADD_VASID(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->VASID->g;
    x->VASID = z;
    return;
  case -1:
    y = x->VASID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_VASID) */

void zx_mm7_extendedReplaceReq_DEL_VASID(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASID = (struct zx_elem_s*)x->VASID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->VASID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->VASID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_ServiceCode) */

int zx_mm7_extendedReplaceReq_NUM_ServiceCode(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_ServiceCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ServiceCode; y; ++n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_ServiceCode) */

struct zx_mm7_ServiceCode_s* zx_mm7_extendedReplaceReq_GET_ServiceCode(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return 0;
  for (y = x->ServiceCode; n>=0 && y; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_ServiceCode) */

struct zx_mm7_ServiceCode_s* zx_mm7_extendedReplaceReq_POP_ServiceCode(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return 0;
  y = x->ServiceCode;
  if (y)
    x->ServiceCode = (struct zx_mm7_ServiceCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_ServiceCode) */

void zx_mm7_extendedReplaceReq_PUSH_ServiceCode(struct zx_mm7_extendedReplaceReq_s* x, struct zx_mm7_ServiceCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ServiceCode->gg.g;
  x->ServiceCode = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_ServiceCode) */

void zx_mm7_extendedReplaceReq_REV_ServiceCode(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_ServiceCode_s* nxt;
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return;
  y = x->ServiceCode;
  if (!y) return;
  x->ServiceCode = 0;
  while (y) {
    nxt = (struct zx_mm7_ServiceCode_s*)y->gg.g.n;
    y->gg.g.n = &x->ServiceCode->gg.g;
    x->ServiceCode = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_ServiceCode) */

void zx_mm7_extendedReplaceReq_PUT_ServiceCode(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_mm7_ServiceCode_s* z)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x || !z) return;
  y = x->ServiceCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ServiceCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_ServiceCode) */

void zx_mm7_extendedReplaceReq_ADD_ServiceCode(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_mm7_ServiceCode_s* z)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ServiceCode->gg.g;
    x->ServiceCode = z;
    return;
  case -1:
    y = x->ServiceCode;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceCode; n > 1 && y; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_ServiceCode) */

void zx_mm7_extendedReplaceReq_DEL_ServiceCode(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_mm7_ServiceCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ServiceCode = (struct zx_mm7_ServiceCode_s*)x->ServiceCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ServiceCode_s*)x->ServiceCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ServiceCode; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ServiceCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_ReplaceID) */

int zx_mm7_extendedReplaceReq_NUM_ReplaceID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplaceID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_ReplaceID) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_ReplaceID(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReplaceID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_ReplaceID) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_ReplaceID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReplaceID;
  if (y)
    x->ReplaceID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_ReplaceID) */

void zx_mm7_extendedReplaceReq_PUSH_ReplaceID(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReplaceID->g;
  x->ReplaceID = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_ReplaceID) */

void zx_mm7_extendedReplaceReq_REV_ReplaceID(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReplaceID;
  if (!y) return;
  x->ReplaceID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReplaceID->g;
    x->ReplaceID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_ReplaceID) */

void zx_mm7_extendedReplaceReq_PUT_ReplaceID(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReplaceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReplaceID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_ReplaceID) */

void zx_mm7_extendedReplaceReq_ADD_ReplaceID(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReplaceID->g;
    x->ReplaceID = z;
    return;
  case -1:
    y = x->ReplaceID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplaceID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_ReplaceID) */

void zx_mm7_extendedReplaceReq_DEL_ReplaceID(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplaceID = (struct zx_elem_s*)x->ReplaceID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReplaceID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReplaceID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_TimeStamp) */

int zx_mm7_extendedReplaceReq_NUM_TimeStamp(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TimeStamp; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_TimeStamp) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_TimeStamp(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->TimeStamp; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_TimeStamp) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_TimeStamp(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->TimeStamp;
  if (y)
    x->TimeStamp = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_TimeStamp) */

void zx_mm7_extendedReplaceReq_PUSH_TimeStamp(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->TimeStamp->g;
  x->TimeStamp = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_TimeStamp) */

void zx_mm7_extendedReplaceReq_REV_TimeStamp(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->TimeStamp;
  if (!y) return;
  x->TimeStamp = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->TimeStamp->g;
    x->TimeStamp = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_TimeStamp) */

void zx_mm7_extendedReplaceReq_PUT_TimeStamp(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->TimeStamp;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->TimeStamp = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_TimeStamp) */

void zx_mm7_extendedReplaceReq_ADD_TimeStamp(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->TimeStamp->g;
    x->TimeStamp = z;
    return;
  case -1:
    y = x->TimeStamp;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_TimeStamp) */

void zx_mm7_extendedReplaceReq_DEL_TimeStamp(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TimeStamp = (struct zx_elem_s*)x->TimeStamp->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->TimeStamp;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->TimeStamp; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_EarliestDeliveryTime) */

int zx_mm7_extendedReplaceReq_NUM_EarliestDeliveryTime(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EarliestDeliveryTime; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_EarliestDeliveryTime) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_EarliestDeliveryTime(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->EarliestDeliveryTime; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_EarliestDeliveryTime) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_EarliestDeliveryTime(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->EarliestDeliveryTime;
  if (y)
    x->EarliestDeliveryTime = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_EarliestDeliveryTime) */

void zx_mm7_extendedReplaceReq_PUSH_EarliestDeliveryTime(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->EarliestDeliveryTime->g;
  x->EarliestDeliveryTime = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_EarliestDeliveryTime) */

void zx_mm7_extendedReplaceReq_REV_EarliestDeliveryTime(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->EarliestDeliveryTime;
  if (!y) return;
  x->EarliestDeliveryTime = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->EarliestDeliveryTime->g;
    x->EarliestDeliveryTime = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_EarliestDeliveryTime) */

void zx_mm7_extendedReplaceReq_PUT_EarliestDeliveryTime(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->EarliestDeliveryTime;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->EarliestDeliveryTime = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_EarliestDeliveryTime) */

void zx_mm7_extendedReplaceReq_ADD_EarliestDeliveryTime(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->EarliestDeliveryTime->g;
    x->EarliestDeliveryTime = z;
    return;
  case -1:
    y = x->EarliestDeliveryTime;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EarliestDeliveryTime; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_EarliestDeliveryTime) */

void zx_mm7_extendedReplaceReq_DEL_EarliestDeliveryTime(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EarliestDeliveryTime = (struct zx_elem_s*)x->EarliestDeliveryTime->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->EarliestDeliveryTime;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->EarliestDeliveryTime; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_ExpiryDate) */

int zx_mm7_extendedReplaceReq_NUM_ExpiryDate(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ExpiryDate; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_ExpiryDate) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_ExpiryDate(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ExpiryDate; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_ExpiryDate) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_ExpiryDate(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ExpiryDate;
  if (y)
    x->ExpiryDate = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_ExpiryDate) */

void zx_mm7_extendedReplaceReq_PUSH_ExpiryDate(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ExpiryDate->g;
  x->ExpiryDate = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_ExpiryDate) */

void zx_mm7_extendedReplaceReq_REV_ExpiryDate(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ExpiryDate;
  if (!y) return;
  x->ExpiryDate = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ExpiryDate->g;
    x->ExpiryDate = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_ExpiryDate) */

void zx_mm7_extendedReplaceReq_PUT_ExpiryDate(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ExpiryDate;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ExpiryDate = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_ExpiryDate) */

void zx_mm7_extendedReplaceReq_ADD_ExpiryDate(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ExpiryDate->g;
    x->ExpiryDate = z;
    return;
  case -1:
    y = x->ExpiryDate;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ExpiryDate; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_ExpiryDate) */

void zx_mm7_extendedReplaceReq_DEL_ExpiryDate(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ExpiryDate = (struct zx_elem_s*)x->ExpiryDate->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ExpiryDate;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ExpiryDate; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_ReadReply) */

int zx_mm7_extendedReplaceReq_NUM_ReadReply(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReadReply; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_ReadReply) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_ReadReply(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ReadReply; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_ReadReply) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_ReadReply(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ReadReply;
  if (y)
    x->ReadReply = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_ReadReply) */

void zx_mm7_extendedReplaceReq_PUSH_ReadReply(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ReadReply->g;
  x->ReadReply = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_ReadReply) */

void zx_mm7_extendedReplaceReq_REV_ReadReply(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ReadReply;
  if (!y) return;
  x->ReadReply = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ReadReply->g;
    x->ReadReply = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_ReadReply) */

void zx_mm7_extendedReplaceReq_PUT_ReadReply(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ReadReply;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ReadReply = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_ReadReply) */

void zx_mm7_extendedReplaceReq_ADD_ReadReply(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ReadReply->g;
    x->ReadReply = z;
    return;
  case -1:
    y = x->ReadReply;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReadReply; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_ReadReply) */

void zx_mm7_extendedReplaceReq_DEL_ReadReply(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReadReply = (struct zx_elem_s*)x->ReadReply->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ReadReply;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ReadReply; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_DeliveryReport) */

int zx_mm7_extendedReplaceReq_NUM_DeliveryReport(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeliveryReport; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_DeliveryReport) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_GET_DeliveryReport(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->DeliveryReport; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_DeliveryReport) */

struct zx_elem_s* zx_mm7_extendedReplaceReq_POP_DeliveryReport(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->DeliveryReport;
  if (y)
    x->DeliveryReport = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_DeliveryReport) */

void zx_mm7_extendedReplaceReq_PUSH_DeliveryReport(struct zx_mm7_extendedReplaceReq_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->DeliveryReport->g;
  x->DeliveryReport = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_DeliveryReport) */

void zx_mm7_extendedReplaceReq_REV_DeliveryReport(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->DeliveryReport;
  if (!y) return;
  x->DeliveryReport = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->DeliveryReport->g;
    x->DeliveryReport = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_DeliveryReport) */

void zx_mm7_extendedReplaceReq_PUT_DeliveryReport(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->DeliveryReport;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->DeliveryReport = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_DeliveryReport) */

void zx_mm7_extendedReplaceReq_ADD_DeliveryReport(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->DeliveryReport->g;
    x->DeliveryReport = z;
    return;
  case -1:
    y = x->DeliveryReport;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DeliveryReport; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_DeliveryReport) */

void zx_mm7_extendedReplaceReq_DEL_DeliveryReport(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeliveryReport = (struct zx_elem_s*)x->DeliveryReport->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->DeliveryReport;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->DeliveryReport; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_Content) */

int zx_mm7_extendedReplaceReq_NUM_Content(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_Content_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Content; y; ++n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_Content) */

struct zx_mm7_Content_s* zx_mm7_extendedReplaceReq_GET_Content(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_mm7_Content_s* y;
  if (!x) return 0;
  for (y = x->Content; n>=0 && y; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_Content) */

struct zx_mm7_Content_s* zx_mm7_extendedReplaceReq_POP_Content(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_Content_s* y;
  if (!x) return 0;
  y = x->Content;
  if (y)
    x->Content = (struct zx_mm7_Content_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_Content) */

void zx_mm7_extendedReplaceReq_PUSH_Content(struct zx_mm7_extendedReplaceReq_s* x, struct zx_mm7_Content_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Content->gg.g;
  x->Content = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_Content) */

void zx_mm7_extendedReplaceReq_REV_Content(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_Content_s* nxt;
  struct zx_mm7_Content_s* y;
  if (!x) return;
  y = x->Content;
  if (!y) return;
  x->Content = 0;
  while (y) {
    nxt = (struct zx_mm7_Content_s*)y->gg.g.n;
    y->gg.g.n = &x->Content->gg.g;
    x->Content = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_Content) */

void zx_mm7_extendedReplaceReq_PUT_Content(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_mm7_Content_s* z)
{
  struct zx_mm7_Content_s* y;
  if (!x || !z) return;
  y = x->Content;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Content = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_Content) */

void zx_mm7_extendedReplaceReq_ADD_Content(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_mm7_Content_s* z)
{
  struct zx_mm7_Content_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Content->gg.g;
    x->Content = z;
    return;
  case -1:
    y = x->Content;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Content; n > 1 && y; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_Content) */

void zx_mm7_extendedReplaceReq_DEL_Content(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_mm7_Content_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Content = (struct zx_mm7_Content_s*)x->Content->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Content_s*)x->Content;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Content; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Content_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_AdditionalInformation) */

int zx_mm7_extendedReplaceReq_NUM_AdditionalInformation(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AdditionalInformation; y; ++n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_AdditionalInformation) */

struct zx_mm7_AdditionalInformation_s* zx_mm7_extendedReplaceReq_GET_AdditionalInformation(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return 0;
  for (y = x->AdditionalInformation; n>=0 && y; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_AdditionalInformation) */

struct zx_mm7_AdditionalInformation_s* zx_mm7_extendedReplaceReq_POP_AdditionalInformation(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return 0;
  y = x->AdditionalInformation;
  if (y)
    x->AdditionalInformation = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_AdditionalInformation) */

void zx_mm7_extendedReplaceReq_PUSH_AdditionalInformation(struct zx_mm7_extendedReplaceReq_s* x, struct zx_mm7_AdditionalInformation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AdditionalInformation->gg.g;
  x->AdditionalInformation = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_AdditionalInformation) */

void zx_mm7_extendedReplaceReq_REV_AdditionalInformation(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_AdditionalInformation_s* nxt;
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return;
  y = x->AdditionalInformation;
  if (!y) return;
  x->AdditionalInformation = 0;
  while (y) {
    nxt = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n;
    y->gg.g.n = &x->AdditionalInformation->gg.g;
    x->AdditionalInformation = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_AdditionalInformation) */

void zx_mm7_extendedReplaceReq_PUT_AdditionalInformation(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_mm7_AdditionalInformation_s* z)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x || !z) return;
  y = x->AdditionalInformation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AdditionalInformation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_AdditionalInformation) */

void zx_mm7_extendedReplaceReq_ADD_AdditionalInformation(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_mm7_AdditionalInformation_s* z)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AdditionalInformation->gg.g;
    x->AdditionalInformation = z;
    return;
  case -1:
    y = x->AdditionalInformation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalInformation; n > 1 && y; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_AdditionalInformation) */

void zx_mm7_extendedReplaceReq_DEL_AdditionalInformation(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_mm7_AdditionalInformation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AdditionalInformation = (struct zx_mm7_AdditionalInformation_s*)x->AdditionalInformation->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_AdditionalInformation_s*)x->AdditionalInformation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AdditionalInformation; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_AdditionalInformation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceReq_NUM_MessageExtraData) */

int zx_mm7_extendedReplaceReq_NUM_MessageExtraData(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageExtraData; y; ++n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceReq_GET_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_extendedReplaceReq_GET_MessageExtraData(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  for (y = x->MessageExtraData; n>=0 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_POP_MessageExtraData) */

struct zx_mm7_MessageExtraData_s* zx_mm7_extendedReplaceReq_POP_MessageExtraData(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return 0;
  y = x->MessageExtraData;
  if (y)
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceReq_PUSH_MessageExtraData) */

void zx_mm7_extendedReplaceReq_PUSH_MessageExtraData(struct zx_mm7_extendedReplaceReq_s* x, struct zx_mm7_MessageExtraData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageExtraData->gg.g;
  x->MessageExtraData = z;
}

/* FUNC(zx_mm7_extendedReplaceReq_REV_MessageExtraData) */

void zx_mm7_extendedReplaceReq_REV_MessageExtraData(struct zx_mm7_extendedReplaceReq_s* x)
{
  struct zx_mm7_MessageExtraData_s* nxt;
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  y = x->MessageExtraData;
  if (!y) return;
  x->MessageExtraData = 0;
  while (y) {
    nxt = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_PUT_MessageExtraData) */

void zx_mm7_extendedReplaceReq_PUT_MessageExtraData(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  y = x->MessageExtraData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageExtraData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_extendedReplaceReq_ADD_MessageExtraData) */

void zx_mm7_extendedReplaceReq_ADD_MessageExtraData(struct zx_mm7_extendedReplaceReq_s* x, int n, struct zx_mm7_MessageExtraData_s* z)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MessageExtraData->gg.g;
    x->MessageExtraData = z;
    return;
  case -1:
    y = x->MessageExtraData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_extendedReplaceReq_DEL_MessageExtraData) */

void zx_mm7_extendedReplaceReq_DEL_MessageExtraData(struct zx_mm7_extendedReplaceReq_s* x, int n)
{
  struct zx_mm7_MessageExtraData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageExtraData = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_MessageExtraData_s*)x->MessageExtraData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageExtraData; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_MessageExtraData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceRsp_NUM_MM7Version) */

int zx_mm7_extendedReplaceRsp_NUM_MM7Version(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MM7Version; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceRsp_GET_MM7Version) */

struct zx_elem_s* zx_mm7_extendedReplaceRsp_GET_MM7Version(struct zx_mm7_extendedReplaceRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MM7Version; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceRsp_POP_MM7Version) */

struct zx_elem_s* zx_mm7_extendedReplaceRsp_POP_MM7Version(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MM7Version;
  if (y)
    x->MM7Version = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceRsp_PUSH_MM7Version) */

void zx_mm7_extendedReplaceRsp_PUSH_MM7Version(struct zx_mm7_extendedReplaceRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MM7Version->g;
  x->MM7Version = z;
}

/* FUNC(zx_mm7_extendedReplaceRsp_REV_MM7Version) */

void zx_mm7_extendedReplaceRsp_REV_MM7Version(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MM7Version;
  if (!y) return;
  x->MM7Version = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MM7Version->g;
    x->MM7Version = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceRsp_PUT_MM7Version) */

void zx_mm7_extendedReplaceRsp_PUT_MM7Version(struct zx_mm7_extendedReplaceRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MM7Version;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MM7Version = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceRsp_ADD_MM7Version) */

void zx_mm7_extendedReplaceRsp_ADD_MM7Version(struct zx_mm7_extendedReplaceRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MM7Version->g;
    x->MM7Version = z;
    return;
  case -1:
    y = x->MM7Version;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceRsp_DEL_MM7Version) */

void zx_mm7_extendedReplaceRsp_DEL_MM7Version(struct zx_mm7_extendedReplaceRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MM7Version = (struct zx_elem_s*)x->MM7Version->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MM7Version;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MM7Version; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceRsp_NUM_MessageID) */

int zx_mm7_extendedReplaceRsp_NUM_MessageID(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceRsp_GET_MessageID) */

struct zx_elem_s* zx_mm7_extendedReplaceRsp_GET_MessageID(struct zx_mm7_extendedReplaceRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceRsp_POP_MessageID) */

struct zx_elem_s* zx_mm7_extendedReplaceRsp_POP_MessageID(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceRsp_PUSH_MessageID) */

void zx_mm7_extendedReplaceRsp_PUSH_MessageID(struct zx_mm7_extendedReplaceRsp_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MessageID->g;
  x->MessageID = z;
}

/* FUNC(zx_mm7_extendedReplaceRsp_REV_MessageID) */

void zx_mm7_extendedReplaceRsp_REV_MessageID(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MessageID->g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceRsp_PUT_MessageID) */

void zx_mm7_extendedReplaceRsp_PUT_MessageID(struct zx_mm7_extendedReplaceRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_mm7_extendedReplaceRsp_ADD_MessageID) */

void zx_mm7_extendedReplaceRsp_ADD_MessageID(struct zx_mm7_extendedReplaceRsp_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MessageID->g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_mm7_extendedReplaceRsp_DEL_MessageID) */

void zx_mm7_extendedReplaceRsp_DEL_MessageID(struct zx_mm7_extendedReplaceRsp_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_elem_s*)x->MessageID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MessageID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_mm7_extendedReplaceRsp_NUM_Status) */

int zx_mm7_extendedReplaceRsp_NUM_Status(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_mm7_extendedReplaceRsp_GET_Status) */

struct zx_mm7_Status_s* zx_mm7_extendedReplaceRsp_GET_Status(struct zx_mm7_extendedReplaceRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceRsp_POP_Status) */

struct zx_mm7_Status_s* zx_mm7_extendedReplaceRsp_POP_Status(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_mm7_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_mm7_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_mm7_extendedReplaceRsp_PUSH_Status) */

void zx_mm7_extendedReplaceRsp_PUSH_Status(struct zx_mm7_extendedReplaceRsp_s* x, struct zx_mm7_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_mm7_extendedReplaceRsp_REV_Status) */

void zx_mm7_extendedReplaceRsp_REV_Status(struct zx_mm7_extendedReplaceRsp_s* x)
{
  struct zx_mm7_Status_s* nxt;
  struct zx_mm7_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_mm7_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_mm7_extendedReplaceRsp_PUT_Status) */

void zx_mm7_extendedReplaceRsp_PUT_Status(struct zx_mm7_extendedReplaceRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_mm7_extendedReplaceRsp_ADD_Status) */

void zx_mm7_extendedReplaceRsp_ADD_Status(struct zx_mm7_extendedReplaceRsp_s* x, int n, struct zx_mm7_Status_s* z)
{
  struct zx_mm7_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_mm7_extendedReplaceRsp_DEL_Status) */

void zx_mm7_extendedReplaceRsp_DEL_Status(struct zx_mm7_extendedReplaceRsp_s* x, int n)
{
  struct zx_mm7_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_mm7_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* EOF -- c/zx-mm7-getput.c */
