/* c/zx-wsp-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
 ** Id: aux-templ.c,v 1.11 2007/03/28 20:31:54 sampo Exp $
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
#include "c/zx-wsp-data.h"



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

#define EL_NAME   wsp_All
#define EL_STRUCT zx_wsp_All_s
#define EL_NS     wsp
#define EL_TAG    All

/* FUNC(zx_FREE_wsp_All) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_Policy_s* e;
      struct zx_wsp_Policy_s* en;
      for (e = x->Policy; e; e = en) {
	  en = (struct zx_wsp_Policy_s*)e->gg.g.n;
	  zx_FREE_wsp_Policy(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_All_s* e;
      struct zx_wsp_All_s* en;
      for (e = x->All; e; e = en) {
	  en = (struct zx_wsp_All_s*)e->gg.g.n;
	  zx_FREE_wsp_All(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      struct zx_wsp_ExactlyOne_s* en;
      for (e = x->ExactlyOne; e; e = en) {
	  en = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n;
	  zx_FREE_wsp_ExactlyOne(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      struct zx_wsp_PolicyReference_s* en;
      for (e = x->PolicyReference; e; e = en) {
	  en = (struct zx_wsp_PolicyReference_s*)e->gg.g.n;
	  zx_FREE_wsp_PolicyReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_wsp_All) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_wsp_All_s* zx_NEW_wsp_All(struct zx_ctx* c)
{
  struct zx_wsp_All_s* x = ZX_ZALLOC(c, struct zx_wsp_All_s);
  x->gg.g.tok = zx_wsp_All_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_wsp_All) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_PolicyReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_wsp_All) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_wsp_All_s* zx_DEEP_CLONE_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, int dup_strs)
{
  x = (struct zx_wsp_All_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_wsp_All_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_Policy_s* e;
      struct zx_wsp_Policy_s* en;
      struct zx_wsp_Policy_s* enn;
      for (enn = 0, e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_Policy(c, e, dup_strs);
	  if (!enn)
	      x->Policy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_All_s* e;
      struct zx_wsp_All_s* en;
      struct zx_wsp_All_s* enn;
      for (enn = 0, e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_All(c, e, dup_strs);
	  if (!enn)
	      x->All = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      struct zx_wsp_ExactlyOne_s* en;
      struct zx_wsp_ExactlyOne_s* enn;
      for (enn = 0, e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_ExactlyOne(c, e, dup_strs);
	  if (!enn)
	      x->ExactlyOne = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      struct zx_wsp_PolicyReference_s* en;
      struct zx_wsp_PolicyReference_s* enn;
      for (enn = 0, e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_PolicyReference(c, e, dup_strs);
	  if (!enn)
	      x->PolicyReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_wsp_All) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_Policy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_All(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_ExactlyOne(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_PolicyReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_wsp_All) */

int zx_WALK_WO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsp_AppliesTo
#define EL_STRUCT zx_wsp_AppliesTo_s
#define EL_NS     wsp
#define EL_TAG    AppliesTo

/* FUNC(zx_FREE_wsp_AppliesTo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_wsp_AppliesTo) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_wsp_AppliesTo_s* zx_NEW_wsp_AppliesTo(struct zx_ctx* c)
{
  struct zx_wsp_AppliesTo_s* x = ZX_ZALLOC(c, struct zx_wsp_AppliesTo_s);
  x->gg.g.tok = zx_wsp_AppliesTo_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_wsp_AppliesTo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_wsp_AppliesTo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_wsp_AppliesTo_s* zx_DEEP_CLONE_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, int dup_strs)
{
  x = (struct zx_wsp_AppliesTo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_wsp_AppliesTo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_WALK_SO_wsp_AppliesTo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_wsp_AppliesTo) */

int zx_WALK_WO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsp_ExactlyOne
#define EL_STRUCT zx_wsp_ExactlyOne_s
#define EL_NS     wsp
#define EL_TAG    ExactlyOne

/* FUNC(zx_FREE_wsp_ExactlyOne) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_Policy_s* e;
      struct zx_wsp_Policy_s* en;
      for (e = x->Policy; e; e = en) {
	  en = (struct zx_wsp_Policy_s*)e->gg.g.n;
	  zx_FREE_wsp_Policy(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_All_s* e;
      struct zx_wsp_All_s* en;
      for (e = x->All; e; e = en) {
	  en = (struct zx_wsp_All_s*)e->gg.g.n;
	  zx_FREE_wsp_All(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      struct zx_wsp_ExactlyOne_s* en;
      for (e = x->ExactlyOne; e; e = en) {
	  en = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n;
	  zx_FREE_wsp_ExactlyOne(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      struct zx_wsp_PolicyReference_s* en;
      for (e = x->PolicyReference; e; e = en) {
	  en = (struct zx_wsp_PolicyReference_s*)e->gg.g.n;
	  zx_FREE_wsp_PolicyReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_wsp_ExactlyOne) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_wsp_ExactlyOne_s* zx_NEW_wsp_ExactlyOne(struct zx_ctx* c)
{
  struct zx_wsp_ExactlyOne_s* x = ZX_ZALLOC(c, struct zx_wsp_ExactlyOne_s);
  x->gg.g.tok = zx_wsp_ExactlyOne_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_wsp_ExactlyOne) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_PolicyReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_wsp_ExactlyOne) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_wsp_ExactlyOne_s* zx_DEEP_CLONE_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, int dup_strs)
{
  x = (struct zx_wsp_ExactlyOne_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_wsp_ExactlyOne_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_Policy_s* e;
      struct zx_wsp_Policy_s* en;
      struct zx_wsp_Policy_s* enn;
      for (enn = 0, e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_Policy(c, e, dup_strs);
	  if (!enn)
	      x->Policy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_All_s* e;
      struct zx_wsp_All_s* en;
      struct zx_wsp_All_s* enn;
      for (enn = 0, e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_All(c, e, dup_strs);
	  if (!enn)
	      x->All = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      struct zx_wsp_ExactlyOne_s* en;
      struct zx_wsp_ExactlyOne_s* enn;
      for (enn = 0, e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_ExactlyOne(c, e, dup_strs);
	  if (!enn)
	      x->ExactlyOne = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      struct zx_wsp_PolicyReference_s* en;
      struct zx_wsp_PolicyReference_s* enn;
      for (enn = 0, e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_PolicyReference(c, e, dup_strs);
	  if (!enn)
	      x->PolicyReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_wsp_ExactlyOne) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_Policy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_All(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_ExactlyOne(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_PolicyReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_wsp_ExactlyOne) */

int zx_WALK_WO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsp_Policy
#define EL_STRUCT zx_wsp_Policy_s
#define EL_NS     wsp
#define EL_TAG    Policy

/* FUNC(zx_FREE_wsp_Policy) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Name, free_strs);
  zx_free_attr(c, x->Id, free_strs);

  {
      struct zx_wsp_Policy_s* e;
      struct zx_wsp_Policy_s* en;
      for (e = x->Policy; e; e = en) {
	  en = (struct zx_wsp_Policy_s*)e->gg.g.n;
	  zx_FREE_wsp_Policy(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_All_s* e;
      struct zx_wsp_All_s* en;
      for (e = x->All; e; e = en) {
	  en = (struct zx_wsp_All_s*)e->gg.g.n;
	  zx_FREE_wsp_All(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      struct zx_wsp_ExactlyOne_s* en;
      for (e = x->ExactlyOne; e; e = en) {
	  en = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n;
	  zx_FREE_wsp_ExactlyOne(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      struct zx_wsp_PolicyReference_s* en;
      for (e = x->PolicyReference; e; e = en) {
	  en = (struct zx_wsp_PolicyReference_s*)e->gg.g.n;
	  zx_FREE_wsp_PolicyReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_wsp_Policy) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_wsp_Policy_s* zx_NEW_wsp_Policy(struct zx_ctx* c)
{
  struct zx_wsp_Policy_s* x = ZX_ZALLOC(c, struct zx_wsp_Policy_s);
  x->gg.g.tok = zx_wsp_Policy_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_wsp_Policy) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Name);
  zx_dup_attr(c, x->Id);

  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_PolicyReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_wsp_Policy) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_wsp_Policy_s* zx_DEEP_CLONE_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, int dup_strs)
{
  x = (struct zx_wsp_Policy_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_wsp_Policy_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Name = zx_clone_attr(c, x->Name);
  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zx_wsp_Policy_s* e;
      struct zx_wsp_Policy_s* en;
      struct zx_wsp_Policy_s* enn;
      for (enn = 0, e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_Policy(c, e, dup_strs);
	  if (!enn)
	      x->Policy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_All_s* e;
      struct zx_wsp_All_s* en;
      struct zx_wsp_All_s* enn;
      for (enn = 0, e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_All(c, e, dup_strs);
	  if (!enn)
	      x->All = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      struct zx_wsp_ExactlyOne_s* en;
      struct zx_wsp_ExactlyOne_s* enn;
      for (enn = 0, e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_ExactlyOne(c, e, dup_strs);
	  if (!enn)
	      x->ExactlyOne = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      struct zx_wsp_PolicyReference_s* en;
      struct zx_wsp_PolicyReference_s* enn;
      for (enn = 0, e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_PolicyReference(c, e, dup_strs);
	  if (!enn)
	      x->PolicyReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_wsp_Policy) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_Policy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_All(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_ExactlyOne(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_PolicyReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_wsp_Policy) */

int zx_WALK_WO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsp_PolicyAttachment
#define EL_STRUCT zx_wsp_PolicyAttachment_s
#define EL_NS     wsp
#define EL_TAG    PolicyAttachment

/* FUNC(zx_FREE_wsp_PolicyAttachment) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_AppliesTo_s* e;
      struct zx_wsp_AppliesTo_s* en;
      for (e = x->AppliesTo; e; e = en) {
	  en = (struct zx_wsp_AppliesTo_s*)e->gg.g.n;
	  zx_FREE_wsp_AppliesTo(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_Policy_s* e;
      struct zx_wsp_Policy_s* en;
      for (e = x->Policy; e; e = en) {
	  en = (struct zx_wsp_Policy_s*)e->gg.g.n;
	  zx_FREE_wsp_Policy(c, e, free_strs);
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      struct zx_wsp_PolicyReference_s* en;
      for (e = x->PolicyReference; e; e = en) {
	  en = (struct zx_wsp_PolicyReference_s*)e->gg.g.n;
	  zx_FREE_wsp_PolicyReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_wsp_PolicyAttachment) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_wsp_PolicyAttachment_s* zx_NEW_wsp_PolicyAttachment(struct zx_ctx* c)
{
  struct zx_wsp_PolicyAttachment_s* x = ZX_ZALLOC(c, struct zx_wsp_PolicyAttachment_s);
  x->gg.g.tok = zx_wsp_PolicyAttachment_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_wsp_PolicyAttachment) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_AppliesTo_s* e;
      for (e = x->AppliesTo; e; e = (struct zx_wsp_AppliesTo_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_AppliesTo(c, e);
  }
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  zx_DUP_STRS_wsp_PolicyReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_wsp_PolicyAttachment) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_wsp_PolicyAttachment_s* zx_DEEP_CLONE_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, int dup_strs)
{
  x = (struct zx_wsp_PolicyAttachment_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_wsp_PolicyAttachment_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_wsp_AppliesTo_s* e;
      struct zx_wsp_AppliesTo_s* en;
      struct zx_wsp_AppliesTo_s* enn;
      for (enn = 0, e = x->AppliesTo; e; e = (struct zx_wsp_AppliesTo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_AppliesTo(c, e, dup_strs);
	  if (!enn)
	      x->AppliesTo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_Policy_s* e;
      struct zx_wsp_Policy_s* en;
      struct zx_wsp_Policy_s* enn;
      for (enn = 0, e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_Policy(c, e, dup_strs);
	  if (!enn)
	      x->Policy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      struct zx_wsp_PolicyReference_s* en;
      struct zx_wsp_PolicyReference_s* enn;
      for (enn = 0, e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_wsp_PolicyReference(c, e, dup_strs);
	  if (!enn)
	      x->PolicyReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_WALK_SO_wsp_PolicyAttachment) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_wsp_AppliesTo_s* e;
      for (e = x->AppliesTo; e; e = (struct zx_wsp_AppliesTo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_AppliesTo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_Policy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_wsp_PolicyReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_wsp_PolicyAttachment) */

int zx_WALK_WO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   wsp_PolicyReference
#define EL_STRUCT zx_wsp_PolicyReference_s
#define EL_NS     wsp
#define EL_TAG    PolicyReference

/* FUNC(zx_FREE_wsp_PolicyReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);
  zx_free_attr(c, x->Digest, free_strs);
  zx_free_attr(c, x->DigestAlgorithm, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_wsp_PolicyReference) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_wsp_PolicyReference_s* zx_NEW_wsp_PolicyReference(struct zx_ctx* c)
{
  struct zx_wsp_PolicyReference_s* x = ZX_ZALLOC(c, struct zx_wsp_PolicyReference_s);
  x->gg.g.tok = zx_wsp_PolicyReference_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_wsp_PolicyReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);
  zx_dup_attr(c, x->Digest);
  zx_dup_attr(c, x->DigestAlgorithm);


}

/* FUNC(zx_DEEP_CLONE_wsp_PolicyReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_wsp_PolicyReference_s* zx_DEEP_CLONE_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, int dup_strs)
{
  x = (struct zx_wsp_PolicyReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_wsp_PolicyReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);
  x->Digest = zx_clone_attr(c, x->Digest);
  x->DigestAlgorithm = zx_clone_attr(c, x->DigestAlgorithm);


  return x;
}

/* FUNC(zx_WALK_SO_wsp_PolicyReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_wsp_PolicyReference) */

int zx_WALK_WO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-wsp-aux.c */
