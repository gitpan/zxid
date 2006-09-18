/* c/wsf-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/wsf-const.h"
#include "c/wsf-data.h"



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

#define EL_NAME   a_Action
#define EL_STRUCT zxwsf_a_Action_s
#define EL_NS     a
#define EL_TAG    Action

/* FUNC(zxwsf_DUP_STRS_a_Action) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_Action) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_Action_s* zxwsf_DEEP_CLONE_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x, int dup_strs)
{
  x = (struct zxwsf_a_Action_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_Action_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_Action) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_Action) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_Action_s* zxwsf_NEW_a_Action(struct zx_ctx* c)
{
  struct zxwsf_a_Action_s* x = ZX_ZALLOC(c, struct zxwsf_a_Action_s);
  x->gg.g.tok = zxwsf_a_Action_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_Action) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_Action) */

int zxwsf_WALK_WO_a_Action(struct zx_ctx* c, struct zxwsf_a_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_Address
#define EL_STRUCT zxwsf_a_Address_s
#define EL_NS     a
#define EL_TAG    Address

/* FUNC(zxwsf_DUP_STRS_a_Address) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_Address) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_Address_s* zxwsf_DEEP_CLONE_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x, int dup_strs)
{
  x = (struct zxwsf_a_Address_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_Address_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_Address) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_Address) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_Address_s* zxwsf_NEW_a_Address(struct zx_ctx* c)
{
  struct zxwsf_a_Address_s* x = ZX_ZALLOC(c, struct zxwsf_a_Address_s);
  x->gg.g.tok = zxwsf_a_Address_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_Address) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_Address) */

int zxwsf_WALK_WO_a_Address(struct zx_ctx* c, struct zxwsf_a_Address_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_EndpointReference
#define EL_STRUCT zxwsf_a_EndpointReference_s
#define EL_NS     a
#define EL_TAG    EndpointReference

/* FUNC(zxwsf_DUP_STRS_a_EndpointReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Address(c, e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReferenceParameters(c, e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Metadata(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_a_EndpointReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_EndpointReference_s* zxwsf_DEEP_CLONE_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x, int dup_strs)
{
  x = (struct zxwsf_a_EndpointReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_EndpointReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      struct zxwsf_a_Address_s* enn;
      for (enn = 0, e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Address(c, e, dup_strs);
	  if (!enn)
	      x->Address = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      struct zxwsf_a_ReferenceParameters_s* enn;
      for (enn = 0, e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReferenceParameters(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceParameters = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      struct zxwsf_a_Metadata_s* enn;
      for (enn = 0, e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Metadata(c, e, dup_strs);
	  if (!enn)
	      x->Metadata = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_a_EndpointReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      for (e = x->Address; e; e = en) {
	  en = (struct zxwsf_a_Address_s*)e->gg.g.n;
	  zxwsf_FREE_a_Address(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      for (e = x->ReferenceParameters; e; e = en) {
	  en = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReferenceParameters(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      for (e = x->Metadata; e; e = en) {
	  en = (struct zxwsf_a_Metadata_s*)e->gg.g.n;
	  zxwsf_FREE_a_Metadata(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_EndpointReference) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_EndpointReference_s* zxwsf_NEW_a_EndpointReference(struct zx_ctx* c)
{
  struct zxwsf_a_EndpointReference_s* x = ZX_ZALLOC(c, struct zxwsf_a_EndpointReference_s);
  x->gg.g.tok = zxwsf_a_EndpointReference_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_EndpointReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Address(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReferenceParameters(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Metadata(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_a_EndpointReference) */

int zxwsf_WALK_WO_a_EndpointReference(struct zx_ctx* c, struct zxwsf_a_EndpointReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_FaultTo
#define EL_STRUCT zxwsf_a_FaultTo_s
#define EL_NS     a
#define EL_TAG    FaultTo

/* FUNC(zxwsf_DUP_STRS_a_FaultTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Address(c, e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReferenceParameters(c, e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Metadata(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_a_FaultTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_FaultTo_s* zxwsf_DEEP_CLONE_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x, int dup_strs)
{
  x = (struct zxwsf_a_FaultTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_FaultTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      struct zxwsf_a_Address_s* enn;
      for (enn = 0, e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Address(c, e, dup_strs);
	  if (!enn)
	      x->Address = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      struct zxwsf_a_ReferenceParameters_s* enn;
      for (enn = 0, e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReferenceParameters(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceParameters = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      struct zxwsf_a_Metadata_s* enn;
      for (enn = 0, e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Metadata(c, e, dup_strs);
	  if (!enn)
	      x->Metadata = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_a_FaultTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      for (e = x->Address; e; e = en) {
	  en = (struct zxwsf_a_Address_s*)e->gg.g.n;
	  zxwsf_FREE_a_Address(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      for (e = x->ReferenceParameters; e; e = en) {
	  en = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReferenceParameters(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      for (e = x->Metadata; e; e = en) {
	  en = (struct zxwsf_a_Metadata_s*)e->gg.g.n;
	  zxwsf_FREE_a_Metadata(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_FaultTo) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_FaultTo_s* zxwsf_NEW_a_FaultTo(struct zx_ctx* c)
{
  struct zxwsf_a_FaultTo_s* x = ZX_ZALLOC(c, struct zxwsf_a_FaultTo_s);
  x->gg.g.tok = zxwsf_a_FaultTo_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_FaultTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Address(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReferenceParameters(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Metadata(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_a_FaultTo) */

int zxwsf_WALK_WO_a_FaultTo(struct zx_ctx* c, struct zxwsf_a_FaultTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_From
#define EL_STRUCT zxwsf_a_From_s
#define EL_NS     a
#define EL_TAG    From

/* FUNC(zxwsf_DUP_STRS_a_From) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Address(c, e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReferenceParameters(c, e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Metadata(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_a_From) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_From_s* zxwsf_DEEP_CLONE_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x, int dup_strs)
{
  x = (struct zxwsf_a_From_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_From_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      struct zxwsf_a_Address_s* enn;
      for (enn = 0, e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Address(c, e, dup_strs);
	  if (!enn)
	      x->Address = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      struct zxwsf_a_ReferenceParameters_s* enn;
      for (enn = 0, e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReferenceParameters(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceParameters = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      struct zxwsf_a_Metadata_s* enn;
      for (enn = 0, e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Metadata(c, e, dup_strs);
	  if (!enn)
	      x->Metadata = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_a_From) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      for (e = x->Address; e; e = en) {
	  en = (struct zxwsf_a_Address_s*)e->gg.g.n;
	  zxwsf_FREE_a_Address(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      for (e = x->ReferenceParameters; e; e = en) {
	  en = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReferenceParameters(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      for (e = x->Metadata; e; e = en) {
	  en = (struct zxwsf_a_Metadata_s*)e->gg.g.n;
	  zxwsf_FREE_a_Metadata(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_From) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_From_s* zxwsf_NEW_a_From(struct zx_ctx* c)
{
  struct zxwsf_a_From_s* x = ZX_ZALLOC(c, struct zxwsf_a_From_s);
  x->gg.g.tok = zxwsf_a_From_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_From) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Address(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReferenceParameters(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Metadata(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_a_From) */

int zxwsf_WALK_WO_a_From(struct zx_ctx* c, struct zxwsf_a_From_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_MessageID
#define EL_STRUCT zxwsf_a_MessageID_s
#define EL_NS     a
#define EL_TAG    MessageID

/* FUNC(zxwsf_DUP_STRS_a_MessageID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_MessageID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_MessageID_s* zxwsf_DEEP_CLONE_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x, int dup_strs)
{
  x = (struct zxwsf_a_MessageID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_MessageID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_MessageID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_MessageID) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_MessageID_s* zxwsf_NEW_a_MessageID(struct zx_ctx* c)
{
  struct zxwsf_a_MessageID_s* x = ZX_ZALLOC(c, struct zxwsf_a_MessageID_s);
  x->gg.g.tok = zxwsf_a_MessageID_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_MessageID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_MessageID) */

int zxwsf_WALK_WO_a_MessageID(struct zx_ctx* c, struct zxwsf_a_MessageID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_Metadata
#define EL_STRUCT zxwsf_a_Metadata_s
#define EL_NS     a
#define EL_TAG    Metadata

/* FUNC(zxwsf_DUP_STRS_a_Metadata) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_Metadata) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_Metadata_s* zxwsf_DEEP_CLONE_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x, int dup_strs)
{
  x = (struct zxwsf_a_Metadata_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_Metadata_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_Metadata) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_Metadata) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_Metadata_s* zxwsf_NEW_a_Metadata(struct zx_ctx* c)
{
  struct zxwsf_a_Metadata_s* x = ZX_ZALLOC(c, struct zxwsf_a_Metadata_s);
  x->gg.g.tok = zxwsf_a_Metadata_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_Metadata) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_Metadata) */

int zxwsf_WALK_WO_a_Metadata(struct zx_ctx* c, struct zxwsf_a_Metadata_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ProblemAction
#define EL_STRUCT zxwsf_a_ProblemAction_s
#define EL_NS     a
#define EL_TAG    ProblemAction

/* FUNC(zxwsf_DUP_STRS_a_ProblemAction) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Action(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SoapAction);

}

/* FUNC(zxwsf_DEEP_CLONE_a_ProblemAction) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_ProblemAction_s* zxwsf_DEEP_CLONE_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x, int dup_strs)
{
  x = (struct zxwsf_a_ProblemAction_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_ProblemAction_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Action_s* e;
      struct zxwsf_a_Action_s* en;
      struct zxwsf_a_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SoapAction = zx_deep_clone_simple_elems(c,x->SoapAction, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_a_ProblemAction) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Action_s* e;
      struct zxwsf_a_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zxwsf_a_Action_s*)e->gg.g.n;
	  zxwsf_FREE_a_Action(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SoapAction, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_ProblemAction) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_ProblemAction_s* zxwsf_NEW_a_ProblemAction(struct zx_ctx* c)
{
  struct zxwsf_a_ProblemAction_s* x = ZX_ZALLOC(c, struct zxwsf_a_ProblemAction_s);
  x->gg.g.tok = zxwsf_a_ProblemAction_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_ProblemAction) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SoapAction, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_a_ProblemAction) */

int zxwsf_WALK_WO_a_ProblemAction(struct zx_ctx* c, struct zxwsf_a_ProblemAction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ProblemHeader
#define EL_STRUCT zxwsf_a_ProblemHeader_s
#define EL_NS     a
#define EL_TAG    ProblemHeader

/* FUNC(zxwsf_DUP_STRS_a_ProblemHeader) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_ProblemHeader) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_ProblemHeader_s* zxwsf_DEEP_CLONE_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x, int dup_strs)
{
  x = (struct zxwsf_a_ProblemHeader_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_ProblemHeader_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_ProblemHeader) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_ProblemHeader) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_ProblemHeader_s* zxwsf_NEW_a_ProblemHeader(struct zx_ctx* c)
{
  struct zxwsf_a_ProblemHeader_s* x = ZX_ZALLOC(c, struct zxwsf_a_ProblemHeader_s);
  x->gg.g.tok = zxwsf_a_ProblemHeader_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_ProblemHeader) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_ProblemHeader) */

int zxwsf_WALK_WO_a_ProblemHeader(struct zx_ctx* c, struct zxwsf_a_ProblemHeader_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ProblemHeaderQName
#define EL_STRUCT zxwsf_a_ProblemHeaderQName_s
#define EL_NS     a
#define EL_TAG    ProblemHeaderQName

/* FUNC(zxwsf_DUP_STRS_a_ProblemHeaderQName) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_ProblemHeaderQName) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_ProblemHeaderQName_s* zxwsf_DEEP_CLONE_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x, int dup_strs)
{
  x = (struct zxwsf_a_ProblemHeaderQName_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_ProblemHeaderQName_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_ProblemHeaderQName) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_ProblemHeaderQName) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_ProblemHeaderQName_s* zxwsf_NEW_a_ProblemHeaderQName(struct zx_ctx* c)
{
  struct zxwsf_a_ProblemHeaderQName_s* x = ZX_ZALLOC(c, struct zxwsf_a_ProblemHeaderQName_s);
  x->gg.g.tok = zxwsf_a_ProblemHeaderQName_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_ProblemHeaderQName) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_ProblemHeaderQName) */

int zxwsf_WALK_WO_a_ProblemHeaderQName(struct zx_ctx* c, struct zxwsf_a_ProblemHeaderQName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ProblemIRI
#define EL_STRUCT zxwsf_a_ProblemIRI_s
#define EL_NS     a
#define EL_TAG    ProblemIRI

/* FUNC(zxwsf_DUP_STRS_a_ProblemIRI) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_ProblemIRI) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_ProblemIRI_s* zxwsf_DEEP_CLONE_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x, int dup_strs)
{
  x = (struct zxwsf_a_ProblemIRI_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_ProblemIRI_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_ProblemIRI) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_ProblemIRI) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_ProblemIRI_s* zxwsf_NEW_a_ProblemIRI(struct zx_ctx* c)
{
  struct zxwsf_a_ProblemIRI_s* x = ZX_ZALLOC(c, struct zxwsf_a_ProblemIRI_s);
  x->gg.g.tok = zxwsf_a_ProblemIRI_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_ProblemIRI) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_ProblemIRI) */

int zxwsf_WALK_WO_a_ProblemIRI(struct zx_ctx* c, struct zxwsf_a_ProblemIRI_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ReferenceParameters
#define EL_STRUCT zxwsf_a_ReferenceParameters_s
#define EL_NS     a
#define EL_TAG    ReferenceParameters

/* FUNC(zxwsf_DUP_STRS_a_ReferenceParameters) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_ReferenceParameters) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_ReferenceParameters_s* zxwsf_DEEP_CLONE_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x, int dup_strs)
{
  x = (struct zxwsf_a_ReferenceParameters_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_ReferenceParameters_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_ReferenceParameters) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_ReferenceParameters) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_ReferenceParameters_s* zxwsf_NEW_a_ReferenceParameters(struct zx_ctx* c)
{
  struct zxwsf_a_ReferenceParameters_s* x = ZX_ZALLOC(c, struct zxwsf_a_ReferenceParameters_s);
  x->gg.g.tok = zxwsf_a_ReferenceParameters_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_ReferenceParameters) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_ReferenceParameters) */

int zxwsf_WALK_WO_a_ReferenceParameters(struct zx_ctx* c, struct zxwsf_a_ReferenceParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_RelatesTo
#define EL_STRUCT zxwsf_a_RelatesTo_s
#define EL_NS     a
#define EL_TAG    RelatesTo

/* FUNC(zxwsf_DUP_STRS_a_RelatesTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->RelationshipType);


}

/* FUNC(zxwsf_DEEP_CLONE_a_RelatesTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_RelatesTo_s* zxwsf_DEEP_CLONE_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x, int dup_strs)
{
  x = (struct zxwsf_a_RelatesTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_RelatesTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->RelationshipType = zx_clone_attr(c, x->RelationshipType);


  return x;
}

/* FUNC(zxwsf_FREE_a_RelatesTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->RelationshipType, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_RelatesTo) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_RelatesTo_s* zxwsf_NEW_a_RelatesTo(struct zx_ctx* c)
{
  struct zxwsf_a_RelatesTo_s* x = ZX_ZALLOC(c, struct zxwsf_a_RelatesTo_s);
  x->gg.g.tok = zxwsf_a_RelatesTo_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_RelatesTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_RelatesTo) */

int zxwsf_WALK_WO_a_RelatesTo(struct zx_ctx* c, struct zxwsf_a_RelatesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_ReplyTo
#define EL_STRUCT zxwsf_a_ReplyTo_s
#define EL_NS     a
#define EL_TAG    ReplyTo

/* FUNC(zxwsf_DUP_STRS_a_ReplyTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Address(c, e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReferenceParameters(c, e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Metadata(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_a_ReplyTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_ReplyTo_s* zxwsf_DEEP_CLONE_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x, int dup_strs)
{
  x = (struct zxwsf_a_ReplyTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_ReplyTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      struct zxwsf_a_Address_s* enn;
      for (enn = 0, e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Address(c, e, dup_strs);
	  if (!enn)
	      x->Address = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      struct zxwsf_a_ReferenceParameters_s* enn;
      for (enn = 0, e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReferenceParameters(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceParameters = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      struct zxwsf_a_Metadata_s* enn;
      for (enn = 0, e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Metadata(c, e, dup_strs);
	  if (!enn)
	      x->Metadata = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_a_ReplyTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      for (e = x->Address; e; e = en) {
	  en = (struct zxwsf_a_Address_s*)e->gg.g.n;
	  zxwsf_FREE_a_Address(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      for (e = x->ReferenceParameters; e; e = en) {
	  en = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReferenceParameters(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      for (e = x->Metadata; e; e = en) {
	  en = (struct zxwsf_a_Metadata_s*)e->gg.g.n;
	  zxwsf_FREE_a_Metadata(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_ReplyTo) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_ReplyTo_s* zxwsf_NEW_a_ReplyTo(struct zx_ctx* c)
{
  struct zxwsf_a_ReplyTo_s* x = ZX_ZALLOC(c, struct zxwsf_a_ReplyTo_s);
  x->gg.g.tok = zxwsf_a_ReplyTo_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_ReplyTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Address(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReferenceParameters(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Metadata(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_a_ReplyTo) */

int zxwsf_WALK_WO_a_ReplyTo(struct zx_ctx* c, struct zxwsf_a_ReplyTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_RetryAfter
#define EL_STRUCT zxwsf_a_RetryAfter_s
#define EL_NS     a
#define EL_TAG    RetryAfter

/* FUNC(zxwsf_DUP_STRS_a_RetryAfter) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_RetryAfter) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_RetryAfter_s* zxwsf_DEEP_CLONE_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x, int dup_strs)
{
  x = (struct zxwsf_a_RetryAfter_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_RetryAfter_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_RetryAfter) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_RetryAfter) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_RetryAfter_s* zxwsf_NEW_a_RetryAfter(struct zx_ctx* c)
{
  struct zxwsf_a_RetryAfter_s* x = ZX_ZALLOC(c, struct zxwsf_a_RetryAfter_s);
  x->gg.g.tok = zxwsf_a_RetryAfter_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_RetryAfter) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_RetryAfter) */

int zxwsf_WALK_WO_a_RetryAfter(struct zx_ctx* c, struct zxwsf_a_RetryAfter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   a_To
#define EL_STRUCT zxwsf_a_To_s
#define EL_NS     a
#define EL_TAG    To

/* FUNC(zxwsf_DUP_STRS_a_To) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_a_To) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_a_To_s* zxwsf_DEEP_CLONE_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x, int dup_strs)
{
  x = (struct zxwsf_a_To_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_a_To_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_a_To) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_a_To) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_a_To_s* zxwsf_NEW_a_To(struct zx_ctx* c)
{
  struct zxwsf_a_To_s* x = ZX_ZALLOC(c, struct zxwsf_a_To_s);
  x->gg.g.tok = zxwsf_a_To_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_a_To) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_a_To) */

int zxwsf_WALK_WO_a_To(struct zx_ctx* c, struct zxwsf_a_To_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b12_Consent
#define EL_STRUCT zxwsf_b12_Consent_s
#define EL_NS     b12
#define EL_TAG    Consent

/* FUNC(zxwsf_DUP_STRS_b12_Consent) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->uri);
  zx_dup_attr(c, x->timestamp);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);


}

/* FUNC(zxwsf_DEEP_CLONE_b12_Consent) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b12_Consent_s* zxwsf_DEEP_CLONE_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x, int dup_strs)
{
  x = (struct zxwsf_b12_Consent_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b12_Consent_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->uri = zx_clone_attr(c, x->uri);
  x->timestamp = zx_clone_attr(c, x->timestamp);
  x->id = zx_clone_attr(c, x->id);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);


  return x;
}

/* FUNC(zxwsf_FREE_b12_Consent) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->uri, free_strs);
  zx_free_attr(c, x->timestamp, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b12_Consent) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b12_Consent_s* zxwsf_NEW_b12_Consent(struct zx_ctx* c)
{
  struct zxwsf_b12_Consent_s* x = ZX_ZALLOC(c, struct zxwsf_b12_Consent_s);
  x->gg.g.tok = zxwsf_b12_Consent_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b12_Consent) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b12_Consent) */

int zxwsf_WALK_WO_b12_Consent(struct zx_ctx* c, struct zxwsf_b12_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b12_Correlation
#define EL_STRUCT zxwsf_b12_Correlation_s
#define EL_NS     b12
#define EL_TAG    Correlation

/* FUNC(zxwsf_DUP_STRS_b12_Correlation) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->messageID);
  zx_dup_attr(c, x->refToMessageID);
  zx_dup_attr(c, x->timestamp);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);


}

/* FUNC(zxwsf_DEEP_CLONE_b12_Correlation) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b12_Correlation_s* zxwsf_DEEP_CLONE_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x, int dup_strs)
{
  x = (struct zxwsf_b12_Correlation_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b12_Correlation_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->messageID = zx_clone_attr(c, x->messageID);
  x->refToMessageID = zx_clone_attr(c, x->refToMessageID);
  x->timestamp = zx_clone_attr(c, x->timestamp);
  x->id = zx_clone_attr(c, x->id);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);


  return x;
}

/* FUNC(zxwsf_FREE_b12_Correlation) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->messageID, free_strs);
  zx_free_attr(c, x->refToMessageID, free_strs);
  zx_free_attr(c, x->timestamp, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b12_Correlation) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b12_Correlation_s* zxwsf_NEW_b12_Correlation(struct zx_ctx* c)
{
  struct zxwsf_b12_Correlation_s* x = ZX_ZALLOC(c, struct zxwsf_b12_Correlation_s);
  x->gg.g.tok = zxwsf_b12_Correlation_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b12_Correlation) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b12_Correlation) */

int zxwsf_WALK_WO_b12_Correlation(struct zx_ctx* c, struct zxwsf_b12_Correlation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b12_ProcessingContext
#define EL_STRUCT zxwsf_b12_ProcessingContext_s
#define EL_NS     b12
#define EL_TAG    ProcessingContext

/* FUNC(zxwsf_DUP_STRS_b12_ProcessingContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);


}

/* FUNC(zxwsf_DEEP_CLONE_b12_ProcessingContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b12_ProcessingContext_s* zxwsf_DEEP_CLONE_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x, int dup_strs)
{
  x = (struct zxwsf_b12_ProcessingContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b12_ProcessingContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);


  return x;
}

/* FUNC(zxwsf_FREE_b12_ProcessingContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b12_ProcessingContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b12_ProcessingContext_s* zxwsf_NEW_b12_ProcessingContext(struct zx_ctx* c)
{
  struct zxwsf_b12_ProcessingContext_s* x = ZX_ZALLOC(c, struct zxwsf_b12_ProcessingContext_s);
  x->gg.g.tok = zxwsf_b12_ProcessingContext_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b12_ProcessingContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b12_ProcessingContext) */

int zxwsf_WALK_WO_b12_ProcessingContext(struct zx_ctx* c, struct zxwsf_b12_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b12_Provider
#define EL_STRUCT zxwsf_b12_Provider_s
#define EL_NS     b12
#define EL_TAG    Provider

/* FUNC(zxwsf_DUP_STRS_b12_Provider) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->providerID);
  zx_dup_attr(c, x->affiliationID);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);


}

/* FUNC(zxwsf_DEEP_CLONE_b12_Provider) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b12_Provider_s* zxwsf_DEEP_CLONE_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x, int dup_strs)
{
  x = (struct zxwsf_b12_Provider_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b12_Provider_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->providerID = zx_clone_attr(c, x->providerID);
  x->affiliationID = zx_clone_attr(c, x->affiliationID);
  x->id = zx_clone_attr(c, x->id);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);


  return x;
}

/* FUNC(zxwsf_FREE_b12_Provider) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->providerID, free_strs);
  zx_free_attr(c, x->affiliationID, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b12_Provider) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b12_Provider_s* zxwsf_NEW_b12_Provider(struct zx_ctx* c)
{
  struct zxwsf_b12_Provider_s* x = ZX_ZALLOC(c, struct zxwsf_b12_Provider_s);
  x->gg.g.tok = zxwsf_b12_Provider_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b12_Provider) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b12_Provider) */

int zxwsf_WALK_WO_b12_Provider(struct zx_ctx* c, struct zxwsf_b12_Provider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b12_UsageDirective
#define EL_STRUCT zxwsf_b12_UsageDirective_s
#define EL_NS     b12
#define EL_TAG    UsageDirective

/* FUNC(zxwsf_DUP_STRS_b12_UsageDirective) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->ref);
  zx_dup_attr(c, x->mustUnderstand);
  zx_dup_attr(c, x->actor);


}

/* FUNC(zxwsf_DEEP_CLONE_b12_UsageDirective) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b12_UsageDirective_s* zxwsf_DEEP_CLONE_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x, int dup_strs)
{
  x = (struct zxwsf_b12_UsageDirective_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b12_UsageDirective_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->ref = zx_clone_attr(c, x->ref);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);
  x->actor = zx_clone_attr(c, x->actor);


  return x;
}

/* FUNC(zxwsf_FREE_b12_UsageDirective) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->ref, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);
  zx_free_attr(c, x->actor, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b12_UsageDirective) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b12_UsageDirective_s* zxwsf_NEW_b12_UsageDirective(struct zx_ctx* c)
{
  struct zxwsf_b12_UsageDirective_s* x = ZX_ZALLOC(c, struct zxwsf_b12_UsageDirective_s);
  x->gg.g.tok = zxwsf_b12_UsageDirective_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b12_UsageDirective) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b12_UsageDirective) */

int zxwsf_WALK_WO_b12_UsageDirective(struct zx_ctx* c, struct zxwsf_b12_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_ApplicationEPR
#define EL_STRUCT zxwsf_b_ApplicationEPR_s
#define EL_NS     b
#define EL_TAG    ApplicationEPR

/* FUNC(zxwsf_DUP_STRS_b_ApplicationEPR) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Address(c, e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReferenceParameters(c, e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Metadata(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_b_ApplicationEPR) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_ApplicationEPR_s* zxwsf_DEEP_CLONE_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x, int dup_strs)
{
  x = (struct zxwsf_b_ApplicationEPR_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_ApplicationEPR_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      struct zxwsf_a_Address_s* enn;
      for (enn = 0, e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Address(c, e, dup_strs);
	  if (!enn)
	      x->Address = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      struct zxwsf_a_ReferenceParameters_s* enn;
      for (enn = 0, e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReferenceParameters(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceParameters = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      struct zxwsf_a_Metadata_s* enn;
      for (enn = 0, e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Metadata(c, e, dup_strs);
	  if (!enn)
	      x->Metadata = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_b_ApplicationEPR) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      for (e = x->Address; e; e = en) {
	  en = (struct zxwsf_a_Address_s*)e->gg.g.n;
	  zxwsf_FREE_a_Address(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      for (e = x->ReferenceParameters; e; e = en) {
	  en = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReferenceParameters(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      for (e = x->Metadata; e; e = en) {
	  en = (struct zxwsf_a_Metadata_s*)e->gg.g.n;
	  zxwsf_FREE_a_Metadata(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_ApplicationEPR) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_ApplicationEPR_s* zxwsf_NEW_b_ApplicationEPR(struct zx_ctx* c)
{
  struct zxwsf_b_ApplicationEPR_s* x = ZX_ZALLOC(c, struct zxwsf_b_ApplicationEPR_s);
  x->gg.g.tok = zxwsf_b_ApplicationEPR_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_ApplicationEPR) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Address(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReferenceParameters(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Metadata(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_b_ApplicationEPR) */

int zxwsf_WALK_WO_b_ApplicationEPR(struct zx_ctx* c, struct zxwsf_b_ApplicationEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_Consent
#define EL_STRUCT zxwsf_b_Consent_s
#define EL_NS     b
#define EL_TAG    Consent

/* FUNC(zxwsf_DUP_STRS_b_Consent) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->uri);
  zx_dup_attr(c, x->timestamp);


}

/* FUNC(zxwsf_DEEP_CLONE_b_Consent) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_Consent_s* zxwsf_DEEP_CLONE_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x, int dup_strs)
{
  x = (struct zxwsf_b_Consent_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_Consent_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->uri = zx_clone_attr(c, x->uri);
  x->timestamp = zx_clone_attr(c, x->timestamp);


  return x;
}

/* FUNC(zxwsf_FREE_b_Consent) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->uri, free_strs);
  zx_free_attr(c, x->timestamp, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_Consent) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_Consent_s* zxwsf_NEW_b_Consent(struct zx_ctx* c)
{
  struct zxwsf_b_Consent_s* x = ZX_ZALLOC(c, struct zxwsf_b_Consent_s);
  x->gg.g.tok = zxwsf_b_Consent_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_Consent) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b_Consent) */

int zxwsf_WALK_WO_b_Consent(struct zx_ctx* c, struct zxwsf_b_Consent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_CredentialsContext
#define EL_STRUCT zxwsf_b_CredentialsContext_s
#define EL_NS     b
#define EL_TAG    CredentialsContext

/* FUNC(zxwsf_DUP_STRS_b_CredentialsContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->RequestedAuthnContext);
  zx_dup_strs_simple_elems(c, x->SecurityMechID);

}

/* FUNC(zxwsf_DEEP_CLONE_b_CredentialsContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_CredentialsContext_s* zxwsf_DEEP_CLONE_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x, int dup_strs)
{
  x = (struct zxwsf_b_CredentialsContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_CredentialsContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->RequestedAuthnContext = zx_deep_clone_simple_elems(c,x->RequestedAuthnContext, dup_strs);
  x->SecurityMechID = zx_deep_clone_simple_elems(c,x->SecurityMechID, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_b_CredentialsContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->RequestedAuthnContext, free_strs);
  zx_free_simple_elems(c, x->SecurityMechID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_CredentialsContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_CredentialsContext_s* zxwsf_NEW_b_CredentialsContext(struct zx_ctx* c)
{
  struct zxwsf_b_CredentialsContext_s* x = ZX_ZALLOC(c, struct zxwsf_b_CredentialsContext_s);
  x->gg.g.tok = zxwsf_b_CredentialsContext_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_CredentialsContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->RequestedAuthnContext, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SecurityMechID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_b_CredentialsContext) */

int zxwsf_WALK_WO_b_CredentialsContext(struct zx_ctx* c, struct zxwsf_b_CredentialsContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_EndpointUpdate
#define EL_STRUCT zxwsf_b_EndpointUpdate_s
#define EL_NS     b
#define EL_TAG    EndpointUpdate

/* FUNC(zxwsf_DUP_STRS_b_EndpointUpdate) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->updateType);

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Address(c, e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReferenceParameters(c, e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Metadata(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_b_EndpointUpdate) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_EndpointUpdate_s* zxwsf_DEEP_CLONE_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x, int dup_strs)
{
  x = (struct zxwsf_b_EndpointUpdate_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_EndpointUpdate_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->updateType = zx_clone_attr(c, x->updateType);

  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      struct zxwsf_a_Address_s* enn;
      for (enn = 0, e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Address(c, e, dup_strs);
	  if (!enn)
	      x->Address = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      struct zxwsf_a_ReferenceParameters_s* enn;
      for (enn = 0, e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReferenceParameters(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceParameters = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      struct zxwsf_a_Metadata_s* enn;
      for (enn = 0, e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Metadata(c, e, dup_strs);
	  if (!enn)
	      x->Metadata = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_b_EndpointUpdate) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->updateType, free_strs);

  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      for (e = x->Address; e; e = en) {
	  en = (struct zxwsf_a_Address_s*)e->gg.g.n;
	  zxwsf_FREE_a_Address(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      for (e = x->ReferenceParameters; e; e = en) {
	  en = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReferenceParameters(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      for (e = x->Metadata; e; e = en) {
	  en = (struct zxwsf_a_Metadata_s*)e->gg.g.n;
	  zxwsf_FREE_a_Metadata(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_EndpointUpdate) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_EndpointUpdate_s* zxwsf_NEW_b_EndpointUpdate(struct zx_ctx* c)
{
  struct zxwsf_b_EndpointUpdate_s* x = ZX_ZALLOC(c, struct zxwsf_b_EndpointUpdate_s);
  x->gg.g.tok = zxwsf_b_EndpointUpdate_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_EndpointUpdate) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Address(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReferenceParameters(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Metadata(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_b_EndpointUpdate) */

int zxwsf_WALK_WO_b_EndpointUpdate(struct zx_ctx* c, struct zxwsf_b_EndpointUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_Framework
#define EL_STRUCT zxwsf_b_Framework_s
#define EL_NS     b
#define EL_TAG    Framework

/* FUNC(zxwsf_DUP_STRS_b_Framework) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->version);


}

/* FUNC(zxwsf_DEEP_CLONE_b_Framework) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_Framework_s* zxwsf_DEEP_CLONE_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x, int dup_strs)
{
  x = (struct zxwsf_b_Framework_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_Framework_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->version = zx_clone_attr(c, x->version);


  return x;
}

/* FUNC(zxwsf_FREE_b_Framework) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->version, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_Framework) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_Framework_s* zxwsf_NEW_b_Framework(struct zx_ctx* c)
{
  struct zxwsf_b_Framework_s* x = ZX_ZALLOC(c, struct zxwsf_b_Framework_s);
  x->gg.g.tok = zxwsf_b_Framework_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_Framework) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b_Framework) */

int zxwsf_WALK_WO_b_Framework(struct zx_ctx* c, struct zxwsf_b_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_InteractionService
#define EL_STRUCT zxwsf_b_InteractionService_s
#define EL_NS     b
#define EL_TAG    InteractionService

/* FUNC(zxwsf_DUP_STRS_b_InteractionService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Address(c, e);
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReferenceParameters(c, e);
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Metadata(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_b_InteractionService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_InteractionService_s* zxwsf_DEEP_CLONE_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x, int dup_strs)
{
  x = (struct zxwsf_b_InteractionService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_InteractionService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      struct zxwsf_a_Address_s* enn;
      for (enn = 0, e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Address(c, e, dup_strs);
	  if (!enn)
	      x->Address = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      struct zxwsf_a_ReferenceParameters_s* enn;
      for (enn = 0, e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReferenceParameters(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceParameters = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      struct zxwsf_a_Metadata_s* enn;
      for (enn = 0, e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Metadata(c, e, dup_strs);
	  if (!enn)
	      x->Metadata = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_b_InteractionService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_Address_s* e;
      struct zxwsf_a_Address_s* en;
      for (e = x->Address; e; e = en) {
	  en = (struct zxwsf_a_Address_s*)e->gg.g.n;
	  zxwsf_FREE_a_Address(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      struct zxwsf_a_ReferenceParameters_s* en;
      for (e = x->ReferenceParameters; e; e = en) {
	  en = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReferenceParameters(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      struct zxwsf_a_Metadata_s* en;
      for (e = x->Metadata; e; e = en) {
	  en = (struct zxwsf_a_Metadata_s*)e->gg.g.n;
	  zxwsf_FREE_a_Metadata(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_InteractionService) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_InteractionService_s* zxwsf_NEW_b_InteractionService(struct zx_ctx* c)
{
  struct zxwsf_b_InteractionService_s* x = ZX_ZALLOC(c, struct zxwsf_b_InteractionService_s);
  x->gg.g.tok = zxwsf_b_InteractionService_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_InteractionService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_Address_s* e;
      for (e = x->Address; e; e = (struct zxwsf_a_Address_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Address(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReferenceParameters_s* e;
      for (e = x->ReferenceParameters; e; e = (struct zxwsf_a_ReferenceParameters_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReferenceParameters(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Metadata_s* e;
      for (e = x->Metadata; e; e = (struct zxwsf_a_Metadata_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Metadata(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_b_InteractionService) */

int zxwsf_WALK_WO_b_InteractionService(struct zx_ctx* c, struct zxwsf_b_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_ProcessingContext
#define EL_STRUCT zxwsf_b_ProcessingContext_s
#define EL_NS     b
#define EL_TAG    ProcessingContext

/* FUNC(zxwsf_DUP_STRS_b_ProcessingContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_b_ProcessingContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_ProcessingContext_s* zxwsf_DEEP_CLONE_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x, int dup_strs)
{
  x = (struct zxwsf_b_ProcessingContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_ProcessingContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_b_ProcessingContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_ProcessingContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_ProcessingContext_s* zxwsf_NEW_b_ProcessingContext(struct zx_ctx* c)
{
  struct zxwsf_b_ProcessingContext_s* x = ZX_ZALLOC(c, struct zxwsf_b_ProcessingContext_s);
  x->gg.g.tok = zxwsf_b_ProcessingContext_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_ProcessingContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b_ProcessingContext) */

int zxwsf_WALK_WO_b_ProcessingContext(struct zx_ctx* c, struct zxwsf_b_ProcessingContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_RedirectRequest
#define EL_STRUCT zxwsf_b_RedirectRequest_s
#define EL_NS     b
#define EL_TAG    RedirectRequest

/* FUNC(zxwsf_DUP_STRS_b_RedirectRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->redirectURL);


}

/* FUNC(zxwsf_DEEP_CLONE_b_RedirectRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_RedirectRequest_s* zxwsf_DEEP_CLONE_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x, int dup_strs)
{
  x = (struct zxwsf_b_RedirectRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_RedirectRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->redirectURL = zx_clone_attr(c, x->redirectURL);


  return x;
}

/* FUNC(zxwsf_FREE_b_RedirectRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->redirectURL, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_RedirectRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_RedirectRequest_s* zxwsf_NEW_b_RedirectRequest(struct zx_ctx* c)
{
  struct zxwsf_b_RedirectRequest_s* x = ZX_ZALLOC(c, struct zxwsf_b_RedirectRequest_s);
  x->gg.g.tok = zxwsf_b_RedirectRequest_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_RedirectRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b_RedirectRequest) */

int zxwsf_WALK_WO_b_RedirectRequest(struct zx_ctx* c, struct zxwsf_b_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_Sender
#define EL_STRUCT zxwsf_b_Sender_s
#define EL_NS     b
#define EL_TAG    Sender

/* FUNC(zxwsf_DUP_STRS_b_Sender) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->providerID);
  zx_dup_attr(c, x->affiliationID);


}

/* FUNC(zxwsf_DEEP_CLONE_b_Sender) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_Sender_s* zxwsf_DEEP_CLONE_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x, int dup_strs)
{
  x = (struct zxwsf_b_Sender_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_Sender_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->providerID = zx_clone_attr(c, x->providerID);
  x->affiliationID = zx_clone_attr(c, x->affiliationID);


  return x;
}

/* FUNC(zxwsf_FREE_b_Sender) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->providerID, free_strs);
  zx_free_attr(c, x->affiliationID, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_Sender) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_Sender_s* zxwsf_NEW_b_Sender(struct zx_ctx* c)
{
  struct zxwsf_b_Sender_s* x = ZX_ZALLOC(c, struct zxwsf_b_Sender_s);
  x->gg.g.tok = zxwsf_b_Sender_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_Sender) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b_Sender) */

int zxwsf_WALK_WO_b_Sender(struct zx_ctx* c, struct zxwsf_b_Sender_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_TargetIdentity
#define EL_STRUCT zxwsf_b_TargetIdentity_s
#define EL_NS     b
#define EL_TAG    TargetIdentity

/* FUNC(zxwsf_DUP_STRS_b_TargetIdentity) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_b_TargetIdentity) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_TargetIdentity_s* zxwsf_DEEP_CLONE_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x, int dup_strs)
{
  x = (struct zxwsf_b_TargetIdentity_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_TargetIdentity_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_b_TargetIdentity) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_TargetIdentity) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_TargetIdentity_s* zxwsf_NEW_b_TargetIdentity(struct zx_ctx* c)
{
  struct zxwsf_b_TargetIdentity_s* x = ZX_ZALLOC(c, struct zxwsf_b_TargetIdentity_s);
  x->gg.g.tok = zxwsf_b_TargetIdentity_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_TargetIdentity) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b_TargetIdentity) */

int zxwsf_WALK_WO_b_TargetIdentity(struct zx_ctx* c, struct zxwsf_b_TargetIdentity_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_UsageDirective
#define EL_STRUCT zxwsf_b_UsageDirective_s
#define EL_NS     b
#define EL_TAG    UsageDirective

/* FUNC(zxwsf_DUP_STRS_b_UsageDirective) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ref);


}

/* FUNC(zxwsf_DEEP_CLONE_b_UsageDirective) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_UsageDirective_s* zxwsf_DEEP_CLONE_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x, int dup_strs)
{
  x = (struct zxwsf_b_UsageDirective_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_UsageDirective_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ref = zx_clone_attr(c, x->ref);


  return x;
}

/* FUNC(zxwsf_FREE_b_UsageDirective) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ref, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_UsageDirective) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_UsageDirective_s* zxwsf_NEW_b_UsageDirective(struct zx_ctx* c)
{
  struct zxwsf_b_UsageDirective_s* x = ZX_ZALLOC(c, struct zxwsf_b_UsageDirective_s);
  x->gg.g.tok = zxwsf_b_UsageDirective_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_UsageDirective) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_b_UsageDirective) */

int zxwsf_WALK_WO_b_UsageDirective(struct zx_ctx* c, struct zxwsf_b_UsageDirective_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   b_UserInteraction
#define EL_STRUCT zxwsf_b_UserInteraction_s
#define EL_NS     b
#define EL_TAG    UserInteraction

/* FUNC(zxwsf_DUP_STRS_b_UserInteraction) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->interact);
  zx_dup_attr(c, x->language);
  zx_dup_attr(c, x->redirect);
  zx_dup_attr(c, x->maxInteractTime);

  {
      struct zxwsf_b_InteractionService_s* e;
      for (e = x->InteractionService; e; e = (struct zxwsf_b_InteractionService_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_InteractionService(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_b_UserInteraction) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_b_UserInteraction_s* zxwsf_DEEP_CLONE_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x, int dup_strs)
{
  x = (struct zxwsf_b_UserInteraction_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_b_UserInteraction_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->interact = zx_clone_attr(c, x->interact);
  x->language = zx_clone_attr(c, x->language);
  x->redirect = zx_clone_attr(c, x->redirect);
  x->maxInteractTime = zx_clone_attr(c, x->maxInteractTime);

  {
      struct zxwsf_b_InteractionService_s* e;
      struct zxwsf_b_InteractionService_s* en;
      struct zxwsf_b_InteractionService_s* enn;
      for (enn = 0, e = x->InteractionService; e; e = (struct zxwsf_b_InteractionService_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_InteractionService(c, e, dup_strs);
	  if (!enn)
	      x->InteractionService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_b_UserInteraction) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->interact, free_strs);
  zx_free_attr(c, x->language, free_strs);
  zx_free_attr(c, x->redirect, free_strs);
  zx_free_attr(c, x->maxInteractTime, free_strs);

  {
      struct zxwsf_b_InteractionService_s* e;
      struct zxwsf_b_InteractionService_s* en;
      for (e = x->InteractionService; e; e = en) {
	  en = (struct zxwsf_b_InteractionService_s*)e->gg.g.n;
	  zxwsf_FREE_b_InteractionService(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_b_UserInteraction) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_b_UserInteraction_s* zxwsf_NEW_b_UserInteraction(struct zx_ctx* c)
{
  struct zxwsf_b_UserInteraction_s* x = ZX_ZALLOC(c, struct zxwsf_b_UserInteraction_s);
  x->gg.g.tok = zxwsf_b_UserInteraction_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_b_UserInteraction) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_b_InteractionService_s* e;
      for (e = x->InteractionService; e; e = (struct zxwsf_b_InteractionService_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_InteractionService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_b_UserInteraction) */

int zxwsf_WALK_WO_b_UserInteraction(struct zx_ctx* c, struct zxwsf_b_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_AuthenticateRequester
#define EL_STRUCT zxwsf_di12_AuthenticateRequester_s
#define EL_NS     di12
#define EL_TAG    AuthenticateRequester

/* FUNC(zxwsf_DUP_STRS_di12_AuthenticateRequester) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->descriptionIDRefs);


}

/* FUNC(zxwsf_DEEP_CLONE_di12_AuthenticateRequester) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_AuthenticateRequester_s* zxwsf_DEEP_CLONE_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_AuthenticateRequester_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_AuthenticateRequester_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->descriptionIDRefs = zx_clone_attr(c, x->descriptionIDRefs);


  return x;
}

/* FUNC(zxwsf_FREE_di12_AuthenticateRequester) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->descriptionIDRefs, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_AuthenticateRequester) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_AuthenticateRequester_s* zxwsf_NEW_di12_AuthenticateRequester(struct zx_ctx* c)
{
  struct zxwsf_di12_AuthenticateRequester_s* x = ZX_ZALLOC(c, struct zxwsf_di12_AuthenticateRequester_s);
  x->gg.g.tok = zxwsf_di12_AuthenticateRequester_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_AuthenticateRequester) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di12_AuthenticateRequester) */

int zxwsf_WALK_WO_di12_AuthenticateRequester(struct zx_ctx* c, struct zxwsf_di12_AuthenticateRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_AuthenticateSessionContext
#define EL_STRUCT zxwsf_di12_AuthenticateSessionContext_s
#define EL_NS     di12
#define EL_TAG    AuthenticateSessionContext

/* FUNC(zxwsf_DUP_STRS_di12_AuthenticateSessionContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->descriptionIDRefs);


}

/* FUNC(zxwsf_DEEP_CLONE_di12_AuthenticateSessionContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_AuthenticateSessionContext_s* zxwsf_DEEP_CLONE_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_AuthenticateSessionContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_AuthenticateSessionContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->descriptionIDRefs = zx_clone_attr(c, x->descriptionIDRefs);


  return x;
}

/* FUNC(zxwsf_FREE_di12_AuthenticateSessionContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->descriptionIDRefs, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_AuthenticateSessionContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_AuthenticateSessionContext_s* zxwsf_NEW_di12_AuthenticateSessionContext(struct zx_ctx* c)
{
  struct zxwsf_di12_AuthenticateSessionContext_s* x = ZX_ZALLOC(c, struct zxwsf_di12_AuthenticateSessionContext_s);
  x->gg.g.tok = zxwsf_di12_AuthenticateSessionContext_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_AuthenticateSessionContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di12_AuthenticateSessionContext) */

int zxwsf_WALK_WO_di12_AuthenticateSessionContext(struct zx_ctx* c, struct zxwsf_di12_AuthenticateSessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_AuthorizeRequester
#define EL_STRUCT zxwsf_di12_AuthorizeRequester_s
#define EL_NS     di12
#define EL_TAG    AuthorizeRequester

/* FUNC(zxwsf_DUP_STRS_di12_AuthorizeRequester) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->descriptionIDRefs);


}

/* FUNC(zxwsf_DEEP_CLONE_di12_AuthorizeRequester) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_AuthorizeRequester_s* zxwsf_DEEP_CLONE_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_AuthorizeRequester_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_AuthorizeRequester_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->descriptionIDRefs = zx_clone_attr(c, x->descriptionIDRefs);


  return x;
}

/* FUNC(zxwsf_FREE_di12_AuthorizeRequester) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->descriptionIDRefs, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_AuthorizeRequester) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_AuthorizeRequester_s* zxwsf_NEW_di12_AuthorizeRequester(struct zx_ctx* c)
{
  struct zxwsf_di12_AuthorizeRequester_s* x = ZX_ZALLOC(c, struct zxwsf_di12_AuthorizeRequester_s);
  x->gg.g.tok = zxwsf_di12_AuthorizeRequester_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_AuthorizeRequester) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di12_AuthorizeRequester) */

int zxwsf_WALK_WO_di12_AuthorizeRequester(struct zx_ctx* c, struct zxwsf_di12_AuthorizeRequester_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_Credentials
#define EL_STRUCT zxwsf_di12_Credentials_s
#define EL_NS     di12
#define EL_TAG    Credentials

/* FUNC(zxwsf_DUP_STRS_di12_Credentials) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_di12_Credentials) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_Credentials_s* zxwsf_DEEP_CLONE_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_Credentials_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_Credentials_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_di12_Credentials) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_Credentials) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_Credentials_s* zxwsf_NEW_di12_Credentials(struct zx_ctx* c)
{
  struct zxwsf_di12_Credentials_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Credentials_s);
  x->gg.g.tok = zxwsf_di12_Credentials_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_Credentials) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di12_Credentials) */

int zxwsf_WALK_WO_di12_Credentials(struct zx_ctx* c, struct zxwsf_di12_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_Description
#define EL_STRUCT zxwsf_di12_Description_s
#define EL_NS     di12
#define EL_TAG    Description

/* FUNC(zxwsf_DUP_STRS_di12_Description) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->SecurityMechID);
  zx_dup_strs_simple_elems(c, x->CredentialRef);
  zx_dup_strs_simple_elems(c, x->WsdlURI);
  zx_dup_strs_simple_elems(c, x->ServiceNameRef);
  zx_dup_strs_simple_elems(c, x->Endpoint);
  zx_dup_strs_simple_elems(c, x->SoapAction);

}

/* FUNC(zxwsf_DEEP_CLONE_di12_Description) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_Description_s* zxwsf_DEEP_CLONE_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_Description_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_Description_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->SecurityMechID = zx_deep_clone_simple_elems(c,x->SecurityMechID, dup_strs);
  x->CredentialRef = zx_deep_clone_simple_elems(c,x->CredentialRef, dup_strs);
  x->WsdlURI = zx_deep_clone_simple_elems(c,x->WsdlURI, dup_strs);
  x->ServiceNameRef = zx_deep_clone_simple_elems(c,x->ServiceNameRef, dup_strs);
  x->Endpoint = zx_deep_clone_simple_elems(c,x->Endpoint, dup_strs);
  x->SoapAction = zx_deep_clone_simple_elems(c,x->SoapAction, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di12_Description) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->SecurityMechID, free_strs);
  zx_free_simple_elems(c, x->CredentialRef, free_strs);
  zx_free_simple_elems(c, x->WsdlURI, free_strs);
  zx_free_simple_elems(c, x->ServiceNameRef, free_strs);
  zx_free_simple_elems(c, x->Endpoint, free_strs);
  zx_free_simple_elems(c, x->SoapAction, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_Description) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_Description_s* zxwsf_NEW_di12_Description(struct zx_ctx* c)
{
  struct zxwsf_di12_Description_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Description_s);
  x->gg.g.tok = zxwsf_di12_Description_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_Description) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SecurityMechID, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->CredentialRef, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->WsdlURI, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ServiceNameRef, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Endpoint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SoapAction, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_Description) */

int zxwsf_WALK_WO_di12_Description(struct zx_ctx* c, struct zxwsf_di12_Description_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_EncryptResourceID
#define EL_STRUCT zxwsf_di12_EncryptResourceID_s
#define EL_NS     di12
#define EL_TAG    EncryptResourceID

/* FUNC(zxwsf_DUP_STRS_di12_EncryptResourceID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->descriptionIDRefs);


}

/* FUNC(zxwsf_DEEP_CLONE_di12_EncryptResourceID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_EncryptResourceID_s* zxwsf_DEEP_CLONE_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_EncryptResourceID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_EncryptResourceID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->descriptionIDRefs = zx_clone_attr(c, x->descriptionIDRefs);


  return x;
}

/* FUNC(zxwsf_FREE_di12_EncryptResourceID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->descriptionIDRefs, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_EncryptResourceID) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_EncryptResourceID_s* zxwsf_NEW_di12_EncryptResourceID(struct zx_ctx* c)
{
  struct zxwsf_di12_EncryptResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_di12_EncryptResourceID_s);
  x->gg.g.tok = zxwsf_di12_EncryptResourceID_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_EncryptResourceID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di12_EncryptResourceID) */

int zxwsf_WALK_WO_di12_EncryptResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_EncryptedResourceID
#define EL_STRUCT zxwsf_di12_EncryptedResourceID_s
#define EL_NS     di12
#define EL_TAG    EncryptedResourceID

/* FUNC(zxwsf_DUP_STRS_di12_EncryptedResourceID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->EncryptedData);
  zx_dup_strs_simple_elems(c, x->EncryptedKey);

}

/* FUNC(zxwsf_DEEP_CLONE_di12_EncryptedResourceID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_EncryptedResourceID_s* zxwsf_DEEP_CLONE_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_EncryptedResourceID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_EncryptedResourceID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->EncryptedData = zx_deep_clone_simple_elems(c,x->EncryptedData, dup_strs);
  x->EncryptedKey = zx_deep_clone_simple_elems(c,x->EncryptedKey, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di12_EncryptedResourceID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->EncryptedData, free_strs);
  zx_free_simple_elems(c, x->EncryptedKey, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_EncryptedResourceID) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_EncryptedResourceID_s* zxwsf_NEW_di12_EncryptedResourceID(struct zx_ctx* c)
{
  struct zxwsf_di12_EncryptedResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_di12_EncryptedResourceID_s);
  x->gg.g.tok = zxwsf_di12_EncryptedResourceID_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_EncryptedResourceID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->EncryptedData, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->EncryptedKey, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_EncryptedResourceID) */

int zxwsf_WALK_WO_di12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_di12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_Extension
#define EL_STRUCT zxwsf_di12_Extension_s
#define EL_NS     di12
#define EL_TAG    Extension

/* FUNC(zxwsf_DUP_STRS_di12_Extension) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_di12_Extension) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_Extension_s* zxwsf_DEEP_CLONE_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_Extension_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_Extension_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_di12_Extension) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_Extension) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_Extension_s* zxwsf_NEW_di12_Extension(struct zx_ctx* c)
{
  struct zxwsf_di12_Extension_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Extension_s);
  x->gg.g.tok = zxwsf_di12_Extension_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_Extension) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di12_Extension) */

int zxwsf_WALK_WO_di12_Extension(struct zx_ctx* c, struct zxwsf_di12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_InsertEntry
#define EL_STRUCT zxwsf_di12_InsertEntry_s
#define EL_NS     di12
#define EL_TAG    InsertEntry

/* FUNC(zxwsf_DUP_STRS_di12_InsertEntry) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_ResourceOffering(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di12_InsertEntry) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_InsertEntry_s* zxwsf_DEEP_CLONE_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_InsertEntry_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_InsertEntry_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di12_ResourceOffering_s* e;
      struct zxwsf_di12_ResourceOffering_s* en;
      struct zxwsf_di12_ResourceOffering_s* enn;
      for (enn = 0, e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_ResourceOffering(c, e, dup_strs);
	  if (!enn)
	      x->ResourceOffering = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di12_InsertEntry) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di12_ResourceOffering_s* e;
      struct zxwsf_di12_ResourceOffering_s* en;
      for (e = x->ResourceOffering; e; e = en) {
	  en = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n;
	  zxwsf_FREE_di12_ResourceOffering(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_InsertEntry) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_InsertEntry_s* zxwsf_NEW_di12_InsertEntry(struct zx_ctx* c)
{
  struct zxwsf_di12_InsertEntry_s* x = ZX_ZALLOC(c, struct zxwsf_di12_InsertEntry_s);
  x->gg.g.tok = zxwsf_di12_InsertEntry_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_InsertEntry) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_ResourceOffering(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_InsertEntry) */

int zxwsf_WALK_WO_di12_InsertEntry(struct zx_ctx* c, struct zxwsf_di12_InsertEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_Modify
#define EL_STRUCT zxwsf_di12_Modify_s
#define EL_NS     di12
#define EL_TAG    Modify

/* FUNC(zxwsf_DUP_STRS_di12_Modify) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zxwsf_di12_InsertEntry_s* e;
      for (e = x->InsertEntry; e; e = (struct zxwsf_di12_InsertEntry_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_InsertEntry(c, e);
  }
  {
      struct zxwsf_di12_RemoveEntry_s* e;
      for (e = x->RemoveEntry; e; e = (struct zxwsf_di12_RemoveEntry_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_RemoveEntry(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di12_Modify) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_Modify_s* zxwsf_DEEP_CLONE_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_Modify_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_Modify_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zxwsf_di12_InsertEntry_s* e;
      struct zxwsf_di12_InsertEntry_s* en;
      struct zxwsf_di12_InsertEntry_s* enn;
      for (enn = 0, e = x->InsertEntry; e; e = (struct zxwsf_di12_InsertEntry_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_InsertEntry(c, e, dup_strs);
	  if (!enn)
	      x->InsertEntry = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_RemoveEntry_s* e;
      struct zxwsf_di12_RemoveEntry_s* en;
      struct zxwsf_di12_RemoveEntry_s* enn;
      for (enn = 0, e = x->RemoveEntry; e; e = (struct zxwsf_di12_RemoveEntry_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_RemoveEntry(c, e, dup_strs);
	  if (!enn)
	      x->RemoveEntry = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di12_Modify) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zxwsf_di12_InsertEntry_s* e;
      struct zxwsf_di12_InsertEntry_s* en;
      for (e = x->InsertEntry; e; e = en) {
	  en = (struct zxwsf_di12_InsertEntry_s*)e->gg.g.n;
	  zxwsf_FREE_di12_InsertEntry(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_RemoveEntry_s* e;
      struct zxwsf_di12_RemoveEntry_s* en;
      for (e = x->RemoveEntry; e; e = en) {
	  en = (struct zxwsf_di12_RemoveEntry_s*)e->gg.g.n;
	  zxwsf_FREE_di12_RemoveEntry(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_Modify) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_Modify_s* zxwsf_NEW_di12_Modify(struct zx_ctx* c)
{
  struct zxwsf_di12_Modify_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Modify_s);
  x->gg.g.tok = zxwsf_di12_Modify_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_Modify) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di12_InsertEntry_s* e;
      for (e = x->InsertEntry; e; e = (struct zxwsf_di12_InsertEntry_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_InsertEntry(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_RemoveEntry_s* e;
      for (e = x->RemoveEntry; e; e = (struct zxwsf_di12_RemoveEntry_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_RemoveEntry(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_Modify) */

int zxwsf_WALK_WO_di12_Modify(struct zx_ctx* c, struct zxwsf_di12_Modify_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_ModifyResponse
#define EL_STRUCT zxwsf_di12_ModifyResponse_s
#define EL_NS     di12
#define EL_TAG    ModifyResponse

/* FUNC(zxwsf_DUP_STRS_di12_ModifyResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->newEntryIDs);

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Status(c, e);
  }
  {
      struct zxwsf_di12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxwsf_di12_Extension_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Extension(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di12_ModifyResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_ModifyResponse_s* zxwsf_DEEP_CLONE_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_ModifyResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_ModifyResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->newEntryIDs = zx_clone_attr(c, x->newEntryIDs);

  {
      struct zxwsf_di12_Status_s* e;
      struct zxwsf_di12_Status_s* en;
      struct zxwsf_di12_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_Extension_s* e;
      struct zxwsf_di12_Extension_s* en;
      struct zxwsf_di12_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zxwsf_di12_Extension_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di12_ModifyResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->newEntryIDs, free_strs);

  {
      struct zxwsf_di12_Status_s* e;
      struct zxwsf_di12_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_di12_Status_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Status(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_Extension_s* e;
      struct zxwsf_di12_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zxwsf_di12_Extension_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_ModifyResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_ModifyResponse_s* zxwsf_NEW_di12_ModifyResponse(struct zx_ctx* c)
{
  struct zxwsf_di12_ModifyResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di12_ModifyResponse_s);
  x->gg.g.tok = zxwsf_di12_ModifyResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_ModifyResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxwsf_di12_Extension_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_ModifyResponse) */

int zxwsf_WALK_WO_di12_ModifyResponse(struct zx_ctx* c, struct zxwsf_di12_ModifyResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_Options
#define EL_STRUCT zxwsf_di12_Options_s
#define EL_NS     di12
#define EL_TAG    Options

/* FUNC(zxwsf_DUP_STRS_di12_Options) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Option);

}

/* FUNC(zxwsf_DEEP_CLONE_di12_Options) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_Options_s* zxwsf_DEEP_CLONE_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_Options_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_Options_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Option = zx_deep_clone_simple_elems(c,x->Option, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di12_Options) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Option, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_Options) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_Options_s* zxwsf_NEW_di12_Options(struct zx_ctx* c)
{
  struct zxwsf_di12_Options_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Options_s);
  x->gg.g.tok = zxwsf_di12_Options_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_Options) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Option, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_Options) */

int zxwsf_WALK_WO_di12_Options(struct zx_ctx* c, struct zxwsf_di12_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_Query
#define EL_STRUCT zxwsf_di12_Query_s
#define EL_NS     di12
#define EL_TAG    Query

/* FUNC(zxwsf_DUP_STRS_di12_Query) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zxwsf_di12_RequestedServiceType_s* e;
      for (e = x->RequestedServiceType; e; e = (struct zxwsf_di12_RequestedServiceType_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_RequestedServiceType(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di12_Query) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_Query_s* zxwsf_DEEP_CLONE_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_Query_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_Query_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zxwsf_di12_RequestedServiceType_s* e;
      struct zxwsf_di12_RequestedServiceType_s* en;
      struct zxwsf_di12_RequestedServiceType_s* enn;
      for (enn = 0, e = x->RequestedServiceType; e; e = (struct zxwsf_di12_RequestedServiceType_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_RequestedServiceType(c, e, dup_strs);
	  if (!enn)
	      x->RequestedServiceType = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di12_Query) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zxwsf_di12_RequestedServiceType_s* e;
      struct zxwsf_di12_RequestedServiceType_s* en;
      for (e = x->RequestedServiceType; e; e = en) {
	  en = (struct zxwsf_di12_RequestedServiceType_s*)e->gg.g.n;
	  zxwsf_FREE_di12_RequestedServiceType(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_Query) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_Query_s* zxwsf_NEW_di12_Query(struct zx_ctx* c)
{
  struct zxwsf_di12_Query_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Query_s);
  x->gg.g.tok = zxwsf_di12_Query_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_Query) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di12_RequestedServiceType_s* e;
      for (e = x->RequestedServiceType; e; e = (struct zxwsf_di12_RequestedServiceType_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_RequestedServiceType(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_Query) */

int zxwsf_WALK_WO_di12_Query(struct zx_ctx* c, struct zxwsf_di12_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_QueryResponse
#define EL_STRUCT zxwsf_di12_QueryResponse_s
#define EL_NS     di12
#define EL_TAG    QueryResponse

/* FUNC(zxwsf_DUP_STRS_di12_QueryResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Status(c, e);
  }
  {
      struct zxwsf_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_ResourceOffering(c, e);
  }
  {
      struct zxwsf_di12_Credentials_s* e;
      for (e = x->Credentials; e; e = (struct zxwsf_di12_Credentials_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Credentials(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di12_QueryResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_QueryResponse_s* zxwsf_DEEP_CLONE_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_QueryResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_QueryResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  {
      struct zxwsf_di12_Status_s* e;
      struct zxwsf_di12_Status_s* en;
      struct zxwsf_di12_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_ResourceOffering_s* e;
      struct zxwsf_di12_ResourceOffering_s* en;
      struct zxwsf_di12_ResourceOffering_s* enn;
      for (enn = 0, e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_ResourceOffering(c, e, dup_strs);
	  if (!enn)
	      x->ResourceOffering = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_Credentials_s* e;
      struct zxwsf_di12_Credentials_s* en;
      struct zxwsf_di12_Credentials_s* enn;
      for (enn = 0, e = x->Credentials; e; e = (struct zxwsf_di12_Credentials_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Credentials(c, e, dup_strs);
	  if (!enn)
	      x->Credentials = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di12_QueryResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  {
      struct zxwsf_di12_Status_s* e;
      struct zxwsf_di12_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_di12_Status_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Status(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_ResourceOffering_s* e;
      struct zxwsf_di12_ResourceOffering_s* en;
      for (e = x->ResourceOffering; e; e = en) {
	  en = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n;
	  zxwsf_FREE_di12_ResourceOffering(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_Credentials_s* e;
      struct zxwsf_di12_Credentials_s* en;
      for (e = x->Credentials; e; e = en) {
	  en = (struct zxwsf_di12_Credentials_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Credentials(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_QueryResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_QueryResponse_s* zxwsf_NEW_di12_QueryResponse(struct zx_ctx* c)
{
  struct zxwsf_di12_QueryResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di12_QueryResponse_s);
  x->gg.g.tok = zxwsf_di12_QueryResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_QueryResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zxwsf_di12_ResourceOffering_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_ResourceOffering(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_Credentials_s* e;
      for (e = x->Credentials; e; e = (struct zxwsf_di12_Credentials_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Credentials(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_QueryResponse) */

int zxwsf_WALK_WO_di12_QueryResponse(struct zx_ctx* c, struct zxwsf_di12_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_RemoveEntry
#define EL_STRUCT zxwsf_di12_RemoveEntry_s
#define EL_NS     di12
#define EL_TAG    RemoveEntry

/* FUNC(zxwsf_DUP_STRS_di12_RemoveEntry) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->entryID);


}

/* FUNC(zxwsf_DEEP_CLONE_di12_RemoveEntry) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_RemoveEntry_s* zxwsf_DEEP_CLONE_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_RemoveEntry_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_RemoveEntry_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->entryID = zx_clone_attr(c, x->entryID);


  return x;
}

/* FUNC(zxwsf_FREE_di12_RemoveEntry) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->entryID, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_RemoveEntry) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_RemoveEntry_s* zxwsf_NEW_di12_RemoveEntry(struct zx_ctx* c)
{
  struct zxwsf_di12_RemoveEntry_s* x = ZX_ZALLOC(c, struct zxwsf_di12_RemoveEntry_s);
  x->gg.g.tok = zxwsf_di12_RemoveEntry_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_RemoveEntry) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di12_RemoveEntry) */

int zxwsf_WALK_WO_di12_RemoveEntry(struct zx_ctx* c, struct zxwsf_di12_RemoveEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_RequestedServiceType
#define EL_STRUCT zxwsf_di12_RequestedServiceType_s
#define EL_NS     di12
#define EL_TAG    RequestedServiceType

/* FUNC(zxwsf_DUP_STRS_di12_RequestedServiceType) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ServiceType);
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Options(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di12_RequestedServiceType) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_RequestedServiceType_s* zxwsf_DEEP_CLONE_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_RequestedServiceType_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_RequestedServiceType_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ServiceType = zx_deep_clone_simple_elems(c,x->ServiceType, dup_strs);
  {
      struct zxwsf_di12_Options_s* e;
      struct zxwsf_di12_Options_s* en;
      struct zxwsf_di12_Options_s* enn;
      for (enn = 0, e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Options(c, e, dup_strs);
	  if (!enn)
	      x->Options = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di12_RequestedServiceType) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ServiceType, free_strs);
  {
      struct zxwsf_di12_Options_s* e;
      struct zxwsf_di12_Options_s* en;
      for (e = x->Options; e; e = en) {
	  en = (struct zxwsf_di12_Options_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Options(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_RequestedServiceType) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_RequestedServiceType_s* zxwsf_NEW_di12_RequestedServiceType(struct zx_ctx* c)
{
  struct zxwsf_di12_RequestedServiceType_s* x = ZX_ZALLOC(c, struct zxwsf_di12_RequestedServiceType_s);
  x->gg.g.tok = zxwsf_di12_RequestedServiceType_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_RequestedServiceType) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceType, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Options(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_RequestedServiceType) */

int zxwsf_WALK_WO_di12_RequestedServiceType(struct zx_ctx* c, struct zxwsf_di12_RequestedServiceType_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_ResourceID
#define EL_STRUCT zxwsf_di12_ResourceID_s
#define EL_NS     di12
#define EL_TAG    ResourceID

/* FUNC(zxwsf_DUP_STRS_di12_ResourceID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);


}

/* FUNC(zxwsf_DEEP_CLONE_di12_ResourceID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_ResourceID_s* zxwsf_DEEP_CLONE_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_ResourceID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_ResourceID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);


  return x;
}

/* FUNC(zxwsf_FREE_di12_ResourceID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_ResourceID) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_ResourceID_s* zxwsf_NEW_di12_ResourceID(struct zx_ctx* c)
{
  struct zxwsf_di12_ResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_di12_ResourceID_s);
  x->gg.g.tok = zxwsf_di12_ResourceID_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_ResourceID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di12_ResourceID) */

int zxwsf_WALK_WO_di12_ResourceID(struct zx_ctx* c, struct zxwsf_di12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_ResourceOffering
#define EL_STRUCT zxwsf_di12_ResourceOffering_s
#define EL_NS     di12
#define EL_TAG    ResourceOffering

/* FUNC(zxwsf_DUP_STRS_di12_ResourceOffering) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->entryID);

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      for (e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_ServiceInstance(c, e);
  }
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Options(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Abstract);

}

/* FUNC(zxwsf_DEEP_CLONE_di12_ResourceOffering) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_ResourceOffering_s* zxwsf_DEEP_CLONE_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_ResourceOffering_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_ResourceOffering_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->entryID = zx_clone_attr(c, x->entryID);

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      struct zxwsf_di12_ServiceInstance_s* en;
      struct zxwsf_di12_ServiceInstance_s* enn;
      for (enn = 0, e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_ServiceInstance(c, e, dup_strs);
	  if (!enn)
	      x->ServiceInstance = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_Options_s* e;
      struct zxwsf_di12_Options_s* en;
      struct zxwsf_di12_Options_s* enn;
      for (enn = 0, e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Options(c, e, dup_strs);
	  if (!enn)
	      x->Options = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Abstract = zx_deep_clone_simple_elems(c,x->Abstract, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di12_ResourceOffering) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->entryID, free_strs);

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      struct zxwsf_di12_ServiceInstance_s* en;
      for (e = x->ServiceInstance; e; e = en) {
	  en = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n;
	  zxwsf_FREE_di12_ServiceInstance(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_Options_s* e;
      struct zxwsf_di12_Options_s* en;
      for (e = x->Options; e; e = en) {
	  en = (struct zxwsf_di12_Options_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Options(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Abstract, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_ResourceOffering) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_ResourceOffering_s* zxwsf_NEW_di12_ResourceOffering(struct zx_ctx* c)
{
  struct zxwsf_di12_ResourceOffering_s* x = ZX_ZALLOC(c, struct zxwsf_di12_ResourceOffering_s);
  x->gg.g.tok = zxwsf_di12_ResourceOffering_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_ResourceOffering) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      for (e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_ServiceInstance(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Options(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Abstract, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_ResourceOffering) */

int zxwsf_WALK_WO_di12_ResourceOffering(struct zx_ctx* c, struct zxwsf_di12_ResourceOffering_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_ServiceInstance
#define EL_STRUCT zxwsf_di12_ServiceInstance_s
#define EL_NS     di12
#define EL_TAG    ServiceInstance

/* FUNC(zxwsf_DUP_STRS_di12_ServiceInstance) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ServiceType);
  zx_dup_strs_simple_elems(c, x->ProviderID);
  {
      struct zxwsf_di12_Description_s* e;
      for (e = x->Description; e; e = (struct zxwsf_di12_Description_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Description(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di12_ServiceInstance) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_ServiceInstance_s* zxwsf_DEEP_CLONE_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_ServiceInstance_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_ServiceInstance_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ServiceType = zx_deep_clone_simple_elems(c,x->ServiceType, dup_strs);
  x->ProviderID = zx_deep_clone_simple_elems(c,x->ProviderID, dup_strs);
  {
      struct zxwsf_di12_Description_s* e;
      struct zxwsf_di12_Description_s* en;
      struct zxwsf_di12_Description_s* enn;
      for (enn = 0, e = x->Description; e; e = (struct zxwsf_di12_Description_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Description(c, e, dup_strs);
	  if (!enn)
	      x->Description = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di12_ServiceInstance) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ServiceType, free_strs);
  zx_free_simple_elems(c, x->ProviderID, free_strs);
  {
      struct zxwsf_di12_Description_s* e;
      struct zxwsf_di12_Description_s* en;
      for (e = x->Description; e; e = en) {
	  en = (struct zxwsf_di12_Description_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Description(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_ServiceInstance) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_ServiceInstance_s* zxwsf_NEW_di12_ServiceInstance(struct zx_ctx* c)
{
  struct zxwsf_di12_ServiceInstance_s* x = ZX_ZALLOC(c, struct zxwsf_di12_ServiceInstance_s);
  x->gg.g.tok = zxwsf_di12_ServiceInstance_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_ServiceInstance) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceType, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ProviderID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_di12_Description_s* e;
      for (e = x->Description; e; e = (struct zxwsf_di12_Description_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Description(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_ServiceInstance) */

int zxwsf_WALK_WO_di12_ServiceInstance(struct zx_ctx* c, struct zxwsf_di12_ServiceInstance_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di12_Status
#define EL_STRUCT zxwsf_di12_Status_s
#define EL_NS     di12
#define EL_TAG    Status

/* FUNC(zxwsf_DUP_STRS_di12_Status) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->code);
  zx_dup_attr(c, x->ref);
  zx_dup_attr(c, x->comment);

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Status(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di12_Status) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di12_Status_s* zxwsf_DEEP_CLONE_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x, int dup_strs)
{
  x = (struct zxwsf_di12_Status_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di12_Status_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->code = zx_clone_attr(c, x->code);
  x->ref = zx_clone_attr(c, x->ref);
  x->comment = zx_clone_attr(c, x->comment);

  {
      struct zxwsf_di12_Status_s* e;
      struct zxwsf_di12_Status_s* en;
      struct zxwsf_di12_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di12_Status) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->code, free_strs);
  zx_free_attr(c, x->ref, free_strs);
  zx_free_attr(c, x->comment, free_strs);

  {
      struct zxwsf_di12_Status_s* e;
      struct zxwsf_di12_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_di12_Status_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di12_Status) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di12_Status_s* zxwsf_NEW_di12_Status(struct zx_ctx* c)
{
  struct zxwsf_di12_Status_s* x = ZX_ZALLOC(c, struct zxwsf_di12_Status_s);
  x->gg.g.tok = zxwsf_di12_Status_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di12_Status) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_di12_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di12_Status) */

int zxwsf_WALK_WO_di12_Status(struct zx_ctx* c, struct zxwsf_di12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_EndpointContext
#define EL_STRUCT zxwsf_di_EndpointContext_s
#define EL_NS     di
#define EL_TAG    EndpointContext

/* FUNC(zxwsf_DUP_STRS_di_EndpointContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Address);
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_sbf_Framework(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SecurityMechID);
  zx_dup_strs_simple_elems(c, x->Action);

}

/* FUNC(zxwsf_DEEP_CLONE_di_EndpointContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_EndpointContext_s* zxwsf_DEEP_CLONE_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x, int dup_strs)
{
  x = (struct zxwsf_di_EndpointContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_EndpointContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Address = zx_deep_clone_simple_elems(c,x->Address, dup_strs);
  {
      struct zxwsf_sbf_Framework_s* e;
      struct zxwsf_sbf_Framework_s* en;
      struct zxwsf_sbf_Framework_s* enn;
      for (enn = 0, e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_sbf_Framework(c, e, dup_strs);
	  if (!enn)
	      x->Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SecurityMechID = zx_deep_clone_simple_elems(c,x->SecurityMechID, dup_strs);
  x->Action = zx_deep_clone_simple_elems(c,x->Action, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_EndpointContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Address, free_strs);
  {
      struct zxwsf_sbf_Framework_s* e;
      struct zxwsf_sbf_Framework_s* en;
      for (e = x->Framework; e; e = en) {
	  en = (struct zxwsf_sbf_Framework_s*)e->gg.g.n;
	  zxwsf_FREE_sbf_Framework(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SecurityMechID, free_strs);
  zx_free_simple_elems(c, x->Action, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_EndpointContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_EndpointContext_s* zxwsf_NEW_di_EndpointContext(struct zx_ctx* c)
{
  struct zxwsf_di_EndpointContext_s* x = ZX_ZALLOC(c, struct zxwsf_di_EndpointContext_s);
  x->gg.g.tok = zxwsf_di_EndpointContext_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_EndpointContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Address, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_sbf_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SecurityMechID, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Action, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_EndpointContext) */

int zxwsf_WALK_WO_di_EndpointContext(struct zx_ctx* c, struct zxwsf_di_EndpointContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_Framework
#define EL_STRUCT zxwsf_di_Framework_s
#define EL_NS     di
#define EL_TAG    Framework

/* FUNC(zxwsf_DUP_STRS_di_Framework) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->version);


}

/* FUNC(zxwsf_DEEP_CLONE_di_Framework) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_Framework_s* zxwsf_DEEP_CLONE_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x, int dup_strs)
{
  x = (struct zxwsf_di_Framework_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_Framework_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->version = zx_clone_attr(c, x->version);


  return x;
}

/* FUNC(zxwsf_FREE_di_Framework) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->version, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_Framework) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_Framework_s* zxwsf_NEW_di_Framework(struct zx_ctx* c)
{
  struct zxwsf_di_Framework_s* x = ZX_ZALLOC(c, struct zxwsf_di_Framework_s);
  x->gg.g.tok = zxwsf_di_Framework_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_Framework) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_di_Framework) */

int zxwsf_WALK_WO_di_Framework(struct zx_ctx* c, struct zxwsf_di_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_Keys
#define EL_STRUCT zxwsf_di_Keys_s
#define EL_NS     di
#define EL_TAG    Keys

/* FUNC(zxwsf_DUP_STRS_di_Keys) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->KeyDescriptor);

}

/* FUNC(zxwsf_DEEP_CLONE_di_Keys) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_Keys_s* zxwsf_DEEP_CLONE_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x, int dup_strs)
{
  x = (struct zxwsf_di_Keys_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_Keys_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->KeyDescriptor = zx_deep_clone_simple_elems(c,x->KeyDescriptor, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_Keys) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->KeyDescriptor, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_Keys) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_Keys_s* zxwsf_NEW_di_Keys(struct zx_ctx* c)
{
  struct zxwsf_di_Keys_s* x = ZX_ZALLOC(c, struct zxwsf_di_Keys_s);
  x->gg.g.tok = zxwsf_di_Keys_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_Keys) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->KeyDescriptor, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_Keys) */

int zxwsf_WALK_WO_di_Keys(struct zx_ctx* c, struct zxwsf_di_Keys_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_Options
#define EL_STRUCT zxwsf_di_Options_s
#define EL_NS     di
#define EL_TAG    Options

/* FUNC(zxwsf_DUP_STRS_di_Options) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Option);

}

/* FUNC(zxwsf_DEEP_CLONE_di_Options) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_Options_s* zxwsf_DEEP_CLONE_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x, int dup_strs)
{
  x = (struct zxwsf_di_Options_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_Options_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Option = zx_deep_clone_simple_elems(c,x->Option, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_Options) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Option, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_Options) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_Options_s* zxwsf_NEW_di_Options(struct zx_ctx* c)
{
  struct zxwsf_di_Options_s* x = ZX_ZALLOC(c, struct zxwsf_di_Options_s);
  x->gg.g.tok = zxwsf_di_Options_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_Options) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Option, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_Options) */

int zxwsf_WALK_WO_di_Options(struct zx_ctx* c, struct zxwsf_di_Options_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_Query
#define EL_STRUCT zxwsf_di_Query_s
#define EL_NS     di
#define EL_TAG    Query

/* FUNC(zxwsf_DUP_STRS_di_Query) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_RequestedService_s* e;
      for (e = x->RequestedService; e; e = (struct zxwsf_di_RequestedService_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_RequestedService(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_Query) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_Query_s* zxwsf_DEEP_CLONE_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x, int dup_strs)
{
  x = (struct zxwsf_di_Query_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_Query_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_RequestedService_s* e;
      struct zxwsf_di_RequestedService_s* en;
      struct zxwsf_di_RequestedService_s* enn;
      for (enn = 0, e = x->RequestedService; e; e = (struct zxwsf_di_RequestedService_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_RequestedService(c, e, dup_strs);
	  if (!enn)
	      x->RequestedService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_Query) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_RequestedService_s* e;
      struct zxwsf_di_RequestedService_s* en;
      for (e = x->RequestedService; e; e = en) {
	  en = (struct zxwsf_di_RequestedService_s*)e->gg.g.n;
	  zxwsf_FREE_di_RequestedService(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_Query) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_Query_s* zxwsf_NEW_di_Query(struct zx_ctx* c)
{
  struct zxwsf_di_Query_s* x = ZX_ZALLOC(c, struct zxwsf_di_Query_s);
  x->gg.g.tok = zxwsf_di_Query_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_Query) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di_RequestedService_s* e;
      for (e = x->RequestedService; e; e = (struct zxwsf_di_RequestedService_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_RequestedService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_Query) */

int zxwsf_WALK_WO_di_Query(struct zx_ctx* c, struct zxwsf_di_Query_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_QueryResponse
#define EL_STRUCT zxwsf_di_QueryResponse_s
#define EL_NS     di
#define EL_TAG    QueryResponse

/* FUNC(zxwsf_DUP_STRS_di_QueryResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zxwsf_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zxwsf_a_EndpointReference_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_EndpointReference(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_QueryResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_QueryResponse_s* zxwsf_DEEP_CLONE_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di_QueryResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_QueryResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_EndpointReference_s* e;
      struct zxwsf_a_EndpointReference_s* en;
      struct zxwsf_a_EndpointReference_s* enn;
      for (enn = 0, e = x->EndpointReference; e; e = (struct zxwsf_a_EndpointReference_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_EndpointReference(c, e, dup_strs);
	  if (!enn)
	      x->EndpointReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_QueryResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_EndpointReference_s* e;
      struct zxwsf_a_EndpointReference_s* en;
      for (e = x->EndpointReference; e; e = en) {
	  en = (struct zxwsf_a_EndpointReference_s*)e->gg.g.n;
	  zxwsf_FREE_a_EndpointReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_QueryResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_QueryResponse_s* zxwsf_NEW_di_QueryResponse(struct zx_ctx* c)
{
  struct zxwsf_di_QueryResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_QueryResponse_s);
  x->gg.g.tok = zxwsf_di_QueryResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_QueryResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zxwsf_a_EndpointReference_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_EndpointReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_QueryResponse) */

int zxwsf_WALK_WO_di_QueryResponse(struct zx_ctx* c, struct zxwsf_di_QueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_RequestedService
#define EL_STRUCT zxwsf_di_RequestedService_s
#define EL_NS     di
#define EL_TAG    RequestedService

/* FUNC(zxwsf_DUP_STRS_di_RequestedService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->reqID);
  zx_dup_attr(c, x->resultsType);

  zx_dup_strs_simple_elems(c, x->ServiceType);
  zx_dup_strs_simple_elems(c, x->ProviderID);
  {
      struct zxwsf_di_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_Options(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SecurityMechID);
  {
      struct zxwsf_di_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_di_Framework_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_Framework(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Action);

}

/* FUNC(zxwsf_DEEP_CLONE_di_RequestedService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_RequestedService_s* zxwsf_DEEP_CLONE_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x, int dup_strs)
{
  x = (struct zxwsf_di_RequestedService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_RequestedService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->reqID = zx_clone_attr(c, x->reqID);
  x->resultsType = zx_clone_attr(c, x->resultsType);

  x->ServiceType = zx_deep_clone_simple_elems(c,x->ServiceType, dup_strs);
  x->ProviderID = zx_deep_clone_simple_elems(c,x->ProviderID, dup_strs);
  {
      struct zxwsf_di_Options_s* e;
      struct zxwsf_di_Options_s* en;
      struct zxwsf_di_Options_s* enn;
      for (enn = 0, e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_Options(c, e, dup_strs);
	  if (!enn)
	      x->Options = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SecurityMechID = zx_deep_clone_simple_elems(c,x->SecurityMechID, dup_strs);
  {
      struct zxwsf_di_Framework_s* e;
      struct zxwsf_di_Framework_s* en;
      struct zxwsf_di_Framework_s* enn;
      for (enn = 0, e = x->Framework; e; e = (struct zxwsf_di_Framework_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_Framework(c, e, dup_strs);
	  if (!enn)
	      x->Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Action = zx_deep_clone_simple_elems(c,x->Action, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_RequestedService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->reqID, free_strs);
  zx_free_attr(c, x->resultsType, free_strs);

  zx_free_simple_elems(c, x->ServiceType, free_strs);
  zx_free_simple_elems(c, x->ProviderID, free_strs);
  {
      struct zxwsf_di_Options_s* e;
      struct zxwsf_di_Options_s* en;
      for (e = x->Options; e; e = en) {
	  en = (struct zxwsf_di_Options_s*)e->gg.g.n;
	  zxwsf_FREE_di_Options(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SecurityMechID, free_strs);
  {
      struct zxwsf_di_Framework_s* e;
      struct zxwsf_di_Framework_s* en;
      for (e = x->Framework; e; e = en) {
	  en = (struct zxwsf_di_Framework_s*)e->gg.g.n;
	  zxwsf_FREE_di_Framework(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Action, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_RequestedService) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_RequestedService_s* zxwsf_NEW_di_RequestedService(struct zx_ctx* c)
{
  struct zxwsf_di_RequestedService_s* x = ZX_ZALLOC(c, struct zxwsf_di_RequestedService_s);
  x->gg.g.tok = zxwsf_di_RequestedService_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_RequestedService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceType, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ProviderID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_di_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_Options(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SecurityMechID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_di_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_di_Framework_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Action, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_RequestedService) */

int zxwsf_WALK_WO_di_RequestedService(struct zx_ctx* c, struct zxwsf_di_RequestedService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SecurityContext
#define EL_STRUCT zxwsf_di_SecurityContext_s
#define EL_NS     di
#define EL_TAG    SecurityContext

/* FUNC(zxwsf_DUP_STRS_di_SecurityContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->SecurityMechID);
  {
      struct zxwsf_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zxwsf_sec_Token_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_sec_Token(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SecurityContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SecurityContext_s* zxwsf_DEEP_CLONE_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SecurityContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SecurityContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->SecurityMechID = zx_deep_clone_simple_elems(c,x->SecurityMechID, dup_strs);
  {
      struct zxwsf_sec_Token_s* e;
      struct zxwsf_sec_Token_s* en;
      struct zxwsf_sec_Token_s* enn;
      for (enn = 0, e = x->Token; e; e = (struct zxwsf_sec_Token_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_sec_Token(c, e, dup_strs);
	  if (!enn)
	      x->Token = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SecurityContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->SecurityMechID, free_strs);
  {
      struct zxwsf_sec_Token_s* e;
      struct zxwsf_sec_Token_s* en;
      for (e = x->Token; e; e = en) {
	  en = (struct zxwsf_sec_Token_s*)e->gg.g.n;
	  zxwsf_FREE_sec_Token(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SecurityContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SecurityContext_s* zxwsf_NEW_di_SecurityContext(struct zx_ctx* c)
{
  struct zxwsf_di_SecurityContext_s* x = ZX_ZALLOC(c, struct zxwsf_di_SecurityContext_s);
  x->gg.g.tok = zxwsf_di_SecurityContext_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SecurityContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SecurityMechID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_sec_Token_s* e;
      for (e = x->Token; e; e = (struct zxwsf_sec_Token_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_sec_Token(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SecurityContext) */

int zxwsf_WALK_WO_di_SecurityContext(struct zx_ctx* c, struct zxwsf_di_SecurityContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_ServiceContext
#define EL_STRUCT zxwsf_di_ServiceContext_s
#define EL_NS     di
#define EL_TAG    ServiceContext

/* FUNC(zxwsf_DUP_STRS_di_ServiceContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ServiceType);
  {
      struct zxwsf_di_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_Options(c, e);
  }
  {
      struct zxwsf_di_EndpointContext_s* e;
      for (e = x->EndpointContext; e; e = (struct zxwsf_di_EndpointContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_EndpointContext(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_ServiceContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_ServiceContext_s* zxwsf_DEEP_CLONE_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x, int dup_strs)
{
  x = (struct zxwsf_di_ServiceContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_ServiceContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ServiceType = zx_deep_clone_simple_elems(c,x->ServiceType, dup_strs);
  {
      struct zxwsf_di_Options_s* e;
      struct zxwsf_di_Options_s* en;
      struct zxwsf_di_Options_s* enn;
      for (enn = 0, e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_Options(c, e, dup_strs);
	  if (!enn)
	      x->Options = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_EndpointContext_s* e;
      struct zxwsf_di_EndpointContext_s* en;
      struct zxwsf_di_EndpointContext_s* enn;
      for (enn = 0, e = x->EndpointContext; e; e = (struct zxwsf_di_EndpointContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_EndpointContext(c, e, dup_strs);
	  if (!enn)
	      x->EndpointContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_ServiceContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ServiceType, free_strs);
  {
      struct zxwsf_di_Options_s* e;
      struct zxwsf_di_Options_s* en;
      for (e = x->Options; e; e = en) {
	  en = (struct zxwsf_di_Options_s*)e->gg.g.n;
	  zxwsf_FREE_di_Options(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_EndpointContext_s* e;
      struct zxwsf_di_EndpointContext_s* en;
      for (e = x->EndpointContext; e; e = en) {
	  en = (struct zxwsf_di_EndpointContext_s*)e->gg.g.n;
	  zxwsf_FREE_di_EndpointContext(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_ServiceContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_ServiceContext_s* zxwsf_NEW_di_ServiceContext(struct zx_ctx* c)
{
  struct zxwsf_di_ServiceContext_s* x = ZX_ZALLOC(c, struct zxwsf_di_ServiceContext_s);
  x->gg.g.tok = zxwsf_di_ServiceContext_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_ServiceContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ServiceType, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_di_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di_Options_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_Options(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_EndpointContext_s* e;
      for (e = x->EndpointContext; e; e = (struct zxwsf_di_EndpointContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_EndpointContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_ServiceContext) */

int zxwsf_WALK_WO_di_ServiceContext(struct zx_ctx* c, struct zxwsf_di_ServiceContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMD
#define EL_STRUCT zxwsf_di_SvcMD_s
#define EL_NS     di
#define EL_TAG    SvcMD

/* FUNC(zxwsf_DUP_STRS_di_SvcMD) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->svcMDID);

  zx_dup_strs_simple_elems(c, x->Abstract);
  zx_dup_strs_simple_elems(c, x->ProviderID);
  {
      struct zxwsf_di_ServiceContext_s* e;
      for (e = x->ServiceContext; e; e = (struct zxwsf_di_ServiceContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_ServiceContext(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMD) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMD_s* zxwsf_DEEP_CLONE_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMD_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMD_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->svcMDID = zx_clone_attr(c, x->svcMDID);

  x->Abstract = zx_deep_clone_simple_elems(c,x->Abstract, dup_strs);
  x->ProviderID = zx_deep_clone_simple_elems(c,x->ProviderID, dup_strs);
  {
      struct zxwsf_di_ServiceContext_s* e;
      struct zxwsf_di_ServiceContext_s* en;
      struct zxwsf_di_ServiceContext_s* enn;
      for (enn = 0, e = x->ServiceContext; e; e = (struct zxwsf_di_ServiceContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_ServiceContext(c, e, dup_strs);
	  if (!enn)
	      x->ServiceContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMD) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->svcMDID, free_strs);

  zx_free_simple_elems(c, x->Abstract, free_strs);
  zx_free_simple_elems(c, x->ProviderID, free_strs);
  {
      struct zxwsf_di_ServiceContext_s* e;
      struct zxwsf_di_ServiceContext_s* en;
      for (e = x->ServiceContext; e; e = en) {
	  en = (struct zxwsf_di_ServiceContext_s*)e->gg.g.n;
	  zxwsf_FREE_di_ServiceContext(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMD) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMD_s* zxwsf_NEW_di_SvcMD(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMD_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMD_s);
  x->gg.g.tok = zxwsf_di_SvcMD_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMD) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Abstract, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ProviderID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_di_ServiceContext_s* e;
      for (e = x->ServiceContext; e; e = (struct zxwsf_di_ServiceContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_ServiceContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMD) */

int zxwsf_WALK_WO_di_SvcMD(struct zx_ctx* c, struct zxwsf_di_SvcMD_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDAssociationAdd
#define EL_STRUCT zxwsf_di_SvcMDAssociationAdd_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationAdd

/* FUNC(zxwsf_DUP_STRS_di_SvcMDAssociationAdd) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->SvcMDID);

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDAssociationAdd) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDAssociationAdd_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDAssociationAdd_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->SvcMDID = zx_deep_clone_simple_elems(c,x->SvcMDID, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDAssociationAdd) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->SvcMDID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDAssociationAdd) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDAssociationAdd_s* zxwsf_NEW_di_SvcMDAssociationAdd(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDAssociationAdd_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationAdd_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationAdd_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDAssociationAdd) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SvcMDID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDAssociationAdd) */

int zxwsf_WALK_WO_di_SvcMDAssociationAdd(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAdd_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDAssociationAddResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationAddResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationAddResponse

/* FUNC(zxwsf_DUP_STRS_di_SvcMDAssociationAddResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDAssociationAddResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDAssociationAddResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDAssociationAddResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDAssociationAddResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDAssociationAddResponse_s* zxwsf_NEW_di_SvcMDAssociationAddResponse(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDAssociationAddResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationAddResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationAddResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDAssociationAddResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDAssociationAddResponse) */

int zxwsf_WALK_WO_di_SvcMDAssociationAddResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationAddResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDAssociationDelete
#define EL_STRUCT zxwsf_di_SvcMDAssociationDelete_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationDelete

/* FUNC(zxwsf_DUP_STRS_di_SvcMDAssociationDelete) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->SvcMDID);

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDAssociationDelete) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDAssociationDelete_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDAssociationDelete_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->SvcMDID = zx_deep_clone_simple_elems(c,x->SvcMDID, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDAssociationDelete) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->SvcMDID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDAssociationDelete) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDAssociationDelete_s* zxwsf_NEW_di_SvcMDAssociationDelete(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDAssociationDelete_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationDelete_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationDelete_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDAssociationDelete) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SvcMDID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDAssociationDelete) */

int zxwsf_WALK_WO_di_SvcMDAssociationDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDAssociationDeleteResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationDeleteResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationDeleteResponse

/* FUNC(zxwsf_DUP_STRS_di_SvcMDAssociationDeleteResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDAssociationDeleteResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDAssociationDeleteResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDAssociationDeleteResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDAssociationDeleteResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDAssociationDeleteResponse_s* zxwsf_NEW_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationDeleteResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDAssociationDeleteResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDAssociationDeleteResponse) */

int zxwsf_WALK_WO_di_SvcMDAssociationDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDAssociationQuery
#define EL_STRUCT zxwsf_di_SvcMDAssociationQuery_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationQuery

/* FUNC(zxwsf_DUP_STRS_di_SvcMDAssociationQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->SvcMDID);

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDAssociationQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDAssociationQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDAssociationQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->SvcMDID = zx_deep_clone_simple_elems(c,x->SvcMDID, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDAssociationQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->SvcMDID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDAssociationQuery) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDAssociationQuery_s* zxwsf_NEW_di_SvcMDAssociationQuery(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDAssociationQuery_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationQuery_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationQuery_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDAssociationQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SvcMDID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDAssociationQuery) */

int zxwsf_WALK_WO_di_SvcMDAssociationQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDAssociationQueryResponse
#define EL_STRUCT zxwsf_di_SvcMDAssociationQueryResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDAssociationQueryResponse

/* FUNC(zxwsf_DUP_STRS_di_SvcMDAssociationQueryResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SvcMDID);

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDAssociationQueryResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_DEEP_CLONE_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDAssociationQueryResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SvcMDID = zx_deep_clone_simple_elems(c,x->SvcMDID, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDAssociationQueryResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SvcMDID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDAssociationQueryResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDAssociationQueryResponse_s* zxwsf_NEW_di_SvcMDAssociationQueryResponse(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDAssociationQueryResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDAssociationQueryResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDAssociationQueryResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDAssociationQueryResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SvcMDID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDAssociationQueryResponse) */

int zxwsf_WALK_WO_di_SvcMDAssociationQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDAssociationQueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDDelete
#define EL_STRUCT zxwsf_di_SvcMDDelete_s
#define EL_NS     di
#define EL_TAG    SvcMDDelete

/* FUNC(zxwsf_DUP_STRS_di_SvcMDDelete) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->SvcMDID);

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDDelete) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDDelete_s* zxwsf_DEEP_CLONE_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDDelete_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDDelete_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->SvcMDID = zx_deep_clone_simple_elems(c,x->SvcMDID, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDDelete) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->SvcMDID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDDelete) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDDelete_s* zxwsf_NEW_di_SvcMDDelete(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDDelete_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDDelete_s);
  x->gg.g.tok = zxwsf_di_SvcMDDelete_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDDelete) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SvcMDID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDDelete) */

int zxwsf_WALK_WO_di_SvcMDDelete(struct zx_ctx* c, struct zxwsf_di_SvcMDDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDDeleteResponse
#define EL_STRUCT zxwsf_di_SvcMDDeleteResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDDeleteResponse

/* FUNC(zxwsf_DUP_STRS_di_SvcMDDeleteResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDDeleteResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_DEEP_CLONE_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDDeleteResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDDeleteResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDDeleteResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDDeleteResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDDeleteResponse_s* zxwsf_NEW_di_SvcMDDeleteResponse(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDDeleteResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDDeleteResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDDeleteResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDDeleteResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDDeleteResponse) */

int zxwsf_WALK_WO_di_SvcMDDeleteResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDQuery
#define EL_STRUCT zxwsf_di_SvcMDQuery_s
#define EL_NS     di
#define EL_TAG    SvcMDQuery

/* FUNC(zxwsf_DUP_STRS_di_SvcMDQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->SvcMDID);

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDQuery_s* zxwsf_DEEP_CLONE_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->SvcMDID = zx_deep_clone_simple_elems(c,x->SvcMDID, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->SvcMDID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDQuery) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDQuery_s* zxwsf_NEW_di_SvcMDQuery(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDQuery_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDQuery_s);
  x->gg.g.tok = zxwsf_di_SvcMDQuery_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SvcMDID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDQuery) */

int zxwsf_WALK_WO_di_SvcMDQuery(struct zx_ctx* c, struct zxwsf_di_SvcMDQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDQueryResponse
#define EL_STRUCT zxwsf_di_SvcMDQueryResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDQueryResponse

/* FUNC(zxwsf_DUP_STRS_di_SvcMDQueryResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMD(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDQueryResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_DEEP_CLONE_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDQueryResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDQueryResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMD_s* e;
      struct zxwsf_di_SvcMD_s* en;
      struct zxwsf_di_SvcMD_s* enn;
      for (enn = 0, e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMD(c, e, dup_strs);
	  if (!enn)
	      x->SvcMD = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDQueryResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMD_s* e;
      struct zxwsf_di_SvcMD_s* en;
      for (e = x->SvcMD; e; e = en) {
	  en = (struct zxwsf_di_SvcMD_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMD(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDQueryResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDQueryResponse_s* zxwsf_NEW_di_SvcMDQueryResponse(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDQueryResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDQueryResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDQueryResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDQueryResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMD(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDQueryResponse) */

int zxwsf_WALK_WO_di_SvcMDQueryResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDQueryResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDRegister
#define EL_STRUCT zxwsf_di_SvcMDRegister_s
#define EL_NS     di
#define EL_TAG    SvcMDRegister

/* FUNC(zxwsf_DUP_STRS_di_SvcMDRegister) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMD(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDRegister) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDRegister_s* zxwsf_DEEP_CLONE_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDRegister_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDRegister_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMD_s* e;
      struct zxwsf_di_SvcMD_s* en;
      struct zxwsf_di_SvcMD_s* enn;
      for (enn = 0, e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMD(c, e, dup_strs);
	  if (!enn)
	      x->SvcMD = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDRegister) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMD_s* e;
      struct zxwsf_di_SvcMD_s* en;
      for (e = x->SvcMD; e; e = en) {
	  en = (struct zxwsf_di_SvcMD_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMD(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDRegister) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDRegister_s* zxwsf_NEW_di_SvcMDRegister(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDRegister_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDRegister_s);
  x->gg.g.tok = zxwsf_di_SvcMDRegister_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDRegister) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMD(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDRegister) */

int zxwsf_WALK_WO_di_SvcMDRegister(struct zx_ctx* c, struct zxwsf_di_SvcMDRegister_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDRegisterResponse
#define EL_STRUCT zxwsf_di_SvcMDRegisterResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDRegisterResponse

/* FUNC(zxwsf_DUP_STRS_di_SvcMDRegisterResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SvcMDID);
  {
      struct zxwsf_di_Keys_s* e;
      for (e = x->Keys; e; e = (struct zxwsf_di_Keys_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_Keys(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDRegisterResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_DEEP_CLONE_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDRegisterResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDRegisterResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SvcMDID = zx_deep_clone_simple_elems(c,x->SvcMDID, dup_strs);
  {
      struct zxwsf_di_Keys_s* e;
      struct zxwsf_di_Keys_s* en;
      struct zxwsf_di_Keys_s* enn;
      for (enn = 0, e = x->Keys; e; e = (struct zxwsf_di_Keys_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_Keys(c, e, dup_strs);
	  if (!enn)
	      x->Keys = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDRegisterResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SvcMDID, free_strs);
  {
      struct zxwsf_di_Keys_s* e;
      struct zxwsf_di_Keys_s* en;
      for (e = x->Keys; e; e = en) {
	  en = (struct zxwsf_di_Keys_s*)e->gg.g.n;
	  zxwsf_FREE_di_Keys(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDRegisterResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDRegisterResponse_s* zxwsf_NEW_di_SvcMDRegisterResponse(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDRegisterResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDRegisterResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDRegisterResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDRegisterResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SvcMDID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_di_Keys_s* e;
      for (e = x->Keys; e; e = (struct zxwsf_di_Keys_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_Keys(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDRegisterResponse) */

int zxwsf_WALK_WO_di_SvcMDRegisterResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDRegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDReplace
#define EL_STRUCT zxwsf_di_SvcMDReplace_s
#define EL_NS     di
#define EL_TAG    SvcMDReplace

/* FUNC(zxwsf_DUP_STRS_di_SvcMDReplace) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMD(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDReplace) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDReplace_s* zxwsf_DEEP_CLONE_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDReplace_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDReplace_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMD_s* e;
      struct zxwsf_di_SvcMD_s* en;
      struct zxwsf_di_SvcMD_s* enn;
      for (enn = 0, e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMD(c, e, dup_strs);
	  if (!enn)
	      x->SvcMD = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDReplace) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMD_s* e;
      struct zxwsf_di_SvcMD_s* en;
      for (e = x->SvcMD; e; e = en) {
	  en = (struct zxwsf_di_SvcMD_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMD(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDReplace) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDReplace_s* zxwsf_NEW_di_SvcMDReplace(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDReplace_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDReplace_s);
  x->gg.g.tok = zxwsf_di_SvcMDReplace_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDReplace) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di_SvcMD_s* e;
      for (e = x->SvcMD; e; e = (struct zxwsf_di_SvcMD_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMD(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDReplace) */

int zxwsf_WALK_WO_di_SvcMDReplace(struct zx_ctx* c, struct zxwsf_di_SvcMDReplace_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   di_SvcMDReplaceResponse
#define EL_STRUCT zxwsf_di_SvcMDReplaceResponse_s
#define EL_NS     di
#define EL_TAG    SvcMDReplaceResponse

/* FUNC(zxwsf_DUP_STRS_di_SvcMDReplaceResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_di_SvcMDReplaceResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_DEEP_CLONE_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_di_SvcMDReplaceResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_di_SvcMDReplaceResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_di_SvcMDReplaceResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_di_SvcMDReplaceResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_di_SvcMDReplaceResponse_s* zxwsf_NEW_di_SvcMDReplaceResponse(struct zx_ctx* c)
{
  struct zxwsf_di_SvcMDReplaceResponse_s* x = ZX_ZALLOC(c, struct zxwsf_di_SvcMDReplaceResponse_s);
  x->gg.g.tok = zxwsf_di_SvcMDReplaceResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_di_SvcMDReplaceResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_di_SvcMDReplaceResponse) */

int zxwsf_WALK_WO_di_SvcMDReplaceResponse(struct zx_ctx* c, struct zxwsf_di_SvcMDReplaceResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   dise_Body
#define EL_STRUCT zxwsf_dise_Body_s
#define EL_NS     dise
#define EL_TAG    Body

/* FUNC(zxwsf_DUP_STRS_dise_Body) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zxwsf_di_SvcMDAssociationAdd_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDAssociationAdd(c, e);
  }
  {
      struct zxwsf_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDAssociationAddResponse(c, e);
  }
  {
      struct zxwsf_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zxwsf_di_SvcMDAssociationDelete_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDAssociationDelete(c, e);
  }
  {
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDAssociationDeleteResponse(c, e);
  }
  {
      struct zxwsf_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zxwsf_di_SvcMDAssociationQuery_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDAssociationQuery(c, e);
  }
  {
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDAssociationQueryResponse(c, e);
  }
  {
      struct zxwsf_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zxwsf_di_SvcMDRegister_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDRegister(c, e);
  }
  {
      struct zxwsf_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zxwsf_di_SvcMDRegisterResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDRegisterResponse(c, e);
  }
  {
      struct zxwsf_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zxwsf_di_SvcMDDelete_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDDelete(c, e);
  }
  {
      struct zxwsf_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zxwsf_di_SvcMDDeleteResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDDeleteResponse(c, e);
  }
  {
      struct zxwsf_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zxwsf_di_SvcMDQuery_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDQuery(c, e);
  }
  {
      struct zxwsf_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zxwsf_di_SvcMDQueryResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDQueryResponse(c, e);
  }
  {
      struct zxwsf_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zxwsf_di_SvcMDReplace_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDReplace(c, e);
  }
  {
      struct zxwsf_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zxwsf_di_SvcMDReplaceResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_SvcMDReplaceResponse(c, e);
  }
  {
      struct zxwsf_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zxwsf_dise_Fault_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_dise_Fault(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_dise_Body) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_dise_Body_s* zxwsf_DEEP_CLONE_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x, int dup_strs)
{
  x = (struct zxwsf_dise_Body_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_dise_Body_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMDAssociationAdd_s* e;
      struct zxwsf_di_SvcMDAssociationAdd_s* en;
      struct zxwsf_di_SvcMDAssociationAdd_s* enn;
      for (enn = 0, e = x->SvcMDAssociationAdd; e; e = (struct zxwsf_di_SvcMDAssociationAdd_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDAssociationAdd(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationAdd = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationAddResponse_s* e;
      struct zxwsf_di_SvcMDAssociationAddResponse_s* en;
      struct zxwsf_di_SvcMDAssociationAddResponse_s* enn;
      for (enn = 0, e = x->SvcMDAssociationAddResponse; e; e = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDAssociationAddResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationAddResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationDelete_s* e;
      struct zxwsf_di_SvcMDAssociationDelete_s* en;
      struct zxwsf_di_SvcMDAssociationDelete_s* enn;
      for (enn = 0, e = x->SvcMDAssociationDelete; e; e = (struct zxwsf_di_SvcMDAssociationDelete_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDAssociationDelete(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationDelete = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* e;
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* en;
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* enn;
      for (enn = 0, e = x->SvcMDAssociationDeleteResponse; e; e = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDAssociationDeleteResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationDeleteResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationQuery_s* e;
      struct zxwsf_di_SvcMDAssociationQuery_s* en;
      struct zxwsf_di_SvcMDAssociationQuery_s* enn;
      for (enn = 0, e = x->SvcMDAssociationQuery; e; e = (struct zxwsf_di_SvcMDAssociationQuery_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDAssociationQuery(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* e;
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* en;
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* enn;
      for (enn = 0, e = x->SvcMDAssociationQueryResponse; e; e = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDAssociationQueryResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDAssociationQueryResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDRegister_s* e;
      struct zxwsf_di_SvcMDRegister_s* en;
      struct zxwsf_di_SvcMDRegister_s* enn;
      for (enn = 0, e = x->SvcMDRegister; e; e = (struct zxwsf_di_SvcMDRegister_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDRegister(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDRegister = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDRegisterResponse_s* e;
      struct zxwsf_di_SvcMDRegisterResponse_s* en;
      struct zxwsf_di_SvcMDRegisterResponse_s* enn;
      for (enn = 0, e = x->SvcMDRegisterResponse; e; e = (struct zxwsf_di_SvcMDRegisterResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDRegisterResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDRegisterResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDDelete_s* e;
      struct zxwsf_di_SvcMDDelete_s* en;
      struct zxwsf_di_SvcMDDelete_s* enn;
      for (enn = 0, e = x->SvcMDDelete; e; e = (struct zxwsf_di_SvcMDDelete_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDDelete(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDDelete = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDDeleteResponse_s* e;
      struct zxwsf_di_SvcMDDeleteResponse_s* en;
      struct zxwsf_di_SvcMDDeleteResponse_s* enn;
      for (enn = 0, e = x->SvcMDDeleteResponse; e; e = (struct zxwsf_di_SvcMDDeleteResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDDeleteResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDDeleteResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDQuery_s* e;
      struct zxwsf_di_SvcMDQuery_s* en;
      struct zxwsf_di_SvcMDQuery_s* enn;
      for (enn = 0, e = x->SvcMDQuery; e; e = (struct zxwsf_di_SvcMDQuery_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDQuery(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDQueryResponse_s* e;
      struct zxwsf_di_SvcMDQueryResponse_s* en;
      struct zxwsf_di_SvcMDQueryResponse_s* enn;
      for (enn = 0, e = x->SvcMDQueryResponse; e; e = (struct zxwsf_di_SvcMDQueryResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDQueryResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDQueryResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDReplace_s* e;
      struct zxwsf_di_SvcMDReplace_s* en;
      struct zxwsf_di_SvcMDReplace_s* enn;
      for (enn = 0, e = x->SvcMDReplace; e; e = (struct zxwsf_di_SvcMDReplace_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDReplace(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDReplace = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_SvcMDReplaceResponse_s* e;
      struct zxwsf_di_SvcMDReplaceResponse_s* en;
      struct zxwsf_di_SvcMDReplaceResponse_s* enn;
      for (enn = 0, e = x->SvcMDReplaceResponse; e; e = (struct zxwsf_di_SvcMDReplaceResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_SvcMDReplaceResponse(c, e, dup_strs);
	  if (!enn)
	      x->SvcMDReplaceResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_dise_Fault_s* e;
      struct zxwsf_dise_Fault_s* en;
      struct zxwsf_dise_Fault_s* enn;
      for (enn = 0, e = x->Fault; e; e = (struct zxwsf_dise_Fault_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_dise_Fault(c, e, dup_strs);
	  if (!enn)
	      x->Fault = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_dise_Body) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_SvcMDAssociationAdd_s* e;
      struct zxwsf_di_SvcMDAssociationAdd_s* en;
      for (e = x->SvcMDAssociationAdd; e; e = en) {
	  en = (struct zxwsf_di_SvcMDAssociationAdd_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDAssociationAdd(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationAddResponse_s* e;
      struct zxwsf_di_SvcMDAssociationAddResponse_s* en;
      for (e = x->SvcMDAssociationAddResponse; e; e = en) {
	  en = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDAssociationAddResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationDelete_s* e;
      struct zxwsf_di_SvcMDAssociationDelete_s* en;
      for (e = x->SvcMDAssociationDelete; e; e = en) {
	  en = (struct zxwsf_di_SvcMDAssociationDelete_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDAssociationDelete(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* e;
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* en;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = en) {
	  en = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDAssociationDeleteResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationQuery_s* e;
      struct zxwsf_di_SvcMDAssociationQuery_s* en;
      for (e = x->SvcMDAssociationQuery; e; e = en) {
	  en = (struct zxwsf_di_SvcMDAssociationQuery_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDAssociationQuery(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* e;
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* en;
      for (e = x->SvcMDAssociationQueryResponse; e; e = en) {
	  en = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDAssociationQueryResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDRegister_s* e;
      struct zxwsf_di_SvcMDRegister_s* en;
      for (e = x->SvcMDRegister; e; e = en) {
	  en = (struct zxwsf_di_SvcMDRegister_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDRegister(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDRegisterResponse_s* e;
      struct zxwsf_di_SvcMDRegisterResponse_s* en;
      for (e = x->SvcMDRegisterResponse; e; e = en) {
	  en = (struct zxwsf_di_SvcMDRegisterResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDRegisterResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDDelete_s* e;
      struct zxwsf_di_SvcMDDelete_s* en;
      for (e = x->SvcMDDelete; e; e = en) {
	  en = (struct zxwsf_di_SvcMDDelete_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDDelete(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDDeleteResponse_s* e;
      struct zxwsf_di_SvcMDDeleteResponse_s* en;
      for (e = x->SvcMDDeleteResponse; e; e = en) {
	  en = (struct zxwsf_di_SvcMDDeleteResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDDeleteResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDQuery_s* e;
      struct zxwsf_di_SvcMDQuery_s* en;
      for (e = x->SvcMDQuery; e; e = en) {
	  en = (struct zxwsf_di_SvcMDQuery_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDQuery(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDQueryResponse_s* e;
      struct zxwsf_di_SvcMDQueryResponse_s* en;
      for (e = x->SvcMDQueryResponse; e; e = en) {
	  en = (struct zxwsf_di_SvcMDQueryResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDQueryResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDReplace_s* e;
      struct zxwsf_di_SvcMDReplace_s* en;
      for (e = x->SvcMDReplace; e; e = en) {
	  en = (struct zxwsf_di_SvcMDReplace_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDReplace(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_SvcMDReplaceResponse_s* e;
      struct zxwsf_di_SvcMDReplaceResponse_s* en;
      for (e = x->SvcMDReplaceResponse; e; e = en) {
	  en = (struct zxwsf_di_SvcMDReplaceResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di_SvcMDReplaceResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_dise_Fault_s* e;
      struct zxwsf_dise_Fault_s* en;
      for (e = x->Fault; e; e = en) {
	  en = (struct zxwsf_dise_Fault_s*)e->gg.g.n;
	  zxwsf_FREE_dise_Fault(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_dise_Body) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_dise_Body_s* zxwsf_NEW_dise_Body(struct zx_ctx* c)
{
  struct zxwsf_dise_Body_s* x = ZX_ZALLOC(c, struct zxwsf_dise_Body_s);
  x->gg.g.tok = zxwsf_dise_Body_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_dise_Body) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di_SvcMDAssociationAdd_s* e;
      for (e = x->SvcMDAssociationAdd; e; e = (struct zxwsf_di_SvcMDAssociationAdd_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDAssociationAdd(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationAddResponse_s* e;
      for (e = x->SvcMDAssociationAddResponse; e; e = (struct zxwsf_di_SvcMDAssociationAddResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDAssociationAddResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationDelete_s* e;
      for (e = x->SvcMDAssociationDelete; e; e = (struct zxwsf_di_SvcMDAssociationDelete_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDAssociationDelete(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationDeleteResponse_s* e;
      for (e = x->SvcMDAssociationDeleteResponse; e; e = (struct zxwsf_di_SvcMDAssociationDeleteResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDAssociationDeleteResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationQuery_s* e;
      for (e = x->SvcMDAssociationQuery; e; e = (struct zxwsf_di_SvcMDAssociationQuery_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDAssociationQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDAssociationQueryResponse_s* e;
      for (e = x->SvcMDAssociationQueryResponse; e; e = (struct zxwsf_di_SvcMDAssociationQueryResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDAssociationQueryResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDRegister_s* e;
      for (e = x->SvcMDRegister; e; e = (struct zxwsf_di_SvcMDRegister_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDRegister(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDRegisterResponse_s* e;
      for (e = x->SvcMDRegisterResponse; e; e = (struct zxwsf_di_SvcMDRegisterResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDRegisterResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDDelete_s* e;
      for (e = x->SvcMDDelete; e; e = (struct zxwsf_di_SvcMDDelete_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDDelete(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDDeleteResponse_s* e;
      for (e = x->SvcMDDeleteResponse; e; e = (struct zxwsf_di_SvcMDDeleteResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDDeleteResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDQuery_s* e;
      for (e = x->SvcMDQuery; e; e = (struct zxwsf_di_SvcMDQuery_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDQueryResponse_s* e;
      for (e = x->SvcMDQueryResponse; e; e = (struct zxwsf_di_SvcMDQueryResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDQueryResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDReplace_s* e;
      for (e = x->SvcMDReplace; e; e = (struct zxwsf_di_SvcMDReplace_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDReplace(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_SvcMDReplaceResponse_s* e;
      for (e = x->SvcMDReplaceResponse; e; e = (struct zxwsf_di_SvcMDReplaceResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_SvcMDReplaceResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_dise_Fault_s* e;
      for (e = x->Fault; e; e = (struct zxwsf_dise_Fault_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_dise_Fault(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_dise_Body) */

int zxwsf_WALK_WO_dise_Body(struct zx_ctx* c, struct zxwsf_dise_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zxwsf_dise_Envelope_s
#define EL_NS     dise
#define EL_TAG    Envelope

/* FUNC(zxwsf_DUP_STRS_dise_Envelope) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zxwsf_dise_Header_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_dise_Header(c, e);
  }
  {
      struct zxwsf_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zxwsf_dise_Body_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_dise_Body(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_dise_Envelope) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_dise_Envelope_s* zxwsf_DEEP_CLONE_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x, int dup_strs)
{
  x = (struct zxwsf_dise_Envelope_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_dise_Envelope_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_dise_Header_s* e;
      struct zxwsf_dise_Header_s* en;
      struct zxwsf_dise_Header_s* enn;
      for (enn = 0, e = x->Header; e; e = (struct zxwsf_dise_Header_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_dise_Header(c, e, dup_strs);
	  if (!enn)
	      x->Header = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_dise_Body_s* e;
      struct zxwsf_dise_Body_s* en;
      struct zxwsf_dise_Body_s* enn;
      for (enn = 0, e = x->Body; e; e = (struct zxwsf_dise_Body_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_dise_Body(c, e, dup_strs);
	  if (!enn)
	      x->Body = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_dise_Envelope) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_dise_Header_s* e;
      struct zxwsf_dise_Header_s* en;
      for (e = x->Header; e; e = en) {
	  en = (struct zxwsf_dise_Header_s*)e->gg.g.n;
	  zxwsf_FREE_dise_Header(c, e, free_strs);
      }
  }
  {
      struct zxwsf_dise_Body_s* e;
      struct zxwsf_dise_Body_s* en;
      for (e = x->Body; e; e = en) {
	  en = (struct zxwsf_dise_Body_s*)e->gg.g.n;
	  zxwsf_FREE_dise_Body(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_dise_Envelope) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_dise_Envelope_s* zxwsf_NEW_dise_Envelope(struct zx_ctx* c)
{
  struct zxwsf_dise_Envelope_s* x = ZX_ZALLOC(c, struct zxwsf_dise_Envelope_s);
  x->gg.g.tok = zxwsf_dise_Envelope_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_dise_Envelope) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_dise_Header_s* e;
      for (e = x->Header; e; e = (struct zxwsf_dise_Header_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_dise_Header(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_dise_Body_s* e;
      for (e = x->Body; e; e = (struct zxwsf_dise_Body_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_dise_Body(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_dise_Envelope) */

int zxwsf_WALK_WO_dise_Envelope(struct zx_ctx* c, struct zxwsf_dise_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zxwsf_dise_Fault_s
#define EL_NS     dise
#define EL_TAG    Fault

/* FUNC(zxwsf_DUP_STRS_dise_Fault) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->faultcode);
  zx_dup_strs_simple_elems(c, x->faultstring);
  zx_dup_strs_simple_elems(c, x->faultactor);
  {
      struct zxwsf_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zxwsf_dise_detail_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_dise_detail(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_dise_Fault) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_dise_Fault_s* zxwsf_DEEP_CLONE_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x, int dup_strs)
{
  x = (struct zxwsf_dise_Fault_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_dise_Fault_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->faultcode = zx_deep_clone_simple_elems(c,x->faultcode, dup_strs);
  x->faultstring = zx_deep_clone_simple_elems(c,x->faultstring, dup_strs);
  x->faultactor = zx_deep_clone_simple_elems(c,x->faultactor, dup_strs);
  {
      struct zxwsf_dise_detail_s* e;
      struct zxwsf_dise_detail_s* en;
      struct zxwsf_dise_detail_s* enn;
      for (enn = 0, e = x->detail; e; e = (struct zxwsf_dise_detail_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_dise_detail(c, e, dup_strs);
	  if (!enn)
	      x->detail = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_dise_Fault) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->faultcode, free_strs);
  zx_free_simple_elems(c, x->faultstring, free_strs);
  zx_free_simple_elems(c, x->faultactor, free_strs);
  {
      struct zxwsf_dise_detail_s* e;
      struct zxwsf_dise_detail_s* en;
      for (e = x->detail; e; e = en) {
	  en = (struct zxwsf_dise_detail_s*)e->gg.g.n;
	  zxwsf_FREE_dise_detail(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_dise_Fault) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_dise_Fault_s* zxwsf_NEW_dise_Fault(struct zx_ctx* c)
{
  struct zxwsf_dise_Fault_s* x = ZX_ZALLOC(c, struct zxwsf_dise_Fault_s);
  x->gg.g.tok = zxwsf_dise_Fault_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_dise_Fault) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zxwsf_dise_detail_s* e;
      for (e = x->detail; e; e = (struct zxwsf_dise_detail_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_dise_detail(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_dise_Fault) */

int zxwsf_WALK_WO_dise_Fault(struct zx_ctx* c, struct zxwsf_dise_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zxwsf_dise_Header_s
#define EL_NS     dise
#define EL_TAG    Header

/* FUNC(zxwsf_DUP_STRS_dise_Header) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_MessageID(c, e);
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_RelatesTo(c, e);
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReplyTo(c, e);
  }
  {
      struct zxwsf_a_From_s* e;
      for (e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_From(c, e);
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_FaultTo(c, e);
  }
  {
      struct zxwsf_a_To_s* e;
      for (e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_To(c, e);
  }
  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Action(c, e);
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_sbf_Framework(c, e);
  }
  {
      struct zxwsf_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_Framework(c, e);
  }
  {
      struct zxwsf_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_Sender(c, e);
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_CredentialsContext(c, e);
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_EndpointUpdate(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Timeout);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_ProcessingContext(c, e);
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_ApplicationEPR(c, e);
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_RedirectRequest(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_dise_Header) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_dise_Header_s* zxwsf_DEEP_CLONE_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x, int dup_strs)
{
  x = (struct zxwsf_dise_Header_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_dise_Header_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_MessageID_s* e;
      struct zxwsf_a_MessageID_s* en;
      struct zxwsf_a_MessageID_s* enn;
      for (enn = 0, e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_MessageID(c, e, dup_strs);
	  if (!enn)
	      x->MessageID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      struct zxwsf_a_RelatesTo_s* en;
      struct zxwsf_a_RelatesTo_s* enn;
      for (enn = 0, e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_RelatesTo(c, e, dup_strs);
	  if (!enn)
	      x->RelatesTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      struct zxwsf_a_ReplyTo_s* en;
      struct zxwsf_a_ReplyTo_s* enn;
      for (enn = 0, e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReplyTo(c, e, dup_strs);
	  if (!enn)
	      x->ReplyTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_From_s* e;
      struct zxwsf_a_From_s* en;
      struct zxwsf_a_From_s* enn;
      for (enn = 0, e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_From(c, e, dup_strs);
	  if (!enn)
	      x->From = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      struct zxwsf_a_FaultTo_s* en;
      struct zxwsf_a_FaultTo_s* enn;
      for (enn = 0, e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_FaultTo(c, e, dup_strs);
	  if (!enn)
	      x->FaultTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_To_s* e;
      struct zxwsf_a_To_s* en;
      struct zxwsf_a_To_s* enn;
      for (enn = 0, e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_To(c, e, dup_strs);
	  if (!enn)
	      x->To = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Action_s* e;
      struct zxwsf_a_Action_s* en;
      struct zxwsf_a_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      struct zxwsf_sbf_Framework_s* en;
      struct zxwsf_sbf_Framework_s* enn;
      for (enn = 0, e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_sbf_Framework(c, e, dup_strs);
	  if (!enn)
	      x->Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_Framework_s* e;
      struct zxwsf_b_Framework_s* en;
      struct zxwsf_b_Framework_s* enn;
      for (enn = 0, e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_Framework(c, e, dup_strs);
	  if (!enn)
	      x->b_Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_Sender_s* e;
      struct zxwsf_b_Sender_s* en;
      struct zxwsf_b_Sender_s* enn;
      for (enn = 0, e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_Sender(c, e, dup_strs);
	  if (!enn)
	      x->Sender = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      struct zxwsf_b_CredentialsContext_s* en;
      struct zxwsf_b_CredentialsContext_s* enn;
      for (enn = 0, e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_CredentialsContext(c, e, dup_strs);
	  if (!enn)
	      x->CredentialsContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      struct zxwsf_b_EndpointUpdate_s* en;
      struct zxwsf_b_EndpointUpdate_s* enn;
      for (enn = 0, e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_EndpointUpdate(c, e, dup_strs);
	  if (!enn)
	      x->EndpointUpdate = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Timeout = zx_deep_clone_simple_elems(c,x->Timeout, dup_strs);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      struct zxwsf_b_ProcessingContext_s* en;
      struct zxwsf_b_ProcessingContext_s* enn;
      for (enn = 0, e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_ProcessingContext(c, e, dup_strs);
	  if (!enn)
	      x->ProcessingContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      struct zxwsf_b_ApplicationEPR_s* en;
      struct zxwsf_b_ApplicationEPR_s* enn;
      for (enn = 0, e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_ApplicationEPR(c, e, dup_strs);
	  if (!enn)
	      x->ApplicationEPR = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      struct zxwsf_b_RedirectRequest_s* en;
      struct zxwsf_b_RedirectRequest_s* enn;
      for (enn = 0, e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_RedirectRequest(c, e, dup_strs);
	  if (!enn)
	      x->RedirectRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_dise_Header) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_MessageID_s* e;
      struct zxwsf_a_MessageID_s* en;
      for (e = x->MessageID; e; e = en) {
	  en = (struct zxwsf_a_MessageID_s*)e->gg.g.n;
	  zxwsf_FREE_a_MessageID(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      struct zxwsf_a_RelatesTo_s* en;
      for (e = x->RelatesTo; e; e = en) {
	  en = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n;
	  zxwsf_FREE_a_RelatesTo(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      struct zxwsf_a_ReplyTo_s* en;
      for (e = x->ReplyTo; e; e = en) {
	  en = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReplyTo(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_From_s* e;
      struct zxwsf_a_From_s* en;
      for (e = x->From; e; e = en) {
	  en = (struct zxwsf_a_From_s*)e->gg.g.n;
	  zxwsf_FREE_a_From(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      struct zxwsf_a_FaultTo_s* en;
      for (e = x->FaultTo; e; e = en) {
	  en = (struct zxwsf_a_FaultTo_s*)e->gg.g.n;
	  zxwsf_FREE_a_FaultTo(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_To_s* e;
      struct zxwsf_a_To_s* en;
      for (e = x->To; e; e = en) {
	  en = (struct zxwsf_a_To_s*)e->gg.g.n;
	  zxwsf_FREE_a_To(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Action_s* e;
      struct zxwsf_a_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zxwsf_a_Action_s*)e->gg.g.n;
	  zxwsf_FREE_a_Action(c, e, free_strs);
      }
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      struct zxwsf_sbf_Framework_s* en;
      for (e = x->Framework; e; e = en) {
	  en = (struct zxwsf_sbf_Framework_s*)e->gg.g.n;
	  zxwsf_FREE_sbf_Framework(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_Framework_s* e;
      struct zxwsf_b_Framework_s* en;
      for (e = x->b_Framework; e; e = en) {
	  en = (struct zxwsf_b_Framework_s*)e->gg.g.n;
	  zxwsf_FREE_b_Framework(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_Sender_s* e;
      struct zxwsf_b_Sender_s* en;
      for (e = x->Sender; e; e = en) {
	  en = (struct zxwsf_b_Sender_s*)e->gg.g.n;
	  zxwsf_FREE_b_Sender(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      struct zxwsf_b_CredentialsContext_s* en;
      for (e = x->CredentialsContext; e; e = en) {
	  en = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n;
	  zxwsf_FREE_b_CredentialsContext(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      struct zxwsf_b_EndpointUpdate_s* en;
      for (e = x->EndpointUpdate; e; e = en) {
	  en = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n;
	  zxwsf_FREE_b_EndpointUpdate(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Timeout, free_strs);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      struct zxwsf_b_ProcessingContext_s* en;
      for (e = x->ProcessingContext; e; e = en) {
	  en = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n;
	  zxwsf_FREE_b_ProcessingContext(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      struct zxwsf_b_ApplicationEPR_s* en;
      for (e = x->ApplicationEPR; e; e = en) {
	  en = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n;
	  zxwsf_FREE_b_ApplicationEPR(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      struct zxwsf_b_RedirectRequest_s* en;
      for (e = x->RedirectRequest; e; e = en) {
	  en = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n;
	  zxwsf_FREE_b_RedirectRequest(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_dise_Header) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_dise_Header_s* zxwsf_NEW_dise_Header(struct zx_ctx* c)
{
  struct zxwsf_dise_Header_s* x = ZX_ZALLOC(c, struct zxwsf_dise_Header_s);
  x->gg.g.tok = zxwsf_dise_Header_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_dise_Header) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_MessageID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_RelatesTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReplyTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_From_s* e;
      for (e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_From(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_FaultTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_To_s* e;
      for (e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_To(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_sbf_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_Sender(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_CredentialsContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_EndpointUpdate(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Timeout, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_ProcessingContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_ApplicationEPR(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_RedirectRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_dise_Header) */

int zxwsf_WALK_WO_dise_Header(struct zx_ctx* c, struct zxwsf_dise_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zxwsf_dise_detail_s
#define EL_NS     dise
#define EL_TAG    detail

/* FUNC(zxwsf_DUP_STRS_dise_detail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_dise_detail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_dise_detail_s* zxwsf_DEEP_CLONE_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x, int dup_strs)
{
  x = (struct zxwsf_dise_detail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_dise_detail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_dise_detail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_dise_detail) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_dise_detail_s* zxwsf_NEW_dise_detail(struct zx_ctx* c)
{
  struct zxwsf_dise_detail_s* x = ZX_ZALLOC(c, struct zxwsf_dise_detail_s);
  x->gg.g.tok = zxwsf_dise_detail_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_dise_detail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_dise_detail) */

int zxwsf_WALK_WO_dise_detail(struct zx_ctx* c, struct zxwsf_dise_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   e_Body
#define EL_STRUCT zxwsf_e_Body_s
#define EL_NS     e
#define EL_TAG    Body

/* FUNC(zxwsf_DUP_STRS_e_Body) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_Query_s* e;
      for (e = x->Query; e; e = (struct zxwsf_di_Query_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_Query(c, e);
  }
  {
      struct zxwsf_di_QueryResponse_s* e;
      for (e = x->QueryResponse; e; e = (struct zxwsf_di_QueryResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di_QueryResponse(c, e);
  }
  {
      struct zxwsf_di12_Query_s* e;
      for (e = x->di12_Query; e; e = (struct zxwsf_di12_Query_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Query(c, e);
  }
  {
      struct zxwsf_di12_QueryResponse_s* e;
      for (e = x->di12_QueryResponse; e; e = (struct zxwsf_di12_QueryResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_QueryResponse(c, e);
  }
  {
      struct zxwsf_di12_Modify_s* e;
      for (e = x->Modify; e; e = (struct zxwsf_di12_Modify_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Modify(c, e);
  }
  {
      struct zxwsf_di12_ModifyResponse_s* e;
      for (e = x->ModifyResponse; e; e = (struct zxwsf_di12_ModifyResponse_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_ModifyResponse(c, e);
  }
  {
      struct zxwsf_e_Fault_s* e;
      for (e = x->Fault; e; e = (struct zxwsf_e_Fault_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_e_Fault(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_e_Body) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_e_Body_s* zxwsf_DEEP_CLONE_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x, int dup_strs)
{
  x = (struct zxwsf_e_Body_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_e_Body_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_Query_s* e;
      struct zxwsf_di_Query_s* en;
      struct zxwsf_di_Query_s* enn;
      for (enn = 0, e = x->Query; e; e = (struct zxwsf_di_Query_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_Query(c, e, dup_strs);
	  if (!enn)
	      x->Query = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di_QueryResponse_s* e;
      struct zxwsf_di_QueryResponse_s* en;
      struct zxwsf_di_QueryResponse_s* enn;
      for (enn = 0, e = x->QueryResponse; e; e = (struct zxwsf_di_QueryResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di_QueryResponse(c, e, dup_strs);
	  if (!enn)
	      x->QueryResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_Query_s* e;
      struct zxwsf_di12_Query_s* en;
      struct zxwsf_di12_Query_s* enn;
      for (enn = 0, e = x->di12_Query; e; e = (struct zxwsf_di12_Query_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Query(c, e, dup_strs);
	  if (!enn)
	      x->di12_Query = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_QueryResponse_s* e;
      struct zxwsf_di12_QueryResponse_s* en;
      struct zxwsf_di12_QueryResponse_s* enn;
      for (enn = 0, e = x->di12_QueryResponse; e; e = (struct zxwsf_di12_QueryResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_QueryResponse(c, e, dup_strs);
	  if (!enn)
	      x->di12_QueryResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_Modify_s* e;
      struct zxwsf_di12_Modify_s* en;
      struct zxwsf_di12_Modify_s* enn;
      for (enn = 0, e = x->Modify; e; e = (struct zxwsf_di12_Modify_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Modify(c, e, dup_strs);
	  if (!enn)
	      x->Modify = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_ModifyResponse_s* e;
      struct zxwsf_di12_ModifyResponse_s* en;
      struct zxwsf_di12_ModifyResponse_s* enn;
      for (enn = 0, e = x->ModifyResponse; e; e = (struct zxwsf_di12_ModifyResponse_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_ModifyResponse(c, e, dup_strs);
	  if (!enn)
	      x->ModifyResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_e_Fault_s* e;
      struct zxwsf_e_Fault_s* en;
      struct zxwsf_e_Fault_s* enn;
      for (enn = 0, e = x->Fault; e; e = (struct zxwsf_e_Fault_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_e_Fault(c, e, dup_strs);
	  if (!enn)
	      x->Fault = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_e_Body) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_di_Query_s* e;
      struct zxwsf_di_Query_s* en;
      for (e = x->Query; e; e = en) {
	  en = (struct zxwsf_di_Query_s*)e->gg.g.n;
	  zxwsf_FREE_di_Query(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di_QueryResponse_s* e;
      struct zxwsf_di_QueryResponse_s* en;
      for (e = x->QueryResponse; e; e = en) {
	  en = (struct zxwsf_di_QueryResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di_QueryResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_Query_s* e;
      struct zxwsf_di12_Query_s* en;
      for (e = x->di12_Query; e; e = en) {
	  en = (struct zxwsf_di12_Query_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Query(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_QueryResponse_s* e;
      struct zxwsf_di12_QueryResponse_s* en;
      for (e = x->di12_QueryResponse; e; e = en) {
	  en = (struct zxwsf_di12_QueryResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di12_QueryResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_Modify_s* e;
      struct zxwsf_di12_Modify_s* en;
      for (e = x->Modify; e; e = en) {
	  en = (struct zxwsf_di12_Modify_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Modify(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_ModifyResponse_s* e;
      struct zxwsf_di12_ModifyResponse_s* en;
      for (e = x->ModifyResponse; e; e = en) {
	  en = (struct zxwsf_di12_ModifyResponse_s*)e->gg.g.n;
	  zxwsf_FREE_di12_ModifyResponse(c, e, free_strs);
      }
  }
  {
      struct zxwsf_e_Fault_s* e;
      struct zxwsf_e_Fault_s* en;
      for (e = x->Fault; e; e = en) {
	  en = (struct zxwsf_e_Fault_s*)e->gg.g.n;
	  zxwsf_FREE_e_Fault(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_e_Body) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_e_Body_s* zxwsf_NEW_e_Body(struct zx_ctx* c)
{
  struct zxwsf_e_Body_s* x = ZX_ZALLOC(c, struct zxwsf_e_Body_s);
  x->gg.g.tok = zxwsf_e_Body_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_e_Body) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di_Query_s* e;
      for (e = x->Query; e; e = (struct zxwsf_di_Query_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_Query(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di_QueryResponse_s* e;
      for (e = x->QueryResponse; e; e = (struct zxwsf_di_QueryResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di_QueryResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_Query_s* e;
      for (e = x->di12_Query; e; e = (struct zxwsf_di12_Query_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Query(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_QueryResponse_s* e;
      for (e = x->di12_QueryResponse; e; e = (struct zxwsf_di12_QueryResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_QueryResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_Modify_s* e;
      for (e = x->Modify; e; e = (struct zxwsf_di12_Modify_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Modify(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_ModifyResponse_s* e;
      for (e = x->ModifyResponse; e; e = (struct zxwsf_di12_ModifyResponse_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_ModifyResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_e_Fault_s* e;
      for (e = x->Fault; e; e = (struct zxwsf_e_Fault_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_e_Fault(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_e_Body) */

int zxwsf_WALK_WO_e_Body(struct zx_ctx* c, struct zxwsf_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   e_Envelope
#define EL_STRUCT zxwsf_e_Envelope_s
#define EL_NS     e
#define EL_TAG    Envelope

/* FUNC(zxwsf_DUP_STRS_e_Envelope) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_e_Header_s* e;
      for (e = x->Header; e; e = (struct zxwsf_e_Header_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_e_Header(c, e);
  }
  {
      struct zxwsf_e_Body_s* e;
      for (e = x->Body; e; e = (struct zxwsf_e_Body_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_e_Body(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_e_Envelope) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_e_Envelope_s* zxwsf_DEEP_CLONE_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x, int dup_strs)
{
  x = (struct zxwsf_e_Envelope_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_e_Envelope_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_e_Header_s* e;
      struct zxwsf_e_Header_s* en;
      struct zxwsf_e_Header_s* enn;
      for (enn = 0, e = x->Header; e; e = (struct zxwsf_e_Header_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_e_Header(c, e, dup_strs);
	  if (!enn)
	      x->Header = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_e_Body_s* e;
      struct zxwsf_e_Body_s* en;
      struct zxwsf_e_Body_s* enn;
      for (enn = 0, e = x->Body; e; e = (struct zxwsf_e_Body_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_e_Body(c, e, dup_strs);
	  if (!enn)
	      x->Body = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_e_Envelope) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_e_Header_s* e;
      struct zxwsf_e_Header_s* en;
      for (e = x->Header; e; e = en) {
	  en = (struct zxwsf_e_Header_s*)e->gg.g.n;
	  zxwsf_FREE_e_Header(c, e, free_strs);
      }
  }
  {
      struct zxwsf_e_Body_s* e;
      struct zxwsf_e_Body_s* en;
      for (e = x->Body; e; e = en) {
	  en = (struct zxwsf_e_Body_s*)e->gg.g.n;
	  zxwsf_FREE_e_Body(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_e_Envelope) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_e_Envelope_s* zxwsf_NEW_e_Envelope(struct zx_ctx* c)
{
  struct zxwsf_e_Envelope_s* x = ZX_ZALLOC(c, struct zxwsf_e_Envelope_s);
  x->gg.g.tok = zxwsf_e_Envelope_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_e_Envelope) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_e_Header_s* e;
      for (e = x->Header; e; e = (struct zxwsf_e_Header_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_e_Header(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_e_Body_s* e;
      for (e = x->Body; e; e = (struct zxwsf_e_Body_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_e_Body(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_e_Envelope) */

int zxwsf_WALK_WO_e_Envelope(struct zx_ctx* c, struct zxwsf_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   e_Fault
#define EL_STRUCT zxwsf_e_Fault_s
#define EL_NS     e
#define EL_TAG    Fault

/* FUNC(zxwsf_DUP_STRS_e_Fault) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->faultcode);
  zx_dup_strs_simple_elems(c, x->faultstring);
  zx_dup_strs_simple_elems(c, x->faultactor);
  {
      struct zxwsf_e_detail_s* e;
      for (e = x->detail; e; e = (struct zxwsf_e_detail_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_e_detail(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_e_Fault) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_e_Fault_s* zxwsf_DEEP_CLONE_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x, int dup_strs)
{
  x = (struct zxwsf_e_Fault_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_e_Fault_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->faultcode = zx_deep_clone_simple_elems(c,x->faultcode, dup_strs);
  x->faultstring = zx_deep_clone_simple_elems(c,x->faultstring, dup_strs);
  x->faultactor = zx_deep_clone_simple_elems(c,x->faultactor, dup_strs);
  {
      struct zxwsf_e_detail_s* e;
      struct zxwsf_e_detail_s* en;
      struct zxwsf_e_detail_s* enn;
      for (enn = 0, e = x->detail; e; e = (struct zxwsf_e_detail_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_e_detail(c, e, dup_strs);
	  if (!enn)
	      x->detail = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_e_Fault) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->faultcode, free_strs);
  zx_free_simple_elems(c, x->faultstring, free_strs);
  zx_free_simple_elems(c, x->faultactor, free_strs);
  {
      struct zxwsf_e_detail_s* e;
      struct zxwsf_e_detail_s* en;
      for (e = x->detail; e; e = en) {
	  en = (struct zxwsf_e_detail_s*)e->gg.g.n;
	  zxwsf_FREE_e_detail(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_e_Fault) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_e_Fault_s* zxwsf_NEW_e_Fault(struct zx_ctx* c)
{
  struct zxwsf_e_Fault_s* x = ZX_ZALLOC(c, struct zxwsf_e_Fault_s);
  x->gg.g.tok = zxwsf_e_Fault_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_e_Fault) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zxwsf_e_detail_s* e;
      for (e = x->detail; e; e = (struct zxwsf_e_detail_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_e_detail(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_e_Fault) */

int zxwsf_WALK_WO_e_Fault(struct zx_ctx* c, struct zxwsf_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   e_Header
#define EL_STRUCT zxwsf_e_Header_s
#define EL_NS     e
#define EL_TAG    Header

/* FUNC(zxwsf_DUP_STRS_e_Header) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_MessageID(c, e);
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_RelatesTo(c, e);
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_ReplyTo(c, e);
  }
  {
      struct zxwsf_a_From_s* e;
      for (e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_From(c, e);
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_FaultTo(c, e);
  }
  {
      struct zxwsf_a_To_s* e;
      for (e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_To(c, e);
  }
  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_a_Action(c, e);
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_sbf_Framework(c, e);
  }
  {
      struct zxwsf_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_Framework(c, e);
  }
  {
      struct zxwsf_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_Sender(c, e);
  }
  {
      struct zxwsf_b_TargetIdentity_s* e;
      for (e = x->TargetIdentity; e; e = (struct zxwsf_b_TargetIdentity_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_TargetIdentity(c, e);
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_CredentialsContext(c, e);
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_EndpointUpdate(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Timeout);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_ProcessingContext(c, e);
  }
  {
      struct zxwsf_b_Consent_s* e;
      for (e = x->Consent; e; e = (struct zxwsf_b_Consent_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_Consent(c, e);
  }
  {
      struct zxwsf_b_UsageDirective_s* e;
      for (e = x->UsageDirective; e; e = (struct zxwsf_b_UsageDirective_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_UsageDirective(c, e);
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_ApplicationEPR(c, e);
  }
  {
      struct zxwsf_b_UserInteraction_s* e;
      for (e = x->UserInteraction; e; e = (struct zxwsf_b_UserInteraction_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_UserInteraction(c, e);
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b_RedirectRequest(c, e);
  }
  {
      struct zxwsf_b12_Correlation_s* e;
      for (e = x->Correlation; e; e = (struct zxwsf_b12_Correlation_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b12_Correlation(c, e);
  }
  {
      struct zxwsf_b12_Provider_s* e;
      for (e = x->Provider; e; e = (struct zxwsf_b12_Provider_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b12_Provider(c, e);
  }
  {
      struct zxwsf_b12_ProcessingContext_s* e;
      for (e = x->b12_ProcessingContext; e; e = (struct zxwsf_b12_ProcessingContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b12_ProcessingContext(c, e);
  }
  {
      struct zxwsf_b12_Consent_s* e;
      for (e = x->b12_Consent; e; e = (struct zxwsf_b12_Consent_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b12_Consent(c, e);
  }
  {
      struct zxwsf_b12_UsageDirective_s* e;
      for (e = x->b12_UsageDirective; e; e = (struct zxwsf_b12_UsageDirective_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_b12_UsageDirective(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_e_Header) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_e_Header_s* zxwsf_DEEP_CLONE_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x, int dup_strs)
{
  x = (struct zxwsf_e_Header_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_e_Header_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_MessageID_s* e;
      struct zxwsf_a_MessageID_s* en;
      struct zxwsf_a_MessageID_s* enn;
      for (enn = 0, e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_MessageID(c, e, dup_strs);
	  if (!enn)
	      x->MessageID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      struct zxwsf_a_RelatesTo_s* en;
      struct zxwsf_a_RelatesTo_s* enn;
      for (enn = 0, e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_RelatesTo(c, e, dup_strs);
	  if (!enn)
	      x->RelatesTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      struct zxwsf_a_ReplyTo_s* en;
      struct zxwsf_a_ReplyTo_s* enn;
      for (enn = 0, e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_ReplyTo(c, e, dup_strs);
	  if (!enn)
	      x->ReplyTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_From_s* e;
      struct zxwsf_a_From_s* en;
      struct zxwsf_a_From_s* enn;
      for (enn = 0, e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_From(c, e, dup_strs);
	  if (!enn)
	      x->From = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      struct zxwsf_a_FaultTo_s* en;
      struct zxwsf_a_FaultTo_s* enn;
      for (enn = 0, e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_FaultTo(c, e, dup_strs);
	  if (!enn)
	      x->FaultTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_To_s* e;
      struct zxwsf_a_To_s* en;
      struct zxwsf_a_To_s* enn;
      for (enn = 0, e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_To(c, e, dup_strs);
	  if (!enn)
	      x->To = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_a_Action_s* e;
      struct zxwsf_a_Action_s* en;
      struct zxwsf_a_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_a_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      struct zxwsf_sbf_Framework_s* en;
      struct zxwsf_sbf_Framework_s* enn;
      for (enn = 0, e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_sbf_Framework(c, e, dup_strs);
	  if (!enn)
	      x->Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_Framework_s* e;
      struct zxwsf_b_Framework_s* en;
      struct zxwsf_b_Framework_s* enn;
      for (enn = 0, e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_Framework(c, e, dup_strs);
	  if (!enn)
	      x->b_Framework = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_Sender_s* e;
      struct zxwsf_b_Sender_s* en;
      struct zxwsf_b_Sender_s* enn;
      for (enn = 0, e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_Sender(c, e, dup_strs);
	  if (!enn)
	      x->Sender = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_TargetIdentity_s* e;
      struct zxwsf_b_TargetIdentity_s* en;
      struct zxwsf_b_TargetIdentity_s* enn;
      for (enn = 0, e = x->TargetIdentity; e; e = (struct zxwsf_b_TargetIdentity_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_TargetIdentity(c, e, dup_strs);
	  if (!enn)
	      x->TargetIdentity = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      struct zxwsf_b_CredentialsContext_s* en;
      struct zxwsf_b_CredentialsContext_s* enn;
      for (enn = 0, e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_CredentialsContext(c, e, dup_strs);
	  if (!enn)
	      x->CredentialsContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      struct zxwsf_b_EndpointUpdate_s* en;
      struct zxwsf_b_EndpointUpdate_s* enn;
      for (enn = 0, e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_EndpointUpdate(c, e, dup_strs);
	  if (!enn)
	      x->EndpointUpdate = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Timeout = zx_deep_clone_simple_elems(c,x->Timeout, dup_strs);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      struct zxwsf_b_ProcessingContext_s* en;
      struct zxwsf_b_ProcessingContext_s* enn;
      for (enn = 0, e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_ProcessingContext(c, e, dup_strs);
	  if (!enn)
	      x->ProcessingContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_Consent_s* e;
      struct zxwsf_b_Consent_s* en;
      struct zxwsf_b_Consent_s* enn;
      for (enn = 0, e = x->Consent; e; e = (struct zxwsf_b_Consent_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_Consent(c, e, dup_strs);
	  if (!enn)
	      x->Consent = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_UsageDirective_s* e;
      struct zxwsf_b_UsageDirective_s* en;
      struct zxwsf_b_UsageDirective_s* enn;
      for (enn = 0, e = x->UsageDirective; e; e = (struct zxwsf_b_UsageDirective_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_UsageDirective(c, e, dup_strs);
	  if (!enn)
	      x->UsageDirective = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      struct zxwsf_b_ApplicationEPR_s* en;
      struct zxwsf_b_ApplicationEPR_s* enn;
      for (enn = 0, e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_ApplicationEPR(c, e, dup_strs);
	  if (!enn)
	      x->ApplicationEPR = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_UserInteraction_s* e;
      struct zxwsf_b_UserInteraction_s* en;
      struct zxwsf_b_UserInteraction_s* enn;
      for (enn = 0, e = x->UserInteraction; e; e = (struct zxwsf_b_UserInteraction_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_UserInteraction(c, e, dup_strs);
	  if (!enn)
	      x->UserInteraction = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      struct zxwsf_b_RedirectRequest_s* en;
      struct zxwsf_b_RedirectRequest_s* enn;
      for (enn = 0, e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b_RedirectRequest(c, e, dup_strs);
	  if (!enn)
	      x->RedirectRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b12_Correlation_s* e;
      struct zxwsf_b12_Correlation_s* en;
      struct zxwsf_b12_Correlation_s* enn;
      for (enn = 0, e = x->Correlation; e; e = (struct zxwsf_b12_Correlation_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b12_Correlation(c, e, dup_strs);
	  if (!enn)
	      x->Correlation = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b12_Provider_s* e;
      struct zxwsf_b12_Provider_s* en;
      struct zxwsf_b12_Provider_s* enn;
      for (enn = 0, e = x->Provider; e; e = (struct zxwsf_b12_Provider_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b12_Provider(c, e, dup_strs);
	  if (!enn)
	      x->Provider = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b12_ProcessingContext_s* e;
      struct zxwsf_b12_ProcessingContext_s* en;
      struct zxwsf_b12_ProcessingContext_s* enn;
      for (enn = 0, e = x->b12_ProcessingContext; e; e = (struct zxwsf_b12_ProcessingContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b12_ProcessingContext(c, e, dup_strs);
	  if (!enn)
	      x->b12_ProcessingContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b12_Consent_s* e;
      struct zxwsf_b12_Consent_s* en;
      struct zxwsf_b12_Consent_s* enn;
      for (enn = 0, e = x->b12_Consent; e; e = (struct zxwsf_b12_Consent_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b12_Consent(c, e, dup_strs);
	  if (!enn)
	      x->b12_Consent = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_b12_UsageDirective_s* e;
      struct zxwsf_b12_UsageDirective_s* en;
      struct zxwsf_b12_UsageDirective_s* enn;
      for (enn = 0, e = x->b12_UsageDirective; e; e = (struct zxwsf_b12_UsageDirective_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_b12_UsageDirective(c, e, dup_strs);
	  if (!enn)
	      x->b12_UsageDirective = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_e_Header) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_a_MessageID_s* e;
      struct zxwsf_a_MessageID_s* en;
      for (e = x->MessageID; e; e = en) {
	  en = (struct zxwsf_a_MessageID_s*)e->gg.g.n;
	  zxwsf_FREE_a_MessageID(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      struct zxwsf_a_RelatesTo_s* en;
      for (e = x->RelatesTo; e; e = en) {
	  en = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n;
	  zxwsf_FREE_a_RelatesTo(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      struct zxwsf_a_ReplyTo_s* en;
      for (e = x->ReplyTo; e; e = en) {
	  en = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n;
	  zxwsf_FREE_a_ReplyTo(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_From_s* e;
      struct zxwsf_a_From_s* en;
      for (e = x->From; e; e = en) {
	  en = (struct zxwsf_a_From_s*)e->gg.g.n;
	  zxwsf_FREE_a_From(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      struct zxwsf_a_FaultTo_s* en;
      for (e = x->FaultTo; e; e = en) {
	  en = (struct zxwsf_a_FaultTo_s*)e->gg.g.n;
	  zxwsf_FREE_a_FaultTo(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_To_s* e;
      struct zxwsf_a_To_s* en;
      for (e = x->To; e; e = en) {
	  en = (struct zxwsf_a_To_s*)e->gg.g.n;
	  zxwsf_FREE_a_To(c, e, free_strs);
      }
  }
  {
      struct zxwsf_a_Action_s* e;
      struct zxwsf_a_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zxwsf_a_Action_s*)e->gg.g.n;
	  zxwsf_FREE_a_Action(c, e, free_strs);
      }
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      struct zxwsf_sbf_Framework_s* en;
      for (e = x->Framework; e; e = en) {
	  en = (struct zxwsf_sbf_Framework_s*)e->gg.g.n;
	  zxwsf_FREE_sbf_Framework(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_Framework_s* e;
      struct zxwsf_b_Framework_s* en;
      for (e = x->b_Framework; e; e = en) {
	  en = (struct zxwsf_b_Framework_s*)e->gg.g.n;
	  zxwsf_FREE_b_Framework(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_Sender_s* e;
      struct zxwsf_b_Sender_s* en;
      for (e = x->Sender; e; e = en) {
	  en = (struct zxwsf_b_Sender_s*)e->gg.g.n;
	  zxwsf_FREE_b_Sender(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_TargetIdentity_s* e;
      struct zxwsf_b_TargetIdentity_s* en;
      for (e = x->TargetIdentity; e; e = en) {
	  en = (struct zxwsf_b_TargetIdentity_s*)e->gg.g.n;
	  zxwsf_FREE_b_TargetIdentity(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      struct zxwsf_b_CredentialsContext_s* en;
      for (e = x->CredentialsContext; e; e = en) {
	  en = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n;
	  zxwsf_FREE_b_CredentialsContext(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      struct zxwsf_b_EndpointUpdate_s* en;
      for (e = x->EndpointUpdate; e; e = en) {
	  en = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n;
	  zxwsf_FREE_b_EndpointUpdate(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Timeout, free_strs);
  {
      struct zxwsf_b_ProcessingContext_s* e;
      struct zxwsf_b_ProcessingContext_s* en;
      for (e = x->ProcessingContext; e; e = en) {
	  en = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n;
	  zxwsf_FREE_b_ProcessingContext(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_Consent_s* e;
      struct zxwsf_b_Consent_s* en;
      for (e = x->Consent; e; e = en) {
	  en = (struct zxwsf_b_Consent_s*)e->gg.g.n;
	  zxwsf_FREE_b_Consent(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_UsageDirective_s* e;
      struct zxwsf_b_UsageDirective_s* en;
      for (e = x->UsageDirective; e; e = en) {
	  en = (struct zxwsf_b_UsageDirective_s*)e->gg.g.n;
	  zxwsf_FREE_b_UsageDirective(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      struct zxwsf_b_ApplicationEPR_s* en;
      for (e = x->ApplicationEPR; e; e = en) {
	  en = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n;
	  zxwsf_FREE_b_ApplicationEPR(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_UserInteraction_s* e;
      struct zxwsf_b_UserInteraction_s* en;
      for (e = x->UserInteraction; e; e = en) {
	  en = (struct zxwsf_b_UserInteraction_s*)e->gg.g.n;
	  zxwsf_FREE_b_UserInteraction(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      struct zxwsf_b_RedirectRequest_s* en;
      for (e = x->RedirectRequest; e; e = en) {
	  en = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n;
	  zxwsf_FREE_b_RedirectRequest(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b12_Correlation_s* e;
      struct zxwsf_b12_Correlation_s* en;
      for (e = x->Correlation; e; e = en) {
	  en = (struct zxwsf_b12_Correlation_s*)e->gg.g.n;
	  zxwsf_FREE_b12_Correlation(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b12_Provider_s* e;
      struct zxwsf_b12_Provider_s* en;
      for (e = x->Provider; e; e = en) {
	  en = (struct zxwsf_b12_Provider_s*)e->gg.g.n;
	  zxwsf_FREE_b12_Provider(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b12_ProcessingContext_s* e;
      struct zxwsf_b12_ProcessingContext_s* en;
      for (e = x->b12_ProcessingContext; e; e = en) {
	  en = (struct zxwsf_b12_ProcessingContext_s*)e->gg.g.n;
	  zxwsf_FREE_b12_ProcessingContext(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b12_Consent_s* e;
      struct zxwsf_b12_Consent_s* en;
      for (e = x->b12_Consent; e; e = en) {
	  en = (struct zxwsf_b12_Consent_s*)e->gg.g.n;
	  zxwsf_FREE_b12_Consent(c, e, free_strs);
      }
  }
  {
      struct zxwsf_b12_UsageDirective_s* e;
      struct zxwsf_b12_UsageDirective_s* en;
      for (e = x->b12_UsageDirective; e; e = en) {
	  en = (struct zxwsf_b12_UsageDirective_s*)e->gg.g.n;
	  zxwsf_FREE_b12_UsageDirective(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_e_Header) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_e_Header_s* zxwsf_NEW_e_Header(struct zx_ctx* c)
{
  struct zxwsf_e_Header_s* x = ZX_ZALLOC(c, struct zxwsf_e_Header_s);
  x->gg.g.tok = zxwsf_e_Header_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_e_Header) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_a_MessageID_s* e;
      for (e = x->MessageID; e; e = (struct zxwsf_a_MessageID_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_MessageID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_RelatesTo_s* e;
      for (e = x->RelatesTo; e; e = (struct zxwsf_a_RelatesTo_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_RelatesTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_ReplyTo_s* e;
      for (e = x->ReplyTo; e; e = (struct zxwsf_a_ReplyTo_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_ReplyTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_From_s* e;
      for (e = x->From; e; e = (struct zxwsf_a_From_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_From(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_FaultTo_s* e;
      for (e = x->FaultTo; e; e = (struct zxwsf_a_FaultTo_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_FaultTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_To_s* e;
      for (e = x->To; e; e = (struct zxwsf_a_To_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_To(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_a_Action_s* e;
      for (e = x->Action; e; e = (struct zxwsf_a_Action_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_a_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_sbf_Framework_s* e;
      for (e = x->Framework; e; e = (struct zxwsf_sbf_Framework_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_sbf_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_Framework_s* e;
      for (e = x->b_Framework; e; e = (struct zxwsf_b_Framework_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_Framework(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_Sender_s* e;
      for (e = x->Sender; e; e = (struct zxwsf_b_Sender_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_Sender(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_TargetIdentity_s* e;
      for (e = x->TargetIdentity; e; e = (struct zxwsf_b_TargetIdentity_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_TargetIdentity(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_CredentialsContext_s* e;
      for (e = x->CredentialsContext; e; e = (struct zxwsf_b_CredentialsContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_CredentialsContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_EndpointUpdate_s* e;
      for (e = x->EndpointUpdate; e; e = (struct zxwsf_b_EndpointUpdate_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_EndpointUpdate(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Timeout, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_b_ProcessingContext_s* e;
      for (e = x->ProcessingContext; e; e = (struct zxwsf_b_ProcessingContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_ProcessingContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_Consent_s* e;
      for (e = x->Consent; e; e = (struct zxwsf_b_Consent_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_Consent(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_UsageDirective_s* e;
      for (e = x->UsageDirective; e; e = (struct zxwsf_b_UsageDirective_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_UsageDirective(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zxwsf_b_ApplicationEPR_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_ApplicationEPR(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_UserInteraction_s* e;
      for (e = x->UserInteraction; e; e = (struct zxwsf_b_UserInteraction_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_UserInteraction(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zxwsf_b_RedirectRequest_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b_RedirectRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b12_Correlation_s* e;
      for (e = x->Correlation; e; e = (struct zxwsf_b12_Correlation_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b12_Correlation(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b12_Provider_s* e;
      for (e = x->Provider; e; e = (struct zxwsf_b12_Provider_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b12_Provider(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b12_ProcessingContext_s* e;
      for (e = x->b12_ProcessingContext; e; e = (struct zxwsf_b12_ProcessingContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b12_ProcessingContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b12_Consent_s* e;
      for (e = x->b12_Consent; e; e = (struct zxwsf_b12_Consent_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b12_Consent(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_b12_UsageDirective_s* e;
      for (e = x->b12_UsageDirective; e; e = (struct zxwsf_b12_UsageDirective_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_b12_UsageDirective(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_e_Header) */

int zxwsf_WALK_WO_e_Header(struct zx_ctx* c, struct zxwsf_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   e_detail
#define EL_STRUCT zxwsf_e_detail_s
#define EL_NS     e
#define EL_TAG    detail

/* FUNC(zxwsf_DUP_STRS_e_detail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_e_detail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_e_detail_s* zxwsf_DEEP_CLONE_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x, int dup_strs)
{
  x = (struct zxwsf_e_detail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_e_detail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_e_detail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_e_detail) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_e_detail_s* zxwsf_NEW_e_detail(struct zx_ctx* c)
{
  struct zxwsf_e_detail_s* x = ZX_ZALLOC(c, struct zxwsf_e_detail_s);
  x->gg.g.tok = zxwsf_e_detail_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_e_detail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_e_detail) */

int zxwsf_WALK_WO_e_detail(struct zx_ctx* c, struct zxwsf_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Confirm
#define EL_STRUCT zxwsf_is12_Confirm_s
#define EL_NS     is12
#define EL_TAG    Confirm

/* FUNC(zxwsf_DUP_STRS_is12_Confirm) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);

}

/* FUNC(zxwsf_DEEP_CLONE_is12_Confirm) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Confirm_s* zxwsf_DEEP_CLONE_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Confirm_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Confirm_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);

  {
      struct zxwsf_is12_Help_s* e;
      struct zxwsf_is12_Help_s* en;
      struct zxwsf_is12_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is12_Confirm) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);

  {
      struct zxwsf_is12_Help_s* e;
      struct zxwsf_is12_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zxwsf_is12_Help_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Confirm) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Confirm_s* zxwsf_NEW_is12_Confirm(struct zx_ctx* c)
{
  struct zxwsf_is12_Confirm_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Confirm_s);
  x->gg.g.tok = zxwsf_is12_Confirm_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Confirm) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_Confirm) */

int zxwsf_WALK_WO_is12_Confirm(struct zx_ctx* c, struct zxwsf_is12_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_EncryptedResourceID
#define EL_STRUCT zxwsf_is12_EncryptedResourceID_s
#define EL_NS     is12
#define EL_TAG    EncryptedResourceID

/* FUNC(zxwsf_DUP_STRS_is12_EncryptedResourceID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->EncryptedData);
  zx_dup_strs_simple_elems(c, x->EncryptedKey);

}

/* FUNC(zxwsf_DEEP_CLONE_is12_EncryptedResourceID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_EncryptedResourceID_s* zxwsf_DEEP_CLONE_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_EncryptedResourceID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_EncryptedResourceID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->EncryptedData = zx_deep_clone_simple_elems(c,x->EncryptedData, dup_strs);
  x->EncryptedKey = zx_deep_clone_simple_elems(c,x->EncryptedKey, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is12_EncryptedResourceID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->EncryptedData, free_strs);
  zx_free_simple_elems(c, x->EncryptedKey, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_EncryptedResourceID) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_EncryptedResourceID_s* zxwsf_NEW_is12_EncryptedResourceID(struct zx_ctx* c)
{
  struct zxwsf_is12_EncryptedResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_is12_EncryptedResourceID_s);
  x->gg.g.tok = zxwsf_is12_EncryptedResourceID_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_EncryptedResourceID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->EncryptedData, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->EncryptedKey, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_EncryptedResourceID) */

int zxwsf_WALK_WO_is12_EncryptedResourceID(struct zx_ctx* c, struct zxwsf_is12_EncryptedResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Extension
#define EL_STRUCT zxwsf_is12_Extension_s
#define EL_NS     is12
#define EL_TAG    Extension

/* FUNC(zxwsf_DUP_STRS_is12_Extension) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_is12_Extension) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Extension_s* zxwsf_DEEP_CLONE_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Extension_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Extension_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_is12_Extension) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Extension) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Extension_s* zxwsf_NEW_is12_Extension(struct zx_ctx* c)
{
  struct zxwsf_is12_Extension_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Extension_s);
  x->gg.g.tok = zxwsf_is12_Extension_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Extension) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_is12_Extension) */

int zxwsf_WALK_WO_is12_Extension(struct zx_ctx* c, struct zxwsf_is12_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Help
#define EL_STRUCT zxwsf_is12_Help_s
#define EL_NS     is12
#define EL_TAG    Help

/* FUNC(zxwsf_DUP_STRS_is12_Help) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->label);
  zx_dup_attr(c, x->link);
  zx_dup_attr(c, x->moreLink);


}

/* FUNC(zxwsf_DEEP_CLONE_is12_Help) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Help_s* zxwsf_DEEP_CLONE_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Help_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Help_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->label = zx_clone_attr(c, x->label);
  x->link = zx_clone_attr(c, x->link);
  x->moreLink = zx_clone_attr(c, x->moreLink);


  return x;
}

/* FUNC(zxwsf_FREE_is12_Help) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->label, free_strs);
  zx_free_attr(c, x->link, free_strs);
  zx_free_attr(c, x->moreLink, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Help) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Help_s* zxwsf_NEW_is12_Help(struct zx_ctx* c)
{
  struct zxwsf_is12_Help_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Help_s);
  x->gg.g.tok = zxwsf_is12_Help_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Help) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_is12_Help) */

int zxwsf_WALK_WO_is12_Help(struct zx_ctx* c, struct zxwsf_is12_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Inquiry
#define EL_STRUCT zxwsf_is12_Inquiry_s
#define EL_NS     is12
#define EL_TAG    Inquiry

/* FUNC(zxwsf_DUP_STRS_is12_Inquiry) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->title);

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Help(c, e);
  }
  {
      struct zxwsf_is12_Select_s* e;
      for (e = x->Select; e; e = (struct zxwsf_is12_Select_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Select(c, e);
  }
  {
      struct zxwsf_is12_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zxwsf_is12_Confirm_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Confirm(c, e);
  }
  {
      struct zxwsf_is12_Text_s* e;
      for (e = x->Text; e; e = (struct zxwsf_is12_Text_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Text(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_is12_Inquiry) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Inquiry_s* zxwsf_DEEP_CLONE_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Inquiry_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Inquiry_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->title = zx_clone_attr(c, x->title);

  {
      struct zxwsf_is12_Help_s* e;
      struct zxwsf_is12_Help_s* en;
      struct zxwsf_is12_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is12_Select_s* e;
      struct zxwsf_is12_Select_s* en;
      struct zxwsf_is12_Select_s* enn;
      for (enn = 0, e = x->Select; e; e = (struct zxwsf_is12_Select_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Select(c, e, dup_strs);
	  if (!enn)
	      x->Select = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is12_Confirm_s* e;
      struct zxwsf_is12_Confirm_s* en;
      struct zxwsf_is12_Confirm_s* enn;
      for (enn = 0, e = x->Confirm; e; e = (struct zxwsf_is12_Confirm_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Confirm(c, e, dup_strs);
	  if (!enn)
	      x->Confirm = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is12_Text_s* e;
      struct zxwsf_is12_Text_s* en;
      struct zxwsf_is12_Text_s* enn;
      for (enn = 0, e = x->Text; e; e = (struct zxwsf_is12_Text_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Text(c, e, dup_strs);
	  if (!enn)
	      x->Text = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_is12_Inquiry) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->title, free_strs);

  {
      struct zxwsf_is12_Help_s* e;
      struct zxwsf_is12_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zxwsf_is12_Help_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Help(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is12_Select_s* e;
      struct zxwsf_is12_Select_s* en;
      for (e = x->Select; e; e = en) {
	  en = (struct zxwsf_is12_Select_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Select(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is12_Confirm_s* e;
      struct zxwsf_is12_Confirm_s* en;
      for (e = x->Confirm; e; e = en) {
	  en = (struct zxwsf_is12_Confirm_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Confirm(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is12_Text_s* e;
      struct zxwsf_is12_Text_s* en;
      for (e = x->Text; e; e = en) {
	  en = (struct zxwsf_is12_Text_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Text(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Inquiry) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Inquiry_s* zxwsf_NEW_is12_Inquiry(struct zx_ctx* c)
{
  struct zxwsf_is12_Inquiry_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Inquiry_s);
  x->gg.g.tok = zxwsf_is12_Inquiry_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Inquiry) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is12_Select_s* e;
      for (e = x->Select; e; e = (struct zxwsf_is12_Select_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Select(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is12_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zxwsf_is12_Confirm_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Confirm(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is12_Text_s* e;
      for (e = x->Text; e; e = (struct zxwsf_is12_Text_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Text(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_Inquiry) */

int zxwsf_WALK_WO_is12_Inquiry(struct zx_ctx* c, struct zxwsf_is12_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_InteractionRequest
#define EL_STRUCT zxwsf_is12_InteractionRequest_s
#define EL_NS     is12
#define EL_TAG    InteractionRequest

/* FUNC(zxwsf_DUP_STRS_is12_InteractionRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->language);
  zx_dup_attr(c, x->maxInteractTime);
  zx_dup_attr(c, x->signed_is_c_keyword);

  {
      struct zxwsf_is12_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Inquiry(c, e);
  }
  zx_dup_strs_simple_elems(c, x->KeyInfo);

}

/* FUNC(zxwsf_DEEP_CLONE_is12_InteractionRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_InteractionRequest_s* zxwsf_DEEP_CLONE_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_InteractionRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_InteractionRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->language = zx_clone_attr(c, x->language);
  x->maxInteractTime = zx_clone_attr(c, x->maxInteractTime);
  x->signed_is_c_keyword = zx_clone_attr(c, x->signed_is_c_keyword);

  {
      struct zxwsf_is12_Inquiry_s* e;
      struct zxwsf_is12_Inquiry_s* en;
      struct zxwsf_is12_Inquiry_s* enn;
      for (enn = 0, e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Inquiry(c, e, dup_strs);
	  if (!enn)
	      x->Inquiry = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->KeyInfo = zx_deep_clone_simple_elems(c,x->KeyInfo, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is12_InteractionRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->language, free_strs);
  zx_free_attr(c, x->maxInteractTime, free_strs);
  zx_free_attr(c, x->signed_is_c_keyword, free_strs);

  {
      struct zxwsf_is12_Inquiry_s* e;
      struct zxwsf_is12_Inquiry_s* en;
      for (e = x->Inquiry; e; e = en) {
	  en = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Inquiry(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->KeyInfo, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_InteractionRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_InteractionRequest_s* zxwsf_NEW_is12_InteractionRequest(struct zx_ctx* c)
{
  struct zxwsf_is12_InteractionRequest_s* x = ZX_ZALLOC(c, struct zxwsf_is12_InteractionRequest_s);
  x->gg.g.tok = zxwsf_is12_InteractionRequest_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_InteractionRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Inquiry(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->KeyInfo, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_InteractionRequest) */

int zxwsf_WALK_WO_is12_InteractionRequest(struct zx_ctx* c, struct zxwsf_is12_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_InteractionResponse
#define EL_STRUCT zxwsf_is12_InteractionResponse_s
#define EL_NS     is12
#define EL_TAG    InteractionResponse

/* FUNC(zxwsf_DUP_STRS_is12_InteractionResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Status(c, e);
  }
  {
      struct zxwsf_is12_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zxwsf_is12_InteractionStatement_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_InteractionStatement(c, e);
  }
  {
      struct zxwsf_is12_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zxwsf_is12_Parameter_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Parameter(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_is12_InteractionResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_InteractionResponse_s* zxwsf_DEEP_CLONE_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_InteractionResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_InteractionResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is12_Status_s* e;
      struct zxwsf_is12_Status_s* en;
      struct zxwsf_is12_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is12_InteractionStatement_s* e;
      struct zxwsf_is12_InteractionStatement_s* en;
      struct zxwsf_is12_InteractionStatement_s* enn;
      for (enn = 0, e = x->InteractionStatement; e; e = (struct zxwsf_is12_InteractionStatement_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_InteractionStatement(c, e, dup_strs);
	  if (!enn)
	      x->InteractionStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is12_Parameter_s* e;
      struct zxwsf_is12_Parameter_s* en;
      struct zxwsf_is12_Parameter_s* enn;
      for (enn = 0, e = x->Parameter; e; e = (struct zxwsf_is12_Parameter_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Parameter(c, e, dup_strs);
	  if (!enn)
	      x->Parameter = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_is12_InteractionResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is12_Status_s* e;
      struct zxwsf_is12_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_is12_Status_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Status(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is12_InteractionStatement_s* e;
      struct zxwsf_is12_InteractionStatement_s* en;
      for (e = x->InteractionStatement; e; e = en) {
	  en = (struct zxwsf_is12_InteractionStatement_s*)e->gg.g.n;
	  zxwsf_FREE_is12_InteractionStatement(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is12_Parameter_s* e;
      struct zxwsf_is12_Parameter_s* en;
      for (e = x->Parameter; e; e = en) {
	  en = (struct zxwsf_is12_Parameter_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Parameter(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_InteractionResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_InteractionResponse_s* zxwsf_NEW_is12_InteractionResponse(struct zx_ctx* c)
{
  struct zxwsf_is12_InteractionResponse_s* x = ZX_ZALLOC(c, struct zxwsf_is12_InteractionResponse_s);
  x->gg.g.tok = zxwsf_is12_InteractionResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_InteractionResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is12_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zxwsf_is12_InteractionStatement_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_InteractionStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is12_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zxwsf_is12_Parameter_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Parameter(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_InteractionResponse) */

int zxwsf_WALK_WO_is12_InteractionResponse(struct zx_ctx* c, struct zxwsf_is12_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_InteractionService
#define EL_STRUCT zxwsf_is12_InteractionService_s
#define EL_NS     is12
#define EL_TAG    InteractionService

/* FUNC(zxwsf_DUP_STRS_is12_InteractionService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->entryID);

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      for (e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_ServiceInstance(c, e);
  }
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_di12_Options(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Abstract);

}

/* FUNC(zxwsf_DEEP_CLONE_is12_InteractionService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_InteractionService_s* zxwsf_DEEP_CLONE_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_InteractionService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_InteractionService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->entryID = zx_clone_attr(c, x->entryID);

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      struct zxwsf_di12_ServiceInstance_s* en;
      struct zxwsf_di12_ServiceInstance_s* enn;
      for (enn = 0, e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_ServiceInstance(c, e, dup_strs);
	  if (!enn)
	      x->ServiceInstance = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_di12_Options_s* e;
      struct zxwsf_di12_Options_s* en;
      struct zxwsf_di12_Options_s* enn;
      for (enn = 0, e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_di12_Options(c, e, dup_strs);
	  if (!enn)
	      x->Options = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Abstract = zx_deep_clone_simple_elems(c,x->Abstract, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is12_InteractionService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->entryID, free_strs);

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      struct zxwsf_di12_ServiceInstance_s* en;
      for (e = x->ServiceInstance; e; e = en) {
	  en = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n;
	  zxwsf_FREE_di12_ServiceInstance(c, e, free_strs);
      }
  }
  {
      struct zxwsf_di12_Options_s* e;
      struct zxwsf_di12_Options_s* en;
      for (e = x->Options; e; e = en) {
	  en = (struct zxwsf_di12_Options_s*)e->gg.g.n;
	  zxwsf_FREE_di12_Options(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Abstract, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_InteractionService) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_InteractionService_s* zxwsf_NEW_is12_InteractionService(struct zx_ctx* c)
{
  struct zxwsf_is12_InteractionService_s* x = ZX_ZALLOC(c, struct zxwsf_is12_InteractionService_s);
  x->gg.g.tok = zxwsf_is12_InteractionService_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_InteractionService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_di12_ServiceInstance_s* e;
      for (e = x->ServiceInstance; e; e = (struct zxwsf_di12_ServiceInstance_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_ServiceInstance(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_di12_Options_s* e;
      for (e = x->Options; e; e = (struct zxwsf_di12_Options_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_di12_Options(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Abstract, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_InteractionService) */

int zxwsf_WALK_WO_is12_InteractionService(struct zx_ctx* c, struct zxwsf_is12_InteractionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_InteractionStatement
#define EL_STRUCT zxwsf_is12_InteractionStatement_s
#define EL_NS     is12
#define EL_TAG    InteractionStatement

/* FUNC(zxwsf_DUP_STRS_is12_InteractionStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is12_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Inquiry(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Signature);

}

/* FUNC(zxwsf_DEEP_CLONE_is12_InteractionStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_InteractionStatement_s* zxwsf_DEEP_CLONE_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_InteractionStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_InteractionStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is12_Inquiry_s* e;
      struct zxwsf_is12_Inquiry_s* en;
      struct zxwsf_is12_Inquiry_s* enn;
      for (enn = 0, e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Inquiry(c, e, dup_strs);
	  if (!enn)
	      x->Inquiry = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Signature = zx_deep_clone_simple_elems(c,x->Signature, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is12_InteractionStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is12_Inquiry_s* e;
      struct zxwsf_is12_Inquiry_s* en;
      for (e = x->Inquiry; e; e = en) {
	  en = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Inquiry(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Signature, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_InteractionStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_InteractionStatement_s* zxwsf_NEW_is12_InteractionStatement(struct zx_ctx* c)
{
  struct zxwsf_is12_InteractionStatement_s* x = ZX_ZALLOC(c, struct zxwsf_is12_InteractionStatement_s);
  x->gg.g.tok = zxwsf_is12_InteractionStatement_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_InteractionStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is12_Inquiry_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Inquiry(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Signature, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_InteractionStatement) */

int zxwsf_WALK_WO_is12_InteractionStatement(struct zx_ctx* c, struct zxwsf_is12_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Item
#define EL_STRUCT zxwsf_is12_Item_s
#define EL_NS     is12
#define EL_TAG    Item

/* FUNC(zxwsf_DUP_STRS_is12_Item) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->label);
  zx_dup_attr(c, x->value);

  zx_dup_strs_simple_elems(c, x->Hint);

}

/* FUNC(zxwsf_DEEP_CLONE_is12_Item) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Item_s* zxwsf_DEEP_CLONE_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Item_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Item_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->label = zx_clone_attr(c, x->label);
  x->value = zx_clone_attr(c, x->value);

  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is12_Item) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->label, free_strs);
  zx_free_attr(c, x->value, free_strs);

  zx_free_simple_elems(c, x->Hint, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Item) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Item_s* zxwsf_NEW_is12_Item(struct zx_ctx* c)
{
  struct zxwsf_is12_Item_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Item_s);
  x->gg.g.tok = zxwsf_is12_Item_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Item) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_Item) */

int zxwsf_WALK_WO_is12_Item(struct zx_ctx* c, struct zxwsf_is12_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Parameter
#define EL_STRUCT zxwsf_is12_Parameter_s
#define EL_NS     is12
#define EL_TAG    Parameter

/* FUNC(zxwsf_DUP_STRS_is12_Parameter) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);
  zx_dup_attr(c, x->value);


}

/* FUNC(zxwsf_DEEP_CLONE_is12_Parameter) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Parameter_s* zxwsf_DEEP_CLONE_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Parameter_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Parameter_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);
  x->value = zx_clone_attr(c, x->value);


  return x;
}

/* FUNC(zxwsf_FREE_is12_Parameter) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);
  zx_free_attr(c, x->value, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Parameter) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Parameter_s* zxwsf_NEW_is12_Parameter(struct zx_ctx* c)
{
  struct zxwsf_is12_Parameter_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Parameter_s);
  x->gg.g.tok = zxwsf_is12_Parameter_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Parameter) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_is12_Parameter) */

int zxwsf_WALK_WO_is12_Parameter(struct zx_ctx* c, struct zxwsf_is12_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_RedirectRequest
#define EL_STRUCT zxwsf_is12_RedirectRequest_s
#define EL_NS     is12
#define EL_TAG    RedirectRequest

/* FUNC(zxwsf_DUP_STRS_is12_RedirectRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->redirectURL);


}

/* FUNC(zxwsf_DEEP_CLONE_is12_RedirectRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_RedirectRequest_s* zxwsf_DEEP_CLONE_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_RedirectRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_RedirectRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->redirectURL = zx_clone_attr(c, x->redirectURL);


  return x;
}

/* FUNC(zxwsf_FREE_is12_RedirectRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->redirectURL, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_RedirectRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_RedirectRequest_s* zxwsf_NEW_is12_RedirectRequest(struct zx_ctx* c)
{
  struct zxwsf_is12_RedirectRequest_s* x = ZX_ZALLOC(c, struct zxwsf_is12_RedirectRequest_s);
  x->gg.g.tok = zxwsf_is12_RedirectRequest_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_RedirectRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_is12_RedirectRequest) */

int zxwsf_WALK_WO_is12_RedirectRequest(struct zx_ctx* c, struct zxwsf_is12_RedirectRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_ResourceID
#define EL_STRUCT zxwsf_is12_ResourceID_s
#define EL_NS     is12
#define EL_TAG    ResourceID

/* FUNC(zxwsf_DUP_STRS_is12_ResourceID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);


}

/* FUNC(zxwsf_DEEP_CLONE_is12_ResourceID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_ResourceID_s* zxwsf_DEEP_CLONE_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_ResourceID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_ResourceID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);


  return x;
}

/* FUNC(zxwsf_FREE_is12_ResourceID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_ResourceID) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_ResourceID_s* zxwsf_NEW_is12_ResourceID(struct zx_ctx* c)
{
  struct zxwsf_is12_ResourceID_s* x = ZX_ZALLOC(c, struct zxwsf_is12_ResourceID_s);
  x->gg.g.tok = zxwsf_is12_ResourceID_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_ResourceID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_is12_ResourceID) */

int zxwsf_WALK_WO_is12_ResourceID(struct zx_ctx* c, struct zxwsf_is12_ResourceID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Select
#define EL_STRUCT zxwsf_is12_Select_s
#define EL_NS     is12
#define EL_TAG    Select

/* FUNC(zxwsf_DUP_STRS_is12_Select) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);
  zx_dup_attr(c, x->multiple);

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);
  {
      struct zxwsf_is12_Item_s* e;
      for (e = x->Item; e; e = (struct zxwsf_is12_Item_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Item(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_is12_Select) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Select_s* zxwsf_DEEP_CLONE_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Select_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Select_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);
  x->multiple = zx_clone_attr(c, x->multiple);

  {
      struct zxwsf_is12_Help_s* e;
      struct zxwsf_is12_Help_s* en;
      struct zxwsf_is12_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);
  {
      struct zxwsf_is12_Item_s* e;
      struct zxwsf_is12_Item_s* en;
      struct zxwsf_is12_Item_s* enn;
      for (enn = 0, e = x->Item; e; e = (struct zxwsf_is12_Item_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Item(c, e, dup_strs);
	  if (!enn)
	      x->Item = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_is12_Select) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);
  zx_free_attr(c, x->multiple, free_strs);

  {
      struct zxwsf_is12_Help_s* e;
      struct zxwsf_is12_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zxwsf_is12_Help_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);
  {
      struct zxwsf_is12_Item_s* e;
      struct zxwsf_is12_Item_s* en;
      for (e = x->Item; e; e = en) {
	  en = (struct zxwsf_is12_Item_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Item(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Select) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Select_s* zxwsf_NEW_is12_Select(struct zx_ctx* c)
{
  struct zxwsf_is12_Select_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Select_s);
  x->gg.g.tok = zxwsf_is12_Select_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Select) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_is12_Item_s* e;
      for (e = x->Item; e; e = (struct zxwsf_is12_Item_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Item(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_Select) */

int zxwsf_WALK_WO_is12_Select(struct zx_ctx* c, struct zxwsf_is12_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Status
#define EL_STRUCT zxwsf_is12_Status_s
#define EL_NS     is12
#define EL_TAG    Status

/* FUNC(zxwsf_DUP_STRS_is12_Status) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->code);
  zx_dup_attr(c, x->ref);
  zx_dup_attr(c, x->comment);

  {
      struct zxwsf_is12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Status(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_is12_Status) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Status_s* zxwsf_DEEP_CLONE_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Status_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Status_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->code = zx_clone_attr(c, x->code);
  x->ref = zx_clone_attr(c, x->ref);
  x->comment = zx_clone_attr(c, x->comment);

  {
      struct zxwsf_is12_Status_s* e;
      struct zxwsf_is12_Status_s* en;
      struct zxwsf_is12_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_is12_Status) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->code, free_strs);
  zx_free_attr(c, x->ref, free_strs);
  zx_free_attr(c, x->comment, free_strs);

  {
      struct zxwsf_is12_Status_s* e;
      struct zxwsf_is12_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_is12_Status_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Status) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Status_s* zxwsf_NEW_is12_Status(struct zx_ctx* c)
{
  struct zxwsf_is12_Status_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Status_s);
  x->gg.g.tok = zxwsf_is12_Status_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Status) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_is12_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_Status) */

int zxwsf_WALK_WO_is12_Status(struct zx_ctx* c, struct zxwsf_is12_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_Text
#define EL_STRUCT zxwsf_is12_Text_s
#define EL_NS     is12
#define EL_TAG    Text

/* FUNC(zxwsf_DUP_STRS_is12_Text) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);
  zx_dup_attr(c, x->minChars);
  zx_dup_attr(c, x->maxChars);
  zx_dup_attr(c, x->format);

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);

}

/* FUNC(zxwsf_DEEP_CLONE_is12_Text) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_Text_s* zxwsf_DEEP_CLONE_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_Text_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_Text_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);
  x->minChars = zx_clone_attr(c, x->minChars);
  x->maxChars = zx_clone_attr(c, x->maxChars);
  x->format = zx_clone_attr(c, x->format);

  {
      struct zxwsf_is12_Help_s* e;
      struct zxwsf_is12_Help_s* en;
      struct zxwsf_is12_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is12_Text) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);
  zx_free_attr(c, x->minChars, free_strs);
  zx_free_attr(c, x->maxChars, free_strs);
  zx_free_attr(c, x->format, free_strs);

  {
      struct zxwsf_is12_Help_s* e;
      struct zxwsf_is12_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zxwsf_is12_Help_s*)e->gg.g.n;
	  zxwsf_FREE_is12_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_Text) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_Text_s* zxwsf_NEW_is12_Text(struct zx_ctx* c)
{
  struct zxwsf_is12_Text_s* x = ZX_ZALLOC(c, struct zxwsf_is12_Text_s);
  x->gg.g.tok = zxwsf_is12_Text_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_Text) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is12_Help_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_Text) */

int zxwsf_WALK_WO_is12_Text(struct zx_ctx* c, struct zxwsf_is12_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is12_UserInteraction
#define EL_STRUCT zxwsf_is12_UserInteraction_s
#define EL_NS     is12
#define EL_TAG    UserInteraction

/* FUNC(zxwsf_DUP_STRS_is12_UserInteraction) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->interact);
  zx_dup_attr(c, x->language);
  zx_dup_attr(c, x->redirect);
  zx_dup_attr(c, x->maxInteractTime);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->mustUnderstand);

  {
      struct zxwsf_is12_InteractionService_s* e;
      for (e = x->InteractionService; e; e = (struct zxwsf_is12_InteractionService_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is12_InteractionService(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_is12_UserInteraction) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is12_UserInteraction_s* zxwsf_DEEP_CLONE_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x, int dup_strs)
{
  x = (struct zxwsf_is12_UserInteraction_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is12_UserInteraction_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->interact = zx_clone_attr(c, x->interact);
  x->language = zx_clone_attr(c, x->language);
  x->redirect = zx_clone_attr(c, x->redirect);
  x->maxInteractTime = zx_clone_attr(c, x->maxInteractTime);
  x->actor = zx_clone_attr(c, x->actor);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);

  {
      struct zxwsf_is12_InteractionService_s* e;
      struct zxwsf_is12_InteractionService_s* en;
      struct zxwsf_is12_InteractionService_s* enn;
      for (enn = 0, e = x->InteractionService; e; e = (struct zxwsf_is12_InteractionService_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is12_InteractionService(c, e, dup_strs);
	  if (!enn)
	      x->InteractionService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_is12_UserInteraction) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->interact, free_strs);
  zx_free_attr(c, x->language, free_strs);
  zx_free_attr(c, x->redirect, free_strs);
  zx_free_attr(c, x->maxInteractTime, free_strs);
  zx_free_attr(c, x->actor, free_strs);
  zx_free_attr(c, x->mustUnderstand, free_strs);

  {
      struct zxwsf_is12_InteractionService_s* e;
      struct zxwsf_is12_InteractionService_s* en;
      for (e = x->InteractionService; e; e = en) {
	  en = (struct zxwsf_is12_InteractionService_s*)e->gg.g.n;
	  zxwsf_FREE_is12_InteractionService(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is12_UserInteraction) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is12_UserInteraction_s* zxwsf_NEW_is12_UserInteraction(struct zx_ctx* c)
{
  struct zxwsf_is12_UserInteraction_s* x = ZX_ZALLOC(c, struct zxwsf_is12_UserInteraction_s);
  x->gg.g.tok = zxwsf_is12_UserInteraction_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is12_UserInteraction) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is12_InteractionService_s* e;
      for (e = x->InteractionService; e; e = (struct zxwsf_is12_InteractionService_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is12_InteractionService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is12_UserInteraction) */

int zxwsf_WALK_WO_is12_UserInteraction(struct zx_ctx* c, struct zxwsf_is12_UserInteraction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Confirm
#define EL_STRUCT zxwsf_is_Confirm_s
#define EL_NS     is
#define EL_TAG    Confirm

/* FUNC(zxwsf_DUP_STRS_is_Confirm) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);

}

/* FUNC(zxwsf_DEEP_CLONE_is_Confirm) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_Confirm_s* zxwsf_DEEP_CLONE_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x, int dup_strs)
{
  x = (struct zxwsf_is_Confirm_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_Confirm_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);

  {
      struct zxwsf_is_Help_s* e;
      struct zxwsf_is_Help_s* en;
      struct zxwsf_is_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is_Confirm) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);

  {
      struct zxwsf_is_Help_s* e;
      struct zxwsf_is_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zxwsf_is_Help_s*)e->gg.g.n;
	  zxwsf_FREE_is_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_Confirm) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_Confirm_s* zxwsf_NEW_is_Confirm(struct zx_ctx* c)
{
  struct zxwsf_is_Confirm_s* x = ZX_ZALLOC(c, struct zxwsf_is_Confirm_s);
  x->gg.g.tok = zxwsf_is_Confirm_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_Confirm) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is_Confirm) */

int zxwsf_WALK_WO_is_Confirm(struct zx_ctx* c, struct zxwsf_is_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Help
#define EL_STRUCT zxwsf_is_Help_s
#define EL_NS     is
#define EL_TAG    Help

/* FUNC(zxwsf_DUP_STRS_is_Help) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->label);
  zx_dup_attr(c, x->link);
  zx_dup_attr(c, x->moreLink);


}

/* FUNC(zxwsf_DEEP_CLONE_is_Help) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_Help_s* zxwsf_DEEP_CLONE_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x, int dup_strs)
{
  x = (struct zxwsf_is_Help_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_Help_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->label = zx_clone_attr(c, x->label);
  x->link = zx_clone_attr(c, x->link);
  x->moreLink = zx_clone_attr(c, x->moreLink);


  return x;
}

/* FUNC(zxwsf_FREE_is_Help) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->label, free_strs);
  zx_free_attr(c, x->link, free_strs);
  zx_free_attr(c, x->moreLink, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_Help) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_Help_s* zxwsf_NEW_is_Help(struct zx_ctx* c)
{
  struct zxwsf_is_Help_s* x = ZX_ZALLOC(c, struct zxwsf_is_Help_s);
  x->gg.g.tok = zxwsf_is_Help_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_Help) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_is_Help) */

int zxwsf_WALK_WO_is_Help(struct zx_ctx* c, struct zxwsf_is_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Inquiry
#define EL_STRUCT zxwsf_is_Inquiry_s
#define EL_NS     is
#define EL_TAG    Inquiry

/* FUNC(zxwsf_DUP_STRS_is_Inquiry) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->title);

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Help(c, e);
  }
  {
      struct zxwsf_is_Select_s* e;
      for (e = x->Select; e; e = (struct zxwsf_is_Select_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Select(c, e);
  }
  {
      struct zxwsf_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zxwsf_is_Confirm_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Confirm(c, e);
  }
  {
      struct zxwsf_is_Text_s* e;
      for (e = x->Text; e; e = (struct zxwsf_is_Text_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Text(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_is_Inquiry) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_Inquiry_s* zxwsf_DEEP_CLONE_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x, int dup_strs)
{
  x = (struct zxwsf_is_Inquiry_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_Inquiry_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->title = zx_clone_attr(c, x->title);

  {
      struct zxwsf_is_Help_s* e;
      struct zxwsf_is_Help_s* en;
      struct zxwsf_is_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is_Select_s* e;
      struct zxwsf_is_Select_s* en;
      struct zxwsf_is_Select_s* enn;
      for (enn = 0, e = x->Select; e; e = (struct zxwsf_is_Select_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Select(c, e, dup_strs);
	  if (!enn)
	      x->Select = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is_Confirm_s* e;
      struct zxwsf_is_Confirm_s* en;
      struct zxwsf_is_Confirm_s* enn;
      for (enn = 0, e = x->Confirm; e; e = (struct zxwsf_is_Confirm_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Confirm(c, e, dup_strs);
	  if (!enn)
	      x->Confirm = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is_Text_s* e;
      struct zxwsf_is_Text_s* en;
      struct zxwsf_is_Text_s* enn;
      for (enn = 0, e = x->Text; e; e = (struct zxwsf_is_Text_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Text(c, e, dup_strs);
	  if (!enn)
	      x->Text = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_is_Inquiry) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->title, free_strs);

  {
      struct zxwsf_is_Help_s* e;
      struct zxwsf_is_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zxwsf_is_Help_s*)e->gg.g.n;
	  zxwsf_FREE_is_Help(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is_Select_s* e;
      struct zxwsf_is_Select_s* en;
      for (e = x->Select; e; e = en) {
	  en = (struct zxwsf_is_Select_s*)e->gg.g.n;
	  zxwsf_FREE_is_Select(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is_Confirm_s* e;
      struct zxwsf_is_Confirm_s* en;
      for (e = x->Confirm; e; e = en) {
	  en = (struct zxwsf_is_Confirm_s*)e->gg.g.n;
	  zxwsf_FREE_is_Confirm(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is_Text_s* e;
      struct zxwsf_is_Text_s* en;
      for (e = x->Text; e; e = en) {
	  en = (struct zxwsf_is_Text_s*)e->gg.g.n;
	  zxwsf_FREE_is_Text(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_Inquiry) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_Inquiry_s* zxwsf_NEW_is_Inquiry(struct zx_ctx* c)
{
  struct zxwsf_is_Inquiry_s* x = ZX_ZALLOC(c, struct zxwsf_is_Inquiry_s);
  x->gg.g.tok = zxwsf_is_Inquiry_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_Inquiry) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is_Select_s* e;
      for (e = x->Select; e; e = (struct zxwsf_is_Select_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Select(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zxwsf_is_Confirm_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Confirm(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is_Text_s* e;
      for (e = x->Text; e; e = (struct zxwsf_is_Text_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Text(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is_Inquiry) */

int zxwsf_WALK_WO_is_Inquiry(struct zx_ctx* c, struct zxwsf_is_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_InteractionRequest
#define EL_STRUCT zxwsf_is_InteractionRequest_s
#define EL_NS     is
#define EL_TAG    InteractionRequest

/* FUNC(zxwsf_DUP_STRS_is_InteractionRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->language);
  zx_dup_attr(c, x->maxInteractTime);
  zx_dup_attr(c, x->signed_is_c_keyword);

  {
      struct zxwsf_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Inquiry(c, e);
  }
  zx_dup_strs_simple_elems(c, x->KeyInfo);

}

/* FUNC(zxwsf_DEEP_CLONE_is_InteractionRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_InteractionRequest_s* zxwsf_DEEP_CLONE_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x, int dup_strs)
{
  x = (struct zxwsf_is_InteractionRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_InteractionRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->language = zx_clone_attr(c, x->language);
  x->maxInteractTime = zx_clone_attr(c, x->maxInteractTime);
  x->signed_is_c_keyword = zx_clone_attr(c, x->signed_is_c_keyword);

  {
      struct zxwsf_is_Inquiry_s* e;
      struct zxwsf_is_Inquiry_s* en;
      struct zxwsf_is_Inquiry_s* enn;
      for (enn = 0, e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Inquiry(c, e, dup_strs);
	  if (!enn)
	      x->Inquiry = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->KeyInfo = zx_deep_clone_simple_elems(c,x->KeyInfo, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is_InteractionRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->language, free_strs);
  zx_free_attr(c, x->maxInteractTime, free_strs);
  zx_free_attr(c, x->signed_is_c_keyword, free_strs);

  {
      struct zxwsf_is_Inquiry_s* e;
      struct zxwsf_is_Inquiry_s* en;
      for (e = x->Inquiry; e; e = en) {
	  en = (struct zxwsf_is_Inquiry_s*)e->gg.g.n;
	  zxwsf_FREE_is_Inquiry(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->KeyInfo, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_InteractionRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_InteractionRequest_s* zxwsf_NEW_is_InteractionRequest(struct zx_ctx* c)
{
  struct zxwsf_is_InteractionRequest_s* x = ZX_ZALLOC(c, struct zxwsf_is_InteractionRequest_s);
  x->gg.g.tok = zxwsf_is_InteractionRequest_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_InteractionRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Inquiry(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->KeyInfo, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is_InteractionRequest) */

int zxwsf_WALK_WO_is_InteractionRequest(struct zx_ctx* c, struct zxwsf_is_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_InteractionResponse
#define EL_STRUCT zxwsf_is_InteractionResponse_s
#define EL_NS     is
#define EL_TAG    InteractionResponse

/* FUNC(zxwsf_DUP_STRS_is_InteractionResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }
  {
      struct zxwsf_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zxwsf_is_InteractionStatement_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_InteractionStatement(c, e);
  }
  {
      struct zxwsf_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zxwsf_is_Parameter_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Parameter(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_is_InteractionResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_InteractionResponse_s* zxwsf_DEEP_CLONE_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x, int dup_strs)
{
  x = (struct zxwsf_is_InteractionResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_InteractionResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is_InteractionStatement_s* e;
      struct zxwsf_is_InteractionStatement_s* en;
      struct zxwsf_is_InteractionStatement_s* enn;
      for (enn = 0, e = x->InteractionStatement; e; e = (struct zxwsf_is_InteractionStatement_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_InteractionStatement(c, e, dup_strs);
	  if (!enn)
	      x->InteractionStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_is_Parameter_s* e;
      struct zxwsf_is_Parameter_s* en;
      struct zxwsf_is_Parameter_s* enn;
      for (enn = 0, e = x->Parameter; e; e = (struct zxwsf_is_Parameter_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Parameter(c, e, dup_strs);
	  if (!enn)
	      x->Parameter = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_is_InteractionResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is_InteractionStatement_s* e;
      struct zxwsf_is_InteractionStatement_s* en;
      for (e = x->InteractionStatement; e; e = en) {
	  en = (struct zxwsf_is_InteractionStatement_s*)e->gg.g.n;
	  zxwsf_FREE_is_InteractionStatement(c, e, free_strs);
      }
  }
  {
      struct zxwsf_is_Parameter_s* e;
      struct zxwsf_is_Parameter_s* en;
      for (e = x->Parameter; e; e = en) {
	  en = (struct zxwsf_is_Parameter_s*)e->gg.g.n;
	  zxwsf_FREE_is_Parameter(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_InteractionResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_InteractionResponse_s* zxwsf_NEW_is_InteractionResponse(struct zx_ctx* c)
{
  struct zxwsf_is_InteractionResponse_s* x = ZX_ZALLOC(c, struct zxwsf_is_InteractionResponse_s);
  x->gg.g.tok = zxwsf_is_InteractionResponse_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_InteractionResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zxwsf_is_InteractionStatement_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_InteractionStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zxwsf_is_Parameter_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Parameter(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is_InteractionResponse) */

int zxwsf_WALK_WO_is_InteractionResponse(struct zx_ctx* c, struct zxwsf_is_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_InteractionStatement
#define EL_STRUCT zxwsf_is_InteractionStatement_s
#define EL_NS     is
#define EL_TAG    InteractionStatement

/* FUNC(zxwsf_DUP_STRS_is_InteractionStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Inquiry(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Signature);

}

/* FUNC(zxwsf_DEEP_CLONE_is_InteractionStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_InteractionStatement_s* zxwsf_DEEP_CLONE_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x, int dup_strs)
{
  x = (struct zxwsf_is_InteractionStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_InteractionStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is_Inquiry_s* e;
      struct zxwsf_is_Inquiry_s* en;
      struct zxwsf_is_Inquiry_s* enn;
      for (enn = 0, e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Inquiry(c, e, dup_strs);
	  if (!enn)
	      x->Inquiry = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Signature = zx_deep_clone_simple_elems(c,x->Signature, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is_InteractionStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_is_Inquiry_s* e;
      struct zxwsf_is_Inquiry_s* en;
      for (e = x->Inquiry; e; e = en) {
	  en = (struct zxwsf_is_Inquiry_s*)e->gg.g.n;
	  zxwsf_FREE_is_Inquiry(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Signature, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_InteractionStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_InteractionStatement_s* zxwsf_NEW_is_InteractionStatement(struct zx_ctx* c)
{
  struct zxwsf_is_InteractionStatement_s* x = ZX_ZALLOC(c, struct zxwsf_is_InteractionStatement_s);
  x->gg.g.tok = zxwsf_is_InteractionStatement_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_InteractionStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zxwsf_is_Inquiry_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Inquiry(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Signature, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is_InteractionStatement) */

int zxwsf_WALK_WO_is_InteractionStatement(struct zx_ctx* c, struct zxwsf_is_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Item
#define EL_STRUCT zxwsf_is_Item_s
#define EL_NS     is
#define EL_TAG    Item

/* FUNC(zxwsf_DUP_STRS_is_Item) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->label);
  zx_dup_attr(c, x->value);

  zx_dup_strs_simple_elems(c, x->Hint);

}

/* FUNC(zxwsf_DEEP_CLONE_is_Item) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_Item_s* zxwsf_DEEP_CLONE_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x, int dup_strs)
{
  x = (struct zxwsf_is_Item_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_Item_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->label = zx_clone_attr(c, x->label);
  x->value = zx_clone_attr(c, x->value);

  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is_Item) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->label, free_strs);
  zx_free_attr(c, x->value, free_strs);

  zx_free_simple_elems(c, x->Hint, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_Item) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_Item_s* zxwsf_NEW_is_Item(struct zx_ctx* c)
{
  struct zxwsf_is_Item_s* x = ZX_ZALLOC(c, struct zxwsf_is_Item_s);
  x->gg.g.tok = zxwsf_is_Item_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_Item) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is_Item) */

int zxwsf_WALK_WO_is_Item(struct zx_ctx* c, struct zxwsf_is_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Parameter
#define EL_STRUCT zxwsf_is_Parameter_s
#define EL_NS     is
#define EL_TAG    Parameter

/* FUNC(zxwsf_DUP_STRS_is_Parameter) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);
  zx_dup_attr(c, x->value);


}

/* FUNC(zxwsf_DEEP_CLONE_is_Parameter) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_Parameter_s* zxwsf_DEEP_CLONE_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x, int dup_strs)
{
  x = (struct zxwsf_is_Parameter_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_Parameter_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);
  x->value = zx_clone_attr(c, x->value);


  return x;
}

/* FUNC(zxwsf_FREE_is_Parameter) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);
  zx_free_attr(c, x->value, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_Parameter) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_Parameter_s* zxwsf_NEW_is_Parameter(struct zx_ctx* c)
{
  struct zxwsf_is_Parameter_s* x = ZX_ZALLOC(c, struct zxwsf_is_Parameter_s);
  x->gg.g.tok = zxwsf_is_Parameter_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_Parameter) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_is_Parameter) */

int zxwsf_WALK_WO_is_Parameter(struct zx_ctx* c, struct zxwsf_is_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Select
#define EL_STRUCT zxwsf_is_Select_s
#define EL_NS     is
#define EL_TAG    Select

/* FUNC(zxwsf_DUP_STRS_is_Select) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);
  zx_dup_attr(c, x->multiple);

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);
  {
      struct zxwsf_is_Item_s* e;
      for (e = x->Item; e; e = (struct zxwsf_is_Item_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Item(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_is_Select) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_Select_s* zxwsf_DEEP_CLONE_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x, int dup_strs)
{
  x = (struct zxwsf_is_Select_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_Select_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);
  x->multiple = zx_clone_attr(c, x->multiple);

  {
      struct zxwsf_is_Help_s* e;
      struct zxwsf_is_Help_s* en;
      struct zxwsf_is_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);
  {
      struct zxwsf_is_Item_s* e;
      struct zxwsf_is_Item_s* en;
      struct zxwsf_is_Item_s* enn;
      for (enn = 0, e = x->Item; e; e = (struct zxwsf_is_Item_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Item(c, e, dup_strs);
	  if (!enn)
	      x->Item = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_is_Select) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);
  zx_free_attr(c, x->multiple, free_strs);

  {
      struct zxwsf_is_Help_s* e;
      struct zxwsf_is_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zxwsf_is_Help_s*)e->gg.g.n;
	  zxwsf_FREE_is_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);
  {
      struct zxwsf_is_Item_s* e;
      struct zxwsf_is_Item_s* en;
      for (e = x->Item; e; e = en) {
	  en = (struct zxwsf_is_Item_s*)e->gg.g.n;
	  zxwsf_FREE_is_Item(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_Select) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_Select_s* zxwsf_NEW_is_Select(struct zx_ctx* c)
{
  struct zxwsf_is_Select_s* x = ZX_ZALLOC(c, struct zxwsf_is_Select_s);
  x->gg.g.tok = zxwsf_is_Select_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_Select) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_is_Item_s* e;
      for (e = x->Item; e; e = (struct zxwsf_is_Item_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Item(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is_Select) */

int zxwsf_WALK_WO_is_Select(struct zx_ctx* c, struct zxwsf_is_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   is_Text
#define EL_STRUCT zxwsf_is_Text_s
#define EL_NS     is
#define EL_TAG    Text

/* FUNC(zxwsf_DUP_STRS_is_Text) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);
  zx_dup_attr(c, x->minChars);
  zx_dup_attr(c, x->maxChars);
  zx_dup_attr(c, x->format);

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_is_Help(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Hint);
  zx_dup_strs_simple_elems(c, x->Label);
  zx_dup_strs_simple_elems(c, x->Value);

}

/* FUNC(zxwsf_DEEP_CLONE_is_Text) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_is_Text_s* zxwsf_DEEP_CLONE_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x, int dup_strs)
{
  x = (struct zxwsf_is_Text_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_is_Text_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);
  x->minChars = zx_clone_attr(c, x->minChars);
  x->maxChars = zx_clone_attr(c, x->maxChars);
  x->format = zx_clone_attr(c, x->format);

  {
      struct zxwsf_is_Help_s* e;
      struct zxwsf_is_Help_s* en;
      struct zxwsf_is_Help_s* enn;
      for (enn = 0, e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_is_Help(c, e, dup_strs);
	  if (!enn)
	      x->Help = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Hint = zx_deep_clone_simple_elems(c,x->Hint, dup_strs);
  x->Label = zx_deep_clone_simple_elems(c,x->Label, dup_strs);
  x->Value = zx_deep_clone_simple_elems(c,x->Value, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_is_Text) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);
  zx_free_attr(c, x->minChars, free_strs);
  zx_free_attr(c, x->maxChars, free_strs);
  zx_free_attr(c, x->format, free_strs);

  {
      struct zxwsf_is_Help_s* e;
      struct zxwsf_is_Help_s* en;
      for (e = x->Help; e; e = en) {
	  en = (struct zxwsf_is_Help_s*)e->gg.g.n;
	  zxwsf_FREE_is_Help(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Hint, free_strs);
  zx_free_simple_elems(c, x->Label, free_strs);
  zx_free_simple_elems(c, x->Value, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_is_Text) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_is_Text_s* zxwsf_NEW_is_Text(struct zx_ctx* c)
{
  struct zxwsf_is_Text_s* x = ZX_ZALLOC(c, struct zxwsf_is_Text_s);
  x->gg.g.tok = zxwsf_is_Text_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_is_Text) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_is_Help_s* e;
      for (e = x->Help; e; e = (struct zxwsf_is_Help_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_is_Help(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Hint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Label, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Value, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_is_Text) */

int zxwsf_WALK_WO_is_Text(struct zx_ctx* c, struct zxwsf_is_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   lu_Extension
#define EL_STRUCT zxwsf_lu_Extension_s
#define EL_NS     lu
#define EL_TAG    Extension

/* FUNC(zxwsf_DUP_STRS_lu_Extension) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_lu_Extension) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_lu_Extension_s* zxwsf_DEEP_CLONE_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x, int dup_strs)
{
  x = (struct zxwsf_lu_Extension_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_lu_Extension_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_lu_Extension) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_lu_Extension) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_lu_Extension_s* zxwsf_NEW_lu_Extension(struct zx_ctx* c)
{
  struct zxwsf_lu_Extension_s* x = ZX_ZALLOC(c, struct zxwsf_lu_Extension_s);
  x->gg.g.tok = zxwsf_lu_Extension_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_lu_Extension) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_lu_Extension) */

int zxwsf_WALK_WO_lu_Extension(struct zx_ctx* c, struct zxwsf_lu_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   lu_Status
#define EL_STRUCT zxwsf_lu_Status_s
#define EL_NS     lu
#define EL_TAG    Status

/* FUNC(zxwsf_DUP_STRS_lu_Status) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->code);
  zx_dup_attr(c, x->ref);
  zx_dup_attr(c, x->comment);

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_lu_Status(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_lu_Status) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_lu_Status_s* zxwsf_DEEP_CLONE_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x, int dup_strs)
{
  x = (struct zxwsf_lu_Status_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_lu_Status_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->code = zx_clone_attr(c, x->code);
  x->ref = zx_clone_attr(c, x->ref);
  x->comment = zx_clone_attr(c, x->comment);

  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      struct zxwsf_lu_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_lu_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_lu_Status) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->code, free_strs);
  zx_free_attr(c, x->ref, free_strs);
  zx_free_attr(c, x->comment, free_strs);

  {
      struct zxwsf_lu_Status_s* e;
      struct zxwsf_lu_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zxwsf_lu_Status_s*)e->gg.g.n;
	  zxwsf_FREE_lu_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_lu_Status) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_lu_Status_s* zxwsf_NEW_lu_Status(struct zx_ctx* c)
{
  struct zxwsf_lu_Status_s* x = ZX_ZALLOC(c, struct zxwsf_lu_Status_s);
  x->gg.g.tok = zxwsf_lu_Status_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_lu_Status) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zxwsf_lu_Status_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_lu_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_lu_Status) */

int zxwsf_WALK_WO_lu_Status(struct zx_ctx* c, struct zxwsf_lu_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   lu_TestResult
#define EL_STRUCT zxwsf_lu_TestResult_s
#define EL_NS     lu
#define EL_TAG    TestResult

/* FUNC(zxwsf_DUP_STRS_lu_TestResult) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->itemIDRef);


}

/* FUNC(zxwsf_DEEP_CLONE_lu_TestResult) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_lu_TestResult_s* zxwsf_DEEP_CLONE_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x, int dup_strs)
{
  x = (struct zxwsf_lu_TestResult_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_lu_TestResult_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->itemIDRef = zx_clone_attr(c, x->itemIDRef);


  return x;
}

/* FUNC(zxwsf_FREE_lu_TestResult) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->itemIDRef, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_lu_TestResult) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_lu_TestResult_s* zxwsf_NEW_lu_TestResult(struct zx_ctx* c)
{
  struct zxwsf_lu_TestResult_s* x = ZX_ZALLOC(c, struct zxwsf_lu_TestResult_s);
  x->gg.g.tok = zxwsf_lu_TestResult_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_lu_TestResult) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_lu_TestResult) */

int zxwsf_WALK_WO_lu_TestResult(struct zx_ctx* c, struct zxwsf_lu_TestResult_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sbf_Framework
#define EL_STRUCT zxwsf_sbf_Framework_s
#define EL_NS     sbf
#define EL_TAG    Framework

/* FUNC(zxwsf_DUP_STRS_sbf_Framework) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->version);


}

/* FUNC(zxwsf_DEEP_CLONE_sbf_Framework) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sbf_Framework_s* zxwsf_DEEP_CLONE_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x, int dup_strs)
{
  x = (struct zxwsf_sbf_Framework_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sbf_Framework_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->version = zx_clone_attr(c, x->version);


  return x;
}

/* FUNC(zxwsf_FREE_sbf_Framework) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->version, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sbf_Framework) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sbf_Framework_s* zxwsf_NEW_sbf_Framework(struct zx_ctx* c)
{
  struct zxwsf_sbf_Framework_s* x = ZX_ZALLOC(c, struct zxwsf_sbf_Framework_s);
  x->gg.g.tok = zxwsf_sbf_Framework_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sbf_Framework) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_sbf_Framework) */

int zxwsf_WALK_WO_sbf_Framework(struct zx_ctx* c, struct zxwsf_sbf_Framework_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec12_ProxyInfoConfirmationData
#define EL_STRUCT zxwsf_sec12_ProxyInfoConfirmationData_s
#define EL_NS     sec12
#define EL_TAG    ProxyInfoConfirmationData

/* FUNC(zxwsf_DUP_STRS_sec12_ProxyInfoConfirmationData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->AssertionIDReference);
  zx_dup_strs_simple_elems(c, x->Issuer);
  zx_dup_strs_simple_elems(c, x->IssueInstant);
  zx_dup_strs_simple_elems(c, x->Signature);

}

/* FUNC(zxwsf_DEEP_CLONE_sec12_ProxyInfoConfirmationData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec12_ProxyInfoConfirmationData_s* zxwsf_DEEP_CLONE_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int dup_strs)
{
  x = (struct zxwsf_sec12_ProxyInfoConfirmationData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec12_ProxyInfoConfirmationData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);

  x->AssertionIDReference = zx_deep_clone_simple_elems(c,x->AssertionIDReference, dup_strs);
  x->Issuer = zx_deep_clone_simple_elems(c,x->Issuer, dup_strs);
  x->IssueInstant = zx_deep_clone_simple_elems(c,x->IssueInstant, dup_strs);
  x->Signature = zx_deep_clone_simple_elems(c,x->Signature, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_sec12_ProxyInfoConfirmationData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->AssertionIDReference, free_strs);
  zx_free_simple_elems(c, x->Issuer, free_strs);
  zx_free_simple_elems(c, x->IssueInstant, free_strs);
  zx_free_simple_elems(c, x->Signature, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec12_ProxyInfoConfirmationData) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec12_ProxyInfoConfirmationData_s* zxwsf_NEW_sec12_ProxyInfoConfirmationData(struct zx_ctx* c)
{
  struct zxwsf_sec12_ProxyInfoConfirmationData_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_ProxyInfoConfirmationData_s);
  x->gg.g.tok = zxwsf_sec12_ProxyInfoConfirmationData_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec12_ProxyInfoConfirmationData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->AssertionIDReference, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Issuer, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->IssueInstant, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Signature, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_sec12_ProxyInfoConfirmationData) */

int zxwsf_WALK_WO_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zxwsf_sec12_ProxyInfoConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec12_ResourceAccessStatement
#define EL_STRUCT zxwsf_sec12_ResourceAccessStatement_s
#define EL_NS     sec12
#define EL_TAG    ResourceAccessStatement

/* FUNC(zxwsf_DUP_STRS_sec12_ResourceAccessStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ProxySubject);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      for (e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_sec12_SessionContext(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_sec12_ResourceAccessStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec12_ResourceAccessStatement_s* zxwsf_DEEP_CLONE_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x, int dup_strs)
{
  x = (struct zxwsf_sec12_ResourceAccessStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec12_ResourceAccessStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ProxySubject = zx_deep_clone_simple_elems(c,x->ProxySubject, dup_strs);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      struct zxwsf_sec12_SessionContext_s* en;
      struct zxwsf_sec12_SessionContext_s* enn;
      for (enn = 0, e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_sec12_SessionContext(c, e, dup_strs);
	  if (!enn)
	      x->SessionContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_sec12_ResourceAccessStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ProxySubject, free_strs);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      struct zxwsf_sec12_SessionContext_s* en;
      for (e = x->SessionContext; e; e = en) {
	  en = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n;
	  zxwsf_FREE_sec12_SessionContext(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec12_ResourceAccessStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec12_ResourceAccessStatement_s* zxwsf_NEW_sec12_ResourceAccessStatement(struct zx_ctx* c)
{
  struct zxwsf_sec12_ResourceAccessStatement_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_ResourceAccessStatement_s);
  x->gg.g.tok = zxwsf_sec12_ResourceAccessStatement_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec12_ResourceAccessStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ProxySubject, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_sec12_SessionContext_s* e;
      for (e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_sec12_SessionContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_sec12_ResourceAccessStatement) */

int zxwsf_WALK_WO_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zxwsf_sec12_ResourceAccessStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec12_SessionContext
#define EL_STRUCT zxwsf_sec12_SessionContext_s
#define EL_NS     sec12
#define EL_TAG    SessionContext

/* FUNC(zxwsf_DUP_STRS_sec12_SessionContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->SessionIndex);
  zx_dup_attr(c, x->AuthenticationInstant);
  zx_dup_attr(c, x->AssertionIssueInstant);

  zx_dup_strs_simple_elems(c, x->SessionSubject);
  zx_dup_strs_simple_elems(c, x->ProviderID);
  zx_dup_strs_simple_elems(c, x->RequestAuthnContext);

}

/* FUNC(zxwsf_DEEP_CLONE_sec12_SessionContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec12_SessionContext_s* zxwsf_DEEP_CLONE_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x, int dup_strs)
{
  x = (struct zxwsf_sec12_SessionContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec12_SessionContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->SessionIndex = zx_clone_attr(c, x->SessionIndex);
  x->AuthenticationInstant = zx_clone_attr(c, x->AuthenticationInstant);
  x->AssertionIssueInstant = zx_clone_attr(c, x->AssertionIssueInstant);

  x->SessionSubject = zx_deep_clone_simple_elems(c,x->SessionSubject, dup_strs);
  x->ProviderID = zx_deep_clone_simple_elems(c,x->ProviderID, dup_strs);
  x->RequestAuthnContext = zx_deep_clone_simple_elems(c,x->RequestAuthnContext, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_sec12_SessionContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->SessionIndex, free_strs);
  zx_free_attr(c, x->AuthenticationInstant, free_strs);
  zx_free_attr(c, x->AssertionIssueInstant, free_strs);

  zx_free_simple_elems(c, x->SessionSubject, free_strs);
  zx_free_simple_elems(c, x->ProviderID, free_strs);
  zx_free_simple_elems(c, x->RequestAuthnContext, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec12_SessionContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec12_SessionContext_s* zxwsf_NEW_sec12_SessionContext(struct zx_ctx* c)
{
  struct zxwsf_sec12_SessionContext_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_SessionContext_s);
  x->gg.g.tok = zxwsf_sec12_SessionContext_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec12_SessionContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SessionSubject, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->ProviderID, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->RequestAuthnContext, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_sec12_SessionContext) */

int zxwsf_WALK_WO_sec12_SessionContext(struct zx_ctx* c, struct zxwsf_sec12_SessionContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec12_SessionContextStatement
#define EL_STRUCT zxwsf_sec12_SessionContextStatement_s
#define EL_NS     sec12
#define EL_TAG    SessionContextStatement

/* FUNC(zxwsf_DUP_STRS_sec12_SessionContextStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->ProxySubject);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      for (e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_sec12_SessionContext(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_sec12_SessionContextStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec12_SessionContextStatement_s* zxwsf_DEEP_CLONE_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x, int dup_strs)
{
  x = (struct zxwsf_sec12_SessionContextStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec12_SessionContextStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->ProxySubject = zx_deep_clone_simple_elems(c,x->ProxySubject, dup_strs);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      struct zxwsf_sec12_SessionContext_s* en;
      struct zxwsf_sec12_SessionContext_s* enn;
      for (enn = 0, e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_sec12_SessionContext(c, e, dup_strs);
	  if (!enn)
	      x->SessionContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_sec12_SessionContextStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->ProxySubject, free_strs);
  {
      struct zxwsf_sec12_SessionContext_s* e;
      struct zxwsf_sec12_SessionContext_s* en;
      for (e = x->SessionContext; e; e = en) {
	  en = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n;
	  zxwsf_FREE_sec12_SessionContext(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec12_SessionContextStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec12_SessionContextStatement_s* zxwsf_NEW_sec12_SessionContextStatement(struct zx_ctx* c)
{
  struct zxwsf_sec12_SessionContextStatement_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_SessionContextStatement_s);
  x->gg.g.tok = zxwsf_sec12_SessionContextStatement_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec12_SessionContextStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->ProxySubject, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxwsf_sec12_SessionContext_s* e;
      for (e = x->SessionContext; e; e = (struct zxwsf_sec12_SessionContext_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_sec12_SessionContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_sec12_SessionContextStatement) */

int zxwsf_WALK_WO_sec12_SessionContextStatement(struct zx_ctx* c, struct zxwsf_sec12_SessionContextStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec12_ValidityRestrictionCondition
#define EL_STRUCT zxwsf_sec12_ValidityRestrictionCondition_s
#define EL_NS     sec12
#define EL_TAG    ValidityRestrictionCondition

/* FUNC(zxwsf_DUP_STRS_sec12_ValidityRestrictionCondition) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->NumberOfUses);

}

/* FUNC(zxwsf_DEEP_CLONE_sec12_ValidityRestrictionCondition) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec12_ValidityRestrictionCondition_s* zxwsf_DEEP_CLONE_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int dup_strs)
{
  x = (struct zxwsf_sec12_ValidityRestrictionCondition_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec12_ValidityRestrictionCondition_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->NumberOfUses = zx_deep_clone_simple_elems(c,x->NumberOfUses, dup_strs);

  return x;
}

/* FUNC(zxwsf_FREE_sec12_ValidityRestrictionCondition) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->NumberOfUses, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec12_ValidityRestrictionCondition) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec12_ValidityRestrictionCondition_s* zxwsf_NEW_sec12_ValidityRestrictionCondition(struct zx_ctx* c)
{
  struct zxwsf_sec12_ValidityRestrictionCondition_s* x = ZX_ZALLOC(c, struct zxwsf_sec12_ValidityRestrictionCondition_s);
  x->gg.g.tok = zxwsf_sec12_ValidityRestrictionCondition_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec12_ValidityRestrictionCondition) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->NumberOfUses, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_sec12_ValidityRestrictionCondition) */

int zxwsf_WALK_WO_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zxwsf_sec12_ValidityRestrictionCondition_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec_Token
#define EL_STRUCT zxwsf_sec_Token_s
#define EL_NS     sec
#define EL_TAG    Token

/* FUNC(zxwsf_DUP_STRS_sec_Token) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->ref);
  zx_dup_attr(c, x->usage);


}

/* FUNC(zxwsf_DEEP_CLONE_sec_Token) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec_Token_s* zxwsf_DEEP_CLONE_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x, int dup_strs)
{
  x = (struct zxwsf_sec_Token_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec_Token_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->ref = zx_clone_attr(c, x->ref);
  x->usage = zx_clone_attr(c, x->usage);


  return x;
}

/* FUNC(zxwsf_FREE_sec_Token) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->ref, free_strs);
  zx_free_attr(c, x->usage, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec_Token) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec_Token_s* zxwsf_NEW_sec_Token(struct zx_ctx* c)
{
  struct zxwsf_sec_Token_s* x = ZX_ZALLOC(c, struct zxwsf_sec_Token_s);
  x->gg.g.tok = zxwsf_sec_Token_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec_Token) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_sec_Token) */

int zxwsf_WALK_WO_sec_Token(struct zx_ctx* c, struct zxwsf_sec_Token_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec_TokenPolicy
#define EL_STRUCT zxwsf_sec_TokenPolicy_s
#define EL_NS     sec
#define EL_TAG    TokenPolicy

/* FUNC(zxwsf_DUP_STRS_sec_TokenPolicy) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->issueTo);
  zx_dup_attr(c, x->type);
  zx_dup_attr(c, x->wantDSEPR);


}

/* FUNC(zxwsf_DEEP_CLONE_sec_TokenPolicy) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec_TokenPolicy_s* zxwsf_DEEP_CLONE_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x, int dup_strs)
{
  x = (struct zxwsf_sec_TokenPolicy_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec_TokenPolicy_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->issueTo = zx_clone_attr(c, x->issueTo);
  x->type = zx_clone_attr(c, x->type);
  x->wantDSEPR = zx_clone_attr(c, x->wantDSEPR);


  return x;
}

/* FUNC(zxwsf_FREE_sec_TokenPolicy) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->issueTo, free_strs);
  zx_free_attr(c, x->type, free_strs);
  zx_free_attr(c, x->wantDSEPR, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec_TokenPolicy) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec_TokenPolicy_s* zxwsf_NEW_sec_TokenPolicy(struct zx_ctx* c)
{
  struct zxwsf_sec_TokenPolicy_s* x = ZX_ZALLOC(c, struct zxwsf_sec_TokenPolicy_s);
  x->gg.g.tok = zxwsf_sec_TokenPolicy_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec_TokenPolicy) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_sec_TokenPolicy) */

int zxwsf_WALK_WO_sec_TokenPolicy(struct zx_ctx* c, struct zxwsf_sec_TokenPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec_TransitedProvider
#define EL_STRUCT zxwsf_sec_TransitedProvider_s
#define EL_NS     sec
#define EL_TAG    TransitedProvider

/* FUNC(zxwsf_DUP_STRS_sec_TransitedProvider) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->timeStamp);
  zx_dup_attr(c, x->confirmationURI);


}

/* FUNC(zxwsf_DEEP_CLONE_sec_TransitedProvider) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec_TransitedProvider_s* zxwsf_DEEP_CLONE_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x, int dup_strs)
{
  x = (struct zxwsf_sec_TransitedProvider_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec_TransitedProvider_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->timeStamp = zx_clone_attr(c, x->timeStamp);
  x->confirmationURI = zx_clone_attr(c, x->confirmationURI);


  return x;
}

/* FUNC(zxwsf_FREE_sec_TransitedProvider) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->timeStamp, free_strs);
  zx_free_attr(c, x->confirmationURI, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec_TransitedProvider) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec_TransitedProvider_s* zxwsf_NEW_sec_TransitedProvider(struct zx_ctx* c)
{
  struct zxwsf_sec_TransitedProvider_s* x = ZX_ZALLOC(c, struct zxwsf_sec_TransitedProvider_s);
  x->gg.g.tok = zxwsf_sec_TransitedProvider_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec_TransitedProvider) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_sec_TransitedProvider) */

int zxwsf_WALK_WO_sec_TransitedProvider(struct zx_ctx* c, struct zxwsf_sec_TransitedProvider_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sec_TransitedProviderPath
#define EL_STRUCT zxwsf_sec_TransitedProviderPath_s
#define EL_NS     sec
#define EL_TAG    TransitedProviderPath

/* FUNC(zxwsf_DUP_STRS_sec_TransitedProviderPath) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_sec_TransitedProvider_s* e;
      for (e = x->TransitedProvider; e; e = (struct zxwsf_sec_TransitedProvider_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_sec_TransitedProvider(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_sec_TransitedProviderPath) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_sec_TransitedProviderPath_s* zxwsf_DEEP_CLONE_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x, int dup_strs)
{
  x = (struct zxwsf_sec_TransitedProviderPath_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_sec_TransitedProviderPath_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_sec_TransitedProvider_s* e;
      struct zxwsf_sec_TransitedProvider_s* en;
      struct zxwsf_sec_TransitedProvider_s* enn;
      for (enn = 0, e = x->TransitedProvider; e; e = (struct zxwsf_sec_TransitedProvider_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_sec_TransitedProvider(c, e, dup_strs);
	  if (!enn)
	      x->TransitedProvider = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_sec_TransitedProviderPath) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_sec_TransitedProvider_s* e;
      struct zxwsf_sec_TransitedProvider_s* en;
      for (e = x->TransitedProvider; e; e = en) {
	  en = (struct zxwsf_sec_TransitedProvider_s*)e->gg.g.n;
	  zxwsf_FREE_sec_TransitedProvider(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_sec_TransitedProviderPath) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_sec_TransitedProviderPath_s* zxwsf_NEW_sec_TransitedProviderPath(struct zx_ctx* c)
{
  struct zxwsf_sec_TransitedProviderPath_s* x = ZX_ZALLOC(c, struct zxwsf_sec_TransitedProviderPath_s);
  x->gg.g.tok = zxwsf_sec_TransitedProviderPath_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_sec_TransitedProviderPath) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_sec_TransitedProvider_s* e;
      for (e = x->TransitedProvider; e; e = (struct zxwsf_sec_TransitedProvider_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_sec_TransitedProvider(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_sec_TransitedProviderPath) */

int zxwsf_WALK_WO_sec_TransitedProviderPath(struct zx_ctx* c, struct zxwsf_sec_TransitedProviderPath_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_BinarySecurityToken
#define EL_STRUCT zxwsf_wsse_BinarySecurityToken_s
#define EL_NS     wsse
#define EL_TAG    BinarySecurityToken

/* FUNC(zxwsf_DUP_STRS_wsse_BinarySecurityToken) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->EncodingType);
  zx_dup_attr(c, x->ValueType);


}

/* FUNC(zxwsf_DEEP_CLONE_wsse_BinarySecurityToken) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_BinarySecurityToken_s* zxwsf_DEEP_CLONE_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_BinarySecurityToken_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_BinarySecurityToken_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->EncodingType = zx_clone_attr(c, x->EncodingType);
  x->ValueType = zx_clone_attr(c, x->ValueType);


  return x;
}

/* FUNC(zxwsf_FREE_wsse_BinarySecurityToken) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->EncodingType, free_strs);
  zx_free_attr(c, x->ValueType, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_BinarySecurityToken) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_BinarySecurityToken_s* zxwsf_NEW_wsse_BinarySecurityToken(struct zx_ctx* c)
{
  struct zxwsf_wsse_BinarySecurityToken_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_BinarySecurityToken_s);
  x->gg.g.tok = zxwsf_wsse_BinarySecurityToken_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_BinarySecurityToken) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_BinarySecurityToken) */

int zxwsf_WALK_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zxwsf_wsse_BinarySecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_Embedded
#define EL_STRUCT zxwsf_wsse_Embedded_s
#define EL_NS     wsse
#define EL_TAG    Embedded

/* FUNC(zxwsf_DUP_STRS_wsse_Embedded) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ValueType);


}

/* FUNC(zxwsf_DEEP_CLONE_wsse_Embedded) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_Embedded_s* zxwsf_DEEP_CLONE_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_Embedded_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_Embedded_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ValueType = zx_clone_attr(c, x->ValueType);


  return x;
}

/* FUNC(zxwsf_FREE_wsse_Embedded) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ValueType, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_Embedded) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_Embedded_s* zxwsf_NEW_wsse_Embedded(struct zx_ctx* c)
{
  struct zxwsf_wsse_Embedded_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Embedded_s);
  x->gg.g.tok = zxwsf_wsse_Embedded_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_Embedded) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_Embedded) */

int zxwsf_WALK_WO_wsse_Embedded(struct zx_ctx* c, struct zxwsf_wsse_Embedded_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_KeyIdentifier
#define EL_STRUCT zxwsf_wsse_KeyIdentifier_s
#define EL_NS     wsse
#define EL_TAG    KeyIdentifier

/* FUNC(zxwsf_DUP_STRS_wsse_KeyIdentifier) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->EncodingType);
  zx_dup_attr(c, x->ValueType);


}

/* FUNC(zxwsf_DEEP_CLONE_wsse_KeyIdentifier) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_KeyIdentifier_s* zxwsf_DEEP_CLONE_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_KeyIdentifier_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_KeyIdentifier_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->EncodingType = zx_clone_attr(c, x->EncodingType);
  x->ValueType = zx_clone_attr(c, x->ValueType);


  return x;
}

/* FUNC(zxwsf_FREE_wsse_KeyIdentifier) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->EncodingType, free_strs);
  zx_free_attr(c, x->ValueType, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_KeyIdentifier) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_KeyIdentifier_s* zxwsf_NEW_wsse_KeyIdentifier(struct zx_ctx* c)
{
  struct zxwsf_wsse_KeyIdentifier_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_KeyIdentifier_s);
  x->gg.g.tok = zxwsf_wsse_KeyIdentifier_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_KeyIdentifier) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_KeyIdentifier) */

int zxwsf_WALK_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zxwsf_wsse_KeyIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_Nonce
#define EL_STRUCT zxwsf_wsse_Nonce_s
#define EL_NS     wsse
#define EL_TAG    Nonce

/* FUNC(zxwsf_DUP_STRS_wsse_Nonce) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->EncodingType);


}

/* FUNC(zxwsf_DEEP_CLONE_wsse_Nonce) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_Nonce_s* zxwsf_DEEP_CLONE_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_Nonce_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_Nonce_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->EncodingType = zx_clone_attr(c, x->EncodingType);


  return x;
}

/* FUNC(zxwsf_FREE_wsse_Nonce) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->EncodingType, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_Nonce) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_Nonce_s* zxwsf_NEW_wsse_Nonce(struct zx_ctx* c)
{
  struct zxwsf_wsse_Nonce_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Nonce_s);
  x->gg.g.tok = zxwsf_wsse_Nonce_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_Nonce) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_Nonce) */

int zxwsf_WALK_WO_wsse_Nonce(struct zx_ctx* c, struct zxwsf_wsse_Nonce_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_Password
#define EL_STRUCT zxwsf_wsse_Password_s
#define EL_NS     wsse
#define EL_TAG    Password

/* FUNC(zxwsf_DUP_STRS_wsse_Password) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->Type);


}

/* FUNC(zxwsf_DEEP_CLONE_wsse_Password) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_Password_s* zxwsf_DEEP_CLONE_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_Password_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_Password_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->Type = zx_clone_attr(c, x->Type);


  return x;
}

/* FUNC(zxwsf_FREE_wsse_Password) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->Type, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_Password) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_Password_s* zxwsf_NEW_wsse_Password(struct zx_ctx* c)
{
  struct zxwsf_wsse_Password_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Password_s);
  x->gg.g.tok = zxwsf_wsse_Password_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_Password) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_Password) */

int zxwsf_WALK_WO_wsse_Password(struct zx_ctx* c, struct zxwsf_wsse_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_Reference
#define EL_STRUCT zxwsf_wsse_Reference_s
#define EL_NS     wsse
#define EL_TAG    Reference

/* FUNC(zxwsf_DUP_STRS_wsse_Reference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);
  zx_dup_attr(c, x->ValueType);


}

/* FUNC(zxwsf_DEEP_CLONE_wsse_Reference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_Reference_s* zxwsf_DEEP_CLONE_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_Reference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_Reference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);
  x->ValueType = zx_clone_attr(c, x->ValueType);


  return x;
}

/* FUNC(zxwsf_FREE_wsse_Reference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);
  zx_free_attr(c, x->ValueType, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_Reference) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_Reference_s* zxwsf_NEW_wsse_Reference(struct zx_ctx* c)
{
  struct zxwsf_wsse_Reference_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Reference_s);
  x->gg.g.tok = zxwsf_wsse_Reference_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_Reference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_Reference) */

int zxwsf_WALK_WO_wsse_Reference(struct zx_ctx* c, struct zxwsf_wsse_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_Security
#define EL_STRUCT zxwsf_wsse_Security_s
#define EL_NS     wsse
#define EL_TAG    Security

/* FUNC(zxwsf_DUP_STRS_wsse_Security) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_wsse_Security) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_Security_s* zxwsf_DEEP_CLONE_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_Security_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_Security_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_wsse_Security) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_Security) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_Security_s* zxwsf_NEW_wsse_Security(struct zx_ctx* c)
{
  struct zxwsf_wsse_Security_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Security_s);
  x->gg.g.tok = zxwsf_wsse_Security_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_Security) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_Security) */

int zxwsf_WALK_WO_wsse_Security(struct zx_ctx* c, struct zxwsf_wsse_Security_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_SecurityTokenReference
#define EL_STRUCT zxwsf_wsse_SecurityTokenReference_s
#define EL_NS     wsse
#define EL_TAG    SecurityTokenReference

/* FUNC(zxwsf_DUP_STRS_wsse_SecurityTokenReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->Usage);


}

/* FUNC(zxwsf_DEEP_CLONE_wsse_SecurityTokenReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_SecurityTokenReference_s* zxwsf_DEEP_CLONE_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_SecurityTokenReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_SecurityTokenReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->Usage = zx_clone_attr(c, x->Usage);


  return x;
}

/* FUNC(zxwsf_FREE_wsse_SecurityTokenReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->Usage, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_SecurityTokenReference) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_SecurityTokenReference_s* zxwsf_NEW_wsse_SecurityTokenReference(struct zx_ctx* c)
{
  struct zxwsf_wsse_SecurityTokenReference_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_SecurityTokenReference_s);
  x->gg.g.tok = zxwsf_wsse_SecurityTokenReference_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_SecurityTokenReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_SecurityTokenReference) */

int zxwsf_WALK_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zxwsf_wsse_SecurityTokenReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_TransformationParameters
#define EL_STRUCT zxwsf_wsse_TransformationParameters_s
#define EL_NS     wsse
#define EL_TAG    TransformationParameters

/* FUNC(zxwsf_DUP_STRS_wsse_TransformationParameters) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_wsse_TransformationParameters) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_TransformationParameters_s* zxwsf_DEEP_CLONE_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_TransformationParameters_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_TransformationParameters_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_wsse_TransformationParameters) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_TransformationParameters) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_TransformationParameters_s* zxwsf_NEW_wsse_TransformationParameters(struct zx_ctx* c)
{
  struct zxwsf_wsse_TransformationParameters_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_TransformationParameters_s);
  x->gg.g.tok = zxwsf_wsse_TransformationParameters_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_TransformationParameters) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_TransformationParameters) */

int zxwsf_WALK_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zxwsf_wsse_TransformationParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_Username
#define EL_STRUCT zxwsf_wsse_Username_s
#define EL_NS     wsse
#define EL_TAG    Username

/* FUNC(zxwsf_DUP_STRS_wsse_Username) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);


}

/* FUNC(zxwsf_DEEP_CLONE_wsse_Username) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_Username_s* zxwsf_DEEP_CLONE_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_Username_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_Username_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zxwsf_FREE_wsse_Username) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_Username) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_Username_s* zxwsf_NEW_wsse_Username(struct zx_ctx* c)
{
  struct zxwsf_wsse_Username_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_Username_s);
  x->gg.g.tok = zxwsf_wsse_Username_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_Username) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsse_Username) */

int zxwsf_WALK_WO_wsse_Username(struct zx_ctx* c, struct zxwsf_wsse_Username_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsse_UsernameToken
#define EL_STRUCT zxwsf_wsse_UsernameToken_s
#define EL_NS     wsse
#define EL_TAG    UsernameToken

/* FUNC(zxwsf_DUP_STRS_wsse_UsernameToken) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zxwsf_wsse_Username_s* e;
      for (e = x->Username; e; e = (struct zxwsf_wsse_Username_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_wsse_Username(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_wsse_UsernameToken) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsse_UsernameToken_s* zxwsf_DEEP_CLONE_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x, int dup_strs)
{
  x = (struct zxwsf_wsse_UsernameToken_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsse_UsernameToken_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zxwsf_wsse_Username_s* e;
      struct zxwsf_wsse_Username_s* en;
      struct zxwsf_wsse_Username_s* enn;
      for (enn = 0, e = x->Username; e; e = (struct zxwsf_wsse_Username_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_wsse_Username(c, e, dup_strs);
	  if (!enn)
	      x->Username = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_wsse_UsernameToken) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zxwsf_wsse_Username_s* e;
      struct zxwsf_wsse_Username_s* en;
      for (e = x->Username; e; e = en) {
	  en = (struct zxwsf_wsse_Username_s*)e->gg.g.n;
	  zxwsf_FREE_wsse_Username(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsse_UsernameToken) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsse_UsernameToken_s* zxwsf_NEW_wsse_UsernameToken(struct zx_ctx* c)
{
  struct zxwsf_wsse_UsernameToken_s* x = ZX_ZALLOC(c, struct zxwsf_wsse_UsernameToken_s);
  x->gg.g.tok = zxwsf_wsse_UsernameToken_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsse_UsernameToken) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_wsse_Username_s* e;
      for (e = x->Username; e; e = (struct zxwsf_wsse_Username_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_wsse_Username(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_wsse_UsernameToken) */

int zxwsf_WALK_WO_wsse_UsernameToken(struct zx_ctx* c, struct zxwsf_wsse_UsernameToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsu_Created
#define EL_STRUCT zxwsf_wsu_Created_s
#define EL_NS     wsu
#define EL_TAG    Created

/* FUNC(zxwsf_DUP_STRS_wsu_Created) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);


}

/* FUNC(zxwsf_DEEP_CLONE_wsu_Created) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsu_Created_s* zxwsf_DEEP_CLONE_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x, int dup_strs)
{
  x = (struct zxwsf_wsu_Created_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsu_Created_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zxwsf_FREE_wsu_Created) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsu_Created) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsu_Created_s* zxwsf_NEW_wsu_Created(struct zx_ctx* c)
{
  struct zxwsf_wsu_Created_s* x = ZX_ZALLOC(c, struct zxwsf_wsu_Created_s);
  x->gg.g.tok = zxwsf_wsu_Created_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsu_Created) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsu_Created) */

int zxwsf_WALK_WO_wsu_Created(struct zx_ctx* c, struct zxwsf_wsu_Created_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsu_Expires
#define EL_STRUCT zxwsf_wsu_Expires_s
#define EL_NS     wsu
#define EL_TAG    Expires

/* FUNC(zxwsf_DUP_STRS_wsu_Expires) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);


}

/* FUNC(zxwsf_DEEP_CLONE_wsu_Expires) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsu_Expires_s* zxwsf_DEEP_CLONE_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x, int dup_strs)
{
  x = (struct zxwsf_wsu_Expires_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsu_Expires_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zxwsf_FREE_wsu_Expires) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsu_Expires) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsu_Expires_s* zxwsf_NEW_wsu_Expires(struct zx_ctx* c)
{
  struct zxwsf_wsu_Expires_s* x = ZX_ZALLOC(c, struct zxwsf_wsu_Expires_s);
  x->gg.g.tok = zxwsf_wsu_Expires_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsu_Expires) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxwsf_WALK_WO_wsu_Expires) */

int zxwsf_WALK_WO_wsu_Expires(struct zx_ctx* c, struct zxwsf_wsu_Expires_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsu_Timestamp
#define EL_STRUCT zxwsf_wsu_Timestamp_s
#define EL_NS     wsu
#define EL_TAG    Timestamp

/* FUNC(zxwsf_DUP_STRS_wsu_Timestamp) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zxwsf_wsu_Created_s* e;
      for (e = x->Created; e; e = (struct zxwsf_wsu_Created_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_wsu_Created(c, e);
  }
  {
      struct zxwsf_wsu_Expires_s* e;
      for (e = x->Expires; e; e = (struct zxwsf_wsu_Expires_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_wsu_Expires(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_wsu_Timestamp) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_wsu_Timestamp_s* zxwsf_DEEP_CLONE_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x, int dup_strs)
{
  x = (struct zxwsf_wsu_Timestamp_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_wsu_Timestamp_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zxwsf_wsu_Created_s* e;
      struct zxwsf_wsu_Created_s* en;
      struct zxwsf_wsu_Created_s* enn;
      for (enn = 0, e = x->Created; e; e = (struct zxwsf_wsu_Created_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_wsu_Created(c, e, dup_strs);
	  if (!enn)
	      x->Created = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_wsu_Expires_s* e;
      struct zxwsf_wsu_Expires_s* en;
      struct zxwsf_wsu_Expires_s* enn;
      for (enn = 0, e = x->Expires; e; e = (struct zxwsf_wsu_Expires_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_wsu_Expires(c, e, dup_strs);
	  if (!enn)
	      x->Expires = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_wsu_Timestamp) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zxwsf_wsu_Created_s* e;
      struct zxwsf_wsu_Created_s* en;
      for (e = x->Created; e; e = en) {
	  en = (struct zxwsf_wsu_Created_s*)e->gg.g.n;
	  zxwsf_FREE_wsu_Created(c, e, free_strs);
      }
  }
  {
      struct zxwsf_wsu_Expires_s* e;
      struct zxwsf_wsu_Expires_s* en;
      for (e = x->Expires; e; e = en) {
	  en = (struct zxwsf_wsu_Expires_s*)e->gg.g.n;
	  zxwsf_FREE_wsu_Expires(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_wsu_Timestamp) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_wsu_Timestamp_s* zxwsf_NEW_wsu_Timestamp(struct zx_ctx* c)
{
  struct zxwsf_wsu_Timestamp_s* x = ZX_ZALLOC(c, struct zxwsf_wsu_Timestamp_s);
  x->gg.g.tok = zxwsf_wsu_Timestamp_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_wsu_Timestamp) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_wsu_Created_s* e;
      for (e = x->Created; e; e = (struct zxwsf_wsu_Created_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_wsu_Created(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_wsu_Expires_s* e;
      for (e = x->Expires; e; e = (struct zxwsf_wsu_Expires_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_wsu_Expires(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_wsu_Timestamp) */

int zxwsf_WALK_WO_wsu_Timestamp(struct zx_ctx* c, struct zxwsf_wsu_Timestamp_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   root
#define EL_STRUCT zxwsf_root_s
#define EL_NS     
#define EL_TAG    root

/* FUNC(zxwsf_DUP_STRS_root) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_root(struct zx_ctx* c, struct zxwsf_root_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_e_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zxwsf_e_Envelope_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_e_Envelope(c, e);
  }
  {
      struct zxwsf_dise_Envelope_s* e;
      for (e = x->dise_Envelope; e; e = (struct zxwsf_dise_Envelope_s*)e->gg.g.n)
	  zxwsf_DUP_STRS_dise_Envelope(c, e);
  }

}

/* FUNC(zxwsf_DEEP_CLONE_root) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxwsf_root_s* zxwsf_DEEP_CLONE_root(struct zx_ctx* c, struct zxwsf_root_s* x, int dup_strs)
{
  x = (struct zxwsf_root_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxwsf_root_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_e_Envelope_s* e;
      struct zxwsf_e_Envelope_s* en;
      struct zxwsf_e_Envelope_s* enn;
      for (enn = 0, e = x->Envelope; e; e = (struct zxwsf_e_Envelope_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_e_Envelope(c, e, dup_strs);
	  if (!enn)
	      x->Envelope = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxwsf_dise_Envelope_s* e;
      struct zxwsf_dise_Envelope_s* en;
      struct zxwsf_dise_Envelope_s* enn;
      for (enn = 0, e = x->dise_Envelope; e; e = (struct zxwsf_dise_Envelope_s*)e->gg.g.n) {
	  en = zxwsf_DEEP_CLONE_dise_Envelope(c, e, dup_strs);
	  if (!enn)
	      x->dise_Envelope = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxwsf_FREE_root) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_root(struct zx_ctx* c, struct zxwsf_root_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxwsf_e_Envelope_s* e;
      struct zxwsf_e_Envelope_s* en;
      for (e = x->Envelope; e; e = en) {
	  en = (struct zxwsf_e_Envelope_s*)e->gg.g.n;
	  zxwsf_FREE_e_Envelope(c, e, free_strs);
      }
  }
  {
      struct zxwsf_dise_Envelope_s* e;
      struct zxwsf_dise_Envelope_s* en;
      for (e = x->dise_Envelope; e; e = en) {
	  en = (struct zxwsf_dise_Envelope_s*)e->gg.g.n;
	  zxwsf_FREE_dise_Envelope(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxwsf_NEW_root) */

/* Trivial allocator/constructor for the datatype. */

struct zxwsf_root_s* zxwsf_NEW_root(struct zx_ctx* c)
{
  struct zxwsf_root_s* x = ZX_ZALLOC(c, struct zxwsf_root_s);
  x->gg.g.tok = zxwsf_root_ELEM;
  return x;
}

/* FUNC(zxwsf_WALK_SO_root) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_root(struct zx_ctx* c, struct zxwsf_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxwsf_e_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zxwsf_e_Envelope_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_e_Envelope(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxwsf_dise_Envelope_s* e;
      for (e = x->dise_Envelope; e; e = (struct zxwsf_dise_Envelope_s*)e->gg.g.n) {
	  ret = zxwsf_WALK_SO_dise_Envelope(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_root) */

int zxwsf_WALK_WO_root(struct zx_ctx* c, struct zxwsf_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   simple_elem
#define EL_STRUCT zx_elem_s
#define EL_NS     
#define EL_TAG    simple_elem

/* FUNC(zxwsf_DUP_STRS_simple_elem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxwsf_DUP_STRS_simple_elem(struct zx_ctx* c, struct zx_elem_s* x)
{
  zx_dup_strs_common(c, x);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxwsf_DEEP_CLONE_simple_elem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_elem_s* zxwsf_DEEP_CLONE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs)
{
  x = (struct zx_elem_s*)zx_clone_elem_common(c, x, sizeof(struct zx_elem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxwsf_FREE_simple_elem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxwsf_FREE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, x, free_strs); 
}

/* FUNC(zxwsf_NEW_simple_elem) */

/* Trivial allocator/constructor for the datatype. */

struct zx_elem_s* zxwsf_NEW_simple_elem(struct zx_ctx* c, int toke)
{
  struct zx_elem_s* x = ZX_ZALLOC(c, struct zx_elem_s);
  x->g.tok = toke;
  return x;
}

/* FUNC(zxwsf_WALK_SO_simple_elem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxwsf_WALK_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, x, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, x, ctx, callback);
}

/* FUNC(zxwsf_WALK_WO_simple_elem) */

int zxwsf_WALK_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}


