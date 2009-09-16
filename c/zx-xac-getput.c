/* c/zx-xac-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-xac-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Action_NUM_Attribute) */

int zx_xac_Action_NUM_Attribute(struct zx_xac_Action_s* x)
{
  struct zx_xac_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Action_GET_Attribute) */

struct zx_xac_Attribute_s* zx_xac_Action_GET_Attribute(struct zx_xac_Action_s* x, int n)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Action_POP_Attribute) */

struct zx_xac_Attribute_s* zx_xac_Action_POP_Attribute(struct zx_xac_Action_s* x)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_xac_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Action_PUSH_Attribute) */

void zx_xac_Action_PUSH_Attribute(struct zx_xac_Action_s* x, struct zx_xac_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_xac_Action_REV_Attribute) */

void zx_xac_Action_REV_Attribute(struct zx_xac_Action_s* x)
{
  struct zx_xac_Attribute_s* nxt;
  struct zx_xac_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zx_xac_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Action_PUT_Attribute) */

void zx_xac_Action_PUT_Attribute(struct zx_xac_Action_s* x, int n, struct zx_xac_Attribute_s* z)
{
  struct zx_xac_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Action_ADD_Attribute) */

void zx_xac_Action_ADD_Attribute(struct zx_xac_Action_s* x, int n, struct zx_xac_Attribute_s* z)
{
  struct zx_xac_Attribute_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Action_DEL_Attribute) */

void zx_xac_Action_DEL_Attribute(struct zx_xac_Action_s* x, int n)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zx_xac_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Attribute_NUM_AttributeValue) */

int zx_xac_Attribute_NUM_AttributeValue(struct zx_xac_Attribute_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xac_Attribute_GET_AttributeValue) */

struct zx_elem_s* zx_xac_Attribute_GET_AttributeValue(struct zx_xac_Attribute_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xac_Attribute_POP_AttributeValue) */

struct zx_elem_s* zx_xac_Attribute_POP_AttributeValue(struct zx_xac_Attribute_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xac_Attribute_PUSH_AttributeValue) */

void zx_xac_Attribute_PUSH_AttributeValue(struct zx_xac_Attribute_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeValue->g;
  x->AttributeValue = z;
}

/* FUNC(zx_xac_Attribute_REV_AttributeValue) */

void zx_xac_Attribute_REV_AttributeValue(struct zx_xac_Attribute_s* x)
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

/* FUNC(zx_xac_Attribute_PUT_AttributeValue) */

void zx_xac_Attribute_PUT_AttributeValue(struct zx_xac_Attribute_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_xac_Attribute_ADD_AttributeValue) */

void zx_xac_Attribute_ADD_AttributeValue(struct zx_xac_Attribute_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_xac_Attribute_DEL_AttributeValue) */

void zx_xac_Attribute_DEL_AttributeValue(struct zx_xac_Attribute_s* x, int n)
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

#endif

/* FUNC(zx_xac_Attribute_GET_AttributeId) */
struct zx_str* zx_xac_Attribute_GET_AttributeId(struct zx_xac_Attribute_s* x) { return x->AttributeId; }
/* FUNC(zx_xac_Attribute_PUT_AttributeId) */
void zx_xac_Attribute_PUT_AttributeId(struct zx_xac_Attribute_s* x, struct zx_str* y) { x->AttributeId = y; }
/* FUNC(zx_xac_Attribute_GET_DataType) */
struct zx_str* zx_xac_Attribute_GET_DataType(struct zx_xac_Attribute_s* x) { return x->DataType; }
/* FUNC(zx_xac_Attribute_PUT_DataType) */
void zx_xac_Attribute_PUT_DataType(struct zx_xac_Attribute_s* x, struct zx_str* y) { x->DataType = y; }
/* FUNC(zx_xac_Attribute_GET_Issuer) */
struct zx_str* zx_xac_Attribute_GET_Issuer(struct zx_xac_Attribute_s* x) { return x->Issuer; }
/* FUNC(zx_xac_Attribute_PUT_Issuer) */
void zx_xac_Attribute_PUT_Issuer(struct zx_xac_Attribute_s* x, struct zx_str* y) { x->Issuer = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Environment_NUM_Attribute) */

int zx_xac_Environment_NUM_Attribute(struct zx_xac_Environment_s* x)
{
  struct zx_xac_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Environment_GET_Attribute) */

struct zx_xac_Attribute_s* zx_xac_Environment_GET_Attribute(struct zx_xac_Environment_s* x, int n)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Environment_POP_Attribute) */

struct zx_xac_Attribute_s* zx_xac_Environment_POP_Attribute(struct zx_xac_Environment_s* x)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_xac_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Environment_PUSH_Attribute) */

void zx_xac_Environment_PUSH_Attribute(struct zx_xac_Environment_s* x, struct zx_xac_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_xac_Environment_REV_Attribute) */

void zx_xac_Environment_REV_Attribute(struct zx_xac_Environment_s* x)
{
  struct zx_xac_Attribute_s* nxt;
  struct zx_xac_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zx_xac_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Environment_PUT_Attribute) */

void zx_xac_Environment_PUT_Attribute(struct zx_xac_Environment_s* x, int n, struct zx_xac_Attribute_s* z)
{
  struct zx_xac_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Environment_ADD_Attribute) */

void zx_xac_Environment_ADD_Attribute(struct zx_xac_Environment_s* x, int n, struct zx_xac_Attribute_s* z)
{
  struct zx_xac_Attribute_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Environment_DEL_Attribute) */

void zx_xac_Environment_DEL_Attribute(struct zx_xac_Environment_s* x, int n)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zx_xac_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_MissingAttributeDetail_NUM_AttributeValue) */

int zx_xac_MissingAttributeDetail_NUM_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xac_MissingAttributeDetail_GET_AttributeValue) */

struct zx_elem_s* zx_xac_MissingAttributeDetail_GET_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xac_MissingAttributeDetail_POP_AttributeValue) */

struct zx_elem_s* zx_xac_MissingAttributeDetail_POP_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xac_MissingAttributeDetail_PUSH_AttributeValue) */

void zx_xac_MissingAttributeDetail_PUSH_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AttributeValue->g;
  x->AttributeValue = z;
}

/* FUNC(zx_xac_MissingAttributeDetail_REV_AttributeValue) */

void zx_xac_MissingAttributeDetail_REV_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x)
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

/* FUNC(zx_xac_MissingAttributeDetail_PUT_AttributeValue) */

void zx_xac_MissingAttributeDetail_PUT_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_xac_MissingAttributeDetail_ADD_AttributeValue) */

void zx_xac_MissingAttributeDetail_ADD_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_xac_MissingAttributeDetail_DEL_AttributeValue) */

void zx_xac_MissingAttributeDetail_DEL_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, int n)
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

#endif

/* FUNC(zx_xac_MissingAttributeDetail_GET_AttributeId) */
struct zx_str* zx_xac_MissingAttributeDetail_GET_AttributeId(struct zx_xac_MissingAttributeDetail_s* x) { return x->AttributeId; }
/* FUNC(zx_xac_MissingAttributeDetail_PUT_AttributeId) */
void zx_xac_MissingAttributeDetail_PUT_AttributeId(struct zx_xac_MissingAttributeDetail_s* x, struct zx_str* y) { x->AttributeId = y; }
/* FUNC(zx_xac_MissingAttributeDetail_GET_DataType) */
struct zx_str* zx_xac_MissingAttributeDetail_GET_DataType(struct zx_xac_MissingAttributeDetail_s* x) { return x->DataType; }
/* FUNC(zx_xac_MissingAttributeDetail_PUT_DataType) */
void zx_xac_MissingAttributeDetail_PUT_DataType(struct zx_xac_MissingAttributeDetail_s* x, struct zx_str* y) { x->DataType = y; }
/* FUNC(zx_xac_MissingAttributeDetail_GET_Issuer) */
struct zx_str* zx_xac_MissingAttributeDetail_GET_Issuer(struct zx_xac_MissingAttributeDetail_s* x) { return x->Issuer; }
/* FUNC(zx_xac_MissingAttributeDetail_PUT_Issuer) */
void zx_xac_MissingAttributeDetail_PUT_Issuer(struct zx_xac_MissingAttributeDetail_s* x, struct zx_str* y) { x->Issuer = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Request_NUM_Subject) */

int zx_xac_Request_NUM_Subject(struct zx_xac_Request_s* x)
{
  struct zx_xac_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_xac_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Request_GET_Subject) */

struct zx_xac_Subject_s* zx_xac_Request_GET_Subject(struct zx_xac_Request_s* x, int n)
{
  struct zx_xac_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_xac_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Request_POP_Subject) */

struct zx_xac_Subject_s* zx_xac_Request_POP_Subject(struct zx_xac_Request_s* x)
{
  struct zx_xac_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_xac_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Request_PUSH_Subject) */

void zx_xac_Request_PUSH_Subject(struct zx_xac_Request_s* x, struct zx_xac_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_xac_Request_REV_Subject) */

void zx_xac_Request_REV_Subject(struct zx_xac_Request_s* x)
{
  struct zx_xac_Subject_s* nxt;
  struct zx_xac_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_xac_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Request_PUT_Subject) */

void zx_xac_Request_PUT_Subject(struct zx_xac_Request_s* x, int n, struct zx_xac_Subject_s* z)
{
  struct zx_xac_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Request_ADD_Subject) */

void zx_xac_Request_ADD_Subject(struct zx_xac_Request_s* x, int n, struct zx_xac_Subject_s* z)
{
  struct zx_xac_Subject_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_xac_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Request_DEL_Subject) */

void zx_xac_Request_DEL_Subject(struct zx_xac_Request_s* x, int n)
{
  struct zx_xac_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_xac_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Request_NUM_Resource) */

int zx_xac_Request_NUM_Resource(struct zx_xac_Request_s* x)
{
  struct zx_xac_Resource_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Resource; y; ++n, y = (struct zx_xac_Resource_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Request_GET_Resource) */

struct zx_xac_Resource_s* zx_xac_Request_GET_Resource(struct zx_xac_Request_s* x, int n)
{
  struct zx_xac_Resource_s* y;
  if (!x) return 0;
  for (y = x->Resource; n>=0 && y; --n, y = (struct zx_xac_Resource_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Request_POP_Resource) */

struct zx_xac_Resource_s* zx_xac_Request_POP_Resource(struct zx_xac_Request_s* x)
{
  struct zx_xac_Resource_s* y;
  if (!x) return 0;
  y = x->Resource;
  if (y)
    x->Resource = (struct zx_xac_Resource_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Request_PUSH_Resource) */

void zx_xac_Request_PUSH_Resource(struct zx_xac_Request_s* x, struct zx_xac_Resource_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Resource->gg.g;
  x->Resource = z;
}

/* FUNC(zx_xac_Request_REV_Resource) */

void zx_xac_Request_REV_Resource(struct zx_xac_Request_s* x)
{
  struct zx_xac_Resource_s* nxt;
  struct zx_xac_Resource_s* y;
  if (!x) return;
  y = x->Resource;
  if (!y) return;
  x->Resource = 0;
  while (y) {
    nxt = (struct zx_xac_Resource_s*)y->gg.g.n;
    y->gg.g.n = &x->Resource->gg.g;
    x->Resource = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Request_PUT_Resource) */

void zx_xac_Request_PUT_Resource(struct zx_xac_Request_s* x, int n, struct zx_xac_Resource_s* z)
{
  struct zx_xac_Resource_s* y;
  if (!x || !z) return;
  y = x->Resource;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Resource = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Resource_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Request_ADD_Resource) */

void zx_xac_Request_ADD_Resource(struct zx_xac_Request_s* x, int n, struct zx_xac_Resource_s* z)
{
  struct zx_xac_Resource_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Resource->gg.g;
    x->Resource = z;
    return;
  case -1:
    y = x->Resource;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xac_Resource_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Resource; n > 1 && y; --n, y = (struct zx_xac_Resource_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Request_DEL_Resource) */

void zx_xac_Request_DEL_Resource(struct zx_xac_Request_s* x, int n)
{
  struct zx_xac_Resource_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Resource = (struct zx_xac_Resource_s*)x->Resource->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Resource_s*)x->Resource;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Resource_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Resource; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Resource_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Request_NUM_Action) */

int zx_xac_Request_NUM_Action(struct zx_xac_Request_s* x)
{
  struct zx_xac_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_xac_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Request_GET_Action) */

struct zx_xac_Action_s* zx_xac_Request_GET_Action(struct zx_xac_Request_s* x, int n)
{
  struct zx_xac_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_xac_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Request_POP_Action) */

struct zx_xac_Action_s* zx_xac_Request_POP_Action(struct zx_xac_Request_s* x)
{
  struct zx_xac_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_xac_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Request_PUSH_Action) */

void zx_xac_Request_PUSH_Action(struct zx_xac_Request_s* x, struct zx_xac_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_xac_Request_REV_Action) */

void zx_xac_Request_REV_Action(struct zx_xac_Request_s* x)
{
  struct zx_xac_Action_s* nxt;
  struct zx_xac_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_xac_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Request_PUT_Action) */

void zx_xac_Request_PUT_Action(struct zx_xac_Request_s* x, int n, struct zx_xac_Action_s* z)
{
  struct zx_xac_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Request_ADD_Action) */

void zx_xac_Request_ADD_Action(struct zx_xac_Request_s* x, int n, struct zx_xac_Action_s* z)
{
  struct zx_xac_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_xac_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Request_DEL_Action) */

void zx_xac_Request_DEL_Action(struct zx_xac_Request_s* x, int n)
{
  struct zx_xac_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_xac_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Request_NUM_Environment) */

int zx_xac_Request_NUM_Environment(struct zx_xac_Request_s* x)
{
  struct zx_xac_Environment_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Environment; y; ++n, y = (struct zx_xac_Environment_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Request_GET_Environment) */

struct zx_xac_Environment_s* zx_xac_Request_GET_Environment(struct zx_xac_Request_s* x, int n)
{
  struct zx_xac_Environment_s* y;
  if (!x) return 0;
  for (y = x->Environment; n>=0 && y; --n, y = (struct zx_xac_Environment_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Request_POP_Environment) */

struct zx_xac_Environment_s* zx_xac_Request_POP_Environment(struct zx_xac_Request_s* x)
{
  struct zx_xac_Environment_s* y;
  if (!x) return 0;
  y = x->Environment;
  if (y)
    x->Environment = (struct zx_xac_Environment_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Request_PUSH_Environment) */

void zx_xac_Request_PUSH_Environment(struct zx_xac_Request_s* x, struct zx_xac_Environment_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Environment->gg.g;
  x->Environment = z;
}

/* FUNC(zx_xac_Request_REV_Environment) */

void zx_xac_Request_REV_Environment(struct zx_xac_Request_s* x)
{
  struct zx_xac_Environment_s* nxt;
  struct zx_xac_Environment_s* y;
  if (!x) return;
  y = x->Environment;
  if (!y) return;
  x->Environment = 0;
  while (y) {
    nxt = (struct zx_xac_Environment_s*)y->gg.g.n;
    y->gg.g.n = &x->Environment->gg.g;
    x->Environment = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Request_PUT_Environment) */

void zx_xac_Request_PUT_Environment(struct zx_xac_Request_s* x, int n, struct zx_xac_Environment_s* z)
{
  struct zx_xac_Environment_s* y;
  if (!x || !z) return;
  y = x->Environment;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Environment = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Environment_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Request_ADD_Environment) */

void zx_xac_Request_ADD_Environment(struct zx_xac_Request_s* x, int n, struct zx_xac_Environment_s* z)
{
  struct zx_xac_Environment_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Environment->gg.g;
    x->Environment = z;
    return;
  case -1:
    y = x->Environment;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xac_Environment_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Environment; n > 1 && y; --n, y = (struct zx_xac_Environment_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Request_DEL_Environment) */

void zx_xac_Request_DEL_Environment(struct zx_xac_Request_s* x, int n)
{
  struct zx_xac_Environment_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Environment = (struct zx_xac_Environment_s*)x->Environment->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Environment_s*)x->Environment;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Environment_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Environment; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Environment_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Resource_NUM_ResourceContent) */

int zx_xac_Resource_NUM_ResourceContent(struct zx_xac_Resource_s* x)
{
  struct zx_xac_ResourceContent_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceContent; y; ++n, y = (struct zx_xac_ResourceContent_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Resource_GET_ResourceContent) */

struct zx_xac_ResourceContent_s* zx_xac_Resource_GET_ResourceContent(struct zx_xac_Resource_s* x, int n)
{
  struct zx_xac_ResourceContent_s* y;
  if (!x) return 0;
  for (y = x->ResourceContent; n>=0 && y; --n, y = (struct zx_xac_ResourceContent_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Resource_POP_ResourceContent) */

struct zx_xac_ResourceContent_s* zx_xac_Resource_POP_ResourceContent(struct zx_xac_Resource_s* x)
{
  struct zx_xac_ResourceContent_s* y;
  if (!x) return 0;
  y = x->ResourceContent;
  if (y)
    x->ResourceContent = (struct zx_xac_ResourceContent_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Resource_PUSH_ResourceContent) */

void zx_xac_Resource_PUSH_ResourceContent(struct zx_xac_Resource_s* x, struct zx_xac_ResourceContent_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceContent->gg.g;
  x->ResourceContent = z;
}

/* FUNC(zx_xac_Resource_REV_ResourceContent) */

void zx_xac_Resource_REV_ResourceContent(struct zx_xac_Resource_s* x)
{
  struct zx_xac_ResourceContent_s* nxt;
  struct zx_xac_ResourceContent_s* y;
  if (!x) return;
  y = x->ResourceContent;
  if (!y) return;
  x->ResourceContent = 0;
  while (y) {
    nxt = (struct zx_xac_ResourceContent_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceContent->gg.g;
    x->ResourceContent = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Resource_PUT_ResourceContent) */

void zx_xac_Resource_PUT_ResourceContent(struct zx_xac_Resource_s* x, int n, struct zx_xac_ResourceContent_s* z)
{
  struct zx_xac_ResourceContent_s* y;
  if (!x || !z) return;
  y = x->ResourceContent;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceContent = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_ResourceContent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Resource_ADD_ResourceContent) */

void zx_xac_Resource_ADD_ResourceContent(struct zx_xac_Resource_s* x, int n, struct zx_xac_ResourceContent_s* z)
{
  struct zx_xac_ResourceContent_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceContent->gg.g;
    x->ResourceContent = z;
    return;
  case -1:
    y = x->ResourceContent;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xac_ResourceContent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceContent; n > 1 && y; --n, y = (struct zx_xac_ResourceContent_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Resource_DEL_ResourceContent) */

void zx_xac_Resource_DEL_ResourceContent(struct zx_xac_Resource_s* x, int n)
{
  struct zx_xac_ResourceContent_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceContent = (struct zx_xac_ResourceContent_s*)x->ResourceContent->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_ResourceContent_s*)x->ResourceContent;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_ResourceContent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceContent; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_ResourceContent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Resource_NUM_Attribute) */

int zx_xac_Resource_NUM_Attribute(struct zx_xac_Resource_s* x)
{
  struct zx_xac_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Resource_GET_Attribute) */

struct zx_xac_Attribute_s* zx_xac_Resource_GET_Attribute(struct zx_xac_Resource_s* x, int n)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Resource_POP_Attribute) */

struct zx_xac_Attribute_s* zx_xac_Resource_POP_Attribute(struct zx_xac_Resource_s* x)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_xac_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Resource_PUSH_Attribute) */

void zx_xac_Resource_PUSH_Attribute(struct zx_xac_Resource_s* x, struct zx_xac_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_xac_Resource_REV_Attribute) */

void zx_xac_Resource_REV_Attribute(struct zx_xac_Resource_s* x)
{
  struct zx_xac_Attribute_s* nxt;
  struct zx_xac_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zx_xac_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Resource_PUT_Attribute) */

void zx_xac_Resource_PUT_Attribute(struct zx_xac_Resource_s* x, int n, struct zx_xac_Attribute_s* z)
{
  struct zx_xac_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Resource_ADD_Attribute) */

void zx_xac_Resource_ADD_Attribute(struct zx_xac_Resource_s* x, int n, struct zx_xac_Attribute_s* z)
{
  struct zx_xac_Attribute_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Resource_DEL_Attribute) */

void zx_xac_Resource_DEL_Attribute(struct zx_xac_Resource_s* x, int n)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zx_xac_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif













#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Response_NUM_Result) */

int zx_xac_Response_NUM_Result(struct zx_xac_Response_s* x)
{
  struct zx_xac_Result_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Result; y; ++n, y = (struct zx_xac_Result_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Response_GET_Result) */

struct zx_xac_Result_s* zx_xac_Response_GET_Result(struct zx_xac_Response_s* x, int n)
{
  struct zx_xac_Result_s* y;
  if (!x) return 0;
  for (y = x->Result; n>=0 && y; --n, y = (struct zx_xac_Result_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Response_POP_Result) */

struct zx_xac_Result_s* zx_xac_Response_POP_Result(struct zx_xac_Response_s* x)
{
  struct zx_xac_Result_s* y;
  if (!x) return 0;
  y = x->Result;
  if (y)
    x->Result = (struct zx_xac_Result_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Response_PUSH_Result) */

void zx_xac_Response_PUSH_Result(struct zx_xac_Response_s* x, struct zx_xac_Result_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Result->gg.g;
  x->Result = z;
}

/* FUNC(zx_xac_Response_REV_Result) */

void zx_xac_Response_REV_Result(struct zx_xac_Response_s* x)
{
  struct zx_xac_Result_s* nxt;
  struct zx_xac_Result_s* y;
  if (!x) return;
  y = x->Result;
  if (!y) return;
  x->Result = 0;
  while (y) {
    nxt = (struct zx_xac_Result_s*)y->gg.g.n;
    y->gg.g.n = &x->Result->gg.g;
    x->Result = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Response_PUT_Result) */

void zx_xac_Response_PUT_Result(struct zx_xac_Response_s* x, int n, struct zx_xac_Result_s* z)
{
  struct zx_xac_Result_s* y;
  if (!x || !z) return;
  y = x->Result;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Result = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Result_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Response_ADD_Result) */

void zx_xac_Response_ADD_Result(struct zx_xac_Response_s* x, int n, struct zx_xac_Result_s* z)
{
  struct zx_xac_Result_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Result->gg.g;
    x->Result = z;
    return;
  case -1:
    y = x->Result;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xac_Result_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Result; n > 1 && y; --n, y = (struct zx_xac_Result_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Response_DEL_Result) */

void zx_xac_Response_DEL_Result(struct zx_xac_Response_s* x, int n)
{
  struct zx_xac_Result_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Result = (struct zx_xac_Result_s*)x->Result->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Result_s*)x->Result;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Result_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Result; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Result_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Result_NUM_Decision) */

int zx_xac_Result_NUM_Decision(struct zx_xac_Result_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Decision; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xac_Result_GET_Decision) */

struct zx_elem_s* zx_xac_Result_GET_Decision(struct zx_xac_Result_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Decision; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xac_Result_POP_Decision) */

struct zx_elem_s* zx_xac_Result_POP_Decision(struct zx_xac_Result_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Decision;
  if (y)
    x->Decision = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xac_Result_PUSH_Decision) */

void zx_xac_Result_PUSH_Decision(struct zx_xac_Result_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Decision->g;
  x->Decision = z;
}

/* FUNC(zx_xac_Result_REV_Decision) */

void zx_xac_Result_REV_Decision(struct zx_xac_Result_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Decision;
  if (!y) return;
  x->Decision = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Decision->g;
    x->Decision = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Result_PUT_Decision) */

void zx_xac_Result_PUT_Decision(struct zx_xac_Result_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Decision;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Decision = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xac_Result_ADD_Decision) */

void zx_xac_Result_ADD_Decision(struct zx_xac_Result_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Decision->g;
    x->Decision = z;
    return;
  case -1:
    y = x->Decision;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Decision; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xac_Result_DEL_Decision) */

void zx_xac_Result_DEL_Decision(struct zx_xac_Result_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Decision = (struct zx_elem_s*)x->Decision->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Decision;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Decision; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Result_NUM_Status) */

int zx_xac_Result_NUM_Status(struct zx_xac_Result_s* x)
{
  struct zx_xac_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_xac_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Result_GET_Status) */

struct zx_xac_Status_s* zx_xac_Result_GET_Status(struct zx_xac_Result_s* x, int n)
{
  struct zx_xac_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_xac_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Result_POP_Status) */

struct zx_xac_Status_s* zx_xac_Result_POP_Status(struct zx_xac_Result_s* x)
{
  struct zx_xac_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_xac_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Result_PUSH_Status) */

void zx_xac_Result_PUSH_Status(struct zx_xac_Result_s* x, struct zx_xac_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_xac_Result_REV_Status) */

void zx_xac_Result_REV_Status(struct zx_xac_Result_s* x)
{
  struct zx_xac_Status_s* nxt;
  struct zx_xac_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_xac_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Result_PUT_Status) */

void zx_xac_Result_PUT_Status(struct zx_xac_Result_s* x, int n, struct zx_xac_Status_s* z)
{
  struct zx_xac_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Result_ADD_Status) */

void zx_xac_Result_ADD_Status(struct zx_xac_Result_s* x, int n, struct zx_xac_Status_s* z)
{
  struct zx_xac_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_xac_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Result_DEL_Status) */

void zx_xac_Result_DEL_Status(struct zx_xac_Result_s* x, int n)
{
  struct zx_xac_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_xac_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Result_NUM_Obligations) */

int zx_xac_Result_NUM_Obligations(struct zx_xac_Result_s* x)
{
  struct zx_xa_Obligations_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Obligations; y; ++n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Result_GET_Obligations) */

struct zx_xa_Obligations_s* zx_xac_Result_GET_Obligations(struct zx_xac_Result_s* x, int n)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return 0;
  for (y = x->Obligations; n>=0 && y; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Result_POP_Obligations) */

struct zx_xa_Obligations_s* zx_xac_Result_POP_Obligations(struct zx_xac_Result_s* x)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return 0;
  y = x->Obligations;
  if (y)
    x->Obligations = (struct zx_xa_Obligations_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Result_PUSH_Obligations) */

void zx_xac_Result_PUSH_Obligations(struct zx_xac_Result_s* x, struct zx_xa_Obligations_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Obligations->gg.g;
  x->Obligations = z;
}

/* FUNC(zx_xac_Result_REV_Obligations) */

void zx_xac_Result_REV_Obligations(struct zx_xac_Result_s* x)
{
  struct zx_xa_Obligations_s* nxt;
  struct zx_xa_Obligations_s* y;
  if (!x) return;
  y = x->Obligations;
  if (!y) return;
  x->Obligations = 0;
  while (y) {
    nxt = (struct zx_xa_Obligations_s*)y->gg.g.n;
    y->gg.g.n = &x->Obligations->gg.g;
    x->Obligations = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Result_PUT_Obligations) */

void zx_xac_Result_PUT_Obligations(struct zx_xac_Result_s* x, int n, struct zx_xa_Obligations_s* z)
{
  struct zx_xa_Obligations_s* y;
  if (!x || !z) return;
  y = x->Obligations;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Obligations = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Result_ADD_Obligations) */

void zx_xac_Result_ADD_Obligations(struct zx_xac_Result_s* x, int n, struct zx_xa_Obligations_s* z)
{
  struct zx_xa_Obligations_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Obligations->gg.g;
    x->Obligations = z;
    return;
  case -1:
    y = x->Obligations;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Obligations; n > 1 && y; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Result_DEL_Obligations) */

void zx_xac_Result_DEL_Obligations(struct zx_xac_Result_s* x, int n)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Obligations = (struct zx_xa_Obligations_s*)x->Obligations->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Obligations_s*)x->Obligations;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Obligations; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xac_Result_GET_ResourceId) */
struct zx_str* zx_xac_Result_GET_ResourceId(struct zx_xac_Result_s* x) { return x->ResourceId; }
/* FUNC(zx_xac_Result_PUT_ResourceId) */
void zx_xac_Result_PUT_ResourceId(struct zx_xac_Result_s* x, struct zx_str* y) { x->ResourceId = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Status_NUM_StatusCode) */

int zx_xac_Status_NUM_StatusCode(struct zx_xac_Status_s* x)
{
  struct zx_xac_StatusCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Status_GET_StatusCode) */

struct zx_xac_StatusCode_s* zx_xac_Status_GET_StatusCode(struct zx_xac_Status_s* x, int n)
{
  struct zx_xac_StatusCode_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Status_POP_StatusCode) */

struct zx_xac_StatusCode_s* zx_xac_Status_POP_StatusCode(struct zx_xac_Status_s* x)
{
  struct zx_xac_StatusCode_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_xac_StatusCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Status_PUSH_StatusCode) */

void zx_xac_Status_PUSH_StatusCode(struct zx_xac_Status_s* x, struct zx_xac_StatusCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusCode->gg.g;
  x->StatusCode = z;
}

/* FUNC(zx_xac_Status_REV_StatusCode) */

void zx_xac_Status_REV_StatusCode(struct zx_xac_Status_s* x)
{
  struct zx_xac_StatusCode_s* nxt;
  struct zx_xac_StatusCode_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_xac_StatusCode_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Status_PUT_StatusCode) */

void zx_xac_Status_PUT_StatusCode(struct zx_xac_Status_s* x, int n, struct zx_xac_StatusCode_s* z)
{
  struct zx_xac_StatusCode_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Status_ADD_StatusCode) */

void zx_xac_Status_ADD_StatusCode(struct zx_xac_Status_s* x, int n, struct zx_xac_StatusCode_s* z)
{
  struct zx_xac_StatusCode_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Status_DEL_StatusCode) */

void zx_xac_Status_DEL_StatusCode(struct zx_xac_Status_s* x, int n)
{
  struct zx_xac_StatusCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_xac_StatusCode_s*)x->StatusCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_StatusCode_s*)x->StatusCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Status_NUM_StatusMessage) */

int zx_xac_Status_NUM_StatusMessage(struct zx_xac_Status_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusMessage; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xac_Status_GET_StatusMessage) */

struct zx_elem_s* zx_xac_Status_GET_StatusMessage(struct zx_xac_Status_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->StatusMessage; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xac_Status_POP_StatusMessage) */

struct zx_elem_s* zx_xac_Status_POP_StatusMessage(struct zx_xac_Status_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->StatusMessage;
  if (y)
    x->StatusMessage = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xac_Status_PUSH_StatusMessage) */

void zx_xac_Status_PUSH_StatusMessage(struct zx_xac_Status_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->StatusMessage->g;
  x->StatusMessage = z;
}

/* FUNC(zx_xac_Status_REV_StatusMessage) */

void zx_xac_Status_REV_StatusMessage(struct zx_xac_Status_s* x)
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

/* FUNC(zx_xac_Status_PUT_StatusMessage) */

void zx_xac_Status_PUT_StatusMessage(struct zx_xac_Status_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_xac_Status_ADD_StatusMessage) */

void zx_xac_Status_ADD_StatusMessage(struct zx_xac_Status_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_xac_Status_DEL_StatusMessage) */

void zx_xac_Status_DEL_StatusMessage(struct zx_xac_Status_s* x, int n)
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

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Status_NUM_StatusDetail) */

int zx_xac_Status_NUM_StatusDetail(struct zx_xac_Status_s* x)
{
  struct zx_xac_StatusDetail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusDetail; y; ++n, y = (struct zx_xac_StatusDetail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Status_GET_StatusDetail) */

struct zx_xac_StatusDetail_s* zx_xac_Status_GET_StatusDetail(struct zx_xac_Status_s* x, int n)
{
  struct zx_xac_StatusDetail_s* y;
  if (!x) return 0;
  for (y = x->StatusDetail; n>=0 && y; --n, y = (struct zx_xac_StatusDetail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Status_POP_StatusDetail) */

struct zx_xac_StatusDetail_s* zx_xac_Status_POP_StatusDetail(struct zx_xac_Status_s* x)
{
  struct zx_xac_StatusDetail_s* y;
  if (!x) return 0;
  y = x->StatusDetail;
  if (y)
    x->StatusDetail = (struct zx_xac_StatusDetail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Status_PUSH_StatusDetail) */

void zx_xac_Status_PUSH_StatusDetail(struct zx_xac_Status_s* x, struct zx_xac_StatusDetail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusDetail->gg.g;
  x->StatusDetail = z;
}

/* FUNC(zx_xac_Status_REV_StatusDetail) */

void zx_xac_Status_REV_StatusDetail(struct zx_xac_Status_s* x)
{
  struct zx_xac_StatusDetail_s* nxt;
  struct zx_xac_StatusDetail_s* y;
  if (!x) return;
  y = x->StatusDetail;
  if (!y) return;
  x->StatusDetail = 0;
  while (y) {
    nxt = (struct zx_xac_StatusDetail_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusDetail->gg.g;
    x->StatusDetail = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Status_PUT_StatusDetail) */

void zx_xac_Status_PUT_StatusDetail(struct zx_xac_Status_s* x, int n, struct zx_xac_StatusDetail_s* z)
{
  struct zx_xac_StatusDetail_s* y;
  if (!x || !z) return;
  y = x->StatusDetail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusDetail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_StatusDetail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Status_ADD_StatusDetail) */

void zx_xac_Status_ADD_StatusDetail(struct zx_xac_Status_s* x, int n, struct zx_xac_StatusDetail_s* z)
{
  struct zx_xac_StatusDetail_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_StatusDetail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusDetail; n > 1 && y; --n, y = (struct zx_xac_StatusDetail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Status_DEL_StatusDetail) */

void zx_xac_Status_DEL_StatusDetail(struct zx_xac_Status_s* x, int n)
{
  struct zx_xac_StatusDetail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusDetail = (struct zx_xac_StatusDetail_s*)x->StatusDetail->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_StatusDetail_s*)x->StatusDetail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_StatusDetail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusDetail; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_StatusDetail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_StatusCode_NUM_StatusCode) */

int zx_xac_StatusCode_NUM_StatusCode(struct zx_xac_StatusCode_s* x)
{
  struct zx_xac_StatusCode_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StatusCode; y; ++n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_StatusCode_GET_StatusCode) */

struct zx_xac_StatusCode_s* zx_xac_StatusCode_GET_StatusCode(struct zx_xac_StatusCode_s* x, int n)
{
  struct zx_xac_StatusCode_s* y;
  if (!x) return 0;
  for (y = x->StatusCode; n>=0 && y; --n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_StatusCode_POP_StatusCode) */

struct zx_xac_StatusCode_s* zx_xac_StatusCode_POP_StatusCode(struct zx_xac_StatusCode_s* x)
{
  struct zx_xac_StatusCode_s* y;
  if (!x) return 0;
  y = x->StatusCode;
  if (y)
    x->StatusCode = (struct zx_xac_StatusCode_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_StatusCode_PUSH_StatusCode) */

void zx_xac_StatusCode_PUSH_StatusCode(struct zx_xac_StatusCode_s* x, struct zx_xac_StatusCode_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StatusCode->gg.g;
  x->StatusCode = z;
}

/* FUNC(zx_xac_StatusCode_REV_StatusCode) */

void zx_xac_StatusCode_REV_StatusCode(struct zx_xac_StatusCode_s* x)
{
  struct zx_xac_StatusCode_s* nxt;
  struct zx_xac_StatusCode_s* y;
  if (!x) return;
  y = x->StatusCode;
  if (!y) return;
  x->StatusCode = 0;
  while (y) {
    nxt = (struct zx_xac_StatusCode_s*)y->gg.g.n;
    y->gg.g.n = &x->StatusCode->gg.g;
    x->StatusCode = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_StatusCode_PUT_StatusCode) */

void zx_xac_StatusCode_PUT_StatusCode(struct zx_xac_StatusCode_s* x, int n, struct zx_xac_StatusCode_s* z)
{
  struct zx_xac_StatusCode_s* y;
  if (!x || !z) return;
  y = x->StatusCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StatusCode = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_StatusCode_ADD_StatusCode) */

void zx_xac_StatusCode_ADD_StatusCode(struct zx_xac_StatusCode_s* x, int n, struct zx_xac_StatusCode_s* z)
{
  struct zx_xac_StatusCode_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y; --n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_StatusCode_DEL_StatusCode) */

void zx_xac_StatusCode_DEL_StatusCode(struct zx_xac_StatusCode_s* x, int n)
{
  struct zx_xac_StatusCode_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StatusCode = (struct zx_xac_StatusCode_s*)x->StatusCode->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_StatusCode_s*)x->StatusCode;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StatusCode; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_StatusCode_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xac_StatusCode_GET_Value) */
struct zx_str* zx_xac_StatusCode_GET_Value(struct zx_xac_StatusCode_s* x) { return x->Value; }
/* FUNC(zx_xac_StatusCode_PUT_Value) */
void zx_xac_StatusCode_PUT_Value(struct zx_xac_StatusCode_s* x, struct zx_str* y) { x->Value = y; }












#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xac_Subject_NUM_Attribute) */

int zx_xac_Subject_NUM_Attribute(struct zx_xac_Subject_s* x)
{
  struct zx_xac_Attribute_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Attribute; y; ++n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xac_Subject_GET_Attribute) */

struct zx_xac_Attribute_s* zx_xac_Subject_GET_Attribute(struct zx_xac_Subject_s* x, int n)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return 0;
  for (y = x->Attribute; n>=0 && y; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xac_Subject_POP_Attribute) */

struct zx_xac_Attribute_s* zx_xac_Subject_POP_Attribute(struct zx_xac_Subject_s* x)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return 0;
  y = x->Attribute;
  if (y)
    x->Attribute = (struct zx_xac_Attribute_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xac_Subject_PUSH_Attribute) */

void zx_xac_Subject_PUSH_Attribute(struct zx_xac_Subject_s* x, struct zx_xac_Attribute_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Attribute->gg.g;
  x->Attribute = z;
}

/* FUNC(zx_xac_Subject_REV_Attribute) */

void zx_xac_Subject_REV_Attribute(struct zx_xac_Subject_s* x)
{
  struct zx_xac_Attribute_s* nxt;
  struct zx_xac_Attribute_s* y;
  if (!x) return;
  y = x->Attribute;
  if (!y) return;
  x->Attribute = 0;
  while (y) {
    nxt = (struct zx_xac_Attribute_s*)y->gg.g.n;
    y->gg.g.n = &x->Attribute->gg.g;
    x->Attribute = y;
    y = nxt;
  }
}

/* FUNC(zx_xac_Subject_PUT_Attribute) */

void zx_xac_Subject_PUT_Attribute(struct zx_xac_Subject_s* x, int n, struct zx_xac_Attribute_s* z)
{
  struct zx_xac_Attribute_s* y;
  if (!x || !z) return;
  y = x->Attribute;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Attribute = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xac_Subject_ADD_Attribute) */

void zx_xac_Subject_ADD_Attribute(struct zx_xac_Subject_s* x, int n, struct zx_xac_Attribute_s* z)
{
  struct zx_xac_Attribute_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xac_Subject_DEL_Attribute) */

void zx_xac_Subject_DEL_Attribute(struct zx_xac_Subject_s* x, int n)
{
  struct zx_xac_Attribute_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Attribute = (struct zx_xac_Attribute_s*)x->Attribute->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Attribute_s*)x->Attribute;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Attribute; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Attribute_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xac_Subject_GET_SubjectCategory) */
struct zx_str* zx_xac_Subject_GET_SubjectCategory(struct zx_xac_Subject_s* x) { return x->SubjectCategory; }
/* FUNC(zx_xac_Subject_PUT_SubjectCategory) */
void zx_xac_Subject_PUT_SubjectCategory(struct zx_xac_Subject_s* x, struct zx_str* y) { x->SubjectCategory = y; }





/* EOF -- c/zx-xac-getput.c */
