/* c/zx-ps-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-ps-data.h"



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

#define EL_NAME   ps_AddCollectionRequest
#define EL_STRUCT zx_ps_AddCollectionRequest_s
#define EL_NS     ps
#define EL_TAG    AddCollectionRequest

/* FUNC(zx_FREE_ps_AddCollectionRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_AddCollectionRequest(struct zx_ctx* c, struct zx_ps_AddCollectionRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_AddCollectionRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_AddCollectionRequest_s* zx_NEW_ps_AddCollectionRequest(struct zx_ctx* c)
{
  struct zx_ps_AddCollectionRequest_s* x = ZX_ZALLOC(c, struct zx_ps_AddCollectionRequest_s);
  x->gg.g.tok = zx_ps_AddCollectionRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_AddCollectionRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_AddCollectionRequest(struct zx_ctx* c, struct zx_ps_AddCollectionRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_AddCollectionRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_AddCollectionRequest_s* zx_DEEP_CLONE_ps_AddCollectionRequest(struct zx_ctx* c, struct zx_ps_AddCollectionRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_AddCollectionRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_AddCollectionRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_AddCollectionRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_AddCollectionRequest(struct zx_ctx* c, struct zx_ps_AddCollectionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_AddCollectionRequest) */

int zx_WALK_WO_ps_AddCollectionRequest(struct zx_ctx* c, struct zx_ps_AddCollectionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_AddCollectionResponse
#define EL_STRUCT zx_ps_AddCollectionResponse_s
#define EL_NS     ps
#define EL_TAG    AddCollectionResponse

/* FUNC(zx_FREE_ps_AddCollectionResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_AddCollectionResponse(struct zx_ctx* c, struct zx_ps_AddCollectionResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_AddCollectionResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_AddCollectionResponse_s* zx_NEW_ps_AddCollectionResponse(struct zx_ctx* c)
{
  struct zx_ps_AddCollectionResponse_s* x = ZX_ZALLOC(c, struct zx_ps_AddCollectionResponse_s);
  x->gg.g.tok = zx_ps_AddCollectionResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_AddCollectionResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_AddCollectionResponse(struct zx_ctx* c, struct zx_ps_AddCollectionResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_AddCollectionResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_AddCollectionResponse_s* zx_DEEP_CLONE_ps_AddCollectionResponse(struct zx_ctx* c, struct zx_ps_AddCollectionResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_AddCollectionResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_AddCollectionResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_AddCollectionResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_AddCollectionResponse(struct zx_ctx* c, struct zx_ps_AddCollectionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_AddCollectionResponse) */

int zx_WALK_WO_ps_AddCollectionResponse(struct zx_ctx* c, struct zx_ps_AddCollectionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_AddEntityRequest
#define EL_STRUCT zx_ps_AddEntityRequest_s
#define EL_NS     ps
#define EL_TAG    AddEntityRequest

/* FUNC(zx_FREE_ps_AddEntityRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_AddEntityRequest(struct zx_ctx* c, struct zx_ps_AddEntityRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->PStoSPRedirectURL, free_strs);
  {
      struct zx_ps_CreatePSObject_s* e;
      struct zx_ps_CreatePSObject_s* en;
      for (e = x->CreatePSObject; e; e = en) {
	  en = (struct zx_ps_CreatePSObject_s*)e->gg.g.n;
	  zx_FREE_ps_CreatePSObject(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }
  {
      struct zx_sec_TokenPolicy_s* e;
      struct zx_sec_TokenPolicy_s* en;
      for (e = x->TokenPolicy; e; e = en) {
	  en = (struct zx_sec_TokenPolicy_s*)e->gg.g.n;
	  zx_FREE_sec_TokenPolicy(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_AddEntityRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_AddEntityRequest_s* zx_NEW_ps_AddEntityRequest(struct zx_ctx* c)
{
  struct zx_ps_AddEntityRequest_s* x = ZX_ZALLOC(c, struct zx_ps_AddEntityRequest_s);
  x->gg.g.tok = zx_ps_AddEntityRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_AddEntityRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_AddEntityRequest(struct zx_ctx* c, struct zx_ps_AddEntityRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }
  zx_dup_strs_simple_elems(c, x->PStoSPRedirectURL);
  {
      struct zx_ps_CreatePSObject_s* e;
      for (e = x->CreatePSObject; e; e = (struct zx_ps_CreatePSObject_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_CreatePSObject(c, e);
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }
  {
      struct zx_sec_TokenPolicy_s* e;
      for (e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n)
	  zx_DUP_STRS_sec_TokenPolicy(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_AddEntityRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_AddEntityRequest_s* zx_DEEP_CLONE_ps_AddEntityRequest(struct zx_ctx* c, struct zx_ps_AddEntityRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_AddEntityRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_AddEntityRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->PStoSPRedirectURL = zx_deep_clone_simple_elems(c,x->PStoSPRedirectURL, dup_strs);
  {
      struct zx_ps_CreatePSObject_s* e;
      struct zx_ps_CreatePSObject_s* en;
      struct zx_ps_CreatePSObject_s* enn;
      for (enn = 0, e = x->CreatePSObject; e; e = (struct zx_ps_CreatePSObject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_CreatePSObject(c, e, dup_strs);
	  if (!enn)
	      x->CreatePSObject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sec_TokenPolicy_s* e;
      struct zx_sec_TokenPolicy_s* en;
      struct zx_sec_TokenPolicy_s* enn;
      for (enn = 0, e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sec_TokenPolicy(c, e, dup_strs);
	  if (!enn)
	      x->TokenPolicy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_AddEntityRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_AddEntityRequest(struct zx_ctx* c, struct zx_ps_AddEntityRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->PStoSPRedirectURL, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_ps_CreatePSObject_s* e;
      for (e = x->CreatePSObject; e; e = (struct zx_ps_CreatePSObject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_CreatePSObject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sec_TokenPolicy_s* e;
      for (e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sec_TokenPolicy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_AddEntityRequest) */

int zx_WALK_WO_ps_AddEntityRequest(struct zx_ctx* c, struct zx_ps_AddEntityRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_AddEntityResponse
#define EL_STRUCT zx_ps_AddEntityResponse_s
#define EL_NS     ps
#define EL_TAG    AddEntityResponse

/* FUNC(zx_FREE_ps_AddEntityResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_AddEntityResponse(struct zx_ctx* c, struct zx_ps_AddEntityResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SPtoPSRedirectURL, free_strs);
  zx_free_simple_elems(c, x->QueryString, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_AddEntityResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_AddEntityResponse_s* zx_NEW_ps_AddEntityResponse(struct zx_ctx* c)
{
  struct zx_ps_AddEntityResponse_s* x = ZX_ZALLOC(c, struct zx_ps_AddEntityResponse_s);
  x->gg.g.tok = zx_ps_AddEntityResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_AddEntityResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_AddEntityResponse(struct zx_ctx* c, struct zx_ps_AddEntityResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SPtoPSRedirectURL);
  zx_dup_strs_simple_elems(c, x->QueryString);

}

/* FUNC(zx_DEEP_CLONE_ps_AddEntityResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_AddEntityResponse_s* zx_DEEP_CLONE_ps_AddEntityResponse(struct zx_ctx* c, struct zx_ps_AddEntityResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_AddEntityResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_AddEntityResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SPtoPSRedirectURL = zx_deep_clone_simple_elems(c,x->SPtoPSRedirectURL, dup_strs);
  x->QueryString = zx_deep_clone_simple_elems(c,x->QueryString, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_ps_AddEntityResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_AddEntityResponse(struct zx_ctx* c, struct zx_ps_AddEntityResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SPtoPSRedirectURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->QueryString, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_AddEntityResponse) */

int zx_WALK_WO_ps_AddEntityResponse(struct zx_ctx* c, struct zx_ps_AddEntityResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_AddKnownEntityRequest
#define EL_STRUCT zx_ps_AddKnownEntityRequest_s
#define EL_NS     ps
#define EL_TAG    AddKnownEntityRequest

/* FUNC(zx_FREE_ps_AddKnownEntityRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_AddKnownEntityRequest(struct zx_ctx* c, struct zx_ps_AddKnownEntityRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }
  {
      struct zx_sec_Token_s* e;
      struct zx_sec_Token_s* en;
      for (e = x->Token; e; e = en) {
	  en = (struct zx_sec_Token_s*)e->gg.g.n;
	  zx_FREE_sec_Token(c, e, free_strs);
      }
  }
  {
      struct zx_ps_CreatePSObject_s* e;
      struct zx_ps_CreatePSObject_s* en;
      for (e = x->CreatePSObject; e; e = en) {
	  en = (struct zx_ps_CreatePSObject_s*)e->gg.g.n;
	  zx_FREE_ps_CreatePSObject(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }
  {
      struct zx_sec_TokenPolicy_s* e;
      struct zx_sec_TokenPolicy_s* en;
      for (e = x->TokenPolicy; e; e = en) {
	  en = (struct zx_sec_TokenPolicy_s*)e->gg.g.n;
	  zx_FREE_sec_TokenPolicy(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_AddKnownEntityRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_AddKnownEntityRequest_s* zx_NEW_ps_AddKnownEntityRequest(struct zx_ctx* c)
{
  struct zx_ps_AddKnownEntityRequest_s* x = ZX_ZALLOC(c, struct zx_ps_AddKnownEntityRequest_s);
  x->gg.g.tok = zx_ps_AddKnownEntityRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_AddKnownEntityRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_AddKnownEntityRequest(struct zx_ctx* c, struct zx_ps_AddKnownEntityRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }
  {
      struct zx_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n)
	  zx_DUP_STRS_sec_Token(c, e);
  }
  {
      struct zx_ps_CreatePSObject_s* e;
      for (e = x->CreatePSObject; e; e = (struct zx_ps_CreatePSObject_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_CreatePSObject(c, e);
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }
  {
      struct zx_sec_TokenPolicy_s* e;
      for (e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n)
	  zx_DUP_STRS_sec_TokenPolicy(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_AddKnownEntityRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_AddKnownEntityRequest_s* zx_DEEP_CLONE_ps_AddKnownEntityRequest(struct zx_ctx* c, struct zx_ps_AddKnownEntityRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_AddKnownEntityRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_AddKnownEntityRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sec_Token_s* e;
      struct zx_sec_Token_s* en;
      struct zx_sec_Token_s* enn;
      for (enn = 0, e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sec_Token(c, e, dup_strs);
	  if (!enn)
	      x->Token = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_CreatePSObject_s* e;
      struct zx_ps_CreatePSObject_s* en;
      struct zx_ps_CreatePSObject_s* enn;
      for (enn = 0, e = x->CreatePSObject; e; e = (struct zx_ps_CreatePSObject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_CreatePSObject(c, e, dup_strs);
	  if (!enn)
	      x->CreatePSObject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sec_TokenPolicy_s* e;
      struct zx_sec_TokenPolicy_s* en;
      struct zx_sec_TokenPolicy_s* enn;
      for (enn = 0, e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sec_TokenPolicy(c, e, dup_strs);
	  if (!enn)
	      x->TokenPolicy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_AddKnownEntityRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_AddKnownEntityRequest(struct zx_ctx* c, struct zx_ps_AddKnownEntityRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sec_Token(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_CreatePSObject_s* e;
      for (e = x->CreatePSObject; e; e = (struct zx_ps_CreatePSObject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_CreatePSObject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sec_TokenPolicy_s* e;
      for (e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sec_TokenPolicy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_AddKnownEntityRequest) */

int zx_WALK_WO_ps_AddKnownEntityRequest(struct zx_ctx* c, struct zx_ps_AddKnownEntityRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_AddKnownEntityResponse
#define EL_STRUCT zx_ps_AddKnownEntityResponse_s
#define EL_NS     ps
#define EL_TAG    AddKnownEntityResponse

/* FUNC(zx_FREE_ps_AddKnownEntityResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_AddKnownEntityResponse(struct zx_ctx* c, struct zx_ps_AddKnownEntityResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SPtoPSRedirectURL, free_strs);
  zx_free_simple_elems(c, x->QueryString, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_AddKnownEntityResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_AddKnownEntityResponse_s* zx_NEW_ps_AddKnownEntityResponse(struct zx_ctx* c)
{
  struct zx_ps_AddKnownEntityResponse_s* x = ZX_ZALLOC(c, struct zx_ps_AddKnownEntityResponse_s);
  x->gg.g.tok = zx_ps_AddKnownEntityResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_AddKnownEntityResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_AddKnownEntityResponse(struct zx_ctx* c, struct zx_ps_AddKnownEntityResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SPtoPSRedirectURL);
  zx_dup_strs_simple_elems(c, x->QueryString);

}

/* FUNC(zx_DEEP_CLONE_ps_AddKnownEntityResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_AddKnownEntityResponse_s* zx_DEEP_CLONE_ps_AddKnownEntityResponse(struct zx_ctx* c, struct zx_ps_AddKnownEntityResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_AddKnownEntityResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_AddKnownEntityResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SPtoPSRedirectURL = zx_deep_clone_simple_elems(c,x->SPtoPSRedirectURL, dup_strs);
  x->QueryString = zx_deep_clone_simple_elems(c,x->QueryString, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_ps_AddKnownEntityResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_AddKnownEntityResponse(struct zx_ctx* c, struct zx_ps_AddKnownEntityResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SPtoPSRedirectURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->QueryString, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_AddKnownEntityResponse) */

int zx_WALK_WO_ps_AddKnownEntityResponse(struct zx_ctx* c, struct zx_ps_AddKnownEntityResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_AddToCollectionRequest
#define EL_STRUCT zx_ps_AddToCollectionRequest_s
#define EL_NS     ps
#define EL_TAG    AddToCollectionRequest

/* FUNC(zx_FREE_ps_AddToCollectionRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_AddToCollectionRequest(struct zx_ctx* c, struct zx_ps_AddToCollectionRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->TargetObjectID, free_strs);
  zx_free_simple_elems(c, x->ObjectID, free_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_AddToCollectionRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_AddToCollectionRequest_s* zx_NEW_ps_AddToCollectionRequest(struct zx_ctx* c)
{
  struct zx_ps_AddToCollectionRequest_s* x = ZX_ZALLOC(c, struct zx_ps_AddToCollectionRequest_s);
  x->gg.g.tok = zx_ps_AddToCollectionRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_AddToCollectionRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_AddToCollectionRequest(struct zx_ctx* c, struct zx_ps_AddToCollectionRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->TargetObjectID);
  zx_dup_strs_simple_elems(c, x->ObjectID);
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_AddToCollectionRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_AddToCollectionRequest_s* zx_DEEP_CLONE_ps_AddToCollectionRequest(struct zx_ctx* c, struct zx_ps_AddToCollectionRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_AddToCollectionRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_AddToCollectionRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->TargetObjectID = zx_deep_clone_simple_elems(c,x->TargetObjectID, dup_strs);
  x->ObjectID = zx_deep_clone_simple_elems(c,x->ObjectID, dup_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_AddToCollectionRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_AddToCollectionRequest(struct zx_ctx* c, struct zx_ps_AddToCollectionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->TargetObjectID, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ObjectID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_AddToCollectionRequest) */

int zx_WALK_WO_ps_AddToCollectionRequest(struct zx_ctx* c, struct zx_ps_AddToCollectionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_AddToCollectionResponse
#define EL_STRUCT zx_ps_AddToCollectionResponse_s
#define EL_NS     ps
#define EL_TAG    AddToCollectionResponse

/* FUNC(zx_FREE_ps_AddToCollectionResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_AddToCollectionResponse(struct zx_ctx* c, struct zx_ps_AddToCollectionResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_AddToCollectionResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_AddToCollectionResponse_s* zx_NEW_ps_AddToCollectionResponse(struct zx_ctx* c)
{
  struct zx_ps_AddToCollectionResponse_s* x = ZX_ZALLOC(c, struct zx_ps_AddToCollectionResponse_s);
  x->gg.g.tok = zx_ps_AddToCollectionResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_AddToCollectionResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_AddToCollectionResponse(struct zx_ctx* c, struct zx_ps_AddToCollectionResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_AddToCollectionResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_AddToCollectionResponse_s* zx_DEEP_CLONE_ps_AddToCollectionResponse(struct zx_ctx* c, struct zx_ps_AddToCollectionResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_AddToCollectionResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_AddToCollectionResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_AddToCollectionResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_AddToCollectionResponse(struct zx_ctx* c, struct zx_ps_AddToCollectionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_AddToCollectionResponse) */

int zx_WALK_WO_ps_AddToCollectionResponse(struct zx_ctx* c, struct zx_ps_AddToCollectionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_CreatePSObject
#define EL_STRUCT zx_ps_CreatePSObject_s
#define EL_NS     ps
#define EL_TAG    CreatePSObject

/* FUNC(zx_FREE_ps_CreatePSObject) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_CreatePSObject(struct zx_ctx* c, struct zx_ps_CreatePSObject_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_CreatePSObject) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_CreatePSObject_s* zx_NEW_ps_CreatePSObject(struct zx_ctx* c)
{
  struct zx_ps_CreatePSObject_s* x = ZX_ZALLOC(c, struct zx_ps_CreatePSObject_s);
  x->gg.g.tok = zx_ps_CreatePSObject_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_CreatePSObject) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_CreatePSObject(struct zx_ctx* c, struct zx_ps_CreatePSObject_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_ps_CreatePSObject) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_CreatePSObject_s* zx_DEEP_CLONE_ps_CreatePSObject(struct zx_ctx* c, struct zx_ps_CreatePSObject_s* x, int dup_strs)
{
  x = (struct zx_ps_CreatePSObject_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_CreatePSObject_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_WALK_SO_ps_CreatePSObject) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_CreatePSObject(struct zx_ctx* c, struct zx_ps_CreatePSObject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ps_CreatePSObject) */

int zx_WALK_WO_ps_CreatePSObject(struct zx_ctx* c, struct zx_ps_CreatePSObject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_DisplayName
#define EL_STRUCT zx_ps_DisplayName_s
#define EL_NS     ps
#define EL_TAG    DisplayName

/* FUNC(zx_FREE_ps_DisplayName) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_DisplayName(struct zx_ctx* c, struct zx_ps_DisplayName_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->IsDefault, free_strs);
  zx_free_attr(c, x->Locale, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_DisplayName) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_DisplayName_s* zx_NEW_ps_DisplayName(struct zx_ctx* c)
{
  struct zx_ps_DisplayName_s* x = ZX_ZALLOC(c, struct zx_ps_DisplayName_s);
  x->gg.g.tok = zx_ps_DisplayName_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_DisplayName) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_DisplayName(struct zx_ctx* c, struct zx_ps_DisplayName_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->IsDefault);
  zx_dup_attr(c, x->Locale);


}

/* FUNC(zx_DEEP_CLONE_ps_DisplayName) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_DisplayName_s* zx_DEEP_CLONE_ps_DisplayName(struct zx_ctx* c, struct zx_ps_DisplayName_s* x, int dup_strs)
{
  x = (struct zx_ps_DisplayName_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_DisplayName_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->IsDefault = zx_clone_attr(c, x->IsDefault);
  x->Locale = zx_clone_attr(c, x->Locale);


  return x;
}

/* FUNC(zx_WALK_SO_ps_DisplayName) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_DisplayName(struct zx_ctx* c, struct zx_ps_DisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ps_DisplayName) */

int zx_WALK_WO_ps_DisplayName(struct zx_ctx* c, struct zx_ps_DisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_GetObjectInfoRequest
#define EL_STRUCT zx_ps_GetObjectInfoRequest_s
#define EL_NS     ps
#define EL_TAG    GetObjectInfoRequest

/* FUNC(zx_FREE_ps_GetObjectInfoRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_GetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_GetObjectInfoRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->TargetObjectID, free_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_GetObjectInfoRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_GetObjectInfoRequest_s* zx_NEW_ps_GetObjectInfoRequest(struct zx_ctx* c)
{
  struct zx_ps_GetObjectInfoRequest_s* x = ZX_ZALLOC(c, struct zx_ps_GetObjectInfoRequest_s);
  x->gg.g.tok = zx_ps_GetObjectInfoRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_GetObjectInfoRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_GetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_GetObjectInfoRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->TargetObjectID);
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_GetObjectInfoRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_GetObjectInfoRequest_s* zx_DEEP_CLONE_ps_GetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_GetObjectInfoRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_GetObjectInfoRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_GetObjectInfoRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->TargetObjectID = zx_deep_clone_simple_elems(c,x->TargetObjectID, dup_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_GetObjectInfoRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_GetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_GetObjectInfoRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->TargetObjectID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_GetObjectInfoRequest) */

int zx_WALK_WO_ps_GetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_GetObjectInfoRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_GetObjectInfoResponse
#define EL_STRUCT zx_ps_GetObjectInfoResponse_s
#define EL_NS     ps
#define EL_TAG    GetObjectInfoResponse

/* FUNC(zx_FREE_ps_GetObjectInfoResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_GetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_GetObjectInfoResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_GetObjectInfoResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_GetObjectInfoResponse_s* zx_NEW_ps_GetObjectInfoResponse(struct zx_ctx* c)
{
  struct zx_ps_GetObjectInfoResponse_s* x = ZX_ZALLOC(c, struct zx_ps_GetObjectInfoResponse_s);
  x->gg.g.tok = zx_ps_GetObjectInfoResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_GetObjectInfoResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_GetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_GetObjectInfoResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_GetObjectInfoResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_GetObjectInfoResponse_s* zx_DEEP_CLONE_ps_GetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_GetObjectInfoResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_GetObjectInfoResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_GetObjectInfoResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_GetObjectInfoResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_GetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_GetObjectInfoResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_GetObjectInfoResponse) */

int zx_WALK_WO_ps_GetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_GetObjectInfoResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_ItemData
#define EL_STRUCT zx_ps_ItemData_s
#define EL_NS     ps
#define EL_TAG    ItemData

/* FUNC(zx_FREE_ps_ItemData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_ItemData(struct zx_ctx* c, struct zx_ps_ItemData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_ItemData) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_ItemData_s* zx_NEW_ps_ItemData(struct zx_ctx* c)
{
  struct zx_ps_ItemData_s* x = ZX_ZALLOC(c, struct zx_ps_ItemData_s);
  x->gg.g.tok = zx_ps_ItemData_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_ItemData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_ItemData(struct zx_ctx* c, struct zx_ps_ItemData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_ItemData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_ItemData_s* zx_DEEP_CLONE_ps_ItemData(struct zx_ctx* c, struct zx_ps_ItemData_s* x, int dup_strs)
{
  x = (struct zx_ps_ItemData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_ItemData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_ItemData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_ItemData(struct zx_ctx* c, struct zx_ps_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_ItemData) */

int zx_WALK_WO_ps_ItemData(struct zx_ctx* c, struct zx_ps_ItemData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_ListMembersRequest
#define EL_STRUCT zx_ps_ListMembersRequest_s
#define EL_NS     ps
#define EL_TAG    ListMembersRequest

/* FUNC(zx_FREE_ps_ListMembersRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_ListMembersRequest(struct zx_ctx* c, struct zx_ps_ListMembersRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Count, free_strs);
  zx_free_attr(c, x->Offset, free_strs);
  zx_free_attr(c, x->Structured, free_strs);
  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->TargetObjectID, free_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_ListMembersRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_ListMembersRequest_s* zx_NEW_ps_ListMembersRequest(struct zx_ctx* c)
{
  struct zx_ps_ListMembersRequest_s* x = ZX_ZALLOC(c, struct zx_ps_ListMembersRequest_s);
  x->gg.g.tok = zx_ps_ListMembersRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_ListMembersRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_ListMembersRequest(struct zx_ctx* c, struct zx_ps_ListMembersRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Count);
  zx_dup_attr(c, x->Offset);
  zx_dup_attr(c, x->Structured);
  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->TargetObjectID);
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_ListMembersRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_ListMembersRequest_s* zx_DEEP_CLONE_ps_ListMembersRequest(struct zx_ctx* c, struct zx_ps_ListMembersRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_ListMembersRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_ListMembersRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Count = zx_clone_attr(c, x->Count);
  x->Offset = zx_clone_attr(c, x->Offset);
  x->Structured = zx_clone_attr(c, x->Structured);
  x->id = zx_clone_attr(c, x->id);

  x->TargetObjectID = zx_deep_clone_simple_elems(c,x->TargetObjectID, dup_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_ListMembersRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_ListMembersRequest(struct zx_ctx* c, struct zx_ps_ListMembersRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->TargetObjectID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_ListMembersRequest) */

int zx_WALK_WO_ps_ListMembersRequest(struct zx_ctx* c, struct zx_ps_ListMembersRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_ListMembersResponse
#define EL_STRUCT zx_ps_ListMembersResponse_s
#define EL_NS     ps
#define EL_TAG    ListMembersResponse

/* FUNC(zx_FREE_ps_ListMembersResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_ListMembersResponse(struct zx_ctx* c, struct zx_ps_ListMembersResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_ListMembersResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_ListMembersResponse_s* zx_NEW_ps_ListMembersResponse(struct zx_ctx* c)
{
  struct zx_ps_ListMembersResponse_s* x = ZX_ZALLOC(c, struct zx_ps_ListMembersResponse_s);
  x->gg.g.tok = zx_ps_ListMembersResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_ListMembersResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_ListMembersResponse(struct zx_ctx* c, struct zx_ps_ListMembersResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_ListMembersResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_ListMembersResponse_s* zx_DEEP_CLONE_ps_ListMembersResponse(struct zx_ctx* c, struct zx_ps_ListMembersResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_ListMembersResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_ListMembersResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_ListMembersResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_ListMembersResponse(struct zx_ctx* c, struct zx_ps_ListMembersResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_ListMembersResponse) */

int zx_WALK_WO_ps_ListMembersResponse(struct zx_ctx* c, struct zx_ps_ListMembersResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_Notification
#define EL_STRUCT zx_ps_Notification_s
#define EL_NS     ps
#define EL_TAG    Notification

/* FUNC(zx_FREE_ps_Notification) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_Notification(struct zx_ctx* c, struct zx_ps_Notification_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->endReason, free_strs);
  zx_free_attr(c, x->expires, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->subscriptionID, free_strs);

  {
      struct zx_lu_TestResult_s* e;
      struct zx_lu_TestResult_s* en;
      for (e = x->TestResult; e; e = en) {
	  en = (struct zx_lu_TestResult_s*)e->gg.g.n;
	  zx_FREE_lu_TestResult(c, e, free_strs);
      }
  }
  {
      struct zx_ps_ItemData_s* e;
      struct zx_ps_ItemData_s* en;
      for (e = x->ItemData; e; e = en) {
	  en = (struct zx_ps_ItemData_s*)e->gg.g.n;
	  zx_FREE_ps_ItemData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_Notification) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_Notification_s* zx_NEW_ps_Notification(struct zx_ctx* c)
{
  struct zx_ps_Notification_s* x = ZX_ZALLOC(c, struct zx_ps_Notification_s);
  x->gg.g.tok = zx_ps_Notification_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_Notification) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_Notification(struct zx_ctx* c, struct zx_ps_Notification_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->endReason);
  zx_dup_attr(c, x->expires);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->subscriptionID);

  {
      struct zx_lu_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_TestResult(c, e);
  }
  {
      struct zx_ps_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_ps_ItemData_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_ItemData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_Notification) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_Notification_s* zx_DEEP_CLONE_ps_Notification(struct zx_ctx* c, struct zx_ps_Notification_s* x, int dup_strs)
{
  x = (struct zx_ps_Notification_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_Notification_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->endReason = zx_clone_attr(c, x->endReason);
  x->expires = zx_clone_attr(c, x->expires);
  x->id = zx_clone_attr(c, x->id);
  x->subscriptionID = zx_clone_attr(c, x->subscriptionID);

  {
      struct zx_lu_TestResult_s* e;
      struct zx_lu_TestResult_s* en;
      struct zx_lu_TestResult_s* enn;
      for (enn = 0, e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_TestResult(c, e, dup_strs);
	  if (!enn)
	      x->TestResult = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_ItemData_s* e;
      struct zx_ps_ItemData_s* en;
      struct zx_ps_ItemData_s* enn;
      for (enn = 0, e = x->ItemData; e; e = (struct zx_ps_ItemData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_ItemData(c, e, dup_strs);
	  if (!enn)
	      x->ItemData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_Notification) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_Notification(struct zx_ctx* c, struct zx_ps_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_TestResult_s* e;
      for (e = x->TestResult; e; e = (struct zx_lu_TestResult_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_TestResult(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_ItemData_s* e;
      for (e = x->ItemData; e; e = (struct zx_ps_ItemData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_ItemData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_Notification) */

int zx_WALK_WO_ps_Notification(struct zx_ctx* c, struct zx_ps_Notification_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_Notify
#define EL_STRUCT zx_ps_Notify_s
#define EL_NS     ps
#define EL_TAG    Notify

/* FUNC(zx_FREE_ps_Notify) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_Notify(struct zx_ctx* c, struct zx_ps_Notify_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->timeStamp, free_strs);

  {
      struct zx_ps_Notification_s* e;
      struct zx_ps_Notification_s* en;
      for (e = x->Notification; e; e = en) {
	  en = (struct zx_ps_Notification_s*)e->gg.g.n;
	  zx_FREE_ps_Notification(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_Notify) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_Notify_s* zx_NEW_ps_Notify(struct zx_ctx* c)
{
  struct zx_ps_Notify_s* x = ZX_ZALLOC(c, struct zx_ps_Notify_s);
  x->gg.g.tok = zx_ps_Notify_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_Notify) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_Notify(struct zx_ctx* c, struct zx_ps_Notify_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->timeStamp);

  {
      struct zx_ps_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_ps_Notification_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Notification(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_Notify) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_Notify_s* zx_DEEP_CLONE_ps_Notify(struct zx_ctx* c, struct zx_ps_Notify_s* x, int dup_strs)
{
  x = (struct zx_ps_Notify_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_Notify_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->timeStamp = zx_clone_attr(c, x->timeStamp);

  {
      struct zx_ps_Notification_s* e;
      struct zx_ps_Notification_s* en;
      struct zx_ps_Notification_s* enn;
      for (enn = 0, e = x->Notification; e; e = (struct zx_ps_Notification_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Notification(c, e, dup_strs);
	  if (!enn)
	      x->Notification = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_Notify) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_Notify(struct zx_ctx* c, struct zx_ps_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ps_Notification_s* e;
      for (e = x->Notification; e; e = (struct zx_ps_Notification_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Notification(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_Notify) */

int zx_WALK_WO_ps_Notify(struct zx_ctx* c, struct zx_ps_Notify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_NotifyResponse
#define EL_STRUCT zx_ps_NotifyResponse_s
#define EL_NS     ps
#define EL_TAG    NotifyResponse

/* FUNC(zx_FREE_ps_NotifyResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_NotifyResponse(struct zx_ctx* c, struct zx_ps_NotifyResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemIDRef, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_NotifyResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_NotifyResponse_s* zx_NEW_ps_NotifyResponse(struct zx_ctx* c)
{
  struct zx_ps_NotifyResponse_s* x = ZX_ZALLOC(c, struct zx_ps_NotifyResponse_s);
  x->gg.g.tok = zx_ps_NotifyResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_NotifyResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_NotifyResponse(struct zx_ctx* c, struct zx_ps_NotifyResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_NotifyResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_NotifyResponse_s* zx_DEEP_CLONE_ps_NotifyResponse(struct zx_ctx* c, struct zx_ps_NotifyResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_NotifyResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_NotifyResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_NotifyResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_NotifyResponse(struct zx_ctx* c, struct zx_ps_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_NotifyResponse) */

int zx_WALK_WO_ps_NotifyResponse(struct zx_ctx* c, struct zx_ps_NotifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_Object
#define EL_STRUCT zx_ps_Object_s
#define EL_NS     ps
#define EL_TAG    Object

/* FUNC(zx_FREE_ps_Object) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_Object(struct zx_ctx* c, struct zx_ps_Object_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->CreatedDateTime, free_strs);
  zx_free_attr(c, x->ModifiedDateTime, free_strs);
  zx_free_attr(c, x->NodeType, free_strs);

  zx_free_simple_elems(c, x->ObjectID, free_strs);
  {
      struct zx_ps_DisplayName_s* e;
      struct zx_ps_DisplayName_s* en;
      for (e = x->DisplayName; e; e = en) {
	  en = (struct zx_ps_DisplayName_s*)e->gg.g.n;
	  zx_FREE_ps_DisplayName(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Tag_s* e;
      struct zx_ps_Tag_s* en;
      for (e = x->Tag; e; e = en) {
	  en = (struct zx_ps_Tag_s*)e->gg.g.n;
	  zx_FREE_ps_Tag(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->ObjectRef, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_Object) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_Object_s* zx_NEW_ps_Object(struct zx_ctx* c)
{
  struct zx_ps_Object_s* x = ZX_ZALLOC(c, struct zx_ps_Object_s);
  x->gg.g.tok = zx_ps_Object_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_Object) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_Object(struct zx_ctx* c, struct zx_ps_Object_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->CreatedDateTime);
  zx_dup_attr(c, x->ModifiedDateTime);
  zx_dup_attr(c, x->NodeType);

  zx_dup_strs_simple_elems(c, x->ObjectID);
  {
      struct zx_ps_DisplayName_s* e;
      for (e = x->DisplayName; e; e = (struct zx_ps_DisplayName_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_DisplayName(c, e);
  }
  {
      struct zx_ps_Tag_s* e;
      for (e = x->Tag; e; e = (struct zx_ps_Tag_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Tag(c, e);
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }
  zx_dup_strs_simple_elems(c, x->ObjectRef);

}

/* FUNC(zx_DEEP_CLONE_ps_Object) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_Object_s* zx_DEEP_CLONE_ps_Object(struct zx_ctx* c, struct zx_ps_Object_s* x, int dup_strs)
{
  x = (struct zx_ps_Object_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_Object_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->CreatedDateTime = zx_clone_attr(c, x->CreatedDateTime);
  x->ModifiedDateTime = zx_clone_attr(c, x->ModifiedDateTime);
  x->NodeType = zx_clone_attr(c, x->NodeType);

  x->ObjectID = zx_deep_clone_simple_elems(c,x->ObjectID, dup_strs);
  {
      struct zx_ps_DisplayName_s* e;
      struct zx_ps_DisplayName_s* en;
      struct zx_ps_DisplayName_s* enn;
      for (enn = 0, e = x->DisplayName; e; e = (struct zx_ps_DisplayName_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_DisplayName(c, e, dup_strs);
	  if (!enn)
	      x->DisplayName = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Tag_s* e;
      struct zx_ps_Tag_s* en;
      struct zx_ps_Tag_s* enn;
      for (enn = 0, e = x->Tag; e; e = (struct zx_ps_Tag_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Tag(c, e, dup_strs);
	  if (!enn)
	      x->Tag = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->ObjectRef = zx_deep_clone_simple_elems(c,x->ObjectRef, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_ps_Object) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_Object(struct zx_ctx* c, struct zx_ps_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ObjectID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_ps_DisplayName_s* e;
      for (e = x->DisplayName; e; e = (struct zx_ps_DisplayName_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_DisplayName(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Tag_s* e;
      for (e = x->Tag; e; e = (struct zx_ps_Tag_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Tag(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->ObjectRef, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_Object) */

int zx_WALK_WO_ps_Object(struct zx_ctx* c, struct zx_ps_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_QueryObjectsRequest
#define EL_STRUCT zx_ps_QueryObjectsRequest_s
#define EL_NS     ps
#define EL_TAG    QueryObjectsRequest

/* FUNC(zx_FREE_ps_QueryObjectsRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_QueryObjectsRequest(struct zx_ctx* c, struct zx_ps_QueryObjectsRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Count, free_strs);
  zx_free_attr(c, x->Offset, free_strs);
  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->Filter, free_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_QueryObjectsRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_QueryObjectsRequest_s* zx_NEW_ps_QueryObjectsRequest(struct zx_ctx* c)
{
  struct zx_ps_QueryObjectsRequest_s* x = ZX_ZALLOC(c, struct zx_ps_QueryObjectsRequest_s);
  x->gg.g.tok = zx_ps_QueryObjectsRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_QueryObjectsRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_QueryObjectsRequest(struct zx_ctx* c, struct zx_ps_QueryObjectsRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Count);
  zx_dup_attr(c, x->Offset);
  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->Filter);
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_QueryObjectsRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_QueryObjectsRequest_s* zx_DEEP_CLONE_ps_QueryObjectsRequest(struct zx_ctx* c, struct zx_ps_QueryObjectsRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_QueryObjectsRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_QueryObjectsRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Count = zx_clone_attr(c, x->Count);
  x->Offset = zx_clone_attr(c, x->Offset);
  x->id = zx_clone_attr(c, x->id);

  x->Filter = zx_deep_clone_simple_elems(c,x->Filter, dup_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_QueryObjectsRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_QueryObjectsRequest(struct zx_ctx* c, struct zx_ps_QueryObjectsRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Filter, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_QueryObjectsRequest) */

int zx_WALK_WO_ps_QueryObjectsRequest(struct zx_ctx* c, struct zx_ps_QueryObjectsRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_QueryObjectsResponse
#define EL_STRUCT zx_ps_QueryObjectsResponse_s
#define EL_NS     ps
#define EL_TAG    QueryObjectsResponse

/* FUNC(zx_FREE_ps_QueryObjectsResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_QueryObjectsResponse(struct zx_ctx* c, struct zx_ps_QueryObjectsResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_QueryObjectsResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_QueryObjectsResponse_s* zx_NEW_ps_QueryObjectsResponse(struct zx_ctx* c)
{
  struct zx_ps_QueryObjectsResponse_s* x = ZX_ZALLOC(c, struct zx_ps_QueryObjectsResponse_s);
  x->gg.g.tok = zx_ps_QueryObjectsResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_QueryObjectsResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_QueryObjectsResponse(struct zx_ctx* c, struct zx_ps_QueryObjectsResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_QueryObjectsResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_QueryObjectsResponse_s* zx_DEEP_CLONE_ps_QueryObjectsResponse(struct zx_ctx* c, struct zx_ps_QueryObjectsResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_QueryObjectsResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_QueryObjectsResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_QueryObjectsResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_QueryObjectsResponse(struct zx_ctx* c, struct zx_ps_QueryObjectsResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_QueryObjectsResponse) */

int zx_WALK_WO_ps_QueryObjectsResponse(struct zx_ctx* c, struct zx_ps_QueryObjectsResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_RemoveCollectionRequest
#define EL_STRUCT zx_ps_RemoveCollectionRequest_s
#define EL_NS     ps
#define EL_TAG    RemoveCollectionRequest

/* FUNC(zx_FREE_ps_RemoveCollectionRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_RemoveCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveCollectionRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->TargetObjectID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_RemoveCollectionRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_RemoveCollectionRequest_s* zx_NEW_ps_RemoveCollectionRequest(struct zx_ctx* c)
{
  struct zx_ps_RemoveCollectionRequest_s* x = ZX_ZALLOC(c, struct zx_ps_RemoveCollectionRequest_s);
  x->gg.g.tok = zx_ps_RemoveCollectionRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_RemoveCollectionRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_RemoveCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveCollectionRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->TargetObjectID);

}

/* FUNC(zx_DEEP_CLONE_ps_RemoveCollectionRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_RemoveCollectionRequest_s* zx_DEEP_CLONE_ps_RemoveCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveCollectionRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_RemoveCollectionRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_RemoveCollectionRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->TargetObjectID = zx_deep_clone_simple_elems(c,x->TargetObjectID, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_ps_RemoveCollectionRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_RemoveCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveCollectionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->TargetObjectID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_RemoveCollectionRequest) */

int zx_WALK_WO_ps_RemoveCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveCollectionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_RemoveCollectionResponse
#define EL_STRUCT zx_ps_RemoveCollectionResponse_s
#define EL_NS     ps
#define EL_TAG    RemoveCollectionResponse

/* FUNC(zx_FREE_ps_RemoveCollectionResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_RemoveCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveCollectionResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_RemoveCollectionResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_RemoveCollectionResponse_s* zx_NEW_ps_RemoveCollectionResponse(struct zx_ctx* c)
{
  struct zx_ps_RemoveCollectionResponse_s* x = ZX_ZALLOC(c, struct zx_ps_RemoveCollectionResponse_s);
  x->gg.g.tok = zx_ps_RemoveCollectionResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_RemoveCollectionResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_RemoveCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveCollectionResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_RemoveCollectionResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_RemoveCollectionResponse_s* zx_DEEP_CLONE_ps_RemoveCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveCollectionResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_RemoveCollectionResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_RemoveCollectionResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_RemoveCollectionResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_RemoveCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveCollectionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_RemoveCollectionResponse) */

int zx_WALK_WO_ps_RemoveCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveCollectionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_RemoveEntityRequest
#define EL_STRUCT zx_ps_RemoveEntityRequest_s
#define EL_NS     ps
#define EL_TAG    RemoveEntityRequest

/* FUNC(zx_FREE_ps_RemoveEntityRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_RemoveEntityRequest(struct zx_ctx* c, struct zx_ps_RemoveEntityRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->TargetObjectID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_RemoveEntityRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_RemoveEntityRequest_s* zx_NEW_ps_RemoveEntityRequest(struct zx_ctx* c)
{
  struct zx_ps_RemoveEntityRequest_s* x = ZX_ZALLOC(c, struct zx_ps_RemoveEntityRequest_s);
  x->gg.g.tok = zx_ps_RemoveEntityRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_RemoveEntityRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_RemoveEntityRequest(struct zx_ctx* c, struct zx_ps_RemoveEntityRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->TargetObjectID);

}

/* FUNC(zx_DEEP_CLONE_ps_RemoveEntityRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_RemoveEntityRequest_s* zx_DEEP_CLONE_ps_RemoveEntityRequest(struct zx_ctx* c, struct zx_ps_RemoveEntityRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_RemoveEntityRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_RemoveEntityRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->TargetObjectID = zx_deep_clone_simple_elems(c,x->TargetObjectID, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_ps_RemoveEntityRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_RemoveEntityRequest(struct zx_ctx* c, struct zx_ps_RemoveEntityRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->TargetObjectID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_RemoveEntityRequest) */

int zx_WALK_WO_ps_RemoveEntityRequest(struct zx_ctx* c, struct zx_ps_RemoveEntityRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_RemoveEntityResponse
#define EL_STRUCT zx_ps_RemoveEntityResponse_s
#define EL_NS     ps
#define EL_TAG    RemoveEntityResponse

/* FUNC(zx_FREE_ps_RemoveEntityResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_RemoveEntityResponse(struct zx_ctx* c, struct zx_ps_RemoveEntityResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_RemoveEntityResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_RemoveEntityResponse_s* zx_NEW_ps_RemoveEntityResponse(struct zx_ctx* c)
{
  struct zx_ps_RemoveEntityResponse_s* x = ZX_ZALLOC(c, struct zx_ps_RemoveEntityResponse_s);
  x->gg.g.tok = zx_ps_RemoveEntityResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_RemoveEntityResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_RemoveEntityResponse(struct zx_ctx* c, struct zx_ps_RemoveEntityResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_RemoveEntityResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_RemoveEntityResponse_s* zx_DEEP_CLONE_ps_RemoveEntityResponse(struct zx_ctx* c, struct zx_ps_RemoveEntityResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_RemoveEntityResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_RemoveEntityResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_RemoveEntityResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_RemoveEntityResponse(struct zx_ctx* c, struct zx_ps_RemoveEntityResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_RemoveEntityResponse) */

int zx_WALK_WO_ps_RemoveEntityResponse(struct zx_ctx* c, struct zx_ps_RemoveEntityResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_RemoveFromCollectionRequest
#define EL_STRUCT zx_ps_RemoveFromCollectionRequest_s
#define EL_NS     ps
#define EL_TAG    RemoveFromCollectionRequest

/* FUNC(zx_FREE_ps_RemoveFromCollectionRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_RemoveFromCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->TargetObjectID, free_strs);
  zx_free_simple_elems(c, x->ObjectID, free_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_RemoveFromCollectionRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_RemoveFromCollectionRequest_s* zx_NEW_ps_RemoveFromCollectionRequest(struct zx_ctx* c)
{
  struct zx_ps_RemoveFromCollectionRequest_s* x = ZX_ZALLOC(c, struct zx_ps_RemoveFromCollectionRequest_s);
  x->gg.g.tok = zx_ps_RemoveFromCollectionRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_RemoveFromCollectionRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_RemoveFromCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->TargetObjectID);
  zx_dup_strs_simple_elems(c, x->ObjectID);
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_RemoveFromCollectionRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_RemoveFromCollectionRequest_s* zx_DEEP_CLONE_ps_RemoveFromCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_RemoveFromCollectionRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_RemoveFromCollectionRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->TargetObjectID = zx_deep_clone_simple_elems(c,x->TargetObjectID, dup_strs);
  x->ObjectID = zx_deep_clone_simple_elems(c,x->ObjectID, dup_strs);
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_RemoveFromCollectionRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_RemoveFromCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->TargetObjectID, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ObjectID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_RemoveFromCollectionRequest) */

int zx_WALK_WO_ps_RemoveFromCollectionRequest(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_RemoveFromCollectionResponse
#define EL_STRUCT zx_ps_RemoveFromCollectionResponse_s
#define EL_NS     ps
#define EL_TAG    RemoveFromCollectionResponse

/* FUNC(zx_FREE_ps_RemoveFromCollectionResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_RemoveFromCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_RemoveFromCollectionResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_RemoveFromCollectionResponse_s* zx_NEW_ps_RemoveFromCollectionResponse(struct zx_ctx* c)
{
  struct zx_ps_RemoveFromCollectionResponse_s* x = ZX_ZALLOC(c, struct zx_ps_RemoveFromCollectionResponse_s);
  x->gg.g.tok = zx_ps_RemoveFromCollectionResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_RemoveFromCollectionResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_RemoveFromCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_RemoveFromCollectionResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_RemoveFromCollectionResponse_s* zx_DEEP_CLONE_ps_RemoveFromCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_RemoveFromCollectionResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_RemoveFromCollectionResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_RemoveFromCollectionResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_RemoveFromCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_RemoveFromCollectionResponse) */

int zx_WALK_WO_ps_RemoveFromCollectionResponse(struct zx_ctx* c, struct zx_ps_RemoveFromCollectionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_ResolveIdentifierRequest
#define EL_STRUCT zx_ps_ResolveIdentifierRequest_s
#define EL_NS     ps
#define EL_TAG    ResolveIdentifierRequest

/* FUNC(zx_FREE_ps_ResolveIdentifierRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_ResolveIdentifierRequest(struct zx_ctx* c, struct zx_ps_ResolveIdentifierRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_ps_ResolveInput_s* e;
      struct zx_ps_ResolveInput_s* en;
      for (e = x->ResolveInput; e; e = en) {
	  en = (struct zx_ps_ResolveInput_s*)e->gg.g.n;
	  zx_FREE_ps_ResolveInput(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_ResolveIdentifierRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_ResolveIdentifierRequest_s* zx_NEW_ps_ResolveIdentifierRequest(struct zx_ctx* c)
{
  struct zx_ps_ResolveIdentifierRequest_s* x = ZX_ZALLOC(c, struct zx_ps_ResolveIdentifierRequest_s);
  x->gg.g.tok = zx_ps_ResolveIdentifierRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_ResolveIdentifierRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_ResolveIdentifierRequest(struct zx_ctx* c, struct zx_ps_ResolveIdentifierRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_ps_ResolveInput_s* e;
      for (e = x->ResolveInput; e; e = (struct zx_ps_ResolveInput_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_ResolveInput(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_ResolveIdentifierRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_ResolveIdentifierRequest_s* zx_DEEP_CLONE_ps_ResolveIdentifierRequest(struct zx_ctx* c, struct zx_ps_ResolveIdentifierRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_ResolveIdentifierRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_ResolveIdentifierRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_ps_ResolveInput_s* e;
      struct zx_ps_ResolveInput_s* en;
      struct zx_ps_ResolveInput_s* enn;
      for (enn = 0, e = x->ResolveInput; e; e = (struct zx_ps_ResolveInput_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_ResolveInput(c, e, dup_strs);
	  if (!enn)
	      x->ResolveInput = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_ResolveIdentifierRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_ResolveIdentifierRequest(struct zx_ctx* c, struct zx_ps_ResolveIdentifierRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ps_ResolveInput_s* e;
      for (e = x->ResolveInput; e; e = (struct zx_ps_ResolveInput_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_ResolveInput(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_ResolveIdentifierRequest) */

int zx_WALK_WO_ps_ResolveIdentifierRequest(struct zx_ctx* c, struct zx_ps_ResolveIdentifierRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_ResolveIdentifierResponse
#define EL_STRUCT zx_ps_ResolveIdentifierResponse_s
#define EL_NS     ps
#define EL_TAG    ResolveIdentifierResponse

/* FUNC(zx_FREE_ps_ResolveIdentifierResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_ResolveIdentifierResponse(struct zx_ctx* c, struct zx_ps_ResolveIdentifierResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zx_ps_ResolveOutput_s* e;
      struct zx_ps_ResolveOutput_s* en;
      for (e = x->ResolveOutput; e; e = en) {
	  en = (struct zx_ps_ResolveOutput_s*)e->gg.g.n;
	  zx_FREE_ps_ResolveOutput(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_ResolveIdentifierResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_ResolveIdentifierResponse_s* zx_NEW_ps_ResolveIdentifierResponse(struct zx_ctx* c)
{
  struct zx_ps_ResolveIdentifierResponse_s* x = ZX_ZALLOC(c, struct zx_ps_ResolveIdentifierResponse_s);
  x->gg.g.tok = zx_ps_ResolveIdentifierResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_ResolveIdentifierResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_ResolveIdentifierResponse(struct zx_ctx* c, struct zx_ps_ResolveIdentifierResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zx_ps_ResolveOutput_s* e;
      for (e = x->ResolveOutput; e; e = (struct zx_ps_ResolveOutput_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_ResolveOutput(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_ResolveIdentifierResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_ResolveIdentifierResponse_s* zx_DEEP_CLONE_ps_ResolveIdentifierResponse(struct zx_ctx* c, struct zx_ps_ResolveIdentifierResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_ResolveIdentifierResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_ResolveIdentifierResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_ResolveOutput_s* e;
      struct zx_ps_ResolveOutput_s* en;
      struct zx_ps_ResolveOutput_s* enn;
      for (enn = 0, e = x->ResolveOutput; e; e = (struct zx_ps_ResolveOutput_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_ResolveOutput(c, e, dup_strs);
	  if (!enn)
	      x->ResolveOutput = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_ResolveIdentifierResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_ResolveIdentifierResponse(struct zx_ctx* c, struct zx_ps_ResolveIdentifierResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_ResolveOutput_s* e;
      for (e = x->ResolveOutput; e; e = (struct zx_ps_ResolveOutput_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_ResolveOutput(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_ResolveIdentifierResponse) */

int zx_WALK_WO_ps_ResolveIdentifierResponse(struct zx_ctx* c, struct zx_ps_ResolveIdentifierResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_ResolveInput
#define EL_STRUCT zx_ps_ResolveInput_s
#define EL_NS     ps
#define EL_TAG    ResolveInput

/* FUNC(zx_FREE_ps_ResolveInput) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_ResolveInput(struct zx_ctx* c, struct zx_ps_ResolveInput_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->reqID, free_strs);

  {
      struct zx_sec_TokenPolicy_s* e;
      struct zx_sec_TokenPolicy_s* en;
      for (e = x->TokenPolicy; e; e = en) {
	  en = (struct zx_sec_TokenPolicy_s*)e->gg.g.n;
	  zx_FREE_sec_TokenPolicy(c, e, free_strs);
      }
  }
  {
      struct zx_sec_Token_s* e;
      struct zx_sec_Token_s* en;
      for (e = x->Token; e; e = en) {
	  en = (struct zx_sec_Token_s*)e->gg.g.n;
	  zx_FREE_sec_Token(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->TargetObjectID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_ResolveInput) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_ResolveInput_s* zx_NEW_ps_ResolveInput(struct zx_ctx* c)
{
  struct zx_ps_ResolveInput_s* x = ZX_ZALLOC(c, struct zx_ps_ResolveInput_s);
  x->gg.g.tok = zx_ps_ResolveInput_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_ResolveInput) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_ResolveInput(struct zx_ctx* c, struct zx_ps_ResolveInput_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->reqID);

  {
      struct zx_sec_TokenPolicy_s* e;
      for (e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n)
	  zx_DUP_STRS_sec_TokenPolicy(c, e);
  }
  {
      struct zx_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n)
	  zx_DUP_STRS_sec_Token(c, e);
  }
  zx_dup_strs_simple_elems(c, x->TargetObjectID);

}

/* FUNC(zx_DEEP_CLONE_ps_ResolveInput) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_ResolveInput_s* zx_DEEP_CLONE_ps_ResolveInput(struct zx_ctx* c, struct zx_ps_ResolveInput_s* x, int dup_strs)
{
  x = (struct zx_ps_ResolveInput_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_ResolveInput_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->reqID = zx_clone_attr(c, x->reqID);

  {
      struct zx_sec_TokenPolicy_s* e;
      struct zx_sec_TokenPolicy_s* en;
      struct zx_sec_TokenPolicy_s* enn;
      for (enn = 0, e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sec_TokenPolicy(c, e, dup_strs);
	  if (!enn)
	      x->TokenPolicy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sec_Token_s* e;
      struct zx_sec_Token_s* en;
      struct zx_sec_Token_s* enn;
      for (enn = 0, e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sec_Token(c, e, dup_strs);
	  if (!enn)
	      x->Token = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->TargetObjectID = zx_deep_clone_simple_elems(c,x->TargetObjectID, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_ps_ResolveInput) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_ResolveInput(struct zx_ctx* c, struct zx_ps_ResolveInput_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sec_TokenPolicy_s* e;
      for (e = x->TokenPolicy; e; e = (struct zx_sec_TokenPolicy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sec_TokenPolicy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sec_Token(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->TargetObjectID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_ResolveInput) */

int zx_WALK_WO_ps_ResolveInput(struct zx_ctx* c, struct zx_ps_ResolveInput_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_ResolveOutput
#define EL_STRUCT zx_ps_ResolveOutput_s
#define EL_NS     ps
#define EL_TAG    ResolveOutput

/* FUNC(zx_FREE_ps_ResolveOutput) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_ResolveOutput(struct zx_ctx* c, struct zx_ps_ResolveOutput_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->reqRef, free_strs);

  {
      struct zx_sec_Token_s* e;
      struct zx_sec_Token_s* en;
      for (e = x->Token; e; e = en) {
	  en = (struct zx_sec_Token_s*)e->gg.g.n;
	  zx_FREE_sec_Token(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_ResolveOutput) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_ResolveOutput_s* zx_NEW_ps_ResolveOutput(struct zx_ctx* c)
{
  struct zx_ps_ResolveOutput_s* x = ZX_ZALLOC(c, struct zx_ps_ResolveOutput_s);
  x->gg.g.tok = zx_ps_ResolveOutput_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_ResolveOutput) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_ResolveOutput(struct zx_ctx* c, struct zx_ps_ResolveOutput_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->reqRef);

  {
      struct zx_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n)
	  zx_DUP_STRS_sec_Token(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_ResolveOutput) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_ResolveOutput_s* zx_DEEP_CLONE_ps_ResolveOutput(struct zx_ctx* c, struct zx_ps_ResolveOutput_s* x, int dup_strs)
{
  x = (struct zx_ps_ResolveOutput_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_ResolveOutput_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->reqRef = zx_clone_attr(c, x->reqRef);

  {
      struct zx_sec_Token_s* e;
      struct zx_sec_Token_s* en;
      struct zx_sec_Token_s* enn;
      for (enn = 0, e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sec_Token(c, e, dup_strs);
	  if (!enn)
	      x->Token = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_ResolveOutput) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_ResolveOutput(struct zx_ctx* c, struct zx_ps_ResolveOutput_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sec_Token(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_ResolveOutput) */

int zx_WALK_WO_ps_ResolveOutput(struct zx_ctx* c, struct zx_ps_ResolveOutput_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_SetObjectInfoRequest
#define EL_STRUCT zx_ps_SetObjectInfoRequest_s
#define EL_NS     ps
#define EL_TAG    SetObjectInfoRequest

/* FUNC(zx_FREE_ps_SetObjectInfoRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_SetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_SetObjectInfoRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ps_Object_s*)e->gg.g.n;
	  zx_FREE_ps_Object(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_SetObjectInfoRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_SetObjectInfoRequest_s* zx_NEW_ps_SetObjectInfoRequest(struct zx_ctx* c)
{
  struct zx_ps_SetObjectInfoRequest_s* x = ZX_ZALLOC(c, struct zx_ps_SetObjectInfoRequest_s);
  x->gg.g.tok = zx_ps_SetObjectInfoRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_SetObjectInfoRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_SetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_SetObjectInfoRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Object(c, e);
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_SetObjectInfoRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_SetObjectInfoRequest_s* zx_DEEP_CLONE_ps_SetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_SetObjectInfoRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_SetObjectInfoRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_SetObjectInfoRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_ps_Object_s* e;
      struct zx_ps_Object_s* en;
      struct zx_ps_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_SetObjectInfoRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_SetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_SetObjectInfoRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ps_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ps_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_SetObjectInfoRequest) */

int zx_WALK_WO_ps_SetObjectInfoRequest(struct zx_ctx* c, struct zx_ps_SetObjectInfoRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_SetObjectInfoResponse
#define EL_STRUCT zx_ps_SetObjectInfoResponse_s
#define EL_NS     ps
#define EL_TAG    SetObjectInfoResponse

/* FUNC(zx_FREE_ps_SetObjectInfoResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_SetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_SetObjectInfoResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_SetObjectInfoResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_SetObjectInfoResponse_s* zx_NEW_ps_SetObjectInfoResponse(struct zx_ctx* c)
{
  struct zx_ps_SetObjectInfoResponse_s* x = ZX_ZALLOC(c, struct zx_ps_SetObjectInfoResponse_s);
  x->gg.g.tok = zx_ps_SetObjectInfoResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_SetObjectInfoResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_SetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_SetObjectInfoResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_SetObjectInfoResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_SetObjectInfoResponse_s* zx_DEEP_CLONE_ps_SetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_SetObjectInfoResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_SetObjectInfoResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_SetObjectInfoResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_SetObjectInfoResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_SetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_SetObjectInfoResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_SetObjectInfoResponse) */

int zx_WALK_WO_ps_SetObjectInfoResponse(struct zx_ctx* c, struct zx_ps_SetObjectInfoResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_Subscription
#define EL_STRUCT zx_ps_Subscription_s
#define EL_NS     ps
#define EL_TAG    Subscription

/* FUNC(zx_FREE_ps_Subscription) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_Subscription(struct zx_ctx* c, struct zx_ps_Subscription_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->adminNotifyToRef, free_strs);
  zx_free_attr(c, x->expires, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->includeData, free_strs);
  zx_free_attr(c, x->notifyToRef, free_strs);
  zx_free_attr(c, x->starts, free_strs);
  zx_free_attr(c, x->subscriptionID, free_strs);

  {
      struct zx_subs_RefItem_s* e;
      struct zx_subs_RefItem_s* en;
      for (e = x->RefItem; e; e = en) {
	  en = (struct zx_subs_RefItem_s*)e->gg.g.n;
	  zx_FREE_subs_RefItem(c, e, free_strs);
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zx_lu_Extension_s*)e->gg.g.n;
	  zx_FREE_lu_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_Subscription) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_Subscription_s* zx_NEW_ps_Subscription(struct zx_ctx* c)
{
  struct zx_ps_Subscription_s* x = ZX_ZALLOC(c, struct zx_ps_Subscription_s);
  x->gg.g.tok = zx_ps_Subscription_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_Subscription) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_Subscription(struct zx_ctx* c, struct zx_ps_Subscription_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->adminNotifyToRef);
  zx_dup_attr(c, x->expires);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->includeData);
  zx_dup_attr(c, x->notifyToRef);
  zx_dup_attr(c, x->starts);
  zx_dup_attr(c, x->subscriptionID);

  {
      struct zx_subs_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n)
	  zx_DUP_STRS_subs_RefItem(c, e);
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Extension(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_Subscription) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_Subscription_s* zx_DEEP_CLONE_ps_Subscription(struct zx_ctx* c, struct zx_ps_Subscription_s* x, int dup_strs)
{
  x = (struct zx_ps_Subscription_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_Subscription_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->adminNotifyToRef = zx_clone_attr(c, x->adminNotifyToRef);
  x->expires = zx_clone_attr(c, x->expires);
  x->id = zx_clone_attr(c, x->id);
  x->includeData = zx_clone_attr(c, x->includeData);
  x->notifyToRef = zx_clone_attr(c, x->notifyToRef);
  x->starts = zx_clone_attr(c, x->starts);
  x->subscriptionID = zx_clone_attr(c, x->subscriptionID);

  {
      struct zx_subs_RefItem_s* e;
      struct zx_subs_RefItem_s* en;
      struct zx_subs_RefItem_s* enn;
      for (enn = 0, e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_subs_RefItem(c, e, dup_strs);
	  if (!enn)
	      x->RefItem = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      struct zx_lu_Extension_s* en;
      struct zx_lu_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_Subscription) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_Subscription(struct zx_ctx* c, struct zx_ps_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_subs_RefItem_s* e;
      for (e = x->RefItem; e; e = (struct zx_subs_RefItem_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_subs_RefItem(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_lu_Extension_s* e;
      for (e = x->Extension; e; e = (struct zx_lu_Extension_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_Subscription) */

int zx_WALK_WO_ps_Subscription(struct zx_ctx* c, struct zx_ps_Subscription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_Tag
#define EL_STRUCT zx_ps_Tag_s
#define EL_NS     ps
#define EL_TAG    Tag

/* FUNC(zx_FREE_ps_Tag) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_Tag(struct zx_ctx* c, struct zx_ps_Tag_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Ref, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_Tag) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_Tag_s* zx_NEW_ps_Tag(struct zx_ctx* c)
{
  struct zx_ps_Tag_s* x = ZX_ZALLOC(c, struct zx_ps_Tag_s);
  x->gg.g.tok = zx_ps_Tag_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_Tag) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_Tag(struct zx_ctx* c, struct zx_ps_Tag_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Ref);


}

/* FUNC(zx_DEEP_CLONE_ps_Tag) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_Tag_s* zx_DEEP_CLONE_ps_Tag(struct zx_ctx* c, struct zx_ps_Tag_s* x, int dup_strs)
{
  x = (struct zx_ps_Tag_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_Tag_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Ref = zx_clone_attr(c, x->Ref);


  return x;
}

/* FUNC(zx_WALK_SO_ps_Tag) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_Tag(struct zx_ctx* c, struct zx_ps_Tag_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ps_Tag) */

int zx_WALK_WO_ps_Tag(struct zx_ctx* c, struct zx_ps_Tag_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_TestMembershipRequest
#define EL_STRUCT zx_ps_TestMembershipRequest_s
#define EL_NS     ps
#define EL_TAG    TestMembershipRequest

/* FUNC(zx_FREE_ps_TestMembershipRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_TestMembershipRequest(struct zx_ctx* c, struct zx_ps_TestMembershipRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->TargetObjectID, free_strs);
  {
      struct zx_sec_Token_s* e;
      struct zx_sec_Token_s* en;
      for (e = x->Token; e; e = en) {
	  en = (struct zx_sec_Token_s*)e->gg.g.n;
	  zx_FREE_sec_Token(c, e, free_strs);
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      for (e = x->Subscription; e; e = en) {
	  en = (struct zx_ps_Subscription_s*)e->gg.g.n;
	  zx_FREE_ps_Subscription(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_TestMembershipRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_TestMembershipRequest_s* zx_NEW_ps_TestMembershipRequest(struct zx_ctx* c)
{
  struct zx_ps_TestMembershipRequest_s* x = ZX_ZALLOC(c, struct zx_ps_TestMembershipRequest_s);
  x->gg.g.tok = zx_ps_TestMembershipRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_TestMembershipRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_TestMembershipRequest(struct zx_ctx* c, struct zx_ps_TestMembershipRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->TargetObjectID);
  {
      struct zx_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n)
	  zx_DUP_STRS_sec_Token(c, e);
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n)
	  zx_DUP_STRS_ps_Subscription(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ps_TestMembershipRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_TestMembershipRequest_s* zx_DEEP_CLONE_ps_TestMembershipRequest(struct zx_ctx* c, struct zx_ps_TestMembershipRequest_s* x, int dup_strs)
{
  x = (struct zx_ps_TestMembershipRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_TestMembershipRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->TargetObjectID = zx_deep_clone_simple_elems(c,x->TargetObjectID, dup_strs);
  {
      struct zx_sec_Token_s* e;
      struct zx_sec_Token_s* en;
      struct zx_sec_Token_s* enn;
      for (enn = 0, e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sec_Token(c, e, dup_strs);
	  if (!enn)
	      x->Token = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      struct zx_ps_Subscription_s* en;
      struct zx_ps_Subscription_s* enn;
      for (enn = 0, e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ps_Subscription(c, e, dup_strs);
	  if (!enn)
	      x->Subscription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_ps_TestMembershipRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_TestMembershipRequest(struct zx_ctx* c, struct zx_ps_TestMembershipRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->TargetObjectID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zx_sec_Token_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sec_Token(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ps_Subscription_s* e;
      for (e = x->Subscription; e; e = (struct zx_ps_Subscription_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ps_Subscription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_TestMembershipRequest) */

int zx_WALK_WO_ps_TestMembershipRequest(struct zx_ctx* c, struct zx_ps_TestMembershipRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ps_TestMembershipResponse
#define EL_STRUCT zx_ps_TestMembershipResponse_s
#define EL_NS     ps
#define EL_TAG    TestMembershipResponse

/* FUNC(zx_FREE_ps_TestMembershipResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_ps_TestMembershipResponse(struct zx_ctx* c, struct zx_ps_TestMembershipResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->TimeStamp, free_strs);
  zx_free_attr(c, x->id, free_strs);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_lu_Status_s*)e->gg.g.n;
	  zx_FREE_lu_Status(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Result, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ps_TestMembershipResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_ps_TestMembershipResponse_s* zx_NEW_ps_TestMembershipResponse(struct zx_ctx* c)
{
  struct zx_ps_TestMembershipResponse_s* x = ZX_ZALLOC(c, struct zx_ps_TestMembershipResponse_s);
  x->gg.g.tok = zx_ps_TestMembershipResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_ps_TestMembershipResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_ps_TestMembershipResponse(struct zx_ctx* c, struct zx_ps_TestMembershipResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->TimeStamp);
  zx_dup_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_lu_Status(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Result);

}

/* FUNC(zx_DEEP_CLONE_ps_TestMembershipResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_ps_TestMembershipResponse_s* zx_DEEP_CLONE_ps_TestMembershipResponse(struct zx_ctx* c, struct zx_ps_TestMembershipResponse_s* x, int dup_strs)
{
  x = (struct zx_ps_TestMembershipResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ps_TestMembershipResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->TimeStamp = zx_clone_attr(c, x->TimeStamp);
  x->id = zx_clone_attr(c, x->id);

  {
      struct zx_lu_Status_s* e;
      struct zx_lu_Status_s* en;
      struct zx_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Result = zx_deep_clone_simple_elems(c,x->Result, dup_strs);

  return x;
}

/* FUNC(zx_WALK_SO_ps_TestMembershipResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ps_TestMembershipResponse(struct zx_ctx* c, struct zx_ps_TestMembershipResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Result, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ps_TestMembershipResponse) */

int zx_WALK_WO_ps_TestMembershipResponse(struct zx_ctx* c, struct zx_ps_TestMembershipResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-ps-aux.c */
