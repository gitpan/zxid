/* c/zx-se-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-se-data.h"



/* FUNC(zx_se_Body_NUM_ArtifactResolve) */

int zx_se_Body_NUM_ArtifactResolve(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResolve; y; ++n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ArtifactResolve) */

struct zx_sp_ArtifactResolve_s* zx_se_Body_GET_ArtifactResolve(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResolve; n>=0 && y; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ArtifactResolve) */

struct zx_sp_ArtifactResolve_s* zx_se_Body_POP_ArtifactResolve(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return 0;
  y = x->ArtifactResolve;
  if (y)
    x->ArtifactResolve = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ArtifactResolve) */

void zx_se_Body_PUSH_ArtifactResolve(struct zx_se_Body_s* x, struct zx_sp_ArtifactResolve_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResolve->gg.g;
  x->ArtifactResolve = z;
}

/* FUNC(zx_se_Body_REV_ArtifactResolve) */

void zx_se_Body_REV_ArtifactResolve(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* nxt;
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return;
  y = x->ArtifactResolve;
  if (!y) return;
  x->ArtifactResolve = 0;
  while (y) {
    nxt = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResolve->gg.g;
    x->ArtifactResolve = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ArtifactResolve) */

void zx_se_Body_PUT_ArtifactResolve(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x || !z) return;
  y = x->ArtifactResolve;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResolve = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ArtifactResolve) */

void zx_se_Body_ADD_ArtifactResolve(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ArtifactResolve->gg.g;
    x->ArtifactResolve = z;
    return;
  case -1:
    y = x->ArtifactResolve;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolve; n > 1 && y; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ArtifactResolve) */

void zx_se_Body_DEL_ArtifactResolve(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResolve = (struct zx_sp_ArtifactResolve_s*)x->ArtifactResolve->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ArtifactResolve_s*)x->ArtifactResolve;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolve; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_ArtifactResponse) */

int zx_se_Body_NUM_ArtifactResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResponse; y; ++n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ArtifactResponse) */

struct zx_sp_ArtifactResponse_s* zx_se_Body_GET_ArtifactResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResponse; n>=0 && y; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ArtifactResponse) */

struct zx_sp_ArtifactResponse_s* zx_se_Body_POP_ArtifactResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return 0;
  y = x->ArtifactResponse;
  if (y)
    x->ArtifactResponse = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ArtifactResponse) */

void zx_se_Body_PUSH_ArtifactResponse(struct zx_se_Body_s* x, struct zx_sp_ArtifactResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResponse->gg.g;
  x->ArtifactResponse = z;
}

/* FUNC(zx_se_Body_REV_ArtifactResponse) */

void zx_se_Body_REV_ArtifactResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* nxt;
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return;
  y = x->ArtifactResponse;
  if (!y) return;
  x->ArtifactResponse = 0;
  while (y) {
    nxt = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResponse->gg.g;
    x->ArtifactResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ArtifactResponse) */

void zx_se_Body_PUT_ArtifactResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x || !z) return;
  y = x->ArtifactResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ArtifactResponse) */

void zx_se_Body_ADD_ArtifactResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ArtifactResponse->gg.g;
    x->ArtifactResponse = z;
    return;
  case -1:
    y = x->ArtifactResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResponse; n > 1 && y; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ArtifactResponse) */

void zx_se_Body_DEL_ArtifactResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResponse = (struct zx_sp_ArtifactResponse_s*)x->ArtifactResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ArtifactResponse_s*)x->ArtifactResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_ManageNameIDRequest) */

int zx_se_Body_NUM_ManageNameIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; y; ++n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_se_Body_GET_ManageNameIDRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_se_Body_POP_ManageNameIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  y = x->ManageNameIDRequest;
  if (y)
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ManageNameIDRequest) */

void zx_se_Body_PUSH_ManageNameIDRequest(struct zx_se_Body_s* x, struct zx_sp_ManageNameIDRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDRequest->gg.g;
  x->ManageNameIDRequest = z;
}

/* FUNC(zx_se_Body_REV_ManageNameIDRequest) */

void zx_se_Body_REV_ManageNameIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* nxt;
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  x->ManageNameIDRequest = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ManageNameIDRequest) */

void zx_se_Body_PUT_ManageNameIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ManageNameIDRequest) */

void zx_se_Body_ADD_ManageNameIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = z;
    return;
  case -1:
    y = x->ManageNameIDRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ManageNameIDRequest) */

void zx_se_Body_DEL_ManageNameIDRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_ManageNameIDResponse) */

int zx_se_Body_NUM_ManageNameIDResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; y; ++n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_se_Body_GET_ManageNameIDResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_se_Body_POP_ManageNameIDResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  y = x->ManageNameIDResponse;
  if (y)
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ManageNameIDResponse) */

void zx_se_Body_PUSH_ManageNameIDResponse(struct zx_se_Body_s* x, struct zx_sp_ManageNameIDResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDResponse->gg.g;
  x->ManageNameIDResponse = z;
}

/* FUNC(zx_se_Body_REV_ManageNameIDResponse) */

void zx_se_Body_REV_ManageNameIDResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* nxt;
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  x->ManageNameIDResponse = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ManageNameIDResponse) */

void zx_se_Body_PUT_ManageNameIDResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ManageNameIDResponse) */

void zx_se_Body_ADD_ManageNameIDResponse(struct zx_se_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = z;
    return;
  case -1:
    y = x->ManageNameIDResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ManageNameIDResponse) */

void zx_se_Body_DEL_ManageNameIDResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_LogoutRequest) */

int zx_se_Body_NUM_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutRequest; y; ++n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_se_Body_GET_LogoutRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  for (y = x->LogoutRequest; n>=0 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_se_Body_POP_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  y = x->LogoutRequest;
  if (y)
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_LogoutRequest) */

void zx_se_Body_PUSH_LogoutRequest(struct zx_se_Body_s* x, struct zx_sp_LogoutRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutRequest->gg.g;
  x->LogoutRequest = z;
}

/* FUNC(zx_se_Body_REV_LogoutRequest) */

void zx_se_Body_REV_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* nxt;
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  y = x->LogoutRequest;
  if (!y) return;
  x->LogoutRequest = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_LogoutRequest) */

void zx_se_Body_PUT_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  y = x->LogoutRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_LogoutRequest) */

void zx_se_Body_ADD_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = z;
    return;
  case -1:
    y = x->LogoutRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_LogoutRequest) */

void zx_se_Body_DEL_LogoutRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_LogoutResponse) */

int zx_se_Body_NUM_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutResponse; y; ++n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_se_Body_GET_LogoutResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  for (y = x->LogoutResponse; n>=0 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_se_Body_POP_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  y = x->LogoutResponse;
  if (y)
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_LogoutResponse) */

void zx_se_Body_PUSH_LogoutResponse(struct zx_se_Body_s* x, struct zx_sp_LogoutResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutResponse->gg.g;
  x->LogoutResponse = z;
}

/* FUNC(zx_se_Body_REV_LogoutResponse) */

void zx_se_Body_REV_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* nxt;
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  y = x->LogoutResponse;
  if (!y) return;
  x->LogoutResponse = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_LogoutResponse) */

void zx_se_Body_PUT_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  y = x->LogoutResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_LogoutResponse) */

void zx_se_Body_ADD_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = z;
    return;
  case -1:
    y = x->LogoutResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_LogoutResponse) */

void zx_se_Body_DEL_LogoutResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_NameIDMappingRequest) */

int zx_se_Body_NUM_NameIDMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDMappingRequest; y; ++n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_NameIDMappingRequest) */

struct zx_sp_NameIDMappingRequest_s* zx_se_Body_GET_NameIDMappingRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return 0;
  for (y = x->NameIDMappingRequest; n>=0 && y; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_NameIDMappingRequest) */

struct zx_sp_NameIDMappingRequest_s* zx_se_Body_POP_NameIDMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return 0;
  y = x->NameIDMappingRequest;
  if (y)
    x->NameIDMappingRequest = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_NameIDMappingRequest) */

void zx_se_Body_PUSH_NameIDMappingRequest(struct zx_se_Body_s* x, struct zx_sp_NameIDMappingRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDMappingRequest->gg.g;
  x->NameIDMappingRequest = z;
}

/* FUNC(zx_se_Body_REV_NameIDMappingRequest) */

void zx_se_Body_REV_NameIDMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* nxt;
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return;
  y = x->NameIDMappingRequest;
  if (!y) return;
  x->NameIDMappingRequest = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDMappingRequest->gg.g;
    x->NameIDMappingRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_NameIDMappingRequest) */

void zx_se_Body_PUT_NameIDMappingRequest(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x || !z) return;
  y = x->NameIDMappingRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDMappingRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_NameIDMappingRequest) */

void zx_se_Body_ADD_NameIDMappingRequest(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDMappingRequest->gg.g;
    x->NameIDMappingRequest = z;
    return;
  case -1:
    y = x->NameIDMappingRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingRequest; n > 1 && y; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_NameIDMappingRequest) */

void zx_se_Body_DEL_NameIDMappingRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDMappingRequest = (struct zx_sp_NameIDMappingRequest_s*)x->NameIDMappingRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDMappingRequest_s*)x->NameIDMappingRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_NameIDMappingResponse) */

int zx_se_Body_NUM_NameIDMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDMappingResponse; y; ++n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_NameIDMappingResponse) */

struct zx_sp_NameIDMappingResponse_s* zx_se_Body_GET_NameIDMappingResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return 0;
  for (y = x->NameIDMappingResponse; n>=0 && y; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_NameIDMappingResponse) */

struct zx_sp_NameIDMappingResponse_s* zx_se_Body_POP_NameIDMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return 0;
  y = x->NameIDMappingResponse;
  if (y)
    x->NameIDMappingResponse = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_NameIDMappingResponse) */

void zx_se_Body_PUSH_NameIDMappingResponse(struct zx_se_Body_s* x, struct zx_sp_NameIDMappingResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDMappingResponse->gg.g;
  x->NameIDMappingResponse = z;
}

/* FUNC(zx_se_Body_REV_NameIDMappingResponse) */

void zx_se_Body_REV_NameIDMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* nxt;
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return;
  y = x->NameIDMappingResponse;
  if (!y) return;
  x->NameIDMappingResponse = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDMappingResponse->gg.g;
    x->NameIDMappingResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_NameIDMappingResponse) */

void zx_se_Body_PUT_NameIDMappingResponse(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x || !z) return;
  y = x->NameIDMappingResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDMappingResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_NameIDMappingResponse) */

void zx_se_Body_ADD_NameIDMappingResponse(struct zx_se_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDMappingResponse->gg.g;
    x->NameIDMappingResponse = z;
    return;
  case -1:
    y = x->NameIDMappingResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingResponse; n > 1 && y; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_NameIDMappingResponse) */

void zx_se_Body_DEL_NameIDMappingResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDMappingResponse = (struct zx_sp_NameIDMappingResponse_s*)x->NameIDMappingResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDMappingResponse_s*)x->NameIDMappingResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_AttributeQuery) */

int zx_se_Body_NUM_AttributeQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeQuery; y; ++n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_AttributeQuery) */

struct zx_sp_AttributeQuery_s* zx_se_Body_GET_AttributeQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return 0;
  for (y = x->AttributeQuery; n>=0 && y; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_AttributeQuery) */

struct zx_sp_AttributeQuery_s* zx_se_Body_POP_AttributeQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return 0;
  y = x->AttributeQuery;
  if (y)
    x->AttributeQuery = (struct zx_sp_AttributeQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_AttributeQuery) */

void zx_se_Body_PUSH_AttributeQuery(struct zx_se_Body_s* x, struct zx_sp_AttributeQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeQuery->gg.g;
  x->AttributeQuery = z;
}

/* FUNC(zx_se_Body_REV_AttributeQuery) */

void zx_se_Body_REV_AttributeQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* nxt;
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return;
  y = x->AttributeQuery;
  if (!y) return;
  x->AttributeQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AttributeQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeQuery->gg.g;
    x->AttributeQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_AttributeQuery) */

void zx_se_Body_PUT_AttributeQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x || !z) return;
  y = x->AttributeQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_AttributeQuery) */

void zx_se_Body_ADD_AttributeQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeQuery->gg.g;
    x->AttributeQuery = z;
    return;
  case -1:
    y = x->AttributeQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeQuery; n > 1 && y; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_AttributeQuery) */

void zx_se_Body_DEL_AttributeQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeQuery = (struct zx_sp_AttributeQuery_s*)x->AttributeQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AttributeQuery_s*)x->AttributeQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_AuthnQuery) */

int zx_se_Body_NUM_AuthnQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnQuery; y; ++n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_AuthnQuery) */

struct zx_sp_AuthnQuery_s* zx_se_Body_GET_AuthnQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return 0;
  for (y = x->AuthnQuery; n>=0 && y; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_AuthnQuery) */

struct zx_sp_AuthnQuery_s* zx_se_Body_POP_AuthnQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return 0;
  y = x->AuthnQuery;
  if (y)
    x->AuthnQuery = (struct zx_sp_AuthnQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_AuthnQuery) */

void zx_se_Body_PUSH_AuthnQuery(struct zx_se_Body_s* x, struct zx_sp_AuthnQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnQuery->gg.g;
  x->AuthnQuery = z;
}

/* FUNC(zx_se_Body_REV_AuthnQuery) */

void zx_se_Body_REV_AuthnQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* nxt;
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return;
  y = x->AuthnQuery;
  if (!y) return;
  x->AuthnQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AuthnQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnQuery->gg.g;
    x->AuthnQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_AuthnQuery) */

void zx_se_Body_PUT_AuthnQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x || !z) return;
  y = x->AuthnQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_AuthnQuery) */

void zx_se_Body_ADD_AuthnQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnQuery->gg.g;
    x->AuthnQuery = z;
    return;
  case -1:
    y = x->AuthnQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQuery; n > 1 && y; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_AuthnQuery) */

void zx_se_Body_DEL_AuthnQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnQuery = (struct zx_sp_AuthnQuery_s*)x->AuthnQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthnQuery_s*)x->AuthnQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_AuthzDecisionQuery) */

int zx_se_Body_NUM_AuthzDecisionQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthzDecisionQuery; y; ++n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_AuthzDecisionQuery) */

struct zx_sp_AuthzDecisionQuery_s* zx_se_Body_GET_AuthzDecisionQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return 0;
  for (y = x->AuthzDecisionQuery; n>=0 && y; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_AuthzDecisionQuery) */

struct zx_sp_AuthzDecisionQuery_s* zx_se_Body_POP_AuthzDecisionQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return 0;
  y = x->AuthzDecisionQuery;
  if (y)
    x->AuthzDecisionQuery = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_AuthzDecisionQuery) */

void zx_se_Body_PUSH_AuthzDecisionQuery(struct zx_se_Body_s* x, struct zx_sp_AuthzDecisionQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthzDecisionQuery->gg.g;
  x->AuthzDecisionQuery = z;
}

/* FUNC(zx_se_Body_REV_AuthzDecisionQuery) */

void zx_se_Body_REV_AuthzDecisionQuery(struct zx_se_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* nxt;
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return;
  y = x->AuthzDecisionQuery;
  if (!y) return;
  x->AuthzDecisionQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthzDecisionQuery->gg.g;
    x->AuthzDecisionQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_AuthzDecisionQuery) */

void zx_se_Body_PUT_AuthzDecisionQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x || !z) return;
  y = x->AuthzDecisionQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthzDecisionQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_AuthzDecisionQuery) */

void zx_se_Body_ADD_AuthzDecisionQuery(struct zx_se_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthzDecisionQuery->gg.g;
    x->AuthzDecisionQuery = z;
    return;
  case -1:
    y = x->AuthzDecisionQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionQuery; n > 1 && y; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_AuthzDecisionQuery) */

void zx_se_Body_DEL_AuthzDecisionQuery(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthzDecisionQuery = (struct zx_sp_AuthzDecisionQuery_s*)x->AuthzDecisionQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthzDecisionQuery_s*)x->AuthzDecisionQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_AssertionIDRequest) */

int zx_se_Body_NUM_AssertionIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequest; y; ++n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_AssertionIDRequest) */

struct zx_sp_AssertionIDRequest_s* zx_se_Body_GET_AssertionIDRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequest; n>=0 && y; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_AssertionIDRequest) */

struct zx_sp_AssertionIDRequest_s* zx_se_Body_POP_AssertionIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequest;
  if (y)
    x->AssertionIDRequest = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_AssertionIDRequest) */

void zx_se_Body_PUSH_AssertionIDRequest(struct zx_se_Body_s* x, struct zx_sp_AssertionIDRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequest->gg.g;
  x->AssertionIDRequest = z;
}

/* FUNC(zx_se_Body_REV_AssertionIDRequest) */

void zx_se_Body_REV_AssertionIDRequest(struct zx_se_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* nxt;
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return;
  y = x->AssertionIDRequest;
  if (!y) return;
  x->AssertionIDRequest = 0;
  while (y) {
    nxt = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequest->gg.g;
    x->AssertionIDRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_AssertionIDRequest) */

void zx_se_Body_PUT_AssertionIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_AssertionIDRequest) */

void zx_se_Body_ADD_AssertionIDRequest(struct zx_se_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionIDRequest->gg.g;
    x->AssertionIDRequest = z;
    return;
  case -1:
    y = x->AssertionIDRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequest; n > 1 && y; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_AssertionIDRequest) */

void zx_se_Body_DEL_AssertionIDRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequest = (struct zx_sp_AssertionIDRequest_s*)x->AssertionIDRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AssertionIDRequest_s*)x->AssertionIDRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_Response) */

int zx_se_Body_NUM_Response(struct zx_se_Body_s* x)
{
  struct zx_sp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_Response) */

struct zx_sp_Response_s* zx_se_Body_GET_Response(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_Response) */

struct zx_sp_Response_s* zx_se_Body_POP_Response(struct zx_se_Body_s* x)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_sp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_Response) */

void zx_se_Body_PUSH_Response(struct zx_se_Body_s* x, struct zx_sp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_se_Body_REV_Response) */

void zx_se_Body_REV_Response(struct zx_se_Body_s* x)
{
  struct zx_sp_Response_s* nxt;
  struct zx_sp_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_sp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_Response) */

void zx_se_Body_PUT_Response(struct zx_se_Body_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_Response) */

void zx_se_Body_ADD_Response(struct zx_se_Body_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_Response) */

void zx_se_Body_DEL_Response(struct zx_se_Body_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_sp_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_Request) */

int zx_se_Body_NUM_Request(struct zx_se_Body_s* x)
{
  struct zx_sp11_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Request; y; ++n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_Request) */

struct zx_sp11_Request_s* zx_se_Body_GET_Request(struct zx_se_Body_s* x, int n)
{
  struct zx_sp11_Request_s* y;
  if (!x) return 0;
  for (y = x->Request; n>=0 && y; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_Request) */

struct zx_sp11_Request_s* zx_se_Body_POP_Request(struct zx_se_Body_s* x)
{
  struct zx_sp11_Request_s* y;
  if (!x) return 0;
  y = x->Request;
  if (y)
    x->Request = (struct zx_sp11_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_Request) */

void zx_se_Body_PUSH_Request(struct zx_se_Body_s* x, struct zx_sp11_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Request->gg.g;
  x->Request = z;
}

/* FUNC(zx_se_Body_REV_Request) */

void zx_se_Body_REV_Request(struct zx_se_Body_s* x)
{
  struct zx_sp11_Request_s* nxt;
  struct zx_sp11_Request_s* y;
  if (!x) return;
  y = x->Request;
  if (!y) return;
  x->Request = 0;
  while (y) {
    nxt = (struct zx_sp11_Request_s*)y->gg.g.n;
    y->gg.g.n = &x->Request->gg.g;
    x->Request = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_Request) */

void zx_se_Body_PUT_Request(struct zx_se_Body_s* x, int n, struct zx_sp11_Request_s* z)
{
  struct zx_sp11_Request_s* y;
  if (!x || !z) return;
  y = x->Request;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Request = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_Request) */

void zx_se_Body_ADD_Request(struct zx_se_Body_s* x, int n, struct zx_sp11_Request_s* z)
{
  struct zx_sp11_Request_s* y;
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
    for (; y->gg.g.n; y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_Request) */

void zx_se_Body_DEL_Request(struct zx_se_Body_s* x, int n)
{
  struct zx_sp11_Request_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Request = (struct zx_sp11_Request_s*)x->Request->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_Request_s*)x->Request;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_sp11_Response) */

int zx_se_Body_NUM_sp11_Response(struct zx_se_Body_s* x)
{
  struct zx_sp11_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->sp11_Response; y; ++n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_sp11_Response) */

struct zx_sp11_Response_s* zx_se_Body_GET_sp11_Response(struct zx_se_Body_s* x, int n)
{
  struct zx_sp11_Response_s* y;
  if (!x) return 0;
  for (y = x->sp11_Response; n>=0 && y; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_sp11_Response) */

struct zx_sp11_Response_s* zx_se_Body_POP_sp11_Response(struct zx_se_Body_s* x)
{
  struct zx_sp11_Response_s* y;
  if (!x) return 0;
  y = x->sp11_Response;
  if (y)
    x->sp11_Response = (struct zx_sp11_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_sp11_Response) */

void zx_se_Body_PUSH_sp11_Response(struct zx_se_Body_s* x, struct zx_sp11_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->sp11_Response->gg.g;
  x->sp11_Response = z;
}

/* FUNC(zx_se_Body_REV_sp11_Response) */

void zx_se_Body_REV_sp11_Response(struct zx_se_Body_s* x)
{
  struct zx_sp11_Response_s* nxt;
  struct zx_sp11_Response_s* y;
  if (!x) return;
  y = x->sp11_Response;
  if (!y) return;
  x->sp11_Response = 0;
  while (y) {
    nxt = (struct zx_sp11_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->sp11_Response->gg.g;
    x->sp11_Response = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_sp11_Response) */

void zx_se_Body_PUT_sp11_Response(struct zx_se_Body_s* x, int n, struct zx_sp11_Response_s* z)
{
  struct zx_sp11_Response_s* y;
  if (!x || !z) return;
  y = x->sp11_Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->sp11_Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_sp11_Response) */

void zx_se_Body_ADD_sp11_Response(struct zx_se_Body_s* x, int n, struct zx_sp11_Response_s* z)
{
  struct zx_sp11_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->sp11_Response->gg.g;
    x->sp11_Response = z;
    return;
  case -1:
    y = x->sp11_Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sp11_Response; n > 1 && y; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_sp11_Response) */

void zx_se_Body_DEL_sp11_Response(struct zx_se_Body_s* x, int n)
{
  struct zx_sp11_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->sp11_Response = (struct zx_sp11_Response_s*)x->sp11_Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_Response_s*)x->sp11_Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sp11_Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_RegisterNameIdentifierRequest) */

int zx_se_Body_NUM_RegisterNameIdentifierRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierRequest; y; ++n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_RegisterNameIdentifierRequest) */

struct zx_ff12_RegisterNameIdentifierRequest_s* zx_se_Body_GET_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierRequest; n>=0 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_RegisterNameIdentifierRequest) */

struct zx_ff12_RegisterNameIdentifierRequest_s* zx_se_Body_POP_RegisterNameIdentifierRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierRequest;
  if (y)
    x->RegisterNameIdentifierRequest = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_RegisterNameIdentifierRequest) */

void zx_se_Body_PUSH_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
  x->RegisterNameIdentifierRequest = z;
}

/* FUNC(zx_se_Body_REV_RegisterNameIdentifierRequest) */

void zx_se_Body_REV_RegisterNameIdentifierRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* nxt;
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierRequest;
  if (!y) return;
  x->RegisterNameIdentifierRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
    x->RegisterNameIdentifierRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_RegisterNameIdentifierRequest) */

void zx_se_Body_PUT_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RegisterNameIdentifierRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_RegisterNameIdentifierRequest) */

void zx_se_Body_ADD_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
    x->RegisterNameIdentifierRequest = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierRequest; n > 1 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_RegisterNameIdentifierRequest) */

void zx_se_Body_DEL_RegisterNameIdentifierRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierRequest = (struct zx_ff12_RegisterNameIdentifierRequest_s*)x->RegisterNameIdentifierRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)x->RegisterNameIdentifierRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_RegisterNameIdentifierResponse) */

int zx_se_Body_NUM_RegisterNameIdentifierResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierResponse; y; ++n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_RegisterNameIdentifierResponse) */

struct zx_ff12_RegisterNameIdentifierResponse_s* zx_se_Body_GET_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierResponse; n>=0 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_RegisterNameIdentifierResponse) */

struct zx_ff12_RegisterNameIdentifierResponse_s* zx_se_Body_POP_RegisterNameIdentifierResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierResponse;
  if (y)
    x->RegisterNameIdentifierResponse = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_RegisterNameIdentifierResponse) */

void zx_se_Body_PUSH_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
  x->RegisterNameIdentifierResponse = z;
}

/* FUNC(zx_se_Body_REV_RegisterNameIdentifierResponse) */

void zx_se_Body_REV_RegisterNameIdentifierResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* nxt;
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierResponse;
  if (!y) return;
  x->RegisterNameIdentifierResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
    x->RegisterNameIdentifierResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_RegisterNameIdentifierResponse) */

void zx_se_Body_PUT_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RegisterNameIdentifierResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_RegisterNameIdentifierResponse) */

void zx_se_Body_ADD_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
    x->RegisterNameIdentifierResponse = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierResponse; n > 1 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_RegisterNameIdentifierResponse) */

void zx_se_Body_DEL_RegisterNameIdentifierResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierResponse = (struct zx_ff12_RegisterNameIdentifierResponse_s*)x->RegisterNameIdentifierResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)x->RegisterNameIdentifierResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_FederationTerminationNotification) */

int zx_se_Body_NUM_FederationTerminationNotification(struct zx_se_Body_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationNotification; y; ++n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_FederationTerminationNotification) */

struct zx_ff12_FederationTerminationNotification_s* zx_se_Body_GET_FederationTerminationNotification(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationNotification; n>=0 && y; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_FederationTerminationNotification) */

struct zx_ff12_FederationTerminationNotification_s* zx_se_Body_POP_FederationTerminationNotification(struct zx_se_Body_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return 0;
  y = x->FederationTerminationNotification;
  if (y)
    x->FederationTerminationNotification = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_FederationTerminationNotification) */

void zx_se_Body_PUSH_FederationTerminationNotification(struct zx_se_Body_s* x, struct zx_ff12_FederationTerminationNotification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FederationTerminationNotification->gg.g;
  x->FederationTerminationNotification = z;
}

/* FUNC(zx_se_Body_REV_FederationTerminationNotification) */

void zx_se_Body_REV_FederationTerminationNotification(struct zx_se_Body_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* nxt;
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return;
  y = x->FederationTerminationNotification;
  if (!y) return;
  x->FederationTerminationNotification = 0;
  while (y) {
    nxt = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n;
    y->gg.g.n = &x->FederationTerminationNotification->gg.g;
    x->FederationTerminationNotification = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_FederationTerminationNotification) */

void zx_se_Body_PUT_FederationTerminationNotification(struct zx_se_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationNotification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FederationTerminationNotification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_FederationTerminationNotification) */

void zx_se_Body_ADD_FederationTerminationNotification(struct zx_se_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->FederationTerminationNotification->gg.g;
    x->FederationTerminationNotification = z;
    return;
  case -1:
    y = x->FederationTerminationNotification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotification; n > 1 && y; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_FederationTerminationNotification) */

void zx_se_Body_DEL_FederationTerminationNotification(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationNotification = (struct zx_ff12_FederationTerminationNotification_s*)x->FederationTerminationNotification->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_FederationTerminationNotification_s*)x->FederationTerminationNotification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotification; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_ff12_LogoutRequest) */

int zx_se_Body_NUM_ff12_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_LogoutRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_LogoutRequest; y; ++n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ff12_LogoutRequest) */

struct zx_ff12_LogoutRequest_s* zx_se_Body_GET_ff12_LogoutRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return 0;
  for (y = x->ff12_LogoutRequest; n>=0 && y; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ff12_LogoutRequest) */

struct zx_ff12_LogoutRequest_s* zx_se_Body_POP_ff12_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return 0;
  y = x->ff12_LogoutRequest;
  if (y)
    x->ff12_LogoutRequest = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ff12_LogoutRequest) */

void zx_se_Body_PUSH_ff12_LogoutRequest(struct zx_se_Body_s* x, struct zx_ff12_LogoutRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_LogoutRequest->gg.g;
  x->ff12_LogoutRequest = z;
}

/* FUNC(zx_se_Body_REV_ff12_LogoutRequest) */

void zx_se_Body_REV_ff12_LogoutRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_LogoutRequest_s* nxt;
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return;
  y = x->ff12_LogoutRequest;
  if (!y) return;
  x->ff12_LogoutRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_LogoutRequest->gg.g;
    x->ff12_LogoutRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ff12_LogoutRequest) */

void zx_se_Body_PUT_ff12_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* z)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x || !z) return;
  y = x->ff12_LogoutRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_LogoutRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ff12_LogoutRequest) */

void zx_se_Body_ADD_ff12_LogoutRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* z)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_LogoutRequest->gg.g;
    x->ff12_LogoutRequest = z;
    return;
  case -1:
    y = x->ff12_LogoutRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutRequest; n > 1 && y; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ff12_LogoutRequest) */

void zx_se_Body_DEL_ff12_LogoutRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_LogoutRequest = (struct zx_ff12_LogoutRequest_s*)x->ff12_LogoutRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_LogoutRequest_s*)x->ff12_LogoutRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_ff12_LogoutResponse) */

int zx_se_Body_NUM_ff12_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_LogoutResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_LogoutResponse; y; ++n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_ff12_LogoutResponse) */

struct zx_ff12_LogoutResponse_s* zx_se_Body_GET_ff12_LogoutResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return 0;
  for (y = x->ff12_LogoutResponse; n>=0 && y; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_ff12_LogoutResponse) */

struct zx_ff12_LogoutResponse_s* zx_se_Body_POP_ff12_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return 0;
  y = x->ff12_LogoutResponse;
  if (y)
    x->ff12_LogoutResponse = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_ff12_LogoutResponse) */

void zx_se_Body_PUSH_ff12_LogoutResponse(struct zx_se_Body_s* x, struct zx_ff12_LogoutResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_LogoutResponse->gg.g;
  x->ff12_LogoutResponse = z;
}

/* FUNC(zx_se_Body_REV_ff12_LogoutResponse) */

void zx_se_Body_REV_ff12_LogoutResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_LogoutResponse_s* nxt;
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return;
  y = x->ff12_LogoutResponse;
  if (!y) return;
  x->ff12_LogoutResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_LogoutResponse->gg.g;
    x->ff12_LogoutResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_ff12_LogoutResponse) */

void zx_se_Body_PUT_ff12_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* z)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x || !z) return;
  y = x->ff12_LogoutResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_LogoutResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_ff12_LogoutResponse) */

void zx_se_Body_ADD_ff12_LogoutResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* z)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_LogoutResponse->gg.g;
    x->ff12_LogoutResponse = z;
    return;
  case -1:
    y = x->ff12_LogoutResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutResponse; n > 1 && y; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_ff12_LogoutResponse) */

void zx_se_Body_DEL_ff12_LogoutResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_LogoutResponse = (struct zx_ff12_LogoutResponse_s*)x->ff12_LogoutResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_LogoutResponse_s*)x->ff12_LogoutResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_NameIdentifierMappingRequest) */

int zx_se_Body_NUM_NameIdentifierMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingRequest; y; ++n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_NameIdentifierMappingRequest) */

struct zx_ff12_NameIdentifierMappingRequest_s* zx_se_Body_GET_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingRequest; n>=0 && y; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_NameIdentifierMappingRequest) */

struct zx_ff12_NameIdentifierMappingRequest_s* zx_se_Body_POP_NameIdentifierMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingRequest;
  if (y)
    x->NameIdentifierMappingRequest = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_NameIdentifierMappingRequest) */

void zx_se_Body_PUSH_NameIdentifierMappingRequest(struct zx_se_Body_s* x, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
  x->NameIdentifierMappingRequest = z;
}

/* FUNC(zx_se_Body_REV_NameIdentifierMappingRequest) */

void zx_se_Body_REV_NameIdentifierMappingRequest(struct zx_se_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* nxt;
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingRequest;
  if (!y) return;
  x->NameIdentifierMappingRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
    x->NameIdentifierMappingRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_NameIdentifierMappingRequest) */

void zx_se_Body_PUT_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIdentifierMappingRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_NameIdentifierMappingRequest) */

void zx_se_Body_ADD_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
    x->NameIdentifierMappingRequest = z;
    return;
  case -1:
    y = x->NameIdentifierMappingRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingRequest; n > 1 && y; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_NameIdentifierMappingRequest) */

void zx_se_Body_DEL_NameIdentifierMappingRequest(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingRequest = (struct zx_ff12_NameIdentifierMappingRequest_s*)x->NameIdentifierMappingRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_NameIdentifierMappingRequest_s*)x->NameIdentifierMappingRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_NameIdentifierMappingResponse) */

int zx_se_Body_NUM_NameIdentifierMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingResponse; y; ++n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_NameIdentifierMappingResponse) */

struct zx_ff12_NameIdentifierMappingResponse_s* zx_se_Body_GET_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingResponse; n>=0 && y; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_NameIdentifierMappingResponse) */

struct zx_ff12_NameIdentifierMappingResponse_s* zx_se_Body_POP_NameIdentifierMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingResponse;
  if (y)
    x->NameIdentifierMappingResponse = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_NameIdentifierMappingResponse) */

void zx_se_Body_PUSH_NameIdentifierMappingResponse(struct zx_se_Body_s* x, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
  x->NameIdentifierMappingResponse = z;
}

/* FUNC(zx_se_Body_REV_NameIdentifierMappingResponse) */

void zx_se_Body_REV_NameIdentifierMappingResponse(struct zx_se_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* nxt;
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingResponse;
  if (!y) return;
  x->NameIdentifierMappingResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
    x->NameIdentifierMappingResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_NameIdentifierMappingResponse) */

void zx_se_Body_PUT_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIdentifierMappingResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_NameIdentifierMappingResponse) */

void zx_se_Body_ADD_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
    x->NameIdentifierMappingResponse = z;
    return;
  case -1:
    y = x->NameIdentifierMappingResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingResponse; n > 1 && y; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_NameIdentifierMappingResponse) */

void zx_se_Body_DEL_NameIdentifierMappingResponse(struct zx_se_Body_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingResponse = (struct zx_ff12_NameIdentifierMappingResponse_s*)x->NameIdentifierMappingResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_NameIdentifierMappingResponse_s*)x->NameIdentifierMappingResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Body_NUM_Fault) */

int zx_se_Body_NUM_Fault(struct zx_se_Body_s* x)
{
  struct zx_se_Fault_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Fault; y; ++n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Body_GET_Fault) */

struct zx_se_Fault_s* zx_se_Body_GET_Fault(struct zx_se_Body_s* x, int n)
{
  struct zx_se_Fault_s* y;
  if (!x) return 0;
  for (y = x->Fault; n>=0 && y; --n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Body_POP_Fault) */

struct zx_se_Fault_s* zx_se_Body_POP_Fault(struct zx_se_Body_s* x)
{
  struct zx_se_Fault_s* y;
  if (!x) return 0;
  y = x->Fault;
  if (y)
    x->Fault = (struct zx_se_Fault_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Body_PUSH_Fault) */

void zx_se_Body_PUSH_Fault(struct zx_se_Body_s* x, struct zx_se_Fault_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Fault->gg.g;
  x->Fault = z;
}

/* FUNC(zx_se_Body_REV_Fault) */

void zx_se_Body_REV_Fault(struct zx_se_Body_s* x)
{
  struct zx_se_Fault_s* nxt;
  struct zx_se_Fault_s* y;
  if (!x) return;
  y = x->Fault;
  if (!y) return;
  x->Fault = 0;
  while (y) {
    nxt = (struct zx_se_Fault_s*)y->gg.g.n;
    y->gg.g.n = &x->Fault->gg.g;
    x->Fault = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Body_PUT_Fault) */

void zx_se_Body_PUT_Fault(struct zx_se_Body_s* x, int n, struct zx_se_Fault_s* z)
{
  struct zx_se_Fault_s* y;
  if (!x || !z) return;
  y = x->Fault;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Fault = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Body_ADD_Fault) */

void zx_se_Body_ADD_Fault(struct zx_se_Body_s* x, int n, struct zx_se_Fault_s* z)
{
  struct zx_se_Fault_s* y;
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
    for (; y->gg.g.n; y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y; --n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Body_DEL_Fault) */

void zx_se_Body_DEL_Fault(struct zx_se_Body_s* x, int n)
{
  struct zx_se_Fault_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Fault = (struct zx_se_Fault_s*)x->Fault->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_Fault_s*)x->Fault;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_se_Envelope_NUM_Header) */

int zx_se_Envelope_NUM_Header(struct zx_se_Envelope_s* x)
{
  struct zx_se_Header_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Header; y; ++n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Envelope_GET_Header) */

struct zx_se_Header_s* zx_se_Envelope_GET_Header(struct zx_se_Envelope_s* x, int n)
{
  struct zx_se_Header_s* y;
  if (!x) return 0;
  for (y = x->Header; n>=0 && y; --n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Envelope_POP_Header) */

struct zx_se_Header_s* zx_se_Envelope_POP_Header(struct zx_se_Envelope_s* x)
{
  struct zx_se_Header_s* y;
  if (!x) return 0;
  y = x->Header;
  if (y)
    x->Header = (struct zx_se_Header_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Envelope_PUSH_Header) */

void zx_se_Envelope_PUSH_Header(struct zx_se_Envelope_s* x, struct zx_se_Header_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Header->gg.g;
  x->Header = z;
}

/* FUNC(zx_se_Envelope_REV_Header) */

void zx_se_Envelope_REV_Header(struct zx_se_Envelope_s* x)
{
  struct zx_se_Header_s* nxt;
  struct zx_se_Header_s* y;
  if (!x) return;
  y = x->Header;
  if (!y) return;
  x->Header = 0;
  while (y) {
    nxt = (struct zx_se_Header_s*)y->gg.g.n;
    y->gg.g.n = &x->Header->gg.g;
    x->Header = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Envelope_PUT_Header) */

void zx_se_Envelope_PUT_Header(struct zx_se_Envelope_s* x, int n, struct zx_se_Header_s* z)
{
  struct zx_se_Header_s* y;
  if (!x || !z) return;
  y = x->Header;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Header = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Envelope_ADD_Header) */

void zx_se_Envelope_ADD_Header(struct zx_se_Envelope_s* x, int n, struct zx_se_Header_s* z)
{
  struct zx_se_Header_s* y;
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
    for (; y->gg.g.n; y = (struct zx_se_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y; --n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Envelope_DEL_Header) */

void zx_se_Envelope_DEL_Header(struct zx_se_Envelope_s* x, int n)
{
  struct zx_se_Header_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Header = (struct zx_se_Header_s*)x->Header->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_Header_s*)x->Header;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}



/* FUNC(zx_se_Envelope_NUM_Body) */

int zx_se_Envelope_NUM_Body(struct zx_se_Envelope_s* x)
{
  struct zx_se_Body_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Body; y; ++n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Envelope_GET_Body) */

struct zx_se_Body_s* zx_se_Envelope_GET_Body(struct zx_se_Envelope_s* x, int n)
{
  struct zx_se_Body_s* y;
  if (!x) return 0;
  for (y = x->Body; n>=0 && y; --n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Envelope_POP_Body) */

struct zx_se_Body_s* zx_se_Envelope_POP_Body(struct zx_se_Envelope_s* x)
{
  struct zx_se_Body_s* y;
  if (!x) return 0;
  y = x->Body;
  if (y)
    x->Body = (struct zx_se_Body_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Envelope_PUSH_Body) */

void zx_se_Envelope_PUSH_Body(struct zx_se_Envelope_s* x, struct zx_se_Body_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Body->gg.g;
  x->Body = z;
}

/* FUNC(zx_se_Envelope_REV_Body) */

void zx_se_Envelope_REV_Body(struct zx_se_Envelope_s* x)
{
  struct zx_se_Body_s* nxt;
  struct zx_se_Body_s* y;
  if (!x) return;
  y = x->Body;
  if (!y) return;
  x->Body = 0;
  while (y) {
    nxt = (struct zx_se_Body_s*)y->gg.g.n;
    y->gg.g.n = &x->Body->gg.g;
    x->Body = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Envelope_PUT_Body) */

void zx_se_Envelope_PUT_Body(struct zx_se_Envelope_s* x, int n, struct zx_se_Body_s* z)
{
  struct zx_se_Body_s* y;
  if (!x || !z) return;
  y = x->Body;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Body = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Envelope_ADD_Body) */

void zx_se_Envelope_ADD_Body(struct zx_se_Envelope_s* x, int n, struct zx_se_Body_s* z)
{
  struct zx_se_Body_s* y;
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
    for (; y->gg.g.n; y = (struct zx_se_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y; --n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Envelope_DEL_Body) */

void zx_se_Envelope_DEL_Body(struct zx_se_Envelope_s* x, int n)
{
  struct zx_se_Body_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Body = (struct zx_se_Body_s*)x->Body->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_Body_s*)x->Body;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y->gg.g.n; --n, y = (struct zx_se_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}








/* FUNC(zx_se_Fault_NUM_faultcode) */

int zx_se_Fault_NUM_faultcode(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultcode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_se_Fault_GET_faultcode) */

struct zx_elem_s* zx_se_Fault_GET_faultcode(struct zx_se_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultcode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_se_Fault_POP_faultcode) */

struct zx_elem_s* zx_se_Fault_POP_faultcode(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultcode;
  if (y)
    x->faultcode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_se_Fault_PUSH_faultcode) */

void zx_se_Fault_PUSH_faultcode(struct zx_se_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultcode->g;
  x->faultcode = z;
}

/* FUNC(zx_se_Fault_REV_faultcode) */

void zx_se_Fault_REV_faultcode(struct zx_se_Fault_s* x)
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

/* FUNC(zx_se_Fault_PUT_faultcode) */

void zx_se_Fault_PUT_faultcode(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_ADD_faultcode) */

void zx_se_Fault_ADD_faultcode(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_DEL_faultcode) */

void zx_se_Fault_DEL_faultcode(struct zx_se_Fault_s* x, int n)
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



/* FUNC(zx_se_Fault_NUM_faultstring) */

int zx_se_Fault_NUM_faultstring(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultstring; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_se_Fault_GET_faultstring) */

struct zx_elem_s* zx_se_Fault_GET_faultstring(struct zx_se_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultstring; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_se_Fault_POP_faultstring) */

struct zx_elem_s* zx_se_Fault_POP_faultstring(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultstring;
  if (y)
    x->faultstring = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_se_Fault_PUSH_faultstring) */

void zx_se_Fault_PUSH_faultstring(struct zx_se_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultstring->g;
  x->faultstring = z;
}

/* FUNC(zx_se_Fault_REV_faultstring) */

void zx_se_Fault_REV_faultstring(struct zx_se_Fault_s* x)
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

/* FUNC(zx_se_Fault_PUT_faultstring) */

void zx_se_Fault_PUT_faultstring(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_ADD_faultstring) */

void zx_se_Fault_ADD_faultstring(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_DEL_faultstring) */

void zx_se_Fault_DEL_faultstring(struct zx_se_Fault_s* x, int n)
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



/* FUNC(zx_se_Fault_NUM_faultactor) */

int zx_se_Fault_NUM_faultactor(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultactor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_se_Fault_GET_faultactor) */

struct zx_elem_s* zx_se_Fault_GET_faultactor(struct zx_se_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultactor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_se_Fault_POP_faultactor) */

struct zx_elem_s* zx_se_Fault_POP_faultactor(struct zx_se_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultactor;
  if (y)
    x->faultactor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_se_Fault_PUSH_faultactor) */

void zx_se_Fault_PUSH_faultactor(struct zx_se_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultactor->g;
  x->faultactor = z;
}

/* FUNC(zx_se_Fault_REV_faultactor) */

void zx_se_Fault_REV_faultactor(struct zx_se_Fault_s* x)
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

/* FUNC(zx_se_Fault_PUT_faultactor) */

void zx_se_Fault_PUT_faultactor(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_ADD_faultactor) */

void zx_se_Fault_ADD_faultactor(struct zx_se_Fault_s* x, int n, struct zx_elem_s* z)
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

/* FUNC(zx_se_Fault_DEL_faultactor) */

void zx_se_Fault_DEL_faultactor(struct zx_se_Fault_s* x, int n)
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



/* FUNC(zx_se_Fault_NUM_detail) */

int zx_se_Fault_NUM_detail(struct zx_se_Fault_s* x)
{
  struct zx_se_detail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->detail; y; ++n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_se_Fault_GET_detail) */

struct zx_se_detail_s* zx_se_Fault_GET_detail(struct zx_se_Fault_s* x, int n)
{
  struct zx_se_detail_s* y;
  if (!x) return 0;
  for (y = x->detail; n>=0 && y; --n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_se_Fault_POP_detail) */

struct zx_se_detail_s* zx_se_Fault_POP_detail(struct zx_se_Fault_s* x)
{
  struct zx_se_detail_s* y;
  if (!x) return 0;
  y = x->detail;
  if (y)
    x->detail = (struct zx_se_detail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_se_Fault_PUSH_detail) */

void zx_se_Fault_PUSH_detail(struct zx_se_Fault_s* x, struct zx_se_detail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->detail->gg.g;
  x->detail = z;
}

/* FUNC(zx_se_Fault_REV_detail) */

void zx_se_Fault_REV_detail(struct zx_se_Fault_s* x)
{
  struct zx_se_detail_s* nxt;
  struct zx_se_detail_s* y;
  if (!x) return;
  y = x->detail;
  if (!y) return;
  x->detail = 0;
  while (y) {
    nxt = (struct zx_se_detail_s*)y->gg.g.n;
    y->gg.g.n = &x->detail->gg.g;
    x->detail = y;
    y = nxt;
  }
}

/* FUNC(zx_se_Fault_PUT_detail) */

void zx_se_Fault_PUT_detail(struct zx_se_Fault_s* x, int n, struct zx_se_detail_s* z)
{
  struct zx_se_detail_s* y;
  if (!x || !z) return;
  y = x->detail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->detail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_se_Fault_ADD_detail) */

void zx_se_Fault_ADD_detail(struct zx_se_Fault_s* x, int n, struct zx_se_detail_s* z)
{
  struct zx_se_detail_s* y;
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
    for (; y->gg.g.n; y = (struct zx_se_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y; --n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_se_Fault_DEL_detail) */

void zx_se_Fault_DEL_detail(struct zx_se_Fault_s* x, int n)
{
  struct zx_se_detail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->detail = (struct zx_se_detail_s*)x->detail->gg.g.n;
    return;
  case -1:
    y = (struct zx_se_detail_s*)x->detail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_se_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y->gg.g.n; --n, y = (struct zx_se_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}
















/* EOF -- c/zx-se-getput.c */
