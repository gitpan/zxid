/* c/zx-e-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-e-data.h"



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
#define EL_STRUCT zx_e_Body_s
#define EL_NS     e
#define EL_TAG    Body

/* FUNC(zx_DUP_STRS_e_Body) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_Query_s* e;
      for (e = x->Query; e; e = (struct zx_di_Query_s*)e->gg.g.n)
	  zx_DUP_STRS_di_Query(c, e);
  }
  {
      struct zx_di_QueryResponse_s* e;
      for (e = x->QueryResponse; e; e = (struct zx_di_QueryResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di_QueryResponse(c, e);
  }
  {
      struct zx_di12_Query_s* e;
      for (e = x->di12_Query; e; e = (struct zx_di12_Query_s*)e->gg.g.n)
	  zx_DUP_STRS_di12_Query(c, e);
  }
  {
      struct zx_di12_QueryResponse_s* e;
      for (e = x->di12_QueryResponse; e; e = (struct zx_di12_QueryResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di12_QueryResponse(c, e);
  }
  {
      struct zx_di12_Modify_s* e;
      for (e = x->Modify; e; e = (struct zx_di12_Modify_s*)e->gg.g.n)
	  zx_DUP_STRS_di12_Modify(c, e);
  }
  {
      struct zx_di12_ModifyResponse_s* e;
      for (e = x->ModifyResponse; e; e = (struct zx_di12_ModifyResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_di12_ModifyResponse(c, e);
  }
  {
      struct zx_e_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_e_Fault_s*)e->gg.g.n)
	  zx_DUP_STRS_e_Fault(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_e_Body) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_e_Body_s* zx_DEEP_CLONE_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, int dup_strs)
{
  x = (struct zx_e_Body_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_e_Body_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_Query_s* e;
      struct zx_di_Query_s* en;
      struct zx_di_Query_s* enn;
      for (enn = 0, e = x->Query; e; e = (struct zx_di_Query_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_Query(c, e, dup_strs);
	  if (!enn)
	      x->Query = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di_QueryResponse_s* e;
      struct zx_di_QueryResponse_s* en;
      struct zx_di_QueryResponse_s* enn;
      for (enn = 0, e = x->QueryResponse; e; e = (struct zx_di_QueryResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di_QueryResponse(c, e, dup_strs);
	  if (!enn)
	      x->QueryResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di12_Query_s* e;
      struct zx_di12_Query_s* en;
      struct zx_di12_Query_s* enn;
      for (enn = 0, e = x->di12_Query; e; e = (struct zx_di12_Query_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di12_Query(c, e, dup_strs);
	  if (!enn)
	      x->di12_Query = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di12_QueryResponse_s* e;
      struct zx_di12_QueryResponse_s* en;
      struct zx_di12_QueryResponse_s* enn;
      for (enn = 0, e = x->di12_QueryResponse; e; e = (struct zx_di12_QueryResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di12_QueryResponse(c, e, dup_strs);
	  if (!enn)
	      x->di12_QueryResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di12_Modify_s* e;
      struct zx_di12_Modify_s* en;
      struct zx_di12_Modify_s* enn;
      for (enn = 0, e = x->Modify; e; e = (struct zx_di12_Modify_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di12_Modify(c, e, dup_strs);
	  if (!enn)
	      x->Modify = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_di12_ModifyResponse_s* e;
      struct zx_di12_ModifyResponse_s* en;
      struct zx_di12_ModifyResponse_s* enn;
      for (enn = 0, e = x->ModifyResponse; e; e = (struct zx_di12_ModifyResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_di12_ModifyResponse(c, e, dup_strs);
	  if (!enn)
	      x->ModifyResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_e_Fault_s* e;
      struct zx_e_Fault_s* en;
      struct zx_e_Fault_s* enn;
      for (enn = 0, e = x->Fault; e; e = (struct zx_e_Fault_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_e_Fault(c, e, dup_strs);
	  if (!enn)
	      x->Fault = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_e_Body) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_di_Query_s* e;
      struct zx_di_Query_s* en;
      for (e = x->Query; e; e = en) {
	  en = (struct zx_di_Query_s*)e->gg.g.n;
	  zx_FREE_di_Query(c, e, free_strs);
      }
  }
  {
      struct zx_di_QueryResponse_s* e;
      struct zx_di_QueryResponse_s* en;
      for (e = x->QueryResponse; e; e = en) {
	  en = (struct zx_di_QueryResponse_s*)e->gg.g.n;
	  zx_FREE_di_QueryResponse(c, e, free_strs);
      }
  }
  {
      struct zx_di12_Query_s* e;
      struct zx_di12_Query_s* en;
      for (e = x->di12_Query; e; e = en) {
	  en = (struct zx_di12_Query_s*)e->gg.g.n;
	  zx_FREE_di12_Query(c, e, free_strs);
      }
  }
  {
      struct zx_di12_QueryResponse_s* e;
      struct zx_di12_QueryResponse_s* en;
      for (e = x->di12_QueryResponse; e; e = en) {
	  en = (struct zx_di12_QueryResponse_s*)e->gg.g.n;
	  zx_FREE_di12_QueryResponse(c, e, free_strs);
      }
  }
  {
      struct zx_di12_Modify_s* e;
      struct zx_di12_Modify_s* en;
      for (e = x->Modify; e; e = en) {
	  en = (struct zx_di12_Modify_s*)e->gg.g.n;
	  zx_FREE_di12_Modify(c, e, free_strs);
      }
  }
  {
      struct zx_di12_ModifyResponse_s* e;
      struct zx_di12_ModifyResponse_s* en;
      for (e = x->ModifyResponse; e; e = en) {
	  en = (struct zx_di12_ModifyResponse_s*)e->gg.g.n;
	  zx_FREE_di12_ModifyResponse(c, e, free_strs);
      }
  }
  {
      struct zx_e_Fault_s* e;
      struct zx_e_Fault_s* en;
      for (e = x->Fault; e; e = en) {
	  en = (struct zx_e_Fault_s*)e->gg.g.n;
	  zx_FREE_e_Fault(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_e_Body) */

/* Trivial allocator/constructor for the datatype. */

struct zx_e_Body_s* zx_NEW_e_Body(struct zx_ctx* c)
{
  struct zx_e_Body_s* x = ZX_ZALLOC(c, struct zx_e_Body_s);
  x->gg.g.tok = zx_e_Body_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_e_Body) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_di_Query_s* e;
      for (e = x->Query; e; e = (struct zx_di_Query_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_Query(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di_QueryResponse_s* e;
      for (e = x->QueryResponse; e; e = (struct zx_di_QueryResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di_QueryResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di12_Query_s* e;
      for (e = x->di12_Query; e; e = (struct zx_di12_Query_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di12_Query(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di12_QueryResponse_s* e;
      for (e = x->di12_QueryResponse; e; e = (struct zx_di12_QueryResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di12_QueryResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di12_Modify_s* e;
      for (e = x->Modify; e; e = (struct zx_di12_Modify_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di12_Modify(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_di12_ModifyResponse_s* e;
      for (e = x->ModifyResponse; e; e = (struct zx_di12_ModifyResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_di12_ModifyResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_e_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_e_Fault_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_e_Fault(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_e_Body) */

int zx_WALK_WO_e_Body(struct zx_ctx* c, struct zx_e_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zx_e_Envelope_s
#define EL_NS     e
#define EL_TAG    Envelope

/* FUNC(zx_DUP_STRS_e_Envelope) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_e_Header_s* e;
      for (e = x->Header; e; e = (struct zx_e_Header_s*)e->gg.g.n)
	  zx_DUP_STRS_e_Header(c, e);
  }
  {
      struct zx_e_Body_s* e;
      for (e = x->Body; e; e = (struct zx_e_Body_s*)e->gg.g.n)
	  zx_DUP_STRS_e_Body(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_e_Envelope) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_e_Envelope_s* zx_DEEP_CLONE_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, int dup_strs)
{
  x = (struct zx_e_Envelope_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_e_Envelope_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_e_Header_s* e;
      struct zx_e_Header_s* en;
      struct zx_e_Header_s* enn;
      for (enn = 0, e = x->Header; e; e = (struct zx_e_Header_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_e_Header(c, e, dup_strs);
	  if (!enn)
	      x->Header = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_e_Body_s* e;
      struct zx_e_Body_s* en;
      struct zx_e_Body_s* enn;
      for (enn = 0, e = x->Body; e; e = (struct zx_e_Body_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_e_Body(c, e, dup_strs);
	  if (!enn)
	      x->Body = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_e_Envelope) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_e_Header_s* e;
      struct zx_e_Header_s* en;
      for (e = x->Header; e; e = en) {
	  en = (struct zx_e_Header_s*)e->gg.g.n;
	  zx_FREE_e_Header(c, e, free_strs);
      }
  }
  {
      struct zx_e_Body_s* e;
      struct zx_e_Body_s* en;
      for (e = x->Body; e; e = en) {
	  en = (struct zx_e_Body_s*)e->gg.g.n;
	  zx_FREE_e_Body(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_e_Envelope) */

/* Trivial allocator/constructor for the datatype. */

struct zx_e_Envelope_s* zx_NEW_e_Envelope(struct zx_ctx* c)
{
  struct zx_e_Envelope_s* x = ZX_ZALLOC(c, struct zx_e_Envelope_s);
  x->gg.g.tok = zx_e_Envelope_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_e_Envelope) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_e_Header_s* e;
      for (e = x->Header; e; e = (struct zx_e_Header_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_e_Header(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_e_Body_s* e;
      for (e = x->Body; e; e = (struct zx_e_Body_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_e_Body(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_e_Envelope) */

int zx_WALK_WO_e_Envelope(struct zx_ctx* c, struct zx_e_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zx_e_Fault_s
#define EL_NS     e
#define EL_TAG    Fault

/* FUNC(zx_DUP_STRS_e_Fault) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->faultcode);
  zx_dup_strs_simple_elems(c, x->faultstring);
  zx_dup_strs_simple_elems(c, x->faultactor);
  {
      struct zx_e_detail_s* e;
      for (e = x->detail; e; e = (struct zx_e_detail_s*)e->gg.g.n)
	  zx_DUP_STRS_e_detail(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_e_Fault) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_e_Fault_s* zx_DEEP_CLONE_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, int dup_strs)
{
  x = (struct zx_e_Fault_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_e_Fault_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->faultcode = zx_deep_clone_simple_elems(c,x->faultcode, dup_strs);
  x->faultstring = zx_deep_clone_simple_elems(c,x->faultstring, dup_strs);
  x->faultactor = zx_deep_clone_simple_elems(c,x->faultactor, dup_strs);
  {
      struct zx_e_detail_s* e;
      struct zx_e_detail_s* en;
      struct zx_e_detail_s* enn;
      for (enn = 0, e = x->detail; e; e = (struct zx_e_detail_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_e_detail(c, e, dup_strs);
	  if (!enn)
	      x->detail = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_e_Fault) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->faultcode, free_strs);
  zx_free_simple_elems(c, x->faultstring, free_strs);
  zx_free_simple_elems(c, x->faultactor, free_strs);
  {
      struct zx_e_detail_s* e;
      struct zx_e_detail_s* en;
      for (e = x->detail; e; e = en) {
	  en = (struct zx_e_detail_s*)e->gg.g.n;
	  zx_FREE_e_detail(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_e_Fault) */

/* Trivial allocator/constructor for the datatype. */

struct zx_e_Fault_s* zx_NEW_e_Fault(struct zx_ctx* c)
{
  struct zx_e_Fault_s* x = ZX_ZALLOC(c, struct zx_e_Fault_s);
  x->gg.g.tok = zx_e_Fault_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_e_Fault) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_e_detail_s* e;
      for (e = x->detail; e; e = (struct zx_e_detail_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_e_detail(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_e_Fault) */

int zx_WALK_WO_e_Fault(struct zx_ctx* c, struct zx_e_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zx_e_Header_s
#define EL_NS     e
#define EL_TAG    Header

/* FUNC(zx_DUP_STRS_e_Header) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x)
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
      struct zx_b_TargetIdentity_s* e;
      for (e = x->TargetIdentity; e; e = (struct zx_b_TargetIdentity_s*)e->gg.g.n)
	  zx_DUP_STRS_b_TargetIdentity(c, e);
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
      struct zx_b_Consent_s* e;
      for (e = x->Consent; e; e = (struct zx_b_Consent_s*)e->gg.g.n)
	  zx_DUP_STRS_b_Consent(c, e);
  }
  {
      struct zx_b_UsageDirective_s* e;
      for (e = x->UsageDirective; e; e = (struct zx_b_UsageDirective_s*)e->gg.g.n)
	  zx_DUP_STRS_b_UsageDirective(c, e);
  }
  {
      struct zx_b_ApplicationEPR_s* e;
      for (e = x->ApplicationEPR; e; e = (struct zx_b_ApplicationEPR_s*)e->gg.g.n)
	  zx_DUP_STRS_b_ApplicationEPR(c, e);
  }
  {
      struct zx_b_UserInteraction_s* e;
      for (e = x->UserInteraction; e; e = (struct zx_b_UserInteraction_s*)e->gg.g.n)
	  zx_DUP_STRS_b_UserInteraction(c, e);
  }
  {
      struct zx_b_RedirectRequest_s* e;
      for (e = x->RedirectRequest; e; e = (struct zx_b_RedirectRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_b_RedirectRequest(c, e);
  }
  {
      struct zx_b12_Correlation_s* e;
      for (e = x->Correlation; e; e = (struct zx_b12_Correlation_s*)e->gg.g.n)
	  zx_DUP_STRS_b12_Correlation(c, e);
  }
  {
      struct zx_b12_Provider_s* e;
      for (e = x->Provider; e; e = (struct zx_b12_Provider_s*)e->gg.g.n)
	  zx_DUP_STRS_b12_Provider(c, e);
  }
  {
      struct zx_b12_ProcessingContext_s* e;
      for (e = x->b12_ProcessingContext; e; e = (struct zx_b12_ProcessingContext_s*)e->gg.g.n)
	  zx_DUP_STRS_b12_ProcessingContext(c, e);
  }
  {
      struct zx_b12_Consent_s* e;
      for (e = x->b12_Consent; e; e = (struct zx_b12_Consent_s*)e->gg.g.n)
	  zx_DUP_STRS_b12_Consent(c, e);
  }
  {
      struct zx_b12_UsageDirective_s* e;
      for (e = x->b12_UsageDirective; e; e = (struct zx_b12_UsageDirective_s*)e->gg.g.n)
	  zx_DUP_STRS_b12_UsageDirective(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_e_Header) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_e_Header_s* zx_DEEP_CLONE_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, int dup_strs)
{
  x = (struct zx_e_Header_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_e_Header_s), dup_strs);
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
      struct zx_b_TargetIdentity_s* e;
      struct zx_b_TargetIdentity_s* en;
      struct zx_b_TargetIdentity_s* enn;
      for (enn = 0, e = x->TargetIdentity; e; e = (struct zx_b_TargetIdentity_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_TargetIdentity(c, e, dup_strs);
	  if (!enn)
	      x->TargetIdentity = en;
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
      struct zx_b_Consent_s* e;
      struct zx_b_Consent_s* en;
      struct zx_b_Consent_s* enn;
      for (enn = 0, e = x->Consent; e; e = (struct zx_b_Consent_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_Consent(c, e, dup_strs);
	  if (!enn)
	      x->Consent = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b_UsageDirective_s* e;
      struct zx_b_UsageDirective_s* en;
      struct zx_b_UsageDirective_s* enn;
      for (enn = 0, e = x->UsageDirective; e; e = (struct zx_b_UsageDirective_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_UsageDirective(c, e, dup_strs);
	  if (!enn)
	      x->UsageDirective = en;
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
      struct zx_b_UserInteraction_s* e;
      struct zx_b_UserInteraction_s* en;
      struct zx_b_UserInteraction_s* enn;
      for (enn = 0, e = x->UserInteraction; e; e = (struct zx_b_UserInteraction_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b_UserInteraction(c, e, dup_strs);
	  if (!enn)
	      x->UserInteraction = en;
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
  {
      struct zx_b12_Correlation_s* e;
      struct zx_b12_Correlation_s* en;
      struct zx_b12_Correlation_s* enn;
      for (enn = 0, e = x->Correlation; e; e = (struct zx_b12_Correlation_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b12_Correlation(c, e, dup_strs);
	  if (!enn)
	      x->Correlation = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b12_Provider_s* e;
      struct zx_b12_Provider_s* en;
      struct zx_b12_Provider_s* enn;
      for (enn = 0, e = x->Provider; e; e = (struct zx_b12_Provider_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b12_Provider(c, e, dup_strs);
	  if (!enn)
	      x->Provider = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b12_ProcessingContext_s* e;
      struct zx_b12_ProcessingContext_s* en;
      struct zx_b12_ProcessingContext_s* enn;
      for (enn = 0, e = x->b12_ProcessingContext; e; e = (struct zx_b12_ProcessingContext_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b12_ProcessingContext(c, e, dup_strs);
	  if (!enn)
	      x->b12_ProcessingContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b12_Consent_s* e;
      struct zx_b12_Consent_s* en;
      struct zx_b12_Consent_s* enn;
      for (enn = 0, e = x->b12_Consent; e; e = (struct zx_b12_Consent_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b12_Consent(c, e, dup_strs);
	  if (!enn)
	      x->b12_Consent = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_b12_UsageDirective_s* e;
      struct zx_b12_UsageDirective_s* en;
      struct zx_b12_UsageDirective_s* enn;
      for (enn = 0, e = x->b12_UsageDirective; e; e = (struct zx_b12_UsageDirective_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_b12_UsageDirective(c, e, dup_strs);
	  if (!enn)
	      x->b12_UsageDirective = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_e_Header) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, int free_strs)
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
      struct zx_b_TargetIdentity_s* e;
      struct zx_b_TargetIdentity_s* en;
      for (e = x->TargetIdentity; e; e = en) {
	  en = (struct zx_b_TargetIdentity_s*)e->gg.g.n;
	  zx_FREE_b_TargetIdentity(c, e, free_strs);
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
      struct zx_b_Consent_s* e;
      struct zx_b_Consent_s* en;
      for (e = x->Consent; e; e = en) {
	  en = (struct zx_b_Consent_s*)e->gg.g.n;
	  zx_FREE_b_Consent(c, e, free_strs);
      }
  }
  {
      struct zx_b_UsageDirective_s* e;
      struct zx_b_UsageDirective_s* en;
      for (e = x->UsageDirective; e; e = en) {
	  en = (struct zx_b_UsageDirective_s*)e->gg.g.n;
	  zx_FREE_b_UsageDirective(c, e, free_strs);
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
      struct zx_b_UserInteraction_s* e;
      struct zx_b_UserInteraction_s* en;
      for (e = x->UserInteraction; e; e = en) {
	  en = (struct zx_b_UserInteraction_s*)e->gg.g.n;
	  zx_FREE_b_UserInteraction(c, e, free_strs);
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
  {
      struct zx_b12_Correlation_s* e;
      struct zx_b12_Correlation_s* en;
      for (e = x->Correlation; e; e = en) {
	  en = (struct zx_b12_Correlation_s*)e->gg.g.n;
	  zx_FREE_b12_Correlation(c, e, free_strs);
      }
  }
  {
      struct zx_b12_Provider_s* e;
      struct zx_b12_Provider_s* en;
      for (e = x->Provider; e; e = en) {
	  en = (struct zx_b12_Provider_s*)e->gg.g.n;
	  zx_FREE_b12_Provider(c, e, free_strs);
      }
  }
  {
      struct zx_b12_ProcessingContext_s* e;
      struct zx_b12_ProcessingContext_s* en;
      for (e = x->b12_ProcessingContext; e; e = en) {
	  en = (struct zx_b12_ProcessingContext_s*)e->gg.g.n;
	  zx_FREE_b12_ProcessingContext(c, e, free_strs);
      }
  }
  {
      struct zx_b12_Consent_s* e;
      struct zx_b12_Consent_s* en;
      for (e = x->b12_Consent; e; e = en) {
	  en = (struct zx_b12_Consent_s*)e->gg.g.n;
	  zx_FREE_b12_Consent(c, e, free_strs);
      }
  }
  {
      struct zx_b12_UsageDirective_s* e;
      struct zx_b12_UsageDirective_s* en;
      for (e = x->b12_UsageDirective; e; e = en) {
	  en = (struct zx_b12_UsageDirective_s*)e->gg.g.n;
	  zx_FREE_b12_UsageDirective(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_e_Header) */

/* Trivial allocator/constructor for the datatype. */

struct zx_e_Header_s* zx_NEW_e_Header(struct zx_ctx* c)
{
  struct zx_e_Header_s* x = ZX_ZALLOC(c, struct zx_e_Header_s);
  x->gg.g.tok = zx_e_Header_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_e_Header) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_b_TargetIdentity_s* e;
      for (e = x->TargetIdentity; e; e = (struct zx_b_TargetIdentity_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_TargetIdentity(c, e, ctx, callback);
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
      struct zx_b_Consent_s* e;
      for (e = x->Consent; e; e = (struct zx_b_Consent_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_Consent(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b_UsageDirective_s* e;
      for (e = x->UsageDirective; e; e = (struct zx_b_UsageDirective_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_UsageDirective(c, e, ctx, callback);
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
      struct zx_b_UserInteraction_s* e;
      for (e = x->UserInteraction; e; e = (struct zx_b_UserInteraction_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b_UserInteraction(c, e, ctx, callback);
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
  {
      struct zx_b12_Correlation_s* e;
      for (e = x->Correlation; e; e = (struct zx_b12_Correlation_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b12_Correlation(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b12_Provider_s* e;
      for (e = x->Provider; e; e = (struct zx_b12_Provider_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b12_Provider(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b12_ProcessingContext_s* e;
      for (e = x->b12_ProcessingContext; e; e = (struct zx_b12_ProcessingContext_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b12_ProcessingContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b12_Consent_s* e;
      for (e = x->b12_Consent; e; e = (struct zx_b12_Consent_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b12_Consent(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_b12_UsageDirective_s* e;
      for (e = x->b12_UsageDirective; e; e = (struct zx_b12_UsageDirective_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_b12_UsageDirective(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_e_Header) */

int zx_WALK_WO_e_Header(struct zx_ctx* c, struct zx_e_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zx_e_detail_s
#define EL_NS     e
#define EL_TAG    detail

/* FUNC(zx_DUP_STRS_e_detail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_e_detail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_e_detail_s* zx_DEEP_CLONE_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, int dup_strs)
{
  x = (struct zx_e_detail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_e_detail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_e_detail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_e_detail) */

/* Trivial allocator/constructor for the datatype. */

struct zx_e_detail_s* zx_NEW_e_detail(struct zx_ctx* c)
{
  struct zx_e_detail_s* x = ZX_ZALLOC(c, struct zx_e_detail_s);
  x->gg.g.tok = zx_e_detail_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_e_detail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_e_detail) */

int zx_WALK_WO_e_detail(struct zx_ctx* c, struct zx_e_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}


/* EOF -- c/zx-e-aux.c */
