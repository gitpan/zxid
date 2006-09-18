/* c/saml2md-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/saml2md-const.h"
#include "c/saml2md-data.h"



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

#define EL_NAME   ds_CanonicalizationMethod
#define EL_STRUCT zxmd_ds_CanonicalizationMethod_s
#define EL_NS     ds
#define EL_TAG    CanonicalizationMethod

/* FUNC(zxmd_DUP_STRS_ds_CanonicalizationMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);


}

/* FUNC(zxmd_DEEP_CLONE_ds_CanonicalizationMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_CanonicalizationMethod_s* zxmd_DEEP_CLONE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x, int dup_strs)
{
  x = (struct zxmd_ds_CanonicalizationMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_CanonicalizationMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);


  return x;
}

/* FUNC(zxmd_FREE_ds_CanonicalizationMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_CanonicalizationMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_CanonicalizationMethod_s* zxmd_NEW_ds_CanonicalizationMethod(struct zx_ctx* c)
{
  struct zxmd_ds_CanonicalizationMethod_s* x = ZX_ZALLOC(c, struct zxmd_ds_CanonicalizationMethod_s);
  x->gg.g.tok = zxmd_ds_CanonicalizationMethod_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_CanonicalizationMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_ds_CanonicalizationMethod) */

int zxmd_WALK_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zxmd_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_DSAKeyValue
#define EL_STRUCT zxmd_ds_DSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    DSAKeyValue

/* FUNC(zxmd_DUP_STRS_ds_DSAKeyValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->P);
  zx_dup_strs_simple_elems(c, x->Q);
  zx_dup_strs_simple_elems(c, x->G);
  zx_dup_strs_simple_elems(c, x->Y);
  zx_dup_strs_simple_elems(c, x->J);
  zx_dup_strs_simple_elems(c, x->Seed);
  zx_dup_strs_simple_elems(c, x->PgenCounter);

}

/* FUNC(zxmd_DEEP_CLONE_ds_DSAKeyValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_DSAKeyValue_s* zxmd_DEEP_CLONE_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x, int dup_strs)
{
  x = (struct zxmd_ds_DSAKeyValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_DSAKeyValue_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->P = zx_deep_clone_simple_elems(c,x->P, dup_strs);
  x->Q = zx_deep_clone_simple_elems(c,x->Q, dup_strs);
  x->G = zx_deep_clone_simple_elems(c,x->G, dup_strs);
  x->Y = zx_deep_clone_simple_elems(c,x->Y, dup_strs);
  x->J = zx_deep_clone_simple_elems(c,x->J, dup_strs);
  x->Seed = zx_deep_clone_simple_elems(c,x->Seed, dup_strs);
  x->PgenCounter = zx_deep_clone_simple_elems(c,x->PgenCounter, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_DSAKeyValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->P, free_strs);
  zx_free_simple_elems(c, x->Q, free_strs);
  zx_free_simple_elems(c, x->G, free_strs);
  zx_free_simple_elems(c, x->Y, free_strs);
  zx_free_simple_elems(c, x->J, free_strs);
  zx_free_simple_elems(c, x->Seed, free_strs);
  zx_free_simple_elems(c, x->PgenCounter, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_DSAKeyValue) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_DSAKeyValue_s* zxmd_NEW_ds_DSAKeyValue(struct zx_ctx* c)
{
  struct zxmd_ds_DSAKeyValue_s* x = ZX_ZALLOC(c, struct zxmd_ds_DSAKeyValue_s);
  x->gg.g.tok = zxmd_ds_DSAKeyValue_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_DSAKeyValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->P, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Q, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->G, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Y, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->J, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Seed, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->PgenCounter, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_DSAKeyValue) */

int zxmd_WALK_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zxmd_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_DigestMethod
#define EL_STRUCT zxmd_ds_DigestMethod_s
#define EL_NS     ds
#define EL_TAG    DigestMethod

/* FUNC(zxmd_DUP_STRS_ds_DigestMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);


}

/* FUNC(zxmd_DEEP_CLONE_ds_DigestMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_DigestMethod_s* zxmd_DEEP_CLONE_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x, int dup_strs)
{
  x = (struct zxmd_ds_DigestMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_DigestMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);


  return x;
}

/* FUNC(zxmd_FREE_ds_DigestMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_DigestMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_DigestMethod_s* zxmd_NEW_ds_DigestMethod(struct zx_ctx* c)
{
  struct zxmd_ds_DigestMethod_s* x = ZX_ZALLOC(c, struct zxmd_ds_DigestMethod_s);
  x->gg.g.tok = zxmd_ds_DigestMethod_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_DigestMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_ds_DigestMethod) */

int zxmd_WALK_WO_ds_DigestMethod(struct zx_ctx* c, struct zxmd_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_KeyInfo
#define EL_STRUCT zxmd_ds_KeyInfo_s
#define EL_NS     ds
#define EL_TAG    KeyInfo

/* FUNC(zxmd_DUP_STRS_ds_KeyInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  zx_dup_strs_simple_elems(c, x->KeyName);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_KeyValue(c, e);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_RetrievalMethod(c, e);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_X509Data(c, e);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_PGPData(c, e);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_SPKIData(c, e);
  }
  zx_dup_strs_simple_elems(c, x->MgmtData);

}

/* FUNC(zxmd_DEEP_CLONE_ds_KeyInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_KeyInfo_s* zxmd_DEEP_CLONE_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x, int dup_strs)
{
  x = (struct zxmd_ds_KeyInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_KeyInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  x->KeyName = zx_deep_clone_simple_elems(c,x->KeyName, dup_strs);
  {
      struct zxmd_ds_KeyValue_s* e;
      struct zxmd_ds_KeyValue_s* en;
      struct zxmd_ds_KeyValue_s* enn;
      for (enn = 0, e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_KeyValue(c, e, dup_strs);
	  if (!enn)
	      x->KeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      struct zxmd_ds_RetrievalMethod_s* en;
      struct zxmd_ds_RetrievalMethod_s* enn;
      for (enn = 0, e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_RetrievalMethod(c, e, dup_strs);
	  if (!enn)
	      x->RetrievalMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      struct zxmd_ds_X509Data_s* en;
      struct zxmd_ds_X509Data_s* enn;
      for (enn = 0, e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_X509Data(c, e, dup_strs);
	  if (!enn)
	      x->X509Data = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      struct zxmd_ds_PGPData_s* en;
      struct zxmd_ds_PGPData_s* enn;
      for (enn = 0, e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_PGPData(c, e, dup_strs);
	  if (!enn)
	      x->PGPData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      struct zxmd_ds_SPKIData_s* en;
      struct zxmd_ds_SPKIData_s* enn;
      for (enn = 0, e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_SPKIData(c, e, dup_strs);
	  if (!enn)
	      x->SPKIData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->MgmtData = zx_deep_clone_simple_elems(c,x->MgmtData, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_KeyInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  zx_free_simple_elems(c, x->KeyName, free_strs);
  {
      struct zxmd_ds_KeyValue_s* e;
      struct zxmd_ds_KeyValue_s* en;
      for (e = x->KeyValue; e; e = en) {
	  en = (struct zxmd_ds_KeyValue_s*)e->gg.g.n;
	  zxmd_FREE_ds_KeyValue(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      struct zxmd_ds_RetrievalMethod_s* en;
      for (e = x->RetrievalMethod; e; e = en) {
	  en = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n;
	  zxmd_FREE_ds_RetrievalMethod(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      struct zxmd_ds_X509Data_s* en;
      for (e = x->X509Data; e; e = en) {
	  en = (struct zxmd_ds_X509Data_s*)e->gg.g.n;
	  zxmd_FREE_ds_X509Data(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      struct zxmd_ds_PGPData_s* en;
      for (e = x->PGPData; e; e = en) {
	  en = (struct zxmd_ds_PGPData_s*)e->gg.g.n;
	  zxmd_FREE_ds_PGPData(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      struct zxmd_ds_SPKIData_s* en;
      for (e = x->SPKIData; e; e = en) {
	  en = (struct zxmd_ds_SPKIData_s*)e->gg.g.n;
	  zxmd_FREE_ds_SPKIData(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->MgmtData, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_KeyInfo) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_KeyInfo_s* zxmd_NEW_ds_KeyInfo(struct zx_ctx* c)
{
  struct zxmd_ds_KeyInfo_s* x = ZX_ZALLOC(c, struct zxmd_ds_KeyInfo_s);
  x->gg.g.tok = zxmd_ds_KeyInfo_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_KeyInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->KeyName, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_KeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_RetrievalMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_X509Data(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_PGPData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_SPKIData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->MgmtData, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_KeyInfo) */

int zxmd_WALK_WO_ds_KeyInfo(struct zx_ctx* c, struct zxmd_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_KeyValue
#define EL_STRUCT zxmd_ds_KeyValue_s
#define EL_NS     ds
#define EL_TAG    KeyValue

/* FUNC(zxmd_DUP_STRS_ds_KeyValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_DSAKeyValue_s* e;
      for (e = x->DSAKeyValue; e; e = (struct zxmd_ds_DSAKeyValue_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_DSAKeyValue(c, e);
  }
  {
      struct zxmd_ds_RSAKeyValue_s* e;
      for (e = x->RSAKeyValue; e; e = (struct zxmd_ds_RSAKeyValue_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_RSAKeyValue(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_ds_KeyValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_KeyValue_s* zxmd_DEEP_CLONE_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x, int dup_strs)
{
  x = (struct zxmd_ds_KeyValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_KeyValue_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_DSAKeyValue_s* e;
      struct zxmd_ds_DSAKeyValue_s* en;
      struct zxmd_ds_DSAKeyValue_s* enn;
      for (enn = 0, e = x->DSAKeyValue; e; e = (struct zxmd_ds_DSAKeyValue_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_DSAKeyValue(c, e, dup_strs);
	  if (!enn)
	      x->DSAKeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_RSAKeyValue_s* e;
      struct zxmd_ds_RSAKeyValue_s* en;
      struct zxmd_ds_RSAKeyValue_s* enn;
      for (enn = 0, e = x->RSAKeyValue; e; e = (struct zxmd_ds_RSAKeyValue_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_RSAKeyValue(c, e, dup_strs);
	  if (!enn)
	      x->RSAKeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_ds_KeyValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_DSAKeyValue_s* e;
      struct zxmd_ds_DSAKeyValue_s* en;
      for (e = x->DSAKeyValue; e; e = en) {
	  en = (struct zxmd_ds_DSAKeyValue_s*)e->gg.g.n;
	  zxmd_FREE_ds_DSAKeyValue(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_RSAKeyValue_s* e;
      struct zxmd_ds_RSAKeyValue_s* en;
      for (e = x->RSAKeyValue; e; e = en) {
	  en = (struct zxmd_ds_RSAKeyValue_s*)e->gg.g.n;
	  zxmd_FREE_ds_RSAKeyValue(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_KeyValue) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_KeyValue_s* zxmd_NEW_ds_KeyValue(struct zx_ctx* c)
{
  struct zxmd_ds_KeyValue_s* x = ZX_ZALLOC(c, struct zxmd_ds_KeyValue_s);
  x->gg.g.tok = zxmd_ds_KeyValue_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_KeyValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_DSAKeyValue_s* e;
      for (e = x->DSAKeyValue; e; e = (struct zxmd_ds_DSAKeyValue_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_DSAKeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_RSAKeyValue_s* e;
      for (e = x->RSAKeyValue; e; e = (struct zxmd_ds_RSAKeyValue_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_RSAKeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_KeyValue) */

int zxmd_WALK_WO_ds_KeyValue(struct zx_ctx* c, struct zxmd_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_Manifest
#define EL_STRUCT zxmd_ds_Manifest_s
#define EL_NS     ds
#define EL_TAG    Manifest

/* FUNC(zxmd_DUP_STRS_ds_Manifest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zxmd_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Reference(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_ds_Manifest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_Manifest_s* zxmd_DEEP_CLONE_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x, int dup_strs)
{
  x = (struct zxmd_ds_Manifest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_Manifest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zxmd_ds_Reference_s* e;
      struct zxmd_ds_Reference_s* en;
      struct zxmd_ds_Reference_s* enn;
      for (enn = 0, e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Reference(c, e, dup_strs);
	  if (!enn)
	      x->Reference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_ds_Manifest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zxmd_ds_Reference_s* e;
      struct zxmd_ds_Reference_s* en;
      for (e = x->Reference; e; e = en) {
	  en = (struct zxmd_ds_Reference_s*)e->gg.g.n;
	  zxmd_FREE_ds_Reference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_Manifest) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_Manifest_s* zxmd_NEW_ds_Manifest(struct zx_ctx* c)
{
  struct zxmd_ds_Manifest_s* x = ZX_ZALLOC(c, struct zxmd_ds_Manifest_s);
  x->gg.g.tok = zxmd_ds_Manifest_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_Manifest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Reference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_Manifest) */

int zxmd_WALK_WO_ds_Manifest(struct zx_ctx* c, struct zxmd_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_Object
#define EL_STRUCT zxmd_ds_Object_s
#define EL_NS     ds
#define EL_TAG    Object

/* FUNC(zxmd_DUP_STRS_ds_Object) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->MimeType);
  zx_dup_attr(c, x->Encoding);


}

/* FUNC(zxmd_DEEP_CLONE_ds_Object) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_Object_s* zxmd_DEEP_CLONE_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x, int dup_strs)
{
  x = (struct zxmd_ds_Object_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_Object_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->MimeType = zx_clone_attr(c, x->MimeType);
  x->Encoding = zx_clone_attr(c, x->Encoding);


  return x;
}

/* FUNC(zxmd_FREE_ds_Object) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->MimeType, free_strs);
  zx_free_attr(c, x->Encoding, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_Object) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_Object_s* zxmd_NEW_ds_Object(struct zx_ctx* c)
{
  struct zxmd_ds_Object_s* x = ZX_ZALLOC(c, struct zxmd_ds_Object_s);
  x->gg.g.tok = zxmd_ds_Object_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_Object) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_ds_Object) */

int zxmd_WALK_WO_ds_Object(struct zx_ctx* c, struct zxmd_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_PGPData
#define EL_STRUCT zxmd_ds_PGPData_s
#define EL_NS     ds
#define EL_TAG    PGPData

/* FUNC(zxmd_DUP_STRS_ds_PGPData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->PGPKeyID);
  zx_dup_strs_simple_elems(c, x->PGPKeyPacket);

}

/* FUNC(zxmd_DEEP_CLONE_ds_PGPData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_PGPData_s* zxmd_DEEP_CLONE_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x, int dup_strs)
{
  x = (struct zxmd_ds_PGPData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_PGPData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->PGPKeyID = zx_deep_clone_simple_elems(c,x->PGPKeyID, dup_strs);
  x->PGPKeyPacket = zx_deep_clone_simple_elems(c,x->PGPKeyPacket, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_PGPData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->PGPKeyID, free_strs);
  zx_free_simple_elems(c, x->PGPKeyPacket, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_PGPData) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_PGPData_s* zxmd_NEW_ds_PGPData(struct zx_ctx* c)
{
  struct zxmd_ds_PGPData_s* x = ZX_ZALLOC(c, struct zxmd_ds_PGPData_s);
  x->gg.g.tok = zxmd_ds_PGPData_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_PGPData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->PGPKeyID, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->PGPKeyPacket, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_PGPData) */

int zxmd_WALK_WO_ds_PGPData(struct zx_ctx* c, struct zxmd_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_RSAKeyValue
#define EL_STRUCT zxmd_ds_RSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    RSAKeyValue

/* FUNC(zxmd_DUP_STRS_ds_RSAKeyValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Modulus);
  zx_dup_strs_simple_elems(c, x->Exponent);

}

/* FUNC(zxmd_DEEP_CLONE_ds_RSAKeyValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_RSAKeyValue_s* zxmd_DEEP_CLONE_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x, int dup_strs)
{
  x = (struct zxmd_ds_RSAKeyValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_RSAKeyValue_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Modulus = zx_deep_clone_simple_elems(c,x->Modulus, dup_strs);
  x->Exponent = zx_deep_clone_simple_elems(c,x->Exponent, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_RSAKeyValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Modulus, free_strs);
  zx_free_simple_elems(c, x->Exponent, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_RSAKeyValue) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_RSAKeyValue_s* zxmd_NEW_ds_RSAKeyValue(struct zx_ctx* c)
{
  struct zxmd_ds_RSAKeyValue_s* x = ZX_ZALLOC(c, struct zxmd_ds_RSAKeyValue_s);
  x->gg.g.tok = zxmd_ds_RSAKeyValue_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_RSAKeyValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Modulus, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->Exponent, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_RSAKeyValue) */

int zxmd_WALK_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zxmd_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_Reference
#define EL_STRUCT zxmd_ds_Reference_s
#define EL_NS     ds
#define EL_TAG    Reference

/* FUNC(zxmd_DUP_STRS_ds_Reference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->URI);
  zx_dup_attr(c, x->Type);

  {
      struct zxmd_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Transforms(c, e);
  }
  {
      struct zxmd_ds_DigestMethod_s* e;
      for (e = x->DigestMethod; e; e = (struct zxmd_ds_DigestMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_DigestMethod(c, e);
  }
  zx_dup_strs_simple_elems(c, x->DigestValue);

}

/* FUNC(zxmd_DEEP_CLONE_ds_Reference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_Reference_s* zxmd_DEEP_CLONE_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x, int dup_strs)
{
  x = (struct zxmd_ds_Reference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_Reference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->URI = zx_clone_attr(c, x->URI);
  x->Type = zx_clone_attr(c, x->Type);

  {
      struct zxmd_ds_Transforms_s* e;
      struct zxmd_ds_Transforms_s* en;
      struct zxmd_ds_Transforms_s* enn;
      for (enn = 0, e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Transforms(c, e, dup_strs);
	  if (!enn)
	      x->Transforms = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_DigestMethod_s* e;
      struct zxmd_ds_DigestMethod_s* en;
      struct zxmd_ds_DigestMethod_s* enn;
      for (enn = 0, e = x->DigestMethod; e; e = (struct zxmd_ds_DigestMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_DigestMethod(c, e, dup_strs);
	  if (!enn)
	      x->DigestMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->DigestValue = zx_deep_clone_simple_elems(c,x->DigestValue, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_Reference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->URI, free_strs);
  zx_free_attr(c, x->Type, free_strs);

  {
      struct zxmd_ds_Transforms_s* e;
      struct zxmd_ds_Transforms_s* en;
      for (e = x->Transforms; e; e = en) {
	  en = (struct zxmd_ds_Transforms_s*)e->gg.g.n;
	  zxmd_FREE_ds_Transforms(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_DigestMethod_s* e;
      struct zxmd_ds_DigestMethod_s* en;
      for (e = x->DigestMethod; e; e = en) {
	  en = (struct zxmd_ds_DigestMethod_s*)e->gg.g.n;
	  zxmd_FREE_ds_DigestMethod(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->DigestValue, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_Reference) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_Reference_s* zxmd_NEW_ds_Reference(struct zx_ctx* c)
{
  struct zxmd_ds_Reference_s* x = ZX_ZALLOC(c, struct zxmd_ds_Reference_s);
  x->gg.g.tok = zxmd_ds_Reference_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_Reference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Transforms(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_DigestMethod_s* e;
      for (e = x->DigestMethod; e; e = (struct zxmd_ds_DigestMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_DigestMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->DigestValue, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_Reference) */

int zxmd_WALK_WO_ds_Reference(struct zx_ctx* c, struct zxmd_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_RetrievalMethod
#define EL_STRUCT zxmd_ds_RetrievalMethod_s
#define EL_NS     ds
#define EL_TAG    RetrievalMethod

/* FUNC(zxmd_DUP_STRS_ds_RetrievalMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);
  zx_dup_attr(c, x->Type);

  {
      struct zxmd_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Transforms(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_ds_RetrievalMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_RetrievalMethod_s* zxmd_DEEP_CLONE_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x, int dup_strs)
{
  x = (struct zxmd_ds_RetrievalMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_RetrievalMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);
  x->Type = zx_clone_attr(c, x->Type);

  {
      struct zxmd_ds_Transforms_s* e;
      struct zxmd_ds_Transforms_s* en;
      struct zxmd_ds_Transforms_s* enn;
      for (enn = 0, e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Transforms(c, e, dup_strs);
	  if (!enn)
	      x->Transforms = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_ds_RetrievalMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);
  zx_free_attr(c, x->Type, free_strs);

  {
      struct zxmd_ds_Transforms_s* e;
      struct zxmd_ds_Transforms_s* en;
      for (e = x->Transforms; e; e = en) {
	  en = (struct zxmd_ds_Transforms_s*)e->gg.g.n;
	  zxmd_FREE_ds_Transforms(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_RetrievalMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_RetrievalMethod_s* zxmd_NEW_ds_RetrievalMethod(struct zx_ctx* c)
{
  struct zxmd_ds_RetrievalMethod_s* x = ZX_ZALLOC(c, struct zxmd_ds_RetrievalMethod_s);
  x->gg.g.tok = zxmd_ds_RetrievalMethod_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_RetrievalMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_ds_Transforms_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Transforms(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_RetrievalMethod) */

int zxmd_WALK_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zxmd_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_SPKIData
#define EL_STRUCT zxmd_ds_SPKIData_s
#define EL_NS     ds
#define EL_TAG    SPKIData

/* FUNC(zxmd_DUP_STRS_ds_SPKIData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->SPKISexp);

}

/* FUNC(zxmd_DEEP_CLONE_ds_SPKIData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_SPKIData_s* zxmd_DEEP_CLONE_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x, int dup_strs)
{
  x = (struct zxmd_ds_SPKIData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_SPKIData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->SPKISexp = zx_deep_clone_simple_elems(c,x->SPKISexp, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_SPKIData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->SPKISexp, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_SPKIData) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_SPKIData_s* zxmd_NEW_ds_SPKIData(struct zx_ctx* c)
{
  struct zxmd_ds_SPKIData_s* x = ZX_ZALLOC(c, struct zxmd_ds_SPKIData_s);
  x->gg.g.tok = zxmd_ds_SPKIData_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_SPKIData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->SPKISexp, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_SPKIData) */

int zxmd_WALK_WO_ds_SPKIData(struct zx_ctx* c, struct zxmd_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_Signature
#define EL_STRUCT zxmd_ds_Signature_s
#define EL_NS     ds
#define EL_TAG    Signature

/* FUNC(zxmd_DUP_STRS_ds_Signature) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zxmd_ds_SignedInfo_s* e;
      for (e = x->SignedInfo; e; e = (struct zxmd_ds_SignedInfo_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_SignedInfo(c, e);
  }
  {
      struct zxmd_ds_SignatureValue_s* e;
      for (e = x->SignatureValue; e; e = (struct zxmd_ds_SignatureValue_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_SignatureValue(c, e);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_KeyInfo(c, e);
  }
  {
      struct zxmd_ds_Object_s* e;
      for (e = x->Object; e; e = (struct zxmd_ds_Object_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Object(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_ds_Signature) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_Signature_s* zxmd_DEEP_CLONE_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x, int dup_strs)
{
  x = (struct zxmd_ds_Signature_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_Signature_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zxmd_ds_SignedInfo_s* e;
      struct zxmd_ds_SignedInfo_s* en;
      struct zxmd_ds_SignedInfo_s* enn;
      for (enn = 0, e = x->SignedInfo; e; e = (struct zxmd_ds_SignedInfo_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_SignedInfo(c, e, dup_strs);
	  if (!enn)
	      x->SignedInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_SignatureValue_s* e;
      struct zxmd_ds_SignatureValue_s* en;
      struct zxmd_ds_SignatureValue_s* enn;
      for (enn = 0, e = x->SignatureValue; e; e = (struct zxmd_ds_SignatureValue_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_SignatureValue(c, e, dup_strs);
	  if (!enn)
	      x->SignatureValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      struct zxmd_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_Object_s* e;
      struct zxmd_ds_Object_s* en;
      struct zxmd_ds_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zxmd_ds_Object_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_ds_Signature) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zxmd_ds_SignedInfo_s* e;
      struct zxmd_ds_SignedInfo_s* en;
      for (e = x->SignedInfo; e; e = en) {
	  en = (struct zxmd_ds_SignedInfo_s*)e->gg.g.n;
	  zxmd_FREE_ds_SignedInfo(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_SignatureValue_s* e;
      struct zxmd_ds_SignatureValue_s* en;
      for (e = x->SignatureValue; e; e = en) {
	  en = (struct zxmd_ds_SignatureValue_s*)e->gg.g.n;
	  zxmd_FREE_ds_SignatureValue(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n;
	  zxmd_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_Object_s* e;
      struct zxmd_ds_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zxmd_ds_Object_s*)e->gg.g.n;
	  zxmd_FREE_ds_Object(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_Signature) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_Signature_s* zxmd_NEW_ds_Signature(struct zx_ctx* c)
{
  struct zxmd_ds_Signature_s* x = ZX_ZALLOC(c, struct zxmd_ds_Signature_s);
  x->gg.g.tok = zxmd_ds_Signature_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_Signature) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_SignedInfo_s* e;
      for (e = x->SignedInfo; e; e = (struct zxmd_ds_SignedInfo_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_SignedInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_SignatureValue_s* e;
      for (e = x->SignatureValue; e; e = (struct zxmd_ds_SignatureValue_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_SignatureValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_Object_s* e;
      for (e = x->Object; e; e = (struct zxmd_ds_Object_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_Signature) */

int zxmd_WALK_WO_ds_Signature(struct zx_ctx* c, struct zxmd_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_SignatureMethod
#define EL_STRUCT zxmd_ds_SignatureMethod_s
#define EL_NS     ds
#define EL_TAG    SignatureMethod

/* FUNC(zxmd_DUP_STRS_ds_SignatureMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->HMACOutputLength);

}

/* FUNC(zxmd_DEEP_CLONE_ds_SignatureMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_SignatureMethod_s* zxmd_DEEP_CLONE_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x, int dup_strs)
{
  x = (struct zxmd_ds_SignatureMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_SignatureMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->HMACOutputLength = zx_deep_clone_simple_elems(c,x->HMACOutputLength, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_SignatureMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->HMACOutputLength, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_SignatureMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_SignatureMethod_s* zxmd_NEW_ds_SignatureMethod(struct zx_ctx* c)
{
  struct zxmd_ds_SignatureMethod_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignatureMethod_s);
  x->gg.g.tok = zxmd_ds_SignatureMethod_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_SignatureMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->HMACOutputLength, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_SignatureMethod) */

int zxmd_WALK_WO_ds_SignatureMethod(struct zx_ctx* c, struct zxmd_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_SignatureProperties
#define EL_STRUCT zxmd_ds_SignatureProperties_s
#define EL_NS     ds
#define EL_TAG    SignatureProperties

/* FUNC(zxmd_DUP_STRS_ds_SignatureProperties) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zxmd_ds_SignatureProperty_s* e;
      for (e = x->SignatureProperty; e; e = (struct zxmd_ds_SignatureProperty_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_SignatureProperty(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_ds_SignatureProperties) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_SignatureProperties_s* zxmd_DEEP_CLONE_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x, int dup_strs)
{
  x = (struct zxmd_ds_SignatureProperties_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_SignatureProperties_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zxmd_ds_SignatureProperty_s* e;
      struct zxmd_ds_SignatureProperty_s* en;
      struct zxmd_ds_SignatureProperty_s* enn;
      for (enn = 0, e = x->SignatureProperty; e; e = (struct zxmd_ds_SignatureProperty_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_SignatureProperty(c, e, dup_strs);
	  if (!enn)
	      x->SignatureProperty = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_ds_SignatureProperties) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zxmd_ds_SignatureProperty_s* e;
      struct zxmd_ds_SignatureProperty_s* en;
      for (e = x->SignatureProperty; e; e = en) {
	  en = (struct zxmd_ds_SignatureProperty_s*)e->gg.g.n;
	  zxmd_FREE_ds_SignatureProperty(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_SignatureProperties) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_SignatureProperties_s* zxmd_NEW_ds_SignatureProperties(struct zx_ctx* c)
{
  struct zxmd_ds_SignatureProperties_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignatureProperties_s);
  x->gg.g.tok = zxmd_ds_SignatureProperties_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_SignatureProperties) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_SignatureProperty_s* e;
      for (e = x->SignatureProperty; e; e = (struct zxmd_ds_SignatureProperty_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_SignatureProperty(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_SignatureProperties) */

int zxmd_WALK_WO_ds_SignatureProperties(struct zx_ctx* c, struct zxmd_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_SignatureProperty
#define EL_STRUCT zxmd_ds_SignatureProperty_s
#define EL_NS     ds
#define EL_TAG    SignatureProperty

/* FUNC(zxmd_DUP_STRS_ds_SignatureProperty) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Target);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zxmd_DEEP_CLONE_ds_SignatureProperty) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_SignatureProperty_s* zxmd_DEEP_CLONE_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x, int dup_strs)
{
  x = (struct zxmd_ds_SignatureProperty_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_SignatureProperty_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Target = zx_clone_attr(c, x->Target);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zxmd_FREE_ds_SignatureProperty) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Target, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_SignatureProperty) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_SignatureProperty_s* zxmd_NEW_ds_SignatureProperty(struct zx_ctx* c)
{
  struct zxmd_ds_SignatureProperty_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignatureProperty_s);
  x->gg.g.tok = zxmd_ds_SignatureProperty_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_SignatureProperty) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_ds_SignatureProperty) */

int zxmd_WALK_WO_ds_SignatureProperty(struct zx_ctx* c, struct zxmd_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_SignatureValue
#define EL_STRUCT zxmd_ds_SignatureValue_s
#define EL_NS     ds
#define EL_TAG    SignatureValue

/* FUNC(zxmd_DUP_STRS_ds_SignatureValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);


}

/* FUNC(zxmd_DEEP_CLONE_ds_SignatureValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_SignatureValue_s* zxmd_DEEP_CLONE_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x, int dup_strs)
{
  x = (struct zxmd_ds_SignatureValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_SignatureValue_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zxmd_FREE_ds_SignatureValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_SignatureValue) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_SignatureValue_s* zxmd_NEW_ds_SignatureValue(struct zx_ctx* c)
{
  struct zxmd_ds_SignatureValue_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignatureValue_s);
  x->gg.g.tok = zxmd_ds_SignatureValue_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_SignatureValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_ds_SignatureValue) */

int zxmd_WALK_WO_ds_SignatureValue(struct zx_ctx* c, struct zxmd_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_SignedInfo
#define EL_STRUCT zxmd_ds_SignedInfo_s
#define EL_NS     ds
#define EL_TAG    SignedInfo

/* FUNC(zxmd_DUP_STRS_ds_SignedInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zxmd_ds_CanonicalizationMethod_s* e;
      for (e = x->CanonicalizationMethod; e; e = (struct zxmd_ds_CanonicalizationMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_CanonicalizationMethod(c, e);
  }
  {
      struct zxmd_ds_SignatureMethod_s* e;
      for (e = x->SignatureMethod; e; e = (struct zxmd_ds_SignatureMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_SignatureMethod(c, e);
  }
  {
      struct zxmd_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Reference(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_ds_SignedInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_SignedInfo_s* zxmd_DEEP_CLONE_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x, int dup_strs)
{
  x = (struct zxmd_ds_SignedInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_SignedInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zxmd_ds_CanonicalizationMethod_s* e;
      struct zxmd_ds_CanonicalizationMethod_s* en;
      struct zxmd_ds_CanonicalizationMethod_s* enn;
      for (enn = 0, e = x->CanonicalizationMethod; e; e = (struct zxmd_ds_CanonicalizationMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_CanonicalizationMethod(c, e, dup_strs);
	  if (!enn)
	      x->CanonicalizationMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_SignatureMethod_s* e;
      struct zxmd_ds_SignatureMethod_s* en;
      struct zxmd_ds_SignatureMethod_s* enn;
      for (enn = 0, e = x->SignatureMethod; e; e = (struct zxmd_ds_SignatureMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_SignatureMethod(c, e, dup_strs);
	  if (!enn)
	      x->SignatureMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_Reference_s* e;
      struct zxmd_ds_Reference_s* en;
      struct zxmd_ds_Reference_s* enn;
      for (enn = 0, e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Reference(c, e, dup_strs);
	  if (!enn)
	      x->Reference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_ds_SignedInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zxmd_ds_CanonicalizationMethod_s* e;
      struct zxmd_ds_CanonicalizationMethod_s* en;
      for (e = x->CanonicalizationMethod; e; e = en) {
	  en = (struct zxmd_ds_CanonicalizationMethod_s*)e->gg.g.n;
	  zxmd_FREE_ds_CanonicalizationMethod(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_SignatureMethod_s* e;
      struct zxmd_ds_SignatureMethod_s* en;
      for (e = x->SignatureMethod; e; e = en) {
	  en = (struct zxmd_ds_SignatureMethod_s*)e->gg.g.n;
	  zxmd_FREE_ds_SignatureMethod(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_Reference_s* e;
      struct zxmd_ds_Reference_s* en;
      for (e = x->Reference; e; e = en) {
	  en = (struct zxmd_ds_Reference_s*)e->gg.g.n;
	  zxmd_FREE_ds_Reference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_SignedInfo) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_SignedInfo_s* zxmd_NEW_ds_SignedInfo(struct zx_ctx* c)
{
  struct zxmd_ds_SignedInfo_s* x = ZX_ZALLOC(c, struct zxmd_ds_SignedInfo_s);
  x->gg.g.tok = zxmd_ds_SignedInfo_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_SignedInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_CanonicalizationMethod_s* e;
      for (e = x->CanonicalizationMethod; e; e = (struct zxmd_ds_CanonicalizationMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_CanonicalizationMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_SignatureMethod_s* e;
      for (e = x->SignatureMethod; e; e = (struct zxmd_ds_SignatureMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_SignatureMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zxmd_ds_Reference_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Reference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_SignedInfo) */

int zxmd_WALK_WO_ds_SignedInfo(struct zx_ctx* c, struct zxmd_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_Transform
#define EL_STRUCT zxmd_ds_Transform_s
#define EL_NS     ds
#define EL_TAG    Transform

/* FUNC(zxmd_DUP_STRS_ds_Transform) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->XPath);

}

/* FUNC(zxmd_DEEP_CLONE_ds_Transform) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_Transform_s* zxmd_DEEP_CLONE_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x, int dup_strs)
{
  x = (struct zxmd_ds_Transform_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_Transform_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->XPath = zx_deep_clone_simple_elems(c,x->XPath, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_Transform) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->XPath, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_Transform) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_Transform_s* zxmd_NEW_ds_Transform(struct zx_ctx* c)
{
  struct zxmd_ds_Transform_s* x = ZX_ZALLOC(c, struct zxmd_ds_Transform_s);
  x->gg.g.tok = zxmd_ds_Transform_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_Transform) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->XPath, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_Transform) */

int zxmd_WALK_WO_ds_Transform(struct zx_ctx* c, struct zxmd_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_Transforms
#define EL_STRUCT zxmd_ds_Transforms_s
#define EL_NS     ds
#define EL_TAG    Transforms

/* FUNC(zxmd_DUP_STRS_ds_Transforms) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Transform(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_ds_Transforms) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_Transforms_s* zxmd_DEEP_CLONE_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x, int dup_strs)
{
  x = (struct zxmd_ds_Transforms_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_Transforms_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_Transform_s* e;
      struct zxmd_ds_Transform_s* en;
      struct zxmd_ds_Transform_s* enn;
      for (enn = 0, e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Transform(c, e, dup_strs);
	  if (!enn)
	      x->Transform = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_ds_Transforms) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_Transform_s* e;
      struct zxmd_ds_Transform_s* en;
      for (e = x->Transform; e; e = en) {
	  en = (struct zxmd_ds_Transform_s*)e->gg.g.n;
	  zxmd_FREE_ds_Transform(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_Transforms) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_Transforms_s* zxmd_NEW_ds_Transforms(struct zx_ctx* c)
{
  struct zxmd_ds_Transforms_s* x = ZX_ZALLOC(c, struct zxmd_ds_Transforms_s);
  x->gg.g.tok = zxmd_ds_Transforms_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_Transforms) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Transform(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_Transforms) */

int zxmd_WALK_WO_ds_Transforms(struct zx_ctx* c, struct zxmd_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_X509Data
#define EL_STRUCT zxmd_ds_X509Data_s
#define EL_NS     ds
#define EL_TAG    X509Data

/* FUNC(zxmd_DUP_STRS_ds_X509Data) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_X509IssuerSerial_s* e;
      for (e = x->X509IssuerSerial; e; e = (struct zxmd_ds_X509IssuerSerial_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_X509IssuerSerial(c, e);
  }
  zx_dup_strs_simple_elems(c, x->X509SKI);
  zx_dup_strs_simple_elems(c, x->X509SubjectName);
  zx_dup_strs_simple_elems(c, x->X509Certificate);
  zx_dup_strs_simple_elems(c, x->X509CRL);

}

/* FUNC(zxmd_DEEP_CLONE_ds_X509Data) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_X509Data_s* zxmd_DEEP_CLONE_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x, int dup_strs)
{
  x = (struct zxmd_ds_X509Data_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_X509Data_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_X509IssuerSerial_s* e;
      struct zxmd_ds_X509IssuerSerial_s* en;
      struct zxmd_ds_X509IssuerSerial_s* enn;
      for (enn = 0, e = x->X509IssuerSerial; e; e = (struct zxmd_ds_X509IssuerSerial_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_X509IssuerSerial(c, e, dup_strs);
	  if (!enn)
	      x->X509IssuerSerial = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->X509SKI = zx_deep_clone_simple_elems(c,x->X509SKI, dup_strs);
  x->X509SubjectName = zx_deep_clone_simple_elems(c,x->X509SubjectName, dup_strs);
  x->X509Certificate = zx_deep_clone_simple_elems(c,x->X509Certificate, dup_strs);
  x->X509CRL = zx_deep_clone_simple_elems(c,x->X509CRL, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_X509Data) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_X509IssuerSerial_s* e;
      struct zxmd_ds_X509IssuerSerial_s* en;
      for (e = x->X509IssuerSerial; e; e = en) {
	  en = (struct zxmd_ds_X509IssuerSerial_s*)e->gg.g.n;
	  zxmd_FREE_ds_X509IssuerSerial(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->X509SKI, free_strs);
  zx_free_simple_elems(c, x->X509SubjectName, free_strs);
  zx_free_simple_elems(c, x->X509Certificate, free_strs);
  zx_free_simple_elems(c, x->X509CRL, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_X509Data) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_X509Data_s* zxmd_NEW_ds_X509Data(struct zx_ctx* c)
{
  struct zxmd_ds_X509Data_s* x = ZX_ZALLOC(c, struct zxmd_ds_X509Data_s);
  x->gg.g.tok = zxmd_ds_X509Data_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_X509Data) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_X509IssuerSerial_s* e;
      for (e = x->X509IssuerSerial; e; e = (struct zxmd_ds_X509IssuerSerial_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_X509IssuerSerial(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->X509SKI, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->X509SubjectName, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->X509Certificate, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->X509CRL, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_X509Data) */

int zxmd_WALK_WO_ds_X509Data(struct zx_ctx* c, struct zxmd_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   ds_X509IssuerSerial
#define EL_STRUCT zxmd_ds_X509IssuerSerial_s
#define EL_NS     ds
#define EL_TAG    X509IssuerSerial

/* FUNC(zxmd_DUP_STRS_ds_X509IssuerSerial) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->X509IssuerName);
  zx_dup_strs_simple_elems(c, x->X509SerialNumber);

}

/* FUNC(zxmd_DEEP_CLONE_ds_X509IssuerSerial) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_ds_X509IssuerSerial_s* zxmd_DEEP_CLONE_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x, int dup_strs)
{
  x = (struct zxmd_ds_X509IssuerSerial_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_ds_X509IssuerSerial_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->X509IssuerName = zx_deep_clone_simple_elems(c,x->X509IssuerName, dup_strs);
  x->X509SerialNumber = zx_deep_clone_simple_elems(c,x->X509SerialNumber, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_ds_X509IssuerSerial) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->X509IssuerName, free_strs);
  zx_free_simple_elems(c, x->X509SerialNumber, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_ds_X509IssuerSerial) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_ds_X509IssuerSerial_s* zxmd_NEW_ds_X509IssuerSerial(struct zx_ctx* c)
{
  struct zxmd_ds_X509IssuerSerial_s* x = ZX_ZALLOC(c, struct zxmd_ds_X509IssuerSerial_s);
  x->gg.g.tok = zxmd_ds_X509IssuerSerial_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_ds_X509IssuerSerial) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->X509IssuerName, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->X509SerialNumber, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_ds_X509IssuerSerial) */

int zxmd_WALK_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zxmd_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_AdditionalMetaLocation
#define EL_STRUCT zxmd_m20_AdditionalMetaLocation_s
#define EL_NS     m20
#define EL_TAG    AdditionalMetaLocation

/* FUNC(zxmd_DUP_STRS_m20_AdditionalMetaLocation) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zxmd_m20_AdditionalMetaLocation_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->namespace);


}

/* FUNC(zxmd_DEEP_CLONE_m20_AdditionalMetaLocation) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_AdditionalMetaLocation_s* zxmd_DEEP_CLONE_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zxmd_m20_AdditionalMetaLocation_s* x, int dup_strs)
{
  x = (struct zxmd_m20_AdditionalMetaLocation_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_AdditionalMetaLocation_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->namespace = zx_clone_attr(c, x->namespace);


  return x;
}

/* FUNC(zxmd_FREE_m20_AdditionalMetaLocation) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zxmd_m20_AdditionalMetaLocation_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->namespace, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_AdditionalMetaLocation) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_AdditionalMetaLocation_s* zxmd_NEW_m20_AdditionalMetaLocation(struct zx_ctx* c)
{
  struct zxmd_m20_AdditionalMetaLocation_s* x = ZX_ZALLOC(c, struct zxmd_m20_AdditionalMetaLocation_s);
  x->gg.g.tok = zxmd_m20_AdditionalMetaLocation_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_AdditionalMetaLocation) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zxmd_m20_AdditionalMetaLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_m20_AdditionalMetaLocation) */

int zxmd_WALK_WO_m20_AdditionalMetaLocation(struct zx_ctx* c, struct zxmd_m20_AdditionalMetaLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_AffiliationDescriptor
#define EL_STRUCT zxmd_m20_AffiliationDescriptor_s
#define EL_NS     m20
#define EL_TAG    AffiliationDescriptor

/* FUNC(zxmd_DUP_STRS_m20_AffiliationDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_m20_AffiliationDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->affiliationOwnerID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->id);

  zx_dup_strs_simple_elems(c, x->AffiliateMember);
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Extension(c, e);
  }
  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_KeyDescriptor(c, e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_m20_AffiliationDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_AffiliationDescriptor_s* zxmd_DEEP_CLONE_m20_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_m20_AffiliationDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_m20_AffiliationDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_AffiliationDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->affiliationOwnerID = zx_clone_attr(c, x->affiliationOwnerID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->id = zx_clone_attr(c, x->id);

  x->AffiliateMember = zx_deep_clone_simple_elems(c,x->AffiliateMember, dup_strs);
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      struct zxmd_m20_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_KeyDescriptor_s* e;
      struct zxmd_m20_KeyDescriptor_s* en;
      struct zxmd_m20_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_m20_AffiliationDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_m20_AffiliationDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->affiliationOwnerID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->id, free_strs);

  zx_free_simple_elems(c, x->AffiliateMember, free_strs);
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zxmd_m20_Extension_s*)e->gg.g.n;
	  zxmd_FREE_m20_Extension(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_KeyDescriptor_s* e;
      struct zxmd_m20_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_KeyDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_AffiliationDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_AffiliationDescriptor_s* zxmd_NEW_m20_AffiliationDescriptor(struct zx_ctx* c)
{
  struct zxmd_m20_AffiliationDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_AffiliationDescriptor_s);
  x->gg.g.tok = zxmd_m20_AffiliationDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_AffiliationDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_m20_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->AffiliateMember, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_m20_AffiliationDescriptor) */

int zxmd_WALK_WO_m20_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_m20_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_AssertionConsumerServiceURL
#define EL_STRUCT zxmd_m20_AssertionConsumerServiceURL_s
#define EL_NS     m20
#define EL_TAG    AssertionConsumerServiceURL

/* FUNC(zxmd_DUP_STRS_m20_AssertionConsumerServiceURL) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zxmd_m20_AssertionConsumerServiceURL_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->isDefault);


}

/* FUNC(zxmd_DEEP_CLONE_m20_AssertionConsumerServiceURL) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_AssertionConsumerServiceURL_s* zxmd_DEEP_CLONE_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zxmd_m20_AssertionConsumerServiceURL_s* x, int dup_strs)
{
  x = (struct zxmd_m20_AssertionConsumerServiceURL_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_AssertionConsumerServiceURL_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->isDefault = zx_clone_attr(c, x->isDefault);


  return x;
}

/* FUNC(zxmd_FREE_m20_AssertionConsumerServiceURL) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zxmd_m20_AssertionConsumerServiceURL_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->isDefault, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_AssertionConsumerServiceURL) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_AssertionConsumerServiceURL_s* zxmd_NEW_m20_AssertionConsumerServiceURL(struct zx_ctx* c)
{
  struct zxmd_m20_AssertionConsumerServiceURL_s* x = ZX_ZALLOC(c, struct zxmd_m20_AssertionConsumerServiceURL_s);
  x->gg.g.tok = zxmd_m20_AssertionConsumerServiceURL_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_AssertionConsumerServiceURL) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zxmd_m20_AssertionConsumerServiceURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_m20_AssertionConsumerServiceURL) */

int zxmd_WALK_WO_m20_AssertionConsumerServiceURL(struct zx_ctx* c, struct zxmd_m20_AssertionConsumerServiceURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_ContactPerson
#define EL_STRUCT zxmd_m20_ContactPerson_s
#define EL_NS     m20
#define EL_TAG    ContactPerson

/* FUNC(zxmd_DUP_STRS_m20_ContactPerson) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_ContactPerson(struct zx_ctx* c, struct zxmd_m20_ContactPerson_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->libertyPrincipalIdentifier);
  zx_dup_attr(c, x->contactType);

  zx_dup_strs_simple_elems(c, x->Company);
  zx_dup_strs_simple_elems(c, x->GivenName);
  zx_dup_strs_simple_elems(c, x->SurName);
  zx_dup_strs_simple_elems(c, x->EmailAddress);
  zx_dup_strs_simple_elems(c, x->TelephoneNumber);
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Extension(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_m20_ContactPerson) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_ContactPerson_s* zxmd_DEEP_CLONE_m20_ContactPerson(struct zx_ctx* c, struct zxmd_m20_ContactPerson_s* x, int dup_strs)
{
  x = (struct zxmd_m20_ContactPerson_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_ContactPerson_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->libertyPrincipalIdentifier = zx_clone_attr(c, x->libertyPrincipalIdentifier);
  x->contactType = zx_clone_attr(c, x->contactType);

  x->Company = zx_deep_clone_simple_elems(c,x->Company, dup_strs);
  x->GivenName = zx_deep_clone_simple_elems(c,x->GivenName, dup_strs);
  x->SurName = zx_deep_clone_simple_elems(c,x->SurName, dup_strs);
  x->EmailAddress = zx_deep_clone_simple_elems(c,x->EmailAddress, dup_strs);
  x->TelephoneNumber = zx_deep_clone_simple_elems(c,x->TelephoneNumber, dup_strs);
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      struct zxmd_m20_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_m20_ContactPerson) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_ContactPerson(struct zx_ctx* c, struct zxmd_m20_ContactPerson_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->libertyPrincipalIdentifier, free_strs);
  zx_free_attr(c, x->contactType, free_strs);

  zx_free_simple_elems(c, x->Company, free_strs);
  zx_free_simple_elems(c, x->GivenName, free_strs);
  zx_free_simple_elems(c, x->SurName, free_strs);
  zx_free_simple_elems(c, x->EmailAddress, free_strs);
  zx_free_simple_elems(c, x->TelephoneNumber, free_strs);
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zxmd_m20_Extension_s*)e->gg.g.n;
	  zxmd_FREE_m20_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_ContactPerson) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_ContactPerson_s* zxmd_NEW_m20_ContactPerson(struct zx_ctx* c)
{
  struct zxmd_m20_ContactPerson_s* x = ZX_ZALLOC(c, struct zxmd_m20_ContactPerson_s);
  x->gg.g.tok = zxmd_m20_ContactPerson_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_ContactPerson) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_ContactPerson(struct zx_ctx* c, struct zxmd_m20_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Company, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->GivenName, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SurName, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->EmailAddress, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->TelephoneNumber, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_m20_ContactPerson) */

int zxmd_WALK_WO_m20_ContactPerson(struct zx_ctx* c, struct zxmd_m20_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_EntitiesDescriptor
#define EL_STRUCT zxmd_m20_EntitiesDescriptor_s
#define EL_NS     m20
#define EL_TAG    EntitiesDescriptor

/* FUNC(zxmd_DUP_STRS_m20_EntitiesDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_m20_EntitiesDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_m20_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_EntityDescriptor(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_m20_EntitiesDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_EntitiesDescriptor_s* zxmd_DEEP_CLONE_m20_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_m20_EntitiesDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_m20_EntitiesDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_EntitiesDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_m20_EntityDescriptor_s* e;
      struct zxmd_m20_EntityDescriptor_s* en;
      struct zxmd_m20_EntityDescriptor_s* enn;
      for (enn = 0, e = x->EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_EntityDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->EntityDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_m20_EntitiesDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_m20_EntitiesDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_m20_EntityDescriptor_s* e;
      struct zxmd_m20_EntityDescriptor_s* en;
      for (e = x->EntityDescriptor; e; e = en) {
	  en = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_EntityDescriptor(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_EntitiesDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_EntitiesDescriptor_s* zxmd_NEW_m20_EntitiesDescriptor(struct zx_ctx* c)
{
  struct zxmd_m20_EntitiesDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_EntitiesDescriptor_s);
  x->gg.g.tok = zxmd_m20_EntitiesDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_EntitiesDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_m20_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_m20_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_EntityDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_m20_EntitiesDescriptor) */

int zxmd_WALK_WO_m20_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_m20_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_EntityDescriptor
#define EL_STRUCT zxmd_m20_EntityDescriptor_s
#define EL_NS     m20
#define EL_TAG    EntityDescriptor

/* FUNC(zxmd_DUP_STRS_m20_EntityDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_EntityDescriptor(struct zx_ctx* c, struct zxmd_m20_EntityDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->providerID);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);

  {
      struct zxmd_m20_IDPDescriptor_s* e;
      for (e = x->IDPDescriptor; e; e = (struct zxmd_m20_IDPDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_IDPDescriptor(c, e);
  }
  {
      struct zxmd_m20_SPDescriptor_s* e;
      for (e = x->SPDescriptor; e; e = (struct zxmd_m20_SPDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_SPDescriptor(c, e);
  }
  {
      struct zxmd_m20_AffiliationDescriptor_s* e;
      for (e = x->AffiliationDescriptor; e; e = (struct zxmd_m20_AffiliationDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_AffiliationDescriptor(c, e);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_ContactPerson(c, e);
  }
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Organization(c, e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Extension(c, e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_m20_EntityDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_EntityDescriptor_s* zxmd_DEEP_CLONE_m20_EntityDescriptor(struct zx_ctx* c, struct zxmd_m20_EntityDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_m20_EntityDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_EntityDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->providerID = zx_clone_attr(c, x->providerID);
  x->id = zx_clone_attr(c, x->id);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);

  {
      struct zxmd_m20_IDPDescriptor_s* e;
      struct zxmd_m20_IDPDescriptor_s* en;
      struct zxmd_m20_IDPDescriptor_s* enn;
      for (enn = 0, e = x->IDPDescriptor; e; e = (struct zxmd_m20_IDPDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_IDPDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->IDPDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_SPDescriptor_s* e;
      struct zxmd_m20_SPDescriptor_s* en;
      struct zxmd_m20_SPDescriptor_s* enn;
      for (enn = 0, e = x->SPDescriptor; e; e = (struct zxmd_m20_SPDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_SPDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->SPDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_AffiliationDescriptor_s* e;
      struct zxmd_m20_AffiliationDescriptor_s* en;
      struct zxmd_m20_AffiliationDescriptor_s* enn;
      for (enn = 0, e = x->AffiliationDescriptor; e; e = (struct zxmd_m20_AffiliationDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_AffiliationDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->AffiliationDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      struct zxmd_m20_ContactPerson_s* en;
      struct zxmd_m20_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_Organization_s* e;
      struct zxmd_m20_Organization_s* en;
      struct zxmd_m20_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      struct zxmd_m20_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_m20_EntityDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_EntityDescriptor(struct zx_ctx* c, struct zxmd_m20_EntityDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->providerID, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);

  {
      struct zxmd_m20_IDPDescriptor_s* e;
      struct zxmd_m20_IDPDescriptor_s* en;
      for (e = x->IDPDescriptor; e; e = en) {
	  en = (struct zxmd_m20_IDPDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_IDPDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_SPDescriptor_s* e;
      struct zxmd_m20_SPDescriptor_s* en;
      for (e = x->SPDescriptor; e; e = en) {
	  en = (struct zxmd_m20_SPDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_SPDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_AffiliationDescriptor_s* e;
      struct zxmd_m20_AffiliationDescriptor_s* en;
      for (e = x->AffiliationDescriptor; e; e = en) {
	  en = (struct zxmd_m20_AffiliationDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_AffiliationDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      struct zxmd_m20_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_m20_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_Organization_s* e;
      struct zxmd_m20_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_m20_Organization_s*)e->gg.g.n;
	  zxmd_FREE_m20_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zxmd_m20_Extension_s*)e->gg.g.n;
	  zxmd_FREE_m20_Extension(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_EntityDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_EntityDescriptor_s* zxmd_NEW_m20_EntityDescriptor(struct zx_ctx* c)
{
  struct zxmd_m20_EntityDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_EntityDescriptor_s);
  x->gg.g.tok = zxmd_m20_EntityDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_EntityDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_EntityDescriptor(struct zx_ctx* c, struct zxmd_m20_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_m20_IDPDescriptor_s* e;
      for (e = x->IDPDescriptor; e; e = (struct zxmd_m20_IDPDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_IDPDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_SPDescriptor_s* e;
      for (e = x->SPDescriptor; e; e = (struct zxmd_m20_SPDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_SPDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_AffiliationDescriptor_s* e;
      for (e = x->AffiliationDescriptor; e; e = (struct zxmd_m20_AffiliationDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_AffiliationDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_m20_EntityDescriptor) */

int zxmd_WALK_WO_m20_EntityDescriptor(struct zx_ctx* c, struct zxmd_m20_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_Extension
#define EL_STRUCT zxmd_m20_Extension_s
#define EL_NS     m20
#define EL_TAG    Extension

/* FUNC(zxmd_DUP_STRS_m20_Extension) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_Extension(struct zx_ctx* c, struct zxmd_m20_Extension_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxmd_DEEP_CLONE_m20_Extension) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_Extension_s* zxmd_DEEP_CLONE_m20_Extension(struct zx_ctx* c, struct zxmd_m20_Extension_s* x, int dup_strs)
{
  x = (struct zxmd_m20_Extension_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_Extension_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxmd_FREE_m20_Extension) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_Extension(struct zx_ctx* c, struct zxmd_m20_Extension_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_Extension) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_Extension_s* zxmd_NEW_m20_Extension(struct zx_ctx* c)
{
  struct zxmd_m20_Extension_s* x = ZX_ZALLOC(c, struct zxmd_m20_Extension_s);
  x->gg.g.tok = zxmd_m20_Extension_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_Extension) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_Extension(struct zx_ctx* c, struct zxmd_m20_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_m20_Extension) */

int zxmd_WALK_WO_m20_Extension(struct zx_ctx* c, struct zxmd_m20_Extension_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_IDPDescriptor
#define EL_STRUCT zxmd_m20_IDPDescriptor_s
#define EL_NS     m20
#define EL_TAG    IDPDescriptor

/* FUNC(zxmd_DUP_STRS_m20_IDPDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_IDPDescriptor(struct zx_ctx* c, struct zxmd_m20_IDPDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->protocolSupportEnumeration);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_KeyDescriptor(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SoapEndpoint);
  zx_dup_strs_simple_elems(c, x->SingleLogoutServiceURL);
  zx_dup_strs_simple_elems(c, x->SingleLogoutServiceReturnURL);
  zx_dup_strs_simple_elems(c, x->FederationTerminationServiceURL);
  zx_dup_strs_simple_elems(c, x->FederationTerminationServiceReturnURL);
  zx_dup_strs_simple_elems(c, x->FederationTerminationNotificationProtocolProfile);
  zx_dup_strs_simple_elems(c, x->SingleLogoutProtocolProfile);
  zx_dup_strs_simple_elems(c, x->RegisterNameIdentifierProtocolProfile);
  zx_dup_strs_simple_elems(c, x->RegisterNameIdentifierServiceURL);
  zx_dup_strs_simple_elems(c, x->RegisterNameIdentifierServiceReturnURL);
  zx_dup_strs_simple_elems(c, x->NameIdentifierMappingProtocolProfile);
  zx_dup_strs_simple_elems(c, x->NameIdentifierMappingEncryptionProfile);
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Organization(c, e);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_ContactPerson(c, e);
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      for (e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_AdditionalMetaLocation(c, e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Extension(c, e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SingleSignOnServiceURL);
  zx_dup_strs_simple_elems(c, x->SingleSignOnProtocolProfile);
  zx_dup_strs_simple_elems(c, x->AuthnServiceURL);

}

/* FUNC(zxmd_DEEP_CLONE_m20_IDPDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_IDPDescriptor_s* zxmd_DEEP_CLONE_m20_IDPDescriptor(struct zx_ctx* c, struct zxmd_m20_IDPDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_m20_IDPDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_IDPDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->protocolSupportEnumeration = zx_clone_attr(c, x->protocolSupportEnumeration);
  x->id = zx_clone_attr(c, x->id);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      struct zxmd_m20_KeyDescriptor_s* en;
      struct zxmd_m20_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SoapEndpoint = zx_deep_clone_simple_elems(c,x->SoapEndpoint, dup_strs);
  x->SingleLogoutServiceURL = zx_deep_clone_simple_elems(c,x->SingleLogoutServiceURL, dup_strs);
  x->SingleLogoutServiceReturnURL = zx_deep_clone_simple_elems(c,x->SingleLogoutServiceReturnURL, dup_strs);
  x->FederationTerminationServiceURL = zx_deep_clone_simple_elems(c,x->FederationTerminationServiceURL, dup_strs);
  x->FederationTerminationServiceReturnURL = zx_deep_clone_simple_elems(c,x->FederationTerminationServiceReturnURL, dup_strs);
  x->FederationTerminationNotificationProtocolProfile = zx_deep_clone_simple_elems(c,x->FederationTerminationNotificationProtocolProfile, dup_strs);
  x->SingleLogoutProtocolProfile = zx_deep_clone_simple_elems(c,x->SingleLogoutProtocolProfile, dup_strs);
  x->RegisterNameIdentifierProtocolProfile = zx_deep_clone_simple_elems(c,x->RegisterNameIdentifierProtocolProfile, dup_strs);
  x->RegisterNameIdentifierServiceURL = zx_deep_clone_simple_elems(c,x->RegisterNameIdentifierServiceURL, dup_strs);
  x->RegisterNameIdentifierServiceReturnURL = zx_deep_clone_simple_elems(c,x->RegisterNameIdentifierServiceReturnURL, dup_strs);
  x->NameIdentifierMappingProtocolProfile = zx_deep_clone_simple_elems(c,x->NameIdentifierMappingProtocolProfile, dup_strs);
  x->NameIdentifierMappingEncryptionProfile = zx_deep_clone_simple_elems(c,x->NameIdentifierMappingEncryptionProfile, dup_strs);
  {
      struct zxmd_m20_Organization_s* e;
      struct zxmd_m20_Organization_s* en;
      struct zxmd_m20_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      struct zxmd_m20_ContactPerson_s* en;
      struct zxmd_m20_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      struct zxmd_m20_AdditionalMetaLocation_s* en;
      struct zxmd_m20_AdditionalMetaLocation_s* enn;
      for (enn = 0, e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_AdditionalMetaLocation(c, e, dup_strs);
	  if (!enn)
	      x->AdditionalMetaLocation = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      struct zxmd_m20_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SingleSignOnServiceURL = zx_deep_clone_simple_elems(c,x->SingleSignOnServiceURL, dup_strs);
  x->SingleSignOnProtocolProfile = zx_deep_clone_simple_elems(c,x->SingleSignOnProtocolProfile, dup_strs);
  x->AuthnServiceURL = zx_deep_clone_simple_elems(c,x->AuthnServiceURL, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_m20_IDPDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_IDPDescriptor(struct zx_ctx* c, struct zxmd_m20_IDPDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->protocolSupportEnumeration, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      struct zxmd_m20_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_KeyDescriptor(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SoapEndpoint, free_strs);
  zx_free_simple_elems(c, x->SingleLogoutServiceURL, free_strs);
  zx_free_simple_elems(c, x->SingleLogoutServiceReturnURL, free_strs);
  zx_free_simple_elems(c, x->FederationTerminationServiceURL, free_strs);
  zx_free_simple_elems(c, x->FederationTerminationServiceReturnURL, free_strs);
  zx_free_simple_elems(c, x->FederationTerminationNotificationProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->SingleLogoutProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->RegisterNameIdentifierProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->RegisterNameIdentifierServiceURL, free_strs);
  zx_free_simple_elems(c, x->RegisterNameIdentifierServiceReturnURL, free_strs);
  zx_free_simple_elems(c, x->NameIdentifierMappingProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->NameIdentifierMappingEncryptionProfile, free_strs);
  {
      struct zxmd_m20_Organization_s* e;
      struct zxmd_m20_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_m20_Organization_s*)e->gg.g.n;
	  zxmd_FREE_m20_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      struct zxmd_m20_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_m20_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      struct zxmd_m20_AdditionalMetaLocation_s* en;
      for (e = x->AdditionalMetaLocation; e; e = en) {
	  en = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n;
	  zxmd_FREE_m20_AdditionalMetaLocation(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zxmd_m20_Extension_s*)e->gg.g.n;
	  zxmd_FREE_m20_Extension(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SingleSignOnServiceURL, free_strs);
  zx_free_simple_elems(c, x->SingleSignOnProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->AuthnServiceURL, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_IDPDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_IDPDescriptor_s* zxmd_NEW_m20_IDPDescriptor(struct zx_ctx* c)
{
  struct zxmd_m20_IDPDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_IDPDescriptor_s);
  x->gg.g.tok = zxmd_m20_IDPDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_IDPDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_IDPDescriptor(struct zx_ctx* c, struct zxmd_m20_IDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SoapEndpoint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SingleLogoutServiceURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SingleLogoutServiceReturnURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->FederationTerminationServiceURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->FederationTerminationServiceReturnURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->FederationTerminationNotificationProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SingleLogoutProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->RegisterNameIdentifierProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->RegisterNameIdentifierServiceURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->RegisterNameIdentifierServiceReturnURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->NameIdentifierMappingProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->NameIdentifierMappingEncryptionProfile, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      for (e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_AdditionalMetaLocation(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SingleSignOnServiceURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SingleSignOnProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->AuthnServiceURL, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_m20_IDPDescriptor) */

int zxmd_WALK_WO_m20_IDPDescriptor(struct zx_ctx* c, struct zxmd_m20_IDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_KeyDescriptor
#define EL_STRUCT zxmd_m20_KeyDescriptor_s
#define EL_NS     m20
#define EL_TAG    KeyDescriptor

/* FUNC(zxmd_DUP_STRS_m20_KeyDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_KeyDescriptor(struct zx_ctx* c, struct zxmd_m20_KeyDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->use);

  zx_dup_strs_simple_elems(c, x->EncryptionMethod);
  zx_dup_strs_simple_elems(c, x->KeySize);
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_KeyInfo(c, e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Extension(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_m20_KeyDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_KeyDescriptor_s* zxmd_DEEP_CLONE_m20_KeyDescriptor(struct zx_ctx* c, struct zxmd_m20_KeyDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_m20_KeyDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_KeyDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->use = zx_clone_attr(c, x->use);

  x->EncryptionMethod = zx_deep_clone_simple_elems(c,x->EncryptionMethod, dup_strs);
  x->KeySize = zx_deep_clone_simple_elems(c,x->KeySize, dup_strs);
  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      struct zxmd_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      struct zxmd_m20_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_m20_KeyDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_KeyDescriptor(struct zx_ctx* c, struct zxmd_m20_KeyDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->use, free_strs);

  zx_free_simple_elems(c, x->EncryptionMethod, free_strs);
  zx_free_simple_elems(c, x->KeySize, free_strs);
  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n;
	  zxmd_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zxmd_m20_Extension_s*)e->gg.g.n;
	  zxmd_FREE_m20_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_KeyDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_KeyDescriptor_s* zxmd_NEW_m20_KeyDescriptor(struct zx_ctx* c)
{
  struct zxmd_m20_KeyDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_KeyDescriptor_s);
  x->gg.g.tok = zxmd_m20_KeyDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_KeyDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_KeyDescriptor(struct zx_ctx* c, struct zxmd_m20_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->EncryptionMethod, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->KeySize, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_m20_KeyDescriptor) */

int zxmd_WALK_WO_m20_KeyDescriptor(struct zx_ctx* c, struct zxmd_m20_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_Organization
#define EL_STRUCT zxmd_m20_Organization_s
#define EL_NS     m20
#define EL_TAG    Organization

/* FUNC(zxmd_DUP_STRS_m20_Organization) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_Organization(struct zx_ctx* c, struct zxmd_m20_Organization_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_m20_OrganizationName_s* e;
      for (e = x->OrganizationName; e; e = (struct zxmd_m20_OrganizationName_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_OrganizationName(c, e);
  }
  {
      struct zxmd_m20_OrganizationDisplayName_s* e;
      for (e = x->OrganizationDisplayName; e; e = (struct zxmd_m20_OrganizationDisplayName_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_OrganizationDisplayName(c, e);
  }
  {
      struct zxmd_m20_OrganizationURL_s* e;
      for (e = x->OrganizationURL; e; e = (struct zxmd_m20_OrganizationURL_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_OrganizationURL(c, e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Extension(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_m20_Organization) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_Organization_s* zxmd_DEEP_CLONE_m20_Organization(struct zx_ctx* c, struct zxmd_m20_Organization_s* x, int dup_strs)
{
  x = (struct zxmd_m20_Organization_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_Organization_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_m20_OrganizationName_s* e;
      struct zxmd_m20_OrganizationName_s* en;
      struct zxmd_m20_OrganizationName_s* enn;
      for (enn = 0, e = x->OrganizationName; e; e = (struct zxmd_m20_OrganizationName_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_OrganizationName(c, e, dup_strs);
	  if (!enn)
	      x->OrganizationName = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_OrganizationDisplayName_s* e;
      struct zxmd_m20_OrganizationDisplayName_s* en;
      struct zxmd_m20_OrganizationDisplayName_s* enn;
      for (enn = 0, e = x->OrganizationDisplayName; e; e = (struct zxmd_m20_OrganizationDisplayName_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_OrganizationDisplayName(c, e, dup_strs);
	  if (!enn)
	      x->OrganizationDisplayName = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_OrganizationURL_s* e;
      struct zxmd_m20_OrganizationURL_s* en;
      struct zxmd_m20_OrganizationURL_s* enn;
      for (enn = 0, e = x->OrganizationURL; e; e = (struct zxmd_m20_OrganizationURL_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_OrganizationURL(c, e, dup_strs);
	  if (!enn)
	      x->OrganizationURL = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      struct zxmd_m20_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_m20_Organization) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_Organization(struct zx_ctx* c, struct zxmd_m20_Organization_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_m20_OrganizationName_s* e;
      struct zxmd_m20_OrganizationName_s* en;
      for (e = x->OrganizationName; e; e = en) {
	  en = (struct zxmd_m20_OrganizationName_s*)e->gg.g.n;
	  zxmd_FREE_m20_OrganizationName(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_OrganizationDisplayName_s* e;
      struct zxmd_m20_OrganizationDisplayName_s* en;
      for (e = x->OrganizationDisplayName; e; e = en) {
	  en = (struct zxmd_m20_OrganizationDisplayName_s*)e->gg.g.n;
	  zxmd_FREE_m20_OrganizationDisplayName(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_OrganizationURL_s* e;
      struct zxmd_m20_OrganizationURL_s* en;
      for (e = x->OrganizationURL; e; e = en) {
	  en = (struct zxmd_m20_OrganizationURL_s*)e->gg.g.n;
	  zxmd_FREE_m20_OrganizationURL(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zxmd_m20_Extension_s*)e->gg.g.n;
	  zxmd_FREE_m20_Extension(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_Organization) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_Organization_s* zxmd_NEW_m20_Organization(struct zx_ctx* c)
{
  struct zxmd_m20_Organization_s* x = ZX_ZALLOC(c, struct zxmd_m20_Organization_s);
  x->gg.g.tok = zxmd_m20_Organization_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_Organization) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_Organization(struct zx_ctx* c, struct zxmd_m20_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_m20_OrganizationName_s* e;
      for (e = x->OrganizationName; e; e = (struct zxmd_m20_OrganizationName_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_OrganizationName(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_OrganizationDisplayName_s* e;
      for (e = x->OrganizationDisplayName; e; e = (struct zxmd_m20_OrganizationDisplayName_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_OrganizationDisplayName(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_OrganizationURL_s* e;
      for (e = x->OrganizationURL; e; e = (struct zxmd_m20_OrganizationURL_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_OrganizationURL(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_m20_Organization) */

int zxmd_WALK_WO_m20_Organization(struct zx_ctx* c, struct zxmd_m20_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_OrganizationDisplayName
#define EL_STRUCT zxmd_m20_OrganizationDisplayName_s
#define EL_NS     m20
#define EL_TAG    OrganizationDisplayName

/* FUNC(zxmd_DUP_STRS_m20_OrganizationDisplayName) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_m20_OrganizationDisplayName_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->lang);


}

/* FUNC(zxmd_DEEP_CLONE_m20_OrganizationDisplayName) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_OrganizationDisplayName_s* zxmd_DEEP_CLONE_m20_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_m20_OrganizationDisplayName_s* x, int dup_strs)
{
  x = (struct zxmd_m20_OrganizationDisplayName_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_OrganizationDisplayName_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->lang = zx_clone_attr(c, x->lang);


  return x;
}

/* FUNC(zxmd_FREE_m20_OrganizationDisplayName) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_m20_OrganizationDisplayName_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->lang, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_OrganizationDisplayName) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_OrganizationDisplayName_s* zxmd_NEW_m20_OrganizationDisplayName(struct zx_ctx* c)
{
  struct zxmd_m20_OrganizationDisplayName_s* x = ZX_ZALLOC(c, struct zxmd_m20_OrganizationDisplayName_s);
  x->gg.g.tok = zxmd_m20_OrganizationDisplayName_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_OrganizationDisplayName) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_m20_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_m20_OrganizationDisplayName) */

int zxmd_WALK_WO_m20_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_m20_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_OrganizationName
#define EL_STRUCT zxmd_m20_OrganizationName_s
#define EL_NS     m20
#define EL_TAG    OrganizationName

/* FUNC(zxmd_DUP_STRS_m20_OrganizationName) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_OrganizationName(struct zx_ctx* c, struct zxmd_m20_OrganizationName_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->lang);


}

/* FUNC(zxmd_DEEP_CLONE_m20_OrganizationName) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_OrganizationName_s* zxmd_DEEP_CLONE_m20_OrganizationName(struct zx_ctx* c, struct zxmd_m20_OrganizationName_s* x, int dup_strs)
{
  x = (struct zxmd_m20_OrganizationName_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_OrganizationName_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->lang = zx_clone_attr(c, x->lang);


  return x;
}

/* FUNC(zxmd_FREE_m20_OrganizationName) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_OrganizationName(struct zx_ctx* c, struct zxmd_m20_OrganizationName_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->lang, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_OrganizationName) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_OrganizationName_s* zxmd_NEW_m20_OrganizationName(struct zx_ctx* c)
{
  struct zxmd_m20_OrganizationName_s* x = ZX_ZALLOC(c, struct zxmd_m20_OrganizationName_s);
  x->gg.g.tok = zxmd_m20_OrganizationName_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_OrganizationName) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_OrganizationName(struct zx_ctx* c, struct zxmd_m20_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_m20_OrganizationName) */

int zxmd_WALK_WO_m20_OrganizationName(struct zx_ctx* c, struct zxmd_m20_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_OrganizationURL
#define EL_STRUCT zxmd_m20_OrganizationURL_s
#define EL_NS     m20
#define EL_TAG    OrganizationURL

/* FUNC(zxmd_DUP_STRS_m20_OrganizationURL) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_OrganizationURL(struct zx_ctx* c, struct zxmd_m20_OrganizationURL_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->lang);


}

/* FUNC(zxmd_DEEP_CLONE_m20_OrganizationURL) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_OrganizationURL_s* zxmd_DEEP_CLONE_m20_OrganizationURL(struct zx_ctx* c, struct zxmd_m20_OrganizationURL_s* x, int dup_strs)
{
  x = (struct zxmd_m20_OrganizationURL_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_OrganizationURL_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->lang = zx_clone_attr(c, x->lang);


  return x;
}

/* FUNC(zxmd_FREE_m20_OrganizationURL) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_OrganizationURL(struct zx_ctx* c, struct zxmd_m20_OrganizationURL_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->lang, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_OrganizationURL) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_OrganizationURL_s* zxmd_NEW_m20_OrganizationURL(struct zx_ctx* c)
{
  struct zxmd_m20_OrganizationURL_s* x = ZX_ZALLOC(c, struct zxmd_m20_OrganizationURL_s);
  x->gg.g.tok = zxmd_m20_OrganizationURL_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_OrganizationURL) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_OrganizationURL(struct zx_ctx* c, struct zxmd_m20_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_m20_OrganizationURL) */

int zxmd_WALK_WO_m20_OrganizationURL(struct zx_ctx* c, struct zxmd_m20_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   m20_SPDescriptor
#define EL_STRUCT zxmd_m20_SPDescriptor_s
#define EL_NS     m20
#define EL_TAG    SPDescriptor

/* FUNC(zxmd_DUP_STRS_m20_SPDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_m20_SPDescriptor(struct zx_ctx* c, struct zxmd_m20_SPDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->protocolSupportEnumeration);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_KeyDescriptor(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SoapEndpoint);
  zx_dup_strs_simple_elems(c, x->SingleLogoutServiceURL);
  zx_dup_strs_simple_elems(c, x->SingleLogoutServiceReturnURL);
  zx_dup_strs_simple_elems(c, x->FederationTerminationServiceURL);
  zx_dup_strs_simple_elems(c, x->FederationTerminationServiceReturnURL);
  zx_dup_strs_simple_elems(c, x->FederationTerminationNotificationProtocolProfile);
  zx_dup_strs_simple_elems(c, x->SingleLogoutProtocolProfile);
  zx_dup_strs_simple_elems(c, x->RegisterNameIdentifierProtocolProfile);
  zx_dup_strs_simple_elems(c, x->RegisterNameIdentifierServiceURL);
  zx_dup_strs_simple_elems(c, x->RegisterNameIdentifierServiceReturnURL);
  zx_dup_strs_simple_elems(c, x->NameIdentifierMappingProtocolProfile);
  zx_dup_strs_simple_elems(c, x->NameIdentifierMappingEncryptionProfile);
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Organization(c, e);
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_ContactPerson(c, e);
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      for (e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_AdditionalMetaLocation(c, e);
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_Extension(c, e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_m20_AssertionConsumerServiceURL_s* e;
      for (e = x->AssertionConsumerServiceURL; e; e = (struct zxmd_m20_AssertionConsumerServiceURL_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_AssertionConsumerServiceURL(c, e);
  }
  zx_dup_strs_simple_elems(c, x->AuthnRequestsSigned);

}

/* FUNC(zxmd_DEEP_CLONE_m20_SPDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_m20_SPDescriptor_s* zxmd_DEEP_CLONE_m20_SPDescriptor(struct zx_ctx* c, struct zxmd_m20_SPDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_m20_SPDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_m20_SPDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->protocolSupportEnumeration = zx_clone_attr(c, x->protocolSupportEnumeration);
  x->id = zx_clone_attr(c, x->id);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      struct zxmd_m20_KeyDescriptor_s* en;
      struct zxmd_m20_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SoapEndpoint = zx_deep_clone_simple_elems(c,x->SoapEndpoint, dup_strs);
  x->SingleLogoutServiceURL = zx_deep_clone_simple_elems(c,x->SingleLogoutServiceURL, dup_strs);
  x->SingleLogoutServiceReturnURL = zx_deep_clone_simple_elems(c,x->SingleLogoutServiceReturnURL, dup_strs);
  x->FederationTerminationServiceURL = zx_deep_clone_simple_elems(c,x->FederationTerminationServiceURL, dup_strs);
  x->FederationTerminationServiceReturnURL = zx_deep_clone_simple_elems(c,x->FederationTerminationServiceReturnURL, dup_strs);
  x->FederationTerminationNotificationProtocolProfile = zx_deep_clone_simple_elems(c,x->FederationTerminationNotificationProtocolProfile, dup_strs);
  x->SingleLogoutProtocolProfile = zx_deep_clone_simple_elems(c,x->SingleLogoutProtocolProfile, dup_strs);
  x->RegisterNameIdentifierProtocolProfile = zx_deep_clone_simple_elems(c,x->RegisterNameIdentifierProtocolProfile, dup_strs);
  x->RegisterNameIdentifierServiceURL = zx_deep_clone_simple_elems(c,x->RegisterNameIdentifierServiceURL, dup_strs);
  x->RegisterNameIdentifierServiceReturnURL = zx_deep_clone_simple_elems(c,x->RegisterNameIdentifierServiceReturnURL, dup_strs);
  x->NameIdentifierMappingProtocolProfile = zx_deep_clone_simple_elems(c,x->NameIdentifierMappingProtocolProfile, dup_strs);
  x->NameIdentifierMappingEncryptionProfile = zx_deep_clone_simple_elems(c,x->NameIdentifierMappingEncryptionProfile, dup_strs);
  {
      struct zxmd_m20_Organization_s* e;
      struct zxmd_m20_Organization_s* en;
      struct zxmd_m20_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      struct zxmd_m20_ContactPerson_s* en;
      struct zxmd_m20_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      struct zxmd_m20_AdditionalMetaLocation_s* en;
      struct zxmd_m20_AdditionalMetaLocation_s* enn;
      for (enn = 0, e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_AdditionalMetaLocation(c, e, dup_strs);
	  if (!enn)
	      x->AdditionalMetaLocation = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      struct zxmd_m20_Extension_s* enn;
      for (enn = 0, e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_Extension(c, e, dup_strs);
	  if (!enn)
	      x->Extension = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_AssertionConsumerServiceURL_s* e;
      struct zxmd_m20_AssertionConsumerServiceURL_s* en;
      struct zxmd_m20_AssertionConsumerServiceURL_s* enn;
      for (enn = 0, e = x->AssertionConsumerServiceURL; e; e = (struct zxmd_m20_AssertionConsumerServiceURL_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_AssertionConsumerServiceURL(c, e, dup_strs);
	  if (!enn)
	      x->AssertionConsumerServiceURL = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->AuthnRequestsSigned = zx_deep_clone_simple_elems(c,x->AuthnRequestsSigned, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_m20_SPDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_m20_SPDescriptor(struct zx_ctx* c, struct zxmd_m20_SPDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->protocolSupportEnumeration, free_strs);
  zx_free_attr(c, x->id, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      struct zxmd_m20_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_KeyDescriptor(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SoapEndpoint, free_strs);
  zx_free_simple_elems(c, x->SingleLogoutServiceURL, free_strs);
  zx_free_simple_elems(c, x->SingleLogoutServiceReturnURL, free_strs);
  zx_free_simple_elems(c, x->FederationTerminationServiceURL, free_strs);
  zx_free_simple_elems(c, x->FederationTerminationServiceReturnURL, free_strs);
  zx_free_simple_elems(c, x->FederationTerminationNotificationProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->SingleLogoutProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->RegisterNameIdentifierProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->RegisterNameIdentifierServiceURL, free_strs);
  zx_free_simple_elems(c, x->RegisterNameIdentifierServiceReturnURL, free_strs);
  zx_free_simple_elems(c, x->NameIdentifierMappingProtocolProfile, free_strs);
  zx_free_simple_elems(c, x->NameIdentifierMappingEncryptionProfile, free_strs);
  {
      struct zxmd_m20_Organization_s* e;
      struct zxmd_m20_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_m20_Organization_s*)e->gg.g.n;
	  zxmd_FREE_m20_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      struct zxmd_m20_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_m20_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      struct zxmd_m20_AdditionalMetaLocation_s* en;
      for (e = x->AdditionalMetaLocation; e; e = en) {
	  en = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n;
	  zxmd_FREE_m20_AdditionalMetaLocation(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      struct zxmd_m20_Extension_s* en;
      for (e = x->Extension; e; e = en) {
	  en = (struct zxmd_m20_Extension_s*)e->gg.g.n;
	  zxmd_FREE_m20_Extension(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_AssertionConsumerServiceURL_s* e;
      struct zxmd_m20_AssertionConsumerServiceURL_s* en;
      for (e = x->AssertionConsumerServiceURL; e; e = en) {
	  en = (struct zxmd_m20_AssertionConsumerServiceURL_s*)e->gg.g.n;
	  zxmd_FREE_m20_AssertionConsumerServiceURL(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->AuthnRequestsSigned, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_m20_SPDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_m20_SPDescriptor_s* zxmd_NEW_m20_SPDescriptor(struct zx_ctx* c)
{
  struct zxmd_m20_SPDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_m20_SPDescriptor_s);
  x->gg.g.tok = zxmd_m20_SPDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_m20_SPDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_m20_SPDescriptor(struct zx_ctx* c, struct zxmd_m20_SPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_m20_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_m20_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SoapEndpoint, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SingleLogoutServiceURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SingleLogoutServiceReturnURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->FederationTerminationServiceURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->FederationTerminationServiceReturnURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->FederationTerminationNotificationProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SingleLogoutProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->RegisterNameIdentifierProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->RegisterNameIdentifierServiceURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->RegisterNameIdentifierServiceReturnURL, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->NameIdentifierMappingProtocolProfile, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->NameIdentifierMappingEncryptionProfile, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_m20_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_m20_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_m20_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_AdditionalMetaLocation_s* e;
      for (e = x->AdditionalMetaLocation; e; e = (struct zxmd_m20_AdditionalMetaLocation_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_AdditionalMetaLocation(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_Extension_s* e;
      for (e = x->Extension; e; e = (struct zxmd_m20_Extension_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_Extension(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_AssertionConsumerServiceURL_s* e;
      for (e = x->AssertionConsumerServiceURL; e; e = (struct zxmd_m20_AssertionConsumerServiceURL_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_AssertionConsumerServiceURL(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->AuthnRequestsSigned, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_m20_SPDescriptor) */

int zxmd_WALK_WO_m20_SPDescriptor(struct zx_ctx* c, struct zxmd_m20_SPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AdditionalMetadataLocation
#define EL_STRUCT zxmd_md_AdditionalMetadataLocation_s
#define EL_NS     md
#define EL_TAG    AdditionalMetadataLocation

/* FUNC(zxmd_DUP_STRS_md_AdditionalMetadataLocation) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->namespace);


}

/* FUNC(zxmd_DEEP_CLONE_md_AdditionalMetadataLocation) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AdditionalMetadataLocation_s* zxmd_DEEP_CLONE_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x, int dup_strs)
{
  x = (struct zxmd_md_AdditionalMetadataLocation_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AdditionalMetadataLocation_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->namespace = zx_clone_attr(c, x->namespace);


  return x;
}

/* FUNC(zxmd_FREE_md_AdditionalMetadataLocation) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->namespace, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AdditionalMetadataLocation) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AdditionalMetadataLocation_s* zxmd_NEW_md_AdditionalMetadataLocation(struct zx_ctx* c)
{
  struct zxmd_md_AdditionalMetadataLocation_s* x = ZX_ZALLOC(c, struct zxmd_md_AdditionalMetadataLocation_s);
  x->gg.g.tok = zxmd_md_AdditionalMetadataLocation_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AdditionalMetadataLocation) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_AdditionalMetadataLocation) */

int zxmd_WALK_WO_md_AdditionalMetadataLocation(struct zx_ctx* c, struct zxmd_md_AdditionalMetadataLocation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AffiliationDescriptor
#define EL_STRUCT zxmd_md_AffiliationDescriptor_s
#define EL_NS     md
#define EL_TAG    AffiliationDescriptor

/* FUNC(zxmd_DUP_STRS_md_AffiliationDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->affiliationOwnerID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->ID);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  zx_dup_strs_simple_elems(c, x->AffiliateMember);
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_KeyDescriptor(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_AffiliationDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AffiliationDescriptor_s* zxmd_DEEP_CLONE_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_AffiliationDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AffiliationDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->affiliationOwnerID = zx_clone_attr(c, x->affiliationOwnerID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->ID = zx_clone_attr(c, x->ID);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->AffiliateMember = zx_deep_clone_simple_elems(c,x->AffiliateMember, dup_strs);
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      struct zxmd_md_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_AffiliationDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->affiliationOwnerID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->ID, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->AffiliateMember, free_strs);
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_KeyDescriptor(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AffiliationDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AffiliationDescriptor_s* zxmd_NEW_md_AffiliationDescriptor(struct zx_ctx* c)
{
  struct zxmd_md_AffiliationDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_AffiliationDescriptor_s);
  x->gg.g.tok = zxmd_md_AffiliationDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AffiliationDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->AffiliateMember, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_AffiliationDescriptor) */

int zxmd_WALK_WO_md_AffiliationDescriptor(struct zx_ctx* c, struct zxmd_md_AffiliationDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_ArtifactResolutionService
#define EL_STRUCT zxmd_md_ArtifactResolutionService_s
#define EL_NS     md
#define EL_TAG    ArtifactResolutionService

/* FUNC(zxmd_DUP_STRS_md_ArtifactResolutionService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);
  zx_dup_attr(c, x->index);
  zx_dup_attr(c, x->isDefault);


}

/* FUNC(zxmd_DEEP_CLONE_md_ArtifactResolutionService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_ArtifactResolutionService_s* zxmd_DEEP_CLONE_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x, int dup_strs)
{
  x = (struct zxmd_md_ArtifactResolutionService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_ArtifactResolutionService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);
  x->index = zx_clone_attr(c, x->index);
  x->isDefault = zx_clone_attr(c, x->isDefault);


  return x;
}

/* FUNC(zxmd_FREE_md_ArtifactResolutionService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);
  zx_free_attr(c, x->index, free_strs);
  zx_free_attr(c, x->isDefault, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_ArtifactResolutionService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_ArtifactResolutionService_s* zxmd_NEW_md_ArtifactResolutionService(struct zx_ctx* c)
{
  struct zxmd_md_ArtifactResolutionService_s* x = ZX_ZALLOC(c, struct zxmd_md_ArtifactResolutionService_s);
  x->gg.g.tok = zxmd_md_ArtifactResolutionService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_ArtifactResolutionService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_ArtifactResolutionService) */

int zxmd_WALK_WO_md_ArtifactResolutionService(struct zx_ctx* c, struct zxmd_md_ArtifactResolutionService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AssertionConsumerService
#define EL_STRUCT zxmd_md_AssertionConsumerService_s
#define EL_NS     md
#define EL_TAG    AssertionConsumerService

/* FUNC(zxmd_DUP_STRS_md_AssertionConsumerService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);
  zx_dup_attr(c, x->index);
  zx_dup_attr(c, x->isDefault);


}

/* FUNC(zxmd_DEEP_CLONE_md_AssertionConsumerService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AssertionConsumerService_s* zxmd_DEEP_CLONE_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x, int dup_strs)
{
  x = (struct zxmd_md_AssertionConsumerService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AssertionConsumerService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);
  x->index = zx_clone_attr(c, x->index);
  x->isDefault = zx_clone_attr(c, x->isDefault);


  return x;
}

/* FUNC(zxmd_FREE_md_AssertionConsumerService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);
  zx_free_attr(c, x->index, free_strs);
  zx_free_attr(c, x->isDefault, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AssertionConsumerService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AssertionConsumerService_s* zxmd_NEW_md_AssertionConsumerService(struct zx_ctx* c)
{
  struct zxmd_md_AssertionConsumerService_s* x = ZX_ZALLOC(c, struct zxmd_md_AssertionConsumerService_s);
  x->gg.g.tok = zxmd_md_AssertionConsumerService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AssertionConsumerService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_AssertionConsumerService) */

int zxmd_WALK_WO_md_AssertionConsumerService(struct zx_ctx* c, struct zxmd_md_AssertionConsumerService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AssertionIDRequestService
#define EL_STRUCT zxmd_md_AssertionIDRequestService_s
#define EL_NS     md
#define EL_TAG    AssertionIDRequestService

/* FUNC(zxmd_DUP_STRS_md_AssertionIDRequestService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);


}

/* FUNC(zxmd_DEEP_CLONE_md_AssertionIDRequestService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AssertionIDRequestService_s* zxmd_DEEP_CLONE_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x, int dup_strs)
{
  x = (struct zxmd_md_AssertionIDRequestService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AssertionIDRequestService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);


  return x;
}

/* FUNC(zxmd_FREE_md_AssertionIDRequestService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AssertionIDRequestService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AssertionIDRequestService_s* zxmd_NEW_md_AssertionIDRequestService(struct zx_ctx* c)
{
  struct zxmd_md_AssertionIDRequestService_s* x = ZX_ZALLOC(c, struct zxmd_md_AssertionIDRequestService_s);
  x->gg.g.tok = zxmd_md_AssertionIDRequestService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AssertionIDRequestService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_AssertionIDRequestService) */

int zxmd_WALK_WO_md_AssertionIDRequestService(struct zx_ctx* c, struct zxmd_md_AssertionIDRequestService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AttributeAuthorityDescriptor
#define EL_STRUCT zxmd_md_AttributeAuthorityDescriptor_s
#define EL_NS     md
#define EL_TAG    AttributeAuthorityDescriptor

/* FUNC(zxmd_DUP_STRS_md_AttributeAuthorityDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->protocolSupportEnumeration);
  zx_dup_attr(c, x->errorURL);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_KeyDescriptor(c, e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Organization(c, e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ContactPerson(c, e);
  }
  {
      struct zxmd_md_AttributeService_s* e;
      for (e = x->AttributeService; e; e = (struct zxmd_md_AttributeService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AttributeService(c, e);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AssertionIDRequestService(c, e);
  }
  zx_dup_strs_simple_elems(c, x->NameIDFormat);
  zx_dup_strs_simple_elems(c, x->AttributeProfile);
  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Attribute(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_AttributeAuthorityDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_DEEP_CLONE_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_AttributeAuthorityDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AttributeAuthorityDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->protocolSupportEnumeration = zx_clone_attr(c, x->protocolSupportEnumeration);
  x->errorURL = zx_clone_attr(c, x->errorURL);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      struct zxmd_md_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      struct zxmd_md_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      struct zxmd_md_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AttributeService_s* e;
      struct zxmd_md_AttributeService_s* en;
      struct zxmd_md_AttributeService_s* enn;
      for (enn = 0, e = x->AttributeService; e; e = (struct zxmd_md_AttributeService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AttributeService(c, e, dup_strs);
	  if (!enn)
	      x->AttributeService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      struct zxmd_md_AssertionIDRequestService_s* en;
      struct zxmd_md_AssertionIDRequestService_s* enn;
      for (enn = 0, e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AssertionIDRequestService(c, e, dup_strs);
	  if (!enn)
	      x->AssertionIDRequestService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->NameIDFormat = zx_deep_clone_simple_elems(c,x->NameIDFormat, dup_strs);
  x->AttributeProfile = zx_deep_clone_simple_elems(c,x->AttributeProfile, dup_strs);
  {
      struct zxmd_sa_Attribute_s* e;
      struct zxmd_sa_Attribute_s* en;
      struct zxmd_sa_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_AttributeAuthorityDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->protocolSupportEnumeration, free_strs);
  zx_free_attr(c, x->errorURL, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_KeyDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_md_Organization_s*)e->gg.g.n;
	  zxmd_FREE_md_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_md_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_md_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AttributeService_s* e;
      struct zxmd_md_AttributeService_s* en;
      for (e = x->AttributeService; e; e = en) {
	  en = (struct zxmd_md_AttributeService_s*)e->gg.g.n;
	  zxmd_FREE_md_AttributeService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      struct zxmd_md_AssertionIDRequestService_s* en;
      for (e = x->AssertionIDRequestService; e; e = en) {
	  en = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n;
	  zxmd_FREE_md_AssertionIDRequestService(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->NameIDFormat, free_strs);
  zx_free_simple_elems(c, x->AttributeProfile, free_strs);
  {
      struct zxmd_sa_Attribute_s* e;
      struct zxmd_sa_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zxmd_sa_Attribute_s*)e->gg.g.n;
	  zxmd_FREE_sa_Attribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AttributeAuthorityDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AttributeAuthorityDescriptor_s* zxmd_NEW_md_AttributeAuthorityDescriptor(struct zx_ctx* c)
{
  struct zxmd_md_AttributeAuthorityDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_AttributeAuthorityDescriptor_s);
  x->gg.g.tok = zxmd_md_AttributeAuthorityDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AttributeAuthorityDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AttributeService_s* e;
      for (e = x->AttributeService; e; e = (struct zxmd_md_AttributeService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AttributeService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AssertionIDRequestService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->NameIDFormat, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->AttributeProfile, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_AttributeAuthorityDescriptor) */

int zxmd_WALK_WO_md_AttributeAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AttributeAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AttributeConsumingService
#define EL_STRUCT zxmd_md_AttributeConsumingService_s
#define EL_NS     md
#define EL_TAG    AttributeConsumingService

/* FUNC(zxmd_DUP_STRS_md_AttributeConsumingService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->index);
  zx_dup_attr(c, x->isDefault);

  {
      struct zxmd_md_ServiceName_s* e;
      for (e = x->ServiceName; e; e = (struct zxmd_md_ServiceName_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ServiceName(c, e);
  }
  {
      struct zxmd_md_ServiceDescription_s* e;
      for (e = x->ServiceDescription; e; e = (struct zxmd_md_ServiceDescription_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ServiceDescription(c, e);
  }
  {
      struct zxmd_md_RequestedAttribute_s* e;
      for (e = x->RequestedAttribute; e; e = (struct zxmd_md_RequestedAttribute_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_RequestedAttribute(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_AttributeConsumingService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AttributeConsumingService_s* zxmd_DEEP_CLONE_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x, int dup_strs)
{
  x = (struct zxmd_md_AttributeConsumingService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AttributeConsumingService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->index = zx_clone_attr(c, x->index);
  x->isDefault = zx_clone_attr(c, x->isDefault);

  {
      struct zxmd_md_ServiceName_s* e;
      struct zxmd_md_ServiceName_s* en;
      struct zxmd_md_ServiceName_s* enn;
      for (enn = 0, e = x->ServiceName; e; e = (struct zxmd_md_ServiceName_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ServiceName(c, e, dup_strs);
	  if (!enn)
	      x->ServiceName = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ServiceDescription_s* e;
      struct zxmd_md_ServiceDescription_s* en;
      struct zxmd_md_ServiceDescription_s* enn;
      for (enn = 0, e = x->ServiceDescription; e; e = (struct zxmd_md_ServiceDescription_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ServiceDescription(c, e, dup_strs);
	  if (!enn)
	      x->ServiceDescription = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_RequestedAttribute_s* e;
      struct zxmd_md_RequestedAttribute_s* en;
      struct zxmd_md_RequestedAttribute_s* enn;
      for (enn = 0, e = x->RequestedAttribute; e; e = (struct zxmd_md_RequestedAttribute_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_RequestedAttribute(c, e, dup_strs);
	  if (!enn)
	      x->RequestedAttribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_AttributeConsumingService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->index, free_strs);
  zx_free_attr(c, x->isDefault, free_strs);

  {
      struct zxmd_md_ServiceName_s* e;
      struct zxmd_md_ServiceName_s* en;
      for (e = x->ServiceName; e; e = en) {
	  en = (struct zxmd_md_ServiceName_s*)e->gg.g.n;
	  zxmd_FREE_md_ServiceName(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ServiceDescription_s* e;
      struct zxmd_md_ServiceDescription_s* en;
      for (e = x->ServiceDescription; e; e = en) {
	  en = (struct zxmd_md_ServiceDescription_s*)e->gg.g.n;
	  zxmd_FREE_md_ServiceDescription(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_RequestedAttribute_s* e;
      struct zxmd_md_RequestedAttribute_s* en;
      for (e = x->RequestedAttribute; e; e = en) {
	  en = (struct zxmd_md_RequestedAttribute_s*)e->gg.g.n;
	  zxmd_FREE_md_RequestedAttribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AttributeConsumingService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AttributeConsumingService_s* zxmd_NEW_md_AttributeConsumingService(struct zx_ctx* c)
{
  struct zxmd_md_AttributeConsumingService_s* x = ZX_ZALLOC(c, struct zxmd_md_AttributeConsumingService_s);
  x->gg.g.tok = zxmd_md_AttributeConsumingService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AttributeConsumingService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_md_ServiceName_s* e;
      for (e = x->ServiceName; e; e = (struct zxmd_md_ServiceName_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ServiceName(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ServiceDescription_s* e;
      for (e = x->ServiceDescription; e; e = (struct zxmd_md_ServiceDescription_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ServiceDescription(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_RequestedAttribute_s* e;
      for (e = x->RequestedAttribute; e; e = (struct zxmd_md_RequestedAttribute_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_RequestedAttribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_AttributeConsumingService) */

int zxmd_WALK_WO_md_AttributeConsumingService(struct zx_ctx* c, struct zxmd_md_AttributeConsumingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AttributeService
#define EL_STRUCT zxmd_md_AttributeService_s
#define EL_NS     md
#define EL_TAG    AttributeService

/* FUNC(zxmd_DUP_STRS_md_AttributeService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);


}

/* FUNC(zxmd_DEEP_CLONE_md_AttributeService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AttributeService_s* zxmd_DEEP_CLONE_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x, int dup_strs)
{
  x = (struct zxmd_md_AttributeService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AttributeService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);


  return x;
}

/* FUNC(zxmd_FREE_md_AttributeService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AttributeService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AttributeService_s* zxmd_NEW_md_AttributeService(struct zx_ctx* c)
{
  struct zxmd_md_AttributeService_s* x = ZX_ZALLOC(c, struct zxmd_md_AttributeService_s);
  x->gg.g.tok = zxmd_md_AttributeService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AttributeService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_AttributeService) */

int zxmd_WALK_WO_md_AttributeService(struct zx_ctx* c, struct zxmd_md_AttributeService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AuthnAuthorityDescriptor
#define EL_STRUCT zxmd_md_AuthnAuthorityDescriptor_s
#define EL_NS     md
#define EL_TAG    AuthnAuthorityDescriptor

/* FUNC(zxmd_DUP_STRS_md_AuthnAuthorityDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->protocolSupportEnumeration);
  zx_dup_attr(c, x->errorURL);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_KeyDescriptor(c, e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Organization(c, e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ContactPerson(c, e);
  }
  {
      struct zxmd_md_AuthnQueryService_s* e;
      for (e = x->AuthnQueryService; e; e = (struct zxmd_md_AuthnQueryService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AuthnQueryService(c, e);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AssertionIDRequestService(c, e);
  }
  zx_dup_strs_simple_elems(c, x->NameIDFormat);

}

/* FUNC(zxmd_DEEP_CLONE_md_AuthnAuthorityDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_DEEP_CLONE_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_AuthnAuthorityDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AuthnAuthorityDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->protocolSupportEnumeration = zx_clone_attr(c, x->protocolSupportEnumeration);
  x->errorURL = zx_clone_attr(c, x->errorURL);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      struct zxmd_md_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      struct zxmd_md_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      struct zxmd_md_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AuthnQueryService_s* e;
      struct zxmd_md_AuthnQueryService_s* en;
      struct zxmd_md_AuthnQueryService_s* enn;
      for (enn = 0, e = x->AuthnQueryService; e; e = (struct zxmd_md_AuthnQueryService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AuthnQueryService(c, e, dup_strs);
	  if (!enn)
	      x->AuthnQueryService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      struct zxmd_md_AssertionIDRequestService_s* en;
      struct zxmd_md_AssertionIDRequestService_s* enn;
      for (enn = 0, e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AssertionIDRequestService(c, e, dup_strs);
	  if (!enn)
	      x->AssertionIDRequestService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->NameIDFormat = zx_deep_clone_simple_elems(c,x->NameIDFormat, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_md_AuthnAuthorityDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->protocolSupportEnumeration, free_strs);
  zx_free_attr(c, x->errorURL, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_KeyDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_md_Organization_s*)e->gg.g.n;
	  zxmd_FREE_md_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_md_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_md_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AuthnQueryService_s* e;
      struct zxmd_md_AuthnQueryService_s* en;
      for (e = x->AuthnQueryService; e; e = en) {
	  en = (struct zxmd_md_AuthnQueryService_s*)e->gg.g.n;
	  zxmd_FREE_md_AuthnQueryService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      struct zxmd_md_AssertionIDRequestService_s* en;
      for (e = x->AssertionIDRequestService; e; e = en) {
	  en = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n;
	  zxmd_FREE_md_AssertionIDRequestService(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->NameIDFormat, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AuthnAuthorityDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AuthnAuthorityDescriptor_s* zxmd_NEW_md_AuthnAuthorityDescriptor(struct zx_ctx* c)
{
  struct zxmd_md_AuthnAuthorityDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_AuthnAuthorityDescriptor_s);
  x->gg.g.tok = zxmd_md_AuthnAuthorityDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AuthnAuthorityDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AuthnQueryService_s* e;
      for (e = x->AuthnQueryService; e; e = (struct zxmd_md_AuthnQueryService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AuthnQueryService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AssertionIDRequestService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->NameIDFormat, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_AuthnAuthorityDescriptor) */

int zxmd_WALK_WO_md_AuthnAuthorityDescriptor(struct zx_ctx* c, struct zxmd_md_AuthnAuthorityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AuthnQueryService
#define EL_STRUCT zxmd_md_AuthnQueryService_s
#define EL_NS     md
#define EL_TAG    AuthnQueryService

/* FUNC(zxmd_DUP_STRS_md_AuthnQueryService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);


}

/* FUNC(zxmd_DEEP_CLONE_md_AuthnQueryService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AuthnQueryService_s* zxmd_DEEP_CLONE_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x, int dup_strs)
{
  x = (struct zxmd_md_AuthnQueryService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AuthnQueryService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);


  return x;
}

/* FUNC(zxmd_FREE_md_AuthnQueryService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AuthnQueryService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AuthnQueryService_s* zxmd_NEW_md_AuthnQueryService(struct zx_ctx* c)
{
  struct zxmd_md_AuthnQueryService_s* x = ZX_ZALLOC(c, struct zxmd_md_AuthnQueryService_s);
  x->gg.g.tok = zxmd_md_AuthnQueryService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AuthnQueryService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_AuthnQueryService) */

int zxmd_WALK_WO_md_AuthnQueryService(struct zx_ctx* c, struct zxmd_md_AuthnQueryService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_AuthzService
#define EL_STRUCT zxmd_md_AuthzService_s
#define EL_NS     md
#define EL_TAG    AuthzService

/* FUNC(zxmd_DUP_STRS_md_AuthzService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);


}

/* FUNC(zxmd_DEEP_CLONE_md_AuthzService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_AuthzService_s* zxmd_DEEP_CLONE_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x, int dup_strs)
{
  x = (struct zxmd_md_AuthzService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_AuthzService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);


  return x;
}

/* FUNC(zxmd_FREE_md_AuthzService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_AuthzService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_AuthzService_s* zxmd_NEW_md_AuthzService(struct zx_ctx* c)
{
  struct zxmd_md_AuthzService_s* x = ZX_ZALLOC(c, struct zxmd_md_AuthzService_s);
  x->gg.g.tok = zxmd_md_AuthzService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_AuthzService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_AuthzService) */

int zxmd_WALK_WO_md_AuthzService(struct zx_ctx* c, struct zxmd_md_AuthzService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_ContactPerson
#define EL_STRUCT zxmd_md_ContactPerson_s
#define EL_NS     md
#define EL_TAG    ContactPerson

/* FUNC(zxmd_DUP_STRS_md_ContactPerson) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->contactType);

  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Company);
  zx_dup_strs_simple_elems(c, x->GivenName);
  zx_dup_strs_simple_elems(c, x->SurName);
  zx_dup_strs_simple_elems(c, x->EmailAddress);
  zx_dup_strs_simple_elems(c, x->TelephoneNumber);

}

/* FUNC(zxmd_DEEP_CLONE_md_ContactPerson) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_ContactPerson_s* zxmd_DEEP_CLONE_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x, int dup_strs)
{
  x = (struct zxmd_md_ContactPerson_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_ContactPerson_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->contactType = zx_clone_attr(c, x->contactType);

  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Company = zx_deep_clone_simple_elems(c,x->Company, dup_strs);
  x->GivenName = zx_deep_clone_simple_elems(c,x->GivenName, dup_strs);
  x->SurName = zx_deep_clone_simple_elems(c,x->SurName, dup_strs);
  x->EmailAddress = zx_deep_clone_simple_elems(c,x->EmailAddress, dup_strs);
  x->TelephoneNumber = zx_deep_clone_simple_elems(c,x->TelephoneNumber, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_md_ContactPerson) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->contactType, free_strs);

  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Company, free_strs);
  zx_free_simple_elems(c, x->GivenName, free_strs);
  zx_free_simple_elems(c, x->SurName, free_strs);
  zx_free_simple_elems(c, x->EmailAddress, free_strs);
  zx_free_simple_elems(c, x->TelephoneNumber, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_ContactPerson) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_ContactPerson_s* zxmd_NEW_md_ContactPerson(struct zx_ctx* c)
{
  struct zxmd_md_ContactPerson_s* x = ZX_ZALLOC(c, struct zxmd_md_ContactPerson_s);
  x->gg.g.tok = zxmd_md_ContactPerson_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_ContactPerson) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Company, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->GivenName, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->SurName, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->EmailAddress, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->TelephoneNumber, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_ContactPerson) */

int zxmd_WALK_WO_md_ContactPerson(struct zx_ctx* c, struct zxmd_md_ContactPerson_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_EncryptionMethod
#define EL_STRUCT zxmd_md_EncryptionMethod_s
#define EL_NS     md
#define EL_TAG    EncryptionMethod

/* FUNC(zxmd_DUP_STRS_md_EncryptionMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->KeySize);
  zx_dup_strs_simple_elems(c, x->OAEPparams);

}

/* FUNC(zxmd_DEEP_CLONE_md_EncryptionMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_EncryptionMethod_s* zxmd_DEEP_CLONE_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x, int dup_strs)
{
  x = (struct zxmd_md_EncryptionMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_EncryptionMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->KeySize = zx_deep_clone_simple_elems(c,x->KeySize, dup_strs);
  x->OAEPparams = zx_deep_clone_simple_elems(c,x->OAEPparams, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_md_EncryptionMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->KeySize, free_strs);
  zx_free_simple_elems(c, x->OAEPparams, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_EncryptionMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_EncryptionMethod_s* zxmd_NEW_md_EncryptionMethod(struct zx_ctx* c)
{
  struct zxmd_md_EncryptionMethod_s* x = ZX_ZALLOC(c, struct zxmd_md_EncryptionMethod_s);
  x->gg.g.tok = zxmd_md_EncryptionMethod_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_EncryptionMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->KeySize, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->OAEPparams, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_EncryptionMethod) */

int zxmd_WALK_WO_md_EncryptionMethod(struct zx_ctx* c, struct zxmd_md_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_EntitiesDescriptor
#define EL_STRUCT zxmd_md_EntitiesDescriptor_s
#define EL_NS     md
#define EL_TAG    EntitiesDescriptor

/* FUNC(zxmd_DUP_STRS_md_EntitiesDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Name);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_EntityDescriptor(c, e);
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_EntitiesDescriptor(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_EntitiesDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_EntitiesDescriptor_s* zxmd_DEEP_CLONE_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_EntitiesDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_EntitiesDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->ID = zx_clone_attr(c, x->ID);
  x->Name = zx_clone_attr(c, x->Name);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_EntityDescriptor_s* e;
      struct zxmd_md_EntityDescriptor_s* en;
      struct zxmd_md_EntityDescriptor_s* enn;
      for (enn = 0, e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_EntityDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->EntityDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      struct zxmd_md_EntitiesDescriptor_s* en;
      struct zxmd_md_EntitiesDescriptor_s* enn;
      for (enn = 0, e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_EntitiesDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->EntitiesDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_EntitiesDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Name, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_EntityDescriptor_s* e;
      struct zxmd_md_EntityDescriptor_s* en;
      for (e = x->EntityDescriptor; e; e = en) {
	  en = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_EntityDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      struct zxmd_md_EntitiesDescriptor_s* en;
      for (e = x->EntitiesDescriptor; e; e = en) {
	  en = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_EntitiesDescriptor(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_EntitiesDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_EntitiesDescriptor_s* zxmd_NEW_md_EntitiesDescriptor(struct zx_ctx* c)
{
  struct zxmd_md_EntitiesDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_EntitiesDescriptor_s);
  x->gg.g.tok = zxmd_md_EntitiesDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_EntitiesDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_EntityDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_EntitiesDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_EntitiesDescriptor) */

int zxmd_WALK_WO_md_EntitiesDescriptor(struct zx_ctx* c, struct zxmd_md_EntitiesDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_EntityDescriptor
#define EL_STRUCT zxmd_md_EntityDescriptor_s
#define EL_NS     md
#define EL_TAG    EntityDescriptor

/* FUNC(zxmd_DUP_STRS_md_EntityDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->entityID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->ID);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_RoleDescriptor_s* e;
      for (e = x->RoleDescriptor; e; e = (struct zxmd_md_RoleDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_RoleDescriptor(c, e);
  }
  {
      struct zxmd_md_IDPSSODescriptor_s* e;
      for (e = x->IDPSSODescriptor; e; e = (struct zxmd_md_IDPSSODescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_IDPSSODescriptor(c, e);
  }
  {
      struct zxmd_md_SPSSODescriptor_s* e;
      for (e = x->SPSSODescriptor; e; e = (struct zxmd_md_SPSSODescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_SPSSODescriptor(c, e);
  }
  {
      struct zxmd_md_AuthnAuthorityDescriptor_s* e;
      for (e = x->AuthnAuthorityDescriptor; e; e = (struct zxmd_md_AuthnAuthorityDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AuthnAuthorityDescriptor(c, e);
  }
  {
      struct zxmd_md_AttributeAuthorityDescriptor_s* e;
      for (e = x->AttributeAuthorityDescriptor; e; e = (struct zxmd_md_AttributeAuthorityDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AttributeAuthorityDescriptor(c, e);
  }
  {
      struct zxmd_md_PDPDescriptor_s* e;
      for (e = x->PDPDescriptor; e; e = (struct zxmd_md_PDPDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_PDPDescriptor(c, e);
  }
  {
      struct zxmd_md_AffiliationDescriptor_s* e;
      for (e = x->AffiliationDescriptor; e; e = (struct zxmd_md_AffiliationDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AffiliationDescriptor(c, e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Organization(c, e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ContactPerson(c, e);
  }
  {
      struct zxmd_md_AdditionalMetadataLocation_s* e;
      for (e = x->AdditionalMetadataLocation; e; e = (struct zxmd_md_AdditionalMetadataLocation_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AdditionalMetadataLocation(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_EntityDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_EntityDescriptor_s* zxmd_DEEP_CLONE_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_EntityDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_EntityDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->entityID = zx_clone_attr(c, x->entityID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->ID = zx_clone_attr(c, x->ID);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_RoleDescriptor_s* e;
      struct zxmd_md_RoleDescriptor_s* en;
      struct zxmd_md_RoleDescriptor_s* enn;
      for (enn = 0, e = x->RoleDescriptor; e; e = (struct zxmd_md_RoleDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_RoleDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->RoleDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_IDPSSODescriptor_s* e;
      struct zxmd_md_IDPSSODescriptor_s* en;
      struct zxmd_md_IDPSSODescriptor_s* enn;
      for (enn = 0, e = x->IDPSSODescriptor; e; e = (struct zxmd_md_IDPSSODescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_IDPSSODescriptor(c, e, dup_strs);
	  if (!enn)
	      x->IDPSSODescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_SPSSODescriptor_s* e;
      struct zxmd_md_SPSSODescriptor_s* en;
      struct zxmd_md_SPSSODescriptor_s* enn;
      for (enn = 0, e = x->SPSSODescriptor; e; e = (struct zxmd_md_SPSSODescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_SPSSODescriptor(c, e, dup_strs);
	  if (!enn)
	      x->SPSSODescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AuthnAuthorityDescriptor_s* e;
      struct zxmd_md_AuthnAuthorityDescriptor_s* en;
      struct zxmd_md_AuthnAuthorityDescriptor_s* enn;
      for (enn = 0, e = x->AuthnAuthorityDescriptor; e; e = (struct zxmd_md_AuthnAuthorityDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AuthnAuthorityDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->AuthnAuthorityDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AttributeAuthorityDescriptor_s* e;
      struct zxmd_md_AttributeAuthorityDescriptor_s* en;
      struct zxmd_md_AttributeAuthorityDescriptor_s* enn;
      for (enn = 0, e = x->AttributeAuthorityDescriptor; e; e = (struct zxmd_md_AttributeAuthorityDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AttributeAuthorityDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->AttributeAuthorityDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_PDPDescriptor_s* e;
      struct zxmd_md_PDPDescriptor_s* en;
      struct zxmd_md_PDPDescriptor_s* enn;
      for (enn = 0, e = x->PDPDescriptor; e; e = (struct zxmd_md_PDPDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_PDPDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->PDPDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AffiliationDescriptor_s* e;
      struct zxmd_md_AffiliationDescriptor_s* en;
      struct zxmd_md_AffiliationDescriptor_s* enn;
      for (enn = 0, e = x->AffiliationDescriptor; e; e = (struct zxmd_md_AffiliationDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AffiliationDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->AffiliationDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      struct zxmd_md_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      struct zxmd_md_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AdditionalMetadataLocation_s* e;
      struct zxmd_md_AdditionalMetadataLocation_s* en;
      struct zxmd_md_AdditionalMetadataLocation_s* enn;
      for (enn = 0, e = x->AdditionalMetadataLocation; e; e = (struct zxmd_md_AdditionalMetadataLocation_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AdditionalMetadataLocation(c, e, dup_strs);
	  if (!enn)
	      x->AdditionalMetadataLocation = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_EntityDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->entityID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->ID, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_RoleDescriptor_s* e;
      struct zxmd_md_RoleDescriptor_s* en;
      for (e = x->RoleDescriptor; e; e = en) {
	  en = (struct zxmd_md_RoleDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_RoleDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_IDPSSODescriptor_s* e;
      struct zxmd_md_IDPSSODescriptor_s* en;
      for (e = x->IDPSSODescriptor; e; e = en) {
	  en = (struct zxmd_md_IDPSSODescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_IDPSSODescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_SPSSODescriptor_s* e;
      struct zxmd_md_SPSSODescriptor_s* en;
      for (e = x->SPSSODescriptor; e; e = en) {
	  en = (struct zxmd_md_SPSSODescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_SPSSODescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AuthnAuthorityDescriptor_s* e;
      struct zxmd_md_AuthnAuthorityDescriptor_s* en;
      for (e = x->AuthnAuthorityDescriptor; e; e = en) {
	  en = (struct zxmd_md_AuthnAuthorityDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_AuthnAuthorityDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AttributeAuthorityDescriptor_s* e;
      struct zxmd_md_AttributeAuthorityDescriptor_s* en;
      for (e = x->AttributeAuthorityDescriptor; e; e = en) {
	  en = (struct zxmd_md_AttributeAuthorityDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_AttributeAuthorityDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_PDPDescriptor_s* e;
      struct zxmd_md_PDPDescriptor_s* en;
      for (e = x->PDPDescriptor; e; e = en) {
	  en = (struct zxmd_md_PDPDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_PDPDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AffiliationDescriptor_s* e;
      struct zxmd_md_AffiliationDescriptor_s* en;
      for (e = x->AffiliationDescriptor; e; e = en) {
	  en = (struct zxmd_md_AffiliationDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_AffiliationDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_md_Organization_s*)e->gg.g.n;
	  zxmd_FREE_md_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_md_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_md_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AdditionalMetadataLocation_s* e;
      struct zxmd_md_AdditionalMetadataLocation_s* en;
      for (e = x->AdditionalMetadataLocation; e; e = en) {
	  en = (struct zxmd_md_AdditionalMetadataLocation_s*)e->gg.g.n;
	  zxmd_FREE_md_AdditionalMetadataLocation(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_EntityDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_EntityDescriptor_s* zxmd_NEW_md_EntityDescriptor(struct zx_ctx* c)
{
  struct zxmd_md_EntityDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_EntityDescriptor_s);
  x->gg.g.tok = zxmd_md_EntityDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_EntityDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_RoleDescriptor_s* e;
      for (e = x->RoleDescriptor; e; e = (struct zxmd_md_RoleDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_RoleDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_IDPSSODescriptor_s* e;
      for (e = x->IDPSSODescriptor; e; e = (struct zxmd_md_IDPSSODescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_IDPSSODescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_SPSSODescriptor_s* e;
      for (e = x->SPSSODescriptor; e; e = (struct zxmd_md_SPSSODescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_SPSSODescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AuthnAuthorityDescriptor_s* e;
      for (e = x->AuthnAuthorityDescriptor; e; e = (struct zxmd_md_AuthnAuthorityDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AuthnAuthorityDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AttributeAuthorityDescriptor_s* e;
      for (e = x->AttributeAuthorityDescriptor; e; e = (struct zxmd_md_AttributeAuthorityDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AttributeAuthorityDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_PDPDescriptor_s* e;
      for (e = x->PDPDescriptor; e; e = (struct zxmd_md_PDPDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_PDPDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AffiliationDescriptor_s* e;
      for (e = x->AffiliationDescriptor; e; e = (struct zxmd_md_AffiliationDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AffiliationDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AdditionalMetadataLocation_s* e;
      for (e = x->AdditionalMetadataLocation; e; e = (struct zxmd_md_AdditionalMetadataLocation_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AdditionalMetadataLocation(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_EntityDescriptor) */

int zxmd_WALK_WO_md_EntityDescriptor(struct zx_ctx* c, struct zxmd_md_EntityDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_Extensions
#define EL_STRUCT zxmd_md_Extensions_s
#define EL_NS     md
#define EL_TAG    Extensions

/* FUNC(zxmd_DUP_STRS_md_Extensions) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxmd_DEEP_CLONE_md_Extensions) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_Extensions_s* zxmd_DEEP_CLONE_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x, int dup_strs)
{
  x = (struct zxmd_md_Extensions_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_Extensions_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxmd_FREE_md_Extensions) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_Extensions) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_Extensions_s* zxmd_NEW_md_Extensions(struct zx_ctx* c)
{
  struct zxmd_md_Extensions_s* x = ZX_ZALLOC(c, struct zxmd_md_Extensions_s);
  x->gg.g.tok = zxmd_md_Extensions_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_Extensions) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_Extensions) */

int zxmd_WALK_WO_md_Extensions(struct zx_ctx* c, struct zxmd_md_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_IDPSSODescriptor
#define EL_STRUCT zxmd_md_IDPSSODescriptor_s
#define EL_NS     md
#define EL_TAG    IDPSSODescriptor

/* FUNC(zxmd_DUP_STRS_md_IDPSSODescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->protocolSupportEnumeration);
  zx_dup_attr(c, x->errorURL);
  zx_dup_attr(c, x->WantAuthnRequestsSigned);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_KeyDescriptor(c, e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Organization(c, e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ContactPerson(c, e);
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      for (e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ArtifactResolutionService(c, e);
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      for (e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_SingleLogoutService(c, e);
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      for (e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ManageNameIDService(c, e);
  }
  zx_dup_strs_simple_elems(c, x->NameIDFormat);
  {
      struct zxmd_md_SingleSignOnService_s* e;
      for (e = x->SingleSignOnService; e; e = (struct zxmd_md_SingleSignOnService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_SingleSignOnService(c, e);
  }
  {
      struct zxmd_md_NameIDMappingService_s* e;
      for (e = x->NameIDMappingService; e; e = (struct zxmd_md_NameIDMappingService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_NameIDMappingService(c, e);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AssertionIDRequestService(c, e);
  }
  zx_dup_strs_simple_elems(c, x->AttributeProfile);
  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Attribute(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_IDPSSODescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_IDPSSODescriptor_s* zxmd_DEEP_CLONE_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_IDPSSODescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_IDPSSODescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->protocolSupportEnumeration = zx_clone_attr(c, x->protocolSupportEnumeration);
  x->errorURL = zx_clone_attr(c, x->errorURL);
  x->WantAuthnRequestsSigned = zx_clone_attr(c, x->WantAuthnRequestsSigned);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      struct zxmd_md_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      struct zxmd_md_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      struct zxmd_md_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      struct zxmd_md_ArtifactResolutionService_s* en;
      struct zxmd_md_ArtifactResolutionService_s* enn;
      for (enn = 0, e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ArtifactResolutionService(c, e, dup_strs);
	  if (!enn)
	      x->ArtifactResolutionService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      struct zxmd_md_SingleLogoutService_s* en;
      struct zxmd_md_SingleLogoutService_s* enn;
      for (enn = 0, e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_SingleLogoutService(c, e, dup_strs);
	  if (!enn)
	      x->SingleLogoutService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      struct zxmd_md_ManageNameIDService_s* en;
      struct zxmd_md_ManageNameIDService_s* enn;
      for (enn = 0, e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ManageNameIDService(c, e, dup_strs);
	  if (!enn)
	      x->ManageNameIDService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->NameIDFormat = zx_deep_clone_simple_elems(c,x->NameIDFormat, dup_strs);
  {
      struct zxmd_md_SingleSignOnService_s* e;
      struct zxmd_md_SingleSignOnService_s* en;
      struct zxmd_md_SingleSignOnService_s* enn;
      for (enn = 0, e = x->SingleSignOnService; e; e = (struct zxmd_md_SingleSignOnService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_SingleSignOnService(c, e, dup_strs);
	  if (!enn)
	      x->SingleSignOnService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_NameIDMappingService_s* e;
      struct zxmd_md_NameIDMappingService_s* en;
      struct zxmd_md_NameIDMappingService_s* enn;
      for (enn = 0, e = x->NameIDMappingService; e; e = (struct zxmd_md_NameIDMappingService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_NameIDMappingService(c, e, dup_strs);
	  if (!enn)
	      x->NameIDMappingService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      struct zxmd_md_AssertionIDRequestService_s* en;
      struct zxmd_md_AssertionIDRequestService_s* enn;
      for (enn = 0, e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AssertionIDRequestService(c, e, dup_strs);
	  if (!enn)
	      x->AssertionIDRequestService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->AttributeProfile = zx_deep_clone_simple_elems(c,x->AttributeProfile, dup_strs);
  {
      struct zxmd_sa_Attribute_s* e;
      struct zxmd_sa_Attribute_s* en;
      struct zxmd_sa_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_IDPSSODescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->protocolSupportEnumeration, free_strs);
  zx_free_attr(c, x->errorURL, free_strs);
  zx_free_attr(c, x->WantAuthnRequestsSigned, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_KeyDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_md_Organization_s*)e->gg.g.n;
	  zxmd_FREE_md_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_md_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_md_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      struct zxmd_md_ArtifactResolutionService_s* en;
      for (e = x->ArtifactResolutionService; e; e = en) {
	  en = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n;
	  zxmd_FREE_md_ArtifactResolutionService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      struct zxmd_md_SingleLogoutService_s* en;
      for (e = x->SingleLogoutService; e; e = en) {
	  en = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n;
	  zxmd_FREE_md_SingleLogoutService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      struct zxmd_md_ManageNameIDService_s* en;
      for (e = x->ManageNameIDService; e; e = en) {
	  en = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n;
	  zxmd_FREE_md_ManageNameIDService(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->NameIDFormat, free_strs);
  {
      struct zxmd_md_SingleSignOnService_s* e;
      struct zxmd_md_SingleSignOnService_s* en;
      for (e = x->SingleSignOnService; e; e = en) {
	  en = (struct zxmd_md_SingleSignOnService_s*)e->gg.g.n;
	  zxmd_FREE_md_SingleSignOnService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_NameIDMappingService_s* e;
      struct zxmd_md_NameIDMappingService_s* en;
      for (e = x->NameIDMappingService; e; e = en) {
	  en = (struct zxmd_md_NameIDMappingService_s*)e->gg.g.n;
	  zxmd_FREE_md_NameIDMappingService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      struct zxmd_md_AssertionIDRequestService_s* en;
      for (e = x->AssertionIDRequestService; e; e = en) {
	  en = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n;
	  zxmd_FREE_md_AssertionIDRequestService(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->AttributeProfile, free_strs);
  {
      struct zxmd_sa_Attribute_s* e;
      struct zxmd_sa_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zxmd_sa_Attribute_s*)e->gg.g.n;
	  zxmd_FREE_sa_Attribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_IDPSSODescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_IDPSSODescriptor_s* zxmd_NEW_md_IDPSSODescriptor(struct zx_ctx* c)
{
  struct zxmd_md_IDPSSODescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_IDPSSODescriptor_s);
  x->gg.g.tok = zxmd_md_IDPSSODescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_IDPSSODescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      for (e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ArtifactResolutionService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      for (e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_SingleLogoutService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      for (e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ManageNameIDService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->NameIDFormat, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_md_SingleSignOnService_s* e;
      for (e = x->SingleSignOnService; e; e = (struct zxmd_md_SingleSignOnService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_SingleSignOnService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_NameIDMappingService_s* e;
      for (e = x->NameIDMappingService; e; e = (struct zxmd_md_NameIDMappingService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_NameIDMappingService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AssertionIDRequestService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->AttributeProfile, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_IDPSSODescriptor) */

int zxmd_WALK_WO_md_IDPSSODescriptor(struct zx_ctx* c, struct zxmd_md_IDPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_KeyDescriptor
#define EL_STRUCT zxmd_md_KeyDescriptor_s
#define EL_NS     md
#define EL_TAG    KeyDescriptor

/* FUNC(zxmd_DUP_STRS_md_KeyDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->use);

  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_KeyInfo(c, e);
  }
  {
      struct zxmd_md_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_md_EncryptionMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_EncryptionMethod(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_KeyDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_KeyDescriptor_s* zxmd_DEEP_CLONE_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_KeyDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_KeyDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->use = zx_clone_attr(c, x->use);

  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      struct zxmd_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_EncryptionMethod_s* e;
      struct zxmd_md_EncryptionMethod_s* en;
      struct zxmd_md_EncryptionMethod_s* enn;
      for (enn = 0, e = x->EncryptionMethod; e; e = (struct zxmd_md_EncryptionMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_EncryptionMethod(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_KeyDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->use, free_strs);

  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n;
	  zxmd_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_EncryptionMethod_s* e;
      struct zxmd_md_EncryptionMethod_s* en;
      for (e = x->EncryptionMethod; e; e = en) {
	  en = (struct zxmd_md_EncryptionMethod_s*)e->gg.g.n;
	  zxmd_FREE_md_EncryptionMethod(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_KeyDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_KeyDescriptor_s* zxmd_NEW_md_KeyDescriptor(struct zx_ctx* c)
{
  struct zxmd_md_KeyDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_KeyDescriptor_s);
  x->gg.g.tok = zxmd_md_KeyDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_KeyDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_md_EncryptionMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_EncryptionMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_KeyDescriptor) */

int zxmd_WALK_WO_md_KeyDescriptor(struct zx_ctx* c, struct zxmd_md_KeyDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_ManageNameIDService
#define EL_STRUCT zxmd_md_ManageNameIDService_s
#define EL_NS     md
#define EL_TAG    ManageNameIDService

/* FUNC(zxmd_DUP_STRS_md_ManageNameIDService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);


}

/* FUNC(zxmd_DEEP_CLONE_md_ManageNameIDService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_ManageNameIDService_s* zxmd_DEEP_CLONE_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x, int dup_strs)
{
  x = (struct zxmd_md_ManageNameIDService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_ManageNameIDService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);


  return x;
}

/* FUNC(zxmd_FREE_md_ManageNameIDService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_ManageNameIDService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_ManageNameIDService_s* zxmd_NEW_md_ManageNameIDService(struct zx_ctx* c)
{
  struct zxmd_md_ManageNameIDService_s* x = ZX_ZALLOC(c, struct zxmd_md_ManageNameIDService_s);
  x->gg.g.tok = zxmd_md_ManageNameIDService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_ManageNameIDService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_ManageNameIDService) */

int zxmd_WALK_WO_md_ManageNameIDService(struct zx_ctx* c, struct zxmd_md_ManageNameIDService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_NameIDMappingService
#define EL_STRUCT zxmd_md_NameIDMappingService_s
#define EL_NS     md
#define EL_TAG    NameIDMappingService

/* FUNC(zxmd_DUP_STRS_md_NameIDMappingService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);


}

/* FUNC(zxmd_DEEP_CLONE_md_NameIDMappingService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_NameIDMappingService_s* zxmd_DEEP_CLONE_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x, int dup_strs)
{
  x = (struct zxmd_md_NameIDMappingService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_NameIDMappingService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);


  return x;
}

/* FUNC(zxmd_FREE_md_NameIDMappingService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_NameIDMappingService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_NameIDMappingService_s* zxmd_NEW_md_NameIDMappingService(struct zx_ctx* c)
{
  struct zxmd_md_NameIDMappingService_s* x = ZX_ZALLOC(c, struct zxmd_md_NameIDMappingService_s);
  x->gg.g.tok = zxmd_md_NameIDMappingService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_NameIDMappingService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_NameIDMappingService) */

int zxmd_WALK_WO_md_NameIDMappingService(struct zx_ctx* c, struct zxmd_md_NameIDMappingService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_Organization
#define EL_STRUCT zxmd_md_Organization_s
#define EL_NS     md
#define EL_TAG    Organization

/* FUNC(zxmd_DUP_STRS_md_Organization) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_OrganizationName_s* e;
      for (e = x->OrganizationName; e; e = (struct zxmd_md_OrganizationName_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_OrganizationName(c, e);
  }
  {
      struct zxmd_md_OrganizationDisplayName_s* e;
      for (e = x->OrganizationDisplayName; e; e = (struct zxmd_md_OrganizationDisplayName_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_OrganizationDisplayName(c, e);
  }
  {
      struct zxmd_md_OrganizationURL_s* e;
      for (e = x->OrganizationURL; e; e = (struct zxmd_md_OrganizationURL_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_OrganizationURL(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_Organization) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_Organization_s* zxmd_DEEP_CLONE_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x, int dup_strs)
{
  x = (struct zxmd_md_Organization_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_Organization_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_OrganizationName_s* e;
      struct zxmd_md_OrganizationName_s* en;
      struct zxmd_md_OrganizationName_s* enn;
      for (enn = 0, e = x->OrganizationName; e; e = (struct zxmd_md_OrganizationName_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_OrganizationName(c, e, dup_strs);
	  if (!enn)
	      x->OrganizationName = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_OrganizationDisplayName_s* e;
      struct zxmd_md_OrganizationDisplayName_s* en;
      struct zxmd_md_OrganizationDisplayName_s* enn;
      for (enn = 0, e = x->OrganizationDisplayName; e; e = (struct zxmd_md_OrganizationDisplayName_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_OrganizationDisplayName(c, e, dup_strs);
	  if (!enn)
	      x->OrganizationDisplayName = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_OrganizationURL_s* e;
      struct zxmd_md_OrganizationURL_s* en;
      struct zxmd_md_OrganizationURL_s* enn;
      for (enn = 0, e = x->OrganizationURL; e; e = (struct zxmd_md_OrganizationURL_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_OrganizationURL(c, e, dup_strs);
	  if (!enn)
	      x->OrganizationURL = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_Organization) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_OrganizationName_s* e;
      struct zxmd_md_OrganizationName_s* en;
      for (e = x->OrganizationName; e; e = en) {
	  en = (struct zxmd_md_OrganizationName_s*)e->gg.g.n;
	  zxmd_FREE_md_OrganizationName(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_OrganizationDisplayName_s* e;
      struct zxmd_md_OrganizationDisplayName_s* en;
      for (e = x->OrganizationDisplayName; e; e = en) {
	  en = (struct zxmd_md_OrganizationDisplayName_s*)e->gg.g.n;
	  zxmd_FREE_md_OrganizationDisplayName(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_OrganizationURL_s* e;
      struct zxmd_md_OrganizationURL_s* en;
      for (e = x->OrganizationURL; e; e = en) {
	  en = (struct zxmd_md_OrganizationURL_s*)e->gg.g.n;
	  zxmd_FREE_md_OrganizationURL(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_Organization) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_Organization_s* zxmd_NEW_md_Organization(struct zx_ctx* c)
{
  struct zxmd_md_Organization_s* x = ZX_ZALLOC(c, struct zxmd_md_Organization_s);
  x->gg.g.tok = zxmd_md_Organization_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_Organization) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_OrganizationName_s* e;
      for (e = x->OrganizationName; e; e = (struct zxmd_md_OrganizationName_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_OrganizationName(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_OrganizationDisplayName_s* e;
      for (e = x->OrganizationDisplayName; e; e = (struct zxmd_md_OrganizationDisplayName_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_OrganizationDisplayName(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_OrganizationURL_s* e;
      for (e = x->OrganizationURL; e; e = (struct zxmd_md_OrganizationURL_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_OrganizationURL(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_Organization) */

int zxmd_WALK_WO_md_Organization(struct zx_ctx* c, struct zxmd_md_Organization_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_OrganizationDisplayName
#define EL_STRUCT zxmd_md_OrganizationDisplayName_s
#define EL_NS     md
#define EL_TAG    OrganizationDisplayName

/* FUNC(zxmd_DUP_STRS_md_OrganizationDisplayName) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->lang);


}

/* FUNC(zxmd_DEEP_CLONE_md_OrganizationDisplayName) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_OrganizationDisplayName_s* zxmd_DEEP_CLONE_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x, int dup_strs)
{
  x = (struct zxmd_md_OrganizationDisplayName_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_OrganizationDisplayName_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->lang = zx_clone_attr(c, x->lang);


  return x;
}

/* FUNC(zxmd_FREE_md_OrganizationDisplayName) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->lang, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_OrganizationDisplayName) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_OrganizationDisplayName_s* zxmd_NEW_md_OrganizationDisplayName(struct zx_ctx* c)
{
  struct zxmd_md_OrganizationDisplayName_s* x = ZX_ZALLOC(c, struct zxmd_md_OrganizationDisplayName_s);
  x->gg.g.tok = zxmd_md_OrganizationDisplayName_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_OrganizationDisplayName) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_OrganizationDisplayName) */

int zxmd_WALK_WO_md_OrganizationDisplayName(struct zx_ctx* c, struct zxmd_md_OrganizationDisplayName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_OrganizationName
#define EL_STRUCT zxmd_md_OrganizationName_s
#define EL_NS     md
#define EL_TAG    OrganizationName

/* FUNC(zxmd_DUP_STRS_md_OrganizationName) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->lang);


}

/* FUNC(zxmd_DEEP_CLONE_md_OrganizationName) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_OrganizationName_s* zxmd_DEEP_CLONE_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x, int dup_strs)
{
  x = (struct zxmd_md_OrganizationName_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_OrganizationName_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->lang = zx_clone_attr(c, x->lang);


  return x;
}

/* FUNC(zxmd_FREE_md_OrganizationName) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->lang, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_OrganizationName) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_OrganizationName_s* zxmd_NEW_md_OrganizationName(struct zx_ctx* c)
{
  struct zxmd_md_OrganizationName_s* x = ZX_ZALLOC(c, struct zxmd_md_OrganizationName_s);
  x->gg.g.tok = zxmd_md_OrganizationName_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_OrganizationName) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_OrganizationName) */

int zxmd_WALK_WO_md_OrganizationName(struct zx_ctx* c, struct zxmd_md_OrganizationName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_OrganizationURL
#define EL_STRUCT zxmd_md_OrganizationURL_s
#define EL_NS     md
#define EL_TAG    OrganizationURL

/* FUNC(zxmd_DUP_STRS_md_OrganizationURL) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->lang);


}

/* FUNC(zxmd_DEEP_CLONE_md_OrganizationURL) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_OrganizationURL_s* zxmd_DEEP_CLONE_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x, int dup_strs)
{
  x = (struct zxmd_md_OrganizationURL_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_OrganizationURL_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->lang = zx_clone_attr(c, x->lang);


  return x;
}

/* FUNC(zxmd_FREE_md_OrganizationURL) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->lang, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_OrganizationURL) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_OrganizationURL_s* zxmd_NEW_md_OrganizationURL(struct zx_ctx* c)
{
  struct zxmd_md_OrganizationURL_s* x = ZX_ZALLOC(c, struct zxmd_md_OrganizationURL_s);
  x->gg.g.tok = zxmd_md_OrganizationURL_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_OrganizationURL) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_OrganizationURL) */

int zxmd_WALK_WO_md_OrganizationURL(struct zx_ctx* c, struct zxmd_md_OrganizationURL_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_PDPDescriptor
#define EL_STRUCT zxmd_md_PDPDescriptor_s
#define EL_NS     md
#define EL_TAG    PDPDescriptor

/* FUNC(zxmd_DUP_STRS_md_PDPDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->protocolSupportEnumeration);
  zx_dup_attr(c, x->errorURL);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_KeyDescriptor(c, e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Organization(c, e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ContactPerson(c, e);
  }
  {
      struct zxmd_md_AuthzService_s* e;
      for (e = x->AuthzService; e; e = (struct zxmd_md_AuthzService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AuthzService(c, e);
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AssertionIDRequestService(c, e);
  }
  zx_dup_strs_simple_elems(c, x->NameIDFormat);

}

/* FUNC(zxmd_DEEP_CLONE_md_PDPDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_PDPDescriptor_s* zxmd_DEEP_CLONE_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_PDPDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_PDPDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->protocolSupportEnumeration = zx_clone_attr(c, x->protocolSupportEnumeration);
  x->errorURL = zx_clone_attr(c, x->errorURL);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      struct zxmd_md_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      struct zxmd_md_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      struct zxmd_md_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AuthzService_s* e;
      struct zxmd_md_AuthzService_s* en;
      struct zxmd_md_AuthzService_s* enn;
      for (enn = 0, e = x->AuthzService; e; e = (struct zxmd_md_AuthzService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AuthzService(c, e, dup_strs);
	  if (!enn)
	      x->AuthzService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      struct zxmd_md_AssertionIDRequestService_s* en;
      struct zxmd_md_AssertionIDRequestService_s* enn;
      for (enn = 0, e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AssertionIDRequestService(c, e, dup_strs);
	  if (!enn)
	      x->AssertionIDRequestService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->NameIDFormat = zx_deep_clone_simple_elems(c,x->NameIDFormat, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_md_PDPDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->protocolSupportEnumeration, free_strs);
  zx_free_attr(c, x->errorURL, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_KeyDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_md_Organization_s*)e->gg.g.n;
	  zxmd_FREE_md_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_md_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_md_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AuthzService_s* e;
      struct zxmd_md_AuthzService_s* en;
      for (e = x->AuthzService; e; e = en) {
	  en = (struct zxmd_md_AuthzService_s*)e->gg.g.n;
	  zxmd_FREE_md_AuthzService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      struct zxmd_md_AssertionIDRequestService_s* en;
      for (e = x->AssertionIDRequestService; e; e = en) {
	  en = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n;
	  zxmd_FREE_md_AssertionIDRequestService(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->NameIDFormat, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_PDPDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_PDPDescriptor_s* zxmd_NEW_md_PDPDescriptor(struct zx_ctx* c)
{
  struct zxmd_md_PDPDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_PDPDescriptor_s);
  x->gg.g.tok = zxmd_md_PDPDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_PDPDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AuthzService_s* e;
      for (e = x->AuthzService; e; e = (struct zxmd_md_AuthzService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AuthzService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AssertionIDRequestService_s* e;
      for (e = x->AssertionIDRequestService; e; e = (struct zxmd_md_AssertionIDRequestService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AssertionIDRequestService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->NameIDFormat, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_PDPDescriptor) */

int zxmd_WALK_WO_md_PDPDescriptor(struct zx_ctx* c, struct zxmd_md_PDPDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_RequestedAttribute
#define EL_STRUCT zxmd_md_RequestedAttribute_s
#define EL_NS     md
#define EL_TAG    RequestedAttribute

/* FUNC(zxmd_DUP_STRS_md_RequestedAttribute) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Name);
  zx_dup_attr(c, x->NameFormat);
  zx_dup_attr(c, x->FriendlyName);
  zx_dup_attr(c, x->isRequired);

  zx_dup_strs_simple_elems(c, x->AttributeValue);

}

/* FUNC(zxmd_DEEP_CLONE_md_RequestedAttribute) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_RequestedAttribute_s* zxmd_DEEP_CLONE_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x, int dup_strs)
{
  x = (struct zxmd_md_RequestedAttribute_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_RequestedAttribute_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Name = zx_clone_attr(c, x->Name);
  x->NameFormat = zx_clone_attr(c, x->NameFormat);
  x->FriendlyName = zx_clone_attr(c, x->FriendlyName);
  x->isRequired = zx_clone_attr(c, x->isRequired);

  x->AttributeValue = zx_deep_clone_simple_elems(c,x->AttributeValue, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_md_RequestedAttribute) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Name, free_strs);
  zx_free_attr(c, x->NameFormat, free_strs);
  zx_free_attr(c, x->FriendlyName, free_strs);
  zx_free_attr(c, x->isRequired, free_strs);

  zx_free_simple_elems(c, x->AttributeValue, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_RequestedAttribute) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_RequestedAttribute_s* zxmd_NEW_md_RequestedAttribute(struct zx_ctx* c)
{
  struct zxmd_md_RequestedAttribute_s* x = ZX_ZALLOC(c, struct zxmd_md_RequestedAttribute_s);
  x->gg.g.tok = zxmd_md_RequestedAttribute_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_RequestedAttribute) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->AttributeValue, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_RequestedAttribute) */

int zxmd_WALK_WO_md_RequestedAttribute(struct zx_ctx* c, struct zxmd_md_RequestedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_RoleDescriptor
#define EL_STRUCT zxmd_md_RoleDescriptor_s
#define EL_NS     md
#define EL_TAG    RoleDescriptor

/* FUNC(zxmd_DUP_STRS_md_RoleDescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->protocolSupportEnumeration);
  zx_dup_attr(c, x->errorURL);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_KeyDescriptor(c, e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Organization(c, e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ContactPerson(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_RoleDescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_RoleDescriptor_s* zxmd_DEEP_CLONE_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_RoleDescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_RoleDescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->protocolSupportEnumeration = zx_clone_attr(c, x->protocolSupportEnumeration);
  x->errorURL = zx_clone_attr(c, x->errorURL);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      struct zxmd_md_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      struct zxmd_md_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      struct zxmd_md_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_RoleDescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->protocolSupportEnumeration, free_strs);
  zx_free_attr(c, x->errorURL, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_KeyDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_md_Organization_s*)e->gg.g.n;
	  zxmd_FREE_md_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_md_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_md_ContactPerson(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_RoleDescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_RoleDescriptor_s* zxmd_NEW_md_RoleDescriptor(struct zx_ctx* c)
{
  struct zxmd_md_RoleDescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_RoleDescriptor_s);
  x->gg.g.tok = zxmd_md_RoleDescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_RoleDescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_RoleDescriptor) */

int zxmd_WALK_WO_md_RoleDescriptor(struct zx_ctx* c, struct zxmd_md_RoleDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_SPSSODescriptor
#define EL_STRUCT zxmd_md_SPSSODescriptor_s
#define EL_NS     md
#define EL_TAG    SPSSODescriptor

/* FUNC(zxmd_DUP_STRS_md_SPSSODescriptor) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->validUntil);
  zx_dup_attr(c, x->cacheDuration);
  zx_dup_attr(c, x->protocolSupportEnumeration);
  zx_dup_attr(c, x->errorURL);
  zx_dup_attr(c, x->AuthnRequestsSigned);
  zx_dup_attr(c, x->WantAssertionsSigned);

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Extensions(c, e);
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_KeyDescriptor(c, e);
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_Organization(c, e);
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ContactPerson(c, e);
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      for (e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ArtifactResolutionService(c, e);
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      for (e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_SingleLogoutService(c, e);
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      for (e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_ManageNameIDService(c, e);
  }
  zx_dup_strs_simple_elems(c, x->NameIDFormat);
  {
      struct zxmd_md_AssertionConsumerService_s* e;
      for (e = x->AssertionConsumerService; e; e = (struct zxmd_md_AssertionConsumerService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AssertionConsumerService(c, e);
  }
  {
      struct zxmd_md_AttributeConsumingService_s* e;
      for (e = x->AttributeConsumingService; e; e = (struct zxmd_md_AttributeConsumingService_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_AttributeConsumingService(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_md_SPSSODescriptor) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_SPSSODescriptor_s* zxmd_DEEP_CLONE_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x, int dup_strs)
{
  x = (struct zxmd_md_SPSSODescriptor_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_SPSSODescriptor_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->validUntil = zx_clone_attr(c, x->validUntil);
  x->cacheDuration = zx_clone_attr(c, x->cacheDuration);
  x->protocolSupportEnumeration = zx_clone_attr(c, x->protocolSupportEnumeration);
  x->errorURL = zx_clone_attr(c, x->errorURL);
  x->AuthnRequestsSigned = zx_clone_attr(c, x->AuthnRequestsSigned);
  x->WantAssertionsSigned = zx_clone_attr(c, x->WantAssertionsSigned);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      struct zxmd_md_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      struct zxmd_md_KeyDescriptor_s* enn;
      for (enn = 0, e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_KeyDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->KeyDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      struct zxmd_md_Organization_s* enn;
      for (enn = 0, e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_Organization(c, e, dup_strs);
	  if (!enn)
	      x->Organization = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      struct zxmd_md_ContactPerson_s* enn;
      for (enn = 0, e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ContactPerson(c, e, dup_strs);
	  if (!enn)
	      x->ContactPerson = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      struct zxmd_md_ArtifactResolutionService_s* en;
      struct zxmd_md_ArtifactResolutionService_s* enn;
      for (enn = 0, e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ArtifactResolutionService(c, e, dup_strs);
	  if (!enn)
	      x->ArtifactResolutionService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      struct zxmd_md_SingleLogoutService_s* en;
      struct zxmd_md_SingleLogoutService_s* enn;
      for (enn = 0, e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_SingleLogoutService(c, e, dup_strs);
	  if (!enn)
	      x->SingleLogoutService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      struct zxmd_md_ManageNameIDService_s* en;
      struct zxmd_md_ManageNameIDService_s* enn;
      for (enn = 0, e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_ManageNameIDService(c, e, dup_strs);
	  if (!enn)
	      x->ManageNameIDService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->NameIDFormat = zx_deep_clone_simple_elems(c,x->NameIDFormat, dup_strs);
  {
      struct zxmd_md_AssertionConsumerService_s* e;
      struct zxmd_md_AssertionConsumerService_s* en;
      struct zxmd_md_AssertionConsumerService_s* enn;
      for (enn = 0, e = x->AssertionConsumerService; e; e = (struct zxmd_md_AssertionConsumerService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AssertionConsumerService(c, e, dup_strs);
	  if (!enn)
	      x->AssertionConsumerService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_AttributeConsumingService_s* e;
      struct zxmd_md_AttributeConsumingService_s* en;
      struct zxmd_md_AttributeConsumingService_s* enn;
      for (enn = 0, e = x->AttributeConsumingService; e; e = (struct zxmd_md_AttributeConsumingService_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_AttributeConsumingService(c, e, dup_strs);
	  if (!enn)
	      x->AttributeConsumingService = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_md_SPSSODescriptor) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->validUntil, free_strs);
  zx_free_attr(c, x->cacheDuration, free_strs);
  zx_free_attr(c, x->protocolSupportEnumeration, free_strs);
  zx_free_attr(c, x->errorURL, free_strs);
  zx_free_attr(c, x->AuthnRequestsSigned, free_strs);
  zx_free_attr(c, x->WantAssertionsSigned, free_strs);

  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      struct zxmd_md_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zxmd_md_Extensions_s*)e->gg.g.n;
	  zxmd_FREE_md_Extensions(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      struct zxmd_md_KeyDescriptor_s* en;
      for (e = x->KeyDescriptor; e; e = en) {
	  en = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_KeyDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      struct zxmd_md_Organization_s* en;
      for (e = x->Organization; e; e = en) {
	  en = (struct zxmd_md_Organization_s*)e->gg.g.n;
	  zxmd_FREE_md_Organization(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      struct zxmd_md_ContactPerson_s* en;
      for (e = x->ContactPerson; e; e = en) {
	  en = (struct zxmd_md_ContactPerson_s*)e->gg.g.n;
	  zxmd_FREE_md_ContactPerson(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      struct zxmd_md_ArtifactResolutionService_s* en;
      for (e = x->ArtifactResolutionService; e; e = en) {
	  en = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n;
	  zxmd_FREE_md_ArtifactResolutionService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      struct zxmd_md_SingleLogoutService_s* en;
      for (e = x->SingleLogoutService; e; e = en) {
	  en = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n;
	  zxmd_FREE_md_SingleLogoutService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      struct zxmd_md_ManageNameIDService_s* en;
      for (e = x->ManageNameIDService; e; e = en) {
	  en = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n;
	  zxmd_FREE_md_ManageNameIDService(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->NameIDFormat, free_strs);
  {
      struct zxmd_md_AssertionConsumerService_s* e;
      struct zxmd_md_AssertionConsumerService_s* en;
      for (e = x->AssertionConsumerService; e; e = en) {
	  en = (struct zxmd_md_AssertionConsumerService_s*)e->gg.g.n;
	  zxmd_FREE_md_AssertionConsumerService(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_AttributeConsumingService_s* e;
      struct zxmd_md_AttributeConsumingService_s* en;
      for (e = x->AttributeConsumingService; e; e = en) {
	  en = (struct zxmd_md_AttributeConsumingService_s*)e->gg.g.n;
	  zxmd_FREE_md_AttributeConsumingService(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_SPSSODescriptor) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_SPSSODescriptor_s* zxmd_NEW_md_SPSSODescriptor(struct zx_ctx* c)
{
  struct zxmd_md_SPSSODescriptor_s* x = ZX_ZALLOC(c, struct zxmd_md_SPSSODescriptor_s);
  x->gg.g.tok = zxmd_md_SPSSODescriptor_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_SPSSODescriptor) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zxmd_md_Extensions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_KeyDescriptor_s* e;
      for (e = x->KeyDescriptor; e; e = (struct zxmd_md_KeyDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_KeyDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_Organization_s* e;
      for (e = x->Organization; e; e = (struct zxmd_md_Organization_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_Organization(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ContactPerson_s* e;
      for (e = x->ContactPerson; e; e = (struct zxmd_md_ContactPerson_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ContactPerson(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ArtifactResolutionService_s* e;
      for (e = x->ArtifactResolutionService; e; e = (struct zxmd_md_ArtifactResolutionService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ArtifactResolutionService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_SingleLogoutService_s* e;
      for (e = x->SingleLogoutService; e; e = (struct zxmd_md_SingleLogoutService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_SingleLogoutService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_ManageNameIDService_s* e;
      for (e = x->ManageNameIDService; e; e = (struct zxmd_md_ManageNameIDService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_ManageNameIDService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->NameIDFormat, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_md_AssertionConsumerService_s* e;
      for (e = x->AssertionConsumerService; e; e = (struct zxmd_md_AssertionConsumerService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AssertionConsumerService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_AttributeConsumingService_s* e;
      for (e = x->AttributeConsumingService; e; e = (struct zxmd_md_AttributeConsumingService_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_AttributeConsumingService(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_md_SPSSODescriptor) */

int zxmd_WALK_WO_md_SPSSODescriptor(struct zx_ctx* c, struct zxmd_md_SPSSODescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_ServiceDescription
#define EL_STRUCT zxmd_md_ServiceDescription_s
#define EL_NS     md
#define EL_TAG    ServiceDescription

/* FUNC(zxmd_DUP_STRS_md_ServiceDescription) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->lang);


}

/* FUNC(zxmd_DEEP_CLONE_md_ServiceDescription) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_ServiceDescription_s* zxmd_DEEP_CLONE_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x, int dup_strs)
{
  x = (struct zxmd_md_ServiceDescription_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_ServiceDescription_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->lang = zx_clone_attr(c, x->lang);


  return x;
}

/* FUNC(zxmd_FREE_md_ServiceDescription) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->lang, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_ServiceDescription) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_ServiceDescription_s* zxmd_NEW_md_ServiceDescription(struct zx_ctx* c)
{
  struct zxmd_md_ServiceDescription_s* x = ZX_ZALLOC(c, struct zxmd_md_ServiceDescription_s);
  x->gg.g.tok = zxmd_md_ServiceDescription_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_ServiceDescription) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_ServiceDescription) */

int zxmd_WALK_WO_md_ServiceDescription(struct zx_ctx* c, struct zxmd_md_ServiceDescription_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_ServiceName
#define EL_STRUCT zxmd_md_ServiceName_s
#define EL_NS     md
#define EL_TAG    ServiceName

/* FUNC(zxmd_DUP_STRS_md_ServiceName) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->lang);


}

/* FUNC(zxmd_DEEP_CLONE_md_ServiceName) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_ServiceName_s* zxmd_DEEP_CLONE_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x, int dup_strs)
{
  x = (struct zxmd_md_ServiceName_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_ServiceName_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->lang = zx_clone_attr(c, x->lang);


  return x;
}

/* FUNC(zxmd_FREE_md_ServiceName) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->lang, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_ServiceName) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_ServiceName_s* zxmd_NEW_md_ServiceName(struct zx_ctx* c)
{
  struct zxmd_md_ServiceName_s* x = ZX_ZALLOC(c, struct zxmd_md_ServiceName_s);
  x->gg.g.tok = zxmd_md_ServiceName_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_ServiceName) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_ServiceName) */

int zxmd_WALK_WO_md_ServiceName(struct zx_ctx* c, struct zxmd_md_ServiceName_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_SingleLogoutService
#define EL_STRUCT zxmd_md_SingleLogoutService_s
#define EL_NS     md
#define EL_TAG    SingleLogoutService

/* FUNC(zxmd_DUP_STRS_md_SingleLogoutService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);


}

/* FUNC(zxmd_DEEP_CLONE_md_SingleLogoutService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_SingleLogoutService_s* zxmd_DEEP_CLONE_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x, int dup_strs)
{
  x = (struct zxmd_md_SingleLogoutService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_SingleLogoutService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);


  return x;
}

/* FUNC(zxmd_FREE_md_SingleLogoutService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_SingleLogoutService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_SingleLogoutService_s* zxmd_NEW_md_SingleLogoutService(struct zx_ctx* c)
{
  struct zxmd_md_SingleLogoutService_s* x = ZX_ZALLOC(c, struct zxmd_md_SingleLogoutService_s);
  x->gg.g.tok = zxmd_md_SingleLogoutService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_SingleLogoutService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_SingleLogoutService) */

int zxmd_WALK_WO_md_SingleLogoutService(struct zx_ctx* c, struct zxmd_md_SingleLogoutService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   md_SingleSignOnService
#define EL_STRUCT zxmd_md_SingleSignOnService_s
#define EL_NS     md
#define EL_TAG    SingleSignOnService

/* FUNC(zxmd_DUP_STRS_md_SingleSignOnService) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Binding);
  zx_dup_attr(c, x->Location);
  zx_dup_attr(c, x->ResponseLocation);


}

/* FUNC(zxmd_DEEP_CLONE_md_SingleSignOnService) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_md_SingleSignOnService_s* zxmd_DEEP_CLONE_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x, int dup_strs)
{
  x = (struct zxmd_md_SingleSignOnService_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_md_SingleSignOnService_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Binding = zx_clone_attr(c, x->Binding);
  x->Location = zx_clone_attr(c, x->Location);
  x->ResponseLocation = zx_clone_attr(c, x->ResponseLocation);


  return x;
}

/* FUNC(zxmd_FREE_md_SingleSignOnService) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Binding, free_strs);
  zx_free_attr(c, x->Location, free_strs);
  zx_free_attr(c, x->ResponseLocation, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_md_SingleSignOnService) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_md_SingleSignOnService_s* zxmd_NEW_md_SingleSignOnService(struct zx_ctx* c)
{
  struct zxmd_md_SingleSignOnService_s* x = ZX_ZALLOC(c, struct zxmd_md_SingleSignOnService_s);
  x->gg.g.tok = zxmd_md_SingleSignOnService_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_md_SingleSignOnService) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_md_SingleSignOnService) */

int zxmd_WALK_WO_md_SingleSignOnService(struct zx_ctx* c, struct zxmd_md_SingleSignOnService_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_Action
#define EL_STRUCT zxmd_sa_Action_s
#define EL_NS     sa
#define EL_TAG    Action

/* FUNC(zxmd_DUP_STRS_sa_Action) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Namespace);


}

/* FUNC(zxmd_DEEP_CLONE_sa_Action) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_Action_s* zxmd_DEEP_CLONE_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x, int dup_strs)
{
  x = (struct zxmd_sa_Action_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_Action_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Namespace = zx_clone_attr(c, x->Namespace);


  return x;
}

/* FUNC(zxmd_FREE_sa_Action) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Namespace, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_Action) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_Action_s* zxmd_NEW_sa_Action(struct zx_ctx* c)
{
  struct zxmd_sa_Action_s* x = ZX_ZALLOC(c, struct zxmd_sa_Action_s);
  x->gg.g.tok = zxmd_sa_Action_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_Action) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_sa_Action) */

int zxmd_WALK_WO_sa_Action(struct zx_ctx* c, struct zxmd_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_Advice
#define EL_STRUCT zxmd_sa_Advice_s
#define EL_NS     sa
#define EL_TAG    Advice

/* FUNC(zxmd_DUP_STRS_sa_Advice) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->AssertionIDRef);
  zx_dup_strs_simple_elems(c, x->AssertionURIRef);
  {
      struct zxmd_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Assertion(c, e);
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_EncryptedAssertion(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_Advice) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_Advice_s* zxmd_DEEP_CLONE_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x, int dup_strs)
{
  x = (struct zxmd_sa_Advice_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_Advice_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->AssertionIDRef = zx_deep_clone_simple_elems(c,x->AssertionIDRef, dup_strs);
  x->AssertionURIRef = zx_deep_clone_simple_elems(c,x->AssertionURIRef, dup_strs);
  {
      struct zxmd_sa_Assertion_s* e;
      struct zxmd_sa_Assertion_s* en;
      struct zxmd_sa_Assertion_s* enn;
      for (enn = 0, e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Assertion(c, e, dup_strs);
	  if (!enn)
	      x->Assertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      struct zxmd_sa_EncryptedAssertion_s* en;
      struct zxmd_sa_EncryptedAssertion_s* enn;
      for (enn = 0, e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_EncryptedAssertion(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedAssertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_Advice) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->AssertionIDRef, free_strs);
  zx_free_simple_elems(c, x->AssertionURIRef, free_strs);
  {
      struct zxmd_sa_Assertion_s* e;
      struct zxmd_sa_Assertion_s* en;
      for (e = x->Assertion; e; e = en) {
	  en = (struct zxmd_sa_Assertion_s*)e->gg.g.n;
	  zxmd_FREE_sa_Assertion(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      struct zxmd_sa_EncryptedAssertion_s* en;
      for (e = x->EncryptedAssertion; e; e = en) {
	  en = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n;
	  zxmd_FREE_sa_EncryptedAssertion(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_Advice) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_Advice_s* zxmd_NEW_sa_Advice(struct zx_ctx* c)
{
  struct zxmd_sa_Advice_s* x = ZX_ZALLOC(c, struct zxmd_sa_Advice_s);
  x->gg.g.tok = zxmd_sa_Advice_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_Advice) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->AssertionIDRef, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->AssertionURIRef, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Assertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_EncryptedAssertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_Advice) */

int zxmd_WALK_WO_sa_Advice(struct zx_ctx* c, struct zxmd_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_Assertion
#define EL_STRUCT zxmd_sa_Assertion_s
#define EL_NS     sa
#define EL_TAG    Assertion

/* FUNC(zxmd_DUP_STRS_sa_Assertion) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->IssueInstant);

  {
      struct zxmd_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zxmd_sa_Issuer_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zxmd_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zxmd_sa_Subject_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Subject(c, e);
  }
  {
      struct zxmd_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zxmd_sa_Conditions_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Conditions(c, e);
  }
  {
      struct zxmd_sa_Advice_s* e;
      for (e = x->Advice; e; e = (struct zxmd_sa_Advice_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Advice(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Statement);
  {
      struct zxmd_sa_AuthnStatement_s* e;
      for (e = x->AuthnStatement; e; e = (struct zxmd_sa_AuthnStatement_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_AuthnStatement(c, e);
  }
  {
      struct zxmd_sa_AuthzDecisionStatement_s* e;
      for (e = x->AuthzDecisionStatement; e; e = (struct zxmd_sa_AuthzDecisionStatement_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_AuthzDecisionStatement(c, e);
  }
  {
      struct zxmd_sa_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zxmd_sa_AttributeStatement_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_AttributeStatement(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_Assertion) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_Assertion_s* zxmd_DEEP_CLONE_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x, int dup_strs)
{
  x = (struct zxmd_sa_Assertion_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_Assertion_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Version = zx_clone_attr(c, x->Version);
  x->ID = zx_clone_attr(c, x->ID);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);

  {
      struct zxmd_sa_Issuer_s* e;
      struct zxmd_sa_Issuer_s* en;
      struct zxmd_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zxmd_sa_Issuer_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      struct zxmd_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_Subject_s* e;
      struct zxmd_sa_Subject_s* en;
      struct zxmd_sa_Subject_s* enn;
      for (enn = 0, e = x->Subject; e; e = (struct zxmd_sa_Subject_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Subject(c, e, dup_strs);
	  if (!enn)
	      x->Subject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_Conditions_s* e;
      struct zxmd_sa_Conditions_s* en;
      struct zxmd_sa_Conditions_s* enn;
      for (enn = 0, e = x->Conditions; e; e = (struct zxmd_sa_Conditions_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Conditions(c, e, dup_strs);
	  if (!enn)
	      x->Conditions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_Advice_s* e;
      struct zxmd_sa_Advice_s* en;
      struct zxmd_sa_Advice_s* enn;
      for (enn = 0, e = x->Advice; e; e = (struct zxmd_sa_Advice_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Advice(c, e, dup_strs);
	  if (!enn)
	      x->Advice = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Statement = zx_deep_clone_simple_elems(c,x->Statement, dup_strs);
  {
      struct zxmd_sa_AuthnStatement_s* e;
      struct zxmd_sa_AuthnStatement_s* en;
      struct zxmd_sa_AuthnStatement_s* enn;
      for (enn = 0, e = x->AuthnStatement; e; e = (struct zxmd_sa_AuthnStatement_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_AuthnStatement(c, e, dup_strs);
	  if (!enn)
	      x->AuthnStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_AuthzDecisionStatement_s* e;
      struct zxmd_sa_AuthzDecisionStatement_s* en;
      struct zxmd_sa_AuthzDecisionStatement_s* enn;
      for (enn = 0, e = x->AuthzDecisionStatement; e; e = (struct zxmd_sa_AuthzDecisionStatement_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_AuthzDecisionStatement(c, e, dup_strs);
	  if (!enn)
	      x->AuthzDecisionStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_AttributeStatement_s* e;
      struct zxmd_sa_AttributeStatement_s* en;
      struct zxmd_sa_AttributeStatement_s* enn;
      for (enn = 0, e = x->AttributeStatement; e; e = (struct zxmd_sa_AttributeStatement_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_AttributeStatement(c, e, dup_strs);
	  if (!enn)
	      x->AttributeStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_Assertion) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);

  {
      struct zxmd_sa_Issuer_s* e;
      struct zxmd_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zxmd_sa_Issuer_s*)e->gg.g.n;
	  zxmd_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      struct zxmd_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zxmd_ds_Signature_s*)e->gg.g.n;
	  zxmd_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_Subject_s* e;
      struct zxmd_sa_Subject_s* en;
      for (e = x->Subject; e; e = en) {
	  en = (struct zxmd_sa_Subject_s*)e->gg.g.n;
	  zxmd_FREE_sa_Subject(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_Conditions_s* e;
      struct zxmd_sa_Conditions_s* en;
      for (e = x->Conditions; e; e = en) {
	  en = (struct zxmd_sa_Conditions_s*)e->gg.g.n;
	  zxmd_FREE_sa_Conditions(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_Advice_s* e;
      struct zxmd_sa_Advice_s* en;
      for (e = x->Advice; e; e = en) {
	  en = (struct zxmd_sa_Advice_s*)e->gg.g.n;
	  zxmd_FREE_sa_Advice(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Statement, free_strs);
  {
      struct zxmd_sa_AuthnStatement_s* e;
      struct zxmd_sa_AuthnStatement_s* en;
      for (e = x->AuthnStatement; e; e = en) {
	  en = (struct zxmd_sa_AuthnStatement_s*)e->gg.g.n;
	  zxmd_FREE_sa_AuthnStatement(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_AuthzDecisionStatement_s* e;
      struct zxmd_sa_AuthzDecisionStatement_s* en;
      for (e = x->AuthzDecisionStatement; e; e = en) {
	  en = (struct zxmd_sa_AuthzDecisionStatement_s*)e->gg.g.n;
	  zxmd_FREE_sa_AuthzDecisionStatement(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_AttributeStatement_s* e;
      struct zxmd_sa_AttributeStatement_s* en;
      for (e = x->AttributeStatement; e; e = en) {
	  en = (struct zxmd_sa_AttributeStatement_s*)e->gg.g.n;
	  zxmd_FREE_sa_AttributeStatement(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_Assertion) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_Assertion_s* zxmd_NEW_sa_Assertion(struct zx_ctx* c)
{
  struct zxmd_sa_Assertion_s* x = ZX_ZALLOC(c, struct zxmd_sa_Assertion_s);
  x->gg.g.tok = zxmd_sa_Assertion_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_Assertion) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zxmd_sa_Issuer_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zxmd_ds_Signature_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zxmd_sa_Subject_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Subject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zxmd_sa_Conditions_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Conditions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_Advice_s* e;
      for (e = x->Advice; e; e = (struct zxmd_sa_Advice_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Advice(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Statement, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_sa_AuthnStatement_s* e;
      for (e = x->AuthnStatement; e; e = (struct zxmd_sa_AuthnStatement_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_AuthnStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_AuthzDecisionStatement_s* e;
      for (e = x->AuthzDecisionStatement; e; e = (struct zxmd_sa_AuthzDecisionStatement_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_AuthzDecisionStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zxmd_sa_AttributeStatement_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_AttributeStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_Assertion) */

int zxmd_WALK_WO_sa_Assertion(struct zx_ctx* c, struct zxmd_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_Attribute
#define EL_STRUCT zxmd_sa_Attribute_s
#define EL_NS     sa
#define EL_TAG    Attribute

/* FUNC(zxmd_DUP_STRS_sa_Attribute) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Name);
  zx_dup_attr(c, x->NameFormat);
  zx_dup_attr(c, x->FriendlyName);

  zx_dup_strs_simple_elems(c, x->AttributeValue);

}

/* FUNC(zxmd_DEEP_CLONE_sa_Attribute) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_Attribute_s* zxmd_DEEP_CLONE_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x, int dup_strs)
{
  x = (struct zxmd_sa_Attribute_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_Attribute_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Name = zx_clone_attr(c, x->Name);
  x->NameFormat = zx_clone_attr(c, x->NameFormat);
  x->FriendlyName = zx_clone_attr(c, x->FriendlyName);

  x->AttributeValue = zx_deep_clone_simple_elems(c,x->AttributeValue, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_sa_Attribute) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Name, free_strs);
  zx_free_attr(c, x->NameFormat, free_strs);
  zx_free_attr(c, x->FriendlyName, free_strs);

  zx_free_simple_elems(c, x->AttributeValue, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_Attribute) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_Attribute_s* zxmd_NEW_sa_Attribute(struct zx_ctx* c)
{
  struct zxmd_sa_Attribute_s* x = ZX_ZALLOC(c, struct zxmd_sa_Attribute_s);
  x->gg.g.tok = zxmd_sa_Attribute_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_Attribute) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->AttributeValue, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_Attribute) */

int zxmd_WALK_WO_sa_Attribute(struct zx_ctx* c, struct zxmd_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_AttributeStatement
#define EL_STRUCT zxmd_sa_AttributeStatement_s
#define EL_NS     sa
#define EL_TAG    AttributeStatement

/* FUNC(zxmd_DUP_STRS_sa_AttributeStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Attribute(c, e);
  }
  {
      struct zxmd_sa_EncryptedAttribute_s* e;
      for (e = x->EncryptedAttribute; e; e = (struct zxmd_sa_EncryptedAttribute_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_EncryptedAttribute(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_AttributeStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_AttributeStatement_s* zxmd_DEEP_CLONE_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x, int dup_strs)
{
  x = (struct zxmd_sa_AttributeStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_AttributeStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_sa_Attribute_s* e;
      struct zxmd_sa_Attribute_s* en;
      struct zxmd_sa_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_EncryptedAttribute_s* e;
      struct zxmd_sa_EncryptedAttribute_s* en;
      struct zxmd_sa_EncryptedAttribute_s* enn;
      for (enn = 0, e = x->EncryptedAttribute; e; e = (struct zxmd_sa_EncryptedAttribute_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_EncryptedAttribute(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedAttribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_AttributeStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_sa_Attribute_s* e;
      struct zxmd_sa_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zxmd_sa_Attribute_s*)e->gg.g.n;
	  zxmd_FREE_sa_Attribute(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_EncryptedAttribute_s* e;
      struct zxmd_sa_EncryptedAttribute_s* en;
      for (e = x->EncryptedAttribute; e; e = en) {
	  en = (struct zxmd_sa_EncryptedAttribute_s*)e->gg.g.n;
	  zxmd_FREE_sa_EncryptedAttribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_AttributeStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_AttributeStatement_s* zxmd_NEW_sa_AttributeStatement(struct zx_ctx* c)
{
  struct zxmd_sa_AttributeStatement_s* x = ZX_ZALLOC(c, struct zxmd_sa_AttributeStatement_s);
  x->gg.g.tok = zxmd_sa_AttributeStatement_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_AttributeStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zxmd_sa_Attribute_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_EncryptedAttribute_s* e;
      for (e = x->EncryptedAttribute; e; e = (struct zxmd_sa_EncryptedAttribute_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_EncryptedAttribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_AttributeStatement) */

int zxmd_WALK_WO_sa_AttributeStatement(struct zx_ctx* c, struct zxmd_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_AudienceRestriction
#define EL_STRUCT zxmd_sa_AudienceRestriction_s
#define EL_NS     sa
#define EL_TAG    AudienceRestriction

/* FUNC(zxmd_DUP_STRS_sa_AudienceRestriction) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Audience);

}

/* FUNC(zxmd_DEEP_CLONE_sa_AudienceRestriction) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_AudienceRestriction_s* zxmd_DEEP_CLONE_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x, int dup_strs)
{
  x = (struct zxmd_sa_AudienceRestriction_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_AudienceRestriction_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Audience = zx_deep_clone_simple_elems(c,x->Audience, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_sa_AudienceRestriction) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Audience, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_AudienceRestriction) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_AudienceRestriction_s* zxmd_NEW_sa_AudienceRestriction(struct zx_ctx* c)
{
  struct zxmd_sa_AudienceRestriction_s* x = ZX_ZALLOC(c, struct zxmd_sa_AudienceRestriction_s);
  x->gg.g.tok = zxmd_sa_AudienceRestriction_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_AudienceRestriction) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Audience, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_AudienceRestriction) */

int zxmd_WALK_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zxmd_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_AuthnContext
#define EL_STRUCT zxmd_sa_AuthnContext_s
#define EL_NS     sa
#define EL_TAG    AuthnContext

/* FUNC(zxmd_DUP_STRS_sa_AuthnContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->AuthnContextClassRef);
  zx_dup_strs_simple_elems(c, x->AuthnContextDecl);
  zx_dup_strs_simple_elems(c, x->AuthnContextDeclRef);
  zx_dup_strs_simple_elems(c, x->AuthenticatingAuthority);

}

/* FUNC(zxmd_DEEP_CLONE_sa_AuthnContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_AuthnContext_s* zxmd_DEEP_CLONE_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x, int dup_strs)
{
  x = (struct zxmd_sa_AuthnContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_AuthnContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->AuthnContextClassRef = zx_deep_clone_simple_elems(c,x->AuthnContextClassRef, dup_strs);
  x->AuthnContextDecl = zx_deep_clone_simple_elems(c,x->AuthnContextDecl, dup_strs);
  x->AuthnContextDeclRef = zx_deep_clone_simple_elems(c,x->AuthnContextDeclRef, dup_strs);
  x->AuthenticatingAuthority = zx_deep_clone_simple_elems(c,x->AuthenticatingAuthority, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_sa_AuthnContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->AuthnContextClassRef, free_strs);
  zx_free_simple_elems(c, x->AuthnContextDecl, free_strs);
  zx_free_simple_elems(c, x->AuthnContextDeclRef, free_strs);
  zx_free_simple_elems(c, x->AuthenticatingAuthority, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_AuthnContext) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_AuthnContext_s* zxmd_NEW_sa_AuthnContext(struct zx_ctx* c)
{
  struct zxmd_sa_AuthnContext_s* x = ZX_ZALLOC(c, struct zxmd_sa_AuthnContext_s);
  x->gg.g.tok = zxmd_sa_AuthnContext_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_AuthnContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->AuthnContextClassRef, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->AuthnContextDecl, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->AuthnContextDeclRef, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->AuthenticatingAuthority, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_AuthnContext) */

int zxmd_WALK_WO_sa_AuthnContext(struct zx_ctx* c, struct zxmd_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_AuthnStatement
#define EL_STRUCT zxmd_sa_AuthnStatement_s
#define EL_NS     sa
#define EL_TAG    AuthnStatement

/* FUNC(zxmd_DUP_STRS_sa_AuthnStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->AuthnInstant);
  zx_dup_attr(c, x->SessionIndex);
  zx_dup_attr(c, x->SessionNotOnOrAfter);

  {
      struct zxmd_sa_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zxmd_sa_SubjectLocality_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_SubjectLocality(c, e);
  }
  {
      struct zxmd_sa_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zxmd_sa_AuthnContext_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_AuthnContext(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_AuthnStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_AuthnStatement_s* zxmd_DEEP_CLONE_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x, int dup_strs)
{
  x = (struct zxmd_sa_AuthnStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_AuthnStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->AuthnInstant = zx_clone_attr(c, x->AuthnInstant);
  x->SessionIndex = zx_clone_attr(c, x->SessionIndex);
  x->SessionNotOnOrAfter = zx_clone_attr(c, x->SessionNotOnOrAfter);

  {
      struct zxmd_sa_SubjectLocality_s* e;
      struct zxmd_sa_SubjectLocality_s* en;
      struct zxmd_sa_SubjectLocality_s* enn;
      for (enn = 0, e = x->SubjectLocality; e; e = (struct zxmd_sa_SubjectLocality_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_SubjectLocality(c, e, dup_strs);
	  if (!enn)
	      x->SubjectLocality = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_AuthnContext_s* e;
      struct zxmd_sa_AuthnContext_s* en;
      struct zxmd_sa_AuthnContext_s* enn;
      for (enn = 0, e = x->AuthnContext; e; e = (struct zxmd_sa_AuthnContext_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_AuthnContext(c, e, dup_strs);
	  if (!enn)
	      x->AuthnContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_AuthnStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->AuthnInstant, free_strs);
  zx_free_attr(c, x->SessionIndex, free_strs);
  zx_free_attr(c, x->SessionNotOnOrAfter, free_strs);

  {
      struct zxmd_sa_SubjectLocality_s* e;
      struct zxmd_sa_SubjectLocality_s* en;
      for (e = x->SubjectLocality; e; e = en) {
	  en = (struct zxmd_sa_SubjectLocality_s*)e->gg.g.n;
	  zxmd_FREE_sa_SubjectLocality(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_AuthnContext_s* e;
      struct zxmd_sa_AuthnContext_s* en;
      for (e = x->AuthnContext; e; e = en) {
	  en = (struct zxmd_sa_AuthnContext_s*)e->gg.g.n;
	  zxmd_FREE_sa_AuthnContext(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_AuthnStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_AuthnStatement_s* zxmd_NEW_sa_AuthnStatement(struct zx_ctx* c)
{
  struct zxmd_sa_AuthnStatement_s* x = ZX_ZALLOC(c, struct zxmd_sa_AuthnStatement_s);
  x->gg.g.tok = zxmd_sa_AuthnStatement_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_AuthnStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_sa_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zxmd_sa_SubjectLocality_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_SubjectLocality(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zxmd_sa_AuthnContext_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_AuthnContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_AuthnStatement) */

int zxmd_WALK_WO_sa_AuthnStatement(struct zx_ctx* c, struct zxmd_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_AuthzDecisionStatement
#define EL_STRUCT zxmd_sa_AuthzDecisionStatement_s
#define EL_NS     sa
#define EL_TAG    AuthzDecisionStatement

/* FUNC(zxmd_DUP_STRS_sa_AuthzDecisionStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Resource);
  zx_dup_attr(c, x->Decision);

  {
      struct zxmd_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zxmd_sa_Action_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Action(c, e);
  }
  {
      struct zxmd_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zxmd_sa_Evidence_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Evidence(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_AuthzDecisionStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_AuthzDecisionStatement_s* zxmd_DEEP_CLONE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x, int dup_strs)
{
  x = (struct zxmd_sa_AuthzDecisionStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_AuthzDecisionStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Resource = zx_clone_attr(c, x->Resource);
  x->Decision = zx_clone_attr(c, x->Decision);

  {
      struct zxmd_sa_Action_s* e;
      struct zxmd_sa_Action_s* en;
      struct zxmd_sa_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zxmd_sa_Action_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_Evidence_s* e;
      struct zxmd_sa_Evidence_s* en;
      struct zxmd_sa_Evidence_s* enn;
      for (enn = 0, e = x->Evidence; e; e = (struct zxmd_sa_Evidence_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Evidence(c, e, dup_strs);
	  if (!enn)
	      x->Evidence = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_AuthzDecisionStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Resource, free_strs);
  zx_free_attr(c, x->Decision, free_strs);

  {
      struct zxmd_sa_Action_s* e;
      struct zxmd_sa_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zxmd_sa_Action_s*)e->gg.g.n;
	  zxmd_FREE_sa_Action(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_Evidence_s* e;
      struct zxmd_sa_Evidence_s* en;
      for (e = x->Evidence; e; e = en) {
	  en = (struct zxmd_sa_Evidence_s*)e->gg.g.n;
	  zxmd_FREE_sa_Evidence(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_AuthzDecisionStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_AuthzDecisionStatement_s* zxmd_NEW_sa_AuthzDecisionStatement(struct zx_ctx* c)
{
  struct zxmd_sa_AuthzDecisionStatement_s* x = ZX_ZALLOC(c, struct zxmd_sa_AuthzDecisionStatement_s);
  x->gg.g.tok = zxmd_sa_AuthzDecisionStatement_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_AuthzDecisionStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zxmd_sa_Action_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zxmd_sa_Evidence_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Evidence(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_AuthzDecisionStatement) */

int zxmd_WALK_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zxmd_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_BaseID
#define EL_STRUCT zxmd_sa_BaseID_s
#define EL_NS     sa
#define EL_TAG    BaseID

/* FUNC(zxmd_DUP_STRS_sa_BaseID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NameQualifier);
  zx_dup_attr(c, x->SPNameQualifier);


}

/* FUNC(zxmd_DEEP_CLONE_sa_BaseID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_BaseID_s* zxmd_DEEP_CLONE_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x, int dup_strs)
{
  x = (struct zxmd_sa_BaseID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_BaseID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NameQualifier = zx_clone_attr(c, x->NameQualifier);
  x->SPNameQualifier = zx_clone_attr(c, x->SPNameQualifier);


  return x;
}

/* FUNC(zxmd_FREE_sa_BaseID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NameQualifier, free_strs);
  zx_free_attr(c, x->SPNameQualifier, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_BaseID) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_BaseID_s* zxmd_NEW_sa_BaseID(struct zx_ctx* c)
{
  struct zxmd_sa_BaseID_s* x = ZX_ZALLOC(c, struct zxmd_sa_BaseID_s);
  x->gg.g.tok = zxmd_sa_BaseID_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_BaseID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_sa_BaseID) */

int zxmd_WALK_WO_sa_BaseID(struct zx_ctx* c, struct zxmd_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_Conditions
#define EL_STRUCT zxmd_sa_Conditions_s
#define EL_NS     sa
#define EL_TAG    Conditions

/* FUNC(zxmd_DUP_STRS_sa_Conditions) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NotBefore);
  zx_dup_attr(c, x->NotOnOrAfter);

  zx_dup_strs_simple_elems(c, x->Condition);
  {
      struct zxmd_sa_AudienceRestriction_s* e;
      for (e = x->AudienceRestriction; e; e = (struct zxmd_sa_AudienceRestriction_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_AudienceRestriction(c, e);
  }
  {
      struct zxmd_sa_OneTimeUse_s* e;
      for (e = x->OneTimeUse; e; e = (struct zxmd_sa_OneTimeUse_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_OneTimeUse(c, e);
  }
  {
      struct zxmd_sa_ProxyRestriction_s* e;
      for (e = x->ProxyRestriction; e; e = (struct zxmd_sa_ProxyRestriction_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_ProxyRestriction(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_Conditions) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_Conditions_s* zxmd_DEEP_CLONE_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x, int dup_strs)
{
  x = (struct zxmd_sa_Conditions_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_Conditions_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NotBefore = zx_clone_attr(c, x->NotBefore);
  x->NotOnOrAfter = zx_clone_attr(c, x->NotOnOrAfter);

  x->Condition = zx_deep_clone_simple_elems(c,x->Condition, dup_strs);
  {
      struct zxmd_sa_AudienceRestriction_s* e;
      struct zxmd_sa_AudienceRestriction_s* en;
      struct zxmd_sa_AudienceRestriction_s* enn;
      for (enn = 0, e = x->AudienceRestriction; e; e = (struct zxmd_sa_AudienceRestriction_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_AudienceRestriction(c, e, dup_strs);
	  if (!enn)
	      x->AudienceRestriction = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_OneTimeUse_s* e;
      struct zxmd_sa_OneTimeUse_s* en;
      struct zxmd_sa_OneTimeUse_s* enn;
      for (enn = 0, e = x->OneTimeUse; e; e = (struct zxmd_sa_OneTimeUse_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_OneTimeUse(c, e, dup_strs);
	  if (!enn)
	      x->OneTimeUse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_ProxyRestriction_s* e;
      struct zxmd_sa_ProxyRestriction_s* en;
      struct zxmd_sa_ProxyRestriction_s* enn;
      for (enn = 0, e = x->ProxyRestriction; e; e = (struct zxmd_sa_ProxyRestriction_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_ProxyRestriction(c, e, dup_strs);
	  if (!enn)
	      x->ProxyRestriction = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_Conditions) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NotBefore, free_strs);
  zx_free_attr(c, x->NotOnOrAfter, free_strs);

  zx_free_simple_elems(c, x->Condition, free_strs);
  {
      struct zxmd_sa_AudienceRestriction_s* e;
      struct zxmd_sa_AudienceRestriction_s* en;
      for (e = x->AudienceRestriction; e; e = en) {
	  en = (struct zxmd_sa_AudienceRestriction_s*)e->gg.g.n;
	  zxmd_FREE_sa_AudienceRestriction(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_OneTimeUse_s* e;
      struct zxmd_sa_OneTimeUse_s* en;
      for (e = x->OneTimeUse; e; e = en) {
	  en = (struct zxmd_sa_OneTimeUse_s*)e->gg.g.n;
	  zxmd_FREE_sa_OneTimeUse(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_ProxyRestriction_s* e;
      struct zxmd_sa_ProxyRestriction_s* en;
      for (e = x->ProxyRestriction; e; e = en) {
	  en = (struct zxmd_sa_ProxyRestriction_s*)e->gg.g.n;
	  zxmd_FREE_sa_ProxyRestriction(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_Conditions) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_Conditions_s* zxmd_NEW_sa_Conditions(struct zx_ctx* c)
{
  struct zxmd_sa_Conditions_s* x = ZX_ZALLOC(c, struct zxmd_sa_Conditions_s);
  x->gg.g.tok = zxmd_sa_Conditions_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_Conditions) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Condition, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_sa_AudienceRestriction_s* e;
      for (e = x->AudienceRestriction; e; e = (struct zxmd_sa_AudienceRestriction_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_AudienceRestriction(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_OneTimeUse_s* e;
      for (e = x->OneTimeUse; e; e = (struct zxmd_sa_OneTimeUse_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_OneTimeUse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_ProxyRestriction_s* e;
      for (e = x->ProxyRestriction; e; e = (struct zxmd_sa_ProxyRestriction_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_ProxyRestriction(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_Conditions) */

int zxmd_WALK_WO_sa_Conditions(struct zx_ctx* c, struct zxmd_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_EncryptedAssertion
#define EL_STRUCT zxmd_sa_EncryptedAssertion_s
#define EL_NS     sa
#define EL_TAG    EncryptedAssertion

/* FUNC(zxmd_DUP_STRS_sa_EncryptedAssertion) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptedData(c, e);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptedKey(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_EncryptedAssertion) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_EncryptedAssertion_s* zxmd_DEEP_CLONE_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x, int dup_strs)
{
  x = (struct zxmd_sa_EncryptedAssertion_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_EncryptedAssertion_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      struct zxmd_xenc_EncryptedData_s* en;
      struct zxmd_xenc_EncryptedData_s* enn;
      for (enn = 0, e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptedData(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      struct zxmd_xenc_EncryptedKey_s* en;
      struct zxmd_xenc_EncryptedKey_s* enn;
      for (enn = 0, e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptedKey(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedKey = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_EncryptedAssertion) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      struct zxmd_xenc_EncryptedData_s* en;
      for (e = x->EncryptedData; e; e = en) {
	  en = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptedData(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      struct zxmd_xenc_EncryptedKey_s* en;
      for (e = x->EncryptedKey; e; e = en) {
	  en = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptedKey(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_EncryptedAssertion) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_EncryptedAssertion_s* zxmd_NEW_sa_EncryptedAssertion(struct zx_ctx* c)
{
  struct zxmd_sa_EncryptedAssertion_s* x = ZX_ZALLOC(c, struct zxmd_sa_EncryptedAssertion_s);
  x->gg.g.tok = zxmd_sa_EncryptedAssertion_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_EncryptedAssertion) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptedData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptedKey(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_EncryptedAssertion) */

int zxmd_WALK_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zxmd_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_EncryptedAttribute
#define EL_STRUCT zxmd_sa_EncryptedAttribute_s
#define EL_NS     sa
#define EL_TAG    EncryptedAttribute

/* FUNC(zxmd_DUP_STRS_sa_EncryptedAttribute) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptedData(c, e);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptedKey(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_EncryptedAttribute) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_EncryptedAttribute_s* zxmd_DEEP_CLONE_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x, int dup_strs)
{
  x = (struct zxmd_sa_EncryptedAttribute_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_EncryptedAttribute_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      struct zxmd_xenc_EncryptedData_s* en;
      struct zxmd_xenc_EncryptedData_s* enn;
      for (enn = 0, e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptedData(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      struct zxmd_xenc_EncryptedKey_s* en;
      struct zxmd_xenc_EncryptedKey_s* enn;
      for (enn = 0, e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptedKey(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedKey = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_EncryptedAttribute) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      struct zxmd_xenc_EncryptedData_s* en;
      for (e = x->EncryptedData; e; e = en) {
	  en = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptedData(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      struct zxmd_xenc_EncryptedKey_s* en;
      for (e = x->EncryptedKey; e; e = en) {
	  en = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptedKey(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_EncryptedAttribute) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_EncryptedAttribute_s* zxmd_NEW_sa_EncryptedAttribute(struct zx_ctx* c)
{
  struct zxmd_sa_EncryptedAttribute_s* x = ZX_ZALLOC(c, struct zxmd_sa_EncryptedAttribute_s);
  x->gg.g.tok = zxmd_sa_EncryptedAttribute_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_EncryptedAttribute) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptedData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptedKey(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_EncryptedAttribute) */

int zxmd_WALK_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zxmd_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_EncryptedID
#define EL_STRUCT zxmd_sa_EncryptedID_s
#define EL_NS     sa
#define EL_TAG    EncryptedID

/* FUNC(zxmd_DUP_STRS_sa_EncryptedID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptedData(c, e);
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptedKey(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_EncryptedID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_EncryptedID_s* zxmd_DEEP_CLONE_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x, int dup_strs)
{
  x = (struct zxmd_sa_EncryptedID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_EncryptedID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      struct zxmd_xenc_EncryptedData_s* en;
      struct zxmd_xenc_EncryptedData_s* enn;
      for (enn = 0, e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptedData(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      struct zxmd_xenc_EncryptedKey_s* en;
      struct zxmd_xenc_EncryptedKey_s* enn;
      for (enn = 0, e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptedKey(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedKey = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_EncryptedID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_EncryptedData_s* e;
      struct zxmd_xenc_EncryptedData_s* en;
      for (e = x->EncryptedData; e; e = en) {
	  en = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptedData(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      struct zxmd_xenc_EncryptedKey_s* en;
      for (e = x->EncryptedKey; e; e = en) {
	  en = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptedKey(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_EncryptedID) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_EncryptedID_s* zxmd_NEW_sa_EncryptedID(struct zx_ctx* c)
{
  struct zxmd_sa_EncryptedID_s* x = ZX_ZALLOC(c, struct zxmd_sa_EncryptedID_s);
  x->gg.g.tok = zxmd_sa_EncryptedID_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_EncryptedID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zxmd_xenc_EncryptedData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptedData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zxmd_xenc_EncryptedKey_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptedKey(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_EncryptedID) */

int zxmd_WALK_WO_sa_EncryptedID(struct zx_ctx* c, struct zxmd_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_Evidence
#define EL_STRUCT zxmd_sa_Evidence_s
#define EL_NS     sa
#define EL_TAG    Evidence

/* FUNC(zxmd_DUP_STRS_sa_Evidence) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->AssertionIDRef);
  zx_dup_strs_simple_elems(c, x->AssertionURIRef);
  {
      struct zxmd_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_Assertion(c, e);
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_EncryptedAssertion(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_Evidence) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_Evidence_s* zxmd_DEEP_CLONE_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x, int dup_strs)
{
  x = (struct zxmd_sa_Evidence_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_Evidence_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->AssertionIDRef = zx_deep_clone_simple_elems(c,x->AssertionIDRef, dup_strs);
  x->AssertionURIRef = zx_deep_clone_simple_elems(c,x->AssertionURIRef, dup_strs);
  {
      struct zxmd_sa_Assertion_s* e;
      struct zxmd_sa_Assertion_s* en;
      struct zxmd_sa_Assertion_s* enn;
      for (enn = 0, e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_Assertion(c, e, dup_strs);
	  if (!enn)
	      x->Assertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      struct zxmd_sa_EncryptedAssertion_s* en;
      struct zxmd_sa_EncryptedAssertion_s* enn;
      for (enn = 0, e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_EncryptedAssertion(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedAssertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_Evidence) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->AssertionIDRef, free_strs);
  zx_free_simple_elems(c, x->AssertionURIRef, free_strs);
  {
      struct zxmd_sa_Assertion_s* e;
      struct zxmd_sa_Assertion_s* en;
      for (e = x->Assertion; e; e = en) {
	  en = (struct zxmd_sa_Assertion_s*)e->gg.g.n;
	  zxmd_FREE_sa_Assertion(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      struct zxmd_sa_EncryptedAssertion_s* en;
      for (e = x->EncryptedAssertion; e; e = en) {
	  en = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n;
	  zxmd_FREE_sa_EncryptedAssertion(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_Evidence) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_Evidence_s* zxmd_NEW_sa_Evidence(struct zx_ctx* c)
{
  struct zxmd_sa_Evidence_s* x = ZX_ZALLOC(c, struct zxmd_sa_Evidence_s);
  x->gg.g.tok = zxmd_sa_Evidence_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_Evidence) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->AssertionIDRef, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->AssertionURIRef, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zxmd_sa_Assertion_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_Assertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zxmd_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_EncryptedAssertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_Evidence) */

int zxmd_WALK_WO_sa_Evidence(struct zx_ctx* c, struct zxmd_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_Issuer
#define EL_STRUCT zxmd_sa_Issuer_s
#define EL_NS     sa
#define EL_TAG    Issuer

/* FUNC(zxmd_DUP_STRS_sa_Issuer) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NameQualifier);
  zx_dup_attr(c, x->SPNameQualifier);
  zx_dup_attr(c, x->Format);
  zx_dup_attr(c, x->SPProvidedID);


}

/* FUNC(zxmd_DEEP_CLONE_sa_Issuer) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_Issuer_s* zxmd_DEEP_CLONE_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x, int dup_strs)
{
  x = (struct zxmd_sa_Issuer_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_Issuer_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NameQualifier = zx_clone_attr(c, x->NameQualifier);
  x->SPNameQualifier = zx_clone_attr(c, x->SPNameQualifier);
  x->Format = zx_clone_attr(c, x->Format);
  x->SPProvidedID = zx_clone_attr(c, x->SPProvidedID);


  return x;
}

/* FUNC(zxmd_FREE_sa_Issuer) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NameQualifier, free_strs);
  zx_free_attr(c, x->SPNameQualifier, free_strs);
  zx_free_attr(c, x->Format, free_strs);
  zx_free_attr(c, x->SPProvidedID, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_Issuer) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_Issuer_s* zxmd_NEW_sa_Issuer(struct zx_ctx* c)
{
  struct zxmd_sa_Issuer_s* x = ZX_ZALLOC(c, struct zxmd_sa_Issuer_s);
  x->gg.g.tok = zxmd_sa_Issuer_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_Issuer) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_sa_Issuer) */

int zxmd_WALK_WO_sa_Issuer(struct zx_ctx* c, struct zxmd_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_NameID
#define EL_STRUCT zxmd_sa_NameID_s
#define EL_NS     sa
#define EL_TAG    NameID

/* FUNC(zxmd_DUP_STRS_sa_NameID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NameQualifier);
  zx_dup_attr(c, x->SPNameQualifier);
  zx_dup_attr(c, x->Format);
  zx_dup_attr(c, x->SPProvidedID);


}

/* FUNC(zxmd_DEEP_CLONE_sa_NameID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_NameID_s* zxmd_DEEP_CLONE_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x, int dup_strs)
{
  x = (struct zxmd_sa_NameID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_NameID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NameQualifier = zx_clone_attr(c, x->NameQualifier);
  x->SPNameQualifier = zx_clone_attr(c, x->SPNameQualifier);
  x->Format = zx_clone_attr(c, x->Format);
  x->SPProvidedID = zx_clone_attr(c, x->SPProvidedID);


  return x;
}

/* FUNC(zxmd_FREE_sa_NameID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NameQualifier, free_strs);
  zx_free_attr(c, x->SPNameQualifier, free_strs);
  zx_free_attr(c, x->Format, free_strs);
  zx_free_attr(c, x->SPProvidedID, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_NameID) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_NameID_s* zxmd_NEW_sa_NameID(struct zx_ctx* c)
{
  struct zxmd_sa_NameID_s* x = ZX_ZALLOC(c, struct zxmd_sa_NameID_s);
  x->gg.g.tok = zxmd_sa_NameID_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_NameID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_sa_NameID) */

int zxmd_WALK_WO_sa_NameID(struct zx_ctx* c, struct zxmd_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_OneTimeUse
#define EL_STRUCT zxmd_sa_OneTimeUse_s
#define EL_NS     sa
#define EL_TAG    OneTimeUse

/* FUNC(zxmd_DUP_STRS_sa_OneTimeUse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxmd_DEEP_CLONE_sa_OneTimeUse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_OneTimeUse_s* zxmd_DEEP_CLONE_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x, int dup_strs)
{
  x = (struct zxmd_sa_OneTimeUse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_OneTimeUse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxmd_FREE_sa_OneTimeUse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_OneTimeUse) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_OneTimeUse_s* zxmd_NEW_sa_OneTimeUse(struct zx_ctx* c)
{
  struct zxmd_sa_OneTimeUse_s* x = ZX_ZALLOC(c, struct zxmd_sa_OneTimeUse_s);
  x->gg.g.tok = zxmd_sa_OneTimeUse_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_OneTimeUse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_sa_OneTimeUse) */

int zxmd_WALK_WO_sa_OneTimeUse(struct zx_ctx* c, struct zxmd_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_ProxyRestriction
#define EL_STRUCT zxmd_sa_ProxyRestriction_s
#define EL_NS     sa
#define EL_TAG    ProxyRestriction

/* FUNC(zxmd_DUP_STRS_sa_ProxyRestriction) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Count);

  zx_dup_strs_simple_elems(c, x->Audience);

}

/* FUNC(zxmd_DEEP_CLONE_sa_ProxyRestriction) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_ProxyRestriction_s* zxmd_DEEP_CLONE_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x, int dup_strs)
{
  x = (struct zxmd_sa_ProxyRestriction_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_ProxyRestriction_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Count = zx_clone_attr(c, x->Count);

  x->Audience = zx_deep_clone_simple_elems(c,x->Audience, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_sa_ProxyRestriction) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Count, free_strs);

  zx_free_simple_elems(c, x->Audience, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_ProxyRestriction) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_ProxyRestriction_s* zxmd_NEW_sa_ProxyRestriction(struct zx_ctx* c)
{
  struct zxmd_sa_ProxyRestriction_s* x = ZX_ZALLOC(c, struct zxmd_sa_ProxyRestriction_s);
  x->gg.g.tok = zxmd_sa_ProxyRestriction_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_ProxyRestriction) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Audience, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_ProxyRestriction) */

int zxmd_WALK_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zxmd_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_Subject
#define EL_STRUCT zxmd_sa_Subject_s
#define EL_NS     sa
#define EL_TAG    Subject

/* FUNC(zxmd_DUP_STRS_sa_Subject) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_BaseID(c, e);
  }
  {
      struct zxmd_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_NameID(c, e);
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_EncryptedID(c, e);
  }
  {
      struct zxmd_sa_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zxmd_sa_SubjectConfirmation_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_SubjectConfirmation(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_Subject) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_Subject_s* zxmd_DEEP_CLONE_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x, int dup_strs)
{
  x = (struct zxmd_sa_Subject_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_Subject_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_sa_BaseID_s* e;
      struct zxmd_sa_BaseID_s* en;
      struct zxmd_sa_BaseID_s* enn;
      for (enn = 0, e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_BaseID(c, e, dup_strs);
	  if (!enn)
	      x->BaseID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_NameID_s* e;
      struct zxmd_sa_NameID_s* en;
      struct zxmd_sa_NameID_s* enn;
      for (enn = 0, e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_NameID(c, e, dup_strs);
	  if (!enn)
	      x->NameID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      struct zxmd_sa_EncryptedID_s* en;
      struct zxmd_sa_EncryptedID_s* enn;
      for (enn = 0, e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_EncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_SubjectConfirmation_s* e;
      struct zxmd_sa_SubjectConfirmation_s* en;
      struct zxmd_sa_SubjectConfirmation_s* enn;
      for (enn = 0, e = x->SubjectConfirmation; e; e = (struct zxmd_sa_SubjectConfirmation_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_SubjectConfirmation(c, e, dup_strs);
	  if (!enn)
	      x->SubjectConfirmation = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_Subject) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_sa_BaseID_s* e;
      struct zxmd_sa_BaseID_s* en;
      for (e = x->BaseID; e; e = en) {
	  en = (struct zxmd_sa_BaseID_s*)e->gg.g.n;
	  zxmd_FREE_sa_BaseID(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_NameID_s* e;
      struct zxmd_sa_NameID_s* en;
      for (e = x->NameID; e; e = en) {
	  en = (struct zxmd_sa_NameID_s*)e->gg.g.n;
	  zxmd_FREE_sa_NameID(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      struct zxmd_sa_EncryptedID_s* en;
      for (e = x->EncryptedID; e; e = en) {
	  en = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n;
	  zxmd_FREE_sa_EncryptedID(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_SubjectConfirmation_s* e;
      struct zxmd_sa_SubjectConfirmation_s* en;
      for (e = x->SubjectConfirmation; e; e = en) {
	  en = (struct zxmd_sa_SubjectConfirmation_s*)e->gg.g.n;
	  zxmd_FREE_sa_SubjectConfirmation(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_Subject) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_Subject_s* zxmd_NEW_sa_Subject(struct zx_ctx* c)
{
  struct zxmd_sa_Subject_s* x = ZX_ZALLOC(c, struct zxmd_sa_Subject_s);
  x->gg.g.tok = zxmd_sa_Subject_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_Subject) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_BaseID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_NameID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_EncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zxmd_sa_SubjectConfirmation_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_SubjectConfirmation(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_Subject) */

int zxmd_WALK_WO_sa_Subject(struct zx_ctx* c, struct zxmd_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_SubjectConfirmation
#define EL_STRUCT zxmd_sa_SubjectConfirmation_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmation

/* FUNC(zxmd_DUP_STRS_sa_SubjectConfirmation) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Method);

  {
      struct zxmd_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_BaseID(c, e);
  }
  {
      struct zxmd_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_NameID(c, e);
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_EncryptedID(c, e);
  }
  {
      struct zxmd_sa_SubjectConfirmationData_s* e;
      for (e = x->SubjectConfirmationData; e; e = (struct zxmd_sa_SubjectConfirmationData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_sa_SubjectConfirmationData(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_sa_SubjectConfirmation) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_SubjectConfirmation_s* zxmd_DEEP_CLONE_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x, int dup_strs)
{
  x = (struct zxmd_sa_SubjectConfirmation_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_SubjectConfirmation_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Method = zx_clone_attr(c, x->Method);

  {
      struct zxmd_sa_BaseID_s* e;
      struct zxmd_sa_BaseID_s* en;
      struct zxmd_sa_BaseID_s* enn;
      for (enn = 0, e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_BaseID(c, e, dup_strs);
	  if (!enn)
	      x->BaseID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_NameID_s* e;
      struct zxmd_sa_NameID_s* en;
      struct zxmd_sa_NameID_s* enn;
      for (enn = 0, e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_NameID(c, e, dup_strs);
	  if (!enn)
	      x->NameID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      struct zxmd_sa_EncryptedID_s* en;
      struct zxmd_sa_EncryptedID_s* enn;
      for (enn = 0, e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_EncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_sa_SubjectConfirmationData_s* e;
      struct zxmd_sa_SubjectConfirmationData_s* en;
      struct zxmd_sa_SubjectConfirmationData_s* enn;
      for (enn = 0, e = x->SubjectConfirmationData; e; e = (struct zxmd_sa_SubjectConfirmationData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_sa_SubjectConfirmationData(c, e, dup_strs);
	  if (!enn)
	      x->SubjectConfirmationData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_sa_SubjectConfirmation) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Method, free_strs);

  {
      struct zxmd_sa_BaseID_s* e;
      struct zxmd_sa_BaseID_s* en;
      for (e = x->BaseID; e; e = en) {
	  en = (struct zxmd_sa_BaseID_s*)e->gg.g.n;
	  zxmd_FREE_sa_BaseID(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_NameID_s* e;
      struct zxmd_sa_NameID_s* en;
      for (e = x->NameID; e; e = en) {
	  en = (struct zxmd_sa_NameID_s*)e->gg.g.n;
	  zxmd_FREE_sa_NameID(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      struct zxmd_sa_EncryptedID_s* en;
      for (e = x->EncryptedID; e; e = en) {
	  en = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n;
	  zxmd_FREE_sa_EncryptedID(c, e, free_strs);
      }
  }
  {
      struct zxmd_sa_SubjectConfirmationData_s* e;
      struct zxmd_sa_SubjectConfirmationData_s* en;
      for (e = x->SubjectConfirmationData; e; e = en) {
	  en = (struct zxmd_sa_SubjectConfirmationData_s*)e->gg.g.n;
	  zxmd_FREE_sa_SubjectConfirmationData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_SubjectConfirmation) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_SubjectConfirmation_s* zxmd_NEW_sa_SubjectConfirmation(struct zx_ctx* c)
{
  struct zxmd_sa_SubjectConfirmation_s* x = ZX_ZALLOC(c, struct zxmd_sa_SubjectConfirmation_s);
  x->gg.g.tok = zxmd_sa_SubjectConfirmation_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_SubjectConfirmation) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zxmd_sa_BaseID_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_BaseID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zxmd_sa_NameID_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_NameID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zxmd_sa_EncryptedID_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_EncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_sa_SubjectConfirmationData_s* e;
      for (e = x->SubjectConfirmationData; e; e = (struct zxmd_sa_SubjectConfirmationData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_sa_SubjectConfirmationData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_SubjectConfirmation) */

int zxmd_WALK_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_SubjectConfirmationData
#define EL_STRUCT zxmd_sa_SubjectConfirmationData_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmationData

/* FUNC(zxmd_DUP_STRS_sa_SubjectConfirmationData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NotBefore);
  zx_dup_attr(c, x->NotOnOrAfter);
  zx_dup_attr(c, x->Recipient);
  zx_dup_attr(c, x->InResponseTo);
  zx_dup_attr(c, x->Address);


}

/* FUNC(zxmd_DEEP_CLONE_sa_SubjectConfirmationData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_SubjectConfirmationData_s* zxmd_DEEP_CLONE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x, int dup_strs)
{
  x = (struct zxmd_sa_SubjectConfirmationData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_SubjectConfirmationData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NotBefore = zx_clone_attr(c, x->NotBefore);
  x->NotOnOrAfter = zx_clone_attr(c, x->NotOnOrAfter);
  x->Recipient = zx_clone_attr(c, x->Recipient);
  x->InResponseTo = zx_clone_attr(c, x->InResponseTo);
  x->Address = zx_clone_attr(c, x->Address);


  return x;
}

/* FUNC(zxmd_FREE_sa_SubjectConfirmationData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NotBefore, free_strs);
  zx_free_attr(c, x->NotOnOrAfter, free_strs);
  zx_free_attr(c, x->Recipient, free_strs);
  zx_free_attr(c, x->InResponseTo, free_strs);
  zx_free_attr(c, x->Address, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_SubjectConfirmationData) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_SubjectConfirmationData_s* zxmd_NEW_sa_SubjectConfirmationData(struct zx_ctx* c)
{
  struct zxmd_sa_SubjectConfirmationData_s* x = ZX_ZALLOC(c, struct zxmd_sa_SubjectConfirmationData_s);
  x->gg.g.tok = zxmd_sa_SubjectConfirmationData_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_SubjectConfirmationData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_sa_SubjectConfirmationData) */

int zxmd_WALK_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zxmd_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_SubjectLocality
#define EL_STRUCT zxmd_sa_SubjectLocality_s
#define EL_NS     sa
#define EL_TAG    SubjectLocality

/* FUNC(zxmd_DUP_STRS_sa_SubjectLocality) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Address);
  zx_dup_attr(c, x->DNSName);


}

/* FUNC(zxmd_DEEP_CLONE_sa_SubjectLocality) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_SubjectLocality_s* zxmd_DEEP_CLONE_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x, int dup_strs)
{
  x = (struct zxmd_sa_SubjectLocality_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_SubjectLocality_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Address = zx_clone_attr(c, x->Address);
  x->DNSName = zx_clone_attr(c, x->DNSName);


  return x;
}

/* FUNC(zxmd_FREE_sa_SubjectLocality) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Address, free_strs);
  zx_free_attr(c, x->DNSName, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_SubjectLocality) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_SubjectLocality_s* zxmd_NEW_sa_SubjectLocality(struct zx_ctx* c)
{
  struct zxmd_sa_SubjectLocality_s* x = ZX_ZALLOC(c, struct zxmd_sa_SubjectLocality_s);
  x->gg.g.tok = zxmd_sa_SubjectLocality_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_SubjectLocality) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_sa_SubjectLocality) */

int zxmd_WALK_WO_sa_SubjectLocality(struct zx_ctx* c, struct zxmd_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   sa_TestElem
#define EL_STRUCT zxmd_sa_TestElem_s
#define EL_NS     sa
#define EL_TAG    TestElem

/* FUNC(zxmd_DUP_STRS_sa_TestElem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->AttributeValue);

}

/* FUNC(zxmd_DEEP_CLONE_sa_TestElem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_sa_TestElem_s* zxmd_DEEP_CLONE_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x, int dup_strs)
{
  x = (struct zxmd_sa_TestElem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_sa_TestElem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->AttributeValue = zx_deep_clone_simple_elems(c,x->AttributeValue, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_sa_TestElem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->AttributeValue, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_sa_TestElem) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_sa_TestElem_s* zxmd_NEW_sa_TestElem(struct zx_ctx* c)
{
  struct zxmd_sa_TestElem_s* x = ZX_ZALLOC(c, struct zxmd_sa_TestElem_s);
  x->gg.g.tok = zxmd_sa_TestElem_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_sa_TestElem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->AttributeValue, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_sa_TestElem) */

int zxmd_WALK_WO_sa_TestElem(struct zx_ctx* c, struct zxmd_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_AgreementMethod
#define EL_STRUCT zxmd_xenc_AgreementMethod_s
#define EL_NS     xenc
#define EL_TAG    AgreementMethod

/* FUNC(zxmd_DUP_STRS_xenc_AgreementMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->KA_Nonce);
  {
      struct zxmd_xenc_OriginatorKeyInfo_s* e;
      for (e = x->OriginatorKeyInfo; e; e = (struct zxmd_xenc_OriginatorKeyInfo_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_OriginatorKeyInfo(c, e);
  }
  {
      struct zxmd_xenc_RecipientKeyInfo_s* e;
      for (e = x->RecipientKeyInfo; e; e = (struct zxmd_xenc_RecipientKeyInfo_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_RecipientKeyInfo(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_xenc_AgreementMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_AgreementMethod_s* zxmd_DEEP_CLONE_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_AgreementMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_AgreementMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->KA_Nonce = zx_deep_clone_simple_elems(c,x->KA_Nonce, dup_strs);
  {
      struct zxmd_xenc_OriginatorKeyInfo_s* e;
      struct zxmd_xenc_OriginatorKeyInfo_s* en;
      struct zxmd_xenc_OriginatorKeyInfo_s* enn;
      for (enn = 0, e = x->OriginatorKeyInfo; e; e = (struct zxmd_xenc_OriginatorKeyInfo_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_OriginatorKeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->OriginatorKeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_RecipientKeyInfo_s* e;
      struct zxmd_xenc_RecipientKeyInfo_s* en;
      struct zxmd_xenc_RecipientKeyInfo_s* enn;
      for (enn = 0, e = x->RecipientKeyInfo; e; e = (struct zxmd_xenc_RecipientKeyInfo_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_RecipientKeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->RecipientKeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_xenc_AgreementMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->KA_Nonce, free_strs);
  {
      struct zxmd_xenc_OriginatorKeyInfo_s* e;
      struct zxmd_xenc_OriginatorKeyInfo_s* en;
      for (e = x->OriginatorKeyInfo; e; e = en) {
	  en = (struct zxmd_xenc_OriginatorKeyInfo_s*)e->gg.g.n;
	  zxmd_FREE_xenc_OriginatorKeyInfo(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_RecipientKeyInfo_s* e;
      struct zxmd_xenc_RecipientKeyInfo_s* en;
      for (e = x->RecipientKeyInfo; e; e = en) {
	  en = (struct zxmd_xenc_RecipientKeyInfo_s*)e->gg.g.n;
	  zxmd_FREE_xenc_RecipientKeyInfo(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_AgreementMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_AgreementMethod_s* zxmd_NEW_xenc_AgreementMethod(struct zx_ctx* c)
{
  struct zxmd_xenc_AgreementMethod_s* x = ZX_ZALLOC(c, struct zxmd_xenc_AgreementMethod_s);
  x->gg.g.tok = zxmd_xenc_AgreementMethod_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_AgreementMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->KA_Nonce, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_xenc_OriginatorKeyInfo_s* e;
      for (e = x->OriginatorKeyInfo; e; e = (struct zxmd_xenc_OriginatorKeyInfo_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_OriginatorKeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_RecipientKeyInfo_s* e;
      for (e = x->RecipientKeyInfo; e; e = (struct zxmd_xenc_RecipientKeyInfo_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_RecipientKeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_AgreementMethod) */

int zxmd_WALK_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zxmd_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_CipherData
#define EL_STRUCT zxmd_xenc_CipherData_s
#define EL_NS     xenc
#define EL_TAG    CipherData

/* FUNC(zxmd_DUP_STRS_xenc_CipherData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->CipherValue);
  {
      struct zxmd_xenc_CipherReference_s* e;
      for (e = x->CipherReference; e; e = (struct zxmd_xenc_CipherReference_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_CipherReference(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_xenc_CipherData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_CipherData_s* zxmd_DEEP_CLONE_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_CipherData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_CipherData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->CipherValue = zx_deep_clone_simple_elems(c,x->CipherValue, dup_strs);
  {
      struct zxmd_xenc_CipherReference_s* e;
      struct zxmd_xenc_CipherReference_s* en;
      struct zxmd_xenc_CipherReference_s* enn;
      for (enn = 0, e = x->CipherReference; e; e = (struct zxmd_xenc_CipherReference_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_CipherReference(c, e, dup_strs);
	  if (!enn)
	      x->CipherReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_xenc_CipherData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->CipherValue, free_strs);
  {
      struct zxmd_xenc_CipherReference_s* e;
      struct zxmd_xenc_CipherReference_s* en;
      for (e = x->CipherReference; e; e = en) {
	  en = (struct zxmd_xenc_CipherReference_s*)e->gg.g.n;
	  zxmd_FREE_xenc_CipherReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_CipherData) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_CipherData_s* zxmd_NEW_xenc_CipherData(struct zx_ctx* c)
{
  struct zxmd_xenc_CipherData_s* x = ZX_ZALLOC(c, struct zxmd_xenc_CipherData_s);
  x->gg.g.tok = zxmd_xenc_CipherData_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_CipherData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->CipherValue, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_xenc_CipherReference_s* e;
      for (e = x->CipherReference; e; e = (struct zxmd_xenc_CipherReference_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_CipherReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_CipherData) */

int zxmd_WALK_WO_xenc_CipherData(struct zx_ctx* c, struct zxmd_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_CipherReference
#define EL_STRUCT zxmd_xenc_CipherReference_s
#define EL_NS     xenc
#define EL_TAG    CipherReference

/* FUNC(zxmd_DUP_STRS_xenc_CipherReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);

  {
      struct zxmd_xenc_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_xenc_Transforms_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_Transforms(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_xenc_CipherReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_CipherReference_s* zxmd_DEEP_CLONE_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_CipherReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_CipherReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);

  {
      struct zxmd_xenc_Transforms_s* e;
      struct zxmd_xenc_Transforms_s* en;
      struct zxmd_xenc_Transforms_s* enn;
      for (enn = 0, e = x->Transforms; e; e = (struct zxmd_xenc_Transforms_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_Transforms(c, e, dup_strs);
	  if (!enn)
	      x->Transforms = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_xenc_CipherReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);

  {
      struct zxmd_xenc_Transforms_s* e;
      struct zxmd_xenc_Transforms_s* en;
      for (e = x->Transforms; e; e = en) {
	  en = (struct zxmd_xenc_Transforms_s*)e->gg.g.n;
	  zxmd_FREE_xenc_Transforms(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_CipherReference) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_CipherReference_s* zxmd_NEW_xenc_CipherReference(struct zx_ctx* c)
{
  struct zxmd_xenc_CipherReference_s* x = ZX_ZALLOC(c, struct zxmd_xenc_CipherReference_s);
  x->gg.g.tok = zxmd_xenc_CipherReference_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_CipherReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_xenc_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zxmd_xenc_Transforms_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_Transforms(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_CipherReference) */

int zxmd_WALK_WO_xenc_CipherReference(struct zx_ctx* c, struct zxmd_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_DataReference
#define EL_STRUCT zxmd_xenc_DataReference_s
#define EL_NS     xenc
#define EL_TAG    DataReference

/* FUNC(zxmd_DUP_STRS_xenc_DataReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);


}

/* FUNC(zxmd_DEEP_CLONE_xenc_DataReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_DataReference_s* zxmd_DEEP_CLONE_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_DataReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_DataReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);


  return x;
}

/* FUNC(zxmd_FREE_xenc_DataReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_DataReference) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_DataReference_s* zxmd_NEW_xenc_DataReference(struct zx_ctx* c)
{
  struct zxmd_xenc_DataReference_s* x = ZX_ZALLOC(c, struct zxmd_xenc_DataReference_s);
  x->gg.g.tok = zxmd_xenc_DataReference_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_DataReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_xenc_DataReference) */

int zxmd_WALK_WO_xenc_DataReference(struct zx_ctx* c, struct zxmd_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_EncryptedData
#define EL_STRUCT zxmd_xenc_EncryptedData_s
#define EL_NS     xenc
#define EL_TAG    EncryptedData

/* FUNC(zxmd_DUP_STRS_xenc_EncryptedData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->Type);
  zx_dup_attr(c, x->MimeType);
  zx_dup_attr(c, x->Encoding);

  {
      struct zxmd_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptionMethod(c, e);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_KeyInfo(c, e);
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_CipherData(c, e);
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptionProperties(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_xenc_EncryptedData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_EncryptedData_s* zxmd_DEEP_CLONE_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_EncryptedData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_EncryptedData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->Type = zx_clone_attr(c, x->Type);
  x->MimeType = zx_clone_attr(c, x->MimeType);
  x->Encoding = zx_clone_attr(c, x->Encoding);

  {
      struct zxmd_xenc_EncryptionMethod_s* e;
      struct zxmd_xenc_EncryptionMethod_s* en;
      struct zxmd_xenc_EncryptionMethod_s* enn;
      for (enn = 0, e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptionMethod(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      struct zxmd_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      struct zxmd_xenc_CipherData_s* en;
      struct zxmd_xenc_CipherData_s* enn;
      for (enn = 0, e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_CipherData(c, e, dup_strs);
	  if (!enn)
	      x->CipherData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      struct zxmd_xenc_EncryptionProperties_s* en;
      struct zxmd_xenc_EncryptionProperties_s* enn;
      for (enn = 0, e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptionProperties(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionProperties = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_xenc_EncryptedData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->Type, free_strs);
  zx_free_attr(c, x->MimeType, free_strs);
  zx_free_attr(c, x->Encoding, free_strs);

  {
      struct zxmd_xenc_EncryptionMethod_s* e;
      struct zxmd_xenc_EncryptionMethod_s* en;
      for (e = x->EncryptionMethod; e; e = en) {
	  en = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptionMethod(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n;
	  zxmd_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      struct zxmd_xenc_CipherData_s* en;
      for (e = x->CipherData; e; e = en) {
	  en = (struct zxmd_xenc_CipherData_s*)e->gg.g.n;
	  zxmd_FREE_xenc_CipherData(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      struct zxmd_xenc_EncryptionProperties_s* en;
      for (e = x->EncryptionProperties; e; e = en) {
	  en = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptionProperties(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_EncryptedData) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_EncryptedData_s* zxmd_NEW_xenc_EncryptedData(struct zx_ctx* c)
{
  struct zxmd_xenc_EncryptedData_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptedData_s);
  x->gg.g.tok = zxmd_xenc_EncryptedData_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_EncryptedData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptionMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_CipherData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptionProperties(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_EncryptedData) */

int zxmd_WALK_WO_xenc_EncryptedData(struct zx_ctx* c, struct zxmd_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_EncryptedKey
#define EL_STRUCT zxmd_xenc_EncryptedKey_s
#define EL_NS     xenc
#define EL_TAG    EncryptedKey

/* FUNC(zxmd_DUP_STRS_xenc_EncryptedKey) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->Type);
  zx_dup_attr(c, x->MimeType);
  zx_dup_attr(c, x->Encoding);
  zx_dup_attr(c, x->Recipient);

  {
      struct zxmd_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptionMethod(c, e);
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_KeyInfo(c, e);
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_CipherData(c, e);
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptionProperties(c, e);
  }
  {
      struct zxmd_xenc_ReferenceList_s* e;
      for (e = x->ReferenceList; e; e = (struct zxmd_xenc_ReferenceList_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_ReferenceList(c, e);
  }
  zx_dup_strs_simple_elems(c, x->CarriedKeyName);

}

/* FUNC(zxmd_DEEP_CLONE_xenc_EncryptedKey) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_EncryptedKey_s* zxmd_DEEP_CLONE_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_EncryptedKey_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_EncryptedKey_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->Type = zx_clone_attr(c, x->Type);
  x->MimeType = zx_clone_attr(c, x->MimeType);
  x->Encoding = zx_clone_attr(c, x->Encoding);
  x->Recipient = zx_clone_attr(c, x->Recipient);

  {
      struct zxmd_xenc_EncryptionMethod_s* e;
      struct zxmd_xenc_EncryptionMethod_s* en;
      struct zxmd_xenc_EncryptionMethod_s* enn;
      for (enn = 0, e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptionMethod(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      struct zxmd_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      struct zxmd_xenc_CipherData_s* en;
      struct zxmd_xenc_CipherData_s* enn;
      for (enn = 0, e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_CipherData(c, e, dup_strs);
	  if (!enn)
	      x->CipherData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      struct zxmd_xenc_EncryptionProperties_s* en;
      struct zxmd_xenc_EncryptionProperties_s* enn;
      for (enn = 0, e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptionProperties(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionProperties = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_ReferenceList_s* e;
      struct zxmd_xenc_ReferenceList_s* en;
      struct zxmd_xenc_ReferenceList_s* enn;
      for (enn = 0, e = x->ReferenceList; e; e = (struct zxmd_xenc_ReferenceList_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_ReferenceList(c, e, dup_strs);
	  if (!enn)
	      x->ReferenceList = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->CarriedKeyName = zx_deep_clone_simple_elems(c,x->CarriedKeyName, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_xenc_EncryptedKey) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->Type, free_strs);
  zx_free_attr(c, x->MimeType, free_strs);
  zx_free_attr(c, x->Encoding, free_strs);
  zx_free_attr(c, x->Recipient, free_strs);

  {
      struct zxmd_xenc_EncryptionMethod_s* e;
      struct zxmd_xenc_EncryptionMethod_s* en;
      for (e = x->EncryptionMethod; e; e = en) {
	  en = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptionMethod(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      struct zxmd_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n;
	  zxmd_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      struct zxmd_xenc_CipherData_s* en;
      for (e = x->CipherData; e; e = en) {
	  en = (struct zxmd_xenc_CipherData_s*)e->gg.g.n;
	  zxmd_FREE_xenc_CipherData(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      struct zxmd_xenc_EncryptionProperties_s* en;
      for (e = x->EncryptionProperties; e; e = en) {
	  en = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptionProperties(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_ReferenceList_s* e;
      struct zxmd_xenc_ReferenceList_s* en;
      for (e = x->ReferenceList; e; e = en) {
	  en = (struct zxmd_xenc_ReferenceList_s*)e->gg.g.n;
	  zxmd_FREE_xenc_ReferenceList(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->CarriedKeyName, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_EncryptedKey) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_EncryptedKey_s* zxmd_NEW_xenc_EncryptedKey(struct zx_ctx* c)
{
  struct zxmd_xenc_EncryptedKey_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptedKey_s);
  x->gg.g.tok = zxmd_xenc_EncryptedKey_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_EncryptedKey) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zxmd_xenc_EncryptionMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptionMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zxmd_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zxmd_xenc_CipherData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_CipherData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zxmd_xenc_EncryptionProperties_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptionProperties(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_ReferenceList_s* e;
      for (e = x->ReferenceList; e; e = (struct zxmd_xenc_ReferenceList_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_ReferenceList(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->CarriedKeyName, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_EncryptedKey) */

int zxmd_WALK_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zxmd_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_EncryptionMethod
#define EL_STRUCT zxmd_xenc_EncryptionMethod_s
#define EL_NS     xenc
#define EL_TAG    EncryptionMethod

/* FUNC(zxmd_DUP_STRS_xenc_EncryptionMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->KeySize);
  zx_dup_strs_simple_elems(c, x->OAEPparams);

}

/* FUNC(zxmd_DEEP_CLONE_xenc_EncryptionMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_EncryptionMethod_s* zxmd_DEEP_CLONE_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_EncryptionMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_EncryptionMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->KeySize = zx_deep_clone_simple_elems(c,x->KeySize, dup_strs);
  x->OAEPparams = zx_deep_clone_simple_elems(c,x->OAEPparams, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_xenc_EncryptionMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->KeySize, free_strs);
  zx_free_simple_elems(c, x->OAEPparams, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_EncryptionMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_EncryptionMethod_s* zxmd_NEW_xenc_EncryptionMethod(struct zx_ctx* c)
{
  struct zxmd_xenc_EncryptionMethod_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptionMethod_s);
  x->gg.g.tok = zxmd_xenc_EncryptionMethod_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_EncryptionMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->KeySize, ctx, callback);
  if (ret)
    return ret;
  ret = zx_walk_so_simple_elems(c, x->OAEPparams, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_EncryptionMethod) */

int zxmd_WALK_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zxmd_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_EncryptionProperties
#define EL_STRUCT zxmd_xenc_EncryptionProperties_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperties

/* FUNC(zxmd_DUP_STRS_xenc_EncryptionProperties) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zxmd_xenc_EncryptionProperty_s* e;
      for (e = x->EncryptionProperty; e; e = (struct zxmd_xenc_EncryptionProperty_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_EncryptionProperty(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_xenc_EncryptionProperties) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_EncryptionProperties_s* zxmd_DEEP_CLONE_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_EncryptionProperties_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_EncryptionProperties_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zxmd_xenc_EncryptionProperty_s* e;
      struct zxmd_xenc_EncryptionProperty_s* en;
      struct zxmd_xenc_EncryptionProperty_s* enn;
      for (enn = 0, e = x->EncryptionProperty; e; e = (struct zxmd_xenc_EncryptionProperty_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_EncryptionProperty(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionProperty = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_xenc_EncryptionProperties) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zxmd_xenc_EncryptionProperty_s* e;
      struct zxmd_xenc_EncryptionProperty_s* en;
      for (e = x->EncryptionProperty; e; e = en) {
	  en = (struct zxmd_xenc_EncryptionProperty_s*)e->gg.g.n;
	  zxmd_FREE_xenc_EncryptionProperty(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_EncryptionProperties) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_EncryptionProperties_s* zxmd_NEW_xenc_EncryptionProperties(struct zx_ctx* c)
{
  struct zxmd_xenc_EncryptionProperties_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptionProperties_s);
  x->gg.g.tok = zxmd_xenc_EncryptionProperties_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_EncryptionProperties) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_xenc_EncryptionProperty_s* e;
      for (e = x->EncryptionProperty; e; e = (struct zxmd_xenc_EncryptionProperty_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_EncryptionProperty(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_EncryptionProperties) */

int zxmd_WALK_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_EncryptionProperty
#define EL_STRUCT zxmd_xenc_EncryptionProperty_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperty

/* FUNC(zxmd_DUP_STRS_xenc_EncryptionProperty) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Target);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zxmd_DEEP_CLONE_xenc_EncryptionProperty) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_EncryptionProperty_s* zxmd_DEEP_CLONE_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_EncryptionProperty_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_EncryptionProperty_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Target = zx_clone_attr(c, x->Target);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zxmd_FREE_xenc_EncryptionProperty) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Target, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_EncryptionProperty) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_EncryptionProperty_s* zxmd_NEW_xenc_EncryptionProperty(struct zx_ctx* c)
{
  struct zxmd_xenc_EncryptionProperty_s* x = ZX_ZALLOC(c, struct zxmd_xenc_EncryptionProperty_s);
  x->gg.g.tok = zxmd_xenc_EncryptionProperty_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_EncryptionProperty) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_xenc_EncryptionProperty) */

int zxmd_WALK_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zxmd_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_KeyReference
#define EL_STRUCT zxmd_xenc_KeyReference_s
#define EL_NS     xenc
#define EL_TAG    KeyReference

/* FUNC(zxmd_DUP_STRS_xenc_KeyReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);


}

/* FUNC(zxmd_DEEP_CLONE_xenc_KeyReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_KeyReference_s* zxmd_DEEP_CLONE_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_KeyReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_KeyReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);


  return x;
}

/* FUNC(zxmd_FREE_xenc_KeyReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_KeyReference) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_KeyReference_s* zxmd_NEW_xenc_KeyReference(struct zx_ctx* c)
{
  struct zxmd_xenc_KeyReference_s* x = ZX_ZALLOC(c, struct zxmd_xenc_KeyReference_s);
  x->gg.g.tok = zxmd_xenc_KeyReference_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_KeyReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_xenc_KeyReference) */

int zxmd_WALK_WO_xenc_KeyReference(struct zx_ctx* c, struct zxmd_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_OriginatorKeyInfo
#define EL_STRUCT zxmd_xenc_OriginatorKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    OriginatorKeyInfo

/* FUNC(zxmd_DUP_STRS_xenc_OriginatorKeyInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  zx_dup_strs_simple_elems(c, x->KeyName);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_KeyValue(c, e);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_RetrievalMethod(c, e);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_X509Data(c, e);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_PGPData(c, e);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_SPKIData(c, e);
  }
  zx_dup_strs_simple_elems(c, x->MgmtData);

}

/* FUNC(zxmd_DEEP_CLONE_xenc_OriginatorKeyInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_DEEP_CLONE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_OriginatorKeyInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_OriginatorKeyInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  x->KeyName = zx_deep_clone_simple_elems(c,x->KeyName, dup_strs);
  {
      struct zxmd_ds_KeyValue_s* e;
      struct zxmd_ds_KeyValue_s* en;
      struct zxmd_ds_KeyValue_s* enn;
      for (enn = 0, e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_KeyValue(c, e, dup_strs);
	  if (!enn)
	      x->KeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      struct zxmd_ds_RetrievalMethod_s* en;
      struct zxmd_ds_RetrievalMethod_s* enn;
      for (enn = 0, e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_RetrievalMethod(c, e, dup_strs);
	  if (!enn)
	      x->RetrievalMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      struct zxmd_ds_X509Data_s* en;
      struct zxmd_ds_X509Data_s* enn;
      for (enn = 0, e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_X509Data(c, e, dup_strs);
	  if (!enn)
	      x->X509Data = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      struct zxmd_ds_PGPData_s* en;
      struct zxmd_ds_PGPData_s* enn;
      for (enn = 0, e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_PGPData(c, e, dup_strs);
	  if (!enn)
	      x->PGPData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      struct zxmd_ds_SPKIData_s* en;
      struct zxmd_ds_SPKIData_s* enn;
      for (enn = 0, e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_SPKIData(c, e, dup_strs);
	  if (!enn)
	      x->SPKIData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->MgmtData = zx_deep_clone_simple_elems(c,x->MgmtData, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_xenc_OriginatorKeyInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  zx_free_simple_elems(c, x->KeyName, free_strs);
  {
      struct zxmd_ds_KeyValue_s* e;
      struct zxmd_ds_KeyValue_s* en;
      for (e = x->KeyValue; e; e = en) {
	  en = (struct zxmd_ds_KeyValue_s*)e->gg.g.n;
	  zxmd_FREE_ds_KeyValue(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      struct zxmd_ds_RetrievalMethod_s* en;
      for (e = x->RetrievalMethod; e; e = en) {
	  en = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n;
	  zxmd_FREE_ds_RetrievalMethod(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      struct zxmd_ds_X509Data_s* en;
      for (e = x->X509Data; e; e = en) {
	  en = (struct zxmd_ds_X509Data_s*)e->gg.g.n;
	  zxmd_FREE_ds_X509Data(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      struct zxmd_ds_PGPData_s* en;
      for (e = x->PGPData; e; e = en) {
	  en = (struct zxmd_ds_PGPData_s*)e->gg.g.n;
	  zxmd_FREE_ds_PGPData(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      struct zxmd_ds_SPKIData_s* en;
      for (e = x->SPKIData; e; e = en) {
	  en = (struct zxmd_ds_SPKIData_s*)e->gg.g.n;
	  zxmd_FREE_ds_SPKIData(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->MgmtData, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_OriginatorKeyInfo) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_OriginatorKeyInfo_s* zxmd_NEW_xenc_OriginatorKeyInfo(struct zx_ctx* c)
{
  struct zxmd_xenc_OriginatorKeyInfo_s* x = ZX_ZALLOC(c, struct zxmd_xenc_OriginatorKeyInfo_s);
  x->gg.g.tok = zxmd_xenc_OriginatorKeyInfo_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_OriginatorKeyInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->KeyName, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_KeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_RetrievalMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_X509Data(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_PGPData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_SPKIData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->MgmtData, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_OriginatorKeyInfo) */

int zxmd_WALK_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zxmd_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_RecipientKeyInfo
#define EL_STRUCT zxmd_xenc_RecipientKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    RecipientKeyInfo

/* FUNC(zxmd_DUP_STRS_xenc_RecipientKeyInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  zx_dup_strs_simple_elems(c, x->KeyName);
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_KeyValue(c, e);
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_RetrievalMethod(c, e);
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_X509Data(c, e);
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_PGPData(c, e);
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_SPKIData(c, e);
  }
  zx_dup_strs_simple_elems(c, x->MgmtData);

}

/* FUNC(zxmd_DEEP_CLONE_xenc_RecipientKeyInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_RecipientKeyInfo_s* zxmd_DEEP_CLONE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_RecipientKeyInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_RecipientKeyInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  x->KeyName = zx_deep_clone_simple_elems(c,x->KeyName, dup_strs);
  {
      struct zxmd_ds_KeyValue_s* e;
      struct zxmd_ds_KeyValue_s* en;
      struct zxmd_ds_KeyValue_s* enn;
      for (enn = 0, e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_KeyValue(c, e, dup_strs);
	  if (!enn)
	      x->KeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      struct zxmd_ds_RetrievalMethod_s* en;
      struct zxmd_ds_RetrievalMethod_s* enn;
      for (enn = 0, e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_RetrievalMethod(c, e, dup_strs);
	  if (!enn)
	      x->RetrievalMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      struct zxmd_ds_X509Data_s* en;
      struct zxmd_ds_X509Data_s* enn;
      for (enn = 0, e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_X509Data(c, e, dup_strs);
	  if (!enn)
	      x->X509Data = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      struct zxmd_ds_PGPData_s* en;
      struct zxmd_ds_PGPData_s* enn;
      for (enn = 0, e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_PGPData(c, e, dup_strs);
	  if (!enn)
	      x->PGPData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      struct zxmd_ds_SPKIData_s* en;
      struct zxmd_ds_SPKIData_s* enn;
      for (enn = 0, e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_SPKIData(c, e, dup_strs);
	  if (!enn)
	      x->SPKIData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->MgmtData = zx_deep_clone_simple_elems(c,x->MgmtData, dup_strs);

  return x;
}

/* FUNC(zxmd_FREE_xenc_RecipientKeyInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  zx_free_simple_elems(c, x->KeyName, free_strs);
  {
      struct zxmd_ds_KeyValue_s* e;
      struct zxmd_ds_KeyValue_s* en;
      for (e = x->KeyValue; e; e = en) {
	  en = (struct zxmd_ds_KeyValue_s*)e->gg.g.n;
	  zxmd_FREE_ds_KeyValue(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      struct zxmd_ds_RetrievalMethod_s* en;
      for (e = x->RetrievalMethod; e; e = en) {
	  en = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n;
	  zxmd_FREE_ds_RetrievalMethod(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      struct zxmd_ds_X509Data_s* en;
      for (e = x->X509Data; e; e = en) {
	  en = (struct zxmd_ds_X509Data_s*)e->gg.g.n;
	  zxmd_FREE_ds_X509Data(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      struct zxmd_ds_PGPData_s* en;
      for (e = x->PGPData; e; e = en) {
	  en = (struct zxmd_ds_PGPData_s*)e->gg.g.n;
	  zxmd_FREE_ds_PGPData(c, e, free_strs);
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      struct zxmd_ds_SPKIData_s* en;
      for (e = x->SPKIData; e; e = en) {
	  en = (struct zxmd_ds_SPKIData_s*)e->gg.g.n;
	  zxmd_FREE_ds_SPKIData(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->MgmtData, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_RecipientKeyInfo) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_RecipientKeyInfo_s* zxmd_NEW_xenc_RecipientKeyInfo(struct zx_ctx* c)
{
  struct zxmd_xenc_RecipientKeyInfo_s* x = ZX_ZALLOC(c, struct zxmd_xenc_RecipientKeyInfo_s);
  x->gg.g.tok = zxmd_xenc_RecipientKeyInfo_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_RecipientKeyInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->KeyName, ctx, callback);
  if (ret)
    return ret;
  {
      struct zxmd_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zxmd_ds_KeyValue_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_KeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zxmd_ds_RetrievalMethod_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_RetrievalMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zxmd_ds_X509Data_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_X509Data(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zxmd_ds_PGPData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_PGPData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zxmd_ds_SPKIData_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_SPKIData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->MgmtData, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_RecipientKeyInfo) */

int zxmd_WALK_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zxmd_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_ReferenceList
#define EL_STRUCT zxmd_xenc_ReferenceList_s
#define EL_NS     xenc
#define EL_TAG    ReferenceList

/* FUNC(zxmd_DUP_STRS_xenc_ReferenceList) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_DataReference_s* e;
      for (e = x->DataReference; e; e = (struct zxmd_xenc_DataReference_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_DataReference(c, e);
  }
  {
      struct zxmd_xenc_KeyReference_s* e;
      for (e = x->KeyReference; e; e = (struct zxmd_xenc_KeyReference_s*)e->gg.g.n)
	  zxmd_DUP_STRS_xenc_KeyReference(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_xenc_ReferenceList) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_ReferenceList_s* zxmd_DEEP_CLONE_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_ReferenceList_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_ReferenceList_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_DataReference_s* e;
      struct zxmd_xenc_DataReference_s* en;
      struct zxmd_xenc_DataReference_s* enn;
      for (enn = 0, e = x->DataReference; e; e = (struct zxmd_xenc_DataReference_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_DataReference(c, e, dup_strs);
	  if (!enn)
	      x->DataReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_xenc_KeyReference_s* e;
      struct zxmd_xenc_KeyReference_s* en;
      struct zxmd_xenc_KeyReference_s* enn;
      for (enn = 0, e = x->KeyReference; e; e = (struct zxmd_xenc_KeyReference_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_xenc_KeyReference(c, e, dup_strs);
	  if (!enn)
	      x->KeyReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_xenc_ReferenceList) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_xenc_DataReference_s* e;
      struct zxmd_xenc_DataReference_s* en;
      for (e = x->DataReference; e; e = en) {
	  en = (struct zxmd_xenc_DataReference_s*)e->gg.g.n;
	  zxmd_FREE_xenc_DataReference(c, e, free_strs);
      }
  }
  {
      struct zxmd_xenc_KeyReference_s* e;
      struct zxmd_xenc_KeyReference_s* en;
      for (e = x->KeyReference; e; e = en) {
	  en = (struct zxmd_xenc_KeyReference_s*)e->gg.g.n;
	  zxmd_FREE_xenc_KeyReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_ReferenceList) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_ReferenceList_s* zxmd_NEW_xenc_ReferenceList(struct zx_ctx* c)
{
  struct zxmd_xenc_ReferenceList_s* x = ZX_ZALLOC(c, struct zxmd_xenc_ReferenceList_s);
  x->gg.g.tok = zxmd_xenc_ReferenceList_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_ReferenceList) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_xenc_DataReference_s* e;
      for (e = x->DataReference; e; e = (struct zxmd_xenc_DataReference_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_DataReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_xenc_KeyReference_s* e;
      for (e = x->KeyReference; e; e = (struct zxmd_xenc_KeyReference_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_xenc_KeyReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_ReferenceList) */

int zxmd_WALK_WO_xenc_ReferenceList(struct zx_ctx* c, struct zxmd_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

#define EL_NAME   xenc_Transforms
#define EL_STRUCT zxmd_xenc_Transforms_s
#define EL_NS     xenc
#define EL_TAG    Transforms

/* FUNC(zxmd_DUP_STRS_xenc_Transforms) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n)
	  zxmd_DUP_STRS_ds_Transform(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_xenc_Transforms) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_xenc_Transforms_s* zxmd_DEEP_CLONE_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x, int dup_strs)
{
  x = (struct zxmd_xenc_Transforms_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_xenc_Transforms_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_Transform_s* e;
      struct zxmd_ds_Transform_s* en;
      struct zxmd_ds_Transform_s* enn;
      for (enn = 0, e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_ds_Transform(c, e, dup_strs);
	  if (!enn)
	      x->Transform = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_xenc_Transforms) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_ds_Transform_s* e;
      struct zxmd_ds_Transform_s* en;
      for (e = x->Transform; e; e = en) {
	  en = (struct zxmd_ds_Transform_s*)e->gg.g.n;
	  zxmd_FREE_ds_Transform(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_xenc_Transforms) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_xenc_Transforms_s* zxmd_NEW_xenc_Transforms(struct zx_ctx* c)
{
  struct zxmd_xenc_Transforms_s* x = ZX_ZALLOC(c, struct zxmd_xenc_Transforms_s);
  x->gg.g.tok = zxmd_xenc_Transforms_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_xenc_Transforms) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zxmd_ds_Transform_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_ds_Transform(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_xenc_Transforms) */

int zxmd_WALK_WO_xenc_Transforms(struct zx_ctx* c, struct zxmd_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
#define EL_STRUCT zxmd_root_s
#define EL_NS     
#define EL_TAG    root

/* FUNC(zxmd_DUP_STRS_root) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_root(struct zx_ctx* c, struct zxmd_root_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_EntityDescriptor(c, e);
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_md_EntitiesDescriptor(c, e);
  }
  {
      struct zxmd_m20_EntityDescriptor_s* e;
      for (e = x->m20_EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_EntityDescriptor(c, e);
  }
  {
      struct zxmd_m20_EntitiesDescriptor_s* e;
      for (e = x->m20_EntitiesDescriptor; e; e = (struct zxmd_m20_EntitiesDescriptor_s*)e->gg.g.n)
	  zxmd_DUP_STRS_m20_EntitiesDescriptor(c, e);
  }

}

/* FUNC(zxmd_DEEP_CLONE_root) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zxmd_root_s* zxmd_DEEP_CLONE_root(struct zx_ctx* c, struct zxmd_root_s* x, int dup_strs)
{
  x = (struct zxmd_root_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zxmd_root_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_md_EntityDescriptor_s* e;
      struct zxmd_md_EntityDescriptor_s* en;
      struct zxmd_md_EntityDescriptor_s* enn;
      for (enn = 0, e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_EntityDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->EntityDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      struct zxmd_md_EntitiesDescriptor_s* en;
      struct zxmd_md_EntitiesDescriptor_s* enn;
      for (enn = 0, e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_md_EntitiesDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->EntitiesDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_EntityDescriptor_s* e;
      struct zxmd_m20_EntityDescriptor_s* en;
      struct zxmd_m20_EntityDescriptor_s* enn;
      for (enn = 0, e = x->m20_EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_EntityDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->m20_EntityDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zxmd_m20_EntitiesDescriptor_s* e;
      struct zxmd_m20_EntitiesDescriptor_s* en;
      struct zxmd_m20_EntitiesDescriptor_s* enn;
      for (enn = 0, e = x->m20_EntitiesDescriptor; e; e = (struct zxmd_m20_EntitiesDescriptor_s*)e->gg.g.n) {
	  en = zxmd_DEEP_CLONE_m20_EntitiesDescriptor(c, e, dup_strs);
	  if (!enn)
	      x->m20_EntitiesDescriptor = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zxmd_FREE_root) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_root(struct zx_ctx* c, struct zxmd_root_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zxmd_md_EntityDescriptor_s* e;
      struct zxmd_md_EntityDescriptor_s* en;
      for (e = x->EntityDescriptor; e; e = en) {
	  en = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_EntityDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      struct zxmd_md_EntitiesDescriptor_s* en;
      for (e = x->EntitiesDescriptor; e; e = en) {
	  en = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_md_EntitiesDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_EntityDescriptor_s* e;
      struct zxmd_m20_EntityDescriptor_s* en;
      for (e = x->m20_EntityDescriptor; e; e = en) {
	  en = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_EntityDescriptor(c, e, free_strs);
      }
  }
  {
      struct zxmd_m20_EntitiesDescriptor_s* e;
      struct zxmd_m20_EntitiesDescriptor_s* en;
      for (e = x->m20_EntitiesDescriptor; e; e = en) {
	  en = (struct zxmd_m20_EntitiesDescriptor_s*)e->gg.g.n;
	  zxmd_FREE_m20_EntitiesDescriptor(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zxmd_NEW_root) */

/* Trivial allocator/constructor for the datatype. */

struct zxmd_root_s* zxmd_NEW_root(struct zx_ctx* c)
{
  struct zxmd_root_s* x = ZX_ZALLOC(c, struct zxmd_root_s);
  x->gg.g.tok = zxmd_root_ELEM;
  return x;
}

/* FUNC(zxmd_WALK_SO_root) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_root(struct zx_ctx* c, struct zxmd_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zxmd_md_EntityDescriptor_s* e;
      for (e = x->EntityDescriptor; e; e = (struct zxmd_md_EntityDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_EntityDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_md_EntitiesDescriptor_s* e;
      for (e = x->EntitiesDescriptor; e; e = (struct zxmd_md_EntitiesDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_md_EntitiesDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_EntityDescriptor_s* e;
      for (e = x->m20_EntityDescriptor; e; e = (struct zxmd_m20_EntityDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_EntityDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zxmd_m20_EntitiesDescriptor_s* e;
      for (e = x->m20_EntitiesDescriptor; e; e = (struct zxmd_m20_EntitiesDescriptor_s*)e->gg.g.n) {
	  ret = zxmd_WALK_SO_m20_EntitiesDescriptor(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zxmd_WALK_WO_root) */

int zxmd_WALK_WO_root(struct zx_ctx* c, struct zxmd_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_DUP_STRS_simple_elem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zxmd_DUP_STRS_simple_elem(struct zx_ctx* c, struct zx_elem_s* x)
{
  zx_dup_strs_common(c, x);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zxmd_DEEP_CLONE_simple_elem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_elem_s* zxmd_DEEP_CLONE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs)
{
  x = (struct zx_elem_s*)zx_clone_elem_common(c, x, sizeof(struct zx_elem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zxmd_FREE_simple_elem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zxmd_FREE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, x, free_strs); 
}

/* FUNC(zxmd_NEW_simple_elem) */

/* Trivial allocator/constructor for the datatype. */

struct zx_elem_s* zxmd_NEW_simple_elem(struct zx_ctx* c, int toke)
{
  struct zx_elem_s* x = ZX_ZALLOC(c, struct zx_elem_s);
  x->g.tok = toke;
  return x;
}

/* FUNC(zxmd_WALK_SO_simple_elem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zxmd_WALK_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zxmd_WALK_WO_simple_elem) */

int zxmd_WALK_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}


