/* c/zx-wsse-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-wsse-data.h"

/* FUNC(zx_wsse_BinarySecurityToken_GET_EncodingType) */
struct zx_str* zx_wsse_BinarySecurityToken_GET_EncodingType(struct zx_wsse_BinarySecurityToken_s* x) { return x->EncodingType; }
/* FUNC(zx_wsse_BinarySecurityToken_PUT_EncodingType) */
void zx_wsse_BinarySecurityToken_PUT_EncodingType(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y) { x->EncodingType = y; }
/* FUNC(zx_wsse_BinarySecurityToken_GET_ValueType) */
struct zx_str* zx_wsse_BinarySecurityToken_GET_ValueType(struct zx_wsse_BinarySecurityToken_s* x) { return x->ValueType; }
/* FUNC(zx_wsse_BinarySecurityToken_PUT_ValueType) */
void zx_wsse_BinarySecurityToken_PUT_ValueType(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y) { x->ValueType = y; }
/* FUNC(zx_wsse_BinarySecurityToken_GET_Id) */
struct zx_str* zx_wsse_BinarySecurityToken_GET_Id(struct zx_wsse_BinarySecurityToken_s* x) { return x->Id; }
/* FUNC(zx_wsse_BinarySecurityToken_PUT_Id) */
void zx_wsse_BinarySecurityToken_PUT_Id(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_wsse_Embedded_GET_ValueType) */
struct zx_str* zx_wsse_Embedded_GET_ValueType(struct zx_wsse_Embedded_s* x) { return x->ValueType; }
/* FUNC(zx_wsse_Embedded_PUT_ValueType) */
void zx_wsse_Embedded_PUT_ValueType(struct zx_wsse_Embedded_s* x, struct zx_str* y) { x->ValueType = y; }





/* FUNC(zx_wsse_KeyIdentifier_GET_EncodingType) */
struct zx_str* zx_wsse_KeyIdentifier_GET_EncodingType(struct zx_wsse_KeyIdentifier_s* x) { return x->EncodingType; }
/* FUNC(zx_wsse_KeyIdentifier_PUT_EncodingType) */
void zx_wsse_KeyIdentifier_PUT_EncodingType(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y) { x->EncodingType = y; }
/* FUNC(zx_wsse_KeyIdentifier_GET_ValueType) */
struct zx_str* zx_wsse_KeyIdentifier_GET_ValueType(struct zx_wsse_KeyIdentifier_s* x) { return x->ValueType; }
/* FUNC(zx_wsse_KeyIdentifier_PUT_ValueType) */
void zx_wsse_KeyIdentifier_PUT_ValueType(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y) { x->ValueType = y; }
/* FUNC(zx_wsse_KeyIdentifier_GET_Id) */
struct zx_str* zx_wsse_KeyIdentifier_GET_Id(struct zx_wsse_KeyIdentifier_s* x) { return x->Id; }
/* FUNC(zx_wsse_KeyIdentifier_PUT_Id) */
void zx_wsse_KeyIdentifier_PUT_Id(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_wsse_Nonce_GET_EncodingType) */
struct zx_str* zx_wsse_Nonce_GET_EncodingType(struct zx_wsse_Nonce_s* x) { return x->EncodingType; }
/* FUNC(zx_wsse_Nonce_PUT_EncodingType) */
void zx_wsse_Nonce_PUT_EncodingType(struct zx_wsse_Nonce_s* x, struct zx_str* y) { x->EncodingType = y; }
/* FUNC(zx_wsse_Nonce_GET_Id) */
struct zx_str* zx_wsse_Nonce_GET_Id(struct zx_wsse_Nonce_s* x) { return x->Id; }
/* FUNC(zx_wsse_Nonce_PUT_Id) */
void zx_wsse_Nonce_PUT_Id(struct zx_wsse_Nonce_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_wsse_Password_GET_Type) */
struct zx_str* zx_wsse_Password_GET_Type(struct zx_wsse_Password_s* x) { return x->Type; }
/* FUNC(zx_wsse_Password_PUT_Type) */
void zx_wsse_Password_PUT_Type(struct zx_wsse_Password_s* x, struct zx_str* y) { x->Type = y; }
/* FUNC(zx_wsse_Password_GET_Id) */
struct zx_str* zx_wsse_Password_GET_Id(struct zx_wsse_Password_s* x) { return x->Id; }
/* FUNC(zx_wsse_Password_PUT_Id) */
void zx_wsse_Password_PUT_Id(struct zx_wsse_Password_s* x, struct zx_str* y) { x->Id = y; }





/* FUNC(zx_wsse_Reference_GET_URI) */
struct zx_str* zx_wsse_Reference_GET_URI(struct zx_wsse_Reference_s* x) { return x->URI; }
/* FUNC(zx_wsse_Reference_PUT_URI) */
void zx_wsse_Reference_PUT_URI(struct zx_wsse_Reference_s* x, struct zx_str* y) { x->URI = y; }
/* FUNC(zx_wsse_Reference_GET_ValueType) */
struct zx_str* zx_wsse_Reference_GET_ValueType(struct zx_wsse_Reference_s* x) { return x->ValueType; }
/* FUNC(zx_wsse_Reference_PUT_ValueType) */
void zx_wsse_Reference_PUT_ValueType(struct zx_wsse_Reference_s* x, struct zx_str* y) { x->ValueType = y; }










/* FUNC(zx_wsse_SecurityTokenReference_GET_Usage) */
struct zx_str* zx_wsse_SecurityTokenReference_GET_Usage(struct zx_wsse_SecurityTokenReference_s* x) { return x->Usage; }
/* FUNC(zx_wsse_SecurityTokenReference_PUT_Usage) */
void zx_wsse_SecurityTokenReference_PUT_Usage(struct zx_wsse_SecurityTokenReference_s* x, struct zx_str* y) { x->Usage = y; }
/* FUNC(zx_wsse_SecurityTokenReference_GET_Id) */
struct zx_str* zx_wsse_SecurityTokenReference_GET_Id(struct zx_wsse_SecurityTokenReference_s* x) { return x->Id; }
/* FUNC(zx_wsse_SecurityTokenReference_PUT_Id) */
void zx_wsse_SecurityTokenReference_PUT_Id(struct zx_wsse_SecurityTokenReference_s* x, struct zx_str* y) { x->Id = y; }










/* FUNC(zx_wsse_Username_GET_Id) */
struct zx_str* zx_wsse_Username_GET_Id(struct zx_wsse_Username_s* x) { return x->Id; }
/* FUNC(zx_wsse_Username_PUT_Id) */
void zx_wsse_Username_PUT_Id(struct zx_wsse_Username_s* x, struct zx_str* y) { x->Id = y; }







/* FUNC(zx_wsse_UsernameToken_NUM_Username) */

int zx_wsse_UsernameToken_NUM_Username(struct zx_wsse_UsernameToken_s* x)
{
  struct zx_wsse_Username_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Username; y; ++n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_wsse_UsernameToken_GET_Username) */

struct zx_wsse_Username_s* zx_wsse_UsernameToken_GET_Username(struct zx_wsse_UsernameToken_s* x, int n)
{
  struct zx_wsse_Username_s* y;
  if (!x) return 0;
  for (y = x->Username; n>=0 && y; --n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_wsse_UsernameToken_POP_Username) */

struct zx_wsse_Username_s* zx_wsse_UsernameToken_POP_Username(struct zx_wsse_UsernameToken_s* x)
{
  struct zx_wsse_Username_s* y;
  if (!x) return 0;
  y = x->Username;
  if (y)
    x->Username = (struct zx_wsse_Username_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_wsse_UsernameToken_PUSH_Username) */

void zx_wsse_UsernameToken_PUSH_Username(struct zx_wsse_UsernameToken_s* x, struct zx_wsse_Username_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Username->gg.g;
  x->Username = z;
}

/* FUNC(zx_wsse_UsernameToken_REV_Username) */

void zx_wsse_UsernameToken_REV_Username(struct zx_wsse_UsernameToken_s* x)
{
  struct zx_wsse_Username_s* nxt;
  struct zx_wsse_Username_s* y;
  if (!x) return;
  y = x->Username;
  if (!y) return;
  x->Username = 0;
  while (y) {
    nxt = (struct zx_wsse_Username_s*)y->gg.g.n;
    y->gg.g.n = &x->Username->gg.g;
    x->Username = y;
    y = nxt;
  }
}

/* FUNC(zx_wsse_UsernameToken_PUT_Username) */

void zx_wsse_UsernameToken_PUT_Username(struct zx_wsse_UsernameToken_s* x, int n, struct zx_wsse_Username_s* z)
{
  struct zx_wsse_Username_s* y;
  if (!x || !z) return;
  y = x->Username;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Username = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_wsse_UsernameToken_ADD_Username) */

void zx_wsse_UsernameToken_ADD_Username(struct zx_wsse_UsernameToken_s* x, int n, struct zx_wsse_Username_s* z)
{
  struct zx_wsse_Username_s* y;
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
    for (; y->gg.g.n; y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Username; n > 1 && y; --n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_wsse_UsernameToken_DEL_Username) */

void zx_wsse_UsernameToken_DEL_Username(struct zx_wsse_UsernameToken_s* x, int n)
{
  struct zx_wsse_Username_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Username = (struct zx_wsse_Username_s*)x->Username->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsse_Username_s*)x->Username;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Username; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_Username_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

/* FUNC(zx_wsse_UsernameToken_GET_Id) */
struct zx_str* zx_wsse_UsernameToken_GET_Id(struct zx_wsse_UsernameToken_s* x) { return x->Id; }
/* FUNC(zx_wsse_UsernameToken_PUT_Id) */
void zx_wsse_UsernameToken_PUT_Id(struct zx_wsse_UsernameToken_s* x, struct zx_str* y) { x->Id = y; }





/* EOF -- c/zx-wsse-getput.c */
