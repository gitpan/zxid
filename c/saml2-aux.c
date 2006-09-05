/* c/saml2-aux.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id: saml2-aux.c,v 1.19 2006/09/05 05:09:37 sampo Exp $ */
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
#include "c/saml2-const.h"
#include "c/saml2-data.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_CanonicalizationMethod_s
#define EL_NS     ds
#define EL_TAG    CanonicalizationMethod

/* FUNC(zx_DUP_STRS_ds_CanonicalizationMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);


}

/* FUNC(zx_DEEP_CLONE_ds_CanonicalizationMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_CanonicalizationMethod_s* zx_DEEP_CLONE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, int dup_strs)
{
  x = (struct zx_ds_CanonicalizationMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_CanonicalizationMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);


  return x;
}

/* FUNC(zx_FREE_ds_CanonicalizationMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_CanonicalizationMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_CanonicalizationMethod_s* zx_NEW_ds_CanonicalizationMethod(struct zx_ctx* c)
{
  struct zx_ds_CanonicalizationMethod_s* x = ZX_ZALLOC(c, struct zx_ds_CanonicalizationMethod_s);
  x->gg.g.tok = zx_ds_CanonicalizationMethod_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_CanonicalizationMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_CanonicalizationMethod) */

int zx_WALK_WO_ds_CanonicalizationMethod(struct zx_ctx* c, struct zx_ds_CanonicalizationMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_DSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    DSAKeyValue

/* FUNC(zx_DUP_STRS_ds_DSAKeyValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x)
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

/* FUNC(zx_DEEP_CLONE_ds_DSAKeyValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_DSAKeyValue_s* zx_DEEP_CLONE_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, int dup_strs)
{
  x = (struct zx_ds_DSAKeyValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_DSAKeyValue_s), dup_strs);
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

/* FUNC(zx_FREE_ds_DSAKeyValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, int free_strs)
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

/* FUNC(zx_NEW_ds_DSAKeyValue) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_DSAKeyValue_s* zx_NEW_ds_DSAKeyValue(struct zx_ctx* c)
{
  struct zx_ds_DSAKeyValue_s* x = ZX_ZALLOC(c, struct zx_ds_DSAKeyValue_s);
  x->gg.g.tok = zx_ds_DSAKeyValue_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_DSAKeyValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_DSAKeyValue) */

int zx_WALK_WO_ds_DSAKeyValue(struct zx_ctx* c, struct zx_ds_DSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_DigestMethod_s
#define EL_NS     ds
#define EL_TAG    DigestMethod

/* FUNC(zx_DUP_STRS_ds_DigestMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);


}

/* FUNC(zx_DEEP_CLONE_ds_DigestMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_DigestMethod_s* zx_DEEP_CLONE_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, int dup_strs)
{
  x = (struct zx_ds_DigestMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_DigestMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);


  return x;
}

/* FUNC(zx_FREE_ds_DigestMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_DigestMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_DigestMethod_s* zx_NEW_ds_DigestMethod(struct zx_ctx* c)
{
  struct zx_ds_DigestMethod_s* x = ZX_ZALLOC(c, struct zx_ds_DigestMethod_s);
  x->gg.g.tok = zx_ds_DigestMethod_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_DigestMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_DigestMethod) */

int zx_WALK_WO_ds_DigestMethod(struct zx_ctx* c, struct zx_ds_DigestMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_KeyInfo_s
#define EL_NS     ds
#define EL_TAG    KeyInfo

/* FUNC(zx_DUP_STRS_ds_KeyInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  zx_dup_strs_simple_elems(c, x->KeyName);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_KeyValue(c, e);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_RetrievalMethod(c, e);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_X509Data(c, e);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_PGPData(c, e);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_SPKIData(c, e);
  }
  zx_dup_strs_simple_elems(c, x->MgmtData);

}

/* FUNC(zx_DEEP_CLONE_ds_KeyInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_KeyInfo_s* zx_DEEP_CLONE_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, int dup_strs)
{
  x = (struct zx_ds_KeyInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_KeyInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  x->KeyName = zx_deep_clone_simple_elems(c,x->KeyName, dup_strs);
  {
      struct zx_ds_KeyValue_s* e;
      struct zx_ds_KeyValue_s* en;
      struct zx_ds_KeyValue_s* enn;
      for (enn = 0, e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_KeyValue(c, e, dup_strs);
	  if (!enn)
	      x->KeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      struct zx_ds_RetrievalMethod_s* en;
      struct zx_ds_RetrievalMethod_s* enn;
      for (enn = 0, e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_RetrievalMethod(c, e, dup_strs);
	  if (!enn)
	      x->RetrievalMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      struct zx_ds_X509Data_s* en;
      struct zx_ds_X509Data_s* enn;
      for (enn = 0, e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_X509Data(c, e, dup_strs);
	  if (!enn)
	      x->X509Data = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      struct zx_ds_PGPData_s* en;
      struct zx_ds_PGPData_s* enn;
      for (enn = 0, e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_PGPData(c, e, dup_strs);
	  if (!enn)
	      x->PGPData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      struct zx_ds_SPKIData_s* en;
      struct zx_ds_SPKIData_s* enn;
      for (enn = 0, e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_SPKIData(c, e, dup_strs);
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

/* FUNC(zx_FREE_ds_KeyInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  zx_free_simple_elems(c, x->KeyName, free_strs);
  {
      struct zx_ds_KeyValue_s* e;
      struct zx_ds_KeyValue_s* en;
      for (e = x->KeyValue; e; e = en) {
	  en = (struct zx_ds_KeyValue_s*)e->gg.g.n;
	  zx_FREE_ds_KeyValue(c, e, free_strs);
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      struct zx_ds_RetrievalMethod_s* en;
      for (e = x->RetrievalMethod; e; e = en) {
	  en = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n;
	  zx_FREE_ds_RetrievalMethod(c, e, free_strs);
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      struct zx_ds_X509Data_s* en;
      for (e = x->X509Data; e; e = en) {
	  en = (struct zx_ds_X509Data_s*)e->gg.g.n;
	  zx_FREE_ds_X509Data(c, e, free_strs);
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      struct zx_ds_PGPData_s* en;
      for (e = x->PGPData; e; e = en) {
	  en = (struct zx_ds_PGPData_s*)e->gg.g.n;
	  zx_FREE_ds_PGPData(c, e, free_strs);
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      struct zx_ds_SPKIData_s* en;
      for (e = x->SPKIData; e; e = en) {
	  en = (struct zx_ds_SPKIData_s*)e->gg.g.n;
	  zx_FREE_ds_SPKIData(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->MgmtData, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_KeyInfo) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_KeyInfo_s* zx_NEW_ds_KeyInfo(struct zx_ctx* c)
{
  struct zx_ds_KeyInfo_s* x = ZX_ZALLOC(c, struct zx_ds_KeyInfo_s);
  x->gg.g.tok = zx_ds_KeyInfo_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_KeyInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_KeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_RetrievalMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_X509Data(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_PGPData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_SPKIData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->MgmtData, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_KeyInfo) */

int zx_WALK_WO_ds_KeyInfo(struct zx_ctx* c, struct zx_ds_KeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_KeyValue_s
#define EL_NS     ds
#define EL_TAG    KeyValue

/* FUNC(zx_DUP_STRS_ds_KeyValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_DSAKeyValue_s* e;
      for (e = x->DSAKeyValue; e; e = (struct zx_ds_DSAKeyValue_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_DSAKeyValue(c, e);
  }
  {
      struct zx_ds_RSAKeyValue_s* e;
      for (e = x->RSAKeyValue; e; e = (struct zx_ds_RSAKeyValue_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_RSAKeyValue(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ds_KeyValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_KeyValue_s* zx_DEEP_CLONE_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, int dup_strs)
{
  x = (struct zx_ds_KeyValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_KeyValue_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_DSAKeyValue_s* e;
      struct zx_ds_DSAKeyValue_s* en;
      struct zx_ds_DSAKeyValue_s* enn;
      for (enn = 0, e = x->DSAKeyValue; e; e = (struct zx_ds_DSAKeyValue_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_DSAKeyValue(c, e, dup_strs);
	  if (!enn)
	      x->DSAKeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_RSAKeyValue_s* e;
      struct zx_ds_RSAKeyValue_s* en;
      struct zx_ds_RSAKeyValue_s* enn;
      for (enn = 0, e = x->RSAKeyValue; e; e = (struct zx_ds_RSAKeyValue_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_RSAKeyValue(c, e, dup_strs);
	  if (!enn)
	      x->RSAKeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_ds_KeyValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_DSAKeyValue_s* e;
      struct zx_ds_DSAKeyValue_s* en;
      for (e = x->DSAKeyValue; e; e = en) {
	  en = (struct zx_ds_DSAKeyValue_s*)e->gg.g.n;
	  zx_FREE_ds_DSAKeyValue(c, e, free_strs);
      }
  }
  {
      struct zx_ds_RSAKeyValue_s* e;
      struct zx_ds_RSAKeyValue_s* en;
      for (e = x->RSAKeyValue; e; e = en) {
	  en = (struct zx_ds_RSAKeyValue_s*)e->gg.g.n;
	  zx_FREE_ds_RSAKeyValue(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_KeyValue) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_KeyValue_s* zx_NEW_ds_KeyValue(struct zx_ctx* c)
{
  struct zx_ds_KeyValue_s* x = ZX_ZALLOC(c, struct zx_ds_KeyValue_s);
  x->gg.g.tok = zx_ds_KeyValue_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_KeyValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_DSAKeyValue_s* e;
      for (e = x->DSAKeyValue; e; e = (struct zx_ds_DSAKeyValue_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_DSAKeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_RSAKeyValue_s* e;
      for (e = x->RSAKeyValue; e; e = (struct zx_ds_RSAKeyValue_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_RSAKeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_KeyValue) */

int zx_WALK_WO_ds_KeyValue(struct zx_ctx* c, struct zx_ds_KeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_Manifest_s
#define EL_NS     ds
#define EL_TAG    Manifest

/* FUNC(zx_DUP_STRS_ds_Manifest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zx_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Reference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ds_Manifest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_Manifest_s* zx_DEEP_CLONE_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, int dup_strs)
{
  x = (struct zx_ds_Manifest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_Manifest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zx_ds_Reference_s* e;
      struct zx_ds_Reference_s* en;
      struct zx_ds_Reference_s* enn;
      for (enn = 0, e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Reference(c, e, dup_strs);
	  if (!enn)
	      x->Reference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_ds_Manifest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zx_ds_Reference_s* e;
      struct zx_ds_Reference_s* en;
      for (e = x->Reference; e; e = en) {
	  en = (struct zx_ds_Reference_s*)e->gg.g.n;
	  zx_FREE_ds_Reference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_Manifest) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_Manifest_s* zx_NEW_ds_Manifest(struct zx_ctx* c)
{
  struct zx_ds_Manifest_s* x = ZX_ZALLOC(c, struct zx_ds_Manifest_s);
  x->gg.g.tok = zx_ds_Manifest_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_Manifest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Reference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_Manifest) */

int zx_WALK_WO_ds_Manifest(struct zx_ctx* c, struct zx_ds_Manifest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_Object_s
#define EL_NS     ds
#define EL_TAG    Object

/* FUNC(zx_DUP_STRS_ds_Object) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->MimeType);
  zx_dup_attr(c, x->Encoding);


}

/* FUNC(zx_DEEP_CLONE_ds_Object) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_Object_s* zx_DEEP_CLONE_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, int dup_strs)
{
  x = (struct zx_ds_Object_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_Object_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->MimeType = zx_clone_attr(c, x->MimeType);
  x->Encoding = zx_clone_attr(c, x->Encoding);


  return x;
}

/* FUNC(zx_FREE_ds_Object) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->MimeType, free_strs);
  zx_free_attr(c, x->Encoding, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_Object) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_Object_s* zx_NEW_ds_Object(struct zx_ctx* c)
{
  struct zx_ds_Object_s* x = ZX_ZALLOC(c, struct zx_ds_Object_s);
  x->gg.g.tok = zx_ds_Object_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_Object) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_Object) */

int zx_WALK_WO_ds_Object(struct zx_ctx* c, struct zx_ds_Object_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_PGPData_s
#define EL_NS     ds
#define EL_TAG    PGPData

/* FUNC(zx_DUP_STRS_ds_PGPData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->PGPKeyID);
  zx_dup_strs_simple_elems(c, x->PGPKeyPacket);

}

/* FUNC(zx_DEEP_CLONE_ds_PGPData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_PGPData_s* zx_DEEP_CLONE_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, int dup_strs)
{
  x = (struct zx_ds_PGPData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_PGPData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->PGPKeyID = zx_deep_clone_simple_elems(c,x->PGPKeyID, dup_strs);
  x->PGPKeyPacket = zx_deep_clone_simple_elems(c,x->PGPKeyPacket, dup_strs);

  return x;
}

/* FUNC(zx_FREE_ds_PGPData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->PGPKeyID, free_strs);
  zx_free_simple_elems(c, x->PGPKeyPacket, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_PGPData) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_PGPData_s* zx_NEW_ds_PGPData(struct zx_ctx* c)
{
  struct zx_ds_PGPData_s* x = ZX_ZALLOC(c, struct zx_ds_PGPData_s);
  x->gg.g.tok = zx_ds_PGPData_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_PGPData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_PGPData) */

int zx_WALK_WO_ds_PGPData(struct zx_ctx* c, struct zx_ds_PGPData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_RSAKeyValue_s
#define EL_NS     ds
#define EL_TAG    RSAKeyValue

/* FUNC(zx_DUP_STRS_ds_RSAKeyValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Modulus);
  zx_dup_strs_simple_elems(c, x->Exponent);

}

/* FUNC(zx_DEEP_CLONE_ds_RSAKeyValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_RSAKeyValue_s* zx_DEEP_CLONE_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, int dup_strs)
{
  x = (struct zx_ds_RSAKeyValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_RSAKeyValue_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Modulus = zx_deep_clone_simple_elems(c,x->Modulus, dup_strs);
  x->Exponent = zx_deep_clone_simple_elems(c,x->Exponent, dup_strs);

  return x;
}

/* FUNC(zx_FREE_ds_RSAKeyValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Modulus, free_strs);
  zx_free_simple_elems(c, x->Exponent, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_RSAKeyValue) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_RSAKeyValue_s* zx_NEW_ds_RSAKeyValue(struct zx_ctx* c)
{
  struct zx_ds_RSAKeyValue_s* x = ZX_ZALLOC(c, struct zx_ds_RSAKeyValue_s);
  x->gg.g.tok = zx_ds_RSAKeyValue_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_RSAKeyValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_RSAKeyValue) */

int zx_WALK_WO_ds_RSAKeyValue(struct zx_ctx* c, struct zx_ds_RSAKeyValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_Reference_s
#define EL_NS     ds
#define EL_TAG    Reference

/* FUNC(zx_DUP_STRS_ds_Reference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->URI);
  zx_dup_attr(c, x->Type);

  {
      struct zx_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Transforms(c, e);
  }
  {
      struct zx_ds_DigestMethod_s* e;
      for (e = x->DigestMethod; e; e = (struct zx_ds_DigestMethod_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_DigestMethod(c, e);
  }
  zx_dup_strs_simple_elems(c, x->DigestValue);

}

/* FUNC(zx_DEEP_CLONE_ds_Reference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_Reference_s* zx_DEEP_CLONE_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, int dup_strs)
{
  x = (struct zx_ds_Reference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_Reference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->URI = zx_clone_attr(c, x->URI);
  x->Type = zx_clone_attr(c, x->Type);

  {
      struct zx_ds_Transforms_s* e;
      struct zx_ds_Transforms_s* en;
      struct zx_ds_Transforms_s* enn;
      for (enn = 0, e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Transforms(c, e, dup_strs);
	  if (!enn)
	      x->Transforms = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_DigestMethod_s* e;
      struct zx_ds_DigestMethod_s* en;
      struct zx_ds_DigestMethod_s* enn;
      for (enn = 0, e = x->DigestMethod; e; e = (struct zx_ds_DigestMethod_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_DigestMethod(c, e, dup_strs);
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

/* FUNC(zx_FREE_ds_Reference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->URI, free_strs);
  zx_free_attr(c, x->Type, free_strs);

  {
      struct zx_ds_Transforms_s* e;
      struct zx_ds_Transforms_s* en;
      for (e = x->Transforms; e; e = en) {
	  en = (struct zx_ds_Transforms_s*)e->gg.g.n;
	  zx_FREE_ds_Transforms(c, e, free_strs);
      }
  }
  {
      struct zx_ds_DigestMethod_s* e;
      struct zx_ds_DigestMethod_s* en;
      for (e = x->DigestMethod; e; e = en) {
	  en = (struct zx_ds_DigestMethod_s*)e->gg.g.n;
	  zx_FREE_ds_DigestMethod(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->DigestValue, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_Reference) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_Reference_s* zx_NEW_ds_Reference(struct zx_ctx* c)
{
  struct zx_ds_Reference_s* x = ZX_ZALLOC(c, struct zx_ds_Reference_s);
  x->gg.g.tok = zx_ds_Reference_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_Reference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Transforms(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_DigestMethod_s* e;
      for (e = x->DigestMethod; e; e = (struct zx_ds_DigestMethod_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_DigestMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->DigestValue, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_Reference) */

int zx_WALK_WO_ds_Reference(struct zx_ctx* c, struct zx_ds_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_RetrievalMethod_s
#define EL_NS     ds
#define EL_TAG    RetrievalMethod

/* FUNC(zx_DUP_STRS_ds_RetrievalMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);
  zx_dup_attr(c, x->Type);

  {
      struct zx_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Transforms(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ds_RetrievalMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_RetrievalMethod_s* zx_DEEP_CLONE_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, int dup_strs)
{
  x = (struct zx_ds_RetrievalMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_RetrievalMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);
  x->Type = zx_clone_attr(c, x->Type);

  {
      struct zx_ds_Transforms_s* e;
      struct zx_ds_Transforms_s* en;
      struct zx_ds_Transforms_s* enn;
      for (enn = 0, e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Transforms(c, e, dup_strs);
	  if (!enn)
	      x->Transforms = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_ds_RetrievalMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);
  zx_free_attr(c, x->Type, free_strs);

  {
      struct zx_ds_Transforms_s* e;
      struct zx_ds_Transforms_s* en;
      for (e = x->Transforms; e; e = en) {
	  en = (struct zx_ds_Transforms_s*)e->gg.g.n;
	  zx_FREE_ds_Transforms(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_RetrievalMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_RetrievalMethod_s* zx_NEW_ds_RetrievalMethod(struct zx_ctx* c)
{
  struct zx_ds_RetrievalMethod_s* x = ZX_ZALLOC(c, struct zx_ds_RetrievalMethod_s);
  x->gg.g.tok = zx_ds_RetrievalMethod_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_RetrievalMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_ds_Transforms_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Transforms(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_RetrievalMethod) */

int zx_WALK_WO_ds_RetrievalMethod(struct zx_ctx* c, struct zx_ds_RetrievalMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_SPKIData_s
#define EL_NS     ds
#define EL_TAG    SPKIData

/* FUNC(zx_DUP_STRS_ds_SPKIData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->SPKISexp);

}

/* FUNC(zx_DEEP_CLONE_ds_SPKIData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_SPKIData_s* zx_DEEP_CLONE_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, int dup_strs)
{
  x = (struct zx_ds_SPKIData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_SPKIData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->SPKISexp = zx_deep_clone_simple_elems(c,x->SPKISexp, dup_strs);

  return x;
}

/* FUNC(zx_FREE_ds_SPKIData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->SPKISexp, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_SPKIData) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_SPKIData_s* zx_NEW_ds_SPKIData(struct zx_ctx* c)
{
  struct zx_ds_SPKIData_s* x = ZX_ZALLOC(c, struct zx_ds_SPKIData_s);
  x->gg.g.tok = zx_ds_SPKIData_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_SPKIData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_SPKIData) */

int zx_WALK_WO_ds_SPKIData(struct zx_ctx* c, struct zx_ds_SPKIData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_Signature_s
#define EL_NS     ds
#define EL_TAG    Signature

/* FUNC(zx_DUP_STRS_ds_Signature) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zx_ds_SignedInfo_s* e;
      for (e = x->SignedInfo; e; e = (struct zx_ds_SignedInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_SignedInfo(c, e);
  }
  {
      struct zx_ds_SignatureValue_s* e;
      for (e = x->SignatureValue; e; e = (struct zx_ds_SignatureValue_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_SignatureValue(c, e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_KeyInfo(c, e);
  }
  {
      struct zx_ds_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ds_Object_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Object(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ds_Signature) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_Signature_s* zx_DEEP_CLONE_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, int dup_strs)
{
  x = (struct zx_ds_Signature_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_Signature_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zx_ds_SignedInfo_s* e;
      struct zx_ds_SignedInfo_s* en;
      struct zx_ds_SignedInfo_s* enn;
      for (enn = 0, e = x->SignedInfo; e; e = (struct zx_ds_SignedInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_SignedInfo(c, e, dup_strs);
	  if (!enn)
	      x->SignedInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_SignatureValue_s* e;
      struct zx_ds_SignatureValue_s* en;
      struct zx_ds_SignatureValue_s* enn;
      for (enn = 0, e = x->SignatureValue; e; e = (struct zx_ds_SignatureValue_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_SignatureValue(c, e, dup_strs);
	  if (!enn)
	      x->SignatureValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      struct zx_ds_KeyInfo_s* en;
      struct zx_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Object_s* e;
      struct zx_ds_Object_s* en;
      struct zx_ds_Object_s* enn;
      for (enn = 0, e = x->Object; e; e = (struct zx_ds_Object_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Object(c, e, dup_strs);
	  if (!enn)
	      x->Object = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_ds_Signature) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zx_ds_SignedInfo_s* e;
      struct zx_ds_SignedInfo_s* en;
      for (e = x->SignedInfo; e; e = en) {
	  en = (struct zx_ds_SignedInfo_s*)e->gg.g.n;
	  zx_FREE_ds_SignedInfo(c, e, free_strs);
      }
  }
  {
      struct zx_ds_SignatureValue_s* e;
      struct zx_ds_SignatureValue_s* en;
      for (e = x->SignatureValue; e; e = en) {
	  en = (struct zx_ds_SignatureValue_s*)e->gg.g.n;
	  zx_FREE_ds_SignatureValue(c, e, free_strs);
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      struct zx_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zx_ds_KeyInfo_s*)e->gg.g.n;
	  zx_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Object_s* e;
      struct zx_ds_Object_s* en;
      for (e = x->Object; e; e = en) {
	  en = (struct zx_ds_Object_s*)e->gg.g.n;
	  zx_FREE_ds_Object(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_Signature) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_Signature_s* zx_NEW_ds_Signature(struct zx_ctx* c)
{
  struct zx_ds_Signature_s* x = ZX_ZALLOC(c, struct zx_ds_Signature_s);
  x->gg.g.tok = zx_ds_Signature_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_Signature) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_SignedInfo_s* e;
      for (e = x->SignedInfo; e; e = (struct zx_ds_SignedInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_SignedInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_SignatureValue_s* e;
      for (e = x->SignatureValue; e; e = (struct zx_ds_SignatureValue_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_SignatureValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Object_s* e;
      for (e = x->Object; e; e = (struct zx_ds_Object_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Object(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_Signature) */

int zx_WALK_WO_ds_Signature(struct zx_ctx* c, struct zx_ds_Signature_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_SignatureMethod_s
#define EL_NS     ds
#define EL_TAG    SignatureMethod

/* FUNC(zx_DUP_STRS_ds_SignatureMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->HMACOutputLength);

}

/* FUNC(zx_DEEP_CLONE_ds_SignatureMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_SignatureMethod_s* zx_DEEP_CLONE_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, int dup_strs)
{
  x = (struct zx_ds_SignatureMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_SignatureMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->HMACOutputLength = zx_deep_clone_simple_elems(c,x->HMACOutputLength, dup_strs);

  return x;
}

/* FUNC(zx_FREE_ds_SignatureMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->HMACOutputLength, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_SignatureMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_SignatureMethod_s* zx_NEW_ds_SignatureMethod(struct zx_ctx* c)
{
  struct zx_ds_SignatureMethod_s* x = ZX_ZALLOC(c, struct zx_ds_SignatureMethod_s);
  x->gg.g.tok = zx_ds_SignatureMethod_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_SignatureMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_SignatureMethod) */

int zx_WALK_WO_ds_SignatureMethod(struct zx_ctx* c, struct zx_ds_SignatureMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_SignatureProperties_s
#define EL_NS     ds
#define EL_TAG    SignatureProperties

/* FUNC(zx_DUP_STRS_ds_SignatureProperties) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zx_ds_SignatureProperty_s* e;
      for (e = x->SignatureProperty; e; e = (struct zx_ds_SignatureProperty_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_SignatureProperty(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ds_SignatureProperties) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_SignatureProperties_s* zx_DEEP_CLONE_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, int dup_strs)
{
  x = (struct zx_ds_SignatureProperties_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_SignatureProperties_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zx_ds_SignatureProperty_s* e;
      struct zx_ds_SignatureProperty_s* en;
      struct zx_ds_SignatureProperty_s* enn;
      for (enn = 0, e = x->SignatureProperty; e; e = (struct zx_ds_SignatureProperty_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_SignatureProperty(c, e, dup_strs);
	  if (!enn)
	      x->SignatureProperty = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_ds_SignatureProperties) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zx_ds_SignatureProperty_s* e;
      struct zx_ds_SignatureProperty_s* en;
      for (e = x->SignatureProperty; e; e = en) {
	  en = (struct zx_ds_SignatureProperty_s*)e->gg.g.n;
	  zx_FREE_ds_SignatureProperty(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_SignatureProperties) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_SignatureProperties_s* zx_NEW_ds_SignatureProperties(struct zx_ctx* c)
{
  struct zx_ds_SignatureProperties_s* x = ZX_ZALLOC(c, struct zx_ds_SignatureProperties_s);
  x->gg.g.tok = zx_ds_SignatureProperties_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_SignatureProperties) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_SignatureProperty_s* e;
      for (e = x->SignatureProperty; e; e = (struct zx_ds_SignatureProperty_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_SignatureProperty(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_SignatureProperties) */

int zx_WALK_WO_ds_SignatureProperties(struct zx_ctx* c, struct zx_ds_SignatureProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_SignatureProperty_s
#define EL_NS     ds
#define EL_TAG    SignatureProperty

/* FUNC(zx_DUP_STRS_ds_SignatureProperty) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Target);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_ds_SignatureProperty) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_SignatureProperty_s* zx_DEEP_CLONE_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, int dup_strs)
{
  x = (struct zx_ds_SignatureProperty_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_SignatureProperty_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Target = zx_clone_attr(c, x->Target);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_FREE_ds_SignatureProperty) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Target, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_SignatureProperty) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_SignatureProperty_s* zx_NEW_ds_SignatureProperty(struct zx_ctx* c)
{
  struct zx_ds_SignatureProperty_s* x = ZX_ZALLOC(c, struct zx_ds_SignatureProperty_s);
  x->gg.g.tok = zx_ds_SignatureProperty_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_SignatureProperty) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_SignatureProperty) */

int zx_WALK_WO_ds_SignatureProperty(struct zx_ctx* c, struct zx_ds_SignatureProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_SignatureValue_s
#define EL_NS     ds
#define EL_TAG    SignatureValue

/* FUNC(zx_DUP_STRS_ds_SignatureValue) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_ds_SignatureValue) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_SignatureValue_s* zx_DEEP_CLONE_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, int dup_strs)
{
  x = (struct zx_ds_SignatureValue_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_SignatureValue_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_FREE_ds_SignatureValue) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_SignatureValue) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_SignatureValue_s* zx_NEW_ds_SignatureValue(struct zx_ctx* c)
{
  struct zx_ds_SignatureValue_s* x = ZX_ZALLOC(c, struct zx_ds_SignatureValue_s);
  x->gg.g.tok = zx_ds_SignatureValue_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_SignatureValue) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_SignatureValue) */

int zx_WALK_WO_ds_SignatureValue(struct zx_ctx* c, struct zx_ds_SignatureValue_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_SignedInfo_s
#define EL_NS     ds
#define EL_TAG    SignedInfo

/* FUNC(zx_DUP_STRS_ds_SignedInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zx_ds_CanonicalizationMethod_s* e;
      for (e = x->CanonicalizationMethod; e; e = (struct zx_ds_CanonicalizationMethod_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_CanonicalizationMethod(c, e);
  }
  {
      struct zx_ds_SignatureMethod_s* e;
      for (e = x->SignatureMethod; e; e = (struct zx_ds_SignatureMethod_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_SignatureMethod(c, e);
  }
  {
      struct zx_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Reference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ds_SignedInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_SignedInfo_s* zx_DEEP_CLONE_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, int dup_strs)
{
  x = (struct zx_ds_SignedInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_SignedInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zx_ds_CanonicalizationMethod_s* e;
      struct zx_ds_CanonicalizationMethod_s* en;
      struct zx_ds_CanonicalizationMethod_s* enn;
      for (enn = 0, e = x->CanonicalizationMethod; e; e = (struct zx_ds_CanonicalizationMethod_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_CanonicalizationMethod(c, e, dup_strs);
	  if (!enn)
	      x->CanonicalizationMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_SignatureMethod_s* e;
      struct zx_ds_SignatureMethod_s* en;
      struct zx_ds_SignatureMethod_s* enn;
      for (enn = 0, e = x->SignatureMethod; e; e = (struct zx_ds_SignatureMethod_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_SignatureMethod(c, e, dup_strs);
	  if (!enn)
	      x->SignatureMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Reference_s* e;
      struct zx_ds_Reference_s* en;
      struct zx_ds_Reference_s* enn;
      for (enn = 0, e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Reference(c, e, dup_strs);
	  if (!enn)
	      x->Reference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_ds_SignedInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zx_ds_CanonicalizationMethod_s* e;
      struct zx_ds_CanonicalizationMethod_s* en;
      for (e = x->CanonicalizationMethod; e; e = en) {
	  en = (struct zx_ds_CanonicalizationMethod_s*)e->gg.g.n;
	  zx_FREE_ds_CanonicalizationMethod(c, e, free_strs);
      }
  }
  {
      struct zx_ds_SignatureMethod_s* e;
      struct zx_ds_SignatureMethod_s* en;
      for (e = x->SignatureMethod; e; e = en) {
	  en = (struct zx_ds_SignatureMethod_s*)e->gg.g.n;
	  zx_FREE_ds_SignatureMethod(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Reference_s* e;
      struct zx_ds_Reference_s* en;
      for (e = x->Reference; e; e = en) {
	  en = (struct zx_ds_Reference_s*)e->gg.g.n;
	  zx_FREE_ds_Reference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_SignedInfo) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_SignedInfo_s* zx_NEW_ds_SignedInfo(struct zx_ctx* c)
{
  struct zx_ds_SignedInfo_s* x = ZX_ZALLOC(c, struct zx_ds_SignedInfo_s);
  x->gg.g.tok = zx_ds_SignedInfo_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_SignedInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_CanonicalizationMethod_s* e;
      for (e = x->CanonicalizationMethod; e; e = (struct zx_ds_CanonicalizationMethod_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_CanonicalizationMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_SignatureMethod_s* e;
      for (e = x->SignatureMethod; e; e = (struct zx_ds_SignatureMethod_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_SignatureMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Reference_s* e;
      for (e = x->Reference; e; e = (struct zx_ds_Reference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Reference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_SignedInfo) */

int zx_WALK_WO_ds_SignedInfo(struct zx_ctx* c, struct zx_ds_SignedInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_Transform_s
#define EL_NS     ds
#define EL_TAG    Transform

/* FUNC(zx_DUP_STRS_ds_Transform) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->XPath);

}

/* FUNC(zx_DEEP_CLONE_ds_Transform) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_Transform_s* zx_DEEP_CLONE_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, int dup_strs)
{
  x = (struct zx_ds_Transform_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_Transform_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->XPath = zx_deep_clone_simple_elems(c,x->XPath, dup_strs);

  return x;
}

/* FUNC(zx_FREE_ds_Transform) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->XPath, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_Transform) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_Transform_s* zx_NEW_ds_Transform(struct zx_ctx* c)
{
  struct zx_ds_Transform_s* x = ZX_ZALLOC(c, struct zx_ds_Transform_s);
  x->gg.g.tok = zx_ds_Transform_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_Transform) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_Transform) */

int zx_WALK_WO_ds_Transform(struct zx_ctx* c, struct zx_ds_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_Transforms_s
#define EL_NS     ds
#define EL_TAG    Transforms

/* FUNC(zx_DUP_STRS_ds_Transforms) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Transform(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_ds_Transforms) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_Transforms_s* zx_DEEP_CLONE_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, int dup_strs)
{
  x = (struct zx_ds_Transforms_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_Transforms_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_Transform_s* e;
      struct zx_ds_Transform_s* en;
      struct zx_ds_Transform_s* enn;
      for (enn = 0, e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Transform(c, e, dup_strs);
	  if (!enn)
	      x->Transform = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_ds_Transforms) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_Transform_s* e;
      struct zx_ds_Transform_s* en;
      for (e = x->Transform; e; e = en) {
	  en = (struct zx_ds_Transform_s*)e->gg.g.n;
	  zx_FREE_ds_Transform(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_Transforms) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_Transforms_s* zx_NEW_ds_Transforms(struct zx_ctx* c)
{
  struct zx_ds_Transforms_s* x = ZX_ZALLOC(c, struct zx_ds_Transforms_s);
  x->gg.g.tok = zx_ds_Transforms_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_Transforms) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Transform(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_ds_Transforms) */

int zx_WALK_WO_ds_Transforms(struct zx_ctx* c, struct zx_ds_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_X509Data_s
#define EL_NS     ds
#define EL_TAG    X509Data

/* FUNC(zx_DUP_STRS_ds_X509Data) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_X509IssuerSerial_s* e;
      for (e = x->X509IssuerSerial; e; e = (struct zx_ds_X509IssuerSerial_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_X509IssuerSerial(c, e);
  }
  zx_dup_strs_simple_elems(c, x->X509SKI);
  zx_dup_strs_simple_elems(c, x->X509SubjectName);
  zx_dup_strs_simple_elems(c, x->X509Certificate);
  zx_dup_strs_simple_elems(c, x->X509CRL);

}

/* FUNC(zx_DEEP_CLONE_ds_X509Data) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_X509Data_s* zx_DEEP_CLONE_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, int dup_strs)
{
  x = (struct zx_ds_X509Data_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_X509Data_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_X509IssuerSerial_s* e;
      struct zx_ds_X509IssuerSerial_s* en;
      struct zx_ds_X509IssuerSerial_s* enn;
      for (enn = 0, e = x->X509IssuerSerial; e; e = (struct zx_ds_X509IssuerSerial_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_X509IssuerSerial(c, e, dup_strs);
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

/* FUNC(zx_FREE_ds_X509Data) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_X509IssuerSerial_s* e;
      struct zx_ds_X509IssuerSerial_s* en;
      for (e = x->X509IssuerSerial; e; e = en) {
	  en = (struct zx_ds_X509IssuerSerial_s*)e->gg.g.n;
	  zx_FREE_ds_X509IssuerSerial(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->X509SKI, free_strs);
  zx_free_simple_elems(c, x->X509SubjectName, free_strs);
  zx_free_simple_elems(c, x->X509Certificate, free_strs);
  zx_free_simple_elems(c, x->X509CRL, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_X509Data) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_X509Data_s* zx_NEW_ds_X509Data(struct zx_ctx* c)
{
  struct zx_ds_X509Data_s* x = ZX_ZALLOC(c, struct zx_ds_X509Data_s);
  x->gg.g.tok = zx_ds_X509Data_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_X509Data) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_X509IssuerSerial_s* e;
      for (e = x->X509IssuerSerial; e; e = (struct zx_ds_X509IssuerSerial_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_X509IssuerSerial(c, e, ctx, callback);
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

/* FUNC(zx_WALK_WO_ds_X509Data) */

int zx_WALK_WO_ds_X509Data(struct zx_ctx* c, struct zx_ds_X509Data_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_ds_X509IssuerSerial_s
#define EL_NS     ds
#define EL_TAG    X509IssuerSerial

/* FUNC(zx_DUP_STRS_ds_X509IssuerSerial) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->X509IssuerName);
  zx_dup_strs_simple_elems(c, x->X509SerialNumber);

}

/* FUNC(zx_DEEP_CLONE_ds_X509IssuerSerial) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_ds_X509IssuerSerial_s* zx_DEEP_CLONE_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, int dup_strs)
{
  x = (struct zx_ds_X509IssuerSerial_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_ds_X509IssuerSerial_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->X509IssuerName = zx_deep_clone_simple_elems(c,x->X509IssuerName, dup_strs);
  x->X509SerialNumber = zx_deep_clone_simple_elems(c,x->X509SerialNumber, dup_strs);

  return x;
}

/* FUNC(zx_FREE_ds_X509IssuerSerial) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->X509IssuerName, free_strs);
  zx_free_simple_elems(c, x->X509SerialNumber, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_ds_X509IssuerSerial) */

/* Trivial allocator/constructor for the datatype. */

struct zx_ds_X509IssuerSerial_s* zx_NEW_ds_X509IssuerSerial(struct zx_ctx* c)
{
  struct zx_ds_X509IssuerSerial_s* x = ZX_ZALLOC(c, struct zx_ds_X509IssuerSerial_s);
  x->gg.g.tok = zx_ds_X509IssuerSerial_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_ds_X509IssuerSerial) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_ds_X509IssuerSerial) */

int zx_WALK_WO_ds_X509IssuerSerial(struct zx_ctx* c, struct zx_ds_X509IssuerSerial_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_Action_s
#define EL_NS     sa
#define EL_TAG    Action

/* FUNC(zx_DUP_STRS_sa_Action) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Namespace);


}

/* FUNC(zx_DEEP_CLONE_sa_Action) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_Action_s* zx_DEEP_CLONE_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, int dup_strs)
{
  x = (struct zx_sa_Action_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_Action_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Namespace = zx_clone_attr(c, x->Namespace);


  return x;
}

/* FUNC(zx_FREE_sa_Action) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Namespace, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_Action) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_Action_s* zx_NEW_sa_Action(struct zx_ctx* c)
{
  struct zx_sa_Action_s* x = ZX_ZALLOC(c, struct zx_sa_Action_s);
  x->gg.g.tok = zx_sa_Action_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_Action) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_Action) */

int zx_WALK_WO_sa_Action(struct zx_ctx* c, struct zx_sa_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_Advice_s
#define EL_NS     sa
#define EL_TAG    Advice

/* FUNC(zx_DUP_STRS_sa_Advice) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->AssertionIDRef);
  zx_dup_strs_simple_elems(c, x->AssertionURIRef);
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Assertion(c, e);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedAssertion(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_Advice) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_Advice_s* zx_DEEP_CLONE_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, int dup_strs)
{
  x = (struct zx_sa_Advice_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_Advice_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->AssertionIDRef = zx_deep_clone_simple_elems(c,x->AssertionIDRef, dup_strs);
  x->AssertionURIRef = zx_deep_clone_simple_elems(c,x->AssertionURIRef, dup_strs);
  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      struct zx_sa_Assertion_s* enn;
      for (enn = 0, e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Assertion(c, e, dup_strs);
	  if (!enn)
	      x->Assertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      struct zx_sa_EncryptedAssertion_s* en;
      struct zx_sa_EncryptedAssertion_s* enn;
      for (enn = 0, e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedAssertion(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedAssertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_Advice) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->AssertionIDRef, free_strs);
  zx_free_simple_elems(c, x->AssertionURIRef, free_strs);
  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      for (e = x->Assertion; e; e = en) {
	  en = (struct zx_sa_Assertion_s*)e->gg.g.n;
	  zx_FREE_sa_Assertion(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      struct zx_sa_EncryptedAssertion_s* en;
      for (e = x->EncryptedAssertion; e; e = en) {
	  en = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedAssertion(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_Advice) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_Advice_s* zx_NEW_sa_Advice(struct zx_ctx* c)
{
  struct zx_sa_Advice_s* x = ZX_ZALLOC(c, struct zx_sa_Advice_s);
  x->gg.g.tok = zx_sa_Advice_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_Advice) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Assertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedAssertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_Advice) */

int zx_WALK_WO_sa_Advice(struct zx_ctx* c, struct zx_sa_Advice_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_Assertion_s
#define EL_NS     sa
#define EL_TAG    Assertion

/* FUNC(zx_DUP_STRS_sa_Assertion) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->IssueInstant);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Subject(c, e);
  }
  {
      struct zx_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Conditions(c, e);
  }
  {
      struct zx_sa_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa_Advice_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Advice(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Statement);
  {
      struct zx_sa_AuthnStatement_s* e;
      for (e = x->AuthnStatement; e; e = (struct zx_sa_AuthnStatement_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_AuthnStatement(c, e);
  }
  {
      struct zx_sa_AuthzDecisionStatement_s* e;
      for (e = x->AuthzDecisionStatement; e; e = (struct zx_sa_AuthzDecisionStatement_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_AuthzDecisionStatement(c, e);
  }
  {
      struct zx_sa_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa_AttributeStatement_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_AttributeStatement(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_Assertion) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_Assertion_s* zx_DEEP_CLONE_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, int dup_strs)
{
  x = (struct zx_sa_Assertion_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_Assertion_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Version = zx_clone_attr(c, x->Version);
  x->ID = zx_clone_attr(c, x->ID);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      struct zx_sa_Subject_s* enn;
      for (enn = 0, e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Subject(c, e, dup_strs);
	  if (!enn)
	      x->Subject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Conditions_s* e;
      struct zx_sa_Conditions_s* en;
      struct zx_sa_Conditions_s* enn;
      for (enn = 0, e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Conditions(c, e, dup_strs);
	  if (!enn)
	      x->Conditions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Advice_s* e;
      struct zx_sa_Advice_s* en;
      struct zx_sa_Advice_s* enn;
      for (enn = 0, e = x->Advice; e; e = (struct zx_sa_Advice_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Advice(c, e, dup_strs);
	  if (!enn)
	      x->Advice = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Statement = zx_deep_clone_simple_elems(c,x->Statement, dup_strs);
  {
      struct zx_sa_AuthnStatement_s* e;
      struct zx_sa_AuthnStatement_s* en;
      struct zx_sa_AuthnStatement_s* enn;
      for (enn = 0, e = x->AuthnStatement; e; e = (struct zx_sa_AuthnStatement_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_AuthnStatement(c, e, dup_strs);
	  if (!enn)
	      x->AuthnStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_AuthzDecisionStatement_s* e;
      struct zx_sa_AuthzDecisionStatement_s* en;
      struct zx_sa_AuthzDecisionStatement_s* enn;
      for (enn = 0, e = x->AuthzDecisionStatement; e; e = (struct zx_sa_AuthzDecisionStatement_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_AuthzDecisionStatement(c, e, dup_strs);
	  if (!enn)
	      x->AuthzDecisionStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_AttributeStatement_s* e;
      struct zx_sa_AttributeStatement_s* en;
      struct zx_sa_AttributeStatement_s* enn;
      for (enn = 0, e = x->AttributeStatement; e; e = (struct zx_sa_AttributeStatement_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_AttributeStatement(c, e, dup_strs);
	  if (!enn)
	      x->AttributeStatement = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_Assertion) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      for (e = x->Subject; e; e = en) {
	  en = (struct zx_sa_Subject_s*)e->gg.g.n;
	  zx_FREE_sa_Subject(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Conditions_s* e;
      struct zx_sa_Conditions_s* en;
      for (e = x->Conditions; e; e = en) {
	  en = (struct zx_sa_Conditions_s*)e->gg.g.n;
	  zx_FREE_sa_Conditions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Advice_s* e;
      struct zx_sa_Advice_s* en;
      for (e = x->Advice; e; e = en) {
	  en = (struct zx_sa_Advice_s*)e->gg.g.n;
	  zx_FREE_sa_Advice(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Statement, free_strs);
  {
      struct zx_sa_AuthnStatement_s* e;
      struct zx_sa_AuthnStatement_s* en;
      for (e = x->AuthnStatement; e; e = en) {
	  en = (struct zx_sa_AuthnStatement_s*)e->gg.g.n;
	  zx_FREE_sa_AuthnStatement(c, e, free_strs);
      }
  }
  {
      struct zx_sa_AuthzDecisionStatement_s* e;
      struct zx_sa_AuthzDecisionStatement_s* en;
      for (e = x->AuthzDecisionStatement; e; e = en) {
	  en = (struct zx_sa_AuthzDecisionStatement_s*)e->gg.g.n;
	  zx_FREE_sa_AuthzDecisionStatement(c, e, free_strs);
      }
  }
  {
      struct zx_sa_AttributeStatement_s* e;
      struct zx_sa_AttributeStatement_s* en;
      for (e = x->AttributeStatement; e; e = en) {
	  en = (struct zx_sa_AttributeStatement_s*)e->gg.g.n;
	  zx_FREE_sa_AttributeStatement(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_Assertion) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_Assertion_s* zx_NEW_sa_Assertion(struct zx_ctx* c)
{
  struct zx_sa_Assertion_s* x = ZX_ZALLOC(c, struct zx_sa_Assertion_s);
  x->gg.g.tok = zx_sa_Assertion_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_Assertion) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Subject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Conditions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa_Advice_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Advice(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Statement, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_sa_AuthnStatement_s* e;
      for (e = x->AuthnStatement; e; e = (struct zx_sa_AuthnStatement_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_AuthnStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_AuthzDecisionStatement_s* e;
      for (e = x->AuthzDecisionStatement; e; e = (struct zx_sa_AuthzDecisionStatement_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_AuthzDecisionStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa_AttributeStatement_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_AttributeStatement(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_Assertion) */

int zx_WALK_WO_sa_Assertion(struct zx_ctx* c, struct zx_sa_Assertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_Attribute_s
#define EL_NS     sa
#define EL_TAG    Attribute

/* FUNC(zx_DUP_STRS_sa_Attribute) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Name);
  zx_dup_attr(c, x->NameFormat);
  zx_dup_attr(c, x->FriendlyName);

  zx_dup_strs_simple_elems(c, x->AttributeValue);

}

/* FUNC(zx_DEEP_CLONE_sa_Attribute) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_Attribute_s* zx_DEEP_CLONE_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, int dup_strs)
{
  x = (struct zx_sa_Attribute_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_Attribute_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Name = zx_clone_attr(c, x->Name);
  x->NameFormat = zx_clone_attr(c, x->NameFormat);
  x->FriendlyName = zx_clone_attr(c, x->FriendlyName);

  x->AttributeValue = zx_deep_clone_simple_elems(c,x->AttributeValue, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sa_Attribute) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Name, free_strs);
  zx_free_attr(c, x->NameFormat, free_strs);
  zx_free_attr(c, x->FriendlyName, free_strs);

  zx_free_simple_elems(c, x->AttributeValue, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_Attribute) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_Attribute_s* zx_NEW_sa_Attribute(struct zx_ctx* c)
{
  struct zx_sa_Attribute_s* x = ZX_ZALLOC(c, struct zx_sa_Attribute_s);
  x->gg.g.tok = zx_sa_Attribute_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_Attribute) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_Attribute) */

int zx_WALK_WO_sa_Attribute(struct zx_ctx* c, struct zx_sa_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_AttributeStatement_s
#define EL_NS     sa
#define EL_TAG    AttributeStatement

/* FUNC(zx_DUP_STRS_sa_AttributeStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Attribute(c, e);
  }
  {
      struct zx_sa_EncryptedAttribute_s* e;
      for (e = x->EncryptedAttribute; e; e = (struct zx_sa_EncryptedAttribute_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedAttribute(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_AttributeStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_AttributeStatement_s* zx_DEEP_CLONE_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, int dup_strs)
{
  x = (struct zx_sa_AttributeStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_AttributeStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_Attribute_s* e;
      struct zx_sa_Attribute_s* en;
      struct zx_sa_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedAttribute_s* e;
      struct zx_sa_EncryptedAttribute_s* en;
      struct zx_sa_EncryptedAttribute_s* enn;
      for (enn = 0, e = x->EncryptedAttribute; e; e = (struct zx_sa_EncryptedAttribute_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedAttribute(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedAttribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_AttributeStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_Attribute_s* e;
      struct zx_sa_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zx_sa_Attribute_s*)e->gg.g.n;
	  zx_FREE_sa_Attribute(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedAttribute_s* e;
      struct zx_sa_EncryptedAttribute_s* en;
      for (e = x->EncryptedAttribute; e; e = en) {
	  en = (struct zx_sa_EncryptedAttribute_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedAttribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_AttributeStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_AttributeStatement_s* zx_NEW_sa_AttributeStatement(struct zx_ctx* c)
{
  struct zx_sa_AttributeStatement_s* x = ZX_ZALLOC(c, struct zx_sa_AttributeStatement_s);
  x->gg.g.tok = zx_sa_AttributeStatement_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_AttributeStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedAttribute_s* e;
      for (e = x->EncryptedAttribute; e; e = (struct zx_sa_EncryptedAttribute_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedAttribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_AttributeStatement) */

int zx_WALK_WO_sa_AttributeStatement(struct zx_ctx* c, struct zx_sa_AttributeStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_AudienceRestriction_s
#define EL_NS     sa
#define EL_TAG    AudienceRestriction

/* FUNC(zx_DUP_STRS_sa_AudienceRestriction) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->Audience);

}

/* FUNC(zx_DEEP_CLONE_sa_AudienceRestriction) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_AudienceRestriction_s* zx_DEEP_CLONE_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, int dup_strs)
{
  x = (struct zx_sa_AudienceRestriction_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_AudienceRestriction_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->Audience = zx_deep_clone_simple_elems(c,x->Audience, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sa_AudienceRestriction) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->Audience, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_AudienceRestriction) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_AudienceRestriction_s* zx_NEW_sa_AudienceRestriction(struct zx_ctx* c)
{
  struct zx_sa_AudienceRestriction_s* x = ZX_ZALLOC(c, struct zx_sa_AudienceRestriction_s);
  x->gg.g.tok = zx_sa_AudienceRestriction_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_AudienceRestriction) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_AudienceRestriction) */

int zx_WALK_WO_sa_AudienceRestriction(struct zx_ctx* c, struct zx_sa_AudienceRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_AuthnContext_s
#define EL_NS     sa
#define EL_TAG    AuthnContext

/* FUNC(zx_DUP_STRS_sa_AuthnContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->AuthnContextClassRef);
  zx_dup_strs_simple_elems(c, x->AuthnContextDecl);
  zx_dup_strs_simple_elems(c, x->AuthnContextDeclRef);
  zx_dup_strs_simple_elems(c, x->AuthenticatingAuthority);

}

/* FUNC(zx_DEEP_CLONE_sa_AuthnContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_AuthnContext_s* zx_DEEP_CLONE_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, int dup_strs)
{
  x = (struct zx_sa_AuthnContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_AuthnContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->AuthnContextClassRef = zx_deep_clone_simple_elems(c,x->AuthnContextClassRef, dup_strs);
  x->AuthnContextDecl = zx_deep_clone_simple_elems(c,x->AuthnContextDecl, dup_strs);
  x->AuthnContextDeclRef = zx_deep_clone_simple_elems(c,x->AuthnContextDeclRef, dup_strs);
  x->AuthenticatingAuthority = zx_deep_clone_simple_elems(c,x->AuthenticatingAuthority, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sa_AuthnContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->AuthnContextClassRef, free_strs);
  zx_free_simple_elems(c, x->AuthnContextDecl, free_strs);
  zx_free_simple_elems(c, x->AuthnContextDeclRef, free_strs);
  zx_free_simple_elems(c, x->AuthenticatingAuthority, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_AuthnContext) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_AuthnContext_s* zx_NEW_sa_AuthnContext(struct zx_ctx* c)
{
  struct zx_sa_AuthnContext_s* x = ZX_ZALLOC(c, struct zx_sa_AuthnContext_s);
  x->gg.g.tok = zx_sa_AuthnContext_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_AuthnContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_AuthnContext) */

int zx_WALK_WO_sa_AuthnContext(struct zx_ctx* c, struct zx_sa_AuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_AuthnStatement_s
#define EL_NS     sa
#define EL_TAG    AuthnStatement

/* FUNC(zx_DUP_STRS_sa_AuthnStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->AuthnInstant);
  zx_dup_attr(c, x->SessionIndex);
  zx_dup_attr(c, x->SessionNotOnOrAfter);

  {
      struct zx_sa_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa_SubjectLocality_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_SubjectLocality(c, e);
  }
  {
      struct zx_sa_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zx_sa_AuthnContext_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_AuthnContext(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_AuthnStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_AuthnStatement_s* zx_DEEP_CLONE_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, int dup_strs)
{
  x = (struct zx_sa_AuthnStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_AuthnStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->AuthnInstant = zx_clone_attr(c, x->AuthnInstant);
  x->SessionIndex = zx_clone_attr(c, x->SessionIndex);
  x->SessionNotOnOrAfter = zx_clone_attr(c, x->SessionNotOnOrAfter);

  {
      struct zx_sa_SubjectLocality_s* e;
      struct zx_sa_SubjectLocality_s* en;
      struct zx_sa_SubjectLocality_s* enn;
      for (enn = 0, e = x->SubjectLocality; e; e = (struct zx_sa_SubjectLocality_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_SubjectLocality(c, e, dup_strs);
	  if (!enn)
	      x->SubjectLocality = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_AuthnContext_s* e;
      struct zx_sa_AuthnContext_s* en;
      struct zx_sa_AuthnContext_s* enn;
      for (enn = 0, e = x->AuthnContext; e; e = (struct zx_sa_AuthnContext_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_AuthnContext(c, e, dup_strs);
	  if (!enn)
	      x->AuthnContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_AuthnStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->AuthnInstant, free_strs);
  zx_free_attr(c, x->SessionIndex, free_strs);
  zx_free_attr(c, x->SessionNotOnOrAfter, free_strs);

  {
      struct zx_sa_SubjectLocality_s* e;
      struct zx_sa_SubjectLocality_s* en;
      for (e = x->SubjectLocality; e; e = en) {
	  en = (struct zx_sa_SubjectLocality_s*)e->gg.g.n;
	  zx_FREE_sa_SubjectLocality(c, e, free_strs);
      }
  }
  {
      struct zx_sa_AuthnContext_s* e;
      struct zx_sa_AuthnContext_s* en;
      for (e = x->AuthnContext; e; e = en) {
	  en = (struct zx_sa_AuthnContext_s*)e->gg.g.n;
	  zx_FREE_sa_AuthnContext(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_AuthnStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_AuthnStatement_s* zx_NEW_sa_AuthnStatement(struct zx_ctx* c)
{
  struct zx_sa_AuthnStatement_s* x = ZX_ZALLOC(c, struct zx_sa_AuthnStatement_s);
  x->gg.g.tok = zx_sa_AuthnStatement_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_AuthnStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa_SubjectLocality_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_SubjectLocality(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_AuthnContext_s* e;
      for (e = x->AuthnContext; e; e = (struct zx_sa_AuthnContext_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_AuthnContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_AuthnStatement) */

int zx_WALK_WO_sa_AuthnStatement(struct zx_ctx* c, struct zx_sa_AuthnStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_AuthzDecisionStatement_s
#define EL_NS     sa
#define EL_TAG    AuthzDecisionStatement

/* FUNC(zx_DUP_STRS_sa_AuthzDecisionStatement) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Resource);
  zx_dup_attr(c, x->Decision);

  {
      struct zx_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Action(c, e);
  }
  {
      struct zx_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Evidence(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_AuthzDecisionStatement) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_AuthzDecisionStatement_s* zx_DEEP_CLONE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, int dup_strs)
{
  x = (struct zx_sa_AuthzDecisionStatement_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_AuthzDecisionStatement_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Resource = zx_clone_attr(c, x->Resource);
  x->Decision = zx_clone_attr(c, x->Decision);

  {
      struct zx_sa_Action_s* e;
      struct zx_sa_Action_s* en;
      struct zx_sa_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Evidence_s* e;
      struct zx_sa_Evidence_s* en;
      struct zx_sa_Evidence_s* enn;
      for (enn = 0, e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Evidence(c, e, dup_strs);
	  if (!enn)
	      x->Evidence = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_AuthzDecisionStatement) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Resource, free_strs);
  zx_free_attr(c, x->Decision, free_strs);

  {
      struct zx_sa_Action_s* e;
      struct zx_sa_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zx_sa_Action_s*)e->gg.g.n;
	  zx_FREE_sa_Action(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Evidence_s* e;
      struct zx_sa_Evidence_s* en;
      for (e = x->Evidence; e; e = en) {
	  en = (struct zx_sa_Evidence_s*)e->gg.g.n;
	  zx_FREE_sa_Evidence(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_AuthzDecisionStatement) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_AuthzDecisionStatement_s* zx_NEW_sa_AuthzDecisionStatement(struct zx_ctx* c)
{
  struct zx_sa_AuthzDecisionStatement_s* x = ZX_ZALLOC(c, struct zx_sa_AuthzDecisionStatement_s);
  x->gg.g.tok = zx_sa_AuthzDecisionStatement_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_AuthzDecisionStatement) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Evidence(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_AuthzDecisionStatement) */

int zx_WALK_WO_sa_AuthzDecisionStatement(struct zx_ctx* c, struct zx_sa_AuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_BaseID_s
#define EL_NS     sa
#define EL_TAG    BaseID

/* FUNC(zx_DUP_STRS_sa_BaseID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NameQualifier);
  zx_dup_attr(c, x->SPNameQualifier);


}

/* FUNC(zx_DEEP_CLONE_sa_BaseID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_BaseID_s* zx_DEEP_CLONE_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, int dup_strs)
{
  x = (struct zx_sa_BaseID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_BaseID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NameQualifier = zx_clone_attr(c, x->NameQualifier);
  x->SPNameQualifier = zx_clone_attr(c, x->SPNameQualifier);


  return x;
}

/* FUNC(zx_FREE_sa_BaseID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NameQualifier, free_strs);
  zx_free_attr(c, x->SPNameQualifier, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_BaseID) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_BaseID_s* zx_NEW_sa_BaseID(struct zx_ctx* c)
{
  struct zx_sa_BaseID_s* x = ZX_ZALLOC(c, struct zx_sa_BaseID_s);
  x->gg.g.tok = zx_sa_BaseID_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_BaseID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_BaseID) */

int zx_WALK_WO_sa_BaseID(struct zx_ctx* c, struct zx_sa_BaseID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_Conditions_s
#define EL_NS     sa
#define EL_TAG    Conditions

/* FUNC(zx_DUP_STRS_sa_Conditions) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NotBefore);
  zx_dup_attr(c, x->NotOnOrAfter);

  zx_dup_strs_simple_elems(c, x->Condition);
  {
      struct zx_sa_AudienceRestriction_s* e;
      for (e = x->AudienceRestriction; e; e = (struct zx_sa_AudienceRestriction_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_AudienceRestriction(c, e);
  }
  {
      struct zx_sa_OneTimeUse_s* e;
      for (e = x->OneTimeUse; e; e = (struct zx_sa_OneTimeUse_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_OneTimeUse(c, e);
  }
  {
      struct zx_sa_ProxyRestriction_s* e;
      for (e = x->ProxyRestriction; e; e = (struct zx_sa_ProxyRestriction_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_ProxyRestriction(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_Conditions) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_Conditions_s* zx_DEEP_CLONE_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, int dup_strs)
{
  x = (struct zx_sa_Conditions_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_Conditions_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NotBefore = zx_clone_attr(c, x->NotBefore);
  x->NotOnOrAfter = zx_clone_attr(c, x->NotOnOrAfter);

  x->Condition = zx_deep_clone_simple_elems(c,x->Condition, dup_strs);
  {
      struct zx_sa_AudienceRestriction_s* e;
      struct zx_sa_AudienceRestriction_s* en;
      struct zx_sa_AudienceRestriction_s* enn;
      for (enn = 0, e = x->AudienceRestriction; e; e = (struct zx_sa_AudienceRestriction_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_AudienceRestriction(c, e, dup_strs);
	  if (!enn)
	      x->AudienceRestriction = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_OneTimeUse_s* e;
      struct zx_sa_OneTimeUse_s* en;
      struct zx_sa_OneTimeUse_s* enn;
      for (enn = 0, e = x->OneTimeUse; e; e = (struct zx_sa_OneTimeUse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_OneTimeUse(c, e, dup_strs);
	  if (!enn)
	      x->OneTimeUse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_ProxyRestriction_s* e;
      struct zx_sa_ProxyRestriction_s* en;
      struct zx_sa_ProxyRestriction_s* enn;
      for (enn = 0, e = x->ProxyRestriction; e; e = (struct zx_sa_ProxyRestriction_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_ProxyRestriction(c, e, dup_strs);
	  if (!enn)
	      x->ProxyRestriction = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_Conditions) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NotBefore, free_strs);
  zx_free_attr(c, x->NotOnOrAfter, free_strs);

  zx_free_simple_elems(c, x->Condition, free_strs);
  {
      struct zx_sa_AudienceRestriction_s* e;
      struct zx_sa_AudienceRestriction_s* en;
      for (e = x->AudienceRestriction; e; e = en) {
	  en = (struct zx_sa_AudienceRestriction_s*)e->gg.g.n;
	  zx_FREE_sa_AudienceRestriction(c, e, free_strs);
      }
  }
  {
      struct zx_sa_OneTimeUse_s* e;
      struct zx_sa_OneTimeUse_s* en;
      for (e = x->OneTimeUse; e; e = en) {
	  en = (struct zx_sa_OneTimeUse_s*)e->gg.g.n;
	  zx_FREE_sa_OneTimeUse(c, e, free_strs);
      }
  }
  {
      struct zx_sa_ProxyRestriction_s* e;
      struct zx_sa_ProxyRestriction_s* en;
      for (e = x->ProxyRestriction; e; e = en) {
	  en = (struct zx_sa_ProxyRestriction_s*)e->gg.g.n;
	  zx_FREE_sa_ProxyRestriction(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_Conditions) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_Conditions_s* zx_NEW_sa_Conditions(struct zx_ctx* c)
{
  struct zx_sa_Conditions_s* x = ZX_ZALLOC(c, struct zx_sa_Conditions_s);
  x->gg.g.tok = zx_sa_Conditions_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_Conditions) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_sa_AudienceRestriction_s* e;
      for (e = x->AudienceRestriction; e; e = (struct zx_sa_AudienceRestriction_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_AudienceRestriction(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_OneTimeUse_s* e;
      for (e = x->OneTimeUse; e; e = (struct zx_sa_OneTimeUse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_OneTimeUse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_ProxyRestriction_s* e;
      for (e = x->ProxyRestriction; e; e = (struct zx_sa_ProxyRestriction_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_ProxyRestriction(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_Conditions) */

int zx_WALK_WO_sa_Conditions(struct zx_ctx* c, struct zx_sa_Conditions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_EncryptedAssertion_s
#define EL_NS     sa
#define EL_TAG    EncryptedAssertion

/* FUNC(zx_DUP_STRS_sa_EncryptedAssertion) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedData(c, e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedKey(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_EncryptedAssertion) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_EncryptedAssertion_s* zx_DEEP_CLONE_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, int dup_strs)
{
  x = (struct zx_sa_EncryptedAssertion_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_EncryptedAssertion_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      struct zx_xenc_EncryptedData_s* enn;
      for (enn = 0, e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedData(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      struct zx_xenc_EncryptedKey_s* enn;
      for (enn = 0, e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedKey(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedKey = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_EncryptedAssertion) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      for (e = x->EncryptedData; e; e = en) {
	  en = (struct zx_xenc_EncryptedData_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedData(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      for (e = x->EncryptedKey; e; e = en) {
	  en = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedKey(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_EncryptedAssertion) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_EncryptedAssertion_s* zx_NEW_sa_EncryptedAssertion(struct zx_ctx* c)
{
  struct zx_sa_EncryptedAssertion_s* x = ZX_ZALLOC(c, struct zx_sa_EncryptedAssertion_s);
  x->gg.g.tok = zx_sa_EncryptedAssertion_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_EncryptedAssertion) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedKey(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_EncryptedAssertion) */

int zx_WALK_WO_sa_EncryptedAssertion(struct zx_ctx* c, struct zx_sa_EncryptedAssertion_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_EncryptedAttribute_s
#define EL_NS     sa
#define EL_TAG    EncryptedAttribute

/* FUNC(zx_DUP_STRS_sa_EncryptedAttribute) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedData(c, e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedKey(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_EncryptedAttribute) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_EncryptedAttribute_s* zx_DEEP_CLONE_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, int dup_strs)
{
  x = (struct zx_sa_EncryptedAttribute_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_EncryptedAttribute_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      struct zx_xenc_EncryptedData_s* enn;
      for (enn = 0, e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedData(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      struct zx_xenc_EncryptedKey_s* enn;
      for (enn = 0, e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedKey(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedKey = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_EncryptedAttribute) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      for (e = x->EncryptedData; e; e = en) {
	  en = (struct zx_xenc_EncryptedData_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedData(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      for (e = x->EncryptedKey; e; e = en) {
	  en = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedKey(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_EncryptedAttribute) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_EncryptedAttribute_s* zx_NEW_sa_EncryptedAttribute(struct zx_ctx* c)
{
  struct zx_sa_EncryptedAttribute_s* x = ZX_ZALLOC(c, struct zx_sa_EncryptedAttribute_s);
  x->gg.g.tok = zx_sa_EncryptedAttribute_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_EncryptedAttribute) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedKey(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_EncryptedAttribute) */

int zx_WALK_WO_sa_EncryptedAttribute(struct zx_ctx* c, struct zx_sa_EncryptedAttribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_EncryptedID_s
#define EL_NS     sa
#define EL_TAG    EncryptedID

/* FUNC(zx_DUP_STRS_sa_EncryptedID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedData(c, e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedKey(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_EncryptedID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_EncryptedID_s* zx_DEEP_CLONE_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, int dup_strs)
{
  x = (struct zx_sa_EncryptedID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_EncryptedID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      struct zx_xenc_EncryptedData_s* enn;
      for (enn = 0, e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedData(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      struct zx_xenc_EncryptedKey_s* enn;
      for (enn = 0, e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedKey(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedKey = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_EncryptedID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      for (e = x->EncryptedData; e; e = en) {
	  en = (struct zx_xenc_EncryptedData_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedData(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      for (e = x->EncryptedKey; e; e = en) {
	  en = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedKey(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_EncryptedID) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_EncryptedID_s* zx_NEW_sa_EncryptedID(struct zx_ctx* c)
{
  struct zx_sa_EncryptedID_s* x = ZX_ZALLOC(c, struct zx_sa_EncryptedID_s);
  x->gg.g.tok = zx_sa_EncryptedID_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_EncryptedID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedKey(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_EncryptedID) */

int zx_WALK_WO_sa_EncryptedID(struct zx_ctx* c, struct zx_sa_EncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_Evidence_s
#define EL_NS     sa
#define EL_TAG    Evidence

/* FUNC(zx_DUP_STRS_sa_Evidence) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->AssertionIDRef);
  zx_dup_strs_simple_elems(c, x->AssertionURIRef);
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Assertion(c, e);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedAssertion(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_Evidence) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_Evidence_s* zx_DEEP_CLONE_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, int dup_strs)
{
  x = (struct zx_sa_Evidence_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_Evidence_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->AssertionIDRef = zx_deep_clone_simple_elems(c,x->AssertionIDRef, dup_strs);
  x->AssertionURIRef = zx_deep_clone_simple_elems(c,x->AssertionURIRef, dup_strs);
  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      struct zx_sa_Assertion_s* enn;
      for (enn = 0, e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Assertion(c, e, dup_strs);
	  if (!enn)
	      x->Assertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      struct zx_sa_EncryptedAssertion_s* en;
      struct zx_sa_EncryptedAssertion_s* enn;
      for (enn = 0, e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedAssertion(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedAssertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_Evidence) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->AssertionIDRef, free_strs);
  zx_free_simple_elems(c, x->AssertionURIRef, free_strs);
  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      for (e = x->Assertion; e; e = en) {
	  en = (struct zx_sa_Assertion_s*)e->gg.g.n;
	  zx_FREE_sa_Assertion(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      struct zx_sa_EncryptedAssertion_s* en;
      for (e = x->EncryptedAssertion; e; e = en) {
	  en = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedAssertion(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_Evidence) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_Evidence_s* zx_NEW_sa_Evidence(struct zx_ctx* c)
{
  struct zx_sa_Evidence_s* x = ZX_ZALLOC(c, struct zx_sa_Evidence_s);
  x->gg.g.tok = zx_sa_Evidence_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_Evidence) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Assertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedAssertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_Evidence) */

int zx_WALK_WO_sa_Evidence(struct zx_ctx* c, struct zx_sa_Evidence_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_Issuer_s
#define EL_NS     sa
#define EL_TAG    Issuer

/* FUNC(zx_DUP_STRS_sa_Issuer) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NameQualifier);
  zx_dup_attr(c, x->SPNameQualifier);
  zx_dup_attr(c, x->Format);
  zx_dup_attr(c, x->SPProvidedID);


}

/* FUNC(zx_DEEP_CLONE_sa_Issuer) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_Issuer_s* zx_DEEP_CLONE_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, int dup_strs)
{
  x = (struct zx_sa_Issuer_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_Issuer_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NameQualifier = zx_clone_attr(c, x->NameQualifier);
  x->SPNameQualifier = zx_clone_attr(c, x->SPNameQualifier);
  x->Format = zx_clone_attr(c, x->Format);
  x->SPProvidedID = zx_clone_attr(c, x->SPProvidedID);


  return x;
}

/* FUNC(zx_FREE_sa_Issuer) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NameQualifier, free_strs);
  zx_free_attr(c, x->SPNameQualifier, free_strs);
  zx_free_attr(c, x->Format, free_strs);
  zx_free_attr(c, x->SPProvidedID, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_Issuer) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_Issuer_s* zx_NEW_sa_Issuer(struct zx_ctx* c)
{
  struct zx_sa_Issuer_s* x = ZX_ZALLOC(c, struct zx_sa_Issuer_s);
  x->gg.g.tok = zx_sa_Issuer_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_Issuer) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_Issuer) */

int zx_WALK_WO_sa_Issuer(struct zx_ctx* c, struct zx_sa_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_NameID_s
#define EL_NS     sa
#define EL_TAG    NameID

/* FUNC(zx_DUP_STRS_sa_NameID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NameQualifier);
  zx_dup_attr(c, x->SPNameQualifier);
  zx_dup_attr(c, x->Format);
  zx_dup_attr(c, x->SPProvidedID);


}

/* FUNC(zx_DEEP_CLONE_sa_NameID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_NameID_s* zx_DEEP_CLONE_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, int dup_strs)
{
  x = (struct zx_sa_NameID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_NameID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NameQualifier = zx_clone_attr(c, x->NameQualifier);
  x->SPNameQualifier = zx_clone_attr(c, x->SPNameQualifier);
  x->Format = zx_clone_attr(c, x->Format);
  x->SPProvidedID = zx_clone_attr(c, x->SPProvidedID);


  return x;
}

/* FUNC(zx_FREE_sa_NameID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NameQualifier, free_strs);
  zx_free_attr(c, x->SPNameQualifier, free_strs);
  zx_free_attr(c, x->Format, free_strs);
  zx_free_attr(c, x->SPProvidedID, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_NameID) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_NameID_s* zx_NEW_sa_NameID(struct zx_ctx* c)
{
  struct zx_sa_NameID_s* x = ZX_ZALLOC(c, struct zx_sa_NameID_s);
  x->gg.g.tok = zx_sa_NameID_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_NameID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_NameID) */

int zx_WALK_WO_sa_NameID(struct zx_ctx* c, struct zx_sa_NameID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_OneTimeUse_s
#define EL_NS     sa
#define EL_TAG    OneTimeUse

/* FUNC(zx_DUP_STRS_sa_OneTimeUse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_sa_OneTimeUse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_OneTimeUse_s* zx_DEEP_CLONE_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, int dup_strs)
{
  x = (struct zx_sa_OneTimeUse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_OneTimeUse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_sa_OneTimeUse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_OneTimeUse) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_OneTimeUse_s* zx_NEW_sa_OneTimeUse(struct zx_ctx* c)
{
  struct zx_sa_OneTimeUse_s* x = ZX_ZALLOC(c, struct zx_sa_OneTimeUse_s);
  x->gg.g.tok = zx_sa_OneTimeUse_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_OneTimeUse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_OneTimeUse) */

int zx_WALK_WO_sa_OneTimeUse(struct zx_ctx* c, struct zx_sa_OneTimeUse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_ProxyRestriction_s
#define EL_NS     sa
#define EL_TAG    ProxyRestriction

/* FUNC(zx_DUP_STRS_sa_ProxyRestriction) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Count);

  zx_dup_strs_simple_elems(c, x->Audience);

}

/* FUNC(zx_DEEP_CLONE_sa_ProxyRestriction) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_ProxyRestriction_s* zx_DEEP_CLONE_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, int dup_strs)
{
  x = (struct zx_sa_ProxyRestriction_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_ProxyRestriction_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Count = zx_clone_attr(c, x->Count);

  x->Audience = zx_deep_clone_simple_elems(c,x->Audience, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sa_ProxyRestriction) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Count, free_strs);

  zx_free_simple_elems(c, x->Audience, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_ProxyRestriction) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_ProxyRestriction_s* zx_NEW_sa_ProxyRestriction(struct zx_ctx* c)
{
  struct zx_sa_ProxyRestriction_s* x = ZX_ZALLOC(c, struct zx_sa_ProxyRestriction_s);
  x->gg.g.tok = zx_sa_ProxyRestriction_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_ProxyRestriction) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_ProxyRestriction) */

int zx_WALK_WO_sa_ProxyRestriction(struct zx_ctx* c, struct zx_sa_ProxyRestriction_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_Subject_s
#define EL_NS     sa
#define EL_TAG    Subject

/* FUNC(zx_DUP_STRS_sa_Subject) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_BaseID(c, e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_NameID(c, e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedID(c, e);
  }
  {
      struct zx_sa_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa_SubjectConfirmation_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_SubjectConfirmation(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_Subject) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_Subject_s* zx_DEEP_CLONE_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, int dup_strs)
{
  x = (struct zx_sa_Subject_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_Subject_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_BaseID_s* e;
      struct zx_sa_BaseID_s* en;
      struct zx_sa_BaseID_s* enn;
      for (enn = 0, e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_BaseID(c, e, dup_strs);
	  if (!enn)
	      x->BaseID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      struct zx_sa_NameID_s* enn;
      for (enn = 0, e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_NameID(c, e, dup_strs);
	  if (!enn)
	      x->NameID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      struct zx_sa_EncryptedID_s* enn;
      for (enn = 0, e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_SubjectConfirmation_s* e;
      struct zx_sa_SubjectConfirmation_s* en;
      struct zx_sa_SubjectConfirmation_s* enn;
      for (enn = 0, e = x->SubjectConfirmation; e; e = (struct zx_sa_SubjectConfirmation_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_SubjectConfirmation(c, e, dup_strs);
	  if (!enn)
	      x->SubjectConfirmation = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_Subject) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_BaseID_s* e;
      struct zx_sa_BaseID_s* en;
      for (e = x->BaseID; e; e = en) {
	  en = (struct zx_sa_BaseID_s*)e->gg.g.n;
	  zx_FREE_sa_BaseID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      for (e = x->NameID; e; e = en) {
	  en = (struct zx_sa_NameID_s*)e->gg.g.n;
	  zx_FREE_sa_NameID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      for (e = x->EncryptedID; e; e = en) {
	  en = (struct zx_sa_EncryptedID_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_SubjectConfirmation_s* e;
      struct zx_sa_SubjectConfirmation_s* en;
      for (e = x->SubjectConfirmation; e; e = en) {
	  en = (struct zx_sa_SubjectConfirmation_s*)e->gg.g.n;
	  zx_FREE_sa_SubjectConfirmation(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_Subject) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_Subject_s* zx_NEW_sa_Subject(struct zx_ctx* c)
{
  struct zx_sa_Subject_s* x = ZX_ZALLOC(c, struct zx_sa_Subject_s);
  x->gg.g.tok = zx_sa_Subject_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_Subject) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_BaseID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_NameID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa_SubjectConfirmation_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_SubjectConfirmation(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_Subject) */

int zx_WALK_WO_sa_Subject(struct zx_ctx* c, struct zx_sa_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_SubjectConfirmation_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmation

/* FUNC(zx_DUP_STRS_sa_SubjectConfirmation) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Method);

  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_BaseID(c, e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_NameID(c, e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedID(c, e);
  }
  {
      struct zx_sa_SubjectConfirmationData_s* e;
      for (e = x->SubjectConfirmationData; e; e = (struct zx_sa_SubjectConfirmationData_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_SubjectConfirmationData(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sa_SubjectConfirmation) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_SubjectConfirmation_s* zx_DEEP_CLONE_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, int dup_strs)
{
  x = (struct zx_sa_SubjectConfirmation_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_SubjectConfirmation_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Method = zx_clone_attr(c, x->Method);

  {
      struct zx_sa_BaseID_s* e;
      struct zx_sa_BaseID_s* en;
      struct zx_sa_BaseID_s* enn;
      for (enn = 0, e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_BaseID(c, e, dup_strs);
	  if (!enn)
	      x->BaseID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      struct zx_sa_NameID_s* enn;
      for (enn = 0, e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_NameID(c, e, dup_strs);
	  if (!enn)
	      x->NameID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      struct zx_sa_EncryptedID_s* enn;
      for (enn = 0, e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_SubjectConfirmationData_s* e;
      struct zx_sa_SubjectConfirmationData_s* en;
      struct zx_sa_SubjectConfirmationData_s* enn;
      for (enn = 0, e = x->SubjectConfirmationData; e; e = (struct zx_sa_SubjectConfirmationData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_SubjectConfirmationData(c, e, dup_strs);
	  if (!enn)
	      x->SubjectConfirmationData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sa_SubjectConfirmation) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Method, free_strs);

  {
      struct zx_sa_BaseID_s* e;
      struct zx_sa_BaseID_s* en;
      for (e = x->BaseID; e; e = en) {
	  en = (struct zx_sa_BaseID_s*)e->gg.g.n;
	  zx_FREE_sa_BaseID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      for (e = x->NameID; e; e = en) {
	  en = (struct zx_sa_NameID_s*)e->gg.g.n;
	  zx_FREE_sa_NameID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      for (e = x->EncryptedID; e; e = en) {
	  en = (struct zx_sa_EncryptedID_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_SubjectConfirmationData_s* e;
      struct zx_sa_SubjectConfirmationData_s* en;
      for (e = x->SubjectConfirmationData; e; e = en) {
	  en = (struct zx_sa_SubjectConfirmationData_s*)e->gg.g.n;
	  zx_FREE_sa_SubjectConfirmationData(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_SubjectConfirmation) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_SubjectConfirmation_s* zx_NEW_sa_SubjectConfirmation(struct zx_ctx* c)
{
  struct zx_sa_SubjectConfirmation_s* x = ZX_ZALLOC(c, struct zx_sa_SubjectConfirmation_s);
  x->gg.g.tok = zx_sa_SubjectConfirmation_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_SubjectConfirmation) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_BaseID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_NameID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_SubjectConfirmationData_s* e;
      for (e = x->SubjectConfirmationData; e; e = (struct zx_sa_SubjectConfirmationData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_SubjectConfirmationData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sa_SubjectConfirmation) */

int zx_WALK_WO_sa_SubjectConfirmation(struct zx_ctx* c, struct zx_sa_SubjectConfirmation_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_SubjectConfirmationData_s
#define EL_NS     sa
#define EL_TAG    SubjectConfirmationData

/* FUNC(zx_DUP_STRS_sa_SubjectConfirmationData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->NotBefore);
  zx_dup_attr(c, x->NotOnOrAfter);
  zx_dup_attr(c, x->Recipient);
  zx_dup_attr(c, x->InResponseTo);
  zx_dup_attr(c, x->Address);


}

/* FUNC(zx_DEEP_CLONE_sa_SubjectConfirmationData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_SubjectConfirmationData_s* zx_DEEP_CLONE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, int dup_strs)
{
  x = (struct zx_sa_SubjectConfirmationData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_SubjectConfirmationData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->NotBefore = zx_clone_attr(c, x->NotBefore);
  x->NotOnOrAfter = zx_clone_attr(c, x->NotOnOrAfter);
  x->Recipient = zx_clone_attr(c, x->Recipient);
  x->InResponseTo = zx_clone_attr(c, x->InResponseTo);
  x->Address = zx_clone_attr(c, x->Address);


  return x;
}

/* FUNC(zx_FREE_sa_SubjectConfirmationData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->NotBefore, free_strs);
  zx_free_attr(c, x->NotOnOrAfter, free_strs);
  zx_free_attr(c, x->Recipient, free_strs);
  zx_free_attr(c, x->InResponseTo, free_strs);
  zx_free_attr(c, x->Address, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_SubjectConfirmationData) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_SubjectConfirmationData_s* zx_NEW_sa_SubjectConfirmationData(struct zx_ctx* c)
{
  struct zx_sa_SubjectConfirmationData_s* x = ZX_ZALLOC(c, struct zx_sa_SubjectConfirmationData_s);
  x->gg.g.tok = zx_sa_SubjectConfirmationData_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_SubjectConfirmationData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_SubjectConfirmationData) */

int zx_WALK_WO_sa_SubjectConfirmationData(struct zx_ctx* c, struct zx_sa_SubjectConfirmationData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_SubjectLocality_s
#define EL_NS     sa
#define EL_TAG    SubjectLocality

/* FUNC(zx_DUP_STRS_sa_SubjectLocality) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Address);
  zx_dup_attr(c, x->DNSName);


}

/* FUNC(zx_DEEP_CLONE_sa_SubjectLocality) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_SubjectLocality_s* zx_DEEP_CLONE_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, int dup_strs)
{
  x = (struct zx_sa_SubjectLocality_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_SubjectLocality_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Address = zx_clone_attr(c, x->Address);
  x->DNSName = zx_clone_attr(c, x->DNSName);


  return x;
}

/* FUNC(zx_FREE_sa_SubjectLocality) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Address, free_strs);
  zx_free_attr(c, x->DNSName, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_SubjectLocality) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_SubjectLocality_s* zx_NEW_sa_SubjectLocality(struct zx_ctx* c)
{
  struct zx_sa_SubjectLocality_s* x = ZX_ZALLOC(c, struct zx_sa_SubjectLocality_s);
  x->gg.g.tok = zx_sa_SubjectLocality_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_SubjectLocality) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_SubjectLocality) */

int zx_WALK_WO_sa_SubjectLocality(struct zx_ctx* c, struct zx_sa_SubjectLocality_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_sa_TestElem_s
#define EL_NS     sa
#define EL_TAG    TestElem

/* FUNC(zx_DUP_STRS_sa_TestElem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->AttributeValue);

}

/* FUNC(zx_DEEP_CLONE_sa_TestElem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sa_TestElem_s* zx_DEEP_CLONE_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, int dup_strs)
{
  x = (struct zx_sa_TestElem_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sa_TestElem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->AttributeValue = zx_deep_clone_simple_elems(c,x->AttributeValue, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sa_TestElem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->AttributeValue, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sa_TestElem) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sa_TestElem_s* zx_NEW_sa_TestElem(struct zx_ctx* c)
{
  struct zx_sa_TestElem_s* x = ZX_ZALLOC(c, struct zx_sa_TestElem_s);
  x->gg.g.tok = zx_sa_TestElem_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sa_TestElem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sa_TestElem) */

int zx_WALK_WO_sa_TestElem(struct zx_ctx* c, struct zx_sa_TestElem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   se_Body
#define EL_STRUCT zx_se_Body_s
#define EL_NS     se
#define EL_TAG    Body

/* FUNC(zx_DUP_STRS_se_Body) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ArtifactResolve(c, e);
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ArtifactResponse(c, e);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ManageNameIDRequest(c, e);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ManageNameIDResponse(c, e);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_LogoutRequest(c, e);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_LogoutResponse(c, e);
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_NameIDMappingRequest(c, e);
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_NameIDMappingResponse(c, e);
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AttributeQuery(c, e);
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AuthnQuery(c, e);
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AuthzDecisionQuery(c, e);
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AssertionIDRequest(c, e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Response(c, e);
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n)
	  zx_DUP_STRS_se_Fault(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_se_Body) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_Body_s* zx_DEEP_CLONE_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, int dup_strs)
{
  x = (struct zx_se_Body_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_Body_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_ArtifactResolve_s* e;
      struct zx_sp_ArtifactResolve_s* en;
      struct zx_sp_ArtifactResolve_s* enn;
      for (enn = 0, e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ArtifactResolve(c, e, dup_strs);
	  if (!enn)
	      x->ArtifactResolve = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      struct zx_sp_ArtifactResponse_s* en;
      struct zx_sp_ArtifactResponse_s* enn;
      for (enn = 0, e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ArtifactResponse(c, e, dup_strs);
	  if (!enn)
	      x->ArtifactResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      struct zx_sp_ManageNameIDRequest_s* en;
      struct zx_sp_ManageNameIDRequest_s* enn;
      for (enn = 0, e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ManageNameIDRequest(c, e, dup_strs);
	  if (!enn)
	      x->ManageNameIDRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      struct zx_sp_ManageNameIDResponse_s* en;
      struct zx_sp_ManageNameIDResponse_s* enn;
      for (enn = 0, e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ManageNameIDResponse(c, e, dup_strs);
	  if (!enn)
	      x->ManageNameIDResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      struct zx_sp_LogoutRequest_s* en;
      struct zx_sp_LogoutRequest_s* enn;
      for (enn = 0, e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_LogoutRequest(c, e, dup_strs);
	  if (!enn)
	      x->LogoutRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      struct zx_sp_LogoutResponse_s* en;
      struct zx_sp_LogoutResponse_s* enn;
      for (enn = 0, e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_LogoutResponse(c, e, dup_strs);
	  if (!enn)
	      x->LogoutResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      struct zx_sp_NameIDMappingRequest_s* en;
      struct zx_sp_NameIDMappingRequest_s* enn;
      for (enn = 0, e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_NameIDMappingRequest(c, e, dup_strs);
	  if (!enn)
	      x->NameIDMappingRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      struct zx_sp_NameIDMappingResponse_s* en;
      struct zx_sp_NameIDMappingResponse_s* enn;
      for (enn = 0, e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_NameIDMappingResponse(c, e, dup_strs);
	  if (!enn)
	      x->NameIDMappingResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      struct zx_sp_AttributeQuery_s* en;
      struct zx_sp_AttributeQuery_s* enn;
      for (enn = 0, e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AttributeQuery(c, e, dup_strs);
	  if (!enn)
	      x->AttributeQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      struct zx_sp_AuthnQuery_s* en;
      struct zx_sp_AuthnQuery_s* enn;
      for (enn = 0, e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AuthnQuery(c, e, dup_strs);
	  if (!enn)
	      x->AuthnQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      struct zx_sp_AuthzDecisionQuery_s* en;
      struct zx_sp_AuthzDecisionQuery_s* enn;
      for (enn = 0, e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AuthzDecisionQuery(c, e, dup_strs);
	  if (!enn)
	      x->AuthzDecisionQuery = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      struct zx_sp_AssertionIDRequest_s* en;
      struct zx_sp_AssertionIDRequest_s* enn;
      for (enn = 0, e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AssertionIDRequest(c, e, dup_strs);
	  if (!enn)
	      x->AssertionIDRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Response_s* e;
      struct zx_sp_Response_s* en;
      struct zx_sp_Response_s* enn;
      for (enn = 0, e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Response(c, e, dup_strs);
	  if (!enn)
	      x->Response = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_se_Fault_s* e;
      struct zx_se_Fault_s* en;
      struct zx_se_Fault_s* enn;
      for (enn = 0, e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_Fault(c, e, dup_strs);
	  if (!enn)
	      x->Fault = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_se_Body) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_ArtifactResolve_s* e;
      struct zx_sp_ArtifactResolve_s* en;
      for (e = x->ArtifactResolve; e; e = en) {
	  en = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n;
	  zx_FREE_sp_ArtifactResolve(c, e, free_strs);
      }
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      struct zx_sp_ArtifactResponse_s* en;
      for (e = x->ArtifactResponse; e; e = en) {
	  en = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n;
	  zx_FREE_sp_ArtifactResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      struct zx_sp_ManageNameIDRequest_s* en;
      for (e = x->ManageNameIDRequest; e; e = en) {
	  en = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n;
	  zx_FREE_sp_ManageNameIDRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      struct zx_sp_ManageNameIDResponse_s* en;
      for (e = x->ManageNameIDResponse; e; e = en) {
	  en = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n;
	  zx_FREE_sp_ManageNameIDResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      struct zx_sp_LogoutRequest_s* en;
      for (e = x->LogoutRequest; e; e = en) {
	  en = (struct zx_sp_LogoutRequest_s*)e->gg.g.n;
	  zx_FREE_sp_LogoutRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      struct zx_sp_LogoutResponse_s* en;
      for (e = x->LogoutResponse; e; e = en) {
	  en = (struct zx_sp_LogoutResponse_s*)e->gg.g.n;
	  zx_FREE_sp_LogoutResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      struct zx_sp_NameIDMappingRequest_s* en;
      for (e = x->NameIDMappingRequest; e; e = en) {
	  en = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n;
	  zx_FREE_sp_NameIDMappingRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      struct zx_sp_NameIDMappingResponse_s* en;
      for (e = x->NameIDMappingResponse; e; e = en) {
	  en = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n;
	  zx_FREE_sp_NameIDMappingResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      struct zx_sp_AttributeQuery_s* en;
      for (e = x->AttributeQuery; e; e = en) {
	  en = (struct zx_sp_AttributeQuery_s*)e->gg.g.n;
	  zx_FREE_sp_AttributeQuery(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      struct zx_sp_AuthnQuery_s* en;
      for (e = x->AuthnQuery; e; e = en) {
	  en = (struct zx_sp_AuthnQuery_s*)e->gg.g.n;
	  zx_FREE_sp_AuthnQuery(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      struct zx_sp_AuthzDecisionQuery_s* en;
      for (e = x->AuthzDecisionQuery; e; e = en) {
	  en = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n;
	  zx_FREE_sp_AuthzDecisionQuery(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      struct zx_sp_AssertionIDRequest_s* en;
      for (e = x->AssertionIDRequest; e; e = en) {
	  en = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n;
	  zx_FREE_sp_AssertionIDRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Response_s* e;
      struct zx_sp_Response_s* en;
      for (e = x->Response; e; e = en) {
	  en = (struct zx_sp_Response_s*)e->gg.g.n;
	  zx_FREE_sp_Response(c, e, free_strs);
      }
  }
  {
      struct zx_se_Fault_s* e;
      struct zx_se_Fault_s* en;
      for (e = x->Fault; e; e = en) {
	  en = (struct zx_se_Fault_s*)e->gg.g.n;
	  zx_FREE_se_Fault(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_Body) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_Body_s* zx_NEW_se_Body(struct zx_ctx* c)
{
  struct zx_se_Body_s* x = ZX_ZALLOC(c, struct zx_se_Body_s);
  x->gg.g.tok = zx_se_Body_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_Body) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sp_ArtifactResolve_s* e;
      for (e = x->ArtifactResolve; e; e = (struct zx_sp_ArtifactResolve_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ArtifactResolve(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_ArtifactResponse_s* e;
      for (e = x->ArtifactResponse; e; e = (struct zx_sp_ArtifactResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ArtifactResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ManageNameIDRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ManageNameIDResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_LogoutRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_LogoutResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_NameIDMappingRequest_s* e;
      for (e = x->NameIDMappingRequest; e; e = (struct zx_sp_NameIDMappingRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_NameIDMappingRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_NameIDMappingResponse_s* e;
      for (e = x->NameIDMappingResponse; e; e = (struct zx_sp_NameIDMappingResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_NameIDMappingResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AttributeQuery_s* e;
      for (e = x->AttributeQuery; e; e = (struct zx_sp_AttributeQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AttributeQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AuthnQuery_s* e;
      for (e = x->AuthnQuery; e; e = (struct zx_sp_AuthnQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AuthnQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AuthzDecisionQuery_s* e;
      for (e = x->AuthzDecisionQuery; e; e = (struct zx_sp_AuthzDecisionQuery_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AuthzDecisionQuery(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AssertionIDRequest_s* e;
      for (e = x->AssertionIDRequest; e; e = (struct zx_sp_AssertionIDRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AssertionIDRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Response(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_se_Fault_s* e;
      for (e = x->Fault; e; e = (struct zx_se_Fault_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_Fault(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_se_Body) */

int zx_WALK_WO_se_Body(struct zx_ctx* c, struct zx_se_Body_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   se_Envelope
#define EL_STRUCT zx_se_Envelope_s
#define EL_NS     se
#define EL_TAG    Envelope

/* FUNC(zx_DUP_STRS_se_Envelope) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n)
	  zx_DUP_STRS_se_Header(c, e);
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n)
	  zx_DUP_STRS_se_Body(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_se_Envelope) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_Envelope_s* zx_DEEP_CLONE_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, int dup_strs)
{
  x = (struct zx_se_Envelope_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_Envelope_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_se_Header_s* e;
      struct zx_se_Header_s* en;
      struct zx_se_Header_s* enn;
      for (enn = 0, e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_Header(c, e, dup_strs);
	  if (!enn)
	      x->Header = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_se_Body_s* e;
      struct zx_se_Body_s* en;
      struct zx_se_Body_s* enn;
      for (enn = 0, e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_Body(c, e, dup_strs);
	  if (!enn)
	      x->Body = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_se_Envelope) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_se_Header_s* e;
      struct zx_se_Header_s* en;
      for (e = x->Header; e; e = en) {
	  en = (struct zx_se_Header_s*)e->gg.g.n;
	  zx_FREE_se_Header(c, e, free_strs);
      }
  }
  {
      struct zx_se_Body_s* e;
      struct zx_se_Body_s* en;
      for (e = x->Body; e; e = en) {
	  en = (struct zx_se_Body_s*)e->gg.g.n;
	  zx_FREE_se_Body(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_Envelope) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_Envelope_s* zx_NEW_se_Envelope(struct zx_ctx* c)
{
  struct zx_se_Envelope_s* x = ZX_ZALLOC(c, struct zx_se_Envelope_s);
  x->gg.g.tok = zx_se_Envelope_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_Envelope) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_se_Header_s* e;
      for (e = x->Header; e; e = (struct zx_se_Header_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_Header(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_se_Body_s* e;
      for (e = x->Body; e; e = (struct zx_se_Body_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_Body(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_se_Envelope) */

int zx_WALK_WO_se_Envelope(struct zx_ctx* c, struct zx_se_Envelope_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   se_Fault
#define EL_STRUCT zx_se_Fault_s
#define EL_NS     se
#define EL_TAG    Fault

/* FUNC(zx_DUP_STRS_se_Fault) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->faultcode);
  zx_dup_strs_simple_elems(c, x->faultstring);
  zx_dup_strs_simple_elems(c, x->faultactor);
  {
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n)
	  zx_DUP_STRS_se_detail(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_se_Fault) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_Fault_s* zx_DEEP_CLONE_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, int dup_strs)
{
  x = (struct zx_se_Fault_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_Fault_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->faultcode = zx_deep_clone_simple_elems(c,x->faultcode, dup_strs);
  x->faultstring = zx_deep_clone_simple_elems(c,x->faultstring, dup_strs);
  x->faultactor = zx_deep_clone_simple_elems(c,x->faultactor, dup_strs);
  {
      struct zx_se_detail_s* e;
      struct zx_se_detail_s* en;
      struct zx_se_detail_s* enn;
      for (enn = 0, e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_detail(c, e, dup_strs);
	  if (!enn)
	      x->detail = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_se_Fault) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->faultcode, free_strs);
  zx_free_simple_elems(c, x->faultstring, free_strs);
  zx_free_simple_elems(c, x->faultactor, free_strs);
  {
      struct zx_se_detail_s* e;
      struct zx_se_detail_s* en;
      for (e = x->detail; e; e = en) {
	  en = (struct zx_se_detail_s*)e->gg.g.n;
	  zx_FREE_se_detail(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_Fault) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_Fault_s* zx_NEW_se_Fault(struct zx_ctx* c)
{
  struct zx_se_Fault_s* x = ZX_ZALLOC(c, struct zx_se_Fault_s);
  x->gg.g.tok = zx_se_Fault_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_Fault) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_se_detail_s* e;
      for (e = x->detail; e; e = (struct zx_se_detail_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_detail(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_se_Fault) */

int zx_WALK_WO_se_Fault(struct zx_ctx* c, struct zx_se_Fault_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   se_Header
#define EL_STRUCT zx_se_Header_s
#define EL_NS     se
#define EL_TAG    Header

/* FUNC(zx_DUP_STRS_se_Header) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_se_Header) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_Header_s* zx_DEEP_CLONE_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, int dup_strs)
{
  x = (struct zx_se_Header_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_Header_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_se_Header) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_Header) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_Header_s* zx_NEW_se_Header(struct zx_ctx* c)
{
  struct zx_se_Header_s* x = ZX_ZALLOC(c, struct zx_se_Header_s);
  x->gg.g.tok = zx_se_Header_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_Header) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_se_Header) */

int zx_WALK_WO_se_Header(struct zx_ctx* c, struct zx_se_Header_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   se_detail
#define EL_STRUCT zx_se_detail_s
#define EL_NS     se
#define EL_TAG    detail

/* FUNC(zx_DUP_STRS_se_detail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_se_detail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_se_detail_s* zx_DEEP_CLONE_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, int dup_strs)
{
  x = (struct zx_se_detail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_se_detail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_se_detail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_se_detail) */

/* Trivial allocator/constructor for the datatype. */

struct zx_se_detail_s* zx_NEW_se_detail(struct zx_ctx* c)
{
  struct zx_se_detail_s* x = ZX_ZALLOC(c, struct zx_se_detail_s);
  x->gg.g.tok = zx_se_detail_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_se_detail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_se_detail) */

int zx_WALK_WO_se_detail(struct zx_ctx* c, struct zx_se_detail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_ArtifactResolve
#define EL_STRUCT zx_sp_ArtifactResolve_s
#define EL_NS     sp
#define EL_TAG    ArtifactResolve

/* FUNC(zx_DUP_STRS_sp_ArtifactResolve) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Artifact);

}

/* FUNC(zx_DEEP_CLONE_sp_ArtifactResolve) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_ArtifactResolve_s* zx_DEEP_CLONE_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, int dup_strs)
{
  x = (struct zx_sp_ArtifactResolve_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_ArtifactResolve_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Artifact = zx_deep_clone_simple_elems(c,x->Artifact, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sp_ArtifactResolve) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Artifact, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_ArtifactResolve) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_ArtifactResolve_s* zx_NEW_sp_ArtifactResolve(struct zx_ctx* c)
{
  struct zx_sp_ArtifactResolve_s* x = ZX_ZALLOC(c, struct zx_sp_ArtifactResolve_s);
  x->gg.g.tok = zx_sp_ArtifactResolve_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_ArtifactResolve) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Artifact, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_ArtifactResolve) */

int zx_WALK_WO_sp_ArtifactResolve(struct zx_ctx* c, struct zx_sp_ArtifactResolve_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_ArtifactResponse
#define EL_STRUCT zx_sp_ArtifactResponse_s
#define EL_NS     sp
#define EL_TAG    ArtifactResponse

/* FUNC(zx_DUP_STRS_sp_ArtifactResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->InResponseTo);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Status(c, e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Response(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_ArtifactResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_ArtifactResponse_s* zx_DEEP_CLONE_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, int dup_strs)
{
  x = (struct zx_sp_ArtifactResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_ArtifactResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->InResponseTo = zx_clone_attr(c, x->InResponseTo);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      struct zx_sp_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Response_s* e;
      struct zx_sp_Response_s* en;
      struct zx_sp_Response_s* enn;
      for (enn = 0, e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Response(c, e, dup_strs);
	  if (!enn)
	      x->Response = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_ArtifactResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->InResponseTo, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_sp_Status_s*)e->gg.g.n;
	  zx_FREE_sp_Status(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Response_s* e;
      struct zx_sp_Response_s* en;
      for (e = x->Response; e; e = en) {
	  en = (struct zx_sp_Response_s*)e->gg.g.n;
	  zx_FREE_sp_Response(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_ArtifactResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_ArtifactResponse_s* zx_NEW_sp_ArtifactResponse(struct zx_ctx* c)
{
  struct zx_sp_ArtifactResponse_s* x = ZX_ZALLOC(c, struct zx_sp_ArtifactResponse_s);
  x->gg.g.tok = zx_sp_ArtifactResponse_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_ArtifactResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Response(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_ArtifactResponse) */

int zx_WALK_WO_sp_ArtifactResponse(struct zx_ctx* c, struct zx_sp_ArtifactResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_AssertionIDRequest
#define EL_STRUCT zx_sp_AssertionIDRequest_s
#define EL_NS     sp
#define EL_TAG    AssertionIDRequest

/* FUNC(zx_DUP_STRS_sp_AssertionIDRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  zx_dup_strs_simple_elems(c, x->AssertionIDRef);

}

/* FUNC(zx_DEEP_CLONE_sp_AssertionIDRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_AssertionIDRequest_s* zx_DEEP_CLONE_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, int dup_strs)
{
  x = (struct zx_sp_AssertionIDRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_AssertionIDRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->AssertionIDRef = zx_deep_clone_simple_elems(c,x->AssertionIDRef, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sp_AssertionIDRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->AssertionIDRef, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_AssertionIDRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_AssertionIDRequest_s* zx_NEW_sp_AssertionIDRequest(struct zx_ctx* c)
{
  struct zx_sp_AssertionIDRequest_s* x = ZX_ZALLOC(c, struct zx_sp_AssertionIDRequest_s);
  x->gg.g.tok = zx_sp_AssertionIDRequest_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_AssertionIDRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->AssertionIDRef, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_AssertionIDRequest) */

int zx_WALK_WO_sp_AssertionIDRequest(struct zx_ctx* c, struct zx_sp_AssertionIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_AttributeQuery
#define EL_STRUCT zx_sp_AttributeQuery_s
#define EL_NS     sp
#define EL_TAG    AttributeQuery

/* FUNC(zx_DUP_STRS_sp_AttributeQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Subject(c, e);
  }
  {
      struct zx_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Attribute(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_AttributeQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_AttributeQuery_s* zx_DEEP_CLONE_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, int dup_strs)
{
  x = (struct zx_sp_AttributeQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_AttributeQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      struct zx_sa_Subject_s* enn;
      for (enn = 0, e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Subject(c, e, dup_strs);
	  if (!enn)
	      x->Subject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Attribute_s* e;
      struct zx_sa_Attribute_s* en;
      struct zx_sa_Attribute_s* enn;
      for (enn = 0, e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Attribute(c, e, dup_strs);
	  if (!enn)
	      x->Attribute = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_AttributeQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      for (e = x->Subject; e; e = en) {
	  en = (struct zx_sa_Subject_s*)e->gg.g.n;
	  zx_FREE_sa_Subject(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Attribute_s* e;
      struct zx_sa_Attribute_s* en;
      for (e = x->Attribute; e; e = en) {
	  en = (struct zx_sa_Attribute_s*)e->gg.g.n;
	  zx_FREE_sa_Attribute(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_AttributeQuery) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_AttributeQuery_s* zx_NEW_sp_AttributeQuery(struct zx_ctx* c)
{
  struct zx_sp_AttributeQuery_s* x = ZX_ZALLOC(c, struct zx_sp_AttributeQuery_s);
  x->gg.g.tok = zx_sp_AttributeQuery_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_AttributeQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Subject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa_Attribute_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Attribute(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_AttributeQuery) */

int zx_WALK_WO_sp_AttributeQuery(struct zx_ctx* c, struct zx_sp_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_AuthnQuery
#define EL_STRUCT zx_sp_AuthnQuery_s
#define EL_NS     sp
#define EL_TAG    AuthnQuery

/* FUNC(zx_DUP_STRS_sp_AuthnQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);
  zx_dup_attr(c, x->SessionIndex);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Subject(c, e);
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      for (e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_RequestedAuthnContext(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_AuthnQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_AuthnQuery_s* zx_DEEP_CLONE_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, int dup_strs)
{
  x = (struct zx_sp_AuthnQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_AuthnQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);
  x->SessionIndex = zx_clone_attr(c, x->SessionIndex);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      struct zx_sa_Subject_s* enn;
      for (enn = 0, e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Subject(c, e, dup_strs);
	  if (!enn)
	      x->Subject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      struct zx_sp_RequestedAuthnContext_s* en;
      struct zx_sp_RequestedAuthnContext_s* enn;
      for (enn = 0, e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_RequestedAuthnContext(c, e, dup_strs);
	  if (!enn)
	      x->RequestedAuthnContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_AuthnQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);
  zx_free_attr(c, x->SessionIndex, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      for (e = x->Subject; e; e = en) {
	  en = (struct zx_sa_Subject_s*)e->gg.g.n;
	  zx_FREE_sa_Subject(c, e, free_strs);
      }
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      struct zx_sp_RequestedAuthnContext_s* en;
      for (e = x->RequestedAuthnContext; e; e = en) {
	  en = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n;
	  zx_FREE_sp_RequestedAuthnContext(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_AuthnQuery) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_AuthnQuery_s* zx_NEW_sp_AuthnQuery(struct zx_ctx* c)
{
  struct zx_sp_AuthnQuery_s* x = ZX_ZALLOC(c, struct zx_sp_AuthnQuery_s);
  x->gg.g.tok = zx_sp_AuthnQuery_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_AuthnQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Subject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      for (e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_RequestedAuthnContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_AuthnQuery) */

int zx_WALK_WO_sp_AuthnQuery(struct zx_ctx* c, struct zx_sp_AuthnQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_AuthnRequest
#define EL_STRUCT zx_sp_AuthnRequest_s
#define EL_NS     sp
#define EL_TAG    AuthnRequest

/* FUNC(zx_DUP_STRS_sp_AuthnRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);
  zx_dup_attr(c, x->ForceAuthn);
  zx_dup_attr(c, x->IsPassive);
  zx_dup_attr(c, x->ProtocolBinding);
  zx_dup_attr(c, x->AssertionConsumerServiceIndex);
  zx_dup_attr(c, x->AssertionConsumerServiceURL);
  zx_dup_attr(c, x->AttributeConsumingServiceIndex);
  zx_dup_attr(c, x->ProviderName);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Subject(c, e);
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      for (e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_NameIDPolicy(c, e);
  }
  {
      struct zx_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Conditions(c, e);
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      for (e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_RequestedAuthnContext(c, e);
  }
  {
      struct zx_sp_Scoping_s* e;
      for (e = x->Scoping; e; e = (struct zx_sp_Scoping_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Scoping(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_AuthnRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_AuthnRequest_s* zx_DEEP_CLONE_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, int dup_strs)
{
  x = (struct zx_sp_AuthnRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_AuthnRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);
  x->ForceAuthn = zx_clone_attr(c, x->ForceAuthn);
  x->IsPassive = zx_clone_attr(c, x->IsPassive);
  x->ProtocolBinding = zx_clone_attr(c, x->ProtocolBinding);
  x->AssertionConsumerServiceIndex = zx_clone_attr(c, x->AssertionConsumerServiceIndex);
  x->AssertionConsumerServiceURL = zx_clone_attr(c, x->AssertionConsumerServiceURL);
  x->AttributeConsumingServiceIndex = zx_clone_attr(c, x->AttributeConsumingServiceIndex);
  x->ProviderName = zx_clone_attr(c, x->ProviderName);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      struct zx_sa_Subject_s* enn;
      for (enn = 0, e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Subject(c, e, dup_strs);
	  if (!enn)
	      x->Subject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      struct zx_sp_NameIDPolicy_s* en;
      struct zx_sp_NameIDPolicy_s* enn;
      for (enn = 0, e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_NameIDPolicy(c, e, dup_strs);
	  if (!enn)
	      x->NameIDPolicy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Conditions_s* e;
      struct zx_sa_Conditions_s* en;
      struct zx_sa_Conditions_s* enn;
      for (enn = 0, e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Conditions(c, e, dup_strs);
	  if (!enn)
	      x->Conditions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      struct zx_sp_RequestedAuthnContext_s* en;
      struct zx_sp_RequestedAuthnContext_s* enn;
      for (enn = 0, e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_RequestedAuthnContext(c, e, dup_strs);
	  if (!enn)
	      x->RequestedAuthnContext = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Scoping_s* e;
      struct zx_sp_Scoping_s* en;
      struct zx_sp_Scoping_s* enn;
      for (enn = 0, e = x->Scoping; e; e = (struct zx_sp_Scoping_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Scoping(c, e, dup_strs);
	  if (!enn)
	      x->Scoping = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_AuthnRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);
  zx_free_attr(c, x->ForceAuthn, free_strs);
  zx_free_attr(c, x->IsPassive, free_strs);
  zx_free_attr(c, x->ProtocolBinding, free_strs);
  zx_free_attr(c, x->AssertionConsumerServiceIndex, free_strs);
  zx_free_attr(c, x->AssertionConsumerServiceURL, free_strs);
  zx_free_attr(c, x->AttributeConsumingServiceIndex, free_strs);
  zx_free_attr(c, x->ProviderName, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      for (e = x->Subject; e; e = en) {
	  en = (struct zx_sa_Subject_s*)e->gg.g.n;
	  zx_FREE_sa_Subject(c, e, free_strs);
      }
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      struct zx_sp_NameIDPolicy_s* en;
      for (e = x->NameIDPolicy; e; e = en) {
	  en = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n;
	  zx_FREE_sp_NameIDPolicy(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Conditions_s* e;
      struct zx_sa_Conditions_s* en;
      for (e = x->Conditions; e; e = en) {
	  en = (struct zx_sa_Conditions_s*)e->gg.g.n;
	  zx_FREE_sa_Conditions(c, e, free_strs);
      }
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      struct zx_sp_RequestedAuthnContext_s* en;
      for (e = x->RequestedAuthnContext; e; e = en) {
	  en = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n;
	  zx_FREE_sp_RequestedAuthnContext(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Scoping_s* e;
      struct zx_sp_Scoping_s* en;
      for (e = x->Scoping; e; e = en) {
	  en = (struct zx_sp_Scoping_s*)e->gg.g.n;
	  zx_FREE_sp_Scoping(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_AuthnRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_AuthnRequest_s* zx_NEW_sp_AuthnRequest(struct zx_ctx* c)
{
  struct zx_sp_AuthnRequest_s* x = ZX_ZALLOC(c, struct zx_sp_AuthnRequest_s);
  x->gg.g.tok = zx_sp_AuthnRequest_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_AuthnRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Subject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      for (e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_NameIDPolicy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa_Conditions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Conditions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_RequestedAuthnContext_s* e;
      for (e = x->RequestedAuthnContext; e; e = (struct zx_sp_RequestedAuthnContext_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_RequestedAuthnContext(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Scoping_s* e;
      for (e = x->Scoping; e; e = (struct zx_sp_Scoping_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Scoping(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_AuthnRequest) */

int zx_WALK_WO_sp_AuthnRequest(struct zx_ctx* c, struct zx_sp_AuthnRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_AuthzDecisionQuery
#define EL_STRUCT zx_sp_AuthzDecisionQuery_s
#define EL_NS     sp
#define EL_TAG    AuthzDecisionQuery

/* FUNC(zx_DUP_STRS_sp_AuthzDecisionQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);
  zx_dup_attr(c, x->Resource);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Subject(c, e);
  }
  {
      struct zx_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Action(c, e);
  }
  {
      struct zx_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Evidence(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_AuthzDecisionQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_AuthzDecisionQuery_s* zx_DEEP_CLONE_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, int dup_strs)
{
  x = (struct zx_sp_AuthzDecisionQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_AuthzDecisionQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);
  x->Resource = zx_clone_attr(c, x->Resource);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      struct zx_sa_Subject_s* enn;
      for (enn = 0, e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Subject(c, e, dup_strs);
	  if (!enn)
	      x->Subject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Action_s* e;
      struct zx_sa_Action_s* en;
      struct zx_sa_Action_s* enn;
      for (enn = 0, e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Action(c, e, dup_strs);
	  if (!enn)
	      x->Action = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Evidence_s* e;
      struct zx_sa_Evidence_s* en;
      struct zx_sa_Evidence_s* enn;
      for (enn = 0, e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Evidence(c, e, dup_strs);
	  if (!enn)
	      x->Evidence = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_AuthzDecisionQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);
  zx_free_attr(c, x->Resource, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      for (e = x->Subject; e; e = en) {
	  en = (struct zx_sa_Subject_s*)e->gg.g.n;
	  zx_FREE_sa_Subject(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Action_s* e;
      struct zx_sa_Action_s* en;
      for (e = x->Action; e; e = en) {
	  en = (struct zx_sa_Action_s*)e->gg.g.n;
	  zx_FREE_sa_Action(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Evidence_s* e;
      struct zx_sa_Evidence_s* en;
      for (e = x->Evidence; e; e = en) {
	  en = (struct zx_sa_Evidence_s*)e->gg.g.n;
	  zx_FREE_sa_Evidence(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_AuthzDecisionQuery) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_AuthzDecisionQuery_s* zx_NEW_sp_AuthzDecisionQuery(struct zx_ctx* c)
{
  struct zx_sp_AuthzDecisionQuery_s* x = ZX_ZALLOC(c, struct zx_sp_AuthzDecisionQuery_s);
  x->gg.g.tok = zx_sp_AuthzDecisionQuery_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_AuthzDecisionQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Subject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa_Action_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Action(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa_Evidence_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Evidence(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_AuthzDecisionQuery) */

int zx_WALK_WO_sp_AuthzDecisionQuery(struct zx_ctx* c, struct zx_sp_AuthzDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_Extensions
#define EL_STRUCT zx_sp_Extensions_s
#define EL_NS     sp
#define EL_TAG    Extensions

/* FUNC(zx_DUP_STRS_sp_Extensions) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_sp_Extensions) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_Extensions_s* zx_DEEP_CLONE_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, int dup_strs)
{
  x = (struct zx_sp_Extensions_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_Extensions_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_sp_Extensions) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_Extensions) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_Extensions_s* zx_NEW_sp_Extensions(struct zx_ctx* c)
{
  struct zx_sp_Extensions_s* x = ZX_ZALLOC(c, struct zx_sp_Extensions_s);
  x->gg.g.tok = zx_sp_Extensions_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_Extensions) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sp_Extensions) */

int zx_WALK_WO_sp_Extensions(struct zx_ctx* c, struct zx_sp_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_IDPEntry
#define EL_STRUCT zx_sp_IDPEntry_s
#define EL_NS     sp
#define EL_TAG    IDPEntry

/* FUNC(zx_DUP_STRS_sp_IDPEntry) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ProviderID);
  zx_dup_attr(c, x->Name);
  zx_dup_attr(c, x->Loc);


}

/* FUNC(zx_DEEP_CLONE_sp_IDPEntry) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_IDPEntry_s* zx_DEEP_CLONE_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, int dup_strs)
{
  x = (struct zx_sp_IDPEntry_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_IDPEntry_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ProviderID = zx_clone_attr(c, x->ProviderID);
  x->Name = zx_clone_attr(c, x->Name);
  x->Loc = zx_clone_attr(c, x->Loc);


  return x;
}

/* FUNC(zx_FREE_sp_IDPEntry) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ProviderID, free_strs);
  zx_free_attr(c, x->Name, free_strs);
  zx_free_attr(c, x->Loc, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_IDPEntry) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_IDPEntry_s* zx_NEW_sp_IDPEntry(struct zx_ctx* c)
{
  struct zx_sp_IDPEntry_s* x = ZX_ZALLOC(c, struct zx_sp_IDPEntry_s);
  x->gg.g.tok = zx_sp_IDPEntry_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_IDPEntry) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sp_IDPEntry) */

int zx_WALK_WO_sp_IDPEntry(struct zx_ctx* c, struct zx_sp_IDPEntry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_IDPList
#define EL_STRUCT zx_sp_IDPList_s
#define EL_NS     sp
#define EL_TAG    IDPList

/* FUNC(zx_DUP_STRS_sp_IDPList) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_IDPEntry_s* e;
      for (e = x->IDPEntry; e; e = (struct zx_sp_IDPEntry_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_IDPEntry(c, e);
  }
  zx_dup_strs_simple_elems(c, x->GetComplete);

}

/* FUNC(zx_DEEP_CLONE_sp_IDPList) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_IDPList_s* zx_DEEP_CLONE_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, int dup_strs)
{
  x = (struct zx_sp_IDPList_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_IDPList_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_IDPEntry_s* e;
      struct zx_sp_IDPEntry_s* en;
      struct zx_sp_IDPEntry_s* enn;
      for (enn = 0, e = x->IDPEntry; e; e = (struct zx_sp_IDPEntry_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_IDPEntry(c, e, dup_strs);
	  if (!enn)
	      x->IDPEntry = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->GetComplete = zx_deep_clone_simple_elems(c,x->GetComplete, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sp_IDPList) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_IDPEntry_s* e;
      struct zx_sp_IDPEntry_s* en;
      for (e = x->IDPEntry; e; e = en) {
	  en = (struct zx_sp_IDPEntry_s*)e->gg.g.n;
	  zx_FREE_sp_IDPEntry(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->GetComplete, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_IDPList) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_IDPList_s* zx_NEW_sp_IDPList(struct zx_ctx* c)
{
  struct zx_sp_IDPList_s* x = ZX_ZALLOC(c, struct zx_sp_IDPList_s);
  x->gg.g.tok = zx_sp_IDPList_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_IDPList) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sp_IDPEntry_s* e;
      for (e = x->IDPEntry; e; e = (struct zx_sp_IDPEntry_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_IDPEntry(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->GetComplete, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_IDPList) */

int zx_WALK_WO_sp_IDPList(struct zx_ctx* c, struct zx_sp_IDPList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_LogoutRequest
#define EL_STRUCT zx_sp_LogoutRequest_s
#define EL_NS     sp
#define EL_TAG    LogoutRequest

/* FUNC(zx_DUP_STRS_sp_LogoutRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);
  zx_dup_attr(c, x->Reason);
  zx_dup_attr(c, x->NotOnOrAfter);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_BaseID(c, e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_NameID(c, e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedID(c, e);
  }
  zx_dup_strs_simple_elems(c, x->SessionIndex);

}

/* FUNC(zx_DEEP_CLONE_sp_LogoutRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_LogoutRequest_s* zx_DEEP_CLONE_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, int dup_strs)
{
  x = (struct zx_sp_LogoutRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_LogoutRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);
  x->Reason = zx_clone_attr(c, x->Reason);
  x->NotOnOrAfter = zx_clone_attr(c, x->NotOnOrAfter);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_BaseID_s* e;
      struct zx_sa_BaseID_s* en;
      struct zx_sa_BaseID_s* enn;
      for (enn = 0, e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_BaseID(c, e, dup_strs);
	  if (!enn)
	      x->BaseID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      struct zx_sa_NameID_s* enn;
      for (enn = 0, e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_NameID(c, e, dup_strs);
	  if (!enn)
	      x->NameID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      struct zx_sa_EncryptedID_s* enn;
      for (enn = 0, e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->SessionIndex = zx_deep_clone_simple_elems(c,x->SessionIndex, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sp_LogoutRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);
  zx_free_attr(c, x->Reason, free_strs);
  zx_free_attr(c, x->NotOnOrAfter, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_BaseID_s* e;
      struct zx_sa_BaseID_s* en;
      for (e = x->BaseID; e; e = en) {
	  en = (struct zx_sa_BaseID_s*)e->gg.g.n;
	  zx_FREE_sa_BaseID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      for (e = x->NameID; e; e = en) {
	  en = (struct zx_sa_NameID_s*)e->gg.g.n;
	  zx_FREE_sa_NameID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      for (e = x->EncryptedID; e; e = en) {
	  en = (struct zx_sa_EncryptedID_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedID(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->SessionIndex, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_LogoutRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_LogoutRequest_s* zx_NEW_sp_LogoutRequest(struct zx_ctx* c)
{
  struct zx_sp_LogoutRequest_s* x = ZX_ZALLOC(c, struct zx_sp_LogoutRequest_s);
  x->gg.g.tok = zx_sp_LogoutRequest_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_LogoutRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_BaseID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_NameID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->SessionIndex, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_LogoutRequest) */

int zx_WALK_WO_sp_LogoutRequest(struct zx_ctx* c, struct zx_sp_LogoutRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_LogoutResponse
#define EL_STRUCT zx_sp_LogoutResponse_s
#define EL_NS     sp
#define EL_TAG    LogoutResponse

/* FUNC(zx_DUP_STRS_sp_LogoutResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->InResponseTo);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_LogoutResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_LogoutResponse_s* zx_DEEP_CLONE_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, int dup_strs)
{
  x = (struct zx_sp_LogoutResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_LogoutResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->InResponseTo = zx_clone_attr(c, x->InResponseTo);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      struct zx_sp_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_LogoutResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->InResponseTo, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_sp_Status_s*)e->gg.g.n;
	  zx_FREE_sp_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_LogoutResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_LogoutResponse_s* zx_NEW_sp_LogoutResponse(struct zx_ctx* c)
{
  struct zx_sp_LogoutResponse_s* x = ZX_ZALLOC(c, struct zx_sp_LogoutResponse_s);
  x->gg.g.tok = zx_sp_LogoutResponse_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_LogoutResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_LogoutResponse) */

int zx_WALK_WO_sp_LogoutResponse(struct zx_ctx* c, struct zx_sp_LogoutResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_ManageNameIDRequest
#define EL_STRUCT zx_sp_ManageNameIDRequest_s
#define EL_NS     sp
#define EL_TAG    ManageNameIDRequest

/* FUNC(zx_DUP_STRS_sp_ManageNameIDRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_NameID(c, e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedID(c, e);
  }
  zx_dup_strs_simple_elems(c, x->NewID);
  {
      struct zx_sp_NewEncryptedID_s* e;
      for (e = x->NewEncryptedID; e; e = (struct zx_sp_NewEncryptedID_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_NewEncryptedID(c, e);
  }
  zx_dup_strs_simple_elems(c, x->Terminate);

}

/* FUNC(zx_DEEP_CLONE_sp_ManageNameIDRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_ManageNameIDRequest_s* zx_DEEP_CLONE_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, int dup_strs)
{
  x = (struct zx_sp_ManageNameIDRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_ManageNameIDRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      struct zx_sa_NameID_s* enn;
      for (enn = 0, e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_NameID(c, e, dup_strs);
	  if (!enn)
	      x->NameID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      struct zx_sa_EncryptedID_s* enn;
      for (enn = 0, e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->NewID = zx_deep_clone_simple_elems(c,x->NewID, dup_strs);
  {
      struct zx_sp_NewEncryptedID_s* e;
      struct zx_sp_NewEncryptedID_s* en;
      struct zx_sp_NewEncryptedID_s* enn;
      for (enn = 0, e = x->NewEncryptedID; e; e = (struct zx_sp_NewEncryptedID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_NewEncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->NewEncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->Terminate = zx_deep_clone_simple_elems(c,x->Terminate, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sp_ManageNameIDRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      for (e = x->NameID; e; e = en) {
	  en = (struct zx_sa_NameID_s*)e->gg.g.n;
	  zx_FREE_sa_NameID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      for (e = x->EncryptedID; e; e = en) {
	  en = (struct zx_sa_EncryptedID_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedID(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->NewID, free_strs);
  {
      struct zx_sp_NewEncryptedID_s* e;
      struct zx_sp_NewEncryptedID_s* en;
      for (e = x->NewEncryptedID; e; e = en) {
	  en = (struct zx_sp_NewEncryptedID_s*)e->gg.g.n;
	  zx_FREE_sp_NewEncryptedID(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->Terminate, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_ManageNameIDRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_ManageNameIDRequest_s* zx_NEW_sp_ManageNameIDRequest(struct zx_ctx* c)
{
  struct zx_sp_ManageNameIDRequest_s* x = ZX_ZALLOC(c, struct zx_sp_ManageNameIDRequest_s);
  x->gg.g.tok = zx_sp_ManageNameIDRequest_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_ManageNameIDRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_NameID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->NewID, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_sp_NewEncryptedID_s* e;
      for (e = x->NewEncryptedID; e; e = (struct zx_sp_NewEncryptedID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_NewEncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->Terminate, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_ManageNameIDRequest) */

int zx_WALK_WO_sp_ManageNameIDRequest(struct zx_ctx* c, struct zx_sp_ManageNameIDRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_ManageNameIDResponse
#define EL_STRUCT zx_sp_ManageNameIDResponse_s
#define EL_NS     sp
#define EL_TAG    ManageNameIDResponse

/* FUNC(zx_DUP_STRS_sp_ManageNameIDResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->InResponseTo);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Status(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_ManageNameIDResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_ManageNameIDResponse_s* zx_DEEP_CLONE_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, int dup_strs)
{
  x = (struct zx_sp_ManageNameIDResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_ManageNameIDResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->InResponseTo = zx_clone_attr(c, x->InResponseTo);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      struct zx_sp_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_ManageNameIDResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->InResponseTo, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_sp_Status_s*)e->gg.g.n;
	  zx_FREE_sp_Status(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_ManageNameIDResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_ManageNameIDResponse_s* zx_NEW_sp_ManageNameIDResponse(struct zx_ctx* c)
{
  struct zx_sp_ManageNameIDResponse_s* x = ZX_ZALLOC(c, struct zx_sp_ManageNameIDResponse_s);
  x->gg.g.tok = zx_sp_ManageNameIDResponse_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_ManageNameIDResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_ManageNameIDResponse) */

int zx_WALK_WO_sp_ManageNameIDResponse(struct zx_ctx* c, struct zx_sp_ManageNameIDResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_NameIDMappingRequest
#define EL_STRUCT zx_sp_NameIDMappingRequest_s
#define EL_NS     sp
#define EL_TAG    NameIDMappingRequest

/* FUNC(zx_DUP_STRS_sp_NameIDMappingRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_BaseID(c, e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_NameID(c, e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedID(c, e);
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      for (e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_NameIDPolicy(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_NameIDMappingRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_NameIDMappingRequest_s* zx_DEEP_CLONE_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, int dup_strs)
{
  x = (struct zx_sp_NameIDMappingRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_NameIDMappingRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_BaseID_s* e;
      struct zx_sa_BaseID_s* en;
      struct zx_sa_BaseID_s* enn;
      for (enn = 0, e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_BaseID(c, e, dup_strs);
	  if (!enn)
	      x->BaseID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      struct zx_sa_NameID_s* enn;
      for (enn = 0, e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_NameID(c, e, dup_strs);
	  if (!enn)
	      x->NameID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      struct zx_sa_EncryptedID_s* enn;
      for (enn = 0, e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      struct zx_sp_NameIDPolicy_s* en;
      struct zx_sp_NameIDPolicy_s* enn;
      for (enn = 0, e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_NameIDPolicy(c, e, dup_strs);
	  if (!enn)
	      x->NameIDPolicy = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_NameIDMappingRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_BaseID_s* e;
      struct zx_sa_BaseID_s* en;
      for (e = x->BaseID; e; e = en) {
	  en = (struct zx_sa_BaseID_s*)e->gg.g.n;
	  zx_FREE_sa_BaseID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      for (e = x->NameID; e; e = en) {
	  en = (struct zx_sa_NameID_s*)e->gg.g.n;
	  zx_FREE_sa_NameID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      for (e = x->EncryptedID; e; e = en) {
	  en = (struct zx_sa_EncryptedID_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedID(c, e, free_strs);
      }
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      struct zx_sp_NameIDPolicy_s* en;
      for (e = x->NameIDPolicy; e; e = en) {
	  en = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n;
	  zx_FREE_sp_NameIDPolicy(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_NameIDMappingRequest) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_NameIDMappingRequest_s* zx_NEW_sp_NameIDMappingRequest(struct zx_ctx* c)
{
  struct zx_sp_NameIDMappingRequest_s* x = ZX_ZALLOC(c, struct zx_sp_NameIDMappingRequest_s);
  x->gg.g.tok = zx_sp_NameIDMappingRequest_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_NameIDMappingRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_BaseID_s* e;
      for (e = x->BaseID; e; e = (struct zx_sa_BaseID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_BaseID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_NameID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_NameIDPolicy_s* e;
      for (e = x->NameIDPolicy; e; e = (struct zx_sp_NameIDPolicy_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_NameIDPolicy(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_NameIDMappingRequest) */

int zx_WALK_WO_sp_NameIDMappingRequest(struct zx_ctx* c, struct zx_sp_NameIDMappingRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_NameIDMappingResponse
#define EL_STRUCT zx_sp_NameIDMappingResponse_s
#define EL_NS     sp
#define EL_TAG    NameIDMappingResponse

/* FUNC(zx_DUP_STRS_sp_NameIDMappingResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->InResponseTo);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Status(c, e);
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_NameID(c, e);
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedID(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_NameIDMappingResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_NameIDMappingResponse_s* zx_DEEP_CLONE_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, int dup_strs)
{
  x = (struct zx_sp_NameIDMappingResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_NameIDMappingResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->InResponseTo = zx_clone_attr(c, x->InResponseTo);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      struct zx_sp_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      struct zx_sa_NameID_s* enn;
      for (enn = 0, e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_NameID(c, e, dup_strs);
	  if (!enn)
	      x->NameID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      struct zx_sa_EncryptedID_s* enn;
      for (enn = 0, e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedID(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedID = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_NameIDMappingResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->InResponseTo, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_sp_Status_s*)e->gg.g.n;
	  zx_FREE_sp_Status(c, e, free_strs);
      }
  }
  {
      struct zx_sa_NameID_s* e;
      struct zx_sa_NameID_s* en;
      for (e = x->NameID; e; e = en) {
	  en = (struct zx_sa_NameID_s*)e->gg.g.n;
	  zx_FREE_sa_NameID(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      struct zx_sa_EncryptedID_s* en;
      for (e = x->EncryptedID; e; e = en) {
	  en = (struct zx_sa_EncryptedID_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedID(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_NameIDMappingResponse) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_NameIDMappingResponse_s* zx_NEW_sp_NameIDMappingResponse(struct zx_ctx* c)
{
  struct zx_sp_NameIDMappingResponse_s* x = ZX_ZALLOC(c, struct zx_sp_NameIDMappingResponse_s);
  x->gg.g.tok = zx_sp_NameIDMappingResponse_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_NameIDMappingResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_NameID_s* e;
      for (e = x->NameID; e; e = (struct zx_sa_NameID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_NameID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedID_s* e;
      for (e = x->EncryptedID; e; e = (struct zx_sa_EncryptedID_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedID(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_NameIDMappingResponse) */

int zx_WALK_WO_sp_NameIDMappingResponse(struct zx_ctx* c, struct zx_sp_NameIDMappingResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_NameIDPolicy
#define EL_STRUCT zx_sp_NameIDPolicy_s
#define EL_NS     sp
#define EL_TAG    NameIDPolicy

/* FUNC(zx_DUP_STRS_sp_NameIDPolicy) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Format);
  zx_dup_attr(c, x->SPNameQualifier);
  zx_dup_attr(c, x->AllowCreate);


}

/* FUNC(zx_DEEP_CLONE_sp_NameIDPolicy) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_NameIDPolicy_s* zx_DEEP_CLONE_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, int dup_strs)
{
  x = (struct zx_sp_NameIDPolicy_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_NameIDPolicy_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Format = zx_clone_attr(c, x->Format);
  x->SPNameQualifier = zx_clone_attr(c, x->SPNameQualifier);
  x->AllowCreate = zx_clone_attr(c, x->AllowCreate);


  return x;
}

/* FUNC(zx_FREE_sp_NameIDPolicy) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Format, free_strs);
  zx_free_attr(c, x->SPNameQualifier, free_strs);
  zx_free_attr(c, x->AllowCreate, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_NameIDPolicy) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_NameIDPolicy_s* zx_NEW_sp_NameIDPolicy(struct zx_ctx* c)
{
  struct zx_sp_NameIDPolicy_s* x = ZX_ZALLOC(c, struct zx_sp_NameIDPolicy_s);
  x->gg.g.tok = zx_sp_NameIDPolicy_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_NameIDPolicy) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sp_NameIDPolicy) */

int zx_WALK_WO_sp_NameIDPolicy(struct zx_ctx* c, struct zx_sp_NameIDPolicy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_NewEncryptedID
#define EL_STRUCT zx_sp_NewEncryptedID_s
#define EL_NS     sp
#define EL_TAG    NewEncryptedID

/* FUNC(zx_DUP_STRS_sp_NewEncryptedID) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedData(c, e);
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptedKey(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_NewEncryptedID) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_NewEncryptedID_s* zx_DEEP_CLONE_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, int dup_strs)
{
  x = (struct zx_sp_NewEncryptedID_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_NewEncryptedID_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      struct zx_xenc_EncryptedData_s* enn;
      for (enn = 0, e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedData(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      struct zx_xenc_EncryptedKey_s* enn;
      for (enn = 0, e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptedKey(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedKey = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_NewEncryptedID) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_EncryptedData_s* e;
      struct zx_xenc_EncryptedData_s* en;
      for (e = x->EncryptedData; e; e = en) {
	  en = (struct zx_xenc_EncryptedData_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedData(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      struct zx_xenc_EncryptedKey_s* en;
      for (e = x->EncryptedKey; e; e = en) {
	  en = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptedKey(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_NewEncryptedID) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_NewEncryptedID_s* zx_NEW_sp_NewEncryptedID(struct zx_ctx* c)
{
  struct zx_sp_NewEncryptedID_s* x = ZX_ZALLOC(c, struct zx_sp_NewEncryptedID_s);
  x->gg.g.tok = zx_sp_NewEncryptedID_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_NewEncryptedID) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_EncryptedData_s* e;
      for (e = x->EncryptedData; e; e = (struct zx_xenc_EncryptedData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_EncryptedKey_s* e;
      for (e = x->EncryptedKey; e; e = (struct zx_xenc_EncryptedKey_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptedKey(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_NewEncryptedID) */

int zx_WALK_WO_sp_NewEncryptedID(struct zx_ctx* c, struct zx_sp_NewEncryptedID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_RequestedAuthnContext
#define EL_STRUCT zx_sp_RequestedAuthnContext_s
#define EL_NS     sp
#define EL_TAG    RequestedAuthnContext

/* FUNC(zx_DUP_STRS_sp_RequestedAuthnContext) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Comparison);

  zx_dup_strs_simple_elems(c, x->AuthnContextClassRef);
  zx_dup_strs_simple_elems(c, x->AuthnContextDeclRef);

}

/* FUNC(zx_DEEP_CLONE_sp_RequestedAuthnContext) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_RequestedAuthnContext_s* zx_DEEP_CLONE_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, int dup_strs)
{
  x = (struct zx_sp_RequestedAuthnContext_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_RequestedAuthnContext_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Comparison = zx_clone_attr(c, x->Comparison);

  x->AuthnContextClassRef = zx_deep_clone_simple_elems(c,x->AuthnContextClassRef, dup_strs);
  x->AuthnContextDeclRef = zx_deep_clone_simple_elems(c,x->AuthnContextDeclRef, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sp_RequestedAuthnContext) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Comparison, free_strs);

  zx_free_simple_elems(c, x->AuthnContextClassRef, free_strs);
  zx_free_simple_elems(c, x->AuthnContextDeclRef, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_RequestedAuthnContext) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_RequestedAuthnContext_s* zx_NEW_sp_RequestedAuthnContext(struct zx_ctx* c)
{
  struct zx_sp_RequestedAuthnContext_s* x = ZX_ZALLOC(c, struct zx_sp_RequestedAuthnContext_s);
  x->gg.g.tok = zx_sp_RequestedAuthnContext_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_RequestedAuthnContext) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
  ret = zx_walk_so_simple_elems(c, x->AuthnContextDeclRef, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_RequestedAuthnContext) */

int zx_WALK_WO_sp_RequestedAuthnContext(struct zx_ctx* c, struct zx_sp_RequestedAuthnContext_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_Response
#define EL_STRUCT zx_sp_Response_s
#define EL_NS     sp
#define EL_TAG    Response

/* FUNC(zx_DUP_STRS_sp_Response) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->InResponseTo);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Status(c, e);
  }
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Assertion(c, e);
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_EncryptedAssertion(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_Response) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_Response_s* zx_DEEP_CLONE_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, int dup_strs)
{
  x = (struct zx_sp_Response_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_Response_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->InResponseTo = zx_clone_attr(c, x->InResponseTo);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      struct zx_sp_Status_s* enn;
      for (enn = 0, e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Status(c, e, dup_strs);
	  if (!enn)
	      x->Status = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      struct zx_sa_Assertion_s* enn;
      for (enn = 0, e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Assertion(c, e, dup_strs);
	  if (!enn)
	      x->Assertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      struct zx_sa_EncryptedAssertion_s* en;
      struct zx_sa_EncryptedAssertion_s* enn;
      for (enn = 0, e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_EncryptedAssertion(c, e, dup_strs);
	  if (!enn)
	      x->EncryptedAssertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_Response) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->InResponseTo, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Status_s* e;
      struct zx_sp_Status_s* en;
      for (e = x->Status; e; e = en) {
	  en = (struct zx_sp_Status_s*)e->gg.g.n;
	  zx_FREE_sp_Status(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      for (e = x->Assertion; e; e = en) {
	  en = (struct zx_sa_Assertion_s*)e->gg.g.n;
	  zx_FREE_sa_Assertion(c, e, free_strs);
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      struct zx_sa_EncryptedAssertion_s* en;
      for (e = x->EncryptedAssertion; e; e = en) {
	  en = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n;
	  zx_FREE_sa_EncryptedAssertion(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_Response) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_Response_s* zx_NEW_sp_Response(struct zx_ctx* c)
{
  struct zx_sp_Response_s* x = ZX_ZALLOC(c, struct zx_sp_Response_s);
  x->gg.g.tok = zx_sp_Response_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_Response) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Status_s* e;
      for (e = x->Status; e; e = (struct zx_sp_Status_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Status(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Assertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_EncryptedAssertion_s* e;
      for (e = x->EncryptedAssertion; e; e = (struct zx_sa_EncryptedAssertion_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_EncryptedAssertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_Response) */

int zx_WALK_WO_sp_Response(struct zx_ctx* c, struct zx_sp_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_Scoping
#define EL_STRUCT zx_sp_Scoping_s
#define EL_NS     sp
#define EL_TAG    Scoping

/* FUNC(zx_DUP_STRS_sp_Scoping) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ProxyCount);

  {
      struct zx_sp_IDPList_s* e;
      for (e = x->IDPList; e; e = (struct zx_sp_IDPList_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_IDPList(c, e);
  }
  zx_dup_strs_simple_elems(c, x->RequesterID);

}

/* FUNC(zx_DEEP_CLONE_sp_Scoping) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_Scoping_s* zx_DEEP_CLONE_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, int dup_strs)
{
  x = (struct zx_sp_Scoping_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_Scoping_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ProxyCount = zx_clone_attr(c, x->ProxyCount);

  {
      struct zx_sp_IDPList_s* e;
      struct zx_sp_IDPList_s* en;
      struct zx_sp_IDPList_s* enn;
      for (enn = 0, e = x->IDPList; e; e = (struct zx_sp_IDPList_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_IDPList(c, e, dup_strs);
	  if (!enn)
	      x->IDPList = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->RequesterID = zx_deep_clone_simple_elems(c,x->RequesterID, dup_strs);

  return x;
}

/* FUNC(zx_FREE_sp_Scoping) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ProxyCount, free_strs);

  {
      struct zx_sp_IDPList_s* e;
      struct zx_sp_IDPList_s* en;
      for (e = x->IDPList; e; e = en) {
	  en = (struct zx_sp_IDPList_s*)e->gg.g.n;
	  zx_FREE_sp_IDPList(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->RequesterID, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_Scoping) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_Scoping_s* zx_NEW_sp_Scoping(struct zx_ctx* c)
{
  struct zx_sp_Scoping_s* x = ZX_ZALLOC(c, struct zx_sp_Scoping_s);
  x->gg.g.tok = zx_sp_Scoping_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_Scoping) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sp_IDPList_s* e;
      for (e = x->IDPList; e; e = (struct zx_sp_IDPList_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_IDPList(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->RequesterID, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_Scoping) */

int zx_WALK_WO_sp_Scoping(struct zx_ctx* c, struct zx_sp_Scoping_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_Status
#define EL_STRUCT zx_sp_Status_s
#define EL_NS     sp
#define EL_TAG    Status

/* FUNC(zx_DUP_STRS_sp_Status) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_StatusCode(c, e);
  }
  zx_dup_strs_simple_elems(c, x->StatusMessage);
  {
      struct zx_sp_StatusDetail_s* e;
      for (e = x->StatusDetail; e; e = (struct zx_sp_StatusDetail_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_StatusDetail(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_Status) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_Status_s* zx_DEEP_CLONE_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, int dup_strs)
{
  x = (struct zx_sp_Status_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_Status_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_StatusCode_s* e;
      struct zx_sp_StatusCode_s* en;
      struct zx_sp_StatusCode_s* enn;
      for (enn = 0, e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_StatusCode(c, e, dup_strs);
	  if (!enn)
	      x->StatusCode = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  x->StatusMessage = zx_deep_clone_simple_elems(c,x->StatusMessage, dup_strs);
  {
      struct zx_sp_StatusDetail_s* e;
      struct zx_sp_StatusDetail_s* en;
      struct zx_sp_StatusDetail_s* enn;
      for (enn = 0, e = x->StatusDetail; e; e = (struct zx_sp_StatusDetail_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_StatusDetail(c, e, dup_strs);
	  if (!enn)
	      x->StatusDetail = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_Status) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sp_StatusCode_s* e;
      struct zx_sp_StatusCode_s* en;
      for (e = x->StatusCode; e; e = en) {
	  en = (struct zx_sp_StatusCode_s*)e->gg.g.n;
	  zx_FREE_sp_StatusCode(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->StatusMessage, free_strs);
  {
      struct zx_sp_StatusDetail_s* e;
      struct zx_sp_StatusDetail_s* en;
      for (e = x->StatusDetail; e; e = en) {
	  en = (struct zx_sp_StatusDetail_s*)e->gg.g.n;
	  zx_FREE_sp_StatusDetail(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_Status) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_Status_s* zx_NEW_sp_Status(struct zx_ctx* c)
{
  struct zx_sp_Status_s* x = ZX_ZALLOC(c, struct zx_sp_Status_s);
  x->gg.g.tok = zx_sp_Status_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_Status) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sp_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_StatusCode(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->StatusMessage, ctx, callback);
  if (ret)
    return ret;
  {
      struct zx_sp_StatusDetail_s* e;
      for (e = x->StatusDetail; e; e = (struct zx_sp_StatusDetail_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_StatusDetail(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_Status) */

int zx_WALK_WO_sp_Status(struct zx_ctx* c, struct zx_sp_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_StatusCode
#define EL_STRUCT zx_sp_StatusCode_s
#define EL_NS     sp
#define EL_TAG    StatusCode

/* FUNC(zx_DUP_STRS_sp_StatusCode) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Value);

  {
      struct zx_sp_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_StatusCode(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_StatusCode) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_StatusCode_s* zx_DEEP_CLONE_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, int dup_strs)
{
  x = (struct zx_sp_StatusCode_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_StatusCode_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Value = zx_clone_attr(c, x->Value);

  {
      struct zx_sp_StatusCode_s* e;
      struct zx_sp_StatusCode_s* en;
      struct zx_sp_StatusCode_s* enn;
      for (enn = 0, e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_StatusCode(c, e, dup_strs);
	  if (!enn)
	      x->StatusCode = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_StatusCode) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Value, free_strs);

  {
      struct zx_sp_StatusCode_s* e;
      struct zx_sp_StatusCode_s* en;
      for (e = x->StatusCode; e; e = en) {
	  en = (struct zx_sp_StatusCode_s*)e->gg.g.n;
	  zx_FREE_sp_StatusCode(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_StatusCode) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_StatusCode_s* zx_NEW_sp_StatusCode(struct zx_ctx* c)
{
  struct zx_sp_StatusCode_s* x = ZX_ZALLOC(c, struct zx_sp_StatusCode_s);
  x->gg.g.tok = zx_sp_StatusCode_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_StatusCode) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sp_StatusCode_s* e;
      for (e = x->StatusCode; e; e = (struct zx_sp_StatusCode_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_StatusCode(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_StatusCode) */

int zx_WALK_WO_sp_StatusCode(struct zx_ctx* c, struct zx_sp_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_StatusDetail
#define EL_STRUCT zx_sp_StatusDetail_s
#define EL_NS     sp
#define EL_TAG    StatusDetail

/* FUNC(zx_DUP_STRS_sp_StatusDetail) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_sp_StatusDetail) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_StatusDetail_s* zx_DEEP_CLONE_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, int dup_strs)
{
  x = (struct zx_sp_StatusDetail_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_StatusDetail_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_sp_StatusDetail) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_StatusDetail) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_StatusDetail_s* zx_NEW_sp_StatusDetail(struct zx_ctx* c)
{
  struct zx_sp_StatusDetail_s* x = ZX_ZALLOC(c, struct zx_sp_StatusDetail_s);
  x->gg.g.tok = zx_sp_StatusDetail_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_StatusDetail) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_sp_StatusDetail) */

int zx_WALK_WO_sp_StatusDetail(struct zx_ctx* c, struct zx_sp_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   sp_SubjectQuery
#define EL_STRUCT zx_sp_SubjectQuery_s
#define EL_NS     sp
#define EL_TAG    SubjectQuery

/* FUNC(zx_DUP_STRS_sp_SubjectQuery) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ID);
  zx_dup_attr(c, x->Version);
  zx_dup_attr(c, x->IssueInstant);
  zx_dup_attr(c, x->Destination);
  zx_dup_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Issuer(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Signature(c, e);
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Extensions(c, e);
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Subject(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_sp_SubjectQuery) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_sp_SubjectQuery_s* zx_DEEP_CLONE_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, int dup_strs)
{
  x = (struct zx_sp_SubjectQuery_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_sp_SubjectQuery_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ID = zx_clone_attr(c, x->ID);
  x->Version = zx_clone_attr(c, x->Version);
  x->IssueInstant = zx_clone_attr(c, x->IssueInstant);
  x->Destination = zx_clone_attr(c, x->Destination);
  x->Consent = zx_clone_attr(c, x->Consent);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      struct zx_sa_Issuer_s* enn;
      for (enn = 0, e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Issuer(c, e, dup_strs);
	  if (!enn)
	      x->Issuer = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      struct zx_ds_Signature_s* enn;
      for (enn = 0, e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Signature(c, e, dup_strs);
	  if (!enn)
	      x->Signature = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      struct zx_sp_Extensions_s* enn;
      for (enn = 0, e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Extensions(c, e, dup_strs);
	  if (!enn)
	      x->Extensions = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      struct zx_sa_Subject_s* enn;
      for (enn = 0, e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Subject(c, e, dup_strs);
	  if (!enn)
	      x->Subject = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_sp_SubjectQuery) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->ID, free_strs);
  zx_free_attr(c, x->Version, free_strs);
  zx_free_attr(c, x->IssueInstant, free_strs);
  zx_free_attr(c, x->Destination, free_strs);
  zx_free_attr(c, x->Consent, free_strs);

  {
      struct zx_sa_Issuer_s* e;
      struct zx_sa_Issuer_s* en;
      for (e = x->Issuer; e; e = en) {
	  en = (struct zx_sa_Issuer_s*)e->gg.g.n;
	  zx_FREE_sa_Issuer(c, e, free_strs);
      }
  }
  {
      struct zx_ds_Signature_s* e;
      struct zx_ds_Signature_s* en;
      for (e = x->Signature; e; e = en) {
	  en = (struct zx_ds_Signature_s*)e->gg.g.n;
	  zx_FREE_ds_Signature(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      struct zx_sp_Extensions_s* en;
      for (e = x->Extensions; e; e = en) {
	  en = (struct zx_sp_Extensions_s*)e->gg.g.n;
	  zx_FREE_sp_Extensions(c, e, free_strs);
      }
  }
  {
      struct zx_sa_Subject_s* e;
      struct zx_sa_Subject_s* en;
      for (e = x->Subject; e; e = en) {
	  en = (struct zx_sa_Subject_s*)e->gg.g.n;
	  zx_FREE_sa_Subject(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_sp_SubjectQuery) */

/* Trivial allocator/constructor for the datatype. */

struct zx_sp_SubjectQuery_s* zx_NEW_sp_SubjectQuery(struct zx_ctx* c)
{
  struct zx_sp_SubjectQuery_s* x = ZX_ZALLOC(c, struct zx_sp_SubjectQuery_s);
  x->gg.g.tok = zx_sp_SubjectQuery_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_sp_SubjectQuery) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Issuer_s* e;
      for (e = x->Issuer; e; e = (struct zx_sa_Issuer_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Issuer(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Signature(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Extensions_s* e;
      for (e = x->Extensions; e; e = (struct zx_sp_Extensions_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Extensions(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sa_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa_Subject_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Subject(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_sp_SubjectQuery) */

int zx_WALK_WO_sp_SubjectQuery(struct zx_ctx* c, struct zx_sp_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_AgreementMethod_s
#define EL_NS     xenc
#define EL_TAG    AgreementMethod

/* FUNC(zx_DUP_STRS_xenc_AgreementMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->KA_Nonce);
  {
      struct zx_xenc_OriginatorKeyInfo_s* e;
      for (e = x->OriginatorKeyInfo; e; e = (struct zx_xenc_OriginatorKeyInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_OriginatorKeyInfo(c, e);
  }
  {
      struct zx_xenc_RecipientKeyInfo_s* e;
      for (e = x->RecipientKeyInfo; e; e = (struct zx_xenc_RecipientKeyInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_RecipientKeyInfo(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xenc_AgreementMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_AgreementMethod_s* zx_DEEP_CLONE_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, int dup_strs)
{
  x = (struct zx_xenc_AgreementMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_AgreementMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->KA_Nonce = zx_deep_clone_simple_elems(c,x->KA_Nonce, dup_strs);
  {
      struct zx_xenc_OriginatorKeyInfo_s* e;
      struct zx_xenc_OriginatorKeyInfo_s* en;
      struct zx_xenc_OriginatorKeyInfo_s* enn;
      for (enn = 0, e = x->OriginatorKeyInfo; e; e = (struct zx_xenc_OriginatorKeyInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_OriginatorKeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->OriginatorKeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_RecipientKeyInfo_s* e;
      struct zx_xenc_RecipientKeyInfo_s* en;
      struct zx_xenc_RecipientKeyInfo_s* enn;
      for (enn = 0, e = x->RecipientKeyInfo; e; e = (struct zx_xenc_RecipientKeyInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_RecipientKeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->RecipientKeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_xenc_AgreementMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->KA_Nonce, free_strs);
  {
      struct zx_xenc_OriginatorKeyInfo_s* e;
      struct zx_xenc_OriginatorKeyInfo_s* en;
      for (e = x->OriginatorKeyInfo; e; e = en) {
	  en = (struct zx_xenc_OriginatorKeyInfo_s*)e->gg.g.n;
	  zx_FREE_xenc_OriginatorKeyInfo(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_RecipientKeyInfo_s* e;
      struct zx_xenc_RecipientKeyInfo_s* en;
      for (e = x->RecipientKeyInfo; e; e = en) {
	  en = (struct zx_xenc_RecipientKeyInfo_s*)e->gg.g.n;
	  zx_FREE_xenc_RecipientKeyInfo(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_AgreementMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_AgreementMethod_s* zx_NEW_xenc_AgreementMethod(struct zx_ctx* c)
{
  struct zx_xenc_AgreementMethod_s* x = ZX_ZALLOC(c, struct zx_xenc_AgreementMethod_s);
  x->gg.g.tok = zx_xenc_AgreementMethod_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_AgreementMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_xenc_OriginatorKeyInfo_s* e;
      for (e = x->OriginatorKeyInfo; e; e = (struct zx_xenc_OriginatorKeyInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_OriginatorKeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_RecipientKeyInfo_s* e;
      for (e = x->RecipientKeyInfo; e; e = (struct zx_xenc_RecipientKeyInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_RecipientKeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_AgreementMethod) */

int zx_WALK_WO_xenc_AgreementMethod(struct zx_ctx* c, struct zx_xenc_AgreementMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_CipherData_s
#define EL_NS     xenc
#define EL_TAG    CipherData

/* FUNC(zx_DUP_STRS_xenc_CipherData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  zx_dup_strs_simple_elems(c, x->CipherValue);
  {
      struct zx_xenc_CipherReference_s* e;
      for (e = x->CipherReference; e; e = (struct zx_xenc_CipherReference_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_CipherReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xenc_CipherData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_CipherData_s* zx_DEEP_CLONE_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, int dup_strs)
{
  x = (struct zx_xenc_CipherData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_CipherData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  x->CipherValue = zx_deep_clone_simple_elems(c,x->CipherValue, dup_strs);
  {
      struct zx_xenc_CipherReference_s* e;
      struct zx_xenc_CipherReference_s* en;
      struct zx_xenc_CipherReference_s* enn;
      for (enn = 0, e = x->CipherReference; e; e = (struct zx_xenc_CipherReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_CipherReference(c, e, dup_strs);
	  if (!enn)
	      x->CipherReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_xenc_CipherData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  zx_free_simple_elems(c, x->CipherValue, free_strs);
  {
      struct zx_xenc_CipherReference_s* e;
      struct zx_xenc_CipherReference_s* en;
      for (e = x->CipherReference; e; e = en) {
	  en = (struct zx_xenc_CipherReference_s*)e->gg.g.n;
	  zx_FREE_xenc_CipherReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_CipherData) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_CipherData_s* zx_NEW_xenc_CipherData(struct zx_ctx* c)
{
  struct zx_xenc_CipherData_s* x = ZX_ZALLOC(c, struct zx_xenc_CipherData_s);
  x->gg.g.tok = zx_xenc_CipherData_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_CipherData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_xenc_CipherReference_s* e;
      for (e = x->CipherReference; e; e = (struct zx_xenc_CipherReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_CipherReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_CipherData) */

int zx_WALK_WO_xenc_CipherData(struct zx_ctx* c, struct zx_xenc_CipherData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_CipherReference_s
#define EL_NS     xenc
#define EL_TAG    CipherReference

/* FUNC(zx_DUP_STRS_xenc_CipherReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);

  {
      struct zx_xenc_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_xenc_Transforms_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_Transforms(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xenc_CipherReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_CipherReference_s* zx_DEEP_CLONE_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, int dup_strs)
{
  x = (struct zx_xenc_CipherReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_CipherReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);

  {
      struct zx_xenc_Transforms_s* e;
      struct zx_xenc_Transforms_s* en;
      struct zx_xenc_Transforms_s* enn;
      for (enn = 0, e = x->Transforms; e; e = (struct zx_xenc_Transforms_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_Transforms(c, e, dup_strs);
	  if (!enn)
	      x->Transforms = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_xenc_CipherReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);

  {
      struct zx_xenc_Transforms_s* e;
      struct zx_xenc_Transforms_s* en;
      for (e = x->Transforms; e; e = en) {
	  en = (struct zx_xenc_Transforms_s*)e->gg.g.n;
	  zx_FREE_xenc_Transforms(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_CipherReference) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_CipherReference_s* zx_NEW_xenc_CipherReference(struct zx_ctx* c)
{
  struct zx_xenc_CipherReference_s* x = ZX_ZALLOC(c, struct zx_xenc_CipherReference_s);
  x->gg.g.tok = zx_xenc_CipherReference_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_CipherReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_Transforms_s* e;
      for (e = x->Transforms; e; e = (struct zx_xenc_Transforms_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_Transforms(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_CipherReference) */

int zx_WALK_WO_xenc_CipherReference(struct zx_ctx* c, struct zx_xenc_CipherReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_DataReference_s
#define EL_NS     xenc
#define EL_TAG    DataReference

/* FUNC(zx_DUP_STRS_xenc_DataReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);


}

/* FUNC(zx_DEEP_CLONE_xenc_DataReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_DataReference_s* zx_DEEP_CLONE_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, int dup_strs)
{
  x = (struct zx_xenc_DataReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_DataReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);


  return x;
}

/* FUNC(zx_FREE_xenc_DataReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_DataReference) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_DataReference_s* zx_NEW_xenc_DataReference(struct zx_ctx* c)
{
  struct zx_xenc_DataReference_s* x = ZX_ZALLOC(c, struct zx_xenc_DataReference_s);
  x->gg.g.tok = zx_xenc_DataReference_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_DataReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_xenc_DataReference) */

int zx_WALK_WO_xenc_DataReference(struct zx_ctx* c, struct zx_xenc_DataReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_EncryptedData_s
#define EL_NS     xenc
#define EL_TAG    EncryptedData

/* FUNC(zx_DUP_STRS_xenc_EncryptedData) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->Type);
  zx_dup_attr(c, x->MimeType);
  zx_dup_attr(c, x->Encoding);

  {
      struct zx_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptionMethod(c, e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_KeyInfo(c, e);
  }
  {
      struct zx_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_CipherData(c, e);
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptionProperties(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xenc_EncryptedData) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_EncryptedData_s* zx_DEEP_CLONE_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, int dup_strs)
{
  x = (struct zx_xenc_EncryptedData_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_EncryptedData_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->Type = zx_clone_attr(c, x->Type);
  x->MimeType = zx_clone_attr(c, x->MimeType);
  x->Encoding = zx_clone_attr(c, x->Encoding);

  {
      struct zx_xenc_EncryptionMethod_s* e;
      struct zx_xenc_EncryptionMethod_s* en;
      struct zx_xenc_EncryptionMethod_s* enn;
      for (enn = 0, e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptionMethod(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      struct zx_ds_KeyInfo_s* en;
      struct zx_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_CipherData_s* e;
      struct zx_xenc_CipherData_s* en;
      struct zx_xenc_CipherData_s* enn;
      for (enn = 0, e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_CipherData(c, e, dup_strs);
	  if (!enn)
	      x->CipherData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      struct zx_xenc_EncryptionProperties_s* en;
      struct zx_xenc_EncryptionProperties_s* enn;
      for (enn = 0, e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptionProperties(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionProperties = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_xenc_EncryptedData) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->Type, free_strs);
  zx_free_attr(c, x->MimeType, free_strs);
  zx_free_attr(c, x->Encoding, free_strs);

  {
      struct zx_xenc_EncryptionMethod_s* e;
      struct zx_xenc_EncryptionMethod_s* en;
      for (e = x->EncryptionMethod; e; e = en) {
	  en = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptionMethod(c, e, free_strs);
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      struct zx_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zx_ds_KeyInfo_s*)e->gg.g.n;
	  zx_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_CipherData_s* e;
      struct zx_xenc_CipherData_s* en;
      for (e = x->CipherData; e; e = en) {
	  en = (struct zx_xenc_CipherData_s*)e->gg.g.n;
	  zx_FREE_xenc_CipherData(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      struct zx_xenc_EncryptionProperties_s* en;
      for (e = x->EncryptionProperties; e; e = en) {
	  en = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptionProperties(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_EncryptedData) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_EncryptedData_s* zx_NEW_xenc_EncryptedData(struct zx_ctx* c)
{
  struct zx_xenc_EncryptedData_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptedData_s);
  x->gg.g.tok = zx_xenc_EncryptedData_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_EncryptedData) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptionMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_CipherData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptionProperties(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_EncryptedData) */

int zx_WALK_WO_xenc_EncryptedData(struct zx_ctx* c, struct zx_xenc_EncryptedData_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_EncryptedKey_s
#define EL_NS     xenc
#define EL_TAG    EncryptedKey

/* FUNC(zx_DUP_STRS_xenc_EncryptedKey) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->Type);
  zx_dup_attr(c, x->MimeType);
  zx_dup_attr(c, x->Encoding);
  zx_dup_attr(c, x->Recipient);

  {
      struct zx_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptionMethod(c, e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_KeyInfo(c, e);
  }
  {
      struct zx_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_CipherData(c, e);
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptionProperties(c, e);
  }
  {
      struct zx_xenc_ReferenceList_s* e;
      for (e = x->ReferenceList; e; e = (struct zx_xenc_ReferenceList_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_ReferenceList(c, e);
  }
  zx_dup_strs_simple_elems(c, x->CarriedKeyName);

}

/* FUNC(zx_DEEP_CLONE_xenc_EncryptedKey) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_EncryptedKey_s* zx_DEEP_CLONE_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, int dup_strs)
{
  x = (struct zx_xenc_EncryptedKey_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_EncryptedKey_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);
  x->Type = zx_clone_attr(c, x->Type);
  x->MimeType = zx_clone_attr(c, x->MimeType);
  x->Encoding = zx_clone_attr(c, x->Encoding);
  x->Recipient = zx_clone_attr(c, x->Recipient);

  {
      struct zx_xenc_EncryptionMethod_s* e;
      struct zx_xenc_EncryptionMethod_s* en;
      struct zx_xenc_EncryptionMethod_s* enn;
      for (enn = 0, e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptionMethod(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      struct zx_ds_KeyInfo_s* en;
      struct zx_ds_KeyInfo_s* enn;
      for (enn = 0, e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_KeyInfo(c, e, dup_strs);
	  if (!enn)
	      x->KeyInfo = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_CipherData_s* e;
      struct zx_xenc_CipherData_s* en;
      struct zx_xenc_CipherData_s* enn;
      for (enn = 0, e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_CipherData(c, e, dup_strs);
	  if (!enn)
	      x->CipherData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      struct zx_xenc_EncryptionProperties_s* en;
      struct zx_xenc_EncryptionProperties_s* enn;
      for (enn = 0, e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptionProperties(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionProperties = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_ReferenceList_s* e;
      struct zx_xenc_ReferenceList_s* en;
      struct zx_xenc_ReferenceList_s* enn;
      for (enn = 0, e = x->ReferenceList; e; e = (struct zx_xenc_ReferenceList_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_ReferenceList(c, e, dup_strs);
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

/* FUNC(zx_FREE_xenc_EncryptedKey) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);
  zx_free_attr(c, x->Type, free_strs);
  zx_free_attr(c, x->MimeType, free_strs);
  zx_free_attr(c, x->Encoding, free_strs);
  zx_free_attr(c, x->Recipient, free_strs);

  {
      struct zx_xenc_EncryptionMethod_s* e;
      struct zx_xenc_EncryptionMethod_s* en;
      for (e = x->EncryptionMethod; e; e = en) {
	  en = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptionMethod(c, e, free_strs);
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      struct zx_ds_KeyInfo_s* en;
      for (e = x->KeyInfo; e; e = en) {
	  en = (struct zx_ds_KeyInfo_s*)e->gg.g.n;
	  zx_FREE_ds_KeyInfo(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_CipherData_s* e;
      struct zx_xenc_CipherData_s* en;
      for (e = x->CipherData; e; e = en) {
	  en = (struct zx_xenc_CipherData_s*)e->gg.g.n;
	  zx_FREE_xenc_CipherData(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      struct zx_xenc_EncryptionProperties_s* en;
      for (e = x->EncryptionProperties; e; e = en) {
	  en = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptionProperties(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_ReferenceList_s* e;
      struct zx_xenc_ReferenceList_s* en;
      for (e = x->ReferenceList; e; e = en) {
	  en = (struct zx_xenc_ReferenceList_s*)e->gg.g.n;
	  zx_FREE_xenc_ReferenceList(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->CarriedKeyName, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_EncryptedKey) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_EncryptedKey_s* zx_NEW_xenc_EncryptedKey(struct zx_ctx* c)
{
  struct zx_xenc_EncryptedKey_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptedKey_s);
  x->gg.g.tok = zx_xenc_EncryptedKey_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_EncryptedKey) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_EncryptionMethod_s* e;
      for (e = x->EncryptionMethod; e; e = (struct zx_xenc_EncryptionMethod_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptionMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_KeyInfo(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_CipherData_s* e;
      for (e = x->CipherData; e; e = (struct zx_xenc_CipherData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_CipherData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_EncryptionProperties_s* e;
      for (e = x->EncryptionProperties; e; e = (struct zx_xenc_EncryptionProperties_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptionProperties(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_ReferenceList_s* e;
      for (e = x->ReferenceList; e; e = (struct zx_xenc_ReferenceList_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_ReferenceList(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->CarriedKeyName, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_EncryptedKey) */

int zx_WALK_WO_xenc_EncryptedKey(struct zx_ctx* c, struct zx_xenc_EncryptedKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_EncryptionMethod_s
#define EL_NS     xenc
#define EL_TAG    EncryptionMethod

/* FUNC(zx_DUP_STRS_xenc_EncryptionMethod) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Algorithm);

  zx_dup_strs_simple_elems(c, x->KeySize);
  zx_dup_strs_simple_elems(c, x->OAEPparams);

}

/* FUNC(zx_DEEP_CLONE_xenc_EncryptionMethod) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_EncryptionMethod_s* zx_DEEP_CLONE_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, int dup_strs)
{
  x = (struct zx_xenc_EncryptionMethod_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_EncryptionMethod_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Algorithm = zx_clone_attr(c, x->Algorithm);

  x->KeySize = zx_deep_clone_simple_elems(c,x->KeySize, dup_strs);
  x->OAEPparams = zx_deep_clone_simple_elems(c,x->OAEPparams, dup_strs);

  return x;
}

/* FUNC(zx_FREE_xenc_EncryptionMethod) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Algorithm, free_strs);

  zx_free_simple_elems(c, x->KeySize, free_strs);
  zx_free_simple_elems(c, x->OAEPparams, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_EncryptionMethod) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_EncryptionMethod_s* zx_NEW_xenc_EncryptionMethod(struct zx_ctx* c)
{
  struct zx_xenc_EncryptionMethod_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptionMethod_s);
  x->gg.g.tok = zx_xenc_EncryptionMethod_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_EncryptionMethod) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_xenc_EncryptionMethod) */

int zx_WALK_WO_xenc_EncryptionMethod(struct zx_ctx* c, struct zx_xenc_EncryptionMethod_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_EncryptionProperties_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperties

/* FUNC(zx_DUP_STRS_xenc_EncryptionProperties) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  {
      struct zx_xenc_EncryptionProperty_s* e;
      for (e = x->EncryptionProperty; e; e = (struct zx_xenc_EncryptionProperty_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_EncryptionProperty(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xenc_EncryptionProperties) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_EncryptionProperties_s* zx_DEEP_CLONE_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, int dup_strs)
{
  x = (struct zx_xenc_EncryptionProperties_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_EncryptionProperties_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  {
      struct zx_xenc_EncryptionProperty_s* e;
      struct zx_xenc_EncryptionProperty_s* en;
      struct zx_xenc_EncryptionProperty_s* enn;
      for (enn = 0, e = x->EncryptionProperty; e; e = (struct zx_xenc_EncryptionProperty_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_EncryptionProperty(c, e, dup_strs);
	  if (!enn)
	      x->EncryptionProperty = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_xenc_EncryptionProperties) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  {
      struct zx_xenc_EncryptionProperty_s* e;
      struct zx_xenc_EncryptionProperty_s* en;
      for (e = x->EncryptionProperty; e; e = en) {
	  en = (struct zx_xenc_EncryptionProperty_s*)e->gg.g.n;
	  zx_FREE_xenc_EncryptionProperty(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_EncryptionProperties) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_EncryptionProperties_s* zx_NEW_xenc_EncryptionProperties(struct zx_ctx* c)
{
  struct zx_xenc_EncryptionProperties_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptionProperties_s);
  x->gg.g.tok = zx_xenc_EncryptionProperties_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_EncryptionProperties) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_EncryptionProperty_s* e;
      for (e = x->EncryptionProperty; e; e = (struct zx_xenc_EncryptionProperty_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_EncryptionProperty(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_EncryptionProperties) */

int zx_WALK_WO_xenc_EncryptionProperties(struct zx_ctx* c, struct zx_xenc_EncryptionProperties_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_EncryptionProperty_s
#define EL_NS     xenc
#define EL_TAG    EncryptionProperty

/* FUNC(zx_DUP_STRS_xenc_EncryptionProperty) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Target);
  zx_dup_attr(c, x->Id);


}

/* FUNC(zx_DEEP_CLONE_xenc_EncryptionProperty) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_EncryptionProperty_s* zx_DEEP_CLONE_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, int dup_strs)
{
  x = (struct zx_xenc_EncryptionProperty_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_EncryptionProperty_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Target = zx_clone_attr(c, x->Target);
  x->Id = zx_clone_attr(c, x->Id);


  return x;
}

/* FUNC(zx_FREE_xenc_EncryptionProperty) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Target, free_strs);
  zx_free_attr(c, x->Id, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_EncryptionProperty) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_EncryptionProperty_s* zx_NEW_xenc_EncryptionProperty(struct zx_ctx* c)
{
  struct zx_xenc_EncryptionProperty_s* x = ZX_ZALLOC(c, struct zx_xenc_EncryptionProperty_s);
  x->gg.g.tok = zx_xenc_EncryptionProperty_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_EncryptionProperty) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_xenc_EncryptionProperty) */

int zx_WALK_WO_xenc_EncryptionProperty(struct zx_ctx* c, struct zx_xenc_EncryptionProperty_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_KeyReference_s
#define EL_NS     xenc
#define EL_TAG    KeyReference

/* FUNC(zx_DUP_STRS_xenc_KeyReference) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->URI);


}

/* FUNC(zx_DEEP_CLONE_xenc_KeyReference) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_KeyReference_s* zx_DEEP_CLONE_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, int dup_strs)
{
  x = (struct zx_xenc_KeyReference_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_KeyReference_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->URI = zx_clone_attr(c, x->URI);


  return x;
}

/* FUNC(zx_FREE_xenc_KeyReference) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->URI, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_KeyReference) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_KeyReference_s* zx_NEW_xenc_KeyReference(struct zx_ctx* c)
{
  struct zx_xenc_KeyReference_s* x = ZX_ZALLOC(c, struct zx_xenc_KeyReference_s);
  x->gg.g.tok = zx_xenc_KeyReference_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_KeyReference) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_xenc_KeyReference) */

int zx_WALK_WO_xenc_KeyReference(struct zx_ctx* c, struct zx_xenc_KeyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_OriginatorKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    OriginatorKeyInfo

/* FUNC(zx_DUP_STRS_xenc_OriginatorKeyInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  zx_dup_strs_simple_elems(c, x->KeyName);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_KeyValue(c, e);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_RetrievalMethod(c, e);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_X509Data(c, e);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_PGPData(c, e);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_SPKIData(c, e);
  }
  zx_dup_strs_simple_elems(c, x->MgmtData);

}

/* FUNC(zx_DEEP_CLONE_xenc_OriginatorKeyInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_OriginatorKeyInfo_s* zx_DEEP_CLONE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, int dup_strs)
{
  x = (struct zx_xenc_OriginatorKeyInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_OriginatorKeyInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  x->KeyName = zx_deep_clone_simple_elems(c,x->KeyName, dup_strs);
  {
      struct zx_ds_KeyValue_s* e;
      struct zx_ds_KeyValue_s* en;
      struct zx_ds_KeyValue_s* enn;
      for (enn = 0, e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_KeyValue(c, e, dup_strs);
	  if (!enn)
	      x->KeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      struct zx_ds_RetrievalMethod_s* en;
      struct zx_ds_RetrievalMethod_s* enn;
      for (enn = 0, e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_RetrievalMethod(c, e, dup_strs);
	  if (!enn)
	      x->RetrievalMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      struct zx_ds_X509Data_s* en;
      struct zx_ds_X509Data_s* enn;
      for (enn = 0, e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_X509Data(c, e, dup_strs);
	  if (!enn)
	      x->X509Data = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      struct zx_ds_PGPData_s* en;
      struct zx_ds_PGPData_s* enn;
      for (enn = 0, e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_PGPData(c, e, dup_strs);
	  if (!enn)
	      x->PGPData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      struct zx_ds_SPKIData_s* en;
      struct zx_ds_SPKIData_s* enn;
      for (enn = 0, e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_SPKIData(c, e, dup_strs);
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

/* FUNC(zx_FREE_xenc_OriginatorKeyInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  zx_free_simple_elems(c, x->KeyName, free_strs);
  {
      struct zx_ds_KeyValue_s* e;
      struct zx_ds_KeyValue_s* en;
      for (e = x->KeyValue; e; e = en) {
	  en = (struct zx_ds_KeyValue_s*)e->gg.g.n;
	  zx_FREE_ds_KeyValue(c, e, free_strs);
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      struct zx_ds_RetrievalMethod_s* en;
      for (e = x->RetrievalMethod; e; e = en) {
	  en = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n;
	  zx_FREE_ds_RetrievalMethod(c, e, free_strs);
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      struct zx_ds_X509Data_s* en;
      for (e = x->X509Data; e; e = en) {
	  en = (struct zx_ds_X509Data_s*)e->gg.g.n;
	  zx_FREE_ds_X509Data(c, e, free_strs);
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      struct zx_ds_PGPData_s* en;
      for (e = x->PGPData; e; e = en) {
	  en = (struct zx_ds_PGPData_s*)e->gg.g.n;
	  zx_FREE_ds_PGPData(c, e, free_strs);
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      struct zx_ds_SPKIData_s* en;
      for (e = x->SPKIData; e; e = en) {
	  en = (struct zx_ds_SPKIData_s*)e->gg.g.n;
	  zx_FREE_ds_SPKIData(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->MgmtData, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_OriginatorKeyInfo) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_OriginatorKeyInfo_s* zx_NEW_xenc_OriginatorKeyInfo(struct zx_ctx* c)
{
  struct zx_xenc_OriginatorKeyInfo_s* x = ZX_ZALLOC(c, struct zx_xenc_OriginatorKeyInfo_s);
  x->gg.g.tok = zx_xenc_OriginatorKeyInfo_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_OriginatorKeyInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_KeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_RetrievalMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_X509Data(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_PGPData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_SPKIData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->MgmtData, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_OriginatorKeyInfo) */

int zx_WALK_WO_xenc_OriginatorKeyInfo(struct zx_ctx* c, struct zx_xenc_OriginatorKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_RecipientKeyInfo_s
#define EL_NS     xenc
#define EL_TAG    RecipientKeyInfo

/* FUNC(zx_DUP_STRS_xenc_RecipientKeyInfo) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->Id);

  zx_dup_strs_simple_elems(c, x->KeyName);
  {
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_KeyValue(c, e);
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_RetrievalMethod(c, e);
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_X509Data(c, e);
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_PGPData(c, e);
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_SPKIData(c, e);
  }
  zx_dup_strs_simple_elems(c, x->MgmtData);

}

/* FUNC(zx_DEEP_CLONE_xenc_RecipientKeyInfo) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_RecipientKeyInfo_s* zx_DEEP_CLONE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, int dup_strs)
{
  x = (struct zx_xenc_RecipientKeyInfo_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_RecipientKeyInfo_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->Id = zx_clone_attr(c, x->Id);

  x->KeyName = zx_deep_clone_simple_elems(c,x->KeyName, dup_strs);
  {
      struct zx_ds_KeyValue_s* e;
      struct zx_ds_KeyValue_s* en;
      struct zx_ds_KeyValue_s* enn;
      for (enn = 0, e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_KeyValue(c, e, dup_strs);
	  if (!enn)
	      x->KeyValue = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      struct zx_ds_RetrievalMethod_s* en;
      struct zx_ds_RetrievalMethod_s* enn;
      for (enn = 0, e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_RetrievalMethod(c, e, dup_strs);
	  if (!enn)
	      x->RetrievalMethod = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      struct zx_ds_X509Data_s* en;
      struct zx_ds_X509Data_s* enn;
      for (enn = 0, e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_X509Data(c, e, dup_strs);
	  if (!enn)
	      x->X509Data = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      struct zx_ds_PGPData_s* en;
      struct zx_ds_PGPData_s* enn;
      for (enn = 0, e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_PGPData(c, e, dup_strs);
	  if (!enn)
	      x->PGPData = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      struct zx_ds_SPKIData_s* en;
      struct zx_ds_SPKIData_s* enn;
      for (enn = 0, e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_SPKIData(c, e, dup_strs);
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

/* FUNC(zx_FREE_xenc_RecipientKeyInfo) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->Id, free_strs);

  zx_free_simple_elems(c, x->KeyName, free_strs);
  {
      struct zx_ds_KeyValue_s* e;
      struct zx_ds_KeyValue_s* en;
      for (e = x->KeyValue; e; e = en) {
	  en = (struct zx_ds_KeyValue_s*)e->gg.g.n;
	  zx_FREE_ds_KeyValue(c, e, free_strs);
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      struct zx_ds_RetrievalMethod_s* en;
      for (e = x->RetrievalMethod; e; e = en) {
	  en = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n;
	  zx_FREE_ds_RetrievalMethod(c, e, free_strs);
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      struct zx_ds_X509Data_s* en;
      for (e = x->X509Data; e; e = en) {
	  en = (struct zx_ds_X509Data_s*)e->gg.g.n;
	  zx_FREE_ds_X509Data(c, e, free_strs);
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      struct zx_ds_PGPData_s* en;
      for (e = x->PGPData; e; e = en) {
	  en = (struct zx_ds_PGPData_s*)e->gg.g.n;
	  zx_FREE_ds_PGPData(c, e, free_strs);
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      struct zx_ds_SPKIData_s* en;
      for (e = x->SPKIData; e; e = en) {
	  en = (struct zx_ds_SPKIData_s*)e->gg.g.n;
	  zx_FREE_ds_SPKIData(c, e, free_strs);
      }
  }
  zx_free_simple_elems(c, x->MgmtData, free_strs);


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_RecipientKeyInfo) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_RecipientKeyInfo_s* zx_NEW_xenc_RecipientKeyInfo(struct zx_ctx* c)
{
  struct zx_xenc_RecipientKeyInfo_s* x = ZX_ZALLOC(c, struct zx_xenc_RecipientKeyInfo_s);
  x->gg.g.tok = zx_xenc_RecipientKeyInfo_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_RecipientKeyInfo) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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
      struct zx_ds_KeyValue_s* e;
      for (e = x->KeyValue; e; e = (struct zx_ds_KeyValue_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_KeyValue(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_RetrievalMethod_s* e;
      for (e = x->RetrievalMethod; e; e = (struct zx_ds_RetrievalMethod_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_RetrievalMethod(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_X509Data_s* e;
      for (e = x->X509Data; e; e = (struct zx_ds_X509Data_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_X509Data(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_PGPData_s* e;
      for (e = x->PGPData; e; e = (struct zx_ds_PGPData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_PGPData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_ds_SPKIData_s* e;
      for (e = x->SPKIData; e; e = (struct zx_ds_SPKIData_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_SPKIData(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  ret = zx_walk_so_simple_elems(c, x->MgmtData, ctx, callback);
  if (ret)
    return ret;

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_RecipientKeyInfo) */

int zx_WALK_WO_xenc_RecipientKeyInfo(struct zx_ctx* c, struct zx_xenc_RecipientKeyInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_ReferenceList_s
#define EL_NS     xenc
#define EL_TAG    ReferenceList

/* FUNC(zx_DUP_STRS_xenc_ReferenceList) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_DataReference_s* e;
      for (e = x->DataReference; e; e = (struct zx_xenc_DataReference_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_DataReference(c, e);
  }
  {
      struct zx_xenc_KeyReference_s* e;
      for (e = x->KeyReference; e; e = (struct zx_xenc_KeyReference_s*)e->gg.g.n)
	  zx_DUP_STRS_xenc_KeyReference(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xenc_ReferenceList) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_ReferenceList_s* zx_DEEP_CLONE_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, int dup_strs)
{
  x = (struct zx_xenc_ReferenceList_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_ReferenceList_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_DataReference_s* e;
      struct zx_xenc_DataReference_s* en;
      struct zx_xenc_DataReference_s* enn;
      for (enn = 0, e = x->DataReference; e; e = (struct zx_xenc_DataReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_DataReference(c, e, dup_strs);
	  if (!enn)
	      x->DataReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_xenc_KeyReference_s* e;
      struct zx_xenc_KeyReference_s* en;
      struct zx_xenc_KeyReference_s* enn;
      for (enn = 0, e = x->KeyReference; e; e = (struct zx_xenc_KeyReference_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_xenc_KeyReference(c, e, dup_strs);
	  if (!enn)
	      x->KeyReference = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_xenc_ReferenceList) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_xenc_DataReference_s* e;
      struct zx_xenc_DataReference_s* en;
      for (e = x->DataReference; e; e = en) {
	  en = (struct zx_xenc_DataReference_s*)e->gg.g.n;
	  zx_FREE_xenc_DataReference(c, e, free_strs);
      }
  }
  {
      struct zx_xenc_KeyReference_s* e;
      struct zx_xenc_KeyReference_s* en;
      for (e = x->KeyReference; e; e = en) {
	  en = (struct zx_xenc_KeyReference_s*)e->gg.g.n;
	  zx_FREE_xenc_KeyReference(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_ReferenceList) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_ReferenceList_s* zx_NEW_xenc_ReferenceList(struct zx_ctx* c)
{
  struct zx_xenc_ReferenceList_s* x = ZX_ZALLOC(c, struct zx_xenc_ReferenceList_s);
  x->gg.g.tok = zx_xenc_ReferenceList_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_ReferenceList) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_xenc_DataReference_s* e;
      for (e = x->DataReference; e; e = (struct zx_xenc_DataReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_DataReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_xenc_KeyReference_s* e;
      for (e = x->KeyReference; e; e = (struct zx_xenc_KeyReference_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_xenc_KeyReference(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_ReferenceList) */

int zx_WALK_WO_xenc_ReferenceList(struct zx_ctx* c, struct zx_xenc_ReferenceList_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_xenc_Transforms_s
#define EL_NS     xenc
#define EL_TAG    Transforms

/* FUNC(zx_DUP_STRS_xenc_Transforms) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n)
	  zx_DUP_STRS_ds_Transform(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_xenc_Transforms) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_xenc_Transforms_s* zx_DEEP_CLONE_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, int dup_strs)
{
  x = (struct zx_xenc_Transforms_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_xenc_Transforms_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_Transform_s* e;
      struct zx_ds_Transform_s* en;
      struct zx_ds_Transform_s* enn;
      for (enn = 0, e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_ds_Transform(c, e, dup_strs);
	  if (!enn)
	      x->Transform = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_xenc_Transforms) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_ds_Transform_s* e;
      struct zx_ds_Transform_s* en;
      for (e = x->Transform; e; e = en) {
	  en = (struct zx_ds_Transform_s*)e->gg.g.n;
	  zx_FREE_ds_Transform(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_xenc_Transforms) */

/* Trivial allocator/constructor for the datatype. */

struct zx_xenc_Transforms_s* zx_NEW_xenc_Transforms(struct zx_ctx* c)
{
  struct zx_xenc_Transforms_s* x = ZX_ZALLOC(c, struct zx_xenc_Transforms_s);
  x->gg.g.tok = zx_xenc_Transforms_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_xenc_Transforms) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_ds_Transform_s* e;
      for (e = x->Transform; e; e = (struct zx_ds_Transform_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_ds_Transform(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_xenc_Transforms) */

int zx_WALK_WO_xenc_Transforms(struct zx_ctx* c, struct zx_xenc_Transforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_root_s
#define EL_NS     
#define EL_TAG    root

/* FUNC(zx_DUP_STRS_root) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_root(struct zx_ctx* c, struct zx_root_s* x)
{
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  zx_DUP_STRS_sa_Assertion(c, e);
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_sp_AuthnRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_AuthnRequest(c, e);
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_Response(c, e);
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_LogoutRequest(c, e);
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_LogoutResponse(c, e);
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ManageNameIDRequest(c, e);
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n)
	  zx_DUP_STRS_sp_ManageNameIDResponse(c, e);
  }
  {
      struct zx_se_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zx_se_Envelope_s*)e->gg.g.n)
	  zx_DUP_STRS_se_Envelope(c, e);
  }

}

/* FUNC(zx_DEEP_CLONE_root) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_root_s* zx_DEEP_CLONE_root(struct zx_ctx* c, struct zx_root_s* x, int dup_strs)
{
  x = (struct zx_root_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_root_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      struct zx_sa_Assertion_s* enn;
      for (enn = 0, e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sa_Assertion(c, e, dup_strs);
	  if (!enn)
	      x->Assertion = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      struct zx_sp_AuthnRequest_s* en;
      struct zx_sp_AuthnRequest_s* enn;
      for (enn = 0, e = x->AuthnRequest; e; e = (struct zx_sp_AuthnRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_AuthnRequest(c, e, dup_strs);
	  if (!enn)
	      x->AuthnRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_Response_s* e;
      struct zx_sp_Response_s* en;
      struct zx_sp_Response_s* enn;
      for (enn = 0, e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_Response(c, e, dup_strs);
	  if (!enn)
	      x->Response = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      struct zx_sp_LogoutRequest_s* en;
      struct zx_sp_LogoutRequest_s* enn;
      for (enn = 0, e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_LogoutRequest(c, e, dup_strs);
	  if (!enn)
	      x->LogoutRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      struct zx_sp_LogoutResponse_s* en;
      struct zx_sp_LogoutResponse_s* enn;
      for (enn = 0, e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_LogoutResponse(c, e, dup_strs);
	  if (!enn)
	      x->LogoutResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      struct zx_sp_ManageNameIDRequest_s* en;
      struct zx_sp_ManageNameIDRequest_s* enn;
      for (enn = 0, e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ManageNameIDRequest(c, e, dup_strs);
	  if (!enn)
	      x->ManageNameIDRequest = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      struct zx_sp_ManageNameIDResponse_s* en;
      struct zx_sp_ManageNameIDResponse_s* enn;
      for (enn = 0, e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_sp_ManageNameIDResponse(c, e, dup_strs);
	  if (!enn)
	      x->ManageNameIDResponse = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }
  {
      struct zx_se_Envelope_s* e;
      struct zx_se_Envelope_s* en;
      struct zx_se_Envelope_s* enn;
      for (enn = 0, e = x->Envelope; e; e = (struct zx_se_Envelope_s*)e->gg.g.n) {
	  en = zx_DEEP_CLONE_se_Envelope(c, e, dup_strs);
	  if (!enn)
	      x->Envelope = en;
	  else
	      enn->gg.g.n = &en->gg.g;
	  enn = en;
      }
  }

  return x;
}

/* FUNC(zx_FREE_root) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_root(struct zx_ctx* c, struct zx_root_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */


  {
      struct zx_sa_Assertion_s* e;
      struct zx_sa_Assertion_s* en;
      for (e = x->Assertion; e; e = en) {
	  en = (struct zx_sa_Assertion_s*)e->gg.g.n;
	  zx_FREE_sa_Assertion(c, e, free_strs);
      }
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      struct zx_sp_AuthnRequest_s* en;
      for (e = x->AuthnRequest; e; e = en) {
	  en = (struct zx_sp_AuthnRequest_s*)e->gg.g.n;
	  zx_FREE_sp_AuthnRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_Response_s* e;
      struct zx_sp_Response_s* en;
      for (e = x->Response; e; e = en) {
	  en = (struct zx_sp_Response_s*)e->gg.g.n;
	  zx_FREE_sp_Response(c, e, free_strs);
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      struct zx_sp_LogoutRequest_s* en;
      for (e = x->LogoutRequest; e; e = en) {
	  en = (struct zx_sp_LogoutRequest_s*)e->gg.g.n;
	  zx_FREE_sp_LogoutRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      struct zx_sp_LogoutResponse_s* en;
      for (e = x->LogoutResponse; e; e = en) {
	  en = (struct zx_sp_LogoutResponse_s*)e->gg.g.n;
	  zx_FREE_sp_LogoutResponse(c, e, free_strs);
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      struct zx_sp_ManageNameIDRequest_s* en;
      for (e = x->ManageNameIDRequest; e; e = en) {
	  en = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n;
	  zx_FREE_sp_ManageNameIDRequest(c, e, free_strs);
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      struct zx_sp_ManageNameIDResponse_s* en;
      for (e = x->ManageNameIDResponse; e; e = en) {
	  en = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n;
	  zx_FREE_sp_ManageNameIDResponse(c, e, free_strs);
      }
  }
  {
      struct zx_se_Envelope_s* e;
      struct zx_se_Envelope_s* en;
      for (e = x->Envelope; e; e = en) {
	  en = (struct zx_se_Envelope_s*)e->gg.g.n;
	  zx_FREE_se_Envelope(c, e, free_strs);
      }
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_root) */

/* Trivial allocator/constructor for the datatype. */

struct zx_root_s* zx_NEW_root(struct zx_ctx* c)
{
  struct zx_root_s* x = ZX_ZALLOC(c, struct zx_root_s);
  x->gg.g.tok = zx_root_ELEM;
  return x;
}

/* FUNC(zx_WALK_SO_root) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_root(struct zx_ctx* c, struct zx_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  {
      struct zx_sa_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sa_Assertion(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_AuthnRequest_s* e;
      for (e = x->AuthnRequest; e; e = (struct zx_sp_AuthnRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_AuthnRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_Response_s* e;
      for (e = x->Response; e; e = (struct zx_sp_Response_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_Response(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_LogoutRequest_s* e;
      for (e = x->LogoutRequest; e; e = (struct zx_sp_LogoutRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_LogoutRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_LogoutResponse_s* e;
      for (e = x->LogoutResponse; e; e = (struct zx_sp_LogoutResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_LogoutResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_ManageNameIDRequest_s* e;
      for (e = x->ManageNameIDRequest; e; e = (struct zx_sp_ManageNameIDRequest_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ManageNameIDRequest(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_sp_ManageNameIDResponse_s* e;
      for (e = x->ManageNameIDResponse; e; e = (struct zx_sp_ManageNameIDResponse_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_sp_ManageNameIDResponse(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }
  {
      struct zx_se_Envelope_s* e;
      for (e = x->Envelope; e; e = (struct zx_se_Envelope_s*)e->gg.g.n) {
	  ret = zx_WALK_SO_se_Envelope(c, e, ctx, callback);
	  if (ret)
	      return ret;
      }
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_root) */

int zx_WALK_WO_root(struct zx_ctx* c, struct zx_root_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}




#ifdef EL_NAME
#undef EL_NAME
#endif
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

/* FUNC(zx_DUP_STRS_simple_elem) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

void zx_DUP_STRS_simple_elem(struct zx_ctx* c, struct zx_elem_s* x)
{
  zx_dup_strs_common(c, x);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_simple_elem) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

struct zx_elem_s* zx_DEEP_CLONE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs)
{
  x = (struct zx_elem_s*)zx_clone_elem_common(c, x, sizeof(struct zx_elem_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_FREE_simple_elem) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

void zx_FREE_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, int free_strs)
{
  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, x, free_strs); 
}

/* FUNC(zx_NEW_simple_elem) */

/* Trivial allocator/constructor for the datatype. */

struct zx_elem_s* zx_NEW_simple_elem(struct zx_ctx* c, int toke)
{
  struct zx_elem_s* x = ZX_ZALLOC(c, struct zx_elem_s);
  x->g.tok = toke;
  return x;
}

/* FUNC(zx_WALK_SO_simple_elem) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
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

/* FUNC(zx_WALK_WO_simple_elem) */

int zx_WALK_WO_simple_elem(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}


