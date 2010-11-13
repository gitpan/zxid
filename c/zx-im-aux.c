/* c/zx-im-aux.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** aux-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: aux-templ.c,v 1.12 2008-10-04 23:42:14 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-im-data.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   im_IdentityMappingRequest
#define EL_STRUCT zx_im_IdentityMappingRequest_s
#define EL_NS     im
#define EL_TAG    IdentityMappingRequest

/* FUNC(zx_NEW_im_IdentityMappingRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_im_IdentityMappingRequest_s* zx_NEW_im_IdentityMappingRequest(struct zx_ctx* c, struct zx_elem_s* father)
{
  struct zx_im_IdentityMappingRequest_s* x = ZX_ZALLOC(c, struct zx_im_IdentityMappingRequest_s);
  x->gg.g.tok = zx_im_IdentityMappingRequest_ELEM;
  if (father) {
    x->gg.g.n = &father->kids->g;
    father->kids = &x->gg;
  }
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_im_IdentityMappingRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_im_IdentityMappingRequest(struct zx_ctx* c, struct zx_im_IdentityMappingRequest_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = &x->MappingInput->gg;
       se && se->g.tok == zx_im_MappingInput_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_im_MappingInput(c, (struct zx_im_MappingInput_s*)se);

}

/* FUNC(zx_DEEP_CLONE_im_IdentityMappingRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_im_IdentityMappingRequest_s* zx_DEEP_CLONE_im_IdentityMappingRequest(struct zx_ctx* c, struct zx_im_IdentityMappingRequest_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_im_IdentityMappingRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_im_IdentityMappingRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  for (enn = 0, e = &x->MappingInput->gg;
       e && e->g.tok == zx_im_MappingInput_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_im_MappingInput(c,(struct zx_im_MappingInput_s*)e,dup_strs);
  	  if (!enn)
  	      x->MappingInput = (struct zx_im_MappingInput_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_im_IdentityMappingRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_im_IdentityMappingRequest(struct zx_ctx* c, struct zx_im_IdentityMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->MappingInput->gg;
       e && e->g.tok == zx_im_MappingInput_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_im_MappingInput(c, (struct zx_im_MappingInput_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_im_IdentityMappingRequest) */

int zx_WALK_WO_im_IdentityMappingRequest(struct zx_ctx* c, struct zx_im_IdentityMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   im_IdentityMappingResponse
#define EL_STRUCT zx_im_IdentityMappingResponse_s
#define EL_NS     im
#define EL_TAG    IdentityMappingResponse

/* FUNC(zx_NEW_im_IdentityMappingResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_im_IdentityMappingResponse_s* zx_NEW_im_IdentityMappingResponse(struct zx_ctx* c, struct zx_elem_s* father)
{
  struct zx_im_IdentityMappingResponse_s* x = ZX_ZALLOC(c, struct zx_im_IdentityMappingResponse_s);
  x->gg.g.tok = zx_im_IdentityMappingResponse_ELEM;
  if (father) {
    x->gg.g.n = &father->kids->g;
    father->kids = &x->gg;
  }
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_im_IdentityMappingResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_im_IdentityMappingResponse(struct zx_ctx* c, struct zx_im_IdentityMappingResponse_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = &x->Status->gg;
       se && se->g.tok == zx_lu_Status_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_lu_Status(c, (struct zx_lu_Status_s*)se);
  for (se = &x->MappingOutput->gg;
       se && se->g.tok == zx_im_MappingOutput_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_im_MappingOutput(c, (struct zx_im_MappingOutput_s*)se);

}

/* FUNC(zx_DEEP_CLONE_im_IdentityMappingResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_im_IdentityMappingResponse_s* zx_DEEP_CLONE_im_IdentityMappingResponse(struct zx_ctx* c, struct zx_im_IdentityMappingResponse_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_im_IdentityMappingResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_im_IdentityMappingResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  for (enn = 0, e = &x->Status->gg;
       e && e->g.tok == zx_lu_Status_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_lu_Status(c,(struct zx_lu_Status_s*)e,dup_strs);
  	  if (!enn)
  	      x->Status = (struct zx_lu_Status_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->MappingOutput->gg;
       e && e->g.tok == zx_im_MappingOutput_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_im_MappingOutput(c,(struct zx_im_MappingOutput_s*)e,dup_strs);
  	  if (!enn)
  	      x->MappingOutput = (struct zx_im_MappingOutput_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_im_IdentityMappingResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_im_IdentityMappingResponse(struct zx_ctx* c, struct zx_im_IdentityMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->Status->gg;
       e && e->g.tok == zx_lu_Status_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_lu_Status(c, (struct zx_lu_Status_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->MappingOutput->gg;
       e && e->g.tok == zx_im_MappingOutput_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_im_MappingOutput(c, (struct zx_im_MappingOutput_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_im_IdentityMappingResponse) */

int zx_WALK_WO_im_IdentityMappingResponse(struct zx_ctx* c, struct zx_im_IdentityMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   im_MappingInput
#define EL_STRUCT zx_im_MappingInput_s
#define EL_NS     im
#define EL_TAG    MappingInput

/* FUNC(zx_NEW_im_MappingInput) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_im_MappingInput_s* zx_NEW_im_MappingInput(struct zx_ctx* c, struct zx_elem_s* father)
{
  struct zx_im_MappingInput_s* x = ZX_ZALLOC(c, struct zx_im_MappingInput_s);
  x->gg.g.tok = zx_im_MappingInput_ELEM;
  if (father) {
    x->gg.g.n = &father->kids->g;
    father->kids = &x->gg;
  }
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_im_MappingInput) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_im_MappingInput(struct zx_ctx* c, struct zx_im_MappingInput_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->reqID);

  for (se = &x->TokenPolicy->gg;
       se && se->g.tok == zx_sec_TokenPolicy_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sec_TokenPolicy(c, (struct zx_sec_TokenPolicy_s*)se);
  for (se = &x->Token->gg;
       se && se->g.tok == zx_sec_Token_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sec_Token(c, (struct zx_sec_Token_s*)se);

}

/* FUNC(zx_DEEP_CLONE_im_MappingInput) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_im_MappingInput_s* zx_DEEP_CLONE_im_MappingInput(struct zx_ctx* c, struct zx_im_MappingInput_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_im_MappingInput_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_im_MappingInput_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->reqID = zx_clone_attr(c, x->reqID);

  for (enn = 0, e = &x->TokenPolicy->gg;
       e && e->g.tok == zx_sec_TokenPolicy_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sec_TokenPolicy(c,(struct zx_sec_TokenPolicy_s*)e,dup_strs);
  	  if (!enn)
  	      x->TokenPolicy = (struct zx_sec_TokenPolicy_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->Token->gg;
       e && e->g.tok == zx_sec_Token_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sec_Token(c,(struct zx_sec_Token_s*)e,dup_strs);
  	  if (!enn)
  	      x->Token = (struct zx_sec_Token_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_im_MappingInput) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_im_MappingInput(struct zx_ctx* c, struct zx_im_MappingInput_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->TokenPolicy->gg;
       e && e->g.tok == zx_sec_TokenPolicy_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sec_TokenPolicy(c, (struct zx_sec_TokenPolicy_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->Token->gg;
       e && e->g.tok == zx_sec_Token_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sec_Token(c, (struct zx_sec_Token_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_im_MappingInput) */

int zx_WALK_WO_im_MappingInput(struct zx_ctx* c, struct zx_im_MappingInput_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   im_MappingOutput
#define EL_STRUCT zx_im_MappingOutput_s
#define EL_NS     im
#define EL_TAG    MappingOutput

/* FUNC(zx_NEW_im_MappingOutput) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_im_MappingOutput_s* zx_NEW_im_MappingOutput(struct zx_ctx* c, struct zx_elem_s* father)
{
  struct zx_im_MappingOutput_s* x = ZX_ZALLOC(c, struct zx_im_MappingOutput_s);
  x->gg.g.tok = zx_im_MappingOutput_ELEM;
  if (father) {
    x->gg.g.n = &father->kids->g;
    father->kids = &x->gg;
  }
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_im_MappingOutput) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_im_MappingOutput(struct zx_ctx* c, struct zx_im_MappingOutput_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->reqRef);

  for (se = &x->Token->gg;
       se && se->g.tok == zx_sec_Token_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sec_Token(c, (struct zx_sec_Token_s*)se);

}

/* FUNC(zx_DEEP_CLONE_im_MappingOutput) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_im_MappingOutput_s* zx_DEEP_CLONE_im_MappingOutput(struct zx_ctx* c, struct zx_im_MappingOutput_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_im_MappingOutput_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_im_MappingOutput_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->reqRef = zx_clone_attr(c, x->reqRef);

  for (enn = 0, e = &x->Token->gg;
       e && e->g.tok == zx_sec_Token_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sec_Token(c,(struct zx_sec_Token_s*)e,dup_strs);
  	  if (!enn)
  	      x->Token = (struct zx_sec_Token_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_im_MappingOutput) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_im_MappingOutput(struct zx_ctx* c, struct zx_im_MappingOutput_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->Token->gg;
       e && e->g.tok == zx_sec_Token_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sec_Token(c, (struct zx_sec_Token_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_im_MappingOutput) */

int zx_WALK_WO_im_MappingOutput(struct zx_ctx* c, struct zx_im_MappingOutput_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-im-aux.c */
