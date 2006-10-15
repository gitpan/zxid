/* c/zx-dise-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** aux-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** Id: aux-templ.c,v 1.8 2006/08/28 05:23:23 sampo Exp $
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
#include "c/zx-dise-data.h"



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

#define EL_NAME   dise_Body
#define EL_STRUCT zx_dise_Body_s
#define EL_NS     dise
#define EL_TAG    Body

/* FUNC(zx_DUP_STRS_dise_Body) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zx_di_SvcMDAssociationAdd_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDAssociationAdd(c, e);
  }
  {
      struct zx_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zx_di_SvcMDAssociationAddResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDAssociationAddResponse(c, e);
  }
  {
      struct zx_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zx_di_SvcMDAssociationDelete_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDAssociationDelete(c, e);
  }
  {
      struct zx_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zx_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDAssociationDeleteResponse(c, e);
  }
  {
      struct zx_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zx_di_SvcMDAssociationQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDAssociationQuery(c, e);
  }
  {
      struct zx_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zx_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDAssociationQueryResponse(c, e);
  }
  {
      struct zx_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zx_di_SvcMDRegister_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDRegister(c, e);
  }
  {
      struct zx_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zx_di_SvcMDRegisterResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDRegisterResponse(c, e);
  }
  {
      struct zx_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zx_di_SvcMDDelete_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDDelete(c, e);
  }
  {
      struct zx_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zx_di_SvcMDDeleteResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDDeleteResponse(c, e);
  }
  {
      struct zx_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zx_di_SvcMDQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDQuery(c, e);
  }
  {
      struct zx_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zx_di_SvcMDQueryResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDQueryResponse(c, e);
  }
  {
      struct zx_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zx_di_SvcMDReplace_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDReplace(c, e);
  }
  {
      struct zx_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zx_di_SvcMDReplaceResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di_SvcMDReplaceResponse(c, e);
  }
  {
      struct zx_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_dise_Fault_s*)e->gg.g.n)
	  zx_DUP_STRS_dise_Fault(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_dise_Body) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_dise_Body_s* zx_DEEP_CLONE_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, int dup_strs)
{
  x = (struct zx_dise_Body_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_dise_Body_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_SvcMDAssociationAdd_s* e;
      struct zx_di_SvcMDAssociationAdd_s* en;
      struct zx_di_SvcMDAssociationAdd_s* enn;
      for (enn = 0, e = x->SvcMDAssociationAdd; e; e = (struct zx_di_SvcMDAssociationAdd_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDAssociationAdd(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationAdd = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDAssociationAddResponse_s* e;
      struct zx_di_SvcMDAssociationAddResponse_s* en;
      struct zx_di_SvcMDAssociationAddResponse_s* enn;
      for (enn = 0, e = x->SvcMDAssociationAddResponse; e; e = (struct zx_di_SvcMDAssociationAddResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDAssociationAddResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationAddResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDAssociationDelete_s* e;
      struct zx_di_SvcMDAssociationDelete_s* en;
      struct zx_di_SvcMDAssociationDelete_s* enn;
      for (enn = 0, e = x->SvcMDAssociationDelete; e; e = (struct zx_di_SvcMDAssociationDelete_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDAssociationDelete(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationDelete = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDAssociationDeleteResponse_s* e;
      struct zx_di_SvcMDAssociationDeleteResponse_s* en;
      struct zx_di_SvcMDAssociationDeleteResponse_s* enn;
      for (enn = 0, e = x->SvcMDAssociationDeleteResponse; e; e = (struct zx_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDAssociationDeleteResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationDeleteResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDAssociationQuery_s* e;
      struct zx_di_SvcMDAssociationQuery_s* en;
      struct zx_di_SvcMDAssociationQuery_s* enn;
      for (enn = 0, e = x->SvcMDAssociationQuery; e; e = (struct zx_di_SvcMDAssociationQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDAssociationQuery(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDAssociationQueryResponse_s* e;
      struct zx_di_SvcMDAssociationQueryResponse_s* en;
      struct zx_di_SvcMDAssociationQueryResponse_s* enn;
      for (enn = 0, e = x->SvcMDAssociationQueryResponse; e; e = (struct zx_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDAssociationQueryResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationQueryResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDRegister_s* e;
      struct zx_di_SvcMDRegister_s* en;
      struct zx_di_SvcMDRegister_s* enn;
      for (enn = 0, e = x->SvcMDRegister; e; e = (struct zx_di_SvcMDRegister_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDRegister(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDRegister = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDRegisterResponse_s* e;
      struct zx_di_SvcMDRegisterResponse_s* en;
      struct zx_di_SvcMDRegisterResponse_s* enn;
      for (enn = 0, e = x->SvcMDRegisterResponse; e; e = (struct zx_di_SvcMDRegisterResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDRegisterResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDRegisterResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDDelete_s* e;
      struct zx_di_SvcMDDelete_s* en;
      struct zx_di_SvcMDDelete_s* enn;
      for (enn = 0, e = x->SvcMDDelete; e; e = (struct zx_di_SvcMDDelete_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDDelete(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDDelete = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDDeleteResponse_s* e;
      struct zx_di_SvcMDDeleteResponse_s* en;
      struct zx_di_SvcMDDeleteResponse_s* enn;
      for (enn = 0, e = x->SvcMDDeleteResponse; e; e = (struct zx_di_SvcMDDeleteResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDDeleteResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDDeleteResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDQuery_s* e;
      struct zx_di_SvcMDQuery_s* en;
      struct zx_di_SvcMDQuery_s* enn;
      for (enn = 0, e = x->SvcMDQuery; e; e = (struct zx_di_SvcMDQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDQuery(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDQueryResponse_s* e;
      struct zx_di_SvcMDQueryResponse_s* en;
      struct zx_di_SvcMDQueryResponse_s* enn;
      for (enn = 0, e = x->SvcMDQueryResponse; e; e = (struct zx_di_SvcMDQueryResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDQueryResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDQueryResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDReplace_s* e;
      struct zx_di_SvcMDReplace_s* en;
      struct zx_di_SvcMDReplace_s* enn;
      for (enn = 0, e = x->SvcMDReplace; e; e = (struct zx_di_SvcMDReplace_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDReplace(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDReplace = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_SvcMDReplaceResponse_s* e;
      struct zx_di_SvcMDReplaceResponse_s* en;
      struct zx_di_SvcMDReplaceResponse_s* enn;
      for (enn = 0, e = x->SvcMDReplaceResponse; e; e = (struct zx_di_SvcMDReplaceResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_SvcMDReplaceResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDReplaceResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_dise_Fault_s* e;
      struct zx_dise_Fault_s* en;
      struct zx_dise_Fault_s* enn;
      for (enn = 0, e = x->Fault; e; e = (struct zx_dise_Fault_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_dise_Fault(c, e, dup_strs);
	  if (!enn)
	      x->Fault = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_dise_Body) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_SvcMDAssociationAdd_s* e;
      struct zx_di_SvcMDAssociationAdd_s* en;
      for (e = x->SvcMDAssociationAdd; e; e = en) {
	  en = (struct zx_di_SvcMDAssociationAdd_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDAssociationAdd(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDAssociationAddResponse_s* e;
      struct zx_di_SvcMDAssociationAddResponse_s* en;
      for (e = x->SvcMDAssociationAddResponse; e; e = en) {
	  en = (struct zx_di_SvcMDAssociationAddResponse_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDAssociationAddResponse(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDAssociationDelete_s* e;
      struct zx_di_SvcMDAssociationDelete_s* en;
      for (e = x->SvcMDAssociationDelete; e; e = en) {
	  en = (struct zx_di_SvcMDAssociationDelete_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDAssociationDelete(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDAssociationDeleteResponse_s* e;
      struct zx_di_SvcMDAssociationDeleteResponse_s* en;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = en) {
	  en = (struct zx_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDAssociationDeleteResponse(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDAssociationQuery_s* e;
      struct zx_di_SvcMDAssociationQuery_s* en;
      for (e = x->SvcMDAssociationQuery; e; e = en) {
	  en = (struct zx_di_SvcMDAssociationQuery_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDAssociationQuery(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDAssociationQueryResponse_s* e;
      struct zx_di_SvcMDAssociationQueryResponse_s* en;
      for (e = x->SvcMDAssociationQueryResponse; e; e = en) {
	  en = (struct zx_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDAssociationQueryResponse(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDRegister_s* e;
      struct zx_di_SvcMDRegister_s* en;
      for (e = x->SvcMDRegister; e; e = en) {
	  en = (struct zx_di_SvcMDRegister_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDRegister(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDRegisterResponse_s* e;
      struct zx_di_SvcMDRegisterResponse_s* en;
      for (e = x->SvcMDRegisterResponse; e; e = en) {
	  en = (struct zx_di_SvcMDRegisterResponse_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDRegisterResponse(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDDelete_s* e;
      struct zx_di_SvcMDDelete_s* en;
      for (e = x->SvcMDDelete; e; e = en) {
	  en = (struct zx_di_SvcMDDelete_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDDelete(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDDeleteResponse_s* e;
      struct zx_di_SvcMDDeleteResponse_s* en;
      for (e = x->SvcMDDeleteResponse; e; e = en) {
	  en = (struct zx_di_SvcMDDeleteResponse_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDDeleteResponse(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDQuery_s* e;
      struct zx_di_SvcMDQuery_s* en;
      for (e = x->SvcMDQuery; e; e = en) {
	  en = (struct zx_di_SvcMDQuery_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDQuery(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDQueryResponse_s* e;
      struct zx_di_SvcMDQueryResponse_s* en;
      for (e = x->SvcMDQueryResponse; e; e = en) {
	  en = (struct zx_di_SvcMDQueryResponse_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDQueryResponse(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDReplace_s* e;
      struct zx_di_SvcMDReplace_s* en;
      for (e = x->SvcMDReplace; e; e = en) {
	  en = (struct zx_di_SvcMDReplace_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDReplace(c, e, free_strs);
      }
  }
  {
      struct zx_di_SvcMDReplaceResponse_s* e;
      struct zx_di_SvcMDReplaceResponse_s* en;
      for (e = x->SvcMDReplaceResponse; e; e = en) {
	  en = (struct zx_di_SvcMDReplaceResponse_s*)e->gg.g.n;
	  zx_FREE_di_SvcMDReplaceResponse(c, e, free_strs);
      }
  }
  {
      struct zx_dise_Fault_s* e;
      struct zx_dise_Fault_s* en;
      for (e = x->Fault; e; e = en) {
	  en = (struct zx_dise_Fault_s*)e->gg.g.n;
	  zx_FREE_dise_Fault(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_dise_Body) */

/* Trivial allocator/constructor for the datatype. */

struct zx_dise_Body_s* zx_NEW_dise_Body(struct zx_ctx* c)
{
  struct zx_dise_Body_s* x = ZX_ZALLOC(c, struct zx_dise_Body_s);
  x->gg.g.tok = zx_dise_Body_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_dise_Body) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zx_di_SvcMDAssociationAdd_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDAssociationAdd(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zx_di_SvcMDAssociationAddResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDAssociationAddResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zx_di_SvcMDAssociationDelete_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDAssociationDelete(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zx_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDAssociationDeleteResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zx_di_SvcMDAssociationQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDAssociationQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zx_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDAssociationQueryResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zx_di_SvcMDRegister_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDRegister(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zx_di_SvcMDRegisterResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDRegisterResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zx_di_SvcMDDelete_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDDelete(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zx_di_SvcMDDeleteResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDDeleteResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zx_di_SvcMDQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zx_di_SvcMDQueryResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDQueryResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zx_di_SvcMDReplace_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDReplace(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zx_di_SvcMDReplaceResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_SvcMDReplaceResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_dise_Fault_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_dise_Fault(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_dise_Body) */

int zx_WALK_WO_dise_Body(struct zx_ctx* c, struct zx_dise_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




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

#define EL_NAME   dise_Envelope
#define EL_STRUCT zx_dise_Envelope_s
#define EL_NS     dise
#define EL_TAG    Envelope

/* FUNC(zx_DUP_STRS_dise_Envelope) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zx_dise_Header_s*)e->gg.g.n)
	  zx_DUP_STRS_dise_Header(c, e);
  }
  {
      struct zx_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zx_dise_Body_s*)e->gg.g.n)
	  zx_DUP_STRS_dise_Body(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_dise_Envelope) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_dise_Envelope_s* zx_DEEP_CLONE_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, int dup_strs)
{
  x = (struct zx_dise_Envelope_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_dise_Envelope_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_dise_Header_s* e;
      struct zx_dise_Header_s* en;
      struct zx_dise_Header_s* enn;
      for (enn = 0, e = x->Header; e; e = (struct zx_dise_Header_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_dise_Header(c, e, dup_strs);
	  if (!enn)
	      x->Header = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_dise_Body_s* e;
      struct zx_dise_Body_s* en;
      struct zx_dise_Body_s* enn;
      for (enn = 0, e = x->Body; e; e = (struct zx_dise_Body_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_dise_Body(c, e, dup_strs);
	  if (!enn)
	      x->Body = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_dise_Envelope) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_dise_Header_s* e;
      struct zx_dise_Header_s* en;
      for (e = x->Header; e; e = en) {
	  en = (struct zx_dise_Header_s*)e->gg.g.n;
	  zx_FREE_dise_Header(c, e, free_strs);
      }
  }
  {
      struct zx_dise_Body_s* e;
      struct zx_dise_Body_s* en;
      for (e = x->Body; e; e = en) {
	  en = (struct zx_dise_Body_s*)e->gg.g.n;
	  zx_FREE_dise_Body(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_dise_Envelope) */

/* Trivial allocator/constructor for the datatype. */

struct zx_dise_Envelope_s* zx_NEW_dise_Envelope(struct zx_ctx* c)
{
  struct zx_dise_Envelope_s* x = ZX_ZALLOC(c, struct zx_dise_Envelope_s);
  x->gg.g.tok = zx_dise_Envelope_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_dise_Envelope) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zx_dise_Header_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_dise_Header(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zx_dise_Body_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_dise_Body(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_dise_Envelope) */

int zx_WALK_WO_dise_Envelope(struct zx_ctx* c, struct zx_dise_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




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

#define EL_NAME   dise_Fault
#define EL_STRUCT zx_dise_Fault_s
#define EL_NS     dise
#define EL_TAG    Fault

/* FUNC(zx_DUP_STRS_dise_Fault) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->faultcode);
  zx_dup_strs_simple_elems(c, x->faultstring);
  zx_dup_strs_simple_elems(c, x->faultactor);
  {
      struct zx_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zx_dise_detail_s*)e->gg.g.n)
	  zx_DUP_STRS_dise_detail(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_dise_Fault) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_dise_Fault_s* zx_DEEP_CLONE_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, int dup_strs)
{
  x = (struct zx_dise_Fault_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_dise_Fault_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->faultcode = zx_deep_clone_simple_elems(c,x->faultcode, dup_strs);
  x->faultstring = zx_deep_clone_simple_elems(c,x->faultstring, dup_strs);
  x->faultactor = zx_deep_clone_simple_elems(c,x->faultactor, dup_strs);
  {
      struct zx_dise_detail_s* e;
      struct zx_dise_detail_s* en;
      struct zx_dise_detail_s* enn;
      for (enn = 0, e = x->detail; e; e = (struct zx_dise_detail_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_dise_detail(c, e, dup_strs);
	  if (!enn)
	      x->detail = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_dise_Fault) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->faultcode, free_strs);
  zx_free_simple_elems(c, x->faultstring, free_strs);
  zx_free_simple_elems(c, x->faultactor, free_strs);
  {
      struct zx_dise_detail_s* e;
      struct zx_dise_detail_s* en;
      for (e = x->detail; e; e = en) {
	  en = (struct zx_dise_detail_s*)e->gg.g.n;
	  zx_FREE_dise_detail(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_dise_Fault) */

/* Trivial allocator/constructor for the datatype. */

struct zx_dise_Fault_s* zx_NEW_dise_Fault(struct zx_ctx* c)
{
  struct zx_dise_Fault_s* x = ZX_ZALLOC(c, struct zx_dise_Fault_s);
  x->gg.g.tok = zx_dise_Fault_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_dise_Fault) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->faultcode, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->faultstring, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->faultactor, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zx_dise_detail_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_dise_detail(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_dise_Fault) */

int zx_WALK_WO_dise_Fault(struct zx_ctx* c, struct zx_dise_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




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

#define EL_NAME   dise_Header
#define EL_STRUCT zx_dise_Header_s
#define EL_NS     dise
#define EL_TAG    Header

/* FUNC(zx_DUP_STRS_dise_Header) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zx_a_MessageID_s*)e->gg.g.n)
	  zx_DUP_STRS_a_MessageID(c, e);
  }
  {
      struct zx_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zx_a_RelatesTo_s*)e->gg.g.n)
	  zx_DUP_STRS_a_RelatesTo(c, e);
  }
  {
      struct zx_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zx_a_ReplyTo_s*)e->gg.g.n)
	  zx_DUP_STRS_a_ReplyTo(c, e);
  }
  {
      struct zx_a_From_s* e;
      for (e = x->From; e; e = (struct zx_a_From_s*)e->gg.g.n)
	  zx_DUP_STRS_a_From(c, e);
  }
  {
      struct zx_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zx_a_FaultTo_s*)e->gg.g.n)
	  zx_DUP_STRS_a_FaultTo(c, e);
  }
  {
      struct zx_a_To_s* e;
      for (e = x->To; e; e = (struct zx_a_To_s*)e->gg.g.n)
	  zx_DUP_STRS_a_To(c, e);
  }
  {
      struct zx_a_Action_s* e;
      for (e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n)
	  zx_DUP_STRS_a_Action(c, e);
  }
  {
      struct zx_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n)
	  zx_DUP_STRS_sbf_Framework(c, e);
  }
  {
      struct zx_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zx_b_Framework_s*)e->gg.g.n)
	  zx_DUP_STRS_b_Framework(c, e);
  }
  {
      struct zx_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zx_b_Sender_s*)e->gg.g.n)
	  zx_DUP_STRS_b_Sender(c, e);
  }
  {
      struct zx_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zx_b_CredentialsContext_s*)e->gg.g.n)
	  zx_DUP_STRS_b_CredentialsContext(c, e);
  }
  {
      struct zx_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zx_b_EndpointUpdate_s*)e->gg.g.n)
	  zx_DUP_STRS_b_EndpointUpdate(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Timeout);
  {
      struct zx_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zx_b_ProcessingContext_s*)e->gg.g.n)
	  zx_DUP_STRS_b_ProcessingContext(c, e);
  }
  {
      struct zx_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zx_b_ApplicationEPR_s*)e->gg.g.n)
	  zx_DUP_STRS_b_ApplicationEPR(c, e);
  }
  {
      struct zx_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zx_b_RedirectRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_b_RedirectRequest(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_dise_Header) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_dise_Header_s* zx_DEEP_CLONE_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, int dup_strs)
{
  x = (struct zx_dise_Header_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_dise_Header_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_a_MessageID_s* e;
      struct zx_a_MessageID_s* en;
      struct zx_a_MessageID_s* enn;
      for (enn = 0, e = x->MessageID; e; e = (struct zx_a_MessageID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_MessageID(c, e, dup_strs);
	  if (!enn)
	      x->MessageID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_a_RelatesTo_s* e;
      struct zx_a_RelatesTo_s* en;
      struct zx_a_RelatesTo_s* enn;
      for (enn = 0, e = x->RelatesTo; e; e = (struct zx_a_RelatesTo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_RelatesTo(c, e, dup_strs);
	  if (!enn)
	      x->RelatesTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_a_ReplyTo_s* e;
      struct zx_a_ReplyTo_s* en;
      struct zx_a_ReplyTo_s* enn;
      for (enn = 0, e = x->ReplyTo; e; e = (struct zx_a_ReplyTo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_ReplyTo(c, e, dup_strs);
	  if (!enn)
	      x->ReplyTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_a_From_s* e;
      struct zx_a_From_s* en;
      struct zx_a_From_s* enn;
      for (enn = 0, e = x->From; e; e = (struct zx_a_From_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_From(c, e, dup_strs);
	  if (!enn)
	      x->From = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_a_FaultTo_s* e;
      struct zx_a_FaultTo_s* en;
      struct zx_a_FaultTo_s* enn;
      for (enn = 0, e = x->FaultTo; e; e = (struct zx_a_FaultTo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_FaultTo(c, e, dup_strs);
	  if (!enn)
	      x->FaultTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_a_To_s* e;
      struct zx_a_To_s* en;
      struct zx_a_To_s* enn;
      for (enn = 0, e = x->To; e; e = (struct zx_a_To_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_To(c, e, dup_strs);
	  if (!enn)
	      x->To = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_a_Action_s* e;
      struct zx_a_Action_s* en;
      struct zx_a_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_a_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sbf_Framework_s* e;
      struct zx_sbf_Framework_s* en;
      struct zx_sbf_Framework_s* enn;
      for (enn = 0, e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sbf_Framework(c, e, dup_strs);
	  if (!enn)
	      x->Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b_Framework_s* e;
      struct zx_b_Framework_s* en;
      struct zx_b_Framework_s* enn;
      for (enn = 0, e = x->b_Framework; e; e = (struct zx_b_Framework_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_Framework(c, e, dup_strs);
	  if (!enn)
	      x->b_Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b_Sender_s* e;
      struct zx_b_Sender_s* en;
      struct zx_b_Sender_s* enn;
      for (enn = 0, e = x->Sender; e; e = (struct zx_b_Sender_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_Sender(c, e, dup_strs);
	  if (!enn)
	      x->Sender = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b_CredentialsContext_s* e;
      struct zx_b_CredentialsContext_s* en;
      struct zx_b_CredentialsContext_s* enn;
      for (enn = 0, e = x->CredentialsContext; e; e = (struct zx_b_CredentialsContext_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_CredentialsContext(c, e, dup_strs);
	  if (!enn)
	      x->CredentialsContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b_EndpointUpdate_s* e;
      struct zx_b_EndpointUpdate_s* en;
      struct zx_b_EndpointUpdate_s* enn;
      for (enn = 0, e = x->EndpointUpdate; e; e = (struct zx_b_EndpointUpdate_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_EndpointUpdate(c, e, dup_strs);
	  if (!enn)
	      x->EndpointUpdate = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Timeout = zx_deep_clone_simple_elems(c,x->Timeout, dup_strs);
  {
      struct zx_b_ProcessingContext_s* e;
      struct zx_b_ProcessingContext_s* en;
      struct zx_b_ProcessingContext_s* enn;
      for (enn = 0, e = x->ProcessingContext; e; e = (struct zx_b_ProcessingContext_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_ProcessingContext(c, e, dup_strs);
	  if (!enn)
	      x->ProcessingContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b_ApplicationEPR_s* e;
      struct zx_b_ApplicationEPR_s* en;
      struct zx_b_ApplicationEPR_s* enn;
      for (enn = 0, e = x->ApplicationEPR; e; e = (struct zx_b_ApplicationEPR_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_ApplicationEPR(c, e, dup_strs);
	  if (!enn)
	      x->ApplicationEPR = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b_RedirectRequest_s* e;
      struct zx_b_RedirectRequest_s* en;
      struct zx_b_RedirectRequest_s* enn;
      for (enn = 0, e = x->RedirectRequest; e; e = (struct zx_b_RedirectRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_RedirectRequest(c, e, dup_strs);
	  if (!enn)
	      x->RedirectRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_dise_Header) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_a_MessageID_s* e;
      struct zx_a_MessageID_s* en;
      for (e = x->MessageID; e; e = en) {
	  en = (struct zx_a_MessageID_s*)e->gg.g.n;
	  zx_FREE_a_MessageID(c, e, free_strs);
      }
  }
  {
      struct zx_a_RelatesTo_s* e;
      struct zx_a_RelatesTo_s* en;
      for (e = x->RelatesTo; e; e = en) {
	  en = (struct zx_a_RelatesTo_s*)e->gg.g.n;
	  zx_FREE_a_RelatesTo(c, e, free_strs);
      }
  }
  {
      struct zx_a_ReplyTo_s* e;
      struct zx_a_ReplyTo_s* en;
      for (e = x->ReplyTo; e; e = en) {
	  en = (struct zx_a_ReplyTo_s*)e->gg.g.n;
	  zx_FREE_a_ReplyTo(c, e, free_strs);
      }
  }
  {
      struct zx_a_From_s* e;
      struct zx_a_From_s* en;
      for (e = x->From; e; e = en) {
	  en = (struct zx_a_From_s*)e->gg.g.n;
	  zx_FREE_a_From(c, e, free_strs);
      }
  }
  {
      struct zx_a_FaultTo_s* e;
      struct zx_a_FaultTo_s* en;
      for (e = x->FaultTo; e; e = en) {
	  en = (struct zx_a_FaultTo_s*)e->gg.g.n;
	  zx_FREE_a_FaultTo(c, e, free_strs);
      }
  }
  {
      struct zx_a_To_s* e;
      struct zx_a_To_s* en;
      for (e = x->To; e; e = en) {
	  en = (struct zx_a_To_s*)e->gg.g.n;
	  zx_FREE_a_To(c, e, free_strs);
      }
  }
  {
      struct zx_a_Action_s* e;
      struct zx_a_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zx_a_Action_s*)e->gg.g.n;
	  zx_FREE_a_Action(c, e, free_strs);
      }
  }
  {
      struct zx_sbf_Framework_s* e;
      struct zx_sbf_Framework_s* en;
      for (e = x->Framework; e; e = en) {
	  en = (struct zx_sbf_Framework_s*)e->gg.g.n;
	  zx_FREE_sbf_Framework(c, e, free_strs);
      }
  }
  {
      struct zx_b_Framework_s* e;
      struct zx_b_Framework_s* en;
      for (e = x->b_Framework; e; e = en) {
	  en = (struct zx_b_Framework_s*)e->gg.g.n;
	  zx_FREE_b_Framework(c, e, free_strs);
      }
  }
  {
      struct zx_b_Sender_s* e;
      struct zx_b_Sender_s* en;
      for (e = x->Sender; e; e = en) {
	  en = (struct zx_b_Sender_s*)e->gg.g.n;
	  zx_FREE_b_Sender(c, e, free_strs);
      }
  }
  {
      struct zx_b_CredentialsContext_s* e;
      struct zx_b_CredentialsContext_s* en;
      for (e = x->CredentialsContext; e; e = en) {
	  en = (struct zx_b_CredentialsContext_s*)e->gg.g.n;
	  zx_FREE_b_CredentialsContext(c, e, free_strs);
      }
  }
  {
      struct zx_b_EndpointUpdate_s* e;
      struct zx_b_EndpointUpdate_s* en;
      for (e = x->EndpointUpdate; e; e = en) {
	  en = (struct zx_b_EndpointUpdate_s*)e->gg.g.n;
	  zx_FREE_b_EndpointUpdate(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Timeout, free_strs);
  {
      struct zx_b_ProcessingContext_s* e;
      struct zx_b_ProcessingContext_s* en;
      for (e = x->ProcessingContext; e; e = en) {
	  en = (struct zx_b_ProcessingContext_s*)e->gg.g.n;
	  zx_FREE_b_ProcessingContext(c, e, free_strs);
      }
  }
  {
      struct zx_b_ApplicationEPR_s* e;
      struct zx_b_ApplicationEPR_s* en;
      for (e = x->ApplicationEPR; e; e = en) {
	  en = (struct zx_b_ApplicationEPR_s*)e->gg.g.n;
	  zx_FREE_b_ApplicationEPR(c, e, free_strs);
      }
  }
  {
      struct zx_b_RedirectRequest_s* e;
      struct zx_b_RedirectRequest_s* en;
      for (e = x->RedirectRequest; e; e = en) {
	  en = (struct zx_b_RedirectRequest_s*)e->gg.g.n;
	  zx_FREE_b_RedirectRequest(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_dise_Header) */

/* Trivial allocator/constructor for the datatype. */

struct zx_dise_Header_s* zx_NEW_dise_Header(struct zx_ctx* c)
{
  struct zx_dise_Header_s* x = ZX_ZALLOC(c, struct zx_dise_Header_s);
  x->gg.g.tok = zx_dise_Header_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_dise_Header) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zx_a_MessageID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_MessageID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zx_a_RelatesTo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_RelatesTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zx_a_ReplyTo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_ReplyTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_a_From_s* e;
      for (e = x->From; e; e = (struct zx_a_From_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_From(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zx_a_FaultTo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_FaultTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_a_To_s* e;
      for (e = x->To; e; e = (struct zx_a_To_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_To(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_a_Action_s* e;
      for (e = x->Action; e; e = (struct zx_a_Action_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_a_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zx_sbf_Framework_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sbf_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zx_b_Framework_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zx_b_Sender_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_Sender(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zx_b_CredentialsContext_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_CredentialsContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zx_b_EndpointUpdate_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_EndpointUpdate(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Timeout, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zx_b_ProcessingContext_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_ProcessingContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zx_b_ApplicationEPR_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_ApplicationEPR(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zx_b_RedirectRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_RedirectRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_dise_Header) */

int zx_WALK_WO_dise_Header(struct zx_ctx* c, struct zx_dise_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




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

#define EL_NAME   dise_detail
#define EL_STRUCT zx_dise_detail_s
#define EL_NS     dise
#define EL_TAG    detail

/* FUNC(zx_DUP_STRS_dise_detail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_dise_detail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_dise_detail_s* zx_DEEP_CLONE_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, int dup_strs)
{
  x = (struct zx_dise_detail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_dise_detail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_dise_detail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_dise_detail) */

/* Trivial allocator/constructor for the datatype. */

struct zx_dise_detail_s* zx_NEW_dise_detail(struct zx_ctx* c)
{
  struct zx_dise_detail_s* x = ZX_ZALLOC(c, struct zx_dise_detail_s);
  x->gg.g.tok = zx_dise_detail_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_dise_detail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_dise_detail) */

int zx_WALK_WO_dise_detail(struct zx_ctx* c, struct zx_dise_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}


/* EOF -- c/zx-dise-aux.c */
