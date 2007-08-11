/* c/zx-xasa-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-xasa-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_NUM_Response) */

int zx_xasa_XACMLAuthzDecisionStatement_NUM_Response(struct zx_xasa_XACMLAuthzDecisionStatement_s* x)
{
  struct zx_xac_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_GET_Response) */

struct zx_xac_Response_s* zx_xasa_XACMLAuthzDecisionStatement_GET_Response(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, int n)
{
  struct zx_xac_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_POP_Response) */

struct zx_xac_Response_s* zx_xasa_XACMLAuthzDecisionStatement_POP_Response(struct zx_xasa_XACMLAuthzDecisionStatement_s* x)
{
  struct zx_xac_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_xac_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_PUSH_Response) */

void zx_xasa_XACMLAuthzDecisionStatement_PUSH_Response(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, struct zx_xac_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_REV_Response) */

void zx_xasa_XACMLAuthzDecisionStatement_REV_Response(struct zx_xasa_XACMLAuthzDecisionStatement_s* x)
{
  struct zx_xac_Response_s* nxt;
  struct zx_xac_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_xac_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_PUT_Response) */

void zx_xasa_XACMLAuthzDecisionStatement_PUT_Response(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, int n, struct zx_xac_Response_s* z)
{
  struct zx_xac_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_ADD_Response) */

void zx_xasa_XACMLAuthzDecisionStatement_ADD_Response(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, int n, struct zx_xac_Response_s* z)
{
  struct zx_xac_Response_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_DEL_Response) */

void zx_xasa_XACMLAuthzDecisionStatement_DEL_Response(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, int n)
{
  struct zx_xac_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_xac_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_NUM_Request) */

int zx_xasa_XACMLAuthzDecisionStatement_NUM_Request(struct zx_xasa_XACMLAuthzDecisionStatement_s* x)
{
  struct zx_xac_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Request; y; ++n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_GET_Request) */

struct zx_xac_Request_s* zx_xasa_XACMLAuthzDecisionStatement_GET_Request(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, int n)
{
  struct zx_xac_Request_s* y;
  if (!x) return 0;
  for (y = x->Request; n>=0 && y; --n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_POP_Request) */

struct zx_xac_Request_s* zx_xasa_XACMLAuthzDecisionStatement_POP_Request(struct zx_xasa_XACMLAuthzDecisionStatement_s* x)
{
  struct zx_xac_Request_s* y;
  if (!x) return 0;
  y = x->Request;
  if (y)
    x->Request = (struct zx_xac_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_PUSH_Request) */

void zx_xasa_XACMLAuthzDecisionStatement_PUSH_Request(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, struct zx_xac_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Request->gg.g;
  x->Request = z;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_REV_Request) */

void zx_xasa_XACMLAuthzDecisionStatement_REV_Request(struct zx_xasa_XACMLAuthzDecisionStatement_s* x)
{
  struct zx_xac_Request_s* nxt;
  struct zx_xac_Request_s* y;
  if (!x) return;
  y = x->Request;
  if (!y) return;
  x->Request = 0;
  while (y) {
    nxt = (struct zx_xac_Request_s*)y->gg.g.n;
    y->gg.g.n = &x->Request->gg.g;
    x->Request = y;
    y = nxt;
  }
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_PUT_Request) */

void zx_xasa_XACMLAuthzDecisionStatement_PUT_Request(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, int n, struct zx_xac_Request_s* z)
{
  struct zx_xac_Request_s* y;
  if (!x || !z) return;
  y = x->Request;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Request = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_ADD_Request) */

void zx_xasa_XACMLAuthzDecisionStatement_ADD_Request(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, int n, struct zx_xac_Request_s* z)
{
  struct zx_xac_Request_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y; --n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xasa_XACMLAuthzDecisionStatement_DEL_Request) */

void zx_xasa_XACMLAuthzDecisionStatement_DEL_Request(struct zx_xasa_XACMLAuthzDecisionStatement_s* x, int n)
{
  struct zx_xac_Request_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Request = (struct zx_xac_Request_s*)x->Request->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Request_s*)x->Request;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xasa_XACMLPolicyStatement_NUM_Policy) */

int zx_xasa_XACMLPolicyStatement_NUM_Policy(struct zx_xasa_XACMLPolicyStatement_s* x)
{
  struct zx_xa_Policy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Policy; y; ++n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_GET_Policy) */

struct zx_xa_Policy_s* zx_xasa_XACMLPolicyStatement_GET_Policy(struct zx_xasa_XACMLPolicyStatement_s* x, int n)
{
  struct zx_xa_Policy_s* y;
  if (!x) return 0;
  for (y = x->Policy; n>=0 && y; --n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_POP_Policy) */

struct zx_xa_Policy_s* zx_xasa_XACMLPolicyStatement_POP_Policy(struct zx_xasa_XACMLPolicyStatement_s* x)
{
  struct zx_xa_Policy_s* y;
  if (!x) return 0;
  y = x->Policy;
  if (y)
    x->Policy = (struct zx_xa_Policy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_PUSH_Policy) */

void zx_xasa_XACMLPolicyStatement_PUSH_Policy(struct zx_xasa_XACMLPolicyStatement_s* x, struct zx_xa_Policy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Policy->gg.g;
  x->Policy = z;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_REV_Policy) */

void zx_xasa_XACMLPolicyStatement_REV_Policy(struct zx_xasa_XACMLPolicyStatement_s* x)
{
  struct zx_xa_Policy_s* nxt;
  struct zx_xa_Policy_s* y;
  if (!x) return;
  y = x->Policy;
  if (!y) return;
  x->Policy = 0;
  while (y) {
    nxt = (struct zx_xa_Policy_s*)y->gg.g.n;
    y->gg.g.n = &x->Policy->gg.g;
    x->Policy = y;
    y = nxt;
  }
}

/* FUNC(zx_xasa_XACMLPolicyStatement_PUT_Policy) */

void zx_xasa_XACMLPolicyStatement_PUT_Policy(struct zx_xasa_XACMLPolicyStatement_s* x, int n, struct zx_xa_Policy_s* z)
{
  struct zx_xa_Policy_s* y;
  if (!x || !z) return;
  y = x->Policy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Policy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xasa_XACMLPolicyStatement_ADD_Policy) */

void zx_xasa_XACMLPolicyStatement_ADD_Policy(struct zx_xasa_XACMLPolicyStatement_s* x, int n, struct zx_xa_Policy_s* z)
{
  struct zx_xa_Policy_s* y;
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
    for (; y->gg.g.n; y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y; --n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_DEL_Policy) */

void zx_xasa_XACMLPolicyStatement_DEL_Policy(struct zx_xasa_XACMLPolicyStatement_s* x, int n)
{
  struct zx_xa_Policy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Policy = (struct zx_xa_Policy_s*)x->Policy->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Policy_s*)x->Policy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xasa_XACMLPolicyStatement_NUM_PolicySet) */

int zx_xasa_XACMLPolicyStatement_NUM_PolicySet(struct zx_xasa_XACMLPolicyStatement_s* x)
{
  struct zx_xa_PolicySet_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicySet; y; ++n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_GET_PolicySet) */

struct zx_xa_PolicySet_s* zx_xasa_XACMLPolicyStatement_GET_PolicySet(struct zx_xasa_XACMLPolicyStatement_s* x, int n)
{
  struct zx_xa_PolicySet_s* y;
  if (!x) return 0;
  for (y = x->PolicySet; n>=0 && y; --n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_POP_PolicySet) */

struct zx_xa_PolicySet_s* zx_xasa_XACMLPolicyStatement_POP_PolicySet(struct zx_xasa_XACMLPolicyStatement_s* x)
{
  struct zx_xa_PolicySet_s* y;
  if (!x) return 0;
  y = x->PolicySet;
  if (y)
    x->PolicySet = (struct zx_xa_PolicySet_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_PUSH_PolicySet) */

void zx_xasa_XACMLPolicyStatement_PUSH_PolicySet(struct zx_xasa_XACMLPolicyStatement_s* x, struct zx_xa_PolicySet_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicySet->gg.g;
  x->PolicySet = z;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_REV_PolicySet) */

void zx_xasa_XACMLPolicyStatement_REV_PolicySet(struct zx_xasa_XACMLPolicyStatement_s* x)
{
  struct zx_xa_PolicySet_s* nxt;
  struct zx_xa_PolicySet_s* y;
  if (!x) return;
  y = x->PolicySet;
  if (!y) return;
  x->PolicySet = 0;
  while (y) {
    nxt = (struct zx_xa_PolicySet_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicySet->gg.g;
    x->PolicySet = y;
    y = nxt;
  }
}

/* FUNC(zx_xasa_XACMLPolicyStatement_PUT_PolicySet) */

void zx_xasa_XACMLPolicyStatement_PUT_PolicySet(struct zx_xasa_XACMLPolicyStatement_s* x, int n, struct zx_xa_PolicySet_s* z)
{
  struct zx_xa_PolicySet_s* y;
  if (!x || !z) return;
  y = x->PolicySet;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicySet = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xasa_XACMLPolicyStatement_ADD_PolicySet) */

void zx_xasa_XACMLPolicyStatement_ADD_PolicySet(struct zx_xasa_XACMLPolicyStatement_s* x, int n, struct zx_xa_PolicySet_s* z)
{
  struct zx_xa_PolicySet_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicySet->gg.g;
    x->PolicySet = z;
    return;
  case -1:
    y = x->PolicySet;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySet; n > 1 && y; --n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xasa_XACMLPolicyStatement_DEL_PolicySet) */

void zx_xasa_XACMLPolicyStatement_DEL_PolicySet(struct zx_xasa_XACMLPolicyStatement_s* x, int n)
{
  struct zx_xa_PolicySet_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicySet = (struct zx_xa_PolicySet_s*)x->PolicySet->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_PolicySet_s*)x->PolicySet;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySet; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* EOF -- c/zx-xasa-getput.c */
